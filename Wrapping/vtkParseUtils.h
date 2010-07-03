/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseUtils.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#ifndef VTK_PARSE_UTILS_H
#define VTK_PARSE_UTILS_H

#include "vtkParseType.h"

/* Macros and function to make vtkParse easier to use */

#define vtkParse_BaseType(x)     ((x) & VTK_PARSE_BASE_TYPE)

#define vtkParse_TypeIndirection(x) ((x) & VTK_PARSE_INDIRECT)

#define vtkParse_TypeIsIndirect(x) (vtkParse_TypeIndirection(x) != 0)

#define vtkParse_TypeIsPointer(x) \
  (vtkParse_TypeIndirection(x) == VTK_PARSE_POINTER || \
   vtkParse_TypeIndirection(x) == VTK_PARSE_CONST_POINTER || \
   vtkParse_TypeIndirection(x) == VTK_PARSE_POINTER_REF || \
   vtkParse_TypeIndirection(x) == VTK_PARSE_CONST_POINTER_REF ||\
   vtkParse_TypeIndirection(x) == VTK_PARSE_POINTER_POINTER)

#define vtkParse_TypeIsReference(x) \
  (vtkParse_TypeIndirection(x) == VTK_PARSE_REF || \
   vtkParse_TypeIndirection(x) == VTK_PARSE_POINTER_REF_REF \
   vtkParse_TypeIndirection(x) == VTK_PARSE_CONST_POINTER_REF)

#define vtkParse_TypeIsFunction(x)   ((x) == VTK_PARSE_FUNCTION)

#define vtkParse_TypeQualifier(x) \
  (vtkParse_TypeIsFunction(x) ? 0 : ((x) & VTK_PARSE_QUALIFIER))

#define vtkParse_TypeHasQualifier(x) (vtkParse_TypeQualifier(x) != 0)

#define vtkParse_TypeIsStatic(x) \
  ((vtkParse_TypeQualifier(x) & VTK_PARSE_STATIC) != 0)

#define vtkParse_TypeIsConst(x) \
  ((vtkParse_TypeQualifier(x) & VTK_PARSE_CONST) != 0)


#ifdef __cplusplus
extern "C" {
#endif

/* return the base type as a VTK type constant */
int vtkParse_BaseTypeAsVTKType(unsigned int type);

/* return the storage class decorator as a string, with possible
 * return values being "", "const", "static", and "static const" */
const char *vtkParse_StorageClassAsString(unsigned int type);

/* return the indirection decorators as a string, with possible
 * return values "", "&", "&&", "*", "**", and "*&" */
const char *vtkParse_IndirectionAsString(unsigned int type);

/* return the base type as a string,
 * prefix with "unsigned" if the type is unsigned,
 * return second arg "vtkname" if type is a vtkObject,
 * return "function" if type is a function pointer,
 * return empty string for impossible types */
const char *vtkParse_BaseTypeAsString(unsigned int type, const char *vtkname);

/* return the base type constant name as a string, i.e.
 * VTK_PARSE_INT -> "INT" */
const char *vtkParse_TypeConstAsString(unsigned int type);

#ifdef __cplusplus
}
#endif


#endif
