/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParse.y

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/
%{

/*

This file must be translated to C and modified to build everywhere.

Run yacc like this:

  yacc -b vtkParse vtkParse.y

Modify vtkParse.tab.c:
  - convert TABs to spaces (eight per tab)
  - remove spaces from ends of lines, s/ *$//g
  - remove the "goto yyerrlab1;" that appears right before yyerrlab1:
  - remove the #defined constants that appear right after the anonymous_enums

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define yyerror(a) fprintf(stderr,"%s\n",a)
#define yywrap() 1

/* Make sure yacc-generated code knows we have included stdlib.h.  */
#ifndef _STDLIB_H
# define _STDLIB_H
#endif
#define YYINCLUDED_STDLIB_H

/* Borland and MSVC do not define __STDC__ properly. */
#if !defined(__STDC__)
# if (defined(_MSC_VER) && _MSC_VER >= 1200) || defined(__BORLANDC__)
#  define __STDC__ 1
# endif
#endif

/* Disable warnings in generated code. */
#if defined(_MSC_VER)
# pragma warning (disable: 4127) /* conditional expression is constant */
# pragma warning (disable: 4244) /* conversion to smaller integer type */
#endif
#if defined(__BORLANDC__)
# pragma warn -8004 /* assigned a value that is never used */
# pragma warn -8008 /* conditional is always true */
# pragma warn -8066 /* unreachable code */
#endif

/* Map from the type anonymous_enumeration in vtkType.h to the VTK wrapping type
   system number for the type. */

#include "vtkParse.h"
#include "vtkType.h"

static int vtkParseTypeMap[] =
  {
  VTK_PARSE_VOID,               /* VTK_VOID                0 */
  0,                            /* VTK_BIT                 1 */
  VTK_PARSE_CHAR,               /* VTK_CHAR                2 */
  VTK_PARSE_UNSIGNED_CHAR,      /* VTK_UNSIGNED_CHAR       3 */
  VTK_PARSE_SHORT,              /* VTK_SHORT               4 */
  VTK_PARSE_UNSIGNED_SHORT,     /* VTK_UNSIGNED_SHORT      5 */
  VTK_PARSE_INT,                /* VTK_INT                 6 */
  VTK_PARSE_UNSIGNED_INT,       /* VTK_UNSIGNED_INT        7 */
  VTK_PARSE_LONG,               /* VTK_LONG                8 */
  VTK_PARSE_UNSIGNED_LONG,      /* VTK_UNSIGNED_LONG       9 */
  VTK_PARSE_FLOAT,              /* VTK_FLOAT              10 */
  VTK_PARSE_DOUBLE,             /* VTK_DOUBLE             11 */
  VTK_PARSE_ID_TYPE,            /* VTK_ID_TYPE            12 */
  VTK_PARSE_STRING,             /* VTK_STRING             13 */
  0,                            /* VTK_OPAQUE             14 */
  VTK_PARSE_SIGNED_CHAR,        /* VTK_SIGNED_CHAR        15 */
  VTK_PARSE_LONG_LONG,          /* VTK_LONG_LONG          16 */
  VTK_PARSE_UNSIGNED_LONG_LONG, /* VTK_UNSIGNED_LONG_LONG 17 */
  VTK_PARSE___INT64,            /* VTK___INT64            18 */
  VTK_PARSE_UNSIGNED___INT64,   /* VTK_UNSIGNED___INT64   19 */
  0,                            /* VTK_VARIANT            20 */
  0,                            /* VTK_OBJECT             21 */
  VTK_PARSE_UNICODE_STRING      /* VTK_UNICODE_STRING     22 */
  };

/* Define some constants to simplify references to the table lookup in
   the type_primitive production rule code.  */
#define VTK_PARSE_INT8 vtkParseTypeMap[VTK_TYPE_INT8]
#define VTK_PARSE_UINT8 vtkParseTypeMap[VTK_TYPE_UINT8]
#define VTK_PARSE_INT16 vtkParseTypeMap[VTK_TYPE_INT16]
#define VTK_PARSE_UINT16 vtkParseTypeMap[VTK_TYPE_UINT16]
#define VTK_PARSE_INT32 vtkParseTypeMap[VTK_TYPE_INT32]
#define VTK_PARSE_UINT32 vtkParseTypeMap[VTK_TYPE_UINT32]
#define VTK_PARSE_INT64 vtkParseTypeMap[VTK_TYPE_INT64]
#define VTK_PARSE_UINT64 vtkParseTypeMap[VTK_TYPE_UINT64]
#define VTK_PARSE_FLOAT32 vtkParseTypeMap[VTK_TYPE_FLOAT32]
#define VTK_PARSE_FLOAT64 vtkParseTypeMap[VTK_TYPE_FLOAT64]

/* Define the division between type and array count */
#define VTK_PARSE_COUNT_START 0x10000

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo data;
FileInfo *namespaceStack[10];
int namespaceDepth = 0;
FileInfo *currentNamespace = NULL;
ClassInfo *currentClass = NULL;
FunctionInfo *currentFunction = NULL;
TemplateArgs *templateStack[10];
int templateDepth = 0;
TemplateArgs *currentTemplate = NULL;

int parseDebug;
char temps[2048];
int  in_public;
int  in_protected;
int  is_concrete;
int  HaveComment;
char CommentText[50000];
int CommentState;
int sigClosed;
size_t sigMark[10];
size_t sigMarkDepth = 0;
unsigned int sigAllocatedLength;
char *currentId = 0;
char *currentVarName = 0;
char *currentVarValue = 0;
char *currentEnumName = 0;
char *currentEnumValue = 0;

void start_class(const char *classname, int is_struct);
void reject_class(const char *classname, int is_struct);
void end_class();
void output_function(void);
void reject_function(void);
void start_enum(const char *enumname);
void add_enum(const char *name, const char *value);
void end_enum();
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n);
void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n);

/* initializer functions */
void InitFile(FileInfo *file_info);
void InitClass(ClassInfo *cls);
void InitFunction(FunctionInfo *func);
void InitConstant(ConstantInfo *con);
void InitTemplate(TemplateArgs *arg);

/* duplicate a string */
char *vtkstrdup(const char *in)
{
  char *res = NULL;
  if (in)
    {
    res = (char *)malloc(strlen(in)+1);
    strcpy(res,in);
    }
  return res;
}

/* enter a namespace */
void pushNamespace(const char *name)
{
  int i;
  FileInfo *oldNamespace = currentNamespace;

  for (i = 0; i < oldNamespace->NumberOfNamespaces; i++)
    {
    /* see if the namespace already exists */
    if (strcmp(name, oldNamespace->Namespaces[i]->Name) == 0)
      {
      currentNamespace = oldNamespace->Namespaces[i];
      }
    }

  /* create a new namespace */
  if (i == oldNamespace->NumberOfNamespaces)
    {
    currentNamespace = (FileInfo *)malloc(sizeof(FileInfo));
    InitFile(currentNamespace);
    currentNamespace->Name = vtkstrdup(name);
    currentNamespace->ItemType = VTK_NAMESPACE_INFO;
    vtkParse_AddItemMacro(oldNamespace, Namespaces, currentNamespace);
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
}

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateArgs *)malloc(sizeof(TemplateArgs));
  InitTemplate(currentTemplate);
}

/* clear a template, if set */
void clearTemplate()
{
  if (currentTemplate)
    {
    free(currentTemplate);
    }
  currentTemplate = NULL;
}

/* push the template onto the stack, and start a new one */
void pushTemplate()
{
  templateStack[templateDepth++] = currentTemplate;
  startTemplate();
}

/* pop a template off the stack */
void popTemplate()
{
  currentTemplate = templateStack[--templateDepth];
}

/* reallocate Signature if "arg" cannot be appended */
void checkSigSize(const char *arg)
{
  if (strlen(currentFunction->Signature) + strlen(arg) + 5 >
      sigAllocatedLength)
    {
    currentFunction->Signature = (char *)
      realloc(currentFunction->Signature, sigAllocatedLength*2);
    sigAllocatedLength = sigAllocatedLength*2;
    }
}

/* close the signature, i.e. allow no more additions to it */
void closeSig()
{
  sigClosed = 1;
}

/* re-open the signature */
void openSig()
{
  sigClosed = 0;
}

/* insert text at the beginning of the signature */
void preSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t m, n;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
    m = strlen(cp);
    n = strlen(arg);
    memmove(&cp[n], cp, m+1);
    strncpy(cp, arg, n);
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t m, n;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
    m = strlen(cp);
    n = strlen(arg);
    strncpy(&cp[m], arg, n+1);
    }
}

/* prepend a scope:: to a name */
void prepend_scope(char *cp, const char *arg)
{
  size_t i, m, n, depth;

  m = strlen(cp);
  n = strlen(arg);
  i = m;
  while (i > 0 &&
         ((cp[i-1] >= 'a' && cp[i-1] <= 'z') ||
          (cp[i-1] >= 'A' && cp[i-1] <= 'Z') ||
          (cp[i-1] >= '0' && cp[i-1] <= '9') ||
          cp[i-1] == '_' || cp[i-1] == ':' ||
          cp[i-1] == '>'))
    {
    i--;
    if (cp[i] == '>')
      {
      depth = 1;
      while (i > 0)
        {
        i--;
        if (cp[i] == '<')
          {
          if (--depth == 0)
            {
            break;
            }
          }
        if (cp[i] == '>')
          {
          depth++;
          }
        }
      }
    }

  memmove(&cp[i+n+2], &cp[i], m+1);
  strncpy(&cp[i], arg, n);
  strncpy(&cp[i+n], "::", 2);
}

/* prepend a scope:: to the ID at the end of the signature */
void preScopeSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    checkSigSize(arg);
    prepend_scope(currentFunction->Signature, arg);
    }
}

/* set a mark in the signature for later operations */
void markSig()
{
  sigMark[sigMarkDepth] = 0;
  if (currentFunction->Signature)
    {
    sigMark[sigMarkDepth] = strlen(currentFunction->Signature);
    }
  sigMarkDepth++;
}

/* get the contents of the sig from the mark, and clear the mark */
const char *copySig()
{
  const char *cp = NULL;
  if (sigMarkDepth > 0)
    {
    sigMarkDepth--;
    }
  if (currentFunction->Signature)
    {
    cp = &currentFunction->Signature[sigMark[sigMarkDepth]];
    }
  return cp;
}

/* swap the signature text using the mark as the radix */
void swapSig()
{
  if (sigMarkDepth > 0)
    {
    sigMarkDepth--;
    }
  if (currentFunction->Signature && sigMark[sigMarkDepth] > 0)
    {
    size_t i, m, n, nn;
    char c;
    char *cp;
    cp = currentFunction->Signature;
    n = strlen(cp);
    m = sigMark[sigMarkDepth];
    nn = m/2;
    for (i = 0; i < nn; i++)
      {
      c = cp[i]; cp[i] = cp[m-i-1]; cp[m-i-1] = c;
      }
    nn = (n-m)/2;
    for (i = 0; i < nn; i++)
      {
      c = cp[i+m]; cp[i+m] = cp[n-i-1]; cp[n-i-1] = c;
      }
    nn = n/2;
    for (i = 0; i < nn; i++)
      {
      c = cp[i]; cp[i] = cp[n-i-1]; cp[n-i-1] = c;
      }
    }
}

/* chop the last char from the signature */
void chopSig(void)
{
  if (currentFunction->Signature)
    {
    size_t n = strlen(currentFunction->Signature);
    if (n > 0)
      {
      currentFunction->Signature[n-1] = '\0';
      }
    }
}

/* delete the signature */
void delSig(void)
{
  if (currentFunction->Signature)
    {
    free(currentFunction->Signature);
    currentFunction->Signature = NULL;
    }
}

/* mark this signature as legacy */
void legacySig(void)
{
  currentFunction->IsLegacy = 1;
}

/* clear the var Id */
void clearVarName(void)
{
  currentVarName = NULL;
}

/* set the var Id */
void setVarName(const char *text)
{
  static char static_text[2048];
  currentVarName = static_text;
  strcpy(static_text, text);
}

/* return the var id */
const char *getVarName()
{
  return currentVarName;
}

/* clear the var value */
void clearVarValue(void)
{
  currentVarValue = NULL;
}

/* set the var value */
void setVarValue(const char *text)
{
  static char static_text[2048];
  currentVarValue = static_text;
  strcpy(static_text, text);
}

/* return the var value */
const char *getVarValue()
{
  return currentVarValue;
}

/* clear the current Id */
void clearTypeId(void)
{
  currentId = NULL;
}

/* set the current Id, it is sticky until cleared */
void setTypeId(const char *text)
{
  static char static_text[2048];
  if (currentId == NULL)
    {
    currentId = static_text;
    strcpy(static_text, text);
    }
}

/* set the signature and type together */
void typeSig(const char *text)
{
  int n;

  postSig(text);
  postSig(" ");

  if (currentId == 0)
    {
    setTypeId(text);
    }
  else if ((currentId[0] == 'u' && strcmp(currentId, "unsigned") == 0) ||
           (currentId[0] == 's' && strcmp(currentId, "signed") == 0))
    {
    n = strlen(currentId);
    currentId[n] = ' ';
    strcpy(&currentId[n+1], text);
    }
}

/* return the current Id */
const char *getTypeId()
{
  return currentId;
}

%}

%union{
  char *str;
  int   integer;
}

%token STRUCT
%token CLASS
%token PUBLIC
%token PRIVATE
%token PROTECTED
%token VIRTUAL
%token <str> ID
%token <str> STRING_LITERAL
%token <str> INT_LITERAL
%token <str> HEX_LITERAL
%token <str> OCT_LITERAL
%token <str> FLOAT_LITERAL
%token <str> CHAR_LITERAL
%token INT
%token FLOAT
%token SHORT
%token LONG
%token LONG_LONG
%token INT64__
%token DOUBLE
%token VOID
%token CHAR
%token SIGNED_CHAR
%token BOOL
%token <str> OSTREAM
%token <str> ISTREAM
%token ENUM
%token UNION
%token CLASS_REF
%token OTHER
%token CONST
%token CONST_PTR
%token CONST_EQUAL
%token OPERATOR
%token UNSIGNED
%token SIGNED
%token FRIEND
%token INLINE
%token MUTABLE
%token TEMPLATE
%token TYPENAME
%token TYPEDEF
%token NAMESPACE
%token USING
%token <str> VTK_ID
%token STATIC
%token EXTERN
%token VAR_FUNCTION
%token ARRAY_NUM
%token VTK_LEGACY
%token NEW
%token DELETE
%token <str> LPAREN_POINTER
%token LPAREN_AMPERSAND
%token OP_LSHIFT_EQ
%token OP_RSHIFT_EQ
%token OP_LSHIFT
%token OP_RSHIFT
%token OP_ARROW_POINTER
%token OP_ARROW
%token OP_INCR
%token OP_DECR
%token OP_PLUS_EQ
%token OP_MINUS_EQ
%token OP_TIMES_EQ
%token OP_DIVIDE_EQ
%token OP_REMAINDER_EQ
%token OP_AND_EQ
%token OP_OR_EQ
%token OP_XOR_EQ
%token OP_LOGIC_AND_EQ
%token OP_LOGIC_OR_EQ
%token OP_LOGIC_AND
%token OP_LOGIC_OR
%token OP_LOGIC_EQ
%token OP_LOGIC_NEQ
%token OP_LOGIC_LEQ
%token OP_LOGIC_GEQ
%token ELLIPSIS
%token DOUBLE_COLON

/* type tokens */
%token <str> StdString
%token <str> UnicodeString
%token IdType
%token TypeInt8
%token TypeUInt8
%token TypeInt16
%token TypeUInt16
%token TypeInt32
%token TypeUInt32
%token TypeInt64
%token TypeUInt64
%token TypeFloat32
%token TypeFloat64

/* macro tokens */
%token SetMacro
%token GetMacro
%token SetStringMacro
%token GetStringMacro
%token SetClampMacro
%token SetObjectMacro
%token GetObjectMacro
%token BooleanMacro
%token SetVector2Macro
%token SetVector3Macro
%token SetVector4Macro
%token SetVector6Macro
%token GetVector2Macro
%token GetVector3Macro
%token GetVector4Macro
%token GetVector6Macro
%token SetVectorMacro
%token GetVectorMacro
%token ViewportCoordinateMacro
%token WorldCoordinateMacro
%token TypeMacro

/* special tokens */
%token VTK_CONSTANT_DEF
%token VTK_BYTE_SWAP_DECL

%%
/*
 * Here is the start of the grammer
 */

strt: | strt { delSig(); clearTypeId(); clearTemplate(); } file_item;

file_item:
     var
   | EXTERN var
   | anonymous_enum
   | named_enum
   | anonymous_union
   | named_union
   | anonymous_struct
   | using
   | namespace
   | extern
   | typedef
   | class_def
   | template class_def
   | CLASS_REF
   | operator func_body { output_function(); }
   | INLINE operator func_body { output_function(); }
   | EXTERN operator func_body { output_function(); }
   | template operator func_body { output_function(); }
   | template INLINE operator func_body { output_function(); }
   | scoped_operator func_body { reject_function(); }
   | INLINE scoped_operator func_body { reject_function(); }
   | EXTERN scoped_operator func_body { reject_function(); }
   | function func_body { output_function(); }
   | INLINE function func_body { output_function(); }
   | EXTERN function func_body { output_function(); }
   | EXTERN STRING_LITERAL function func_body { output_function(); }
   | scoped_method func_body { reject_function(); }
   | INLINE scoped_method func_body { reject_function(); }
   | EXTERN scoped_method func_body { reject_function(); }
   | template function func_body { output_function(); }
   | template INLINE function func_body { output_function(); }
   | legacy_function func_body { legacySig(); output_function(); }
   | macro
   | vtk_constant_def
   | class_id ';'
   | ID '(' maybe_other ')'
   | VTK_ID '(' maybe_other ')'
   | ';';

