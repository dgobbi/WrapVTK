/*=========================================================================

  Program:   WrapVTK
  Module:    vtkWrapXML.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

  Copyright (c) 2008, Queen's University, Kingston, Ontario, Canada
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/*
 The vtkWrapXML program will read VTK header files and produce an XML
 representation of the interface to the VTK classes.  The main entry
 point in this file is  vtkParseOutput(FILE *fp, FileInfo *data)
 where "FILE *fp" is the output file handle and "FileInfo *data" is
 the data structure that vtkParse.tab.c creates from the header.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "vtkParse.h"
#include "vtkParseUtils.h"
#include "vtkParseVariables.h"
#include "vtkParseHierarchy.h"
#include "vtkConfigure.h"

/* the indentation string, default is two spaces */
#define VTKXML_INDENT "  "

/* ----- name sorting functions ----- */

/* swap integer item "i" with item "j" */
#define vtkWrapXML_Swap(arr, i, j) \
{ \
  int temp = arr[i]; \
  arr[i] = arr[j]; \
  arr[j] = temp; \
}

/* sort functions lexically between indices "start" and "ends" */
static void vtkWrapXML_SortMethods(
  ClassInfo *data, int functionList[], int start, int ends)
{
  int i;
  int location = start;

  if (ends <= start)
    {
    return;
    }
  for (i = start; i < ends; i++)
    {
    if (strcmp(data->Functions[functionList[ends]]->Name,
               data->Functions[functionList[i]]->Name) > 0)
      {
      vtkWrapXML_Swap(functionList, location, i);
      location++;
      }
    }
  vtkWrapXML_Swap(functionList, location, ends);
  vtkWrapXML_SortMethods(data, functionList, start, location - 1);
  vtkWrapXML_SortMethods(data, functionList, location + 1, ends);
}

/* sort variables lexically between indices "start" and "ends" */
static void vtkWrapXML_SortVariables(
  ClassVariables *vars, int variableList[], int start, int ends)
{
  int i;
  int location = start;

  if (ends <= start)
    {
    return;
    }
  for (i = start; i < ends; i++)
    {
    if (strcmp(vars->Variables[variableList[ends]].Name,
               vars->Variables[variableList[i]].Name) > 0)
      {
      vtkWrapXML_Swap(variableList, location, i);
      location++;
      }
    }
  vtkWrapXML_Swap(variableList, location, ends);
  vtkWrapXML_SortVariables(vars, variableList, start, location - 1);
  vtkWrapXML_SortVariables(vars, variableList, location + 1, ends);
}

/* ----- XML utility functions ----- */

/* indent to the specified indentation level (max 5 levels) */
static const char *indent(int indentation)
{
  static const char *indentString[6] = {
    "",
    VTKXML_INDENT,
    VTKXML_INDENT VTKXML_INDENT,
    VTKXML_INDENT VTKXML_INDENT VTKXML_INDENT,
    VTKXML_INDENT VTKXML_INDENT VTKXML_INDENT VTKXML_INDENT,
    VTKXML_INDENT VTKXML_INDENT VTKXML_INDENT VTKXML_INDENT VTKXML_INDENT,
  };

  return indentString[indentation % 6];
}

/* convert special characters in a string into their escape codes,
 * so that the string can be quoted in an xml file (the specified
 * maxlen must be at least 32 chars)*/
