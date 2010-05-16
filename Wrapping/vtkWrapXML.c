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
#include "vtkConfigure.h"

/* the indentation string, default is two spaces */
#define VTKXML_INDENT "  "

/* ----- name sorting functions ----- */

/* swap integer item "i" with item "j" */
static void swapArrayItems(int arr[], int i, int j)
{
  int temp = arr[i];
  arr[i] = arr[j];
  arr[j] = temp;
}

/* sort functions lexically between indices "start" and "ends" */
static void sortFunctionsByName(
  FileInfo *data, int functionList[], int start, int ends)
{
  int i, tmp, location = start;
  if (ends <= start)
    {
    return;
    }
  for (i = start; i < ends; i++)
    {
    if (strcmp(data->Functions[functionList[ends]].Name,
               data->Functions[functionList[i]].Name) > 0)
      {
      swapArrayItems(functionList, location, i);
      location++;
      }
    }
  swapArrayItems(functionList, location, ends);
  sortFunctionsByName(data, functionList, start, location - 1);
  sortFunctionsByName(data, functionList, location + 1, ends);
}

/* sort variables lexically between indices "start" and "ends" */
static void sortVariablesByName(
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
      swapArrayItems(variableList, location, i);
      location++;
      }
    }
  swapArrayItems(variableList, location, ends);
  sortVariablesByName(vars, variableList, start, location - 1);
  sortVariablesByName(vars, variableList, location + 1, ends);
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
static const char *quoteForXML(const char *comment, int maxlen)
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
static void printMultilineText(FILE *fp, const char *cp, int indentation)
{
  int i, j;
  char temp[512];

  for (i = 0; cp && cp[i] != '\0'; i++)
    {
    for (j = 0; j < 200 && cp[i] != '\0' && cp[i] != '\n'; j++)
      {
      temp[j] = cp[i++];
      }
    temp[j] = '\0';
        
    fprintf(fp, "%s%s\n", indent(indentation),
            quoteForXML(temp,500));
    }
}

/* Write out the class header */
void classHeader(FILE *fp, FileInfo *data, int indentation)
{
  int i = 0;
  int n;

  fprintf(fp, "%s<Class>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          data->ClassName);

  /* There is also data->IsAbstract and data->HasDelete but these are
     deprecated.  The IsAbstract flag is computed by vtkParse, but 
     IsConcrete is set by CMake and is more reliable.  */

  /* actually, vtk classes never have more than one superclass */
  n = data->NumberOfSuperClasses;
  for (i = 0; i < n && i < 1; i++)
    {
    fprintf(fp, "%s<Superclass>%s</Superclass>\n", indent(indentation),
            data->SuperClasses[i]);
    }

  /* the "concrete" flag means the class has a ::New method */
  if (data->IsConcrete)
    {
    fprintf(fp, "%s<Flag>concrete</Flag>\n", indent(indentation));
    }
  else
    {
    fprintf(fp, "%s<Flag>abstract</Flag>\n", indent(indentation));
    }
}

/* Write out the class footer */
void classFooter(FILE *fp, FileInfo *data, int indentation)
{
  fprintf(fp, "%s</Class>\n", indent(indentation));
}

/* Write out the documentation for the class */
void classDocumentation(FILE *fp, FileInfo *data, int indentation)
{
  size_t i, j, n;
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
            quoteForXML(cp,500));
    }

  if (data->Description)
    {
    fprintf(fp, "\n%s .SECTION Description\n", indent(indentation));
    printMultilineText(fp, data->Description, indentation);
    }

  if (data->Caveats && data->Caveats[0] != '\0')
    {
    fprintf(fp, "\n%s .SECTION Caveats\n", indent(indentation));
    printMultilineText(fp, data->Caveats, indentation);
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
        printMultilineText(fp, cp, indentation);
        break;
        }

      if (n > 0 && n < 400)
        {
        strncpy(temp, cp, n);
        temp[n] = '\0';
        fprintf(fp,"%s %s\n", indent(indentation),
                quoteForXML(temp,500));
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
void typeInformation(
  FILE *fp, int type, const char *vtkclass, int count, int indentation)
{
  int j = 0;
  const char *cp;

  if (typeIsConst(type))
    {
    fprintf(fp, "%s<Decorator>const</Decorator>\n", indent(indentation)); 
    }
 
  fprintf(fp, "%s<Type>%s</Type>\n", indent(indentation),
          parseBaseTypeAsString(type, vtkclass));

  for (cp = parseIndirectionAsString(type); *cp != '\0'; cp++)
    {
    if (*cp != '&' && j == 0 && count)
      {
      fprintf(fp, "%s<Decorator>array</Decorator>\n", indent(indentation));
      fprintf(fp, "%s<ArraySize>%i</ArraySize>\n", indent(indentation),
              count);
      j++;
      }
    else
      { 
      fprintf(fp, "%s<Decorator>%s</Decorator>\n", indent(indentation),
              ((*cp == '&') ? "reference" : "pointer"));
      }
    }
}

/* Print out a function in XML format */
void classMethod(FILE *fp, FunctionInfo *func, int indentation)
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
          quoteForXML(func->Name, 500));
  fprintf(fp, "%s<Access>%s</Access>\n", indent(indentation),
          accessLevel[access]);

  if (typeIsStatic(func->ReturnType))
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

  fprintf(fp, "%s %s\n", indent(indentation),
          quoteForXML(temp, 500));

  fprintf(fp, "%s</Signature>\n", indent(--indentation));

  if (func->Comment)
    {
    fprintf(fp, "%s<Comment>\n", indent(indentation++));
    printMultilineText(fp, func->Comment, indentation);
    fprintf(fp, "%s</Comment>\n", indent(--indentation));
    }
 
  fprintf(fp, "%s<Return>\n", indent(indentation++));

  typeInformation(fp, func->ReturnType, func->ReturnClass,
                  (func->HaveHint ? func->HintSize : 0),
                  indentation); 

  fprintf(fp, "%s</Return>\n", indent(--indentation));

  n = func->NumberOfArguments;
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "%s<Arg>\n", indent(indentation++));

    typeInformation(fp, func->ArgTypes[i], func->ArgClasses[i],
                    func->ArgCounts[i], indentation); 

    fprintf(fp, "%s</Arg>\n", indent(--indentation));
    }
  fprintf(fp, "%s</Method>\n", indent(--indentation));
}

