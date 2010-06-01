/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseVariables.h

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

/* structures and methods for finding variables based on the Set and Get
 * functions defined in the FileInfo struct created by vtkParse */

#ifndef VTK_PARSE_VARIABLES_H
#define VTK_PARSE_VARIABLES_H

/*-------------------------------------------------------------------
 * bitfield values to say what methods are available for a variable
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
 * */

#define VTKVAR_BASIC_GET  0x00000001
#define VTKVAR_BASIC_SET  0x00000002
#define VTKVAR_MULTI_GET  0x00000004
#define VTKVAR_MULTI_SET  0x00000008
#define VTKVAR_INDEX_GET  0x00000010
#define VTKVAR_INDEX_SET  0x00000020
#define VTKVAR_NTH_GET    0x00000040
#define VTKVAR_NTH_SET    0x00000080
#define VTKVAR_RHS_GET    0x00000100
#define VTKVAR_INDEX_RHS_GET 0x00000200
#define VTKVAR_NTH_RHS_GET 0x000000400
#define VTKVAR_STRING_GET 0x00001000
#define VTKVAR_ENUM_SET   0x00002000
#define VTKVAR_BOOL_ON    0x00004000
#define VTKVAR_BOOL_OFF   0x00008000
#define VTKVAR_MIN_GET    0x00010000
#define VTKVAR_MAX_GET    0x00020000
#define VTKVAR_GET_NUM    0x00040000
#define VTKVAR_SET_NUM    0x00080000
#define VTKVAR_BASIC_ADD  0x00100000
#define VTKVAR_MULTI_ADD  0x00200000
#define VTKVAR_INDEX_ADD  0x00400000
#define VTKVAR_BASIC_REM  0x01000000
#define VTKVAR_INDEX_REM  0x04000000
#define VTKVAR_REMOVEALL  0x08000000

/*-------------------------------------------------------------------
 * A struct that contains all the variable information that
 * can be ascertained from the vtkParse info */

typedef struct _VariableAttributes
{
  const char *Name;          /* variable name */
  const char *ClassName;     /* VTK object type of the variable, or NULL */
  int Type;                  /* variable type as VTK_PARSE constant */
  int Count;                 /* the count for array-type variables */
  const char **EnumConstantNames;  /* the names of int enum values */
  unsigned int PublicMethods;      /* bitfield for public methods */
  unsigned int ProtectedMethods;   /* bitfield for protected methods */
  unsigned int PrivateMethods;     /* bitfield for private methods */
  unsigned int LegacyMethods;      /* bitfield for legacy methods */
  const char *Comment;       /* comment from header file */
  unsigned int ExtraFlags;   /* flags for any extra variable info */
  void *Extra;               /* pointer to extra variable info */
} VariableAttributes;

/* these 4 bits are reserved for when Extra points to cached values */
#define VTKVAR_EXTRA_VALUES  0x00000000F

/* List of methods for accessing/changing variables */

typedef struct _ClassVariables
{
  int NumberOfVariables;
  VariableAttributes *Variables;
} ClassVariables;

struct _FileInfo;

#ifdef __cplusplus
extern "C" {
#endif

/* function to build the ClassVariables struct from a FileInfo struct */

ClassVariables *vtkParseVariables_Create(struct _FileInfo *data);
void vtkParseVariables_Free(ClassVariables *variables);

/* function to convert a method bitfield value to a string */

const char *vtkParseVariables_MethodTypeAsString(unsigned int methodType);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif

