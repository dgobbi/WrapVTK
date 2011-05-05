/*=========================================================================

  Program:   WrapVTK
  Module:    vtkParseExtras.c

  Copyright (c) 2011 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.

=========================================================================*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "vtkParse.h"
#include "vtkParseInternal.h"
#include "vtkParseExtras.h"
#include "vtkType.h"

/* Search and replace, return the initial string if no replacements
 * occurred, otherwise return a new string. */
static const char *vtkParse_Replace(
  const char *str1, unsigned long n, const char *name[], const char *val[])
{
  const char *cp = str1;
  char result_store[1024];
  size_t resultMaxLen = 1024;
  char *result, *tmp;
  unsigned long k;
  size_t i, j, l, m;
  size_t lastPos, nameBegin, nameEnd;
  int replaced = 0;
  int any_replaced = 0;

  result = result_store;

  if (n == 0)
    {
    return str1;
    }

  i = 0;
  j = 0;
  result[j] = '\0';

  while (cp[i] != '\0')
    {
    lastPos = i;

    /* skip all chars that aren't part of a name */
    while ((cp[i] < 'a' || cp[i] > 'z') &&
           (cp[i] < 'A' || cp[i] > 'Z') &&
           cp[i] != '_' && cp[i] != '\0') { i++; }
    nameBegin = i;

    /* skip all chars that are part of a name */
    while ((cp[i] >= 'a' && cp[i] <= 'z') ||
           (cp[i] >= 'A' && cp[i] <= 'Z') ||
           (cp[i] >= '0' && cp[i] <= '9') ||
           cp[i] == '_') { i++; }
    nameEnd = i;

    /* search through the list of names to replace */
    replaced = 0;
    m = nameEnd - nameBegin;
    for (k = 0; k < n; k++)
      {
      l = strlen(name[k]);
      if (l > 0 && l == m && strncmp(&cp[nameBegin], name[k], l) == 0)
        {
        m = strlen(val[k]);
        replaced = 1;
        any_replaced = 1;
        break;
        }
      }

    /* expand the storage space if needed */
    if (j + m + (nameBegin - lastPos) >= resultMaxLen)
      {
      resultMaxLen *= 2;
      tmp = (char *)malloc(resultMaxLen);
      strcpy(tmp, result);
      if (result != result_store)
         {
         free(result);
         }
       result = tmp;
       }

    /* copy the old bits */
    if (nameBegin > lastPos)
      {
      strncpy(&result[j], &cp[lastPos], nameBegin - lastPos);
      j += (nameBegin - lastPos);
      }

    /* do the replacement */
    if (replaced)
      {
      strncpy(&result[j], val[k], m);
      j += m;
      }
    else if (nameEnd > nameBegin)
      {
      strncpy(&result[j], &cp[nameBegin], nameEnd - nameBegin);
      j += (nameEnd - nameBegin);
      }

    result[j] = '\0';
    }

  if (any_replaced)
    {
    cp = vtkParse_DuplicateString(result, j);
    }

  if (result != result_store)
    {
    free(result);
    }

  return cp;
}

/* Wherever one of the specified names exists inside a Value or inside
 * a Dimension size, replace it with the corresponding val string. */
void vtkParse_ExpandValues(
  ValueInfo *valinfo, unsigned long n, const char *name[], const char *val[])
{
  unsigned long j, m, dim, count;
  const char *cp;

  if (valinfo->Class)
    {
    valinfo->Class = vtkParse_Replace(valinfo->Class, n, name, val);
    }

  if (valinfo->Value)
    {
    valinfo->Value = vtkParse_Replace(valinfo->Value, n, name, val);
    }

  m = valinfo->NumberOfDimensions;
  if (m)
    {
    count = 1;
    for (j = 0; j < m; j++)
      {
      cp = valinfo->Dimensions[j];
      if (cp)
        {
        cp = vtkParse_Replace(cp, n, name, val);
        valinfo->Dimensions[j] = cp;
        while (*cp != '\0' && *cp >= '0' && *cp <= '9') { cp++; }
        while (*cp != '\0' && (*cp == 'u' || *cp == 'l' ||
                               *cp == 'U' || *cp == 'L')) { cp++; }
        dim = 0;
        if (*cp == '\0')
          {
          dim = (int)strtol(valinfo->Dimensions[j], NULL, 0);
          }
        count *= dim;
        }
      }

    /* update count if all values are integer literals */
    if (count)
      {
      valinfo->Count = count;
      }
    }
}

/* Expand a typedef within a type declaration. */
void vtkParse_ExpandTypedef(ValueInfo *valinfo, ValueInfo *typedefinfo)
{
  const char *classname;
  unsigned int baseType;
  unsigned int pointers;
  unsigned int refbit;
  unsigned int qualifiers;
  unsigned int tmp1, tmp2;
  unsigned long i;

  classname = typedefinfo->Class;
  baseType = (typedefinfo->Type & VTK_PARSE_BASE_TYPE);
  pointers = (typedefinfo->Type & VTK_PARSE_POINTER_MASK);
  refbit = (valinfo->Type & VTK_PARSE_REF);
  qualifiers = (typedefinfo->Type & VTK_PARSE_CONST);

  /* handle const */
  if ((valinfo->Type & VTK_PARSE_CONST) != 0)
    {
    if ((pointers & VTK_PARSE_POINTER_LOWMASK) != 0)
      {
      if ((pointers & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_ARRAY)
        {
        /* const turns into const pointer */
        pointers = (pointers & ~VTK_PARSE_POINTER_LOWMASK);
        pointers = (pointers | VTK_PARSE_CONST_POINTER);
        }
      }
    else
      {
      /* const remains as const value */
      qualifiers = (qualifiers | VTK_PARSE_CONST);
      }
    }

  /* make a reversed copy of the pointer bitfield */
  tmp1 = (valinfo->Type & VTK_PARSE_POINTER_MASK);
  tmp2 = 0;
  while (tmp1)
    {
    tmp2 = ((tmp2 << 2) | (tmp1 & VTK_PARSE_POINTER_LOWMASK));
    tmp1 = ((tmp1 >> 2) & VTK_PARSE_POINTER_MASK);
    }

  /* turn pointers into zero-element arrays where necessary */
  if ((pointers & VTK_PARSE_POINTER_LOWMASK) == VTK_PARSE_ARRAY)
    {
    tmp2 = ((tmp2 >> 2) & VTK_PARSE_POINTER_MASK);
    while (tmp2)
      {
      vtkParse_AddStringToArray(
        &valinfo->Dimensions, &valinfo->NumberOfDimensions, "");
      tmp2 = ((tmp2 >> 2) & VTK_PARSE_POINTER_MASK);
      }
    }
  else
    {
    /* combine the pointers */
    while (tmp2)
      {
      pointers = ((pointers << 2) | (tmp2 & VTK_PARSE_POINTER_LOWMASK));
      tmp2 = ((tmp2 >> 2) & VTK_PARSE_POINTER_MASK);
      }
    }

  /* combine the arrays */
  for (i = 0; i < typedefinfo->NumberOfDimensions; i++)
    {
    vtkParse_AddStringToArray(
      &valinfo->Dimensions, &valinfo->NumberOfDimensions,
      typedefinfo->Dimensions[i]);
    }
  if (valinfo->NumberOfDimensions > 1)
    {
    pointers = ((pointers & ~VTK_PARSE_POINTER_LOWMASK) | VTK_PARSE_ARRAY);
    }
    
  /* put everything together */
  valinfo->Type = (baseType | pointers | refbit | qualifiers);
  valinfo->Class = classname;
  valinfo->Function = typedefinfo->Function;
  valinfo->Count *= typedefinfo->Count;
}

/* Expand any unrecognized types within a variable, parameter, or typedef
 * that match any of the supplied typedefs. The expansion is done in-place. */
void vtkParse_ExpandTypedefs(
  ValueInfo *val, unsigned long n, ValueInfo *typedefinfo[])
{
  unsigned long i;

  if (((val->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_OBJECT ||
       (val->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_UNKNOWN) &&
      val->Class != 0)
   {
   for (i = 0; i < n; i++)
     {
     if (typedefinfo[i] && strcmp(val->Class, typedefinfo[i]->Name) == 0)
       {
       vtkParse_ExpandTypedef(val, typedefinfo[i]);
       break;
       }
     }
   }
}

/* Parse a type description in "text" and generate a typedef named "name" */
void vtkParse_ValueInfoFromString(ValueInfo *data, const char *text)
{
  const char *cp = text;
  char *tmp;
  size_t k, n;
  unsigned long m, count;
  unsigned int const_bits = 0;
  unsigned int unsigned_bits = 0;
  unsigned int base_bits = 0;
  unsigned int pointer_bits = 0;
  const char *classname = NULL;

  while (*cp == ' ' || *cp == '\t') { cp++; }

  if (strncmp(cp, "static", 6) == 0 &&
      (cp[6] < 'a' || cp[6] > 'z') &&
      (cp[6] < 'A' || cp[6] > 'Z') &&
      (cp[6] < '0' || cp[6] > '9') &&
      cp[6] != '_')
    {
    cp += 6;
    data->IsStatic = 1;
    while (*cp == ' ' || *cp == '\t') { cp++; }
    }

  while ((*cp >= 'a' && *cp <= 'z') ||
         (*cp >= 'A' && *cp <= 'Z') ||
         (*cp == '_'))
    {
    /* skip all chars that are part of a name */
    n = 0;
    while ((cp[n] >= 'a' && cp[n] <= 'z') ||
           (cp[n] >= 'A' && cp[n] <= 'Z') ||
           (cp[n] >= '0' && cp[n] <= '9') ||
           cp[n] == '_') { n++; }

    if (n == 5 && strncmp(cp, "const", n) == 0)
      {
      const_bits |= VTK_PARSE_CONST;
      }
    else if (n == 8 && strncmp(cp, "unsigned", n) == 0)
      {
      unsigned_bits |= VTK_PARSE_UNSIGNED;
      if (base_bits == 0)
        {
        classname = "int";
        base_bits = VTK_PARSE_INT;
        }
      }
    else if (n == 6 && strncmp(cp, "signed", n) == 0)
      {
      if (base_bits == VTK_PARSE_CHAR)
        {
        classname = "signed char";
        base_bits = VTK_PARSE_SIGNED_CHAR;
        }
      else
        {
        classname = "int";
        base_bits = VTK_PARSE_INT;
        }
      }
    else if (n == 3 && strncmp(cp, "int", n) == 0)
      {
      if (base_bits == 0)
        {
        classname = "int";
        base_bits = VTK_PARSE_INT;
        }
      }
    else if (n == 4 && strncmp(cp, "long", n) == 0)
      {
      if (base_bits == VTK_PARSE_LONG)
        {
        classname = "long long";
        base_bits = VTK_PARSE_LONG_LONG;
        }
      else
        {
        classname = "long";
        base_bits = VTK_PARSE_LONG;
        }
      }
    else if (n == 5 && strncmp(cp, "short", n) == 0)
      {
      classname = "short";
      base_bits = VTK_PARSE_SHORT;
      }
    else if (n == 4 && strncmp(cp, "char", n) == 0)
      {
      if (base_bits == VTK_PARSE_INT && unsigned_bits != VTK_PARSE_UNSIGNED)
        {
        classname = "signed char";
        base_bits = VTK_PARSE_SIGNED_CHAR;
        }
      else
        {
        classname = "char";
        base_bits = VTK_PARSE_CHAR;
        }
      }
    else if (n == 5 && strncmp(cp, "float", n) == 0)
      {
      classname = "float";
      base_bits = VTK_PARSE_FLOAT;
      }
    else if (n == 6 && strncmp(cp, "double", n) == 0)
      {
      classname = "double";
      base_bits = VTK_PARSE_DOUBLE;
      }
    else if (n == 4 && strncmp(cp, "bool", n) == 0)
      {
      classname = "bool";
      base_bits = VTK_PARSE_BOOL;
      }
    else if (n == 4 && strncmp(cp, "void", n) == 0)
      {
      classname = "void";
      base_bits = VTK_PARSE_VOID;
      }
    else if (n == 7 && strncmp(cp, "__int64", n) == 0)
      {
      classname = "__int64";
      base_bits = VTK_PARSE___INT64;
      }
    else if (n == 6 && strncmp(cp, "size_t", n) == 0)
      {
      classname = "size_t";
      base_bits = VTK_PARSE_SIZE_T;
      }
    else if (n == 7 && strncmp(cp, "ssize_t", n) == 0)
      {
      classname = "ssize_t";
      base_bits = VTK_PARSE_SSIZE_T;
      }
    else if (n == 9 && strncmp(cp, "vtkIdType", n) == 0)
      {
      classname = "vtkIdType";
      base_bits = vtkParse_MapType(VTK_ID_TYPE);
      }
    else if (n == 11 && strncmp(cp, "vtkTypeInt8", n) == 0)
      {
      classname = "vtkTypeInt8";
      base_bits = vtkParse_MapType(VTK_TYPE_INT8);
      }
    else if (n == 12 && strncmp(cp, "vtkTypeUInt8", n) == 0)
      {
      classname = "vtkTypeUInt8";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT8);
      }
    else if (n == 12 && strncmp(cp, "vtkTypeInt16", n) == 0)
      {
      classname = "vtkTypeInt16";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT16);
      }
    else if (n == 13 && strncmp(cp, "vtkTypeUInt16", n) == 0)
      {
      classname = "vtkTypeUInt16";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT16);
      }
    else if (n == 12 && strncmp(cp, "vtkTypeInt32", n) == 0)
      {
      classname = "vtkTypeInt32";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT32);
      }
    else if (n == 13 && strncmp(cp, "vtkTypeUInt32", n) == 0)
      {
      classname = "vtkTypeUInt32";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT32);
      }
    else if (n == 12 && strncmp(cp, "vtkTypeInt64", n) == 0)
      {
      classname = "vtkTypeInt64";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT64);
      }
    else if (n == 13 && strncmp(cp, "vtkTypeUInt64", n) == 0)
      {
      classname = "vtkTypeUInt64";
      base_bits = vtkParse_MapType(VTK_TYPE_UINT64);
      }
    else if (n == 14 && strncmp(cp, "vtkTypeFloat32", n) == 0)
      {
      classname = "vtkTypeFloat32";
      base_bits = vtkParse_MapType(VTK_TYPE_FLOAT32);
      }
    else if (n == 14 && strncmp(cp, "vtkTypeFloat64", n) == 0)
      {
      classname = "vtkTypeFloat64";
      base_bits = vtkParse_MapType(VTK_TYPE_FLOAT64);
      }
    else if (n == 12 && strncmp(cp, "vtkStdString", n) == 0)
      {
      classname = "vtkStdString";
      base_bits = VTK_PARSE_STRING;
      }
    else if (n == 16 && strncmp(cp, "vtkUnicodeString", n) == 0)
      {
      classname = "vtkUnicodeString";
      base_bits = VTK_PARSE_UNICODE_STRING;
      }
    else if (strncmp(cp, "vtk", 3) == 0)
      {
      classname = vtkParse_DuplicateString(cp, n);
      base_bits = VTK_PARSE_OBJECT;
      for (k = 0; k < n; k++)
        {
        if (cp[k] == ':')
          {
          base_bits = VTK_PARSE_UNKNOWN;
          break;
          }
        }
      }
    else if (!((n == 6 && strncmp(cp, "static", n) == 0) ||
               (n == 4 && strncmp(cp, "auto", n) == 0) ||
               (n == 8 && strncmp(cp, "volatile", n) == 0)))
      {
      classname = vtkParse_DuplicateString(cp, n);
      base_bits = VTK_PARSE_UNKNOWN;
      }

    cp += n;
    while (*cp == ' ' || *cp == '\t') { cp++; }
    }

  /* look for pointers (and const pointers) */
  while (*cp == '*')
    {
    cp++;
    pointer_bits = (pointer_bits << 2);
    while (*cp == ' ' || *cp == '\t') { cp++; }
    if (strncmp(cp, "const", 5) == 0 &&
        (cp[5] < 'a' || cp[5] > 'z') &&
        (cp[5] < 'A' || cp[5] > 'Z') &&
        (cp[5] < '0' || cp[5] > '9') &&
        cp[5] != '_')
      {
      cp += 5;
      while (*cp == ' ' || *cp == '\t') { cp++; }
      pointer_bits = (pointer_bits | VTK_PARSE_CONST_POINTER);
      }
    else
      {
      pointer_bits = (pointer_bits | VTK_PARSE_POINTER);
      }
    pointer_bits = (pointer_bits & VTK_PARSE_POINTER_MASK);
    }

  /* look for the variable name */
  if ((*cp >= 'a' && *cp <= 'z') ||
      (*cp >= 'A' && *cp <= 'Z') ||
      (*cp == '_'))
    {
    /* skip all chars that are part of a name */
    n = 0;
    while ((cp[n] >= 'a' && cp[n] <= 'z') ||
           (cp[n] >= 'A' && cp[n] <= 'Z') ||
           (cp[n] >= '0' && cp[n] <= '9') ||
           cp[n] == '_') { n++; }

    data->Name = vtkParse_DuplicateString(cp, n);

    cp += n;
    while (*cp == ' ' || *cp == '\t') { cp++; }
    }

  /* look for array brackets */
  if (*cp == '[')
    {
    count = 1;
    }

  while (*cp == '[')
    {
    m = 0;
    while (*cp == ' ' || *cp == '\t') { cp++; }
    if (*cp >= '0' && *cp <= '9')
      {
      m = (int)strtol(cp, NULL, 0);
      }
    count *= m;
    n = 0;
    while (cp[n] != ']' && cp[n] != '\0' && cp[n] != '\n') { n++; }
    vtkParse_AddStringToArray(&data->Dimensions,
                              &data->NumberOfDimensions,
                              vtkParse_DuplicateString(cp, n));
    cp += n;
    if (cp[n] == ']') { cp++; }
    while (*cp == ' ' || *cp == '\t') { cp++; }
    }

  if ((unsigned_bits & VTK_PARSE_UNSIGNED) != 0 &&
      (base_bits & VTK_PARSE_UNSIGNED) == 0)
    {
    n = strlen(classname) + 9;
    tmp = (char *)malloc(n+1);
    strcpy(tmp, "unsigned ");
    strcpy(&tmp[9], classname);
    classname = vtkParse_DuplicateString(tmp, n);
    free(tmp);
    }

  data->Class = classname;

  /* add pointer indirection to correspond to first array dimension */
  if (data->NumberOfDimensions > 1)
    {
    pointer_bits = ((pointer_bits << 2) | VTK_PARSE_ARRAY);
    }
  else if (data->NumberOfDimensions == 1)
    {
    pointer_bits = ((pointer_bits << 2) | VTK_PARSE_POINTER);
    }
  pointer_bits = (pointer_bits & VTK_PARSE_POINTER_MASK);

  data->Type = (pointer_bits | base_bits | unsigned_bits | const_bits);
}