static const char *vtkWrapXML_Quote(const char *comment, int maxlen)
{
  static char *result = 0;
  static int oldmaxlen = 0;
  int i, j, n;

  if (maxlen > oldmaxlen)
    {
    if (result)
      {
      free(result);
      }
    result = (char *)malloc((size_t)(maxlen+1));
    oldmaxlen = maxlen;
    }

  if (comment == NULL)
    {
    return "";
    }

  j = 0;

  n = (int)strlen(comment);
  for (i = 0; i < n; i++)
    {
    if (comment[i] == '<')
      {
      strcpy(&result[j],"&lt;");
      j += 4;
      }
    else if (comment[i] == '>')
      {
      strcpy(&result[j],"&gt;");
      j += 4;
      }
    else if (comment[i] == '&')
      {
      strcpy(&result[j],"&amp;");
      j += 5;
      }
    else if (comment[i] == '\"')
      {
      strcpy(&result[j],"&quot;");
      j += 6;
      }
    else if (comment[i] == '\'')
      {
      strcpy(&result[j],"&apos;");
      j += 6;
      }
    else if (isprint(comment[i]))
      {
      result[j] = comment[i];
      j++;
      }
    else if (isspace(comment[i]))
      { /* also copy non-printing characters */
      result[j] = comment[i];
      j++;
      }

    /* add trailing ellipsis if too long */
    if (j >= maxlen - 5)
      {
      sprintf(&result[j]," ...");
      j += (int)strlen(" ...");
      break;
      }
    }
  result[j] = '\0';

  return result;
}

/* print multi-line text at the specified indentation level. */
static void vtkWrapXML_MultiLineText(FILE *fp, const char *cp, int indentation)
{
  int i, j;
  char temp[512];

  for (i = 0; cp && cp[i] != '\0'; i++)
    {
    for (j = 0; j < 200 && cp[i] != '\0' && cp[i] != '\n'; j++)
      {
      temp[j] = cp[i++];
      }

    while (j > 0 &&
           (temp[j-1] == ' ' || temp[j-1] == '\t' || temp[j-1] == '\r'))
      {
      j--;
      }

    temp[j] = '\0';

    if (j > 0)
      {
      fprintf(fp, "%s%s\n", indent(indentation), vtkWrapXML_Quote(temp,500));
      }
    else
      {
      fprintf(fp, "\n");
      }
    }
}

