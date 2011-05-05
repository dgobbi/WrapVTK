/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseExtras.h

  Copyright (c) 2011 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

/**
 * This file contains methods for handling typedefs and templates.
 */

#ifndef VTK_PARSE_TYPES_H
#define VTK_PARSE_TYPES_H

#include "vtkParse.h"
#ifdef __cplusplus
extern "C" {
#endif

/**
 * Generate a ValueInfo by parsing the type from the provided text.
 * Only simple text strings are supported, e.g. "const T **".
 */
void vtkParse_ValueInfoFromString(ValueInfo *val, const char *text);

/**
 * Expand a typedef within a variable, parameter, or typedef declaration.
 * The expansion is done in-place.
 */
void vtkParse_ExpandTypedef(ValueInfo *valinfo, ValueInfo *typedefinfo);

/**
 * Expand any unrecognized types within a variable, parameter, or typedef
 * that match any of the supplied typedefs. The expansion is done in-place.
 */
void vtkParse_ExpandTypedefs(
  ValueInfo *valinfo, unsigned long n, ValueInfo *typedefinfo[]);

/**
 * Wherever one of the specified names exists inside a Value or inside
 * a Dimension size, replace it with the corresponding val string.
 * This is used to replace constants with their values.
 */
void vtkParse_ExpandValues(
  ValueInfo *valinfo, unsigned long n, const char *name[], const char *val[]);

/**
 * Specialize a templated class by substituting the provided arguments
 * for the template parameters. If "n" is less than the number of template
 * parameters, then default parameter values (if present) will be used.
 * If an error occurs, the error will be printed to stderr and NULL will
 * be returned.
 */
void vtkParse_SpecializeTemplatedClass(
  ClassInfo *data, unsigned long n, const char *args[]);

/**
 * Specialize a templated function or class method by substituting the
 * provided arguments for the template parameters.  If "n" is less than
 * the number of template parameters, then default parameter values
 * (if present) will be used.  If an error occurs, the error will be
 * printed to stderr and NULL will be returned.
 */
void vtkParse_SpecializeTemplatedFunction(
  FunctionInfo *data, unsigned long n, const char *args);


#ifdef __cplusplus
} /* extern "C" */
#endif

#endif

