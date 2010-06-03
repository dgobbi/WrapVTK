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
#define MAX_FUNCTIONS 1000
#define MAX_CLASSES 20
#define MAX_SUPERCLASSES 10

typedef struct _FunctionInfo
{
  char *Name;
  int   IsPureVirtual;
  int   IsPublic;
  int   IsProtected;
  int   IsOperator;
  int   ArrayFailure;
  int   NumberOfArguments;
  int   ArgTypes[MAX_ARGS];
  int   ArgCounts[MAX_ARGS];
  char *ArgClasses[MAX_ARGS];
  int   ReturnType;
  char *ReturnClass;
  int   HaveHint;
  int   HintSize;
  char *Comment;
  char *Signature;
  int   IsLegacy;
} FunctionInfo;

typedef struct _ClassInfo
{
  char *ClassName;
  int   IsAbstract;
  int   HasDelete;
  int   NumberOfSuperClasses;
  char *SuperClasses[MAX_SUPERCLASSES];
  int   NumberOfFunctions;
  FunctionInfo *Functions[MAX_FUNCTIONS];
} ClassInfo;

typedef struct _FileInfo
{
  /* file information */
  char *FileName;
  char *NameComment;
  char *Description;
  char *Caveats;
  char *SeeAlso;
  int   NumberOfClasses;
  ClassInfo *Classes[MAX_CLASSES];
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

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
