/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseMerge.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

#include "vtkParse.h"
#include "vtkParseMain.h"
#include "vtkParseMerge.h"
#include "vtkParseData.h"
#include "vtkParseExtras.h"
#include "vtkParseHierarchy.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

/* add a class to the MergeInfo */
unsigned long vtkParseMerge_PushClass(MergeInfo *info, const char *classname)
{
  unsigned long n = info->NumberOfClasses;
  unsigned long m = 0;
  unsigned long i;
  const char **classnames;
  char *cp;

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
    classnames = (const char **)malloc(m*sizeof(const char *));
    if (n)
      {
      for (i = 0; i < n; i++)
        {
        classnames[i] = info->ClassNames[i];
        }
      free((char **)info->ClassNames);
      }
    info->ClassNames = classnames;
    }

  info->NumberOfClasses = n+1;
  cp = (char *)malloc(strlen(classname)+1);
  strcpy(cp, classname);
  info->ClassNames[n] = cp;

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
  MergeInfo *info = (MergeInfo *)malloc(sizeof(MergeInfo));
  info->NumberOfClasses = 0;
  info->NumberOfFunctions = 0;

  vtkParseMerge_PushClass(info, classInfo->Name);
  n = classInfo->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
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
    free((char *)info->ClassNames[i]);
    }
  free((char **)info->ClassNames);

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

/* merge a function */
static void merge_function(FunctionInfo *merge, const FunctionInfo *func)
{
  if (func->IsVirtual)
    {
    merge->IsVirtual = 1;
    }

  if (func->Comment && !merge->Comment)
    {
    merge->Comment = func->Comment;
    }
}

/* try to resolve "Using" declarations with the given class. */
void vtkParseMerge_MergeUsing(
  FileInfo *finfo, MergeInfo *info, ClassInfo *merge,
  const ClassInfo *super, unsigned long depth)
{
  unsigned long i, j, k, ii, n, m;
  char *cp;
  size_t l;
  int match;
  UsingInfo *u;
  UsingInfo *v;
  FunctionInfo *func;
  FunctionInfo *f2;
  ValueInfo *param;
  const char *lastval;
  int is_constructor;

  /* if scope matches, rename scope to "Superclass", */
  /* this will cause any inherited scopes to match */
  match = 0;
  for (ii = 0; ii < merge->NumberOfUsings; ii++)
    {
    u = merge->Usings[ii];
    if (u)
      {
      match = 1;
      if (strcmp(u->Scope, super->Name) == 0)
        {
        u->Scope = "Superclass";
        }
      }
    }
  if (!match)
    {
    /* nothing to do! */
    return;
    }

  m = merge->NumberOfFunctions;
  n = super->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    func = super->Functions[i];

    if (!func || !func->Name)
      {
      continue;
      }

    /* destructors cannot be used */
    if (func->Name[0] == '~' && strcmp(&func->Name[1], super->Name) == 0)
      {
      continue;
      }

    /* constructors can be used, with limitations */
    is_constructor = 0;
    if (strcmp(func->Name, super->Name) == 0)
      {
      is_constructor = 1;
      if (func->Template)
        {
        /* templated constructors cannot be "used" */
        continue;
        }
      }

    /* check that the function is being "used" */
    match = 0;
    for (ii = 0; ii < merge->NumberOfUsings; ii++)
      {
      u = merge->Usings[ii];
      if (u && strcmp(u->Scope, "Superclass") == 0)
        {
        if (u->Name && strcmp(u->Name, func->Name) == 0)
          {
          match = 1;
          break;
          }
        }
      }
    if (!match)
      {
      continue;
      }

    /* look for override of this signature */
    match = 0;
    for (j = 0; j < m; j++)
      {
      f2 = merge->Functions[j];
      if (f2->Name &&
          ((is_constructor && strcmp(f2->Name, merge->Name) == 0) ||
           (!is_constructor && strcmp(f2->Name, func->Name) == 0)))
        {
        if (vtkParse_CompareFunctionSignature(func, f2) != 0)
          {
          match = 1;
          break;
          }
        }
      }
    if (!match)
      {
      /* copy into the merge */
      if (is_constructor)
        {
        /* constructors require special default argument handling, there
         * is a different used constructor for each arg with a default */
        for (j = func->NumberOfParameters; j > 0; j--)
          {
          param = func->Parameters[0];
          if (j == 1 && param->TypeName &&
              strcmp(param->TypeName, super->Name) == 0 &&
              (param->Type & VTK_PARSE_POINTER_MASK) == 0)
            {
            /* it is a copy constructor, it will not be "used" */
            continue;
            }
          f2 = (FunctionInfo *)malloc(sizeof(FunctionInfo));
          vtkParse_InitFunction(f2);
          f2->Access = u->Access;
          f2->Name = merge->Name;
          f2->Class = merge->Name;
          f2->Comment = func->Comment;
          f2->IsExplicit = func->IsExplicit;
          l = vtkParse_FunctionInfoToString(f2, NULL, VTK_PARSE_EVERYTHING);
          cp = vtkParse_NewString(finfo->Strings, l);
          vtkParse_FunctionInfoToString(f2, cp, VTK_PARSE_EVERYTHING);
          f2->Signature = cp;
          for (k = 0; k < j; k++)
            {
            param = (ValueInfo *)malloc(sizeof(ValueInfo));
            vtkParse_CopyValue(param, func->Parameters[k]);
            lastval = param->Value;
            param->Value = NULL; /* clear default parameter value */
            vtkParse_AddParameterToFunction(f2, param);
            }
          vtkParse_AddFunctionToClass(merge, f2);
          if (info)
            {
            vtkParseMerge_PushFunction(info, depth);
            }
          if (lastval == NULL)
            {
            /* continue if last parameter had a default value */
            break;
            }
          }
        }
      else
        {
        /* non-constructor methods are simple */
        f2 = (FunctionInfo *)malloc(sizeof(FunctionInfo));
        vtkParse_CopyFunction(f2, func);
        f2->Access = u->Access;
        f2->Class = merge->Name;
        vtkParse_AddFunctionToClass(merge, f2);
        if (info)
          {
          vtkParseMerge_PushFunction(info, depth);
          }
        }
      }
    }

  /* remove any using declarations that were satisfied */
  for (i = 0; i < merge->NumberOfUsings; i++)
    {
    u = merge->Usings[i];
    if (u && strcmp(u->Scope, "Superclass") == 0)
      {
      match = 0;
      for (j = 0; j < super->NumberOfUsings && !match; j++)
        {
        v = super->Usings[j];
        if (v && v->Name && u->Name && strcmp(u->Name, v->Name) == 0)
          {
          /* get the new scope so that recursion will occur */
          u->Scope = v->Scope;
          match = 1;
          }
        }
      for (j = 0; j < super->NumberOfFunctions && !match; j++)
        {
        func = super->Functions[j];
        if (u->Name && func && func->Name && strcmp(func->Name, u->Name) == 0)
          {
          vtkParse_FreeUsing(u);
          merge->Usings[i] = 0;
          match = 1;
          }
        }
      }
    }
}

/* add "super" methods to the merge */
unsigned long vtkParseMerge_Merge(
  FileInfo *finfo, MergeInfo *info, ClassInfo *merge, ClassInfo *super)
{
  unsigned long i, j, ii, n, m, depth;
  int match;
  FunctionInfo *func;
  FunctionInfo *f1;
  FunctionInfo *f2;

  depth = vtkParseMerge_PushClass(info, super->Name);

  vtkParseMerge_MergeUsing(finfo, info, merge, super, depth);

  m = merge->NumberOfFunctions;
  n = super->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    func = super->Functions[i];

    if (!func || !func->Name)
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
        match = 1;
        break;
        }
      }

    /* find all superclass methods with this name */
    for (ii = i; ii < n; ii++)
      {
      f1 = super->Functions[ii];
      if (f1 && f1->Name && strcmp(f1->Name, func->Name) == 0)
        {
        if (match)
          {
          /* look for override of this signature */
          for (j = 0; j < m; j++)
            {
            f2 = merge->Functions[j];
            if (f2->Name && strcmp(f2->Name, f1->Name) == 0)
              {
              if (vtkParse_CompareFunctionSignature(f1, f2) != 0)
                {
                merge_function(f2, func);
                vtkParseMerge_PushOverride(info, j, depth);
                }
              }
            }
          }
        else /* no match */
          {
          /* copy into the merge */
          vtkParse_AddFunctionToClass(merge, f1);
          vtkParseMerge_PushFunction(info, depth);
          m++;
          }
        /* remove from future consideration */
        super->Functions[ii] = NULL;
        }
      }
    }

  /* remove all used methods from the superclass */
  j = 0;
  for (i = 0; i < n; i++)
    {
    if (i != j && super->Functions[i] != NULL)
      {
      super->Functions[j++] = super->Functions[i];
      }
    }
  super->NumberOfFunctions = j;

  return depth;
}

/* Recursive suproutine to add the methods of "classname" and all its
 * superclasses to "merge" */
void vtkParseMerge_MergeHelper(
  FileInfo *finfo, const NamespaceInfo *data, const HierarchyInfo *hinfo,
  const char *classname, FILE *hintfile, MergeInfo *info, ClassInfo *merge)
{
  FILE *fp = NULL;
  ClassInfo *cinfo = NULL;
  ClassInfo *new_cinfo = NULL;
  HierarchyEntry *entry = NULL;
  char *new_classname = NULL;
  const char **template_args = NULL;
  unsigned long template_arg_count = 0;
  const char *nspacename = NULL;
  const char *header;
  const char *filename;
  unsigned long i, j, n, m;
  int recurse;

  /* Note: this method does not deal with scoping yet.
   * "classname" might be a scoped name, in which case the
   * part before the colon indicates the class or namespace
   * (or combination thereof) where the class resides.
   * Each containing namespace or class for the "merge"
   * must be searched, taking the "using" directives that
   * have been applied into account. */

  /* get extra class info from the hierarchy file */
  nspacename = data->Name;
  if (nspacename && classname[0] != ':')
    {
    size_t l1 = strlen(nspacename);
    size_t l2 = strlen(classname);
    char *ncp = (char *)malloc(l1 + l2 + 3);
    strcpy(ncp, data->Name);
    ncp[l1] = ':';
    ncp[l1 + 1] = ':';
    strcpy(&ncp[l1+2], classname);
    entry = vtkParseHierarchy_FindEntry(hinfo, ncp);
    free(ncp);
    }
  if (!entry && classname[0] == ':' && classname[1] == ':')
    {
    entry = vtkParseHierarchy_FindEntry(hinfo, &classname[2]);
    }
  if (!entry)
    {
    entry = vtkParseHierarchy_FindEntry(hinfo, classname);
    }

  if (entry && entry->NumberOfTemplateParameters > 0)
    {
    /* extract the template arguments */
    template_arg_count = (unsigned long)entry->NumberOfTemplateParameters;
    vtkParse_DecomposeTemplatedType(
      classname, &classname, template_arg_count, &template_args,
      entry->TemplateDefaults);
    }

  /* find out if "classname" is in the current namespace */
  n = data->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    if (strcmp(data->Classes[i]->Name, classname) == 0)
      {
      cinfo = data->Classes[i];
      break;
      }
    }

  if (n > 0 && !cinfo)
    {
    if (!entry)
      {
      if (new_classname)
        {
        free(new_classname);
        }
      return;
      }
    header = entry->HeaderFile;
    if (!header)
      {
      if (hintfile) { fclose(hintfile); }
      fprintf(stderr, "Null header file for class %s!\n", classname);
      exit(1);
      }

    filename = vtkParse_FindIncludeFile(header);
    if (!filename)
      {
      if (hintfile) { fclose(hintfile); }
      fprintf(stderr, "Couldn't locate header file %s\n", header);
      exit(1);
      }

    fp = fopen(filename, "r");
    if (!fp)
      {
      if (hintfile) { fclose(hintfile); }
      fprintf(stderr, "Couldn't open header file %s\n", header);
      exit(1);
      }

    finfo = vtkParse_ParseFile(filename, fp, stderr);
    fclose(fp);

    if (!finfo)
      {
      if (hintfile) { fclose(hintfile); }
      exit(1);
      }

    if (hintfile)
      {
      rewind(hintfile);
      vtkParse_ReadHints(finfo, hintfile, stderr);
      }

    data = finfo->Contents;
    if (nspacename)
      {
      m = data->NumberOfNamespaces;
      for (j = 0; j < m; j++)
        {
        NamespaceInfo *ni = data->Namespaces[j];
        if (ni->Name && strcmp(ni->Name, nspacename) == 0)
          {
          n = ni->NumberOfClasses;
          for (i = 0; i < n; i++)
            {
            if (strcmp(ni->Classes[i]->Name, classname) == 0)
              {
              cinfo = ni->Classes[i];
              data = ni;
              break;
              }
            }
          if (i < n)
            {
            break;
            }
          }
        }
      }
    else
      {
      n = data->NumberOfClasses;
      for (i = 0; i < n; i++)
        {
        if (strcmp(data->Classes[i]->Name, classname) == 0)
          {
          cinfo = data->Classes[i];
          break;
          }
        }
      }
    }

  if (cinfo)
    {
    if (template_args)
      {
      new_cinfo = (ClassInfo *)malloc(sizeof(ClassInfo));
      vtkParse_CopyClass(new_cinfo, cinfo);
      vtkParse_InstantiateClassTemplate(
        new_cinfo, finfo->Strings, template_arg_count, template_args);
      cinfo = new_cinfo;
      }

    recurse = 0;
    if (info)
      {
      vtkParseMerge_Merge(finfo, info, merge, cinfo);
      recurse = 1;
      }
    else
      {
      vtkParseMerge_MergeUsing(finfo, info, merge, cinfo, 0);
      n = merge->NumberOfUsings;
      for (i = 0; i < n; i++)
        {
        if (merge->Usings[i] && merge->Usings[i]->Name)
          {
          recurse = 1;
          break;
          }
        }
      }
    if (recurse)
      {
      n = cinfo->NumberOfSuperClasses;
      for (i = 0; i < n; i++)
        {
        vtkParseMerge_MergeHelper(finfo, data, hinfo, cinfo->SuperClasses[i],
                                  hintfile, info, merge);
        }
      }
    }

  if (template_arg_count > 0)
    {
    vtkParse_FreeTemplateDecomposition(
      classname, template_arg_count, template_args);
    }
}

/* Merge the methods from the superclasses */
MergeInfo *vtkParseMerge_MergeSuperClasses(
  FileInfo *finfo, NamespaceInfo *data, ClassInfo *classInfo)
{
  FILE *hintfile = NULL;
  HierarchyInfo *hinfo = NULL;
  MergeInfo *info = NULL;
  OptionInfo *oinfo = NULL;
  const char *classname;
  unsigned long i, n;

  classname = classInfo->Name;
  oinfo = vtkParse_GetCommandLineOptions();

  if (oinfo->HierarchyFileName)
    {
    hinfo = vtkParseHierarchy_ReadFile(oinfo->HierarchyFileName);

    if (oinfo->HintFileName)
      {
      hintfile = fopen(oinfo->HintFileName, "r");
      }

    info = vtkParseMerge_CreateMergeInfo(classInfo);

    n = classInfo->NumberOfSuperClasses;
    for (i = 0; i < n; i++)
      {
      vtkParseMerge_MergeHelper(finfo, data, hinfo,
                                classInfo->SuperClasses[i],
                                hintfile, info, classInfo);
      }

    if (hintfile)
      {
      fclose(hintfile);
      }
    }

  if (hinfo)
    {
    vtkParseHierarchy_Free(hinfo);
    }

  return info;
}

/* Merge superclass methods according to using declarations */
void vtkParseMerge_ApplyUsingDeclarations(
  FileInfo *finfo, NamespaceInfo *data, ClassInfo *classInfo)
{
  FILE *hintfile = NULL;
  HierarchyInfo *hinfo = NULL;
  OptionInfo *oinfo = NULL;
  const char *classname;
  unsigned long i, n;

  /* first, check if there are any declarations to apply */
  n = classInfo->NumberOfUsings;
  for (i = 0; i < n; i++)
    {
    if (classInfo->Usings[i] && classInfo->Usings[i]->Name)
      {
      break;
      }
    }
  if (i == n)
    {
    return;
    }

  classname = classInfo->Name;
  oinfo = vtkParse_GetCommandLineOptions();

  if (oinfo->HierarchyFileName)
    {
    hinfo = vtkParseHierarchy_ReadFile(oinfo->HierarchyFileName);

    if (oinfo->HintFileName)
      {
      hintfile = fopen(oinfo->HintFileName, "r");
      }

    n = classInfo->NumberOfSuperClasses;
    for (i = 0; i < n; i++)
      {
      vtkParseMerge_MergeHelper(finfo, data, hinfo,
                                classInfo->SuperClasses[i],
                                hintfile, NULL, classInfo);
      }

    if (hintfile)
      {
      fclose(hintfile);
      }
    }

  if (hinfo)
    {
    vtkParseHierarchy_Free(hinfo);
    }
}
