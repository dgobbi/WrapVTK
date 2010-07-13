/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseInternal.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

/*
  This is an internal header for vtkParse.y, it contains methods for
  manipulating the data structures that are not meant for general
  use by the wrappers, and that are likely to change over time.
*/

#ifndef VTK_PARSE_PRIVATE_H
#define VTK_PARSE_PRIVATE_H

#include "vtkParse.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * This macro is used to add elements to the info structs,
 * it handles memory management and grows the arrays when needed.
 */
#define vtkParse_AddItemMacro(theStruct, theElement, theValue) \
  vtkParse_AddItemToArray(&(theStruct)->Items, \
    &(theStruct)->NumberOfItems, theValue->ItemType,\
    (theStruct)->NumberOf##theElement); \
  vtkParse_AddPointerToArray(&(theStruct)->theElement, \
    &(theStruct)->NumberOf##theElement, theValue)

/**
 * Add to an array that doesn't have a separate Items array
 * that all item types are added to
 */
#define vtkParse_AddItemMacro2(theStruct, theElement, theValue) \
  vtkParse_AddPointerToArray(&(theStruct)->theElement, \
    &(theStruct)->NumberOf##theElement, theValue);

/**
 * This function is the back-end to vtkParse_AddItemMacro()
 */
void vtkParse_AddPointerToArray(void *valueArray, unsigned long *count,
                                const void *value);

/**
 * This function is also part of vtkParse_AddItemMacro()
 */
void vtkParse_AddItemToArray(
  ItemInfo **valueArray, unsigned long *count,
  parse_item_t type, unsigned long index);

/**
 * String-specific version to avoid const warnings.
 */
void vtkParse_AddStringToArray(const char ***valueArray, unsigned long *count,
                               const char *value);

/**
 * Initializer methods
 */
/*@{*/
void vtkParse_InitFile(FileInfo *file_info);
void vtkParse_InitNamespace(NamespaceInfo *namespace_info);
void vtkParse_InitClass(ClassInfo *cls);
void vtkParse_InitFunction(FunctionInfo *func);
void vtkParse_InitValue(ValueInfo *val);
void vtkParse_InitEnum(EnumInfo *item);
void vtkParse_InitTemplateArgs(TemplateArgs *arg);
void vtkParse_InitTemplateArg(TemplateArg *arg);
/*@}*/

/**
 * Ignore BTX/ETX markers
 */
void vtkParse_SetIgnoreBTX(int option);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
