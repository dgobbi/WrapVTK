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
#include "vtkParseProperties.h"
#include "vtkParseHierarchy.h"
#include "vtkParseMerge.h"
#include "vtkParseMain.h"
#include "vtkConfigure.h"

/* the indentation string, default is two spaces */
#define VTKXML_INDENT "  "

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
static void vtkWrapXML_MultiLineText(
  FILE *fp, const char *cp, int indentation)
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

  fprintf(fp, "\n");
  fprintf(fp, "%s<Class>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          vtkWrapXML_Quote(data->Name, 500));

  /* actually, vtk classes never have more than one superclass */
  n = data->NumberOfSuperClasses;
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "%s<SuperClass>\n", indent(indentation++));
    fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
            vtkWrapXML_Quote(data->SuperClasses[i], 500));
    fprintf(fp, "%s<Access>public</Access>\n", indent(indentation));
    fprintf(fp, "%s</SuperClass>\n", indent(--indentation));
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

/* write the file header */
void vtkWrapXML_FileHeader(FILE *fp, const FileInfo *data, int indentation)
{
  const char *cp = data->FileName;
  int i;

  fprintf(fp, "%s<File>\n", indent(indentation));
  if (cp)
    {
    i = strlen(cp);
    while (i > 0 && cp[i-1] != '/' && cp[i-1] != '\\' && cp[i-1] != ':')
      {
      i--;
      }
    fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
            vtkWrapXML_Quote(&cp[i], 500));
    }
}

/* write the file footer */
void vtkWrapXML_FileFooter(FILE *fp, const FileInfo *data, int indentation)
{
  fprintf(fp, "\n");
  fprintf(fp, "%s</File>\n", indent(indentation));
}

/* Check for strings that are NULL, empty, or whitespace */
int vtkWrapXML_EmptyString(const char *cp)
{
  if (cp)
    {
    while (*cp != '\0')
      {
      if (!isspace(*cp++))
        {
        return 0;
        }
      }
    }

  return 1;
}

/* Write out the documentation for the class */
void vtkWrapXML_FileDoc(FILE *fp, FileInfo *data, int indentation)
{
  size_t n;
  char temp[500];
  const char *cp;

  if (vtkWrapXML_EmptyString(data->NameComment) &&
      vtkWrapXML_EmptyString(data->Description) &&
      vtkWrapXML_EmptyString(data->Caveats) &&
      vtkWrapXML_EmptyString(data->SeeAlso))
    {
    return;
    }

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

void vtkWrapXML_ClassInheritance(FILE *fp, MergeInfo *merge, int indentation)
{
  int i, n;

  /* show the geneology */
  n = merge->NumberOfClasses;

  fprintf(fp, "%s<Inheritance>\n", indent(indentation++));
  for (i = 0; i < n; i++)
    {
    fprintf(fp, "%s<ClassName>%s</ClassName>\n", indent(indentation),
            vtkWrapXML_Quote(merge->ClassNames[i], 500));
    }
  fprintf(fp, "%s</Inheritance>\n", indent(--indentation));
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

/* Print a constant */
void vtkWrapXML_Constant(
  FILE *fp, ConstantInfo *con, int inClass, int indentation)
{
  static const char *accessLevel[] = {"private", "public", "protected"};
  int access = 0;
  if (con->IsPublic)
    {
    access = 1;
    }
  else if (con->IsProtected)
    {
    access = 2;
    }

  fprintf(fp, "\n");
  fprintf(fp, "%s<Constant>\n", indent(indentation++));

  if (inClass)
    {
    fprintf(fp, "%s<Access>%s</Access>\n", indent(indentation),
            accessLevel[access]);
    }

  if (con->IsEnum)
    {
    fprintf(fp, "%s<Flag>enum<Flag>\n", indent(indentation));
    }
  if (con->Type)
    {
    vtkWrapXML_Type(fp, con->Type, con->TypeClass, 0, indentation);
    }
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          vtkWrapXML_Quote(con->Name, 500));
  fprintf(fp, "%s<Value>%s</Value>\n", indent(indentation),
          vtkWrapXML_Quote(con->Value, 500));
  fprintf(fp, "%s</Constant>\n", indent(--indentation));
}

/* Print out items that are common to functions and methods */
void vtkWrapXML_FunctionCommon(
  FILE *fp, FunctionInfo *func, int printReturn, int indentation)
{
  size_t i, n;
  char temp[500];
  const char *cp;

  if (vtkParse_TypeIsStatic(func->ReturnType))
    {
    fprintf(fp, "%s<Flag>static</Flag>\n", indent(indentation));
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

  if (printReturn)
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

    if (func->ArgNames[i])
      {
      fprintf(fp, "%s<Name>%s</Name>\n",
              indent(indentation), vtkWrapXML_Quote(func->ArgNames[i], 500));
      }

    if (func->ArgValues[i])
      {
      fprintf(fp, "%s<Value>%s</Value>\n",
              indent(indentation), vtkWrapXML_Quote(func->ArgValues[i], 500));
      }

    fprintf(fp, "%s</Arg>\n", indent(--indentation));
    }
}

/* Print out a function in XML format */
void vtkWrapXML_Function(
  FILE *fp, FunctionInfo *func, int indentation)
{
  if (func->ArrayFailure)
    {
    return;
    }

  fprintf(fp, "\n");
  fprintf(fp, "%s<Function>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          vtkWrapXML_Quote(func->Name, 500));

  vtkWrapXML_FunctionCommon(fp, func, 1, indentation);

  fprintf(fp, "%s</Function>\n", indent(--indentation));
}

/* print a bitfield of class property access methods */
void vtkWrapXML_ClassPropertyMethods(
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
        vtkParseProperties_MethodTypeAsString(methodType));
      }
    }
}

