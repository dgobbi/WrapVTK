/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseMerge.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/*
 This file contains utility functions for merging together the
 methods for a class with those inherited from all superclasses.
 If you include this header, you must also include vtkParse.h
 and vtkParseHierarchy.h
*/

#ifndef VTK_PARSE_MERGE_H
#define VTK_PARSE_MERGE_H

/* This struct is meant to supplement ClassInfo, it gives information
 * about which class (or classes) each method was inherited from */
typedef struct _MergeInfo
{
  int NumberOfClasses;     /* number of classes in geneology */
  char **ClassNames;       /* class name */
  int NumberOfFunctions;   /* must match corresponding FunctionInfo */
  int *NumberOfOverrides;  /* number of classes that define this function */
  int **OverrideClasses;   /* class for the override */
} MergeInfo;

/* forward declarations from vtkParse.h */
struct _FileInfo;
struct _ClassInfo;
struct _HierarchyInfo;

#ifdef __cplusplus
extern "C" {
#endif

/* return an initialized MergeInfo */
MergeInfo *vtkParseMerge_CreateMergeInfo(struct _ClassInfo *classInfo);

/* free the MergeInfo */
void vtkParseMerge_FreeMergeInfo(MergeInfo *info);

/* add newclass methods to the merge */
int vtkParseMerge_Merge(
  MergeInfo *info,
  struct _ClassInfo *merge,
  const struct _ClassInfo *newclass);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif