/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseSearch.c

  Copyright (c) 2012 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/**
The functions in this source file enable the searching of a FileInfo
structure, which provides a full description of a C++ API.  This is
done by creating a hash table for the global namespace and for each
additional namespace or class that is defined in the file.  The
resulting tree of hash tables can be efficienctly searched starting
at any level, in order to perform a search within any context that
is defined in the file.

The SearchNodes were added to FileInfo to address two difficulties with
searching the FileInfo structure directly:

1) FileInfo follows a linear structure, according to the order
   in which items were found in the file.  It must follow this
   order, so that it can be dumped to exactly reproduce the
   contents of the header.  This linear structure is not efficient
   for searching.

2) Namespaces are not contiguous structures in the FileInfo,
   because they are not contiguous in the file.  So searching
   a NamespaceInfo struct might only search a portion of the
   entire namespace.  Even though a namespace may be distributed
   across several NamespaceInfo objects, it will have only a
   single SearchNode that will be shared among all the NamespaceInfo
   objects.
*/

#include "vtkParseSearch.h"
#include "vtkParseExtras.h"

#include <string.h>
#include <stdlib.h>

#include <stdio.h>
#include <assert.h>

/* Hash table sizes to use (must be a power of two) */
#define CLASS_HASH_TABLE_SIZE 128u
#define NAMESPACE_HASH_TABLE_SIZE 1024u

/**
 * Initialize a search node.
 */
void vtkParse_InitSearchNode(SearchNode *node)
{
  node->Name = NULL;
  node->Access = VTK_ACCESS_PUBLIC;
  node->ItemType = VTK_CLASS_INFO;
  node->Item.Class = NULL;
  node->Parent = NULL;
  node->Children = NULL;
}

/* Add a search node to a search tree */
void add_search_node(SearchNode *parent, SearchNode *node)
{
  SearchNode ***htable = parent->Children;
  SearchNode **hptr = NULL;
  const char *cp = node->Name;
  unsigned int m = CLASS_HASH_TABLE_SIZE;
  unsigned int h, j;
  size_t l, k;

  /* namespaces use a different hash table size */
  if (parent->ItemType == VTK_NAMESPACE_INFO)
    {
    m = NAMESPACE_HASH_TABLE_SIZE;
    }

  /* get the hash and the name length */
  h = (vtkParse_HashId(cp) & (m-1));
  l = vtkParse_IdentifierLength(cp);
  cp += l;

  /* create the table if necessary */
  if (htable == NULL)
    {
    htable = (SearchNode ***)malloc(m*sizeof(SearchNode **));
    parent->Children = htable;
    j = m;
    do
      {
      *htable++ = NULL;
      }
    while (--j);
    htable = parent->Children;
    }

  /* get the bucket */
  hptr = htable[h];

  /* create the bucket if necessary */
  if (hptr == NULL)
    {
    hptr = (SearchNode **)malloc(2*sizeof(SearchNode *));
    hptr[0] = node;
    hptr[1] = NULL;
    htable[h] = hptr;
    return;
    }

  /* count the number of slots used */
  k = 0;
  do { k++; hptr++; } while (*hptr != NULL);

  /* if k+1 is a power of two, extend */
  if ((k & (k+1)) == 0)
    {
    hptr = htable[h];
    hptr = (SearchNode **)realloc(hptr, (2*(k+1))*sizeof(SearchNode *));
    htable[h] = hptr;
    hptr += k;
    }

  /* append the node */
  node->Parent = parent;
  hptr[0] = node;
  hptr[1] = NULL;
}

/* Add a constant, variable, or typedef to the search tree */
void add_value_node(SearchNode *parent, ValueInfo *info)
{
  SearchNode *node;

  node = (SearchNode *)malloc(sizeof(SearchNode));
  vtkParse_InitSearchNode(node);
  node->Name = info->Name;
  node->Access = info->Access;
  node->ItemType = info->ItemType;
  node->Item.Value = info;
  info->Context = parent;

  add_search_node(parent, node);
}

/* Add a function or method to the search tree */
void add_function_node(SearchNode *parent, FunctionInfo *info)
{
  SearchNode *node;

  node = (SearchNode *)malloc(sizeof(SearchNode));
  vtkParse_InitSearchNode(node);
  node->Name = info->Name;
  node->Access = info->Access;
  node->ItemType = info->ItemType;
  node->Item.Function = info;
  info->Context = parent;

  add_search_node(parent, node);
}

/* Add an enum type to the search tree */
void add_enum_node(SearchNode *parent, EnumInfo *info)
{
  SearchNode *node;

  node = (SearchNode *)malloc(sizeof(SearchNode));
  vtkParse_InitSearchNode(node);
  node->Name = info->Name;
  node->Access = info->Access;
  node->ItemType = info->ItemType;
  node->Item.Enum = info;
  info->Context = parent;

  add_search_node(parent, node);
}

/* Add a "using" declaration to the search tree */
void add_using_nodes(SearchNode *parent, UsingInfo *info)
{
  /* search for and add all names that are being used */
}

void add_namespace_tree(SearchNode *parent, NamespaceInfo *info);

/* Add the contents of a class to the search tree */
void add_class_tree(SearchNode *parent, ClassInfo *info)
{
  unsigned long i, n;
  SearchNode *node;

  /* check if the namespace already exists */
  if (info->Name == NULL)
    {
    /* use root namespace */
    node = parent;
    }
  else
    {
    /* search for namespace */
    node = vtkParse_FindNode(parent, info->Name);
    }

  /* else create a new node */
  if (node == NULL)
    {
    node = (SearchNode *)malloc(sizeof(SearchNode));
    vtkParse_InitSearchNode(node);
    node->Name = info->Name;
    node->Access = info->Access;
    node->ItemType = info->ItemType;
    if (info->ItemType != VTK_NAMESPACE_INFO)
      {
      node->Item.Class = info;
      }
    info->Context = node;

    add_search_node(parent, node);
    }

  /* add all namespace contents */
  n = info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    add_class_tree(parent, info->Classes[i]);
    }

  n = info->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    add_function_node(parent, info->Functions[i]);
    }

  n = info->NumberOfConstants;
  for (i = 0; i < n; i++)
    {
    add_value_node(parent, info->Constants[i]);
    }

  n = info->NumberOfVariables;
  for (i = 0; i < n; i++)
    {
    add_value_node(parent, info->Variables[i]);
    }

  n = info->NumberOfEnums;
  for (i = 0; i < n; i++)
    {
    add_enum_node(parent, info->Enums[i]);
    }

  n = info->NumberOfTypedefs;
  for (i = 0; i < n; i++)
    {
    add_value_node(parent, info->Typedefs[i]);
    }

  n = info->NumberOfUsings;
  for (i = 0; i < n; i++)
    {
    add_using_nodes(parent, info->Usings[i]);
    }

  n = info->NumberOfNamespaces;
  for (i = 0; i < n; i++)
    {
    add_namespace_tree(parent, info->Namespaces[i]);
    }
}

/* Add the contents of a namespace to the search tree */
void add_namespace_tree(SearchNode *parent, NamespaceInfo *info)
{
  add_class_tree(parent, info);
}

/* Add the contents of a file to the search tree */
void add_file_tree(SearchNode *root, FileInfo *finfo)
{
  unsigned long n, i;

  /* add everything from included files */
  n = finfo->NumberOfIncludes;
  for (i = 0; i < n; i++)
    {
    add_file_tree(root, finfo->Includes[i]);
    }

  /* link the structures together */
  finfo->Root = root;

  /* add the contents of the current file */
  add_namespace_tree(root, finfo->Contents);
}

/**
 * Build a search tree for a FileInfo.
 */
void vtkParse_BuildSearchTree(FileInfo *finfo)
{
  SearchNode *root;

  /* create the root node */
  root = (SearchNode *)malloc(sizeof(SearchNode));
  vtkParse_InitSearchNode(root);
  root->ItemType = VTK_NAMESPACE_INFO;

  /* add the contents */
  add_file_tree(root, finfo);
}

/**
 * Do a simple hash-table lookup.  Does not look through
 * through superclasses or through parent namespaces.
 */
SearchNode *vtkParse_FindNode(
  SearchNode *context, const char *name)
{
  SearchNode ***htable = context->Children;
  SearchNode **hptr = NULL;
  const char *cp = name;
  unsigned int m = CLASS_HASH_TABLE_SIZE;
  unsigned int h;
  size_t l;

  /* namespaces use a different hash table size */
  if (context->ItemType == VTK_NAMESPACE_INFO)
    {
    m = NAMESPACE_HASH_TABLE_SIZE;
    }

  /* get the hash and the name length */
  h = (vtkParse_HashId(cp) & (m-1));
  l = vtkParse_IdentifierLength(cp);

  /* do the hash table lookup */
  if (htable && htable[h])
    {
    for (hptr = htable[h]; *hptr != NULL; hptr++)
      {
      const char *mname = (*hptr)->Name;
      if (mname[0] == name[0] &&
          strncmp(mname, name, l) == 0 &&
          mname[l] == '\0')
        {
        return *hptr;
        }
      }
    }

  return NULL;
}

/**
 * Apply a set of template arguments to an identifier expression.
 * The identifier can contain "::" and can have template arguments.
 * The first name before the "::" will be replaced if it is a template
 * parameter, and any template arguments that are template parameters
 * will also be replaced with the given template arguments.
 */
const char *vtkParse_ApplyTemplateToName(
  const char *name, const TemplateInfo *params, const TemplateInfo *args,
  TemplateInfo *outargs)
{
  size_t l = vtkParse_IdentifierLength(name);
  unsigned long j = params->NumberOfParameters;
  const char *newname = name;

  /* go through template parameters in reverse order */
  while (j > 0)
    {
    ValueInfo *param = params->Parameters[--j];
    /* is it expecting a value, or a type? */
    if (param->Type)
      {
      /* requires a value of type "param->Type" */
      const char *value = param->Value;
      const char *oldname = newname;
      if (j < args->NumberOfParameters)
        {
        value = args->Parameters[j]->Value;
        }
      assert(value);
      /* substitute the value into the name */
      newname = vtkParse_ExpandValueInName(oldname, param->Name, value);
      if (oldname != newname)
        {
        free((char *)oldname);
        }
      }
    else
      {
      /* requires a type */
      if (j < args->NumberOfParameters)
        {
        args->Parameters[j]->Type;
        }
      else
        {
        ValueInfo type;
        param->Value;
        }
      }

    /* if the superclass is a template parameter, or if the
     * identifier before "::" is a template parameter */
    if (strncmp(param->Name, newname, l) == 0 &&
        param->Name[l] == '\0')
      {
      /* use template args to find real class */
      if (args)
        {
        if (j < args->NumberOfParameters)
          {
          /* substitute the template argument */
          newname = args->Parameters[j]->Class;
          }
        else
          {
          /* look for a default argument instead */
          newname = params->Parameters[j]->Value;
          }
        }
      }
    }

  if (newname != name)
    {

    }
}

/**
 * Decompose a templated identifier and retrieve the arguments
 * in a TemplateInfo struct, using a set of expected template
 * parameters.
 */
size_t vtkParse_TemplateInfoFromString(
  const char *text, const TemplateInfo *parms,
  StringCache *strings, TemplateInfo *info)
{
  size_t l;
  unsigned long i;
  unsigned long n = parms->NumberOfParameters;
  const char *classname;
  const char **args;
  const char **defaults;
  const char *def_store[4];
  defaults = def_store;

  if (n > 4)
    {
    defaults = (const char **)malloc(n*sizeof(char *));
    }

  /* get default template parameter values */
  for (i = 0; i < n; i++)
    {
    defaults[i] = parms->Parameters[i]->Value;
    }

  l = vtkParse_DecomposeTemplatedType(
    text, &classname, n, &args, defaults);

  vtkParse_InitTemplate(info);
  for (i = 0; i < n; i++)
    {
    ValueInfo *arg = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(arg);
    if (parms->Parameters[i]->Type)
      {
      /* template parameter requires a value */
      vtkParse_CopyValue(arg, parms->Parameters[i]);
      arg->Value = vtkParse_CacheString(strings, args[i], strlen(args[i]));
      }
    else
      {
      /* template parameter requires a type */
      vtkParse_ValueInfoFromString(arg, strings, args[i]);
      }
    vtkParse_AddParameterToTemplate(info, arg);
    }

  vtkParse_FreeTemplateDecomposition(classname, n, args);

  if (defaults != def_store)
    {
    free(defaults);
    }

  return l;
}

/**
 * Given a class context, find the context for the nth superclass.
 * If the class is templated, the template args can be passed.
 * A container can also be passed to receive the template args
 * of the superclass.
 */
SearchNode *vtkParse_FindSuperClassContext(
  SearchNode *context, unsigned long i, const TemplateInfo *args,
  StringCache *strings, TemplateInfo *sargs)
{
  ClassInfo *cls = context->Item.Class;
  TemplateInfo *tinfo = cls->Template;
  SearchNode *snode = NULL;
  const char *sname = cls->SuperClasses[i];
  unsigned long tlevel = 0;
  size_t l;

  /* superclass name length up to first "<" or ":" */
  l = vtkParse_IdentifierLength(sname);

  /* is the superclass name itself a template parameter? */
  if (tinfo)
    {
    unsigned long j = tinfo->NumberOfParameters;
    tlevel = j;

    assert(sname[l] != '<');

    /* go through template parameters in reverse order */
    while (j > 0 && l != 0)
      {
      ValueInfo *param = tinfo->Parameters[--j];
      /* make sure this is a type parameter, not a value parameter */
      if (param->Type == 0)
        {
        /* is the superclass a template parameter */
        if (strncmp(sname, param->Name, l) == 0 &&
            param->Name[l] == '\0')
          {
          const char *newname = param->Class;

          if (args)
            {
            if (j < args->NumberOfParameters)
              {
              /* substitute with the type given as a template argument */
              newname = args->Parameters[j]->Class;
              }
            else if (param->Value)
              {
              /* use default template parameter value */
              newname = param->Value;
              }
            }
          /* perform the substitution */
          if (strncmp(newname, sname, l) != 0 || newname[l] != '\0')
            {
            size_t m, n;
            char *newtext;
            m = strlen(newname);
            n = strlen(sname);
            newtext = (char *)malloc(m + n - l + 1);
            strncpy(newtext, newname, m);
            strcpy(&newtext[m], &sname[l]);
            if (sname != cls->SuperClasses[i])
              {
              free((char *)sname);
              }
            sname = newtext;
            }

          /* save the level at which the substitution occurred */
          tlevel = j;
          l = vtkParse_IdentifierLength(sname);
          }
        }
      }
    }

  /* eventually do this for each "::"-separated part of the name */
  for (;;)
    {
    const char *name = sname;

    /* get the context to use to search for superclass name */
    context = context->Parent;
    if (sname[0] == ':' && sname[1] == ':')
      {
      /* use root context */
      while (context->Parent)
        {
        context = context->Parent;
        }
      name = &sname[2];
      }

    /* find superclass starting from parent context */
    snode = vtkParse_FindNameInContext(
      context->Parent, name, VTK_FIND_TYPE, VTK_ACCESS_PRIVATE);
    assert(snode != NULL);

    /* resolve any typedefs */
    while (snode && snode->ItemType == VTK_TYPEDEF_INFO)
      {
      ValueInfo *tdef = context->Item.Typedef;
      tlevel = 0;

      snode = vtkParse_FindName(
        snode->Parent, tdef->Class, VTK_FIND_TYPE, VTK_ACCESS_PRIVATE);

      /* needs to do more than this */
      name = tdef->Class;

      assert(snode != NULL);
      }

    assert((snode->ItemType & VTK_FIND_CLASS) != 0);

    /* check for template parameters on name */
    l = vtkParse_IdentifierLength(name);
    if (name[l] == '<' && sargs)
      {
      TemplateInfo *sparms = snode->Item.Class->Template;
      assert(sparms != NULL);

      /* convert < > args into a TemplateInfo */
      vtkParse_TemplateInfoFromString(name, sparms, strings, sargs);

      /* expand template args from tlevel */
      vtkParse_ApplyTemplateToTemplateInfo(sargs, tinfo, args);
      }

    break;
    }

  /* free the name if it was created */
  if (sname != cls->SuperClasses[i])
    {
    free((char *)sname);
    }

  return snode;
}


/**
 * Recurse through the class namespace and all superclasses.
 * Return the first object found that has an allowed type.
 * Set "level" to VTK_ACCESS_PUBLIC to find only items that
 * are publicly visible.
 */
SearchNode *vtkParse_FindNameInClass(
  SearchNode *context, const char *name,
  parse_types_t types, parse_access_t level)
{
  SearchNode *result = NULL;

  /* check if context is a typedef */
  while (context->ItemType == VTK_TYPEDEF_INFO)
    {
    ValueInfo *tdef = context->Item.Typedef;
    const char *tname = tdef->Class;

    context = vtkParse_FindName(
      context->Parent, tname, VTK_FIND_TYPE, VTK_ACCESS_PRIVATE);

    /* typedefs should not lead to nowhere */
    assert(context != NULL);
    if (context == NULL)
      {
      return NULL;
      }
    }

  /* search the namespace */
  result = vtkParse_FindNode(context, name);
  if (result && ((1 << result->ItemType) & types) != 0)
    {
    if (result->Access > level)
      {
      result = NULL;
      }
    }
  /* search template parameters and superclasseses */
  else if (((1 << context->ItemType) & VTK_FIND_CLASS) != 0)
    {
    ClassInfo *cls = context->Item.Class;
    TemplateInfo *tinfo = cls->Template;
    unsigned long i, j, n;
    size_t l;

    /* check if name is a template parameter */
    if (tinfo)
      {
      l = vtkParse_IdentifierLength(name);
      j = tinfo->NumberOfParameters;
      while (j > 0)
        {
        ValueInfo *param = tinfo->Parameters[--j];
        if (strncmp(param->Name, name, l) == 0 &&
            param->Name[l] == '\0')
          {
          /* replace with template arg (if present) */
          /* always continue the loop, because template parameters
             can be defined in terms of earlier template parameters */
          /* return what, since there is no node? */
          fprintf(stderr, "found template parameter %s\n", name);
          assert(0);
          }
        }
      }

    /* max access level is "protected" within superclasses */
    if (level == VTK_ACCESS_PRIVATE)
      {
      level = VTK_ACCESS_PROTECTED;
      }

    /* search superclasses */
    result = NULL;
    n = cls->NumberOfSuperClasses;
    for (i = 0; i < n; i++)
      {
      const char *sname = cls->SuperClasses[i];
      SearchNode *snode = NULL;

      /* expand superclass name using template arguments */
      if (tinfo)
        {
        l = vtkParse_IdentifierLength(sname);
        j = tinfo->NumberOfParameters;
        while (j > 0)
          {
          ValueInfo *param = tinfo->Parameters[--j];
          if (strncmp(param->Name, sname, l) == 0 &&
              param->Name[l] == '\0')
            {
            fprintf(stderr, "found template superclass %s\n", sname);
            assert(0);
            }
          }
        }

      /* find superclass starting from parent context */
      snode = vtkParse_FindNameInContext(
        context->Parent, sname, VTK_FIND_TYPE, VTK_ACCESS_PRIVATE);

      if (snode)
        {
        result = vtkParse_FindNameInClass(snode, name, types, level);
        break;
        }
      }
    }

  return result;
}

/**
 * Search for a name within a given context.  Return the first
 * item that has the correct type.  This is the same as
 * FindNameInClass, except that is also searches all of the
 * enclosing namespaces.
 */
SearchNode *vtkParse_FindNameInContext(
  SearchNode *context, const char *name,
  parse_types_t types, parse_access_t level)
{
  SearchNode *result = NULL;

  do
    {
    result = vtkParse_FindNameInClass(context, name, types, level);
    context = context->Parent;
    }
  while (result == NULL && context != NULL);

  return result;
}

/**
 * Find a qualified name within a namespace.  The name can
 * include a scope, and can begin with '::' to indicate the
 * root scope.  Does a recursive search through all superclasses
 * of the given context, and all enclosing namespaces.
 */
SearchNode *vtkParse_FindName(
  SearchNode *context, const char *name,
  parse_types_t types, parse_access_t level)
{
  SearchNode *result = NULL;
  int search_parents = 1;

  /* check for fully qualified name */
  if (name[0] == ':' && name[1] == ':')
    {
    /* go to the root */
    while (context->Parent)
      {
      context = context->Parent;
      }
    /* no longer need '::' */
    name += 2;
    /* no parents to search */
    search_parents = 0;
    }

  /* for each part of the name */
  for (;;)
    {
    /* check if context is a typedef */
    while (context->ItemType == VTK_TYPEDEF_INFO)
      {
      ValueInfo *tdef = context->Item.Typedef;
      const char *tname = tdef->Class;

      context = vtkParse_FindName(
        context->Parent, tname, VTK_FIND_TYPE, VTK_ACCESS_PRIVATE);

      /* typedefs should not lead to nowhere */
      assert(context != NULL);
      if (context == NULL)
        {
        return NULL;
        }
      }

    /* find the current part of the name */
    for (;;)
      {
      /* if already searched the root, there's nowhere left to look */
      if (context == NULL)
        {
        return NULL;
        }

      /* search the current namespace */
      result = vtkParse_FindNameInClass(context, name, types, level);

      if (result)
        {
        break;
        }
      else
        {
        /* if not found yet, search enclosing scopes */
        if (search_parents)
          {
          context = context->Parent;
          }
        else
          {
          return NULL;
          }
        }
      } /* end "find the current part of the name" */

    /* get the next part of the qualified name */
    name += vtkParse_UnscopedNameLength(name);
    if (name[0] == ':' && name[1] == ':')
      {
      /* don't search enclosing scopes for anything following "::" */
      search_parents = 0;
      context = result;
      result = NULL;
      name += 2;
      }
    else
      {
      break;
      }
    } /* end "for each part of the name" */

  return result;
}

/*
To deal with templates:

- the name being searched for might have template args in angle brackets
- context might be a templated class
- returned search node might be a template instance

For context: allow a TemplateInfo to be passed, or go with strings instead?
The internal mechanism should use a TemplateInfo filled with ValueInfo
of type TYPEDEF and CONSTANT.  How is this TypedefInfo to be created?
It must be created from the class TemplateInfo parameters, in combination
with a TemplateInfo (or text) containing the arguments.

The TemplateInfo to be used will:

1) if Type is NULL (i.e. typename or class) then the resulting ValueInfo
will have the name of the first ValueInfo, but have all the other info
from the second ValueInfo.

2) if Type is not NULL (i.e. a constant is required), then the resulting
ValueInfo will have the name and type of the first ValueInfo, but the
Value from the other TypedefInfo.

So giving template arguments as text is straightforward in both
of these cases.

But then, when returning a node with template args, should they be
returned as text?

- need to "specialize" any typedefs based on template args
- if a matching "child" is a typedef, need to expand the typedef in terms of existing typedefs and template parameters
- template parameters are like typedefs and constants, a list of ValueInfo's
Need ValueInfoFromString that takes a ValueInfo as a template

- search should be based on template args, given in string form
- use template parameters to generate typedefs and constants
- use these to specialize the class
- then do the search


*/