class_def: CLASS any_id { start_class($<str>2, 0); }
    optional_scope '{' class_def_body '}' { end_class(); }
  | CLASS any_id '<' types '>' { reject_class($<str>2, 0); }
    optional_scope '{' class_def_body '}' { end_class(); }
  | STRUCT any_id { start_class($<str>2, 1); }
    optional_scope '{' class_def_body '}' { end_class(); }
  | STRUCT any_id '<' types '>' { reject_class($<str>2, 1); }
    optional_scope '{' class_def_body '}' { end_class(); };

class_def_body: | class_def_body { delSig(); clearTypeId(); clearTemplate(); }
                  class_def_item;

class_def_item: scope_type ':'
   | var
   | MUTABLE var
   | anonymous_enum
   | named_enum
   | anonymous_union
   | named_union
   | anonymous_struct
   | using
   | typedef
   | internal_class
   | FRIEND internal_class
   | template_internal_class
   | CLASS_REF
   | operator func_body { output_function(); }
   | FRIEND operator func_body { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
   | INLINE operator func_body { output_function(); }
   | template operator func_body { output_function(); }
   | template INLINE operator func_body { output_function(); }
   | method func_body { output_function(); }
   | FRIEND method func_body { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
   | INLINE method func_body { output_function(); }
   | template method func_body { output_function(); }
   | template INLINE method func_body { output_function(); }
   | legacy_method func_body { legacySig(); output_function(); }
   | VTK_BYTE_SWAP_DECL '(' maybe_other ')' ';'
   | macro
   | ';';

/*
 * Enum constants should be handled as strings, so that IDs can be used.
 * The text can be dropped into the generated .cxx file and evaluated there,
 * just make sure that the IDs are properly scoped.
 */

named_enum: ENUM any_id {start_enum($<str>2);} '{' enum_list '}'
   {end_enum();} maybe_other_no_semi ';';

anonymous_enum: ENUM {start_enum(NULL);} '{' enum_list '}'
   {end_enum();} maybe_other_no_semi ';';

enum_list: | enum_item | enum_item ',' enum_list;

enum_item: any_id {add_enum($<str>1, NULL);}
         | any_id '=' enum_math {add_enum($<str>1, $<str>3);};

/* "any_id" -> "vtkClass::any_id" if it's a previously defined anonymous_enum const */

enum_value: enum_literal | any_id | scoped_id | templated_id;

enum_literal: '0' | INT_LITERAL | OCT_LITERAL | HEX_LITERAL | CHAR_LITERAL;

enum_math: enum_value { $<str>$ = $<str>1; }
     | math_unary_op enum_math
       {
         $<str>$ = (char *)malloc(strlen($<str>1) + strlen($<str>2) + 1);
         sprintf($<str>$, "%s%s", $<str>1, $<str>2);
       }
     | enum_value math_binary_op enum_math
       {
         $<str>$ = (char *)malloc(strlen($<str>1) + strlen($<str>2) +
                                  strlen($<str>3) + 3);
         sprintf($<str>$, "%s %s %s", $<str>1, $<str>2, $<str>3);
       }
     | '(' enum_math ')'
       {
         $<str>$ = (char *)malloc(strlen($<str>2) + 3);
         sprintf($<str>$, "(%s)", $<str>2);
       };

math_unary_op:   '-' { $<str>$ = "-"; } | '+' { $<str>$ = "+"; }
               | '~' { $<str>$ = "~"; };

math_binary_op:  '-' { $<str>$ = "-"; } | '+' { $<str>$ = "+"; }
               | '*' { $<str>$ = "*"; } | '/' { $<str>$ = "/"; }
               | '%' { $<str>$ = "%"; } | '&' { $<str>$ = "&"; }
               | '|' { $<str>$ = "|"; } | '^' { $<str>$ = "^"; };

anonymous_struct: STRUCT '{' maybe_other '}' maybe_other_no_semi ';';

named_union: UNION any_id '{' maybe_other '}' maybe_other_no_semi ';';

anonymous_union: UNION '{' maybe_other '}' maybe_other_no_semi ';';

using: USING maybe_other_no_semi ';';

namespace: NAMESPACE class_id { pushNamespace($<str>2); }
            '{' strt '}' { popNamespace(); };
         | NAMESPACE '{' maybe_other '}';

extern: EXTERN STRING_LITERAL '{' strt '}';

template_internal_class: template internal_class;

internal_class: CLASS any_id internal_class_body
              | STRUCT any_id internal_class_body;

internal_class_body: ';'
    | '{' maybe_other '}' ';'
    | ':' maybe_other_no_semi ';';

typedef: TYPEDEF type var_id ';'
 | TYPEDEF CLASS any_id '{' maybe_other '}' maybe_indirect_id ';'
 | TYPEDEF STRUCT any_id '{' maybe_other '}' maybe_indirect_id ';'
 | TYPEDEF type LPAREN_POINTER maybe_indirect_id ')'
   '(' ignore_args_list ')' ';'
 | TYPEDEF type LPAREN_AMPERSAND maybe_indirect_id ')'
   '(' ignore_args_list ')' ';'
 | TYPEDEF anonymous_enum
 | TYPEDEF named_enum
 | TYPEDEF anonymous_union
 | TYPEDEF named_union
 | TYPEDEF anonymous_struct
 | TYPEDEF VAR_FUNCTION ';';

template: TEMPLATE '<' '>' { postSig("template<> "); clearTypeId(); }
        | TEMPLATE '<' { postSig("template<");
          clearTypeId(); clearVarName(); clearVarValue(); startTemplate(); }
          template_args '>' { postSig("> "); clearTypeId(); };

template_args: template_arg
             | template_arg ',' { postSig(", ");
                 clearTypeId(); clearVarName(); clearVarValue(); }
               template_args;

template_arg: type_simple maybe_template_id
               {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTypes[i] = $<integer>1;
               currentTemplate->ArgClasses[i] = vtkstrdup(getTypeId());
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
            | class_or_typename maybe_template_id
               {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
            | { pushTemplate(); } template maybe_template_id
               {
               int i;
               TemplateArgs *newTemplate = currentTemplate;
               popTemplate();
               i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTemplates[i] = newTemplate;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               };

class_or_typename: CLASS {postSig("class ");}
                 | TYPENAME {postSig("typename ");};

maybe_template_id: | any_id { setVarName($<str>1); clearVarValue(); }
                     maybe_var_assign;

legacy_function: VTK_LEGACY '(' function ')' ;

legacy_method: VTK_LEGACY '(' method ')' ;

function: maybe_static_type func
         {
         currentFunction->ReturnType = $<integer>1;
         };

scoped_method: maybe_static_type scope func
      | class_id DOUBLE_COLON '~' destructor
      | class_id DOUBLE_COLON constructor;

scope: class_id DOUBLE_COLON
      | scope class_id DOUBLE_COLON;

method: '~' destructor {openSig(); preSig("~"); closeSig();}
      | VIRTUAL '~' destructor
         {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
      | constructor
      | maybe_static_type func
         {
         currentFunction->ReturnType = $<integer>1;
         }
      | VIRTUAL type func
         {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = $<integer>2;
         };

scoped_operator: class_id DOUBLE_COLON typecast_op_func
      | maybe_static_type scope op_func;

operator:
        typecast_op_func
         {
         currentFunction->ReturnType = $<integer>1;
         }
      | maybe_static_type op_func
         {
         currentFunction->ReturnType = $<integer>1;
         }
      | VIRTUAL type op_func
         {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = $<integer>2;
         };

typecast_op_func:
  OPERATOR maybe_static_type '('
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
  args_list ')' { postSig(")"); } func_trailer
    {
      $<integer>$ = $<integer>2;
      postSig(";");
      preSig("operator ");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", "operator typecast");
    };

op_func: op_sig { postSig(")"); } func_trailer
    {
      postSig(";");
      closeSig();
      currentFunction->Name = $<str>1;
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", currentFunction->Name);
    };

op_sig: OPERATOR op_token {postSig($<str>2);} '('
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    args_list ')' { $<str>$ = $<str>2; };

func: func_sig { postSig(")"); } func_trailer
    {
      postSig(";");
      closeSig();
      currentFunction->Name = $<str>1;
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    };

func_trailer:
  | '=' '0'
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
 | CONST_EQUAL '0'
    {
      postSig(" const = 0");
      currentFunction->IsConst = 1;
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
 | CONST
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    };

func_sig: any_id '('
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    } args_list ')' { $<str>$ = $<str>1; }
  | any_id '<' {markSig(); postSig("<");} types '>' '('
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      $<str>$ = (char *)malloc(strlen($<str>1) + strlen(cp) + 1);
      sprintf($<str>$, "%s%s", $<str>1, cp);
    } args_list ')' { $<str>$ = $<str>7; };

constructor: constructor_sig { postSig(");"); closeSig(); } maybe_initializers
    {
      currentFunction->Name = $<str>1;
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    };

constructor_sig: any_id '(' { postSig("("); } args_list ')';

maybe_initializers: | ':' initializer more_initializers;

more_initializers: | ',' initializer more_initializers;

initializer: any_id '(' maybe_other ')';

destructor: destructor_sig
    {
      postSig(");");
      closeSig();
      currentFunction->Name = (char *)malloc(strlen($<str>1) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], $<str>1);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    };

destructor_sig: any_id '(' { postSig("(");} args_list ')';

const_mod: CONST {postSig("const ");};

static_mod: STATIC {postSig("static ");}
          | STATIC INLINE {postSig("static ");};

any_id: VTK_ID {postSig($<str>1);}
     | ID {postSig($<str>1);}
     | ISTREAM {postSig($<str>1);}
     | OSTREAM {postSig($<str>1);}
     | StdString {postSig($<str>1);}
     | UnicodeString {postSig($<str>1);};

func_body: ';' | '{' maybe_other '}';

ignore_args_list: | ignore_more_args;

ignore_more_args: arg | arg ',' ignore_more_args;

args_list: | {clearTypeId();} more_args;

more_args: ELLIPSIS { postSig("...");}
  | arg
    { clearTypeId(); currentFunction->NumberOfArguments++; }
  | arg ','
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    more_args;

arg: type { clearVarName(); clearVarValue(); } maybe_var_array
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ($<integer>3 % VTK_PARSE_COUNT_START);
      int array_count = ($<integer>3 / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = $<integer>1 + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    } maybe_var_assign {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
  | type { clearVarName(); clearVarValue(); } var_id
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ($<integer>3 % VTK_PARSE_COUNT_START);
      int array_count = ($<integer>3 / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = $<integer>1 + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    } maybe_var_assign {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
  | VAR_FUNCTION
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
  | type LPAREN_AMPERSAND { postSig("(&"); clearVarName(); }
    maybe_var_id ')'
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ($<integer>1 | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
  | type LPAREN_POINTER { postSig("("); postSig($<str>2); postSig("*");
      clearVarName(); }
    maybe_var_id ')' '(' { postSig(")("); } ignore_args_list ')'
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    };

maybe_indirect_id: any_id | type_indirection any_id;

maybe_var_assign: | var_assign;

var_assign: '=' { postSig("="); } literal { setVarValue($<str>3); };

var:   maybe_static_type var_id_maybe_assign ';'
        {
        int type = ($<integer>1 | $<integer>2);
        if (getVarValue() && ((type & VTK_PARSE_CONST) != 0) &&
            ((type & VTK_PARSE_INDIRECT) == 0))
          {
          add_constant(getVarName(), getVarValue(),
                       (type & VTK_PARSE_UNQUALIFIED_TYPE), getTypeId(), 0);
          }
        }
     | maybe_static_type var_ids ';'
     | VAR_FUNCTION ';'
     | STATIC VAR_FUNCTION ';'
     | maybe_static_type LPAREN_AMPERSAND any_id ')' ';'
     | maybe_static_type LPAREN_POINTER maybe_indirect_id ')' ';'
     | maybe_static_type LPAREN_POINTER maybe_indirect_id ')' ARRAY_NUM ';'
     | maybe_static_type LPAREN_POINTER maybe_indirect_id ')'
       '[' maybe_other ']' ';'
     | maybe_static_type LPAREN_POINTER maybe_indirect_id ')'
       '(' ignore_args_list ')' ';'

var_ids: var_id_maybe_assign ',' maybe_indirect_var_ids;

maybe_indirect_var_ids: var_id_maybe_assign
                | var_id_maybe_assign ',' maybe_indirect_var_ids;
                | type_indirection var_id_maybe_assign
                | type_indirection var_id_maybe_assign ','
                  maybe_indirect_var_ids;

var_id_maybe_assign: var_id {clearVarValue();} maybe_var_assign {
    $<integer>$ = $<integer>1; };

maybe_var_id: | any_id {setVarName($<str>1);};

var_id: any_id maybe_var_array {
    $<integer>$ = $<integer>2; setVarName($<str>1);};

/*
 [n]       = VTK_PARSE_POINTER
 [n][m]    = 2*VTK_PARSE_POINTER
 [n][m][l] = 3*VTK_PARSE_POINTER
*/

maybe_var_array: {$<integer>$ = 0;} | var_array {$<integer>$ = $<integer>1;};

var_array:
       ARRAY_NUM { char temp[100]; sprintf(temp,"[%i]",$<integer>1);
                   postSig(temp); }
       maybe_var_array { $<integer>$ =
                         ((VTK_PARSE_COUNT_START * $<integer>1) |
                          ((VTK_PARSE_POINTER + $<integer>3) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
     | '[' maybe_other_no_semi ']' maybe_var_array
            { postSig("[]");
              $<integer>$ = ((VTK_PARSE_POINTER + $<integer>4) &
                             VTK_PARSE_UNQUALIFIED_TYPE); };

maybe_static_type: type {$<integer>$ = $<integer>1;}
    | static_mod type {$<integer>$ = (VTK_PARSE_STATIC | $<integer>2);};

type: type_red {$<integer>$ = $<integer>1;}
    | type_red type_indirection {$<integer>$ = ($<integer>1 | $<integer>2);};

type_red: type_red1 {$<integer>$ = $<integer>1;}
    | const_mod type_red1 {$<integer>$ = (VTK_PARSE_CONST | $<integer>2);}
    | type_red1 const_mod {$<integer>$ = (VTK_PARSE_CONST | $<integer>1);};

type_red1: type_red2
    | templated_id
      {postSig(" "); setTypeId($<str>1); $<integer>$ = VTK_PARSE_UNKNOWN;}
    | scoped_id
      {postSig(" "); setTypeId($<str>1); $<integer>$ = VTK_PARSE_UNKNOWN;}
    | TYPENAME {postSig("typename ");} maybe_scoped_id
      {postSig(" "); setTypeId($<str>3); $<integer>$ = VTK_PARSE_UNKNOWN;};

templated_id:
   VTK_ID '<' { markSig(); postSig($<str>1); postSig("<");} types '>'
     {chopSig(); postSig(">"); $<str>$ = vtkstrdup(copySig()); clearTypeId();}
 | ID '<' { markSig(); postSig($<str>1); postSig("<");} types '>'
     {chopSig(); postSig(">"); $<str>$ = vtkstrdup(copySig()); clearTypeId();};

types: type | type ',' {postSig(", ");} types;

maybe_scoped_id: ID {$<str>$ = $<str>1; postSig($<str>1);}
               | VTK_ID {$<str>$ = $<str>1; postSig($<str>1);}
               | templated_id {$<str>$ = $<str>1;};
               | scoped_id {$<str>$ = $<str>1;};

scoped_id: class_id DOUBLE_COLON maybe_scoped_id
           {
             $<str>$ = (char *)malloc(strlen($<str>1)+strlen($<str>3)+3);
             sprintf($<str>$, "%s::%s", $<str>1, $<str>3);
             preScopeSig($<str>1);
           }
         | templated_id DOUBLE_COLON maybe_scoped_id
           {
             $<str>$ = (char *)malloc(strlen($<str>1)+strlen($<str>3)+3);
             sprintf($<str>$, "%s::%s", $<str>1, $<str>3);
             preScopeSig("");
           };

class_id: ID { $<str>$ = $<str>1; }
        | VTK_ID { $<str>$ = $<str>1; }
        | ISTREAM { $<str>$ = $<str>1; }
        | OSTREAM { $<str>$ = $<str>1; }
        | StdString { $<str>$ = $<str>1; }
        | UnicodeString { $<str>$ = $<str>1; };

/* &          is VTK_PARSE_REF
   *          is VTK_PARSE_POINTER
   *&         is VTK_PARSE_POINTER_REF
   **         is VTK_PARSE_POINTER_POINTER
   *const     is VTK_PARSE_CONST_POINTER
   *const&    is VTK_PARSE_CONST_POINTER_REF
   *const*    is VTK_PARSE_POINTER_CONST_POINTER
   everything else is VTK_PARSE_BAD_INDIRECT
   */

type_indirection:
    '&' { postSig("&"); $<integer>$ = VTK_PARSE_REF;}
  | '*' { postSig("*"); $<integer>$ = VTK_PARSE_POINTER;}
  | CONST_PTR { postSig("*const "); $<integer>$ = VTK_PARSE_CONST_POINTER;}
  | '*' '&' { postSig("*&"); $<integer>$ = VTK_PARSE_POINTER_REF;}
  | '*' '*' { postSig("**"); $<integer>$ = VTK_PARSE_POINTER_POINTER;}
  | CONST_PTR '&'
    { postSig("*const &"); $<integer>$ = VTK_PARSE_CONST_POINTER_REF;}
  | CONST_PTR '*'
    { postSig("*const *"); $<integer>$ = VTK_PARSE_POINTER_CONST_POINTER;}
  | CONST_PTR CONST_PTR
    { postSig("*const *"); $<integer>$ = VTK_PARSE_BAD_INDIRECT;}
  | '*' '*' { postSig("**"); } type_indirection
    { $<integer>$ = VTK_PARSE_BAD_INDIRECT;}
  | CONST_PTR '*' { postSig("*const *");} type_indirection
    { $<integer>$ = VTK_PARSE_BAD_INDIRECT;}
  | CONST_PTR CONST_PTR { postSig("*const *const ");} type_indirection
    { $<integer>$ = VTK_PARSE_BAD_INDIRECT;};

type_red2:
   type_simple { $<integer>$ = $<integer>1;}
 | CLASS type_id { $<integer>$ = $<integer>2; }
 | STRUCT type_id { $<integer>$ = $<integer>2; }
 | UNION ID { typeSig($<str>2); $<integer>$ = VTK_PARSE_UNKNOWN; }
 | UNION VTK_ID { typeSig($<str>2); $<integer>$ = VTK_PARSE_UNKNOWN; }
 | ENUM ID { typeSig($<str>2); $<integer>$ = VTK_PARSE_UNKNOWN; }
 | ENUM VTK_ID { typeSig($<str>2); $<integer>$ = VTK_PARSE_UNKNOWN; };

type_simple:
   type_primitive { $<integer>$ = $<integer>1;}
 | type_id { $<integer>$ = $<integer>1;};

type_id:
   StdString { typeSig($<str>1); $<integer>$ = VTK_PARSE_STRING;}
 | UnicodeString { typeSig($<str>1); $<integer>$ = VTK_PARSE_UNICODE_STRING;}
 | OSTREAM { typeSig($<str>1); $<integer>$ = VTK_PARSE_OSTREAM; }
 | ISTREAM { typeSig($<str>1); $<integer>$ = VTK_PARSE_ISTREAM; }
 | ID { typeSig($<str>1); $<integer>$ = VTK_PARSE_UNKNOWN; }
 | VTK_ID { typeSig($<str>1); $<integer>$ = VTK_PARSE_OBJECT; }

type_primitive:
  VOID   { typeSig("void"); $<integer>$ = VTK_PARSE_VOID;} |
  FLOAT  { typeSig("float"); $<integer>$ = VTK_PARSE_FLOAT;} |
  DOUBLE { typeSig("double"); $<integer>$ = VTK_PARSE_DOUBLE;} |
  BOOL { typeSig("bool"); $<integer>$ = VTK_PARSE_BOOL;} |
  SIGNED_CHAR {typeSig("signed char"); $<integer>$ = VTK_PARSE_SIGNED_CHAR;} |
  TypeInt8 { typeSig("vtkTypeInt8"); $<integer>$ = VTK_PARSE_INT8; } |
  TypeUInt8 { typeSig("vtkTypeUInt8"); $<integer>$ = VTK_PARSE_UINT8; } |
  TypeInt16 { typeSig("vtkTypeInt16"); $<integer>$ = VTK_PARSE_INT16; } |
  TypeUInt16 { typeSig("vtkTypeUInt16"); $<integer>$ = VTK_PARSE_UINT16; } |
  TypeInt32 { typeSig("vtkTypeInt32"); $<integer>$ = VTK_PARSE_INT32; } |
  TypeUInt32 { typeSig("vtkTypeUInt32"); $<integer>$ = VTK_PARSE_UINT32; } |
  TypeInt64 { typeSig("vtkTypeInt64"); $<integer>$ = VTK_PARSE_INT64; } |
  TypeUInt64 { typeSig("vtkTypeUInt64"); $<integer>$ = VTK_PARSE_UINT64; } |
  TypeFloat32 { typeSig("vtkTypeFloat32"); $<integer>$ = VTK_PARSE_FLOAT32; } |
  TypeFloat64 { typeSig("vtkTypeFloat64"); $<integer>$ = VTK_PARSE_FLOAT64; } |
  SIGNED {typeSig("signed");} type_integer { $<integer>$ = $<integer>3;}; |
  UNSIGNED {typeSig("unsigned");}
   type_integer { $<integer>$ = (VTK_PARSE_UNSIGNED | $<integer>3);} |
  type_integer { $<integer>$ = $<integer>1;};

type_integer:
  CHAR   { typeSig("char"); $<integer>$ = VTK_PARSE_CHAR;} |
  INT    { typeSig("int"); $<integer>$ = VTK_PARSE_INT;} |
  SHORT  { typeSig("short"); $<integer>$ = VTK_PARSE_SHORT;} |
  LONG   { typeSig("long"); $<integer>$ = VTK_PARSE_LONG;} |
  IdType { typeSig("vtkIdType"); $<integer>$ = VTK_PARSE_ID_TYPE;} |
  LONG_LONG { typeSig("long long"); $<integer>$ = VTK_PARSE_LONG_LONG;} |
  INT64__ { typeSig("__int64"); $<integer>$ = VTK_PARSE___INT64;};

optional_scope: | ':' scope_list;

scope_list: scope_list_item | scope_list_item ',' scope_list;

scope_list_item: maybe_scoped_id
  | PRIVATE maybe_scoped_id
  | PROTECTED maybe_scoped_id
  | PUBLIC maybe_scoped_id
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup($<str>2));
    };

scope_type: PUBLIC {in_public = 1; in_protected = 0;}
          | PRIVATE {in_public = 0; in_protected = 0;}
          | PROTECTED {in_public = 0; in_protected = 1;};

literal:  literal2 {$<str>$ = $<str>1;}
          | '+' {postSig("+");} literal2 {$<str>$ = $<str>3;}
          | '-' {postSig("-");} literal2 {
             $<str>$ = (char *)malloc(strlen($<str>3)+2);
             sprintf($<str>$, "-%s", $<str>3); }
          | string_literal {$<str>$ = $<str>1; postSig($<str>1);}
          | '(' {postSig("(");} literal ')' {postSig(")"); $<str>$ = $<str>3;}
          | ID '<' {postSig($<str>1); postSig("<");}
            type_red '>' '(' {postSig("<(");} literal2 ')'
            {
            postSig(")");
            $<str>$ = (char *)malloc(strlen($<str>1) + strlen(getTypeId()) +
                                     strlen($<str>8) + 5);
            sprintf($<str>$, "%s<%s>(%s)", $<str>1, getTypeId(), $<str>8);
            };

string_literal: STRING_LITERAL {$<str>$ = $<str>1;}
              | string_literal STRING_LITERAL {
                int i = strlen($<str>1);
                char *cp = (char *)malloc(i + strlen($<str>2) + 1);
                strcpy(cp, $<str>1);
                strcpy(&cp[i], $<str>2);
                $<str>$ = cp; };

literal2:   '0' {$<str>$ = vtkstrdup("0"); postSig("0");}
          | INT_LITERAL {$<str>$ = $<str>1; postSig($<str>1);}
          | HEX_LITERAL {$<str>$ = $<str>1; postSig($<str>1);}
          | FLOAT_LITERAL {$<str>$ = $<str>1; postSig($<str>1);}
          | CHAR_LITERAL {$<str>$ = $<str>1; postSig($<str>1);}
          | ID {$<str>$ = vtkstrdup(add_const_scope($<str>1));
                postSig($<str>1);}
          | VTK_ID {$<str>$ = vtkstrdup(add_const_scope($<str>1));
                postSig($<str>1);};

macro:
  SetMacro '(' any_id ',' {preSig("void Set"); postSig("(");} type ')'
   {
   postSig("a);");
   sprintf(temps,"Set%s",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = $<integer>6;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 0;
   output_function();
   }
| GetMacro '(' {postSig("Get");} any_id ','
   {markSig();} type {swapSig();} ')'
   {
   postSig("();");
   sprintf(temps,"Get%s",$<str>4);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = $<integer>7;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
| SetStringMacro '(' {preSig("void Set");} any_id ')'
   {
   postSig("(char *);");
   sprintf(temps,"Set%s",$<str>4);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_CHAR_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup("char");
   currentFunction->ArgCounts[0] = 0;
   output_function();
   }
| GetStringMacro '(' {preSig("char *Get");} any_id ')'
   {
   postSig("();");
   sprintf(temps,"Get%s",$<str>4);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();
   }
| SetClampMacro '(' any_id ',' {delSig(); markSig();} type_red2 {closeSig();}
     ',' maybe_other_no_semi ')'
   {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"void Set%s(%s);",$<str>3,local);
   sprintf(temps,"Set%s",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = $<integer>6;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 0;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%sGet%sMinValue();",local,$<str>3);
   sprintf(temps,"Get%sMinValue",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = $<integer>6;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%sGet%sMaxValue();",local,$<str>3);
   sprintf(temps,"Get%sMaxValue",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = $<integer>6;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   free(local);
   }
| SetObjectMacro '(' any_id ','
  {preSig("void Set"); postSig("("); } type_red2 ')'
   {
   postSig("*);");
   sprintf(temps,"Set%s",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 1;
   output_function();
   }
| GetObjectMacro '(' {postSig("*Get");} any_id ','
   {markSig();} type_red2 {swapSig();} ')'
   {
   postSig("();");
   sprintf(temps,"Get%s",$<str>4);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
| BooleanMacro '(' any_id ',' type_red2 ')'
   {
   sprintf(temps,"%sOn",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   delSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   output_function();

   sprintf(temps,"%sOff",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   delSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   output_function();
   }
| SetVector2Macro '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputSetVectorMacro($<str>3, $<integer>6, copySig(), 2);
   }
| GetVector2Macro '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputGetVectorMacro($<str>3, $<integer>6, copySig(), 2);
   }
| SetVector3Macro '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputSetVectorMacro($<str>3, $<integer>6, copySig(), 3);
   }
| GetVector3Macro  '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputGetVectorMacro($<str>3, $<integer>6, copySig(), 3);
   }
| SetVector4Macro '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputSetVectorMacro($<str>3, $<integer>6, copySig(), 4);
   }
| GetVector4Macro  '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputGetVectorMacro($<str>3, $<integer>6, copySig(), 4);
   }
| SetVector6Macro '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputSetVectorMacro($<str>3, $<integer>6, copySig(), 6);
   }
| GetVector6Macro  '(' any_id ',' {delSig(); markSig();} type_red2 ')'
   {
   chopSig();
   outputGetVectorMacro($<str>3, $<integer>6, copySig(), 6);
   }
| SetVectorMacro  '(' any_id ',' {delSig(); markSig();}
     type_red2 ',' INT_LITERAL ')'
   {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"void Set%s(%s a[%s]);",
           $<str>3, local, $<str>8);
   sprintf(temps,"Set%s",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | $<integer>6);
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = atol($<str>8);
   output_function();
   free(local);
   }
| GetVectorMacro  '(' any_id ',' {delSig(); markSig();}
     type_red2 ',' INT_LITERAL ')'
   {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"%s *Get%s();", local, $<str>3);
   sprintf(temps,"Get%s",$<str>3);
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | $<integer>6);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = atol($<str>8);
   output_function();
   free(local);
   }
| ViewportCoordinateMacro '(' any_id ')'
   {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             $<str>3);

     sprintf(temps,"Get%sCoordinate",$<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
     currentFunction->ReturnClass = "vtkCoordinate";
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double, double);",
             $<str>3);
     sprintf(temps,"Set%s",$<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 2;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[1] = vtkstrdup("double");
     currentFunction->ArgCounts[1] = 0;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double a[2]);",
             $<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 2;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", $<str>3);
     sprintf(temps,"Get%s",$<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ReturnClass = vtkstrdup("double");
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 2;
     output_function();
   }
| WorldCoordinateMacro '(' any_id ')'
   {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             $<str>3);

     sprintf(temps,"Get%sCoordinate",$<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
     currentFunction->ReturnClass = "vtkCoordinate";
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,
             "void Set%s(double, double, double);",
             $<str>3);
     sprintf(temps,"Set%s",$<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 3;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[1] = vtkstrdup("double");
     currentFunction->ArgCounts[1] = 0;
     currentFunction->ArgTypes[2] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[2] = vtkstrdup("double");
     currentFunction->ArgCounts[2] = 0;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double a[3]);",
             $<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 3;
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", $<str>3);
     sprintf(temps,"Get%s",$<str>3);
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ReturnClass = vtkstrdup("double");
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 3;
     output_function();
   }
| TypeMacro '(' any_id ',' any_id ')'
   {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgClasses[0] = vtkstrdup("char");
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();", $<str>3);
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup($<str>3);
   output_function();

   if ( is_concrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
             $<str>3);
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup($<str>3);
     output_function();
     }
   }
| TypeMacro '(' any_id ',' any_id ',' ')'
   {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   currentFunction->ReturnClass = vtkstrdup("int");
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();", $<str>3);
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup($<str>3);
   output_function();

   if ( is_concrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
             $<str>3);
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC|VTK_PARSE_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup($<str>3);
     output_function();
     }
   }
;

/*
 * Operators
 */

op_token: '(' ')' { $<str>$ = "operator()"; }
        | '[' ']' { $<str>$ = "operator[]"; }
        | NEW '[' ']' { $<str>$ = "operator new[]"; }
        | DELETE '[' ']' { $<str>$ = "operator delete[]"; }
        | op_token_no_delim;

op_token_no_delim: '=' { $<str>$ = "operator="; }
   | '*' { $<str>$ = "operator*"; } | '/' { $<str>$ = "operator/"; }
   | '-' { $<str>$ = "operator-"; } | '+' { $<str>$ = "operator+"; }
   | '!' { $<str>$ = "operator!"; } | '~' { $<str>$ = "operator~"; }
   | ',' { $<str>$ = "operator,"; } | '<' { $<str>$ = "operator<"; }
   | '>' { $<str>$ = "operator>"; } | '&' { $<str>$ = "operator&"; }
   | '|' { $<str>$ = "operator|"; } | '^' { $<str>$ = "operator^"; }
   | '%' { $<str>$ = "operator%"; }
   | NEW { $<str>$ = "operator new"; }
   | DELETE { $<str>$ = "operator delete"; }
   | OP_LSHIFT_EQ { $<str>$ = "operator<<="; }
   | OP_RSHIFT_EQ { $<str>$ = "operator>>="; }
   | OP_LSHIFT { $<str>$ = "operator<<"; }
   | OP_RSHIFT { $<str>$ = "operator>>"; }
   | OP_ARROW_POINTER { $<str>$ = "operator->*"; }
   | OP_ARROW { $<str>$ = "operator->"; }
   | OP_PLUS_EQ { $<str>$ = "operator+="; }
   | OP_MINUS_EQ { $<str>$ = "operator-="; }
   | OP_TIMES_EQ { $<str>$ = "operator*="; }
   | OP_DIVIDE_EQ { $<str>$ = "operator/="; }
   | OP_REMAINDER_EQ { $<str>$ = "operator%="; }
   | OP_INCR { $<str>$ = "operator++"; }
   | OP_DECR { $<str>$ = "operator--"; }
   | OP_AND_EQ { $<str>$ = "operator&="; }
   | OP_OR_EQ { $<str>$ = "operator|="; }
   | OP_XOR_EQ { $<str>$ = "operator^="; }
   | OP_LOGIC_AND_EQ {$<str>$ = "operator&&=";}
   | OP_LOGIC_OR_EQ {$<str>$ = "operator||=";}
   | OP_LOGIC_AND { $<str>$ = "operator&&"; }
   | OP_LOGIC_OR { $<str>$ = "operator||"; }
   | OP_LOGIC_EQ { $<str>$ = "operator=="; }
   | OP_LOGIC_NEQ { $<str>$ = "operator!="; }
   | OP_LOGIC_LEQ { $<str>$ = "operator<="; }
   | OP_LOGIC_GEQ { $<str>$ = "operator>="; };

/*
 * "VTK_CONSTANT some_value"
 */

vtk_constant_def: VTK_CONSTANT_DEF
  {
  static char name[256];
  static char value[256];
  int i = 0;
  char *cp = $<str>1;
  while ((*cp >= 'a' && *cp <= 'z') ||
         (*cp >= 'A' && *cp <= 'Z') ||
         (*cp >= '0' && *cp <= '9') ||
         *cp == '_') { name[i++] = *cp++; }
  name[i] = '\0';
  while (*cp == ' ' || *cp == '\t') { cp++; }
  strcpy(value, cp);
  i = strlen(value);
  while (i > 0 && (value[i-1] == '\n' || value[i-1] == '\r' ||
                   value[i-1] == '\t' || value[i-1] == ' ')) { i--; }
  value[i] = '\0';
  add_constant(name, value, 0, NULL, 1);
  };

/*
 * These just eat up misc garbage
 */
maybe_other : | maybe_other other_stuff;
maybe_other_no_semi : | maybe_other_no_semi other_stuff_no_semi;

other_stuff : ';' | other_stuff_no_semi;

other_stuff_no_semi : OTHER | braces | parens | brackets | TYPEDEF
   | op_token_no_delim | '0' | ':' | '.' | DOUBLE_COLON | CLASS | TEMPLATE
   | ISTREAM | OSTREAM | StdString | UnicodeString | type_primitive
   | OCT_LITERAL | INT_LITERAL | HEX_LITERAL | FLOAT_LITERAL | CHAR_LITERAL
   | STRING_LITERAL | CLASS_REF | CONST | CONST_PTR | CONST_EQUAL | STRUCT
   | OPERATOR | STATIC | INLINE | VIRTUAL | ENUM | UNION | TYPENAME
   | ARRAY_NUM | VAR_FUNCTION | ELLIPSIS | PUBLIC | PROTECTED | PRIVATE
   | NAMESPACE | USING | EXTERN | ID | VTK_ID | vtk_constant_def;

