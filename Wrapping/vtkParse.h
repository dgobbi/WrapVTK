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
#define MAX_ARRAY_DIMS 6

/* ItemType constants */
typedef enum _parse_item_t 
{
  VTK_NAMESPACE_INFO = 2,
  VTK_TYPEDEF_INFO   = 3,
  VTK_CLASS_INFO     = 4,
  VTK_STRUCT_INFO    = 5,
  VTK_UNION_INFO     = 6,
  VTK_FUNCTION_INFO  = 7,
  VTK_CONSTANT_INFO  = 8,
  VTK_VARIABLE_INFO  = 9,
  VTK_ENUM_INFO      = 10
} parse_item_t;

typedef enum _parse_access_t
{
  VTK_ACCESS_PUBLIC = 0,
  VTK_ACCESS_PROTECTED = 1,
  VTK_ACCESS_PRIVATE = 2
} parse_access_t;

/* ItemInfo is a "base class" for items in the header file */
typedef struct _ItemInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
} ItemInfo;

/* TemplateInfo holds template information */
typedef struct _TemplateArgs
{
  int NumberOfArguments;
  struct _TemplateArgs *ArgTemplates[MAX_ARGS];
  int   ArgTypes[MAX_ARGS];
  char *ArgClasses[MAX_ARGS];
  char *ArgNames[MAX_ARGS];
  char *ArgValues[MAX_ARGS];
} TemplateArgs;

/* FunctionInfo is for functions and methods */
typedef struct _FunctionInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
  char *Signature;
  TemplateArgs *Template;
  int   NumberOfArguments;
  int   ArgTypes[MAX_ARGS];
  int   ArgCounts[MAX_ARGS];
  char *ArgClasses[MAX_ARGS];
  char *ArgNames[MAX_ARGS];
  char *ArgDimensions[MAX_ARGS][MAX_ARRAY_DIMS];
  char *ArgValues[MAX_ARGS];
  struct _FunctionInfo *ArgFunctions[MAX_ARGS]; /* for function pointers */
  int   ReturnType;
  char *ReturnClass;
  int   HaveHint;
  int   HintSize;
  int   IsStatic;
  int   IsVirtual;
  int   IsPureVirtual;
  int   IsPublic; /* legacy */
  int   IsProtected; /* legacy */
  int   IsOperator;
  int   IsVariadic;
  int   IsConst;
  int   IsLegacy;
  int   ArrayFailure;
} FunctionInfo;

/* ConstantInfo is for enum constants, macro constants, and const vars */
typedef struct _ConstantInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
  char *Value;
  int   Type;
  char *TypeClass;
  int   IsEnum;
} ConstantInfo;

/* VariableInfo is for variables */
typedef struct _VariableInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
  char *Value;
  int   Type;
  char *TypeClass;
  int   Dimensions[MAX_ARRAY_DIMS];
  FunctionInfo *Function; /* for function pointers */
  int   IsStatic;
} VariableInfo;

/* EnumInfo is for enums */
typedef struct _EnumInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
} EnumInfo;

/* UnionInfo is for unions */
typedef struct _UnionInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
  int NumberOfMembers;
  VariableInfo **Members;
} UnionInfo;

/* TypedefInfo is for typedefs */
typedef struct _TypedefInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
  int   Type;
  char *TypeClass;
  int   TypeArrayCounts[MAX_ARRAY_DIMS];
  FunctionInfo *Function; /* for function pointers */
} TypedefInfo;

/* ClassInfo is for classes and structs */
typedef struct _ClassInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;
  char *Comment;
  TemplateArgs *Template;
  int   NumberOfSuperClasses;
  char **SuperClasses;
  int   NumberOfItems;
  ItemInfo **Items;
  int   NumberOfFunctions;
  FunctionInfo **Functions;
  int   NumberOfConstants;
  ConstantInfo **Constants;
  int   NumberOfEnums;
  EnumInfo **Enums;
  int   IsAbstract;
  int   HasDelete;
} ClassInfo;

/* Namespace is for namespaces */
typedef struct _NamespaceInfo
{
  parse_item_t ItemType;
  parse_access_t Access;
  char *Name;  /* NULL for global namespace */
  char *Comment;
  int   NumberOfItems;
  ItemInfo **Items;
  int   NumberOfClasses;
  ClassInfo **Classes;
  int   NumberOfFunctions;
  FunctionInfo **Functions;
  int   NumberOfConstants;
  ConstantInfo **Constants;
  int   NumberOfEnums;
  EnumInfo **Enums;
  int   NumberOfNamespaces;
  struct _NamespaceInfo **Namespaces;
} NamespaceInfo;

/* FileInfo is for files */
typedef struct _FileInfo
{
  /* file information */
  char *FileName;
  char *NameComment;
  char *Description;
  char *Caveats;
  char *SeeAlso;

  NamespaceInfo *Contents;
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
