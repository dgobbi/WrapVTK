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
const char *parseStorageClassAsString(int type)
{
  static const char *vtkStorageClassMap[4] = {
    "", "const", "static", "static const",
  };

  int i = 0;

  if (!typeIsFunction(type))
    {
    i = typeQualifier(type) / VTK_PARSE_CONST;
    }

  return vtkStorageClassMap[i];
}

/* return the indirection decorators as a string */
const char *parseIndirectionAsString(int type)
{
  /* multi-directional arrays aren't handled */
  static const char *vtkIndirectionMap[8] = {
    "", "&", "&&", "*", "&*", "*&", "*", "**",
  };

  int i = 0;

  i = (typeIndirection(type) & VTK_PARSE_POINTER_POINTER) / VTK_PARSE_REF;

  return vtkIndirectionMap[i];
}

/* return the base type as a string, or
   return "vtkname" if base type is vtkObject */
const char *parseBaseTypeAsString(int type, const char *vtkname)
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

  if (typeIsFunction(type))
    {
    return "function";
    }

  baseType = typeBaseType(type);
  if (baseType > 35 || baseType < 0)
    {
    baseType = 0;
    }

  if ((baseType == VTK_PARSE_VTK_OBJECT ||
      (baseType == VTK_PARSE_UNKNOWN)) && vtkname != 0)
    {
    return vtkname;
    }

  return vtkParseTypeNameMap[baseType];
}

/* return the base type constant as a string, or
   return "vtkname" if base type is vtkObject */

const char *parseTypeConstAsString(int type)
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

  int baseType = typeBaseType(type);
  if (baseType > 35 || baseType < 0)
    {
    baseType = 0;
    }

  return vtkParseTypeStringMap[baseType];
}

/* return the base type as a VTK type constant */
int parseBaseTypeAsVTKType(int type)
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

  int baseType = typeBaseType(type);
  if (baseType > 35 || baseType < 0)
    {
    baseType = 0;
    }

  return vtkParseTypeMap[baseType];
}

