/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseMerge.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

#include "vtkParseMerge.h"
#include "vtkParse.h"
#include "vtkParseInternal.h"
#include "vtkParseHierarchy.h"
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

/* add a class to the MergeInfo */
unsigned long vtkParseMerge_PushClass(MergeInfo *info, const char *classname)
{
  unsigned long n = info->NumberOfClasses;
  unsigned long m = 0;
  unsigned long i;
  char **classnames;

  /* if class is already there, return its index */
  for (i = 0; i < n; i++)
    {
    if (strcmp(info->ClassNames[i], classname) == 0)
      {
      return i;
      }
    }

  /* if no elements yet, reserve four slots */
  if (n == 0)
    {
    m = 4;
    }
  /* else double the slots whenever size is a power of two */
  if (n >= 4 && (n & (n-1)) == 0)
    {
    m = (n << 1);
    }

  if (m)
    {
    classnames = (char **)malloc(m*sizeof(char *));
    if (n)
      {
      for (i = 0; i < n; i++)
        {
        classnames[i] = info->ClassNames[i];
        }
      free(info->ClassNames);
      }
    info->ClassNames = classnames;
    }

  info->NumberOfClasses = n+1;
  info->ClassNames[n] = (char *)malloc(strlen(classname)+1);
  strcpy(info->ClassNames[n], classname);

  return n;
}

/* add a function to the MergeInfo */
unsigned long vtkParseMerge_PushFunction(MergeInfo *info, unsigned long depth)
{
  unsigned long n = info->NumberOfFunctions;
  unsigned long m = 0;
  unsigned long i;
  unsigned long *overrides;
  unsigned long **classes;

  /* if no elements yet, reserve four slots */
  if (n == 0)
    {
    m = 4;
    }
  /* else double the slots whenever size is a power of two */
  else if (n >= 4 && (n & (n-1)) == 0)
    {
    m = (n << 1);
    }

  if (m)
    {
    overrides = (unsigned long *)malloc(m*sizeof(unsigned long));
    classes = (unsigned long **)malloc(m*sizeof(unsigned long *));
    if (n)
      {
      for (i = 0; i < n; i++)
        {
        overrides[i] = info->NumberOfOverrides[i];
        classes[i] = info->OverrideClasses[i];
        }
      free(info->NumberOfOverrides);
      free(info->OverrideClasses);
      }
    info->NumberOfOverrides = overrides;
    info->OverrideClasses = classes;
    }

  info->NumberOfFunctions = n+1;
  info->NumberOfOverrides[n] = 1;
  info->OverrideClasses[n] = (unsigned long *)malloc(sizeof(unsigned long));
  info->OverrideClasses[n][0] = depth;

  return n;
}

/* add an override to to the specified function */
unsigned long vtkParseMerge_PushOverride(
  MergeInfo *info, unsigned long i, unsigned long depth)
{
  unsigned long n = info->NumberOfOverrides[i];
  unsigned long m = 0;
  unsigned long j;
  unsigned long *classes;

  /* Make sure it hasn't already been pushed */
  for (j = 0; j < info->NumberOfOverrides[i]; j++)
    {
    if (info->OverrideClasses[i][j] == depth)
      {
      return i;
      }
    }

  /* if n is a power of two */
  if ((n & (n-1)) == 0)
    {
    m = (n << 1);
    classes = (unsigned long *)malloc(m*sizeof(unsigned long));
    for (j = 0; j < n; j++)
      {
      classes[j] = info->OverrideClasses[i][j];
      }
    free(info->OverrideClasses[i]);
    info->OverrideClasses[i] = classes;
    }

  info->NumberOfOverrides[i] = n+1;
  info->OverrideClasses[i][n] = depth;

  return n;
}

/* return an initialized MergeInfo */
MergeInfo *vtkParseMerge_CreateMergeInfo(ClassInfo *classInfo)
{
  unsigned long i, n;
  FunctionInfo *func;
  MergeInfo *info = (MergeInfo *)malloc(sizeof(MergeInfo));
  info->NumberOfClasses = 0;
  info->NumberOfFunctions = 0;

  vtkParseMerge_PushClass(info, classInfo->Name);
  n = classInfo->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    func = classInfo->Functions[i];
    vtkParseMerge_PushFunction(info, 0);
    }

  return info;
}

/* free the MergeInfo */
void vtkParseMerge_FreeMergeInfo(MergeInfo *info)
{
  unsigned long i, n;

  n = info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    free(info->ClassNames[i]);
    }
  free(info->ClassNames);

  n = info->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    free(info->OverrideClasses[i]);
    }
  if (n)
    {
    free(info->NumberOfOverrides);
    free(info->OverrideClasses);
    }

  free(info);
}

/* make a duplicate of a function */
static void copy_function(FunctionInfo *merge, const FunctionInfo *func)
{
  unsigned long i;

  memcpy(merge, func, sizeof(FunctionInfo));

  if (func->Name)
    {
    merge->Name = (char *)malloc(strlen(func->Name)+1);
    strcpy(merge->Name, func->Name);
    }

  for (i = 0; i < func->NumberOfArguments; i++)
    {
    if (func->ArgClasses[i])
      {
      merge->ArgClasses[i] = (char *)malloc(strlen(func->ArgClasses[i])+1);
      strcpy(merge->ArgClasses[i], func->ArgClasses[i]);
      }
    }

  if (func->ReturnClass)
    {
    merge->ReturnClass = (char *)malloc(strlen(func->ReturnClass)+1);
    strcpy(merge->ReturnClass, func->ReturnClass);
    }

  if (func->Comment)
    {
    merge->Comment = (char *)malloc(strlen(func->Comment)+1);
    strcpy(merge->Comment, func->Comment);
    }

  if (func->Signature)
    {
    merge->Signature = (char *)malloc(strlen(func->Signature)+1);
    strcpy(merge->Signature, func->Signature);
    }
}

/* merge a function */
static void merge_function(FunctionInfo *merge, const FunctionInfo *func)
{
  if (func->IsVirtual)
    {
    merge->IsVirtual = 1;
    }

  if (func->Comment && !merge->Comment)
    {
    merge->Comment = (char *)malloc(strlen(func->Comment)+1);
    strcpy(merge->Comment, func->Comment);
    }
}

/* add "super" methods to the merge */
unsigned long vtkParseMerge_Merge(
  MergeInfo *info, ClassInfo *merge, const ClassInfo *super)
{
  unsigned long i, j, k, n, m, depth;
  int match;
  const FunctionInfo *func;
  FunctionInfo *f2;

  depth = vtkParseMerge_PushClass(info, super->Name);

  m = merge->NumberOfFunctions;
  n = super->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    func = super->Functions[i];

    if (!func->Name)
      {
      continue;
      }

    /* constructors and destructors are not inherited */
    if ((strcmp(func->Name, super->Name) == 0) ||
        (func->Name[0] == '~' &&
         strcmp(&func->Name[1], super->Name) == 0))
      {
      continue;
      }

    /* check for overridden functions */
    match = 0;
    for (j = 0; j < m; j++)
      {
      f2 = merge->Functions[j];
      if (f2->Name && strcmp(f2->Name, func->Name) == 0)
        {
        if (f2->NumberOfArguments == func->NumberOfArguments)
          {
          for (k = 0; k < f2->NumberOfArguments; k++)
            {
            if (f2->ArgTypes[k] != func->ArgTypes[k]) { break; }
            }
          /* if all args match, then merge the comments */
          if (k == f2->NumberOfArguments)
            {
            merge_function(f2, func);
            vtkParseMerge_PushOverride(info, j, depth);
            }
          }
        match = 1;
        }
      }
    if (!match)
      {
      FunctionInfo *newFunc = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      vtkParse_AddItemMacro(merge, Functions, newFunc);
      copy_function(newFunc, func);
      vtkParseMerge_PushFunction(info, depth);
      m++;
      }
    }

  return depth;
}