/* substitute template types and values with specialized types and values */
static void func_substitution(
  FunctionInfo *data, unsigned long m, const char *arg_names[],
  const char *arg_values[], ValueInfo *arg_types[]);

static void value_substitution(
  ValueInfo *data, unsigned long m, const char *arg_names[],
  const char *arg_values[], ValueInfo *arg_types[])
{
  vtkParse_ExpandValues(data, m, arg_names, arg_values);
  vtkParse_ExpandTypedefs(data, m, arg_types);

  if (data->Function)
    {
    func_substitution(data->Function, m, arg_names, arg_values, arg_types);
    }
}

static void func_substitution(
  FunctionInfo *data, unsigned long m, const char *arg_names[],
  const char *arg_values[], ValueInfo *arg_types[])
{
  unsigned long i, n;

  n = data->NumberOfArguments;
  for (i = 0; i < n; i++)
    {
    value_substitution(data->Arguments[i], m, arg_names, arg_values, arg_types);
    if (i < MAX_ARGS)
      {
      data->ArgTypes[i] = data->Arguments[i]->Type;
      data->ArgClasses[i] = data->Arguments[i]->Class;
      if (data->Arguments[i]->NumberOfDimensions == 1 &&
          data->Arguments[i]->Count > 0)
        {
        data->ArgCounts[i] = data->Arguments[i]->Count;
        }
      }
    }
  if (data->ReturnValue)
    {
    value_substitution(data->ReturnValue, m, arg_names, arg_values, arg_types);
    data->ReturnType = data->ReturnValue->Type;
    data->ReturnClass = data->ReturnValue->Class;
    if (data->ReturnValue->NumberOfDimensions == 1 &&
        data->ReturnValue->Count > 0)
      {
      data->HintSize = data->ReturnValue->Count;
      data->HaveHint = 1;
      }
    }
  if (data->Signature)
    {
    data->Signature =
      vtkParse_Replace(data->Signature, m, arg_names, arg_values);
    }
}