braces: '{' maybe_other '}';
parens: '(' maybe_other ')'
       | LPAREN_POINTER maybe_other ')'
       | LPAREN_AMPERSAND maybe_other ')';
brackets: '[' maybe_other ']';

%%
#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitTemplate(TemplateArgs *args)
{
  int i;

  args->NumberOfArguments = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    args->ArgTemplates[i] = NULL;
    args->ArgTypes[i] = 0;
    args->ArgClasses[i] = NULL;
    args->ArgNames[i] = NULL;
    args->ArgValues[i] = NULL;
    }
}

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i;

  func->Name = NULL;
  func->ItemType = VTK_FUNCTION_INFO;
  func->Template = NULL;
  func->NumberOfArguments = 0;
  func->ArrayFailure = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsPublic = 0;
  func->IsOperator = 0;
  func->IsConst = 0;
  func->HaveHint = 0;
  func->HintSize = 0;
  func->ReturnType = VTK_PARSE_VOID;
  func->ReturnClass = NULL;
  func->Comment = NULL;
  func->Signature = NULL;
  func->IsLegacy = 0;
  sigAllocatedLength = 0;
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    func->ArgTypes[i] = 0;
    func->ArgClasses[i] = 0;
    func->ArgCounts[i] = 0;
    func->ArgNames[i] = 0;
    func->ArgValues[i] = 0;
    }
}

/* initialize the structure */
void InitConstant(ConstantInfo *con)
{
  con->Name = NULL;
  con->ItemType = VTK_CONSTANT_INFO;
  con->Value = NULL;
  con->Type = 0;
  con->TypeClass = NULL;
  con->IsEnum = 0;
  con->IsProtected = 0;
  con->IsPublic = 0;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->Name = NULL;
  cls->ItemType = VTK_CLASS_INFO;
  cls->Template = NULL;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfConstants = 0;
  cls->NumberOfItems = 0;
}

/* initialize the structure */
void InitFile(FileInfo *file_info)
{
  /* namespace info */
  file_info->Name = NULL;
  file_info->ItemType = VTK_FILE_INFO;
  file_info->NumberOfClasses = 0;
  file_info->NumberOfFunctions = 0;
  file_info->NumberOfConstants = 0;
  file_info->NumberOfNamespaces = 0;
  file_info->NumberOfItems = 0;

  /* file info */
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->Name = vtkstrdup(classname);
  if (is_struct)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  vtkParse_AddItemMacro(currentNamespace, Classes, currentClass);

  /* template information */
  if (currentTemplate)
    {
    currentClass->Template = currentTemplate;
    currentTemplate = NULL;
    }

  in_public = 0;
  in_protected = 0;
  if (is_struct)
    {
    in_public = 1;
    }

  InitFunction(currentFunction);
}

/* reject the class */
void reject_class(const char *classname, int is_struct)
{
  static ClassInfo static_class;

  currentClass = &static_class;
  currentClass->Name = vtkstrdup(classname);
  InitClass(currentClass);

  in_public = 0;
  in_protected = 0;
  if (is_struct)
    {
    in_public = 1;
    }

  InitFunction(currentFunction);
}

/* reached the end of a class definition */
void end_class()
{
  currentClass = NULL;
  in_public = 1;
  in_protected = 0;
}

/* start a new enum */
void start_enum(const char *name)
{
  static char text[256];
  currentEnumName = NULL;
  currentEnumValue = NULL;
  if (name)
    {
    currentEnumName = text;
    strcpy(currentEnumName, name);
    }
}

/* finish the enum */
void end_enum()
{
  currentEnumName = NULL;
  currentEnumValue = NULL;
}

/* add a constant to the enum */
void add_enum(const char *name, const char *value)
{
  static char text[256];
  int i, j;

  if (value)
    {
    currentEnumValue = text;
    strcpy(currentEnumValue, value);
    }
  else if (currentEnumValue)
    {
    i = strlen(currentEnumValue);
    while (i > 0 && currentEnumValue[i-1] >= '0' &&
           currentEnumValue[i-1] <= '9') { i--; }

    if (i == 0 || currentEnumValue[i-1] == ' ' ||
        (i > 1 && currentEnumValue[i-2] == ' ' &&
         (currentEnumValue[i-1] == '-' || currentEnumValue[i-1] == '+')))
      {
      if (i > 0 && currentEnumValue[i-1] != ' ')
        {
        i--;
        }
      j = atol(&currentEnumValue[i]);
      sprintf(&currentEnumValue[i], "%i", j+1);
      }
    else
      {
      i = strlen(currentEnumValue);
      strcpy(&currentEnumValue[i], " + 1");
      }
    }
  else
    {
    currentEnumValue = text;
    strcpy(currentEnumValue, "0");
    }

  add_constant(name, currentEnumValue, VTK_PARSE_INT, currentEnumName, 2);
}

/* add a constant to the current class or namespace */
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int flag)
{
  ConstantInfo *con = (ConstantInfo *)malloc(sizeof(ConstantInfo));
  InitConstant(con);
  con->Name = vtkstrdup(name);
  con->Value = vtkstrdup(value);
  con->Type = type;
  if (typeclass)
    {
    con->TypeClass = vtkstrdup(typeclass);
    }
  if (flag == 2)
    {
    con->IsEnum = 1;
    }

  if (flag == 1)
    {
    con->IsPublic = 1;
    vtkParse_AddItemMacro(&data, Constants, con);
    }
  else if (currentClass)
    {
    con->IsPublic = in_public;
    con->IsProtected = in_protected;
    vtkParse_AddItemMacro(currentClass, Constants, con);
    }
  else
    {
    con->IsPublic = 1;
    vtkParse_AddItemMacro(currentNamespace, Constants, con);
    }
}

/* if the name is a const in this namespace, the scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  FileInfo *scope = currentNamespace;
  int i, j;
  int addscope = 0;

  strcpy(text, name);

  if (currentClass)
    {
    for (j = 0; j < currentClass->NumberOfConstants; j++)
      {
      if (strcmp(currentClass->Constants[j]->Name, text) == 0)
        {
        prepend_scope(text, currentClass->Name);
        addscope = 1;
        }
      }
    }
  i = namespaceDepth;
  while (scope && scope->Name)
    {
    if (addscope)
      {
      prepend_scope(text, scope->Name);
      }
    else
      {
      for (j = 0; j < scope->NumberOfConstants; j++)
        {
        if (strcmp(scope->Constants[j]->Name, text) == 0)
          {
          prepend_scope(text, scope->Name);
          addscope = 1;
          }
        }
      }

    scope = 0;
    if (i > 0)
      {
      scope = namespaceStack[--i];
      }
    }

  return text;
}

/* reject the function, do not output it */
void reject_function()
{
  InitFunction(currentFunction);
}

/* a simple routine that updates a few variables */
void output_function()
{
  int i, j, match;

  /* reject template specializations */
  if (currentFunction->Name[strlen(currentFunction->Name)-1] == '>')
    {
    reject_function();
    return;
    }

  /* template information */
  if (currentTemplate)
    {
    currentFunction->Template = currentTemplate;
    currentTemplate = NULL;
    }

  /* a void argument is the same as no arguements */
  if (currentFunction->NumberOfArguments == 1 &&
      (currentFunction->ArgTypes[0] & VTK_PARSE_UNQUALIFIED_TYPE) ==
      VTK_PARSE_VOID)
    {
    currentFunction->NumberOfArguments = 0;
    }

  /* if return type is void, set return class to void */
  if (currentFunction->ReturnClass == NULL &&
      (currentFunction->ReturnType & VTK_PARSE_UNQUALIFIED_TYPE) ==
       VTK_PARSE_VOID)
    {
    currentFunction->ReturnClass = vtkstrdup("void");
    }

  /* set public, protected */
  if (currentClass)
    {
    currentFunction->IsPublic = in_public;
    currentFunction->IsProtected = in_protected;
    }
  else
    {
    currentFunction->IsPublic = 1;
    currentFunction->IsProtected = 0;
    }

  /* look for VAR FUNCTIONS */
  if (currentFunction->NumberOfArguments
      && (currentFunction->ArgTypes[0] == VTK_PARSE_FUNCTION))
    {
    if (currentFunction->NumberOfArguments == 2)
      {
      currentFunction->NumberOfArguments = 1;
      }
    else
      {
      currentFunction->ArrayFailure = 1;
      }
    }

  /* reject multi-dimensional arrays from wrappers */
  for (i = 0; i < currentFunction->NumberOfArguments; i++)
    {
    switch (currentFunction->ArgTypes[i] & VTK_PARSE_INDIRECT)
      {
      case VTK_PARSE_ARRAY_2D:
      case VTK_PARSE_ARRAY_3D:
      case VTK_PARSE_BAD_INDIRECT:
        currentFunction->ArrayFailure = 1;
        break;
      }
    }

  if (currentClass)
    {
    /* is it a delete function */
    if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
      {
      currentClass->HasDelete = 1;
      }

    vtkParse_AddItemMacro(currentClass, Functions, currentFunction);

    currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    }
  else
    {
    /* make sure this function isn't a repeat */
    match = 0;
    for (i = 0; i < currentNamespace->NumberOfFunctions; i++)
      {
      if (currentNamespace->Functions[i]->Name &&
          strcmp(currentNamespace->Functions[i]->Name,
                 currentFunction->Name) == 0)
        {
        if (currentNamespace->Functions[i]->NumberOfArguments ==
            currentFunction->NumberOfArguments)
          {
          for (j = 0; j < currentFunction->NumberOfArguments; j++)
            {
            if (currentNamespace->Functions[i]->ArgTypes[j] ==
                currentFunction->ArgTypes[j])
              {
              if (currentFunction->ArgTypes[j] == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->ArgClasses[j],
                         currentFunction->ArgClasses[j]) == 0)
                {
                break;
                }
              }
            }
          if (j == currentFunction->NumberOfArguments)
            {
            match = 1;
            break;
            }
          }
        }
      }

    if (!match)
      {
      vtkParse_AddItemMacro(currentNamespace, Functions, currentFunction);

      currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      }
    }

  InitFunction(currentFunction);
}

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n)
{
  char *argClass = vtkstrdup(getTypeId());
  char *local = vtkstrdup(typeText);
  char *name;
  int i;

  sprintf(temps,"Set%s", var);
  name = vtkstrdup(temps);

  sprintf(currentFunction->Signature, "void Set%s(%s", var, local);
  for (i = 1; i < n; i++)
    {
    postSig(", ");
    postSig(local);
    }
  postSig(");");
  currentFunction->Name = name;
  currentFunction->NumberOfArguments = n;
  for (i = 0; i < n; i++)
    {
    currentFunction->ArgTypes[i] = argType;
    currentFunction->ArgClasses[i] = argClass;
    currentFunction->ArgCounts[i] = 0;
    }
  output_function();

  currentFunction->Signature = (char *)malloc(2048);
  sigAllocatedLength = 2048;
  sprintf(currentFunction->Signature, "void Set%s(%s a[%i]);",
          var, local, n);
  currentFunction->Name = name;
  currentFunction->NumberOfArguments = 1;
  currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | argType);
  currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
  currentFunction->ArgCounts[0] = n;
  output_function();

  free(local);
}

