/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParse.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

/*
  This is the header file for vtkParse.tab.c, which is generated
  from vtkParse.y with the "yacc" compiler-compiler.
*/

#ifndef VTK_PARSE_H
#define VTK_PARSE_H

#include "vtkParseType.h"
#include <stdio.h>

#define MAX_ARGS 20

/* ItemType constants */
enum ItemTypeInfo
{
  VTK_NAMESPACE_INFO = 1,
  VTK_CLASS_INFO     = 2,
  VTK_FUNCTION_INFO  = 3,
  VTK_CONSTANT_INFO  = 4
};

/* ItemInfo is a "base class" for items in the header file */
typedef struct _ItemInfo
{
  char *Name;
  int   ItemType;
} ItemInfo;

/* FunctionInfo is for functions and methods */
typedef struct _FunctionInfo
{
  char *Name;
  int   ItemType;
  int   IsVirtual;
  int   IsPureVirtual;
  int   IsPublic;
  int   IsProtected;
  int   IsOperator;
  int   IsConst;
  int   IsLegacy;
  int   ArrayFailure;
  int   NumberOfArguments;
  int   ArgTypes[MAX_ARGS];
  int   ArgCounts[MAX_ARGS];
  char *ArgClasses[MAX_ARGS];
  char *ArgNames[MAX_ARGS];
  char *ArgValues[MAX_ARGS];
  int   ReturnType;
  char *ReturnClass;
  int   HaveHint;
  int   HintSize;
  char *Comment;
  char *Signature;
} FunctionInfo;

/* ConstantInfo is for enum constants, macro constants, and const vars */
typedef struct _ConstantInfo
{
  char *Name;
  int   ItemType;
  char *Value;
  int   Type;
  char *TypeClass;
  int   IsEnum;
  int   IsPublic;
  int   IsProtected;
} ConstantInfo;

/* ClassInfo is for classes and structs */
typedef struct _ClassInfo
{
  char *Name;
  int   ItemType;
  int   IsAbstract;
  int   HasDelete;
  int   NumberOfSuperClasses;
  char **SuperClasses;
  int   NumberOfFunctions;
  FunctionInfo **Functions;
  int   NumberOfConstants;
  ConstantInfo **Constants;
  int   NumberOfItems;
  ItemInfo **Items;
} ClassInfo;

/* FileInfo is for files and namespaces */
typedef struct _FileInfo
{
  /* namespace information, Name is NULL in global namespace */
  char *Name;
  int   ItemType;
  int   NumberOfClasses;
  ClassInfo **Classes;
  int   NumberOfFunctions;
  FunctionInfo **Functions;
  int   NumberOfConstants;
  ConstantInfo **Constants;
  int   NumberOfNamespaces;
  struct _FileInfo **Namespaces;
  int   NumberOfItems;
  ItemInfo **Items;
   /* file information */
  char *FileName;
  char *NameComment;
  char *Description;
  char *Caveats;
  char *SeeAlso;
} FileInfo;

#ifdef __cplusplus
extern "C" {
#endif

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, int concrete, FILE *ifile, FILE *errfile);

/* Read a hints file and update the FileInfo */
int vtkParse_ReadHints(FileInfo *data, FILE *hfile, FILE *errfile);

/* Free the FileInfo struct returned by vtkParse_ParseFile() */
void vtkParse_Free(FileInfo *data);

/* This macro is used to add elements to the above structs, it serves
 * the same purpose as an stl vector of pointers */
#define vtkParse_AddItemMacro(theStruct, theElement, theValue) \
  vtkParse_AddPointerToArray(&(theStruct)->theElement, \
    &(theStruct)->NumberOf##theElement, theValue); \
  vtkParse_AddPointerToArray(&(theStruct)->Items, \
    &(theStruct)->NumberOfItems, theValue)

/* This function is the back-end to vtkParse_AddItemMacro */
void vtkParse_AddPointerToArray(void *valueArray, int *count, void *value);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
