/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseSearch.h

  Copyright (c) 2012 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/**
  This file provides a search tree for use with the data structures
  in vtkParseData.h.
*/

#ifndef VTK_PARSE_SEARCH_H
#define VTK_PARSE_SEARCH_H

#include "vtkParseData.h"

/**
 * A union of all the possible data items that can be searched for.
 * See vtkParseData.h for definitions of these structures.
 */
typedef union _SearchItem
{
  ClassInfo *Class;
  FunctionInfo *Function;
  ValueInfo *Typedef;
  ValueInfo *Value;
  EnumInfo *Enum;
  UsingInfo *Using; /* bring in items, instead?? */
} SearchItem;

/**
 * The node for the hash table.
 */
struct _SearchNode
{
  const char *Name; /* include template parameters? */
  parse_access_t Access; /* private, protected, or public */
  parse_item_t ItemType; /* the item type: class, typedef, etc. */
  SearchItem Item; /* the item belonging to this node */
  SearchNode *Parent; /* the enclosing namespace, or NULL for the root */
  SearchNode ***Children; /* hash table for all child nodes */
};

/**
 * The various entities that can be searched for:
 * functions (and methods), scopes (namespaces and classes),
 * types (classes, enums, typedefs), values (variables and constants),
 * or anything.
 */
typedef enum _parse_types_t
{
  /* Search for a function or a method */
  VTK_FIND_FUNCTION = (1 << VTK_FUNCTION_INFO),

  /* Search for a value */
  VTK_FIND_VALUE =    (1 << VTK_VARIABLE_INFO) |
                      (1 << VTK_CONSTANT_INFO),

  /* Search for a class, struct, or union */
  VTK_FIND_CLASS =    (1 << VTK_CLASS_INFO) |
                      (1 << VTK_STRUCT_INFO) |
                      (1 << VTK_UNION_INFO),

  /* Search for a type */
  VTK_FIND_TYPE =     (1 << VTK_CLASS_INFO) |
                      (1 << VTK_STRUCT_INFO) |
                      (1 << VTK_UNION_INFO) |
                      (1 << VTK_ENUM_INFO) |
                      (1 << VTK_TYPEDEF_INFO),

  /* Search for a class, struct, union, or namespace */
  VTK_FIND_SCOPE =    (1 << VTK_NAMESPACE_INFO) |
                      (1 << VTK_CLASS_INFO) |
                      (1 << VTK_STRUCT_INFO) |
                      (1 << VTK_UNION_INFO),

  /* Search for anything */
  VTK_FIND_ANY =      (1 << VTK_NAMESPACE_INFO) |
                      (1 << VTK_CLASS_INFO) |
                      (1 << VTK_STRUCT_INFO) |
                      (1 << VTK_UNION_INFO) |
                      (1 << VTK_ENUM_INFO) |
                      (1 << VTK_TYPEDEF_INFO) |
                      (1 << VTK_FUNCTION_INFO) |
                      (1 << VTK_VARIABLE_INFO) |
                      (1 << VTK_CONSTANT_INFO),
} parse_types_t;

/**
 * Build a search tree for a FileInfo.
 * Thise can be called on a FileInfo after a file has been parsed by
 * vtkParse_Main().  It will make it possible to do name lookups within
 * any contexts that exist in the file. 
 */
void vtkParse_BuildSearchTree(FileInfo *finfo);

/**
 * Find a name within a specified context.
 * The name can include a scope operator, and can begin with '::'
 * to indicate the root scope.  This does a recursive search
 * through all enclosing namespaces and all superclasses.
 */
SearchNode *vtkParse_FindName(
  SearchNode *context, const char *name,
  parse_types_t types, parse_access_t level);

/**
 * Find an item within a class or within its superclasses.
 * Returns the first item that has one of the specified types.
 * Set "level" to VTK_ACCESS_PUBLIC to find only items that are
 * publicly visible, or VTK_ACCESS_PROTECTED to find items that
 * are public or protected.
 */
SearchNode *vtkParse_FindNameInClass(
  SearchNode *context, const char *name,
  parse_types_t types, parse_access_t level);

/**
 * Search for an unqualified name within a given context.
 * Return the first item that has the correct type.  This is the
 * same as FindNameInClass, except that it also searches all of the
 * enclosing namespaces, in addition to searching superclasses.
 */
SearchNode *vtkParse_FindNameInContext(
  SearchNode *context, const char *name,
  parse_types_t types, parse_access_t level);

/**
 * Given a class context, find the context for the nth superclass.
 * This is a trivial operation if neither the class or the superclass
 * is templated.  If the class is templated, the template args must be
 * passed if they are used in the declaration of the superclass.  If
 * the superclass is templated, a TemplateInfo object should be passed
 * to collect the template args applied to the superclass.
 */
SearchNode *vtkParse_FindSuperClassContext(
  SearchNode *context, unsigned long i, const TemplateInfo *args,
  StringCache *strings, TemplateInfo *sargs);

/**
 * Initialize a search node object.
 */
void vtkParse_InitSearchNode(SearchNode *node);

/**
 * Do a lookup of a name within a namespace.
 * This does not recurse through superclasses or through parent
 * namespaces, it simply looks for the name within the hash table
 * of a single context.
 */
SearchNode *vtkParse_FindNode(
  SearchNode *context, const char *name);


/*
int vtkParse_IsTypeOf(SearchNode *node, const char *baseclass);
*/

#endif