static void class_substitution(
  ClassInfo *data, unsigned long m, const char *arg_names[],
  const char *arg_values[], ValueInfo *arg_types[])
{
  unsigned long i, n;

  /* superclasses may be templated */
  n = data->NumberOfSuperClasses;
  for (i = 0; i < n; i++)
    {
    data->SuperClasses[i] = vtkParse_Replace(
      data->SuperClasses[i], m, arg_names, arg_values);
    }

  n = data->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_substitution(data->Classes[i], m, arg_names, arg_values, arg_types);
    }

  n = data->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    func_substitution(data->Functions[i], m, arg_names, arg_values, arg_types);
    }

  n = data->NumberOfConstants;
  for (i = 0; i < n; i++)
    {
    value_substitution(data->Constants[i], m, arg_names, arg_values, arg_types);
    }

  n = data->NumberOfVariables;
  for (i = 0; i < n; i++)
    {
    value_substitution(data->Variables[i], m, arg_names, arg_values, arg_types);
    }

  n = data->NumberOfTypedefs;
  for (i = 0; i < n; i++)
    {
    value_substitution(data->Typedefs[i], m, arg_names, arg_values, arg_types);
    }
}

/* Specialize a templated class by substituting the provided arguments. */
void vtkParse_SpecializeTemplatedClass(
  ClassInfo *data, unsigned long n, const char *args[])
{
  TemplateArgs *t = data->Template;
  const char **new_args = NULL;
  const char **arg_names = NULL;
  ValueInfo **arg_types = NULL;
  unsigned long i, m;

  if (t == NULL)
    {
    fprintf(stderr, "vtkParse_SpecializeTemplatedClass: "
            "attempt to specialize a non-templated class.\n");
    return;
    }

  m = t->NumberOfArguments;
  if (n > m)
    {
    fprintf(stderr, "vtkParse_SpecializeTemplatedClass: "
            "too many template args.\n");
    return;
    }

  for (i = n; i < m; i++)
    {
    if (t->Arguments[i]->Value == NULL ||
        t->Arguments[i]->Value[0] == '\0')
      {
      fprintf(stderr, "vtkParse_SpecializeTemplatedClass: "
              "too few template args.\n");
      return;
      }
    }

  if (n < m)
    {
    new_args = (const char **)malloc(m*sizeof(char **));
    for (i = 0; i < n; i++)
      {
      new_args[i] = args[i];
      }
    for (i = n; i < m; i++)
      {
      new_args[i] = t->Arguments[i]->Value;
      }
    args = new_args;
    }

  arg_names = (const char **)malloc(m*sizeof(char **));
  arg_types = (ValueInfo **)malloc(m*sizeof(ValueInfo *));
  for (i = 0; i < m; i++)
    {
    arg_names[i] = t->Arguments[i]->Name;
    arg_types[i] = NULL;
    if (t->Arguments[i]->Type == 0)
      {
      arg_types[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(arg_types[i]);
      vtkParse_ValueInfoFromString(arg_types[i], args[i]);
      arg_types[i]->ItemType = VTK_TYPEDEF_INFO;
      arg_types[i]->Name = arg_names[i];
      }
    }

  /* no longer templated (has been specialized) */
  if (data->Template)
    {
    vtkParse_FreeTemplateArgs(data->Template);
    }
  data->Template = NULL;

  class_substitution(data, m, arg_names, args, arg_types);

  /* free all allocated arrays */
  if (new_args)
    {
    free((char **)new_args);
    }

  free((char **)arg_names);

  for (i = 0; i < m; i++)
    {
    if (arg_types[i])
      {
      vtkParse_FreeValue(arg_types[i]);
      }
    }
  free(arg_types);
}
