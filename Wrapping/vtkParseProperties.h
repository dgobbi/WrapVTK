/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseProperties.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

/**
 * This file contains structures and methods for finding properties
 * based on the Set and Get functions defined in the ClassInfo struct
 * created by vtkParse
 */

#ifndef VTK_PARSE_PROPERTIES_H
#define VTK_PARSE_PROPERTIES_H

#include "vtkParse.h"

/**
 * bitfield values to say what methods are available for a property
 *
 * BASIC_GET is "type GetValue()" or "type *GetValue()"
 * BASIC_SET is "void SetValue(type)" or "type SetValue(type [])"
 * MULTI_GET is "void GetValue(type&, type&, type&)"
 * MULTI_SET is "void SetValue(type, type, type)"
 * INDEX_GET is "type GetValue(int)" or "type *GetValue(int)"
 * INDEX_SET is "void SetValue(int, type)" or "void SetValue(int, type [])"
 * NTH_GET   is "type GetNthValue(int)" or "type *GetNthValue(int)"
 * NTH_SET   is "void SetNthValue(int,type)" or "void SetNthValue(int,type[])"
 * RHS_GET is "void GetValue(type *)"
 * INDEX_RHS_GET is "void GetValue(int, type [])"
 * NTH_RHS_GET is "void GetNthValue(int, type [])"
 * STRING_GET is "const char *GetValueAsString()"
 * ENUM_SET  is "void SetValueToEnumVal()"
 * BOOL_ON   is "void ValueOn()"
 * BOOL_OFF  is "void ValueOff()"
 * MIN_GET   is "type GetVarMinValue()"
 * MAX_GET   is "type GetVarMaxValue()"
 * GET_NUM   is "int GetNumberOfValues()"
 * SET_NUM   is "void SetNumberOfValues(int)"
 * BASIC_ADD is "void AddValue(type)"
 * MULTI_ADD is "void AddValue(type, type, type)"
 * INDEX_ADD is "void AddValue(int, type)"
 * BASIC_REM is "void RemoveValue(type)"
 * INDEX_REM is "void RemoveValue(int, type)"
 * REMOVEALL is "void RemoveAllValues()"
 *
 * Items marked with two asterisks are not yet implemented.
 *
 */
#define VTK_METHOD_BASIC_GET  0x00000001
#define VTK_METHOD_BASIC_SET  0x00000002
#define VTK_METHOD_MULTI_GET  0x00000004
#define VTK_METHOD_MULTI_SET  0x00000008
#define VTK_METHOD_INDEX_GET  0x00000010
#define VTK_METHOD_INDEX_SET  0x00000020
#define VTK_METHOD_NTH_GET    0x00000040
#define VTK_METHOD_NTH_SET    0x00000080
#define VTK_METHOD_RHS_GET    0x00000100
#define VTK_METHOD_INDEX_RHS_GET 0x00000200
#define VTK_METHOD_NTH_RHS_GET 0x000000400
#define VTK_METHOD_STRING_GET 0x00001000
#define VTK_METHOD_ENUM_SET   0x00002000
#define VTK_METHOD_BOOL_ON    0x00004000
#define VTK_METHOD_BOOL_OFF   0x00008000
#define VTK_METHOD_MIN_GET    0x00010000
#define VTK_METHOD_MAX_GET    0x00020000
#define VTK_METHOD_GET_NUM    0x00040000
#define VTK_METHOD_SET_NUM    0x00080000
#define VTK_METHOD_BASIC_ADD  0x00100000
#define VTK_METHOD_MULTI_ADD  0x00200000
#define VTK_METHOD_INDEX_ADD  0x00400000
#define VTK_METHOD_BASIC_REM  0x01000000
#define VTK_METHOD_INDEX_REM  0x04000000
#define VTK_METHOD_REMOVEALL  0x08000000

/**
 * A struct that contains all the property information that
 * can be ascertained from the vtkParse info
 */
typedef struct _PropertyInfo
{
  const char   *Name;               /* property name */
  unsigned int  Type;               /* property type as VTK_PARSE constant */
  unsigned long Count;              /* the count for array-type properties */
  const char   *ClassName;     /* VTK object type of the property, or NULL */
  const char  **EnumConstantNames;  /* the names of int enum values */
  unsigned int  PublicMethods;      /* bitfield for public methods */
  unsigned int  ProtectedMethods;   /* bitfield for protected methods */
  unsigned int  PrivateMethods;     /* bitfield for private methods */
  unsigned int  LegacyMethods;      /* bitfield for legacy methods */
  const char   *Comment;            /* comment from header file */
  int           IsStatic;           /* if the property is static */
} PropertyInfo;

/**
 * List of methods for accessing/changing properties
 */
typedef struct _ClassProperties
{
  unsigned long  NumberOfProperties; /* total number of properties found */
  PropertyInfo **Properties;         /* info for each property */
  unsigned long  NumberOfMethods;    /* number of methods in FunctionInfo */
  unsigned int  *MethodTypes;        /* discovered type of each method */
  int           *MethodHasProperty;  /* method has a property */
  unsigned long *MethodProperties;   /* discovered property for each method */
} ClassProperties;

/* forward declaration of _ClassInfo */
struct _ClassInfo;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Build the ClassProperties struct from a ClassInfo struct
 */
ClassProperties *vtkParseProperties_Create(struct _ClassInfo *data);

/**
 * Free a ClassProperties struct
 */
void vtkParseProperties_Free(ClassProperties *properties);

/**
 * Convert a method bitfield to a string,
 * e.g. VTK_METHOD_BASIC_GET -> "METHOD_BASIC_GET"
 */
const char *vtkParseProperties_MethodTypeAsString(unsigned int methodType);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif

