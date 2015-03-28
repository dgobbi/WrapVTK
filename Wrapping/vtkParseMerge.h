/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseMerge.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/**
 This file contains utility functions for merging together the
 methods for a class with those inherited from all superclasses.
*/

#ifndef VTK_PARSE_MERGE_H
#define VTK_PARSE_MERGE_H

#include "vtkParseData.h"

/**
 * This struct is meant to supplement ClassInfo, it gives information
 * about which class (or classes) each method was inherited from
 */
typedef struct _MergeInfo
{
  unsigned long   NumberOfClasses;    /* number of classes in geneology */
  const char    **ClassNames;         /* class name */
  unsigned long   NumberOfFunctions;  /* must match FunctionInfo */
  unsigned long  *NumberOfOverrides; /* n classes that define this function */
  unsigned long **OverrideClasses;  /* class for the override */
} MergeInfo;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Return an initialized MergeInfo
 */
MergeInfo *vtkParseMerge_CreateMergeInfo(ClassInfo *classInfo);

/**
 * Free the MergeInfo
 */
void vtkParseMerge_FreeMergeInfo(MergeInfo *info);

/**
 * Add newclass methods to the merge.  They are removed from newclass
 * if they are added to merge, so that both structs can be freed without
 * freeing the elements twice.
 */
unsigned long vtkParseMerge_Merge(
  MergeInfo *info,
  ClassInfo *merge,
  ClassInfo *newclass);

/**
 * Merge all inherited methods into the ClassInfo.
 * This will find and parse the header files for all the superclasses,
 * and recursively add all inherited superclass methods into one ClassInfo.
 * The returned MergeInfo object provides information about which class
 * each inherited method was inherited from.
 */
MergeInfo *vtkParseMerge_MergeSuperClasses(
  FileInfo *finfo, NamespaceInfo *data, ClassInfo *classInfo);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