/* Write out the class header */
void vtkWrapXML_ClassHeader(FILE *fp, ClassInfo *data, int indentation)
{
  int i = 0;
  int n;

  fprintf(fp, "%s<Class>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          vtkWrapXML_Quote(data->ClassName, 500));

  /* actually, vtk classes never have more than one superclass */
  n = data->NumberOfSuperClasses;
  for (i = 0; i < n && i < 1; i++)
    {
    fprintf(fp, "%s<Superclass>%s</Superclass>\n", indent(indentation),
            vtkWrapXML_Quote(data->SuperClasses[i], 500));
    }

  if (data->IsAbstract)
    {
    fprintf(fp, "%s<Flag>abstract</Flag>\n", indent(indentation));
    }
}

/* Write out the class footer */
void vtkWrapXML_ClassFooter(FILE *fp, ClassInfo *data, int indentation)
{
  fprintf(fp, "%s</Class>\n", indent(indentation));
}

/* Write out the documentation for the class */
void vtkWrapXML_ClassDoc(FILE *fp, FileInfo *data, int indentation)
{
  size_t n;
  char temp[500];
  const char *cp;

  fprintf(fp, "%s<Comment>\n", indent(indentation++));

  if (data->NameComment)
    {
    cp = data->NameComment;
    while (*cp == ' ')
      {
      cp++;
      }
    fprintf(fp, "%s .NAME %s\n", indent(indentation),
            vtkWrapXML_Quote(cp,500));
    }

  if (data->Description)
    {
    fprintf(fp, "\n%s .SECTION Description\n", indent(indentation));
    vtkWrapXML_MultiLineText(fp, data->Description, indentation);
    }

  if (data->Caveats && data->Caveats[0] != '\0')
    {
    fprintf(fp, "\n%s .SECTION Caveats\n", indent(indentation));
    vtkWrapXML_MultiLineText(fp, data->Caveats, indentation);
    }

  if (data->SeeAlso && data->SeeAlso[0] != '\0')
    {
    fprintf(fp, "\n%s .SECTION See also\n", indent(indentation));

    cp = data->SeeAlso;
    while(isspace(*cp))
      {
      cp++;
      }
    while(*cp)
      {
      n = 0;
      while(cp[n] && !isspace(cp[n]))
        {
        n++;
        }
      /* There might be another section in the See also */
      if (strncmp(cp, ".SECTION", 8) == 0)
        {
        fprintf(fp, "\n");

        while(cp > data->SeeAlso && isspace(*(cp - 1)) && *(cp - 1) != '\n')
          {
          cp--;
          }
        vtkWrapXML_MultiLineText(fp, cp, indentation);
        break;
        }

      if (n > 0 && n < 400)
        {
        strncpy(temp, cp, n);
        temp[n] = '\0';
        fprintf(fp,"%s %s\n", indent(indentation),
                vtkWrapXML_Quote(temp,500));
        }
      cp += n;
      while(isspace(*cp))
        {
        cp++;
        }
      }
    }
  fprintf(fp, "%s</Comment>\n", indent(--indentation));
}

/* Print out a type in XML format */
void vtkWrapXML_Type(
  FILE *fp, int type, const char *vtkclass, int count, int indentation)
{
  int j = 0;
  const char *cp;
  const char *dctr;

  if (vtkParse_TypeIsConst(type))
    {
    fprintf(fp, "%s<Dctr>const</Dctr>\n", indent(indentation));
    }

  fprintf(fp, "%s<Type>%s</Type>\n", indent(indentation),
          vtkWrapXML_Quote(vtkParse_BaseTypeAsString(type, vtkclass), 500));

  cp = vtkParse_IndirectionAsString(type);

  if (cp == 0)
    {
    fprintf(fp, "%s<Dctr>unrecognized</Dctr>\n", indent(indentation));
    return;
    }

  j = strlen(cp);

  while (j > 0)
    {
    dctr = "";

    do { j--; } while (j > 0 && cp[j] == ' ');

    if (j >= 4 && cp[j] == 't' && cp[j-1] == 's' && cp[j-2] == 'n' &&
        cp[j-3] == 'o' && cp[j-4] == 'c')
      {
      j -= 4;
      dctr = "const";
      }
    else if (cp[j] == '&')
      {
      dctr = "reference";
      }
    else if (cp[j] == '*')
      {
      dctr = "pointer";
      if (count > 0)
        {
        dctr = "array";
        }
      }

    fprintf(fp, "%s<Dctr>%s</Dctr>\n", indent(indentation), dctr);
    if (count)
      {
      fprintf(fp, "%s<Size>%i</Size>\n", indent(indentation), count);
      }
    }
}

/* Print out a function in XML format */
void vtkWrapXML_ClassMethod(
  FILE *fp, ClassInfo *data, FunctionInfo *func, int indentation)
{
  static const char *accessLevel[] = {"private", "public", "protected"};
  size_t i, n;
  int access;
  char temp[500];
  const char *cp;

  if (func->ArrayFailure)
    {
    return;
    }

  access = 0;
  if (func->IsPublic)
    {
    access = 1;
    }
  else if (func->IsProtected)
    {
    access = 2;
    }

  fprintf(fp, "%s<Method>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          vtkWrapXML_Quote(func->Name, 500));
  fprintf(fp, "%s<Access>%s</Access>\n", indent(indentation),
          accessLevel[access]);

  if (vtkParse_TypeIsStatic(func->ReturnType))
    {
    fprintf(fp, "%s<Flag>static</Flag>\n", indent(indentation));
    }

  if (func->IsPureVirtual)
    {
    fprintf(fp, "%s<Flag>pureVirtual</Flag>\n", indent(indentation));
    }

  if (func->IsLegacy)
    {
    fprintf(fp, "%s<Flag>legacy</Flag>\n", indent(indentation));
    }

  fprintf(fp, "%s<Signature>\n", indent(indentation++));

  cp = func->Signature;
  for (i = 0; i < 400 && cp && cp[i] != '\0' && cp[i] != ';'; i++)
    {
    temp[i] = cp[i];
    }
  temp[i] = '\0';

  fprintf(fp, "%s %s\n", indent(indentation), vtkWrapXML_Quote(temp, 500));

  fprintf(fp, "%s</Signature>\n", indent(--indentation));

  if (func->Comment)
    {
    fprintf(fp, "%s<Comment>\n", indent(indentation++));
    vtkWrapXML_MultiLineText(fp, func->Comment, indentation);
    fprintf(fp, "%s</Comment>\n", indent(--indentation));
    }

  if (data == NULL || !(strcmp(data->ClassName, func->Name) == 0 ||
      (func->Name[0] == '~' && strcmp(data->ClassName, &func->Name[1]) == 0)))
    {
    fprintf(fp, "%s<Return>\n", indent(indentation++));

    vtkWrapXML_Type(fp, func->ReturnType, func->ReturnClass,
                    (func->HaveHint ? func->HintSize : 0),
                    indentation);

    fprintf(fp, "%s</Return>\n", indent(--indentation));
    }

  n = func->NumberOfArguments;
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "%s<Arg>\n", indent(indentation++));

    vtkWrapXML_Type(fp, func->ArgTypes[i], func->ArgClasses[i],
                    func->ArgCounts[i], indentation);

    fprintf(fp, "%s</Arg>\n", indent(--indentation));
    }
  fprintf(fp, "%s</Method>\n", indent(--indentation));
}

/* print a bitfield of class variable access methods */
void vtkWrapXML_ClassVariableMethods(
  FILE *fp, unsigned int methodBitfield, int indentation)
{
  int i;
  unsigned int methodType;

  for (i = 0; i < 32; i++)
    {
    methodType = methodBitfield & (1U << i);
    if (methodType)
      {
      fprintf(fp, "%s<MethodType>%s</MethodType>\n", indent(indentation),
        vtkParseVariables_MethodTypeAsString(methodType));
      }
    }
}

/* Print out a variable in XML format */
void vtkWrapXML_ClassVariable(
  FILE *fp, VariableAttributes *var, int indentation)
{
  int i;

  fprintf(fp, "%s<Variable>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          var->Name);

  if (var->Comment)
    {
    fprintf(fp, "%s<Comment>\n", indent(indentation++));
    vtkWrapXML_MultiLineText(fp, var->Comment, indentation);
    fprintf(fp, "%s</Comment>\n", indent(--indentation));
    }

  vtkWrapXML_Type(fp, var->Type, var->ClassName, var->Count, indentation);

  if (var->EnumConstantNames)
    {
    fprintf(fp, "%s<Values>\n", indent(indentation++));
    for (i = 0; var->EnumConstantNames[i] != 0; i++)
      {
      fprintf(fp, "%s<Constant>%s</Constant>\n", indent(indentation),
              var->EnumConstantNames[i]);
      }
    fprintf(fp, "%s</Values>\n", indent(--indentation));
    }

  if (var->PublicMethods)
    {
    fprintf(fp, "%s<PublicMethods>\n", indent(indentation++));
    vtkWrapXML_ClassVariableMethods(fp, var->PublicMethods, indentation);
    fprintf(fp, "%s</PublicMethods>\n", indent(--indentation));
    }

  if (var->ProtectedMethods)
    {
    fprintf(fp, "%s<ProtectedMethods>\n", indent(indentation++));
    vtkWrapXML_ClassVariableMethods(fp, var->ProtectedMethods, indentation);
    fprintf(fp, "%s</ProtectedMethods>\n", indent(--indentation));
    }

  if (var->PrivateMethods)
    {
    fprintf(fp, "%s<PrivateMethods>\n", indent(indentation++));
    vtkWrapXML_ClassVariableMethods(fp, var->PrivateMethods, indentation);
    fprintf(fp, "%s</PrivateMethods>\n", indent(--indentation));
    }

  if (var->LegacyMethods)
    {
    fprintf(fp, "%s<LegacyMethods>\n", indent(indentation++));
    vtkWrapXML_ClassVariableMethods(fp, var->LegacyMethods, indentation);
    fprintf(fp, "%s</LegacyMethods>\n", indent(--indentation));
    }

  fprintf(fp, "%s</Variable>\n", indent(--indentation));
}

/* print information about all the methods in the class */
void vtkWrapXML_ClassMethods(
  FILE *fp, ClassInfo *data, int indentation)
{
  int i, n;
  int numFunctions;
  int *idList = (int *)malloc(sizeof(int)*data->NumberOfFunctions);

  /* create a list of function ids */
  numFunctions = data->NumberOfFunctions;
  n = 0;
  for (i = 0; i < numFunctions; i++)
    {
    if (data->Functions[i]->Name &&
        !data->Functions[i]->ArrayFailure)
      {
      idList[n++] = i;
      }
    }

  /* sort function id list based on function name */
  vtkWrapXML_SortMethods(data, idList, 0, n-1);

  fprintf(fp, "\n");
  fprintf(fp, "%s<Methods>\n", indent(indentation++));
  /* function handling code */
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "\n");
    vtkWrapXML_ClassMethod(fp, data,
                           data->Functions[idList[i]], indentation);
    }
  fprintf(fp, "\n%s</Methods>\n", indent(--indentation));

  free(idList);
}

