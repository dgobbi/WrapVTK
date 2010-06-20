/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseUtils.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

/* Utility method definitions for vtkParse */

#include <ctype.h>
#include "vtkParseUtils.h"
#include "vtkType.h"

/* return the storage class decorator as a string */
const char *vtkParse_StorageClassAsString(int type)
{
  static const char *vtkStorageClassMap[4] = {
    "", "const", "static", "static const",
  };

  int i = 0;

  if (!vtkParse_TypeIsFunction(type))
    {
    i = vtkParse_TypeQualifier(type) / VTK_PARSE_CONST;
    }

  return vtkStorageClassMap[i];
}

/* return the indirection decorators as a string */
const char *vtkParse_IndirectionAsString(int type)
{
  static const char *vtkIndirectionMap[16] = {
    "", "&", "*const ", "*",
    "*const &", "*&", 0, "**",
    "*const *", 0, 0, 0,
    0, 0, 0, 0,
  };

  int i = 0;

  i = (vtkParse_TypeIndirection(type) & VTK_PARSE_INDIRECT) / VTK_PARSE_REF;

  return vtkIndirectionMap[i];
}

/* return the base type as a string, or
   return "vtkname" if base type is vtkObject */
const char *vtkParse_BaseTypeAsString(int type, const char *vtkname)
{
  static const char *vtkParseTypeNameMap[36] = {
    "",             "float",          "void",          "char",
    "int",          "short",          "long",          "double",
    "",             "vtkObject",      "vtkIdType",     "long long",
    "__int64",      "signed char",    "bool",          "",
    "",             "",               "",              "unsigned char",
    "unsigned int", "unsigned short", "unsigned long", "",
    "",             "",               "",              "unsigned long long",
    "unsigned __int64", "",           "",              "",
    "",             "vtkStdString",   "vtkUnicodeString", ""
    };

  int baseType;

  if (vtkname && vtkname[0] != '\0')
    {
    return vtkname;
    }

  if (vtkParse_TypeIsFunction(type))
    {
    return "function";
    }

  baseType = vtkParse_BaseType(type);
  if (baseType > 35 || baseType < 0)
    {
    baseType = 0;
    }

  return vtkParseTypeNameMap[baseType];
}

/* return the base type constant as a string, or
   return "vtkname" if base type is vtkObject */

const char *vtkParse_TypeConstAsString(int type)
{
  static const char *vtkParseTypeStringMap[36] = {
    "",             "FLOAT",          "VOID",          "CHAR",
    "INT",          "SHORT",          "LONG",          "DOUBLE",
    "",             "VTK_OBJECT",     "ID_TYPE",       "LONG_LONG",
    "__INT64",      "SIGNED_CHAR",    "BOOL",          "",
    "",             "",               "",              "UNSIGNED_CHAR",
    "UNSIGNED_INT", "UNSIGNED_SHORT", "UNSIGNED_LONG", "",
    "",             "",               "",              "UNSIGNED_LONG_LONG",
    "UNSIGNED___INT64", "",           "",              "",
    "",             "STRING",         "UNICODE_STRING",""
    };

  int baseType = vtkParse_BaseType(type);
  if (baseType > 35 || baseType < 0)
    {
    baseType = 0;
    }

  return vtkParseTypeStringMap[baseType];
}

/* return the base type as a VTK type constant */
int vtkParse_BaseTypeAsVTKType(int type)
{
  static const int vtkParseTypeMap[36] = {
    0,                VTK_FLOAT,        VTK_VOID,       VTK_CHAR,
    VTK_INT,          VTK_SHORT,        VTK_LONG,       VTK_DOUBLE,
    0,                VTK_OBJECT,       VTK_ID_TYPE,    VTK_LONG_LONG,
    VTK___INT64,      VTK_SIGNED_CHAR,  VTK_BIT,        0,
    0,                0,                0,              VTK_UNSIGNED_CHAR,
    VTK_UNSIGNED_INT, VTK_UNSIGNED_SHORT, VTK_UNSIGNED_LONG, 0,
    0,                0,                0,              VTK_UNSIGNED_LONG_LONG,
    VTK_UNSIGNED___INT64,  0,           0,              0,
    0,                VTK_STRING,       VTK_UNICODE_STRING, 0
    };

  int baseType = vtkParse_BaseType(type);
  if (baseType > 35 || baseType < 0)
    {
    baseType = 0;
    }

  return vtkParseTypeMap[baseType];
}