/* Print out a function in XML format */
void vtkWrapXML_ClassMethod(
  FILE *fp, ClassInfo *data, FunctionInfo *func, const char *classname,
  const char *propname, int indentation)
{
  static const char *accessLevel[] = {"private", "public", "protected"};
  int access;
  int needsReturnValue = 0;

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

  fprintf(fp, "\n");
  fprintf(fp, "%s<Method>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          vtkWrapXML_Quote(func->Name, 500));

  if (classname)
    {
    fprintf(fp, "%s<ClassName>%s</ClassName>\n", indent(indentation),
            classname);
    }

  if (propname)
    {
    fprintf(fp, "%s<PropertyName>%s</PropertyName>\n", indent(indentation),
            propname);
    }

  fprintf(fp, "%s<Access>%s</Access>\n", indent(indentation),
          accessLevel[access]);

  if (func->IsVirtual)
    {
    fprintf(fp, "%s<Flag>virtual</Flag>\n", indent(indentation));
    }

  if (func->IsPureVirtual)
    {
    fprintf(fp, "%s<Flag>pure</Flag>\n", indent(indentation));
    }

  if (data == NULL || !(strcmp(data->Name, func->Name) == 0 ||
      (func->Name[0] == '~' && strcmp(data->Name, &func->Name[1]) == 0)))
    {
    needsReturnValue = 1;
    }

  vtkWrapXML_FunctionCommon(fp, func, needsReturnValue, indentation);

  fprintf(fp, "%s</Method>\n", indent(--indentation));
}

/* Print out a property in XML format */
void vtkWrapXML_ClassProperty(
  FILE *fp, PropertyInfo *property, const char *classname, int indentation)
{
  const char *access = 0;
  int i;

  fprintf(fp, "\n");
  fprintf(fp, "%s<Property>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation),
          property->Name);

  if (classname)
    {
    fprintf(fp, "%s<ClassName>%s</ClassName>\n", indent(indentation),
            classname);
    }

  if (property->PublicMethods)
    {
    access = "public";
    }
  else if (property->ProtectedMethods)
    {
    access = "protected";
    }
  else if (property->PrivateMethods)
    {
    access = "private";
    }

  if (access)
    {
    fprintf(fp, "%s<Access>%s</Access>\n", indent(indentation),
            access);
    }

  if (property->IsStatic)
    {
    fprintf(fp, "%s<Flag>static</Flag>\n", indent(indentation));
    }

  if (((property->PublicMethods | property->ProtectedMethods |
        property->PrivateMethods) & ~property->LegacyMethods) == 0)
    {
    fprintf(fp, "%s<Flag>legacy</Flag>\n", indent(indentation));
    }

  if (property->Comment)
    {
    fprintf(fp, "%s<Comment>\n", indent(indentation++));
    vtkWrapXML_MultiLineText(fp, property->Comment, indentation);
    fprintf(fp, "%s</Comment>\n", indent(--indentation));
    }

  vtkWrapXML_Type(fp, property->Type, property->ClassName, property->Count,
                  indentation);

  if (property->EnumConstantNames)
    {
    for (i = 0; property->EnumConstantNames[i] != 0; i++)
      {
      fprintf(fp, "%s<SetTo>%s</SetTo>\n", indent(indentation),
              property->EnumConstantNames[i]);
      }
    }

  if (property->PublicMethods)
    {
    fprintf(fp, "%s<PublicMethods>\n", indent(indentation++));
    vtkWrapXML_ClassPropertyMethods(fp, property->PublicMethods,
                                    indentation);
    fprintf(fp, "%s</PublicMethods>\n", indent(--indentation));
    }

  if (property->ProtectedMethods)
    {
    fprintf(fp, "%s<ProtectedMethods>\n", indent(indentation++));
    vtkWrapXML_ClassPropertyMethods(fp, property->ProtectedMethods,
                                    indentation);
    fprintf(fp, "%s</ProtectedMethods>\n", indent(--indentation));
    }

  if (property->PrivateMethods)
    {
    fprintf(fp, "%s<PrivateMethods>\n", indent(indentation++));
    vtkWrapXML_ClassPropertyMethods(fp, property->PrivateMethods,
                                    indentation);
    fprintf(fp, "%s</PrivateMethods>\n", indent(--indentation));
    }

  if (property->LegacyMethods)
    {
    fprintf(fp, "%s<LegacyMethods>\n", indent(indentation++));
    vtkWrapXML_ClassPropertyMethods(fp, property->LegacyMethods,
                                    indentation);
    fprintf(fp, "%s</LegacyMethods>\n", indent(--indentation));
    }

  fprintf(fp, "%s</Property>\n", indent(--indentation));
}

/* Recursive suproutine to add the methods of "classname" and all its
 * superclasses to "merge" */
void vtkWrapXML_MergeHelper(
  const FileInfo *data, const HierarchyInfo *hinfo, const char *classname,
  FILE *hintfile, MergeInfo *info, ClassInfo *merge)
{
  FILE *fp = NULL;
  ClassInfo *cinfo = NULL;
  FileInfo *finfo = NULL;
  const char *header;
  char *filename;
  int i, n;

  /* find out if "classname" is in the currently loaded FileInfo */
  n = data->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    if (strcmp(data->Classes[i]->Name, classname) == 0)
      {
      cinfo = data->Classes[i];
      break;
      }
    }

  if (n > 0 && !cinfo)
    {
    header = vtkParseHierarchy_ClassHeader(hinfo, classname);
    if (!header)
      {
      return;
      }
    filename = vtkParse_FindPath(header);
    if (!filename)
      {
      if (hintfile) { fclose(hintfile); }
      fprintf(stderr, "Couldn't locate header file %s\n", header);
      exit(1);
      }

    fp = fopen(filename, "r");
    if (!fp)
      {
      if (hintfile) { fclose(hintfile); }
      fprintf(stderr, "Couldn't open header file %s\n", header);
      exit(1);
      }

    finfo = vtkParse_ParseFile(filename, 0, fp, stderr);
    vtkParse_FreePath(filename);
    fclose(fp);

    if (!finfo)
      {
      if (hintfile) { fclose(hintfile); }
      exit(1);
      }

    if (hintfile)
      {
      rewind(hintfile);
      vtkParse_ReadHints(finfo, hintfile, stderr);
      }

    data = finfo;
    n = data->NumberOfClasses;
    for (i = 0; i < n; i++)
      {
      if (strcmp(data->Classes[i]->Name, classname) == 0)
        {
        cinfo = data->Classes[i];
        break;
        }
      }
    }

  if (cinfo)
    {
    vtkParseMerge_Merge(info, merge, cinfo);
    n = cinfo->NumberOfSuperClasses;
    for (i = 0; i < n; i++)
      {
      vtkWrapXML_MergeHelper(data, hinfo, cinfo->SuperClasses[i],
                             hintfile, info, merge);
      }
    }

  if (finfo)
    {
    vtkParse_Free(finfo);
    }
}