void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n)
{
  char *local = vtkstrdup(typeText);

  sprintf(currentFunction->Signature, "%s *Get%s();", local, var);
  sprintf(temps, "Get%s", var);
  currentFunction->Name = vtkstrdup(temps);
  currentFunction->NumberOfArguments = 0;
  currentFunction->ReturnType = (VTK_PARSE_POINTER | argType);
  currentFunction->ReturnClass = vtkstrdup(getTypeId());
  currentFunction->HaveHint = 1;
  currentFunction->HintSize = n;
  output_function();

  free(local);
}

/* Parse a header file and return a FileInfo struct */
void vtkParse_AddPointerToArray(void *valueArray, int *count, void *value)
{
  void **newvalues = 0;
  void **values = *(void ***)valueArray;
  int n = *count;
  int i;

  /* if empty, alloc for the first time */
  if (n == 0)
    {
    values = (void **)malloc(1*sizeof(void*));
    }
  /* if count is power of two, reallocate with double size */
  else if ((n & (n-1)) == 0)
    {
    newvalues = (void **)malloc((n << 1)*sizeof(void*));

    for (i = 0; i < n; i++)
      {
      newvalues[i] = values[i];
      }

    free(values);
    values = newvalues;
    }

  values[n++] = value;
  *count = n;
  *(void ***)valueArray = values;
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, int concrete, FILE *ifile, FILE *errfile)
{
  int i, j, lineno;
  int ret;
  FileInfo *file_info;
  char *main_class;

  InitFile(&data);

  data.FileName = vtkstrdup(filename);
  is_concrete = concrete;

  CommentState = 0;
  namespaceDepth = 0;
  currentNamespace = &data;
  templateDepth = 0;
  currentTemplate = NULL;
  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  InitFunction(currentFunction);

  parseDebug = 0;
  if (getenv("DEBUG") != NULL)
    {
    parseDebug = 1;
    }

  yyset_in(ifile);
  yyset_out(errfile);
  ret = yyparse();
  lineno = yyget_lineno();
  yylex_destroy();

  free(currentFunction);

  if (ret)
    {
    fprintf(errfile,
            "*** SYNTAX ERROR found in parsing the header file %s "
            "before line %d ***\n",
            filename, lineno);
    return NULL;
    }

  /* The main class name should match the file name */
  i = strlen(filename);
  j = i;
  while (i > 0)
    {
    --i;
    if (filename[i] == '.')
      {
      j = i;
      }
    if (filename[i] == '/' || filename[i] == '\\')
      {
      i++;
      break;
      }
    }
  main_class = (char *)malloc(j-i+1);
  strncpy(main_class, &currentNamespace->FileName[i], j-i);
  main_class[j-i] = '\0';

  /* special treatment of the main class in the file */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->Name, main_class) == 0)
      {
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      currentNamespace->Classes[i]->IsAbstract = !is_concrete;
      break;
      }
    }

  free(main_class);

  file_info = (FileInfo *)malloc(sizeof(FileInfo));
  memcpy(file_info, &data, sizeof(FileInfo));

  return file_info;
}

/* Read a hints file and update the FileInfo */
int vtkParse_ReadHints(FileInfo *file_info, FILE *hfile, FILE *errfile)
{
  char h_cls[80];
  char h_func[80];
  unsigned int  h_type;
  int  h_value;
  FunctionInfo *func_info;
  ClassInfo *class_info;
  int i, j;

  /* read each hint line in succession */
  while (fscanf(hfile,"%s %s %x %i", h_cls, h_func, &h_type, &h_value) != EOF)
    {
    /* find the matching class */
    for (i = 0; i < file_info->NumberOfClasses; i++)
      {
      class_info = file_info->Classes[i];

      if (strcmp(h_cls, class_info->Name) == 0)
        {
        /* find the matching function */
        for (j = 0; j < class_info->NumberOfFunctions; j++)
          {
          func_info = class_info->Functions[j];

          if (func_info->HaveHint == 0 && func_info->Name &&
              (strcmp(h_func, func_info->Name) == 0) &&
              ((int)h_type == func_info->ReturnType))
            {
            /* types that hints are accepted for */
            switch (func_info->ReturnType & VTK_PARSE_UNQUALIFIED_TYPE)
              {
              case VTK_PARSE_FLOAT_PTR:
              case VTK_PARSE_VOID_PTR:
              case VTK_PARSE_DOUBLE_PTR:
              case VTK_PARSE_ID_TYPE_PTR:
              case VTK_PARSE_LONG_LONG_PTR:
              case VTK_PARSE_UNSIGNED_LONG_LONG_PTR:
              case VTK_PARSE___INT64_PTR:
              case VTK_PARSE_UNSIGNED___INT64_PTR:
              case VTK_PARSE_INT_PTR:
              case VTK_PARSE_UNSIGNED_INT_PTR:
              case VTK_PARSE_SHORT_PTR:
              case VTK_PARSE_UNSIGNED_SHORT_PTR:
              case VTK_PARSE_LONG_PTR:
              case VTK_PARSE_UNSIGNED_LONG_PTR:
              case VTK_PARSE_SIGNED_CHAR_PTR:
              case VTK_PARSE_UNSIGNED_CHAR_PTR:
                {
                func_info->HaveHint = 1;
                func_info->HintSize = h_value;
                break;
                }
              }
            }
          }
        }
      }
    }

  return 1;
}

/* Free the FileInfo struct returned by vtkParse_ParseFile() */
void vtkParse_Free(FileInfo *file_info)
{
  /* big memory leak here, strings aren't freed */
  int i, j, n, m;
  ClassInfo *class_info;
  FunctionInfo *func_info;
  ConstantInfo *const_info;

  n = file_info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_info = file_info->Classes[i];

    m = class_info->NumberOfSuperClasses;
    if (m > 0)
      {
      free(class_info->SuperClasses);
      }

    m = class_info->NumberOfFunctions;
    for (j = 0; j < m; j++)
      {
      func_info = class_info->Functions[j];
      free(func_info);
      }
    if (m > 0)
      {
      free(class_info->Functions);
      }

    m = class_info->NumberOfConstants;
    for (j = 0; j < m; j++)
      {
      const_info = class_info->Constants[j];
      free(const_info);
      }
    if (m > 0)
      {
      free(class_info->Constants);
      }

    if (class_info->NumberOfItems > 0)
      {
      free(class_info->Items);
      }

    free(class_info);
    }

  m = file_info->NumberOfFunctions;
  for (j = 0; j < m; j++)
    {
    func_info = file_info->Functions[j];
    free(func_info);
    }
  if (m > 0)
    {
    free(file_info->Functions);
    }

  m = file_info->NumberOfConstants;
  for (j = 0; j < m; j++)
    {
    const_info = file_info->Constants[j];
    free(const_info);
    }
  if (m > 0)
    {
    free(file_info->Constants);
    }

  m = file_info->NumberOfNamespaces;
  for (i = 0; i < m; i++)
    {
    vtkParse_Free(file_info->Namespaces[i]);
    }

  if (file_info->NumberOfItems > 0)
    {
    free(file_info->Items);
    }

  free(file_info);
}

