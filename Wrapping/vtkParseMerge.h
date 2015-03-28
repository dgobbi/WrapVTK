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
 * Merge all inherited methods into the ClassInfo.
 * This will find and parse the header files for all the superclasses,
 * and recursively add all inherited superclass methods into one ClassInfo.
 * The returned MergeInfo object provides information about which class
 * each inherited method was inherited from.
 */
MergeInfo *vtkParseMerge_MergeSuperClasses(
  FileInfo *finfo, NamespaceInfo *data, ClassInfo *classInfo);

/**
 * Free the MergeInfo object.
 */
void vtkParseMerge_FreeMergeInfo(MergeInfo *info);

/**
 * Apply any using declarations that appear in the class.
 * If any using declarations appear in the class that refer to superclass
 * methods, the superclass header file will be parsed and the used methods
 * will be brought into the class.
 */
void vtkParseMerge_ApplyUsingDeclarations(
  FileInfo *finfo, NamespaceInfo *data, ClassInfo *classInfo);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
