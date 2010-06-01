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

#include "vtkParseType.h"
#include <stdio.h>

#define MAX_ARGS 20  

  typedef struct _FunctionInfo
  {
    char *Name;
    int   NumberOfArguments;
    int   ArrayFailure;
    int   IsPureVirtual;
    int   IsPublic;
    int   IsProtected;
    int   IsOperator;
    int   HaveHint;
    int   HintSize;
    int   ArgTypes[MAX_ARGS];
    int   ArgCounts[MAX_ARGS];
    char *ArgClasses[MAX_ARGS];
    int   ReturnType;
    char *ReturnClass;
    char *Comment;
    char *Signature;
    int   IsLegacy;
  } FunctionInfo;
  
  typedef struct _FileInfo
  {
    int   HasDelete;
    int   IsAbstract;
    int   IsConcrete;
    int   IsVTKObject;
    char *ClassName;
    char *FileName;
    char *OutputFileName;
    char *HierarchyFileName;
    char *SuperClasses[10];
    int   NumberOfSuperClasses;
    int   NumberOfFunctions;
    FunctionInfo Functions[1000];
    char *NameComment;
    char *Description;
    char *Caveats;
    char *SeeAlso;
    char *ClassesInFile[100];
    char *ClassSuperClasses[100][10];
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