/* print a bitfield of class variable access methods */
void classVariableMethods(
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
        methodTypeString(methodType));
      }
    }
}

/* Print out a variable in XML format */
void classVariable(FILE *fp, VariableAttributes *var, int indentation)
{
  int i, n;

  fprintf(fp, "%s<Variable>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          var->Name);

  if (var->Comment)
    {
    fprintf(fp, "%s<Comment>\n", indent(indentation++));
    printMultilineText(fp, var->Comment, indentation);
    fprintf(fp, "%s</Comment>\n", indent(--indentation));
    }
 
  typeInformation(fp, var->Type, var->ClassName, var->Count, indentation);

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
    classVariableMethods(fp, var->PublicMethods, indentation);
    fprintf(fp, "%s</PublicMethods>\n", indent(--indentation));
    }

  if (var->ProtectedMethods)
    {
    fprintf(fp, "%s<ProtectedMethods>\n", indent(indentation++));
    classVariableMethods(fp, var->ProtectedMethods, indentation);
    fprintf(fp, "%s</ProtectedMethods>\n", indent(--indentation));
    }

  if (var->PrivateMethods)
    {
    fprintf(fp, "%s<PrivateMethods>\n", indent(indentation++));
    classVariableMethods(fp, var->PrivateMethods, indentation);
    fprintf(fp, "%s</PrivateMethods>\n", indent(--indentation));
    }

  if (var->LegacyMethods)
    {
    fprintf(fp, "%s<LegacyMethods>\n", indent(indentation++));
    classVariableMethods(fp, var->LegacyMethods, indentation);
    fprintf(fp, "%s</LegacyMethods>\n", indent(--indentation));
    }

  fprintf(fp, "%s</Variable>\n", indent(--indentation));
}

/* main functions that takes a parsed FileInfo from vtk and produces a
 * specific vtkXML format for desired functions to be incorporated in SimVTK
 * (ie. certain add, remove, get and set methods). */
void vtkParseOutput(FILE *fp, FileInfo *data)
{
  int i, n;
  char *cp;
  int numFunctions;
  int *idList;
  int indentation = 0;
  ClassVariables *vars = 0;

  /* start new XML section for class */
  classHeader(fp, data, indentation++);

  /* print the documentation */
  classDocumentation(fp, data, indentation);

  idList = (int *)malloc(sizeof(int)*data->NumberOfFunctions);

  /* create a list of function ids */
  numFunctions = data->NumberOfFunctions;
  n = 0;
  for (i = 0; i < numFunctions; i++)
    {
    if (data->Functions[i].Name &&
        !data->Functions[i].ArrayFailure)
      {
      idList[n++] = i;

      /* if destructor found, fix function name */
      if (strcmp(data->Functions[i].Name, data->ClassName) == 0)
        {
        cp = data->Functions[i].Signature;
        for (; *cp != '\0' && *cp != '('; cp++)
          {
          if (*cp == '~')
            {
            data->Functions[i].Name =
              (char *)malloc(strlen(data->ClassName) + 2);
            data->Functions[i].Name[0] = '~';
            strcpy(&data->Functions[i].Name[1], data->ClassName);

            break;
            }
          }
        }
      }
    }

  /* sort function id list based on function name */
  sortFunctionsByName(data, idList, 0, n-1);

  fprintf(fp, "\n");
  fprintf(fp, "%s<Methods>\n", indent(indentation++));
  /* function handling code */
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "\n");
    classMethod(fp, &data->Functions[idList[i]], indentation);
    }
  fprintf(fp, "\n%s</Methods>\n", indent(--indentation));

  free(idList);

  vars = buildClassVariablesStruct(data);

  idList = (int *)malloc(sizeof(int)*vars->NumberOfVariables);

  /* create a list of variable ids */
  n = vars->NumberOfVariables ;
  for (i = 0; i < n; i++)
    {
    idList[i] = i;
    }

  /* sort function id list based on function name */
  sortVariablesByName(vars, idList, 0, n-1);

  fprintf(fp, "\n%s<Variables>\n", indent(indentation++));
  /* variable handling code */
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "\n");
    classVariable(fp, &vars->Variables[idList[i]], indentation);
    }
  fprintf(fp, "\n%s</Variables>\n", indent(--indentation));
  fprintf(fp, "\n");

  free(idList);
  freeClassVariablesStruct(vars);

  /* print the class footer */
  classFooter(fp, data, --indentation);
}