/* Merge the methods from the superclasses */
MergeInfo *vtkWrapXML_MergeSuperClasses(
  FileInfo *data, ClassInfo *classInfo)
{
  FILE *hintfile = NULL;
  HierarchyInfo *hinfo = NULL;
  MergeInfo *info = NULL;
  OptionInfo *oinfo = NULL;
  const char *classname;
  int i, n;

  classname = classInfo->Name;
  oinfo = vtkParse_GetCommandLineOptions();

  if (oinfo->HierarchyFileName)
    {
    hinfo = vtkParseHierarchy_ReadFile(oinfo->HierarchyFileName);

    if (oinfo->HintFileName)
      {
      hintfile = fopen(oinfo->HintFileName, "r");
      }

    info = vtkParseMerge_CreateMergeInfo(classInfo);

    n = classInfo->NumberOfSuperClasses;
    for (i = 0; i < n; i++)
      {
      vtkWrapXML_MergeHelper(data, hinfo, classInfo->SuperClasses[i],
                             hintfile, info, classInfo);
      }

    if (hintfile)
      {
      fclose(hintfile);
      }
    }

  if (hinfo)
    {
    vtkParseHierarchy_Free(hinfo);
    }

  return info;
}

/* look for additional information before printing a method */
void vtkWrapXML_MethodHelper(
  FILE *fp, MergeInfo *merge, ClassProperties *properties,
  ClassInfo *classInfo, FunctionInfo *funcInfo, int indentation)
{
  const char *classname = 0;
  const char *propname = 0;
  PropertyInfo *property = NULL;
  int i, j, n;

  n = classInfo->NumberOfFunctions;

  for (i = 0; i < n; i++)
    {
    if (classInfo->Functions[i] == funcInfo)
      {
      break;
      }
    }

  if (i < n)
    {
    if (merge && merge->NumberOfOverrides[i])
      {
      classname = merge->ClassNames[merge->OverrideClasses[i][0]];
      }
    if (properties && properties->MethodProperties[i] >= 0)
      {
      property = properties->Properties[properties->MethodProperties[i]];
      propname = property->Name;
      for (j = 0; j < i; j++)
        {
        /* only print property if this is the first occurrence */
        if (properties->MethodProperties[j] >= 0 &&
            property ==
            properties->Properties[properties->MethodProperties[j]])
          {
          property = NULL;
          break;
          }
        }
      }
    }

  if (property)
    {
    vtkWrapXML_ClassProperty(fp, property, classname, indentation);
    }

  vtkWrapXML_ClassMethod(fp, classInfo, funcInfo,
                         classname, propname, indentation);
}

