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

#define typeBaseType(x)     ((x) & VTK_PARSE_BASE_TYPE)

#define typeIndirection(x) ((x) & VTK_PARSE_INDIRECT)
#define typeIsIndirect(x) (typeIndirection(x) != 0)
#define typeIsPointer(x) (typeIndirection(x) == VTK_PARSE_POINTER || \
                          typeIndirection(x) == VTK_PARSE_POINTER_REF || \
                          typeIndirection(x) == VTK_PARSE_POINTER_POINTER)
#define typeIsReference(x) (typeIndirection(x) == VTK_PARSE_REF || \
                            typeIndirection(x) == VTK_PARSE_POINTER_REF)

#define typeDecorator(x)    (((x) & 0x4000) ? 0 : ((x) & VTK_PARSE_QUALIFIER))
#define typeHasDecorator(x) (typeDecorator(x) != 0)
#define typeIsStatic(x)     ((typeDecorator(x) & VTK_PARSE_STATIC) != 0)
#define typeIsConst(x)      ((typeDecorator(x) & VTK_PARSE_CONST) != 0)

#define typeIsFunction(x)   ((x) == VTK_PARSE_FUNCTION)

#ifdef __cplusplus
extern "C" {
#endif

/* return the base type as a VTK type constant */
int parseBaseTypeAsVTKType(int type);

/* return the storage class decorator as a string, with possible
 * return values being "", "const", "static", and "static const" */
const char *parseStorageClassAsString(int type);

/* return the indirection decorators as a string, with possible
 * return values "", "&", "&&", "*", "**", and "*&" */
const char *parseIndirectionAsString(int type);

/* return the base type as a string,
 * prefix with "unsigned" if the type is unsigned,
 * return second arg "vtkname" if type is a vtkObject,
 * return "function" if type is a function pointer,
 * return empty string for impossible types */
const char *parseBaseTypeAsString(int type, const char *vtkname);

/* return the base type constant name as a string, i.e. 
 * VTK_PARSE_INT -> "INT" */
const char *parseTypeConstAsString(int type);

#ifdef __cplusplus
}
#endif


#endif