/* print information about all the variables in the class */
void vtkWrapXML_ClassVariables(
  FILE *fp, ClassInfo*data, int indentation)
{
  int i, n;
  ClassVariables *vars = 0;
  int *idList = 0;

  vars = vtkParseVariables_Create(data);

  /* create a list of variable ids */
  n = vars->NumberOfVariables;
  idList = (int *)malloc(sizeof(int)*n);
  for (i = 0; i < n; i++)
    {
    idList[i] = i;
    }

  /* sort function id list based on function name */
  vtkWrapXML_SortVariables(vars, idList, 0, n-1);

  fprintf(fp, "\n%s<Variables>\n", indent(indentation++));
  /* variable handling code */
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "\n");
    vtkWrapXML_ClassVariable(fp, &vars->Variables[idList[i]], indentation);
    }
  fprintf(fp, "\n%s</Variables>\n", indent(--indentation));
  fprintf(fp, "\n");

  free(idList);
  vtkParseVariables_Free(vars);
}

/* check the hierarchy info (doesn't do anything with it yet) */
void vtkWrapXML_CheckHierarchy(FileInfo *data)
{
  HierarchyInfo *hinfo = 0;
  const char *classname;

  classname = data->Classes[0]->ClassName;

  if (data->HierarchyFileName)
    {
    hinfo = vtkParseHierarchy_ReadFile(data->HierarchyFileName);

    /* just test these methods to make sure they don't crash */
    if (!vtkParseHierarchy_IsTypeOf(hinfo, classname, "vtkObjectBase")
        != !data->IsVTKObject)
      {
      if (data->IsVTKObject)
        {
        fprintf(stderr, "Hierarchy thinks %s is a special object\n",
                classname);
        }
      else
        {
        fprintf(stderr, "Hierarchy thinks %s is a vtk object\n",
                classname);
        }
      vtkParseHierarchy_Free(hinfo);
      exit(1);
      }
    if (strncmp(vtkParseHierarchy_ClassHeader(hinfo, classname),
                classname, strlen(classname)) != 0)
      {
      fprintf(stderr, "Wrong header file \"%s\" for class %s\n",
              vtkParseHierarchy_ClassHeader(hinfo, classname),
              classname);
      vtkParseHierarchy_Free(hinfo);
      exit(1);
      }
    }

  if (hinfo)
    {
    vtkParseHierarchy_Free(hinfo);
    }
}

/* main functions that takes a parsed FileInfo from vtk and produces a
 * specific vtkXML format for desired functions to be incorporated in SimVTK
 * (ie. certain add, remove, get and set methods). */
void vtkParseOutput(FILE *fp, FileInfo *data)
{
  int indentation = 0;
  ClassInfo *classInfo = data->Classes[0];

  /* check the hierarchy info (doesn't do anything with it yet) */
  vtkWrapXML_CheckHierarchy(data);

  /* start new XML section for class */
  vtkWrapXML_ClassHeader(fp, classInfo, indentation++);

  /* print the documentation */
  vtkWrapXML_ClassDoc(fp, data, indentation);

  /* print the methods section */
  vtkWrapXML_ClassMethods(fp, classInfo, indentation);

  /* print the variables section */
  vtkWrapXML_ClassVariables(fp, classInfo, indentation);

  /* print the class footer */
  vtkWrapXML_ClassFooter(fp, classInfo, --indentation);
}