/* print a class as xml */
void vtkWrapXML_Class(
  FILE *fp, FileInfo *data, ClassInfo *classInfo, int indentation)
{
  ClassProperties *properties;
  MergeInfo *merge = NULL;
  int i;

  /* start new XML section for class */
  vtkWrapXML_ClassHeader(fp, classInfo, indentation++);

  /* merge all the superclass information */
  merge = vtkWrapXML_MergeSuperClasses(data, classInfo);

  if (merge)
    {
    fprintf(fp, "\n");
    vtkWrapXML_ClassInheritance(fp, merge, indentation);
    }

  /* get information about the properties */
  properties = vtkParseProperties_Create(classInfo);

  /* print all members of the class */
  for (i = 0; i < classInfo->NumberOfItems; i++)
    {
    switch (classInfo->Items[i]->ItemType)
      {
      case VTK_CONSTANT_INFO:
        {
        vtkWrapXML_Constant(fp, (ConstantInfo *)classInfo->Items[i], 1,
                            indentation);
        break;
        }
      case VTK_FUNCTION_INFO:
        {
        vtkWrapXML_MethodHelper(fp, merge, properties, classInfo,
                                (FunctionInfo *)classInfo->Items[i],
                                indentation);
        break;
        }
      }
    }

  /* release the information about the properties */
  vtkParseProperties_Free(properties);

  /* release the info about what was merged from superclasses */
  if (merge)
    {
    vtkParseMerge_FreeMergeInfo(merge);
    }

  /* print the class footer */
  vtkWrapXML_ClassFooter(fp, classInfo, --indentation);
}

/* needed for vtkWrapXML_Body */
void vtkWrapXML_Namespace(FILE *fp, FileInfo *data, int indentation);

/* Print the body of a file or namespace */
void vtkWrapXML_Body(FILE *fp, FileInfo *data, int indentation)
{
  int i;

  /* print all constants for the file or namespace */
  for (i = 0; i < data->NumberOfItems; i++)
    {
    switch (data->Items[i]->ItemType)
      {
      case VTK_CONSTANT_INFO:
        {
        vtkWrapXML_Constant(fp, (ConstantInfo *)data->Items[i], 0,
                            indentation);
        break;
        }
      case VTK_CLASS_INFO:
        {
        vtkWrapXML_Class(fp, data, (ClassInfo *)data->Items[i],
                         indentation);
        break;
        }
      case VTK_FUNCTION_INFO:
        {
        vtkWrapXML_Function(fp, (FunctionInfo *)data->Items[i],
                            indentation);
        break;
        }
      case VTK_NAMESPACE_INFO:
        {
        vtkWrapXML_Namespace(fp, (FileInfo *)data->Items[i],
                             indentation);
        break;
        }
      }
    }
}

/* print a namespace as xml */
void vtkWrapXML_Namespace(FILE *fp, FileInfo *data, int indentation)
{
  fprintf(fp, "\n");
  fprintf(fp, "%s<Namespace>\n", indent(indentation++));
  fprintf(fp, "%s<Name>%s</Name>\n", indent(indentation), data->Name);
  vtkWrapXML_Body(fp, data, indentation);
  fprintf(fp, "\n");
  fprintf(fp, "%s</Namespace>\n", indent(--indentation));
}

/* main functions that takes a parsed FileInfo from vtk and produces a
 * specific vtkXML format for desired functions to be incorporated in SimVTK
 * (ie. certain add, remove, get and set methods). */
void vtkParseOutput(FILE *fp, FileInfo *data)
{
  int indentation = 0;

  /* print the lead-in */
  vtkWrapXML_FileHeader(fp, data, indentation);

  /* print the documentation */
  vtkWrapXML_FileDoc(fp, data, indentation);

  /* print the main body */
  vtkWrapXML_Body(fp, data, indentation);

  /* print the closing tag */
  vtkWrapXML_FileFooter(fp, data, indentation);
}
