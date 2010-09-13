/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseHierarchy.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/**
 This file contains utility functions for loading and parsing
 a VTK hierarchy file.  The file contains entries like the
 following (one per line in the file):

 classname [ : superclass ] ; header.h

 For each typedef, the output file will have a line like this:

 name = &[2][3]* const type ; header.h

 For each enum, the output file will have:

 enumname : int ; header.h

*/

#ifndef VTK_PARSE_HIERARCHY_H
#define VTK_PARSE_HIERARCHY_H

/* Need the ValueInfo struct for typedefs */
#include "vtkParse.h"

/**
 * One entry from the hierarchy file.
 * It contains a class name, the superclasses, and the header file.
 */
typedef struct _HierarchyEntry
{
  const char  *Name;            /* the class or type name */
  const char  *HeaderFile;      /* header file the class is defined in */
  int          NumberOfSuperClasses; /* number of superclasses */
  const char **SuperClasses;
  int         *SuperClassIndex; /* for internal use only */
  int          NumberOfProperties;   /* number of properties */
  const char **Properties;
} HierarchyEntry;

/**
 * All the entries from a hierarchy file.
 */
typedef struct _HierarchyInfo
{
  int             NumberOfEntries;
  HierarchyEntry *Entries;
} HierarchyInfo;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Read a hierarchy file into a HeirarchyInfo struct, or return NULL
 */
HierarchyInfo *vtkParseHierarchy_ReadFile(const char *filename);

/**
 * Free a HierarchyInfo struct
 */
void vtkParseHierarchy_Free(HierarchyInfo *info);

/**
 * Return the entry for a class or type, or null if not found
 */
HierarchyEntry *vtkParseHierarchy_FindEntry(
  const HierarchyInfo *info, const char *classname);

/**
 * Get properties for the class.  Returns NULL if the property
 * is not set, and returns either an empty string or a value string
 * if the property is set. The properties supported are as follows:
 * "WRAP_EXCLUDE", "WRAP_SPECIAL", and "ABSTRACT"
 */
const char *vtkParseHierarchy_GetProperty(
  const HierarchyEntry *entry, const char *property);

/**
 * Check whether class is derived from superclass
 */
int vtkParseHierarchy_IsTypeOf(const HierarchyInfo *info,
  const HierarchyEntry *entry, const char *superclass);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
