
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison GLR parsers in C

      Copyright (C) 2002, 2003, 2004, 2005, 2006 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0




/* Copy the first part of user declarations.  */

/* Line 172 of glr.c  */
#line 15 "vtkParse.y"


/*

This file must be translated to C and modified to build everywhere.

Run yacc like this:

  yacc -b vtkParse vtkParse.y

Modify vtkParse.tab.c:
  - convert TABs to spaces (eight per tab)
  - remove spaces from ends of lines, s/ *$//g
  - replace all instances of "static" with "static".
*/

/*
The purpose of this parser is to read C++ header files in order to
generate data structures that describe the C++ interface of a library,
one header file at a time.  As such, it is not a complete C++ parser.
It only parses what is relevant to the interface and skips the rest.

While the parser reads method definitions, type definitions, and
template definitions it generates a "signature" which is a string
that matches (apart from whitespace) the text that was parsed.

While parsing types, the parser creates an unsigned int that describes
the type as well as creating other data structures for arrays, function
pointers, etc.  The parser also creates a typeId string, which is either
a simple id that gives the class name or type name, or is "function" for
function pointer types, or "method" for method pointer types.
*/

/*
Conformance Notes:

This parser was designed empirically and incrementally.  It has been
refactored to make it more similar to the C++ 1998 grammar, but there
are still many very significant differences.

The most significant difference between this parser and a "standard"
parser is that it only parses declarations in detail.  All other
statements and expressions are parsed as arbitrary sequences of symbols,
without any syntactic analysis.

The "unqualified_id" does not directly include "operator_function_id" or
"conversion_function_id" (e.g. ids like "operator=" or "operator int*").
Instead, these two id types are used to allow operator functions to be
handled by their own rules, rather than by the generic function rules.
These ids can only be used in function declarations and using declarations.

Types are handled quite differently from the C++ BNF.  These differences
represent a prolonged (and ultimately successful) attempt to empirically
create a yacc parser without any shift/reduce conflicts.  The rules for
types are organized according to the way that types are usually defined
in working code, rather than strictly according to C++ grammar.


The declaration specifier "typedef" can only appear at the beginning
of a declaration sequence.  There are also restrictions on where class
and enum specifiers can be used: you can declare a new struct within a
variable declaration, but not within a parameter declaration.

The lexer returns each of "(scope::*", "(*", "(a::b::*", etc. as single
tokens.  The C++ BNF, in contrast, would consider these to be a "("
followed by a "ptr_operator".  The lexer concatenates these tokens in
order to eliminate shift/reduce conflicts in the parser.  However, this
means that this parser will only recognize "scope::*" as valid if it is
preceded by "(", e.g. as part of a member function pointer specification.

An odd bit of C++ ambiguity is that y(x); can be interpreted variously
as declaration of variable "x" of type "y", as a function call if "y"
is the name of a function, or as a constructor if "y" is the name of
a class.  This parser always interprets this pattern as a constructor
declaration, because function calls are ignored by the parser, and
variable declarations of the form y(x); are exceedingly rare compared
to the more usual form y x; without parentheses.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define yyerror(a) print_parser_error(a, NULL, 0)
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

/* Map from the type anonymous_enumeration in vtkType.h to the
   VTK wrapping type system number for the type. */

#include "vtkParse.h"
#include "vtkParsePreprocess.h"
#include "vtkParseData.h"
#include "vtkType.h"

static unsigned int vtkParseTypeMap[] =
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
   the primitive_type production rule code.  */
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

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo      *data = NULL;
int            parseDebug;

/* the "preprocessor" */
PreprocessInfo *preprocessor = NULL;

/* include dirs specified on the command line */
unsigned long  NumberOfIncludeDirectories= 0;
const char   **IncludeDirectories;

/* macros specified on the command line */
unsigned long  NumberOfDefinitions = 0;
const char   **Definitions;

/* options that can be set by the programs that use the parser */
int            IgnoreBTX = 0;
int            Recursive = 0;
const char    *CommandName = NULL;

/* various state variables */
NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateInfo  *currentTemplate = NULL;
const char    *currentEnumName = NULL;
const char    *currentEnumValue = NULL;
unsigned int   currentEnumType = 0;
parse_access_t access_level = VTK_ACCESS_PUBLIC;

/* functions from vtkParse.l */
void print_parser_error(const char *text, const char *cp, size_t n);

/* helper functions */
const char *type_class(unsigned int type, const char *classname);
void start_class(const char *classname, int is_struct_or_union);
void end_class();
void add_base_class(ClassInfo *cls, const char *name, int access_lev,
                    unsigned int extra);
void output_friend_function(void);
void output_function(void);
void reject_function(void);
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count);
void add_parameter(FunctionInfo *func, unsigned int type,
                   const char *classname, unsigned long count);
void add_template_parameter(unsigned int datatype,
                            unsigned int extra, const char *funcSig);
void add_using(const char *name, int is_namespace);
void start_enum(const char *name, int is_scoped,
                unsigned int type, const char *basename);
void add_enum(const char *name, const char *value);
void end_enum();
unsigned int guess_constant_type(const char *value);
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);
void prepend_scope(char *cp, const char *arg);
unsigned int guess_id_type(const char *cp);
unsigned int add_indirection(unsigned int tval, unsigned int ptr);
unsigned int add_indirection_to_array(unsigned int ptr);
void handle_complex_type(ValueInfo *val, unsigned int datatype,
                         unsigned int extra, const char *funcSig);
void handle_function_type(ValueInfo *param, const char *name,
                          const char *funcSig);
void add_legacy_parameter(FunctionInfo *func, ValueInfo *param);

void outputSetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n);
void outputGetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n);


/*----------------------------------------------------------------
 * String utility methods
 *
 * Strings are centrally allocated and are const, and they are not
 * freed until the program exits.  If they need to be freed before
 * then, vtkParse_FreeStringCache() can be called.
 */

/* duplicate the first n bytes of a string and terminate */
static const char *vtkstrndup(const char *in, size_t n)
{
  return vtkParse_CacheString(data->Strings, in, n);
}

/* duplicate a string */
static const char *vtkstrdup(const char *in)
{
  if (in)
    {
    in = vtkParse_CacheString(data->Strings, in, strlen(in));
    }

  return in;
}

/* helper function for concatenating strings */
static const char *vtkstrncat(size_t n, const char **str)
{
  char *cp;
  size_t i;
  size_t j[8];
  size_t m = 0;

  for (i = 0; i < n; i++)
    {
    j[i] = 0;
    if (str[i])
      {
      j[i] = strlen(str[i]);
      m += j[i];
      }
    }
  cp = vtkParse_NewString(data->Strings, m);
  m = 0;
  for (i = 0; i < n; i++)
    {
    if (j[i])
      {
      strncpy(&cp[m], str[i], j[i]);
      m += j[i];
      }
    }
  cp[m] = '\0';

  return cp;
}

/* concatenate strings */
static const char *vtkstrcat(const char *str1, const char *str2)
{
  const char *cp[2];

  cp[0] = str1;
  cp[1] = str2;
  return vtkstrncat(2, cp);
}

static const char *vtkstrcat3(const char *str1, const char *str2,
                              const char *str3)
{
  const char *cp[3];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  return vtkstrncat(3, cp);
}

static const char *vtkstrcat4(const char *str1, const char *str2,
                              const char *str3, const char *str4)
{
  const char *cp[4];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  return vtkstrncat(4, cp);
}

static const char *vtkstrcat5(const char *str1, const char *str2,
                              const char *str3, const char *str4,
                              const char *str5)
{
  const char *cp[5];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  cp[4] = str5;
  return vtkstrncat(5, cp);
}

static const char *vtkstrcat7(const char *str1, const char *str2,
                              const char *str3, const char *str4,
                              const char *str5, const char *str6,
                              const char *str7)
{
  const char *cp[7];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  cp[4] = str5;
  cp[5] = str6;
  cp[6] = str7;
  return vtkstrncat(7, cp);
}

/*----------------------------------------------------------------
 * Comments
 */

/* "private" variables */
char          *commentText = NULL;
size_t         commentLength = 0;
size_t         commentAllocatedLength = 0;
int            commentState = 0;

const char *getComment()
{
  if (commentState != 0)
    {
    return commentText;
    }
  return NULL;
}

void clearComment()
{
  commentLength = 0;
  if (commentText)
    {
    commentText[commentLength] = '\0';
    }
  commentState = 0;
}

void addCommentLine(const char *line, size_t n)
{
  if (commentState <= 0)
    {
    clearComment();
    return;
    }

  if (commentText == NULL)
    {
    commentAllocatedLength = n+80;
    commentText = (char *)malloc(commentAllocatedLength);
    commentLength = 0;
    commentText[0] = '\0';
    }
  else if (commentLength + n + 2 > commentAllocatedLength)
    {
    commentAllocatedLength = commentAllocatedLength + commentLength + n + 2;
    commentText = (char *)realloc(commentText, commentAllocatedLength);
    }

  if (n > 0)
    {
    memcpy(&commentText[commentLength], line, n);
    }
  commentLength += n;
  commentText[commentLength++] = '\n';
  commentText[commentLength] = '\0';
}

void closeComment()
{
  switch (commentState)
    {
    case 1:
      /* Make comment persist until a new comment starts */
      commentState = -1;
      break;
    case 2:
      data->Description = vtkstrdup(getComment());
      clearComment();
      break;
    case 3:
      data->SeeAlso = vtkstrdup(getComment());
      clearComment();
      break;
    case 4:
      data->Caveats = vtkstrdup(getComment());
      clearComment();
      break;
    }
}

void closeOrClearComment()
{
  if (commentState < 0)
    {
    clearComment();
    }
  else
    {
    closeComment();
    }
}

void setCommentState(int state)
{
  switch (state)
    {
    case 0:
      closeComment();
      break;
    default:
      closeComment();
      clearComment();
      break;
    }

  commentState = state;
}


/*----------------------------------------------------------------
 * Macros
 */

/* "private" variables */
const char *macroName = NULL;
int macroUsed = 0;
int macroEnded = 0;

const char *getMacro()
{
  if (macroUsed == 0)
    {
    macroUsed = macroEnded;
    return macroName;
    }
  return NULL;
}


/*----------------------------------------------------------------
 * Namespaces
 *
 * operates on: currentNamespace
 */

/* "private" variables */
NamespaceInfo *namespaceStack[10];
unsigned long namespaceDepth = 0;

/* enter a namespace */
void pushNamespace(const char *name)
{
  unsigned long i;
  NamespaceInfo *oldNamespace = currentNamespace;

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
    currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
    vtkParse_InitNamespace(currentNamespace);
    currentNamespace->Name = name;
    vtkParse_AddNamespaceToNamespace(oldNamespace, currentNamespace);
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
}


/*----------------------------------------------------------------
 * Classes
 *
 * operates on: currentClass, access_level
 */

/* "private" variables */
ClassInfo *classStack[10];
parse_access_t classAccessStack[10];
unsigned long classDepth = 0;

/* start an internal class definition */
void pushClass()
{
  classAccessStack[classDepth] = access_level;
  classStack[classDepth++] = currentClass;
}

/* leave the internal class */
void popClass()
{
  currentClass = classStack[--classDepth];
  access_level = classAccessStack[classDepth];
}


/*----------------------------------------------------------------
 * Templates
 *
 * operates on: currentTemplate
 */

/* "private" variables */
TemplateInfo *templateStack[10];
unsigned long templateDepth = 0;

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateInfo *)malloc(sizeof(TemplateInfo));
  vtkParse_InitTemplate(currentTemplate);
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

/*----------------------------------------------------------------
 * Function signatures
 *
 * operates on: currentFunction
 */

/* "private" variables */
int sigClosed = 0;
size_t sigMark[10];
size_t sigLength = 0;
size_t sigAllocatedLength = 0;
unsigned long sigMarkDepth = 0;
char *signature = NULL;

/* start a new signature */
void startSig()
{
  signature = NULL;
  sigLength = 0;
  sigAllocatedLength = 0;
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;
}

/* get the signature */
const char *getSig()
{
  return signature;
}

/* get the signature length */
size_t getSigLength()
{
  return sigLength;
}

/* reset the sig to the specified length */
void resetSig(size_t n)
{
  if (n < sigLength)
    {
    sigLength = n;
    }
}

/* reallocate Signature if n chars cannot be appended */
void checkSigSize(size_t n)
{
  const char *ccp;

  if (sigAllocatedLength == 0)
    {
    sigLength = 0;
    sigAllocatedLength = 80 + n;
    signature = vtkParse_NewString(data->Strings, sigAllocatedLength);
    signature[0] = '\0';
    }
  else if (sigLength + n > sigAllocatedLength)
    {
    sigAllocatedLength += sigLength + n;
    ccp = signature;
    signature = vtkParse_NewString(data->Strings, sigAllocatedLength);
    strncpy(signature, ccp, sigLength);
    signature[sigLength] = '\0';
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
  if (!sigClosed)
    {
    size_t n = strlen(arg);
    checkSigSize(n);
    if (n > 0)
      {
      memmove(&signature[n], signature, sigLength);
      strncpy(signature, arg, n);
      sigLength += n;
      }
    signature[sigLength] = '\0';
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  if (!sigClosed)
    {
    size_t n = strlen(arg);
    checkSigSize(n);
    if (n > 0)
      {
      strncpy(&signature[sigLength], arg, n);
      sigLength += n;
      }
    signature[sigLength] = '\0';
    }
}

/* set a mark in the signature for later operations */
void markSig()
{
  sigMark[sigMarkDepth] = 0;
  if (signature)
    {
    sigMark[sigMarkDepth] = sigLength;
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
  if (signature)
    {
    cp = &signature[sigMark[sigMarkDepth]];
    }
  return vtkstrdup(cp);
}

/* swap the signature text using the mark as the radix */
void swapSig()
{
  if (sigMarkDepth > 0)
    {
    sigMarkDepth--;
    }
  if (signature && sigMark[sigMarkDepth] > 0)
    {
    size_t i, m, n, nn;
    char c;
    char *cp;
    cp = signature;
    n = sigLength;
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

/* chop the last space from the signature */
void chopSig(void)
{
  if (signature)
    {
    size_t n = sigLength;
    if (n > 0 && signature[n-1] == ' ')
      {
      signature[n-1] = '\0';
      sigLength--;
      }
    }
}

/*----------------------------------------------------------------
 * Subroutines for building a type
 */

/* "private" variables */
unsigned int storedType;
unsigned int typeStack[10];
unsigned long typeDepth = 0;

/* save the type on the stack */
void pushType()
{
  typeStack[typeDepth++] = storedType;
}

/* pop the type stack */
void popType()
{
  storedType = typeStack[--typeDepth];
}

/* clear the storage type */
void clearType()
{
  storedType = 0;
}

/* save the type */
void setTypeBase(unsigned int base)
{
  storedType &= ~(unsigned int)(VTK_PARSE_BASE_TYPE);
  storedType |= base;
}

/* set a type modifier bit */
void setTypeMod(unsigned int mod)
{
  storedType |= mod;
}

/* modify the indirection (pointers, refs) in the storage type */
void setTypePtr(unsigned int ind)
{
  storedType &= ~(unsigned int)(VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE);
  ind &= (VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE);
  storedType |= ind;
}

/* retrieve the storage type */
unsigned int getType()
{
  return storedType;
}

/* combine two primitive type parts, e.g. "long int" */
unsigned int buildTypeBase(unsigned int a, unsigned int b)
{
  unsigned int base = (a & VTK_PARSE_BASE_TYPE);
  unsigned int basemod = (b & VTK_PARSE_BASE_TYPE);

  switch (base)
    {
    case 0:
      base = basemod;
      break;
    case VTK_PARSE_UNSIGNED_INT:
      base = (basemod | VTK_PARSE_UNSIGNED);
      break;
    case VTK_PARSE_INT:
      base = basemod;
      if (base == VTK_PARSE_CHAR)
        {
        base = VTK_PARSE_SIGNED_CHAR;
        }
      break;
    case VTK_PARSE_CHAR:
      if (basemod == VTK_PARSE_INT)
        {
        base = VTK_PARSE_SIGNED_CHAR;
        }
      else if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_CHAR;
        }
      break;
    case VTK_PARSE_SHORT:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_SHORT;
        }
      break;
    case VTK_PARSE_LONG:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_LONG;
        }
      else if (basemod == VTK_PARSE_LONG)
        {
        base = VTK_PARSE_LONG_LONG;
        }
      else if (basemod == VTK_PARSE_DOUBLE)
        {
        base = VTK_PARSE_LONG_DOUBLE;
        }
      break;
    case VTK_PARSE_UNSIGNED_LONG:
      if (basemod == VTK_PARSE_LONG)
        {
        base = VTK_PARSE_UNSIGNED_LONG_LONG;
        }
      break;
    case VTK_PARSE_LONG_LONG:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_LONG_LONG;
        }
      break;
    case VTK_PARSE___INT64:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED___INT64;
        }
      break;
    case VTK_PARSE_DOUBLE:
      if (basemod == VTK_PARSE_LONG)
        {
        base = VTK_PARSE_LONG_DOUBLE;
        }
      break;
    }

  return ((a & ~(unsigned int)(VTK_PARSE_BASE_TYPE)) | base);
}


/*----------------------------------------------------------------
 * Array information
 */

/* "private" variables */
unsigned long numberOfDimensions = 0;
const char **arrayDimensions = NULL;

/* clear the array counter */
void clearArray(void)
{
  numberOfDimensions = 0;
  arrayDimensions = NULL;
}

/* add another dimension */
void pushArraySize(const char *size)
{
  vtkParse_AddStringToArray(&arrayDimensions, &numberOfDimensions,
                            size);
}

/* add another dimension to the front */
void pushArrayFront(const char *size)
{
  unsigned long i;

  vtkParse_AddStringToArray(&arrayDimensions, &numberOfDimensions, 0);

  for (i = numberOfDimensions-1; i > 0; i--)
    {
    arrayDimensions[i] = arrayDimensions[i-1];
    }

  arrayDimensions[0] = size;
}

/* get the number of dimensions */
unsigned long getArrayNDims()
{
  return numberOfDimensions;
}

/* get the whole array */
const char **getArray()
{
  if (numberOfDimensions > 0)
    {
    return arrayDimensions;
    }
  return NULL;
}

/*----------------------------------------------------------------
 * Variables and Parameters
 */

/* "private" variables */
const char *currentVarName = 0;
const char *currentVarValue = 0;
const char *currentId = 0;

/* clear the var Id */
void clearVarName(void)
{
  currentVarName = NULL;
}

/* set the var Id */
void setVarName(const char *text)
{
  currentVarName = text;
}

/* return the var id */
const char *getVarName()
{
  return currentVarName;
}

/* variable value -------------- */

/* clear the var value */
void clearVarValue(void)
{
  currentVarValue = NULL;
}

/* set the var value */
void setVarValue(const char *text)
{
  currentVarValue = text;
}

/* return the var value */
const char *getVarValue()
{
  return currentVarValue;
}

/* variable type -------------- */

/* clear the current Id */
void clearTypeId(void)
{
  currentId = NULL;
}

/* set the current Id, it is sticky until cleared */
void setTypeId(const char *text)
{
  if (currentId == NULL)
    {
    currentId = text;
    }
}

/* set the signature and type together */
void typeSig(const char *text)
{
  postSig(text);
  postSig(" ");

  if (currentId == 0)
    {
    setTypeId(text);
    }
}

/* return the current Id */
const char *getTypeId()
{
  return currentId;
}

/*----------------------------------------------------------------
 * Specifically for function pointers, the scope (i.e. class) that
 * the function is a method of.
 */

const char *pointerScopeStack[10];
unsigned long pointerScopeDepth = 0;

/* save the scope for scoped method pointers */
void scopeSig(const char *scope)
{
  if (scope && scope[0] != '\0')
    {
    postSig(scope);
    }
  else
    {
    scope = NULL;
    }
  pointerScopeStack[pointerScopeDepth++] = vtkstrdup(scope);
}

/* get the scope back */
const char *getScope()
{
  return pointerScopeStack[--pointerScopeDepth];
}

/*----------------------------------------------------------------
 * Function stack
 *
 * operates on: currentFunction
 */

/* "private" variables */
FunctionInfo *functionStack[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
const char *functionVarNameStack[10];
const char *functionTypeIdStack[10];
unsigned long functionDepth = 0;

void pushFunction()
{
  functionStack[functionDepth] = currentFunction;
  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(currentFunction);
  if (!functionStack[functionDepth])
    {
    startSig();
    }
  functionVarNameStack[functionDepth] = getVarName();
  functionTypeIdStack[functionDepth] = getTypeId();
  pushType();
  clearType();
  clearVarName();
  clearTypeId();
  functionDepth++;
  functionStack[functionDepth] = 0;
}

void popFunction()
{
  FunctionInfo *newFunction = currentFunction;

  --functionDepth;
  currentFunction = functionStack[functionDepth];
  clearVarName();
  if (functionVarNameStack[functionDepth])
    {
    setVarName(functionVarNameStack[functionDepth]);
    }
  clearTypeId();
  if (functionTypeIdStack[functionDepth])
    {
    setTypeId(functionTypeIdStack[functionDepth]);
    }
  popType();

  functionStack[functionDepth+1] = newFunction;
}

FunctionInfo *getFunction()
{
  return functionStack[functionDepth+1];
}

/*----------------------------------------------------------------
 * Utility methods
 */

/* prepend a scope:: to a name */
void prepend_scope(char *cp, const char *arg)
{
  size_t i, j, m, n;
  unsigned long depth;

  m = strlen(cp);
  n = strlen(arg);
  i = m;
  while (i > 0 &&
         (vtkParse_CharType(cp[i-1], CPRE_IDGIT) ||
          cp[i-1] == ':' || cp[i-1] == '>'))
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

  for (j = m; j > i; j--)
    {
    cp[j+n+1] = cp[j-1];
    }
  for (j = 0; j < n; j++)
    {
    cp[j+i] = arg[j];
    }
  cp[n+i] = ':'; cp[n+i+1] = ':';
  cp[m+n+2] = '\0';
}

/* expand a type by including pointers from another */
unsigned int add_indirection(unsigned int type1, unsigned int type2)
{
  unsigned int ptr1 = (type1 & VTK_PARSE_POINTER_MASK);
  unsigned int ptr2 = (type2 & VTK_PARSE_POINTER_MASK);
  unsigned int reverse = 0;
  unsigned int result;

  /* one of type1 or type2 will only have VTK_PARSE_INDIRECT, but
   * we don't know which one. */
  result = ((type1 & ~VTK_PARSE_POINTER_MASK) |
            (type2 & ~VTK_PARSE_POINTER_MASK));

  /* if there are two ampersands, it is an rvalue reference */
  if ((type1 & type2 & VTK_PARSE_REF) != 0)
    {
    result |= VTK_PARSE_RVALUE;
    }

  while (ptr2)
    {
    reverse = ((reverse << 2) | (ptr2 & VTK_PARSE_POINTER_LOWMASK));
    ptr2 = ((ptr2 >> 2) & VTK_PARSE_POINTER_MASK);
    }

  while (reverse)
    {
    ptr1 = ((ptr1 << 2) | (reverse & VTK_PARSE_POINTER_LOWMASK));
    reverse = ((reverse >> 2) & VTK_PARSE_POINTER_MASK);

    /* make sure we don't exceed the VTK_PARSE_POINTER bitfield */
    if ((ptr1 & VTK_PARSE_POINTER_MASK) != ptr1)
      {
      ptr1 = VTK_PARSE_BAD_INDIRECT;
      break;
      }
    }

  return (ptr1 | result);
}

/* There is only one array, so add any parenthetical indirection to it */
unsigned int add_indirection_to_array(unsigned int type)
{
  unsigned int ptrs = (type & VTK_PARSE_POINTER_MASK);
  unsigned int result = (type & ~VTK_PARSE_POINTER_MASK);
  unsigned int reverse = 0;

  if ((type & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
    {
    return (result | VTK_PARSE_BAD_INDIRECT);
    }

  while (ptrs)
    {
    reverse = ((reverse << 2) | (ptrs & VTK_PARSE_POINTER_LOWMASK));
    ptrs = ((ptrs >> 2) & VTK_PARSE_POINTER_MASK);
    }

  /* I know the reversal makes no difference, but it is still
   * nice to add the pointers in the correct order, just in
   * case const pointers are thrown into the mix. */
  while (reverse)
    {
    pushArrayFront("");
    reverse = ((reverse >> 2) & VTK_PARSE_POINTER_MASK);
    }

  return result;
}



/* Line 172 of glr.c  */
#line 1323 "vtkParse.tab.c"




/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     VTK_ID = 259,
     QT_ID = 260,
     StdString = 261,
     UnicodeString = 262,
     OSTREAM = 263,
     ISTREAM = 264,
     LP = 265,
     LA = 266,
     STRING_LITERAL = 267,
     INT_LITERAL = 268,
     HEX_LITERAL = 269,
     BIN_LITERAL = 270,
     OCT_LITERAL = 271,
     FLOAT_LITERAL = 272,
     CHAR_LITERAL = 273,
     ZERO = 274,
     NULLPTR = 275,
     SSIZE_T = 276,
     SIZE_T = 277,
     NULLPTR_T = 278,
     BEGIN_ATTRIB = 279,
     STRUCT = 280,
     CLASS = 281,
     UNION = 282,
     ENUM = 283,
     PUBLIC = 284,
     PRIVATE = 285,
     PROTECTED = 286,
     CONST = 287,
     VOLATILE = 288,
     MUTABLE = 289,
     STATIC = 290,
     THREAD_LOCAL = 291,
     VIRTUAL = 292,
     EXPLICIT = 293,
     INLINE = 294,
     CONSTEXPR = 295,
     FRIEND = 296,
     EXTERN = 297,
     OPERATOR = 298,
     TEMPLATE = 299,
     THROW = 300,
     TRY = 301,
     CATCH = 302,
     NOEXCEPT = 303,
     DECLTYPE = 304,
     TYPENAME = 305,
     TYPEDEF = 306,
     NAMESPACE = 307,
     USING = 308,
     NEW = 309,
     DELETE = 310,
     DEFAULT = 311,
     STATIC_CAST = 312,
     DYNAMIC_CAST = 313,
     CONST_CAST = 314,
     REINTERPRET_CAST = 315,
     OP_LSHIFT_EQ = 316,
     OP_RSHIFT_EQ = 317,
     OP_LSHIFT = 318,
     OP_RSHIFT_A = 319,
     OP_DOT_POINTER = 320,
     OP_ARROW_POINTER = 321,
     OP_ARROW = 322,
     OP_INCR = 323,
     OP_DECR = 324,
     OP_PLUS_EQ = 325,
     OP_MINUS_EQ = 326,
     OP_TIMES_EQ = 327,
     OP_DIVIDE_EQ = 328,
     OP_REMAINDER_EQ = 329,
     OP_AND_EQ = 330,
     OP_OR_EQ = 331,
     OP_XOR_EQ = 332,
     OP_LOGIC_AND = 333,
     OP_LOGIC_OR = 334,
     OP_LOGIC_EQ = 335,
     OP_LOGIC_NEQ = 336,
     OP_LOGIC_LEQ = 337,
     OP_LOGIC_GEQ = 338,
     ELLIPSIS = 339,
     DOUBLE_COLON = 340,
     OTHER = 341,
     AUTO = 342,
     VOID = 343,
     BOOL = 344,
     FLOAT = 345,
     DOUBLE = 346,
     INT = 347,
     SHORT = 348,
     LONG = 349,
     INT64__ = 350,
     CHAR = 351,
     CHAR16_T = 352,
     CHAR32_T = 353,
     WCHAR_T = 354,
     SIGNED = 355,
     UNSIGNED = 356,
     IdType = 357,
     FloatType = 358,
     TypeInt8 = 359,
     TypeUInt8 = 360,
     TypeInt16 = 361,
     TypeUInt16 = 362,
     TypeInt32 = 363,
     TypeUInt32 = 364,
     TypeInt64 = 365,
     TypeUInt64 = 366,
     TypeFloat32 = 367,
     TypeFloat64 = 368,
     SetMacro = 369,
     GetMacro = 370,
     SetStringMacro = 371,
     GetStringMacro = 372,
     SetClampMacro = 373,
     SetObjectMacro = 374,
     GetObjectMacro = 375,
     BooleanMacro = 376,
     SetVector2Macro = 377,
     SetVector3Macro = 378,
     SetVector4Macro = 379,
     SetVector6Macro = 380,
     GetVector2Macro = 381,
     GetVector3Macro = 382,
     GetVector4Macro = 383,
     GetVector6Macro = 384,
     SetVectorMacro = 385,
     GetVectorMacro = 386,
     ViewportCoordinateMacro = 387,
     WorldCoordinateMacro = 388,
     TypeMacro = 389,
     VTK_BYTE_SWAP_DECL = 390
   };
#endif


#ifndef YYSTYPE
typedef union YYSTYPE
{

/* Line 215 of glr.c  */
#line 1294 "vtkParse.y"

  const char   *str;
  unsigned int  integer;



/* Line 215 of glr.c  */
#line 1484 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{

  char yydummy;

} YYLTYPE;
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template,
   here we set the default value of $$ to a zeroed-out value.
   Since the default value is undefined, this behavior is
   technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */


/* Line 243 of glr.c  */
#line 1531 "vtkParse.tab.c"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(env) setjmp (env)
# define YYLONGJMP(env, val) longjmp (env, val)
#endif

/*-----------------.
| GCC extensions.  |
`-----------------*/

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5) || __STRICT_ANSI__)
#  define __attribute__(Spec) /* empty */
# endif
#endif


#ifdef __cplusplus
# define YYOPTIONAL_LOC(Name) /* empty */
#else
# define YYOPTIONAL_LOC(Name) Name __attribute__ ((__unused__))
#endif

#ifndef YYASSERT
# define YYASSERT(condition) ((void) ((condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   9122

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  276
/* YYNRULES -- Number of rules.  */
#define YYNRULES  705
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1187
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   155,     2,     2,     2,   151,   148,     2,
     142,   143,   149,   154,   141,   153,   158,   152,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   140,   136,
     144,   139,   150,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   145,     2,   146,   157,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   137,   156,   138,   147,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     6,     7,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    36,    38,
      40,    42,    44,    47,    49,    52,    55,    58,    61,    64,
      70,    75,    81,    86,    87,    94,   100,   102,   105,   110,
     114,   120,   125,   131,   132,   138,   139,   147,   152,   153,
     159,   162,   164,   166,   168,   172,   177,   180,   182,   184,
     185,   187,   188,   189,   194,   198,   200,   202,   204,   206,
     208,   210,   212,   214,   216,   218,   220,   222,   224,   226,
     228,   230,   233,   236,   238,   241,   244,   247,   250,   253,
     257,   260,   264,   266,   271,   274,   279,   284,   285,   287,
     288,   290,   292,   294,   296,   302,   306,   313,   318,   324,
     325,   331,   336,   340,   342,   345,   348,   349,   350,   354,
     356,   360,   361,   363,   364,   369,   376,   379,   381,   387,
     394,   398,   403,   409,   413,   415,   418,   424,   430,   437,
     443,   450,   453,   454,   458,   461,   463,   465,   466,   467,
     476,   478,   482,   484,   487,   490,   493,   497,   501,   506,
     507,   516,   520,   521,   527,   529,   530,   535,   536,   537,
     543,   544,   545,   551,   552,   553,   554,   562,   563,   565,
     567,   569,   570,   572,   573,   577,   579,   582,   585,   588,
     591,   594,   598,   603,   606,   610,   613,   617,   622,   625,
     630,   636,   640,   642,   644,   647,   649,   652,   656,   657,
     658,   668,   671,   672,   677,   678,   686,   689,   691,   695,
     696,   699,   700,   704,   706,   709,   711,   714,   716,   718,
     720,   723,   726,   727,   729,   730,   734,   738,   740,   742,
     749,   750,   757,   758,   766,   767,   768,   775,   776,   783,
     784,   787,   789,   793,   797,   798,   799,   802,   804,   805,
     810,   814,   816,   817,   818,   824,   825,   827,   828,   832,
     833,   836,   841,   844,   845,   848,   849,   850,   855,   858,
     859,   861,   865,   866,   873,   874,   876,   880,   881,   887,
     888,   892,   894,   895,   896,   897,   905,   907,   908,   911,
     914,   918,   922,   925,   927,   930,   932,   935,   938,   943,
     945,   947,   949,   951,   952,   954,   955,   958,   960,   963,
     964,   970,   971,   972,   975,   977,   979,   981,   983,   985,
     988,   991,   994,   997,  1000,  1003,  1006,  1009,  1013,  1017,
    1021,  1022,  1028,  1030,  1032,  1034,  1035,  1041,  1042,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,
    1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1104,  1105,
    1109,  1111,  1113,  1115,  1117,  1120,  1124,  1126,  1128,  1130,
    1132,  1134,  1136,  1139,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1155,  1158,  1161,  1162,  1166,  1167,  1172,  1174,  1178,
    1183,  1185,  1187,  1188,  1193,  1196,  1199,  1202,  1203,  1207,
    1208,  1213,  1216,  1217,  1221,  1222,  1227,  1229,  1231,  1233,
    1235,  1238,  1241,  1244,  1247,  1250,  1252,  1254,  1256,  1258,
    1260,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,
    1280,  1282,  1284,  1286,  1288,  1290,  1292,  1294,  1296,  1298,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1322,  1324,  1326,  1328,  1330,  1333,  1336,  1339,  1340,
    1345,  1346,  1348,  1350,  1353,  1354,  1357,  1358,  1359,  1366,
    1367,  1375,  1376,  1377,  1378,  1388,  1389,  1395,  1396,  1402,
    1403,  1404,  1415,  1416,  1424,  1425,  1426,  1427,  1437,  1444,
    1445,  1453,  1454,  1462,  1463,  1471,  1472,  1480,  1481,  1489,
    1490,  1498,  1499,  1507,  1508,  1516,  1517,  1527,  1528,  1538,
    1543,  1548,  1556,  1557,  1559,  1562,  1565,  1569,  1573,  1575,
    1577,  1579,  1581,  1584,  1587,  1590,  1592,  1594,  1596,  1598,
    1600,  1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,
    1620,  1622,  1624,  1626,  1628,  1630,  1632,  1634,  1636,  1638,
    1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,  1658,
    1660,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,  1678,
    1680,  1682,  1684,  1686,  1688,  1690,  1692,  1694,  1696,  1698,
    1700,  1702,  1704,  1706,  1708,  1710,  1712,  1714,  1716,  1718,
    1720,  1722,  1724,  1726,  1728,  1730,  1732,  1734,  1736,  1738,
    1741,  1743,  1745,  1747,  1748,  1752,  1754,  1756,  1758,  1760,
    1762,  1764,  1766,  1768,  1770,  1772,  1774,  1776,  1778,  1779,
    1782,  1784,  1786,  1788,  1790,  1792,  1794,  1796,  1798,  1800,
    1801,  1804,  1805,  1808,  1810,  1812,  1814,  1816,  1818,  1819,
    1824,  1826,  1828,  1829,  1834,  1835,  1841,  1842,  1847,  1848,
    1853,  1854,  1859,  1860,  1865,  1866,  1869,  1870,  1873,  1875,
    1877,  1879,  1881,  1883,  1885,  1887,  1889,  1891,  1893,  1895,
    1897,  1899,  1901,  1903,  1905,  1907,  1909,  1911,  1913,  1915,
    1919,  1923,  1928,  1932,  1934,  1936
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     160,     0,    -1,   161,    -1,    -1,    -1,   161,   162,   369,
     163,    -1,   220,    -1,   218,    -1,   221,    -1,   170,    -1,
     193,    -1,   167,    -1,   169,    -1,   166,    -1,   208,    -1,
     291,    -1,   194,    -1,   172,    -1,   241,    -1,   164,    -1,
     165,    -1,   373,    -1,   321,   136,    -1,   136,    -1,   223,
     172,    -1,   223,   241,    -1,   223,   204,    -1,   223,   164,
      -1,   223,   221,    -1,    42,    44,   430,   427,   136,    -1,
      44,   430,   427,   136,    -1,    42,    12,   137,   161,   138,
      -1,    52,   137,   426,   138,    -1,    -1,    52,   334,   168,
     137,   161,   138,    -1,    52,   334,   139,   323,   136,    -1,
     171,    -1,   223,   171,    -1,   178,   369,   179,   136,    -1,
     178,   369,   136,    -1,   337,   178,   369,   179,   136,    -1,
     173,   335,   293,   136,    -1,   337,   173,   335,   293,   136,
      -1,    -1,   175,   174,   137,   182,   138,    -1,    -1,   178,
     369,   179,   181,   140,   176,   188,    -1,   178,   369,   179,
     181,    -1,    -1,   178,   369,   140,   177,   188,    -1,   178,
     369,    -1,    26,    -1,    25,    -1,    27,    -1,   324,   180,
     369,    -1,   328,   324,   180,   369,    -1,   180,   369,    -1,
     333,    -1,   329,    -1,    -1,     3,    -1,    -1,    -1,   182,
     183,   369,   185,    -1,   182,   184,   140,    -1,    29,    -1,
      30,    -1,    31,    -1,   218,    -1,   221,    -1,   170,    -1,
     193,    -1,   187,    -1,   208,    -1,   291,    -1,   194,    -1,
     172,    -1,   245,    -1,   186,    -1,   165,    -1,   373,    -1,
     135,   433,    -1,   321,   136,    -1,   136,    -1,   223,   172,
      -1,   223,   245,    -1,   223,   186,    -1,   223,   221,    -1,
      41,   206,    -1,    41,   223,   206,    -1,    41,   170,    -1,
      41,   246,   267,    -1,   189,    -1,   188,   141,   369,   189,
      -1,   321,   235,    -1,    37,   191,   321,   235,    -1,   192,
     190,   321,   235,    -1,    -1,    37,    -1,    -1,   192,    -1,
      29,    -1,    30,    -1,    31,    -1,   198,   369,   321,   199,
     136,    -1,   198,   369,   136,    -1,   337,   198,   369,   321,
     199,   136,    -1,   195,   335,   293,   136,    -1,   337,   195,
     335,   293,   136,    -1,    -1,   197,   137,   196,   201,   138,
      -1,   198,   369,   321,   199,    -1,   198,   369,   199,    -1,
      28,    -1,    28,    26,    -1,    28,    25,    -1,    -1,    -1,
     140,   200,   344,    -1,   202,    -1,   201,   141,   202,    -1,
      -1,   333,    -1,    -1,   333,   139,   203,   401,    -1,   343,
     235,   324,   333,   205,   136,    -1,   139,   427,    -1,   431,
      -1,   178,   369,   179,   181,   207,    -1,   337,   178,   369,
     179,   181,   207,    -1,   178,   369,   207,    -1,   337,   178,
     369,   207,    -1,   137,   426,   138,   427,   136,    -1,   140,
     427,   136,    -1,   209,    -1,   337,   209,    -1,    51,   343,
     217,   211,   136,    -1,    51,   173,   335,   210,   136,    -1,
      51,   337,   173,   335,   210,   136,    -1,    51,   195,   335,
     210,   136,    -1,    51,   337,   195,   335,   210,   136,    -1,
     212,   211,    -1,    -1,   211,   141,   212,    -1,   297,   217,
      -1,   301,    -1,   214,    -1,    -1,    -1,   235,   311,   142,
     215,   280,   143,   216,   308,    -1,   213,    -1,    53,   219,
     136,    -1,   321,    -1,    50,   321,    -1,   324,   256,    -1,
     324,   251,    -1,   328,   324,   256,    -1,   328,   324,   251,
      -1,    53,    52,   321,   136,    -1,    -1,    53,   321,   369,
     139,   222,   343,   298,   136,    -1,    44,   144,   416,    -1,
      -1,    44,   144,   224,   225,   416,    -1,   227,    -1,    -1,
     225,   141,   226,   227,    -1,    -1,    -1,   228,   354,   298,
     229,   237,    -1,    -1,    -1,   230,   236,   298,   231,   237,
      -1,    -1,    -1,    -1,   232,   223,    26,   233,   298,   234,
     237,    -1,    -1,    84,    -1,    26,    -1,    50,    -1,    -1,
     238,    -1,    -1,   139,   239,   240,    -1,   412,    -1,   240,
     412,    -1,   242,   267,    -1,   247,   267,    -1,   243,   267,
      -1,   244,   267,    -1,   343,   235,   258,    -1,   343,   235,
     324,   258,    -1,   324,   272,    -1,   337,   324,   272,    -1,
     324,   248,    -1,   337,   324,   248,    -1,   343,   235,   324,
     252,    -1,   246,   267,    -1,   324,   256,   369,   136,    -1,
     337,   324,   256,   369,   136,    -1,   343,   235,   258,    -1,
     247,    -1,   272,    -1,   337,   272,    -1,   248,    -1,   337,
     248,    -1,   343,   235,   252,    -1,    -1,    -1,   251,   142,
     249,   280,   143,   369,   250,   259,   264,    -1,   257,   343,
      -1,    -1,   254,   253,   259,   264,    -1,    -1,   256,   369,
     142,   255,   280,   143,   369,    -1,   257,   397,    -1,    43,
      -1,   270,   259,   264,    -1,    -1,   259,   260,    -1,    -1,
      45,   261,   420,    -1,    32,    -1,   139,    19,    -1,     3,
      -1,   262,   420,    -1,   262,    -1,   263,    -1,    48,    -1,
     139,    55,    -1,   139,    56,    -1,    -1,   265,    -1,    -1,
      67,   266,   350,    -1,   137,   426,   138,    -1,   268,    -1,
     136,    -1,    46,   277,   137,   426,   138,   269,    -1,    -1,
     269,    47,   433,   137,   426,   138,    -1,    -1,   322,   369,
     142,   271,   280,   143,   369,    -1,    -1,    -1,   275,   273,
     277,   274,   259,   264,    -1,    -1,   322,   142,   276,   280,
     143,   369,    -1,    -1,   140,   278,    -1,   279,    -1,   278,
     141,   279,    -1,   321,   433,   235,    -1,    -1,    -1,   281,
     282,    -1,   284,    -1,    -1,   282,   141,   283,   284,    -1,
     282,   141,    84,    -1,    84,    -1,    -1,    -1,   285,   343,
     298,   286,   287,    -1,    -1,   288,    -1,    -1,   139,   289,
     401,    -1,    -1,   290,   424,    -1,   343,   292,   294,   136,
      -1,   301,   287,    -1,    -1,   296,   294,    -1,    -1,    -1,
     294,   141,   295,   296,    -1,   297,   292,    -1,    -1,   362,
      -1,   235,   300,   305,    -1,    -1,   303,   369,   309,   143,
     299,   305,    -1,    -1,   311,    -1,   235,   311,   313,    -1,
      -1,   303,   310,   143,   302,   305,    -1,    -1,    10,   304,
     367,    -1,    11,    -1,    -1,    -1,    -1,   142,   306,   280,
     143,   369,   307,   308,    -1,   314,    -1,    -1,   308,    34,
      -1,   308,    32,    -1,   308,    45,   433,    -1,   308,    48,
     433,    -1,   308,    48,    -1,   298,    -1,   362,   298,    -1,
     301,    -1,   362,   301,    -1,   322,   369,    -1,   322,   369,
     140,   312,    -1,    16,    -1,    13,    -1,    14,    -1,    15,
      -1,    -1,   314,    -1,    -1,   315,   316,    -1,   317,    -1,
     316,   317,    -1,    -1,   145,   318,   319,   146,   369,    -1,
      -1,    -1,   320,   401,    -1,   322,    -1,   323,    -1,   333,
      -1,   329,    -1,   331,    -1,   326,   180,    -1,   326,   331,
      -1,   324,   322,    -1,   328,   322,    -1,   328,   323,    -1,
     327,   328,    -1,   329,   328,    -1,   331,   328,    -1,   324,
     327,   328,    -1,   324,   329,   328,    -1,   324,   331,   328,
      -1,    -1,   324,    44,   325,   329,   328,    -1,   147,    -1,
     334,    -1,    85,    -1,    -1,   334,   144,   330,   410,   416,
      -1,    -1,    49,   332,   420,    -1,     4,    -1,     5,    -1,
       3,    -1,     9,    -1,     8,    -1,     6,    -1,     7,    -1,
      23,    -1,    22,    -1,    21,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   112,    -1,   113,    -1,   102,    -1,   103,    -1,
       3,    -1,     5,    -1,     4,    -1,     9,    -1,     8,    -1,
       6,    -1,     7,    -1,    -1,   335,   336,   369,    -1,   338,
      -1,   361,    -1,    51,    -1,    41,    -1,   338,   369,    -1,
     337,   338,   369,    -1,   339,    -1,   340,    -1,   341,    -1,
      40,    -1,    34,    -1,    42,    -1,    42,    12,    -1,    35,
      -1,    36,    -1,    39,    -1,    37,    -1,    38,    -1,    32,
      -1,    33,    -1,   341,    -1,   342,   341,    -1,   344,   297,
      -1,    -1,   347,   345,   335,    -1,    -1,   337,   347,   346,
     335,    -1,   348,    -1,   178,   369,   179,    -1,   198,   369,
     321,   369,    -1,   359,    -1,   331,    -1,    -1,    50,   349,
     321,   369,    -1,   329,   369,    -1,   323,   369,    -1,   351,
     297,    -1,    -1,   348,   352,   335,    -1,    -1,   337,   348,
     353,   335,    -1,   355,   297,    -1,    -1,   358,   356,   335,
      -1,    -1,   337,   347,   357,   335,    -1,   359,    -1,   331,
      -1,   329,    -1,   323,    -1,    25,   321,    -1,    27,   321,
      -1,   198,   321,    -1,   361,   369,    -1,   360,   369,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,     3,    -1,
       4,    -1,     5,    -1,    23,    -1,    21,    -1,    22,    -1,
     104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,
     109,    -1,   110,    -1,   111,    -1,   112,    -1,   113,    -1,
     102,    -1,   103,    -1,    87,    -1,    88,    -1,    89,    -1,
      90,    -1,    91,    -1,    96,    -1,    97,    -1,    98,    -1,
      99,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
     100,    -1,   101,    -1,   363,    -1,   364,    -1,   368,    -1,
     368,   363,    -1,   148,   369,    -1,    78,   369,    -1,    -1,
     149,   369,   366,   367,    -1,    -1,   342,    -1,   365,    -1,
     368,   365,    -1,    -1,   369,   370,    -1,    -1,    -1,    24,
     371,   406,   372,   146,   146,    -1,    -1,   114,   142,   333,
     141,   374,   343,   143,    -1,    -1,    -1,    -1,   115,   142,
     375,   333,   141,   376,   343,   377,   143,    -1,    -1,   116,
     142,   378,   333,   143,    -1,    -1,   117,   142,   379,   333,
     143,    -1,    -1,    -1,   118,   142,   333,   141,   380,   343,
     381,   141,   427,   143,    -1,    -1,   119,   142,   333,   141,
     382,   343,   143,    -1,    -1,    -1,    -1,   120,   142,   383,
     333,   141,   384,   343,   385,   143,    -1,   121,   142,   333,
     141,   343,   143,    -1,    -1,   122,   142,   333,   141,   386,
     343,   143,    -1,    -1,   126,   142,   333,   141,   387,   343,
     143,    -1,    -1,   123,   142,   333,   141,   388,   343,   143,
      -1,    -1,   127,   142,   333,   141,   389,   343,   143,    -1,
      -1,   124,   142,   333,   141,   390,   343,   143,    -1,    -1,
     128,   142,   333,   141,   391,   343,   143,    -1,    -1,   125,
     142,   333,   141,   392,   343,   143,    -1,    -1,   129,   142,
     333,   141,   393,   343,   143,    -1,    -1,   130,   142,   333,
     141,   394,   343,   141,    13,   143,    -1,    -1,   131,   142,
     333,   141,   395,   343,   141,    13,   143,    -1,   132,   142,
     333,   143,    -1,   133,   142,   333,   143,    -1,   134,   142,
     333,   141,   321,   396,   143,    -1,    -1,   141,    -1,   142,
     143,    -1,   145,   146,    -1,    54,   145,   146,    -1,    55,
     145,   146,    -1,   144,    -1,   150,    -1,   141,    -1,   139,
      -1,    64,   150,    -1,    64,    64,    -1,    12,     3,    -1,
     398,    -1,   151,    -1,   149,    -1,   152,    -1,   153,    -1,
     154,    -1,   155,    -1,   147,    -1,   148,    -1,   156,    -1,
     157,    -1,    54,    -1,    55,    -1,    61,    -1,    62,    -1,
      63,    -1,    65,    -1,    66,    -1,    67,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    68,    -1,
      69,    -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,
      51,    -1,    50,    -1,    26,    -1,    25,    -1,    27,    -1,
      44,    -1,    29,    -1,    31,    -1,    30,    -1,    32,    -1,
      35,    -1,    36,    -1,    40,    -1,    39,    -1,    37,    -1,
      38,    -1,    49,    -1,    56,    -1,    42,    -1,    53,    -1,
      52,    -1,    43,    -1,    28,    -1,    45,    -1,    48,    -1,
      59,    -1,    58,    -1,    57,    -1,    60,    -1,    16,    -1,
      13,    -1,    14,    -1,    15,    -1,    17,    -1,    18,    -1,
      12,    -1,    19,    -1,    20,    -1,   402,    -1,   401,   402,
      -1,   404,    -1,   414,    -1,   144,    -1,    -1,   150,   403,
     405,    -1,    64,    -1,   405,    -1,    85,    -1,   417,    -1,
     420,    -1,   424,    -1,   398,    -1,   140,    -1,   158,    -1,
     399,    -1,   400,    -1,   361,    -1,   360,    -1,    -1,   406,
     408,    -1,   404,    -1,   144,    -1,   150,    -1,    64,    -1,
     407,    -1,   139,    -1,   141,    -1,   408,    -1,   136,    -1,
      -1,   410,   413,    -1,    -1,   411,   409,    -1,   414,    -1,
     404,    -1,   412,    -1,   139,    -1,   141,    -1,    -1,   144,
     415,   410,   416,    -1,   150,    -1,    64,    -1,    -1,   145,
     418,   406,   146,    -1,    -1,    24,   419,   406,   146,   146,
      -1,    -1,   142,   421,   406,   143,    -1,    -1,    10,   422,
     406,   143,    -1,    -1,    11,   423,   406,   143,    -1,    -1,
     137,   425,   411,   138,    -1,    -1,   426,   428,    -1,    -1,
     427,   429,    -1,   429,    -1,   136,    -1,   430,    -1,   144,
      -1,   431,    -1,   433,    -1,   432,    -1,    85,    -1,    84,
      -1,   398,    -1,    64,    -1,   140,    -1,   158,    -1,   150,
      -1,   139,    -1,   141,    -1,   399,    -1,   400,    -1,   361,
      -1,   360,    -1,    86,    -1,   137,   426,   138,    -1,   145,
     426,   146,    -1,    24,   426,   146,   146,    -1,   434,   426,
     143,    -1,   142,    -1,    10,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1470,  1470,  1472,  1474,  1473,  1484,  1485,  1486,  1487,
    1488,  1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1504,  1505,  1506,  1507,  1508,  1511,
    1512,  1519,  1526,  1527,  1527,  1531,  1538,  1539,  1542,  1543,
    1544,  1547,  1548,  1551,  1551,  1566,  1565,  1571,  1577,  1576,
    1581,  1587,  1588,  1589,  1592,  1594,  1596,  1599,  1600,  1603,
    1604,  1606,  1608,  1607,  1616,  1620,  1621,  1622,  1625,  1626,
    1627,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,
    1637,  1638,  1639,  1640,  1643,  1644,  1645,  1646,  1649,  1650,
    1651,  1652,  1655,  1656,  1659,  1661,  1664,  1669,  1670,  1673,
    1674,  1677,  1678,  1679,  1690,  1691,  1692,  1696,  1697,  1701,
    1701,  1714,  1720,  1728,  1729,  1730,  1733,  1734,  1734,  1738,
    1739,  1741,  1742,  1743,  1743,  1751,  1755,  1756,  1759,  1761,
    1763,  1764,  1767,  1768,  1776,  1777,  1780,  1781,  1783,  1785,
    1787,  1791,  1793,  1794,  1797,  1800,  1801,  1804,  1805,  1804,
    1809,  1843,  1846,  1847,  1848,  1850,  1852,  1854,  1858,  1861,
    1861,  1892,  1895,  1894,  1912,  1914,  1913,  1918,  1920,  1918,
    1922,  1924,  1922,  1926,  1927,  1929,  1926,  1940,  1941,  1944,
    1945,  1947,  1948,  1951,  1951,  1961,  1962,  1970,  1971,  1972,
    1973,  1976,  1979,  1980,  1981,  1984,  1985,  1986,  1989,  1990,
    1991,  1995,  1996,  1997,  1998,  2001,  2002,  2003,  2007,  2012,
    2006,  2024,  2028,  2028,  2040,  2039,  2048,  2052,  2055,  2064,
    2065,  2068,  2068,  2069,  2070,  2076,  2081,  2082,  2083,  2086,
    2089,  2090,  2092,  2093,  2096,  2096,  2104,  2105,  2106,  2109,
    2111,  2112,  2116,  2115,  2127,  2128,  2127,  2147,  2147,  2151,
    2152,  2155,  2156,  2159,  2165,  2166,  2166,  2169,  2170,  2170,
    2172,  2174,  2178,  2180,  2178,  2204,  2205,  2208,  2208,  2210,
    2210,  2219,  2222,  2285,  2286,  2288,  2289,  2289,  2292,  2295,
    2296,  2300,  2311,  2311,  2329,  2330,  2334,  2336,  2336,  2354,
    2354,  2356,  2360,  2361,  2362,  2361,  2367,  2369,  2370,  2371,
    2372,  2373,  2374,  2377,  2378,  2382,  2383,  2387,  2388,  2392,
    2393,  2394,  2395,  2398,  2399,  2402,  2402,  2405,  2406,  2409,
    2409,  2413,  2414,  2414,  2421,  2422,  2425,  2426,  2427,  2428,
    2429,  2432,  2434,  2436,  2440,  2442,  2444,  2446,  2448,  2450,
    2452,  2452,  2457,  2460,  2463,  2466,  2466,  2474,  2474,  2482,
    2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,  2492,
    2493,  2494,  2495,  2496,  2497,  2498,  2499,  2500,  2501,  2502,
    2503,  2510,  2511,  2512,  2513,  2514,  2515,  2516,  2522,  2523,
    2526,  2527,  2529,  2530,  2533,  2534,  2537,  2538,  2539,  2540,
    2543,  2544,  2545,  2546,  2547,  2551,  2552,  2553,  2556,  2557,
    2560,  2561,  2569,  2572,  2572,  2574,  2574,  2578,  2579,  2581,
    2585,  2586,  2588,  2588,  2590,  2592,  2596,  2599,  2599,  2601,
    2601,  2605,  2608,  2608,  2610,  2610,  2614,  2615,  2617,  2619,
    2621,  2623,  2625,  2629,  2630,  2633,  2634,  2635,  2636,  2637,
    2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,  2647,
    2648,  2649,  2650,  2651,  2652,  2653,  2654,  2657,  2658,  2659,
    2660,  2661,  2662,  2663,  2664,  2665,  2666,  2667,  2668,  2669,
    2670,  2671,  2691,  2692,  2693,  2694,  2697,  2701,  2705,  2705,
    2709,  2710,  2725,  2726,  2742,  2743,  2746,  2746,  2746,  2753,
    2753,  2763,  2764,  2764,  2763,  2773,  2773,  2783,  2783,  2792,
    2792,  2792,  2825,  2824,  2835,  2836,  2836,  2835,  2845,  2863,
    2863,  2868,  2868,  2873,  2873,  2878,  2878,  2883,  2883,  2888,
    2888,  2893,  2893,  2898,  2898,  2903,  2903,  2920,  2920,  2934,
    2971,  3009,  3046,  3047,  3054,  3055,  3056,  3057,  3058,  3059,
    3060,  3061,  3062,  3063,  3064,  3065,  3068,  3069,  3070,  3071,
    3072,  3073,  3074,  3075,  3076,  3077,  3078,  3079,  3080,  3081,
    3082,  3083,  3084,  3085,  3086,  3087,  3088,  3089,  3090,  3091,
    3092,  3093,  3094,  3095,  3096,  3097,  3098,  3099,  3100,  3101,
    3104,  3105,  3106,  3107,  3108,  3109,  3110,  3111,  3112,  3113,
    3114,  3115,  3116,  3117,  3118,  3119,  3120,  3121,  3122,  3123,
    3124,  3125,  3126,  3127,  3128,  3129,  3130,  3131,  3132,  3135,
    3136,  3137,  3138,  3139,  3140,  3141,  3142,  3143,  3150,  3151,
    3154,  3155,  3156,  3157,  3157,  3158,  3161,  3162,  3165,  3166,
    3167,  3168,  3198,  3198,  3199,  3200,  3201,  3202,  3225,  3226,
    3229,  3230,  3231,  3232,  3235,  3236,  3237,  3240,  3241,  3243,
    3244,  3246,  3247,  3250,  3251,  3254,  3255,  3256,  3260,  3259,
    3273,  3274,  3277,  3277,  3279,  3279,  3283,  3283,  3285,  3285,
    3287,  3287,  3291,  3291,  3296,  3297,  3299,  3300,  3303,  3304,
    3307,  3308,  3311,  3312,  3313,  3314,  3315,  3316,  3317,  3318,
    3318,  3318,  3318,  3318,  3319,  3320,  3321,  3322,  3323,  3326,
    3329,  3330,  3333,  3336,  3336,  3336
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VTK_ID", "QT_ID", "StdString",
  "UnicodeString", "OSTREAM", "ISTREAM", "LP", "LA", "STRING_LITERAL",
  "INT_LITERAL", "HEX_LITERAL", "BIN_LITERAL", "OCT_LITERAL",
  "FLOAT_LITERAL", "CHAR_LITERAL", "ZERO", "NULLPTR", "SSIZE_T", "SIZE_T",
  "NULLPTR_T", "BEGIN_ATTRIB", "STRUCT", "CLASS", "UNION", "ENUM",
  "PUBLIC", "PRIVATE", "PROTECTED", "CONST", "VOLATILE", "MUTABLE",
  "STATIC", "THREAD_LOCAL", "VIRTUAL", "EXPLICIT", "INLINE", "CONSTEXPR",
  "FRIEND", "EXTERN", "OPERATOR", "TEMPLATE", "THROW", "TRY", "CATCH",
  "NOEXCEPT", "DECLTYPE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING",
  "NEW", "DELETE", "DEFAULT", "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST",
  "REINTERPRET_CAST", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT_A", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW",
  "OP_INCR", "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ",
  "OP_DIVIDE_EQ", "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ",
  "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER",
  "AUTO", "VOID", "BOOL", "FLOAT", "DOUBLE", "INT", "SHORT", "LONG",
  "INT64__", "CHAR", "CHAR16_T", "CHAR32_T", "WCHAR_T", "SIGNED",
  "UNSIGNED", "IdType", "FloatType", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
  "GetStringMacro", "SetClampMacro", "SetObjectMacro", "GetObjectMacro",
  "BooleanMacro", "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "'='", "':'", "','", "'('",
  "')'", "'<'", "'['", "']'", "'~'", "'&'", "'*'", "'>'", "'%'", "'/'",
  "'-'", "'+'", "'!'", "'|'", "'^'", "'.'", "$accept", "translation_unit",
  "opt_declaration_seq", "$@1", "declaration", "template_declaration",
  "explicit_instantiation", "linkage_specification",
  "namespace_definition", "$@2", "namespace_alias_definition",
  "forward_declaration", "simple_forward_declaration", "class_definition",
  "class_specifier", "$@3", "class_head", "$@4", "$@5", "class_key",
  "class_head_name", "class_name", "opt_final", "member_specification",
  "$@6", "member_access_specifier", "member_declaration",
  "template_member_declaration", "friend_declaration",
  "base_specifier_list", "base_specifier", "opt_virtual",
  "opt_access_specifier", "access_specifier", "opaque_enum_declaration",
  "enum_definition", "enum_specifier", "$@7", "enum_head", "enum_key",
  "opt_enum_base", "$@8", "enumerator_list", "enumerator_definition",
  "$@9", "nested_variable_initialization", "ignored_initializer",
  "ignored_class", "ignored_class_body", "typedef_declaration",
  "basic_typedef_declaration", "typedef_declarator_list",
  "typedef_declarator_list_cont", "typedef_declarator",
  "typedef_direct_declarator", "function_direct_declarator", "$@10",
  "$@11", "typedef_declarator_id", "using_declaration", "using_id",
  "using_directive", "alias_declaration", "$@12", "template_head", "$@13",
  "template_parameter_list", "$@14", "template_parameter", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "$@21", "opt_ellipsis",
  "class_or_typename", "opt_template_parameter_initializer",
  "template_parameter_initializer", "$@22", "template_parameter_value",
  "function_definition", "function_declaration",
  "nested_method_declaration", "nested_operator_declaration",
  "method_definition", "method_declaration", "operator_declaration",
  "conversion_function", "$@23", "$@24", "conversion_function_id",
  "operator_function_nr", "$@25", "operator_function_sig", "$@26",
  "operator_function_id", "operator_sig", "function_nr",
  "function_trailer_clause", "function_trailer", "$@27", "noexcept_sig",
  "function_body_as_trailer", "opt_trailing_return_type",
  "trailing_return_type", "$@28", "function_body", "function_try_block",
  "handler_seq", "function_sig", "$@29", "structor_declaration", "$@30",
  "$@31", "structor_sig", "$@32", "opt_ctor_initializer",
  "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "$@33", "parameter_list", "$@34",
  "parameter_declaration", "$@35", "$@36", "opt_initializer",
  "initializer", "$@37", "$@38", "variable_declaration",
  "init_declarator_id", "opt_declarator_list", "declarator_list_cont",
  "$@39", "init_declarator", "opt_ptr_operator_seq",
  "direct_abstract_declarator", "$@40", "opt_declarator_id",
  "direct_declarator", "$@41", "lp_or_la", "$@42",
  "opt_array_or_parameters", "$@43", "$@44", "function_qualifiers",
  "abstract_declarator", "declarator", "declarator_id", "bitfield_size",
  "opt_array_decorator_seq", "array_decorator_seq", "$@45",
  "array_decorator_seq_impl", "array_decorator", "$@46",
  "array_size_specifier", "$@47", "id_expression", "unqualified_id",
  "qualified_id", "nested_name_specifier", "$@48", "tilde_sig",
  "identifier_sig", "scope_operator_sig", "template_id", "$@49",
  "decltype_specifier", "$@50", "simple_id", "identifier",
  "opt_decl_specifier_seq", "decl_specifier2", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "function_specifier",
  "cv_qualifier", "cv_qualifier_seq", "store_type", "store_type_specifier",
  "$@51", "$@52", "type_specifier", "trailing_type_specifier", "$@53",
  "trailing_type_specifier_seq", "trailing_type_specifier_seq2", "$@54",
  "$@55", "tparam_type", "tparam_type_specifier2", "$@56", "$@57",
  "tparam_type_specifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "rvalue_reference",
  "pointer", "$@58", "ptr_cv_qualifier_seq", "pointer_seq",
  "attribute_specifier_seq", "attribute_specifier", "$@59", "$@60",
  "declaration_macro", "$@61", "$@62", "$@63", "$@64", "$@65", "$@66",
  "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75",
  "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "$@82", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "constant_expression_item", "$@83",
  "common_bracket_item", "common_bracket_item_no_scope_operator",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig",
  "$@84", "right_angle_bracket", "brackets_sig", "$@85", "$@86",
  "parentheses_sig", "$@87", "$@88", "$@89", "braces_sig", "$@90",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_item_no_angle", "ignored_braces",
  "ignored_brackets", "ignored_parentheses", "ignored_left_parenthesis", 0
};
#endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   159,   160,   161,   162,   161,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   165,
     165,   166,   167,   168,   167,   169,   170,   170,   171,   171,
     171,   172,   172,   174,   173,   176,   175,   175,   177,   175,
     175,   178,   178,   178,   179,   179,   179,   180,   180,   181,
     181,   182,   183,   182,   182,   184,   184,   184,   185,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   186,   186,   186,   186,   187,   187,
     187,   187,   188,   188,   189,   189,   189,   190,   190,   191,
     191,   192,   192,   192,   193,   193,   193,   194,   194,   196,
     195,   197,   197,   198,   198,   198,   199,   200,   199,   201,
     201,   202,   202,   203,   202,   204,   205,   205,   206,   206,
     206,   206,   207,   207,   208,   208,   209,   209,   209,   209,
     209,   210,   211,   211,   212,   213,   213,   215,   216,   214,
     217,   218,   219,   219,   219,   219,   219,   219,   220,   222,
     221,   223,   224,   223,   225,   226,   225,   228,   229,   227,
     230,   231,   227,   232,   233,   234,   227,   235,   235,   236,
     236,   237,   237,   239,   238,   240,   240,   241,   241,   241,
     241,   242,   243,   243,   243,   244,   244,   244,   245,   245,
     245,   246,   246,   246,   246,   247,   247,   247,   249,   250,
     248,   251,   253,   252,   255,   254,   256,   257,   258,   259,
     259,   261,   260,   260,   260,   260,   260,   260,   260,   262,
     263,   263,   264,   264,   266,   265,   267,   267,   267,   268,
     269,   269,   271,   270,   273,   274,   272,   276,   275,   277,
     277,   278,   278,   279,   280,   281,   280,   282,   283,   282,
     282,   282,   285,   286,   284,   287,   287,   289,   288,   290,
     288,   291,   292,   293,   293,   294,   295,   294,   296,   297,
     297,   298,   299,   298,   300,   300,   301,   302,   301,   304,
     303,   303,   305,   306,   307,   305,   305,   308,   308,   308,
     308,   308,   308,   309,   309,   310,   310,   311,   311,   312,
     312,   312,   312,   313,   313,   315,   314,   316,   316,   318,
     317,   319,   320,   319,   321,   321,   322,   322,   322,   322,
     322,   323,   323,   323,   324,   324,   324,   324,   324,   324,
     325,   324,   326,   327,   328,   330,   329,   332,   331,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   334,   334,   334,   334,   334,   334,   334,   335,   335,
     336,   336,   336,   336,   337,   337,   338,   338,   338,   338,
     339,   339,   339,   339,   339,   340,   340,   340,   341,   341,
     342,   342,   343,   345,   344,   346,   344,   347,   347,   347,
     348,   348,   349,   348,   348,   348,   350,   352,   351,   353,
     351,   354,   356,   355,   357,   355,   358,   358,   358,   358,
     358,   358,   358,   359,   359,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   361,   361,   361,
     361,   361,   361,   361,   361,   361,   361,   361,   361,   361,
     361,   361,   362,   362,   362,   362,   363,   364,   366,   365,
     367,   367,   368,   368,   369,   369,   371,   372,   370,   374,
     373,   375,   376,   377,   373,   378,   373,   379,   373,   380,
     381,   373,   382,   373,   383,   384,   385,   373,   373,   386,
     373,   387,   373,   388,   373,   389,   373,   390,   373,   391,
     373,   392,   373,   393,   373,   394,   373,   395,   373,   373,
     373,   373,   396,   396,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   399,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   401,   401,
     402,   402,   402,   403,   402,   402,   404,   404,   405,   405,
     405,   405,   405,   405,   405,   405,   405,   405,   406,   406,
     407,   407,   407,   407,   408,   408,   408,   409,   409,   410,
     410,   411,   411,   412,   412,   413,   413,   413,   415,   414,
     416,   416,   418,   417,   419,   417,   421,   420,   422,   420,
     423,   420,   425,   424,   426,   426,   427,   427,   428,   428,
     429,   429,   430,   430,   430,   430,   430,   430,   430,   430,
     430,   430,   430,   430,   430,   430,   430,   430,   430,   431,
     432,   432,   433,   434,   434,   434
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     5,
       4,     5,     4,     0,     6,     5,     1,     2,     4,     3,
       5,     4,     5,     0,     5,     0,     7,     4,     0,     5,
       2,     1,     1,     1,     3,     4,     2,     1,     1,     0,
       1,     0,     0,     4,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     2,     2,     2,     2,     2,     3,
       2,     3,     1,     4,     2,     4,     4,     0,     1,     0,
       1,     1,     1,     1,     5,     3,     6,     4,     5,     0,
       5,     4,     3,     1,     2,     2,     0,     0,     3,     1,
       3,     0,     1,     0,     4,     6,     2,     1,     5,     6,
       3,     4,     5,     3,     1,     2,     5,     5,     6,     5,
       6,     2,     0,     3,     2,     1,     1,     0,     0,     8,
       1,     3,     1,     2,     2,     2,     3,     3,     4,     0,
       8,     3,     0,     5,     1,     0,     4,     0,     0,     5,
       0,     0,     5,     0,     0,     0,     7,     0,     1,     1,
       1,     0,     1,     0,     3,     1,     2,     2,     2,     2,
       2,     3,     4,     2,     3,     2,     3,     4,     2,     4,
       5,     3,     1,     1,     2,     1,     2,     3,     0,     0,
       9,     2,     0,     4,     0,     7,     2,     1,     3,     0,
       2,     0,     3,     1,     2,     1,     2,     1,     1,     1,
       2,     2,     0,     1,     0,     3,     3,     1,     1,     6,
       0,     6,     0,     7,     0,     0,     6,     0,     6,     0,
       2,     1,     3,     3,     0,     0,     2,     1,     0,     4,
       3,     1,     0,     0,     5,     0,     1,     0,     3,     0,
       2,     4,     2,     0,     2,     0,     0,     4,     2,     0,
       1,     3,     0,     6,     0,     1,     3,     0,     5,     0,
       3,     1,     0,     0,     0,     7,     1,     0,     2,     2,
       3,     3,     2,     1,     2,     1,     2,     2,     4,     1,
       1,     1,     1,     0,     1,     0,     2,     1,     2,     0,
       5,     0,     0,     2,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     2,     3,     3,     3,
       0,     5,     1,     1,     1,     0,     5,     0,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       1,     1,     1,     1,     2,     3,     1,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     0,     3,     0,     4,     1,     3,     4,
       1,     1,     0,     4,     2,     2,     2,     0,     3,     0,
       4,     2,     0,     3,     0,     4,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     2,     2,     0,     4,
       0,     1,     1,     2,     0,     2,     0,     0,     6,     0,
       7,     0,     0,     0,     9,     0,     5,     0,     5,     0,
       0,    10,     0,     7,     0,     0,     0,     9,     6,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     9,     0,     9,     4,
       4,     7,     0,     1,     2,     2,     3,     3,     1,     1,
       1,     1,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     1,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     0,     4,     0,     5,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     4,     3,     1,     1,     1
};

/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   484,     0,   439,   440,   441,   435,
     436,   437,   438,   443,   444,   442,   486,    52,    51,    53,
     113,   398,   399,   390,   393,   394,   396,   397,   395,   389,
     391,   217,     0,   347,   412,     0,     0,     0,   344,   457,
     458,   459,   460,   461,   466,   467,   468,   469,   462,   463,
     464,   465,   470,   471,   455,   456,   445,   446,   447,   448,
     449,   450,   451,   452,   453,   454,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   342,     5,
      19,    20,    13,    11,    12,     9,    36,    17,   378,    43,
     484,    10,    16,   378,     0,   484,    14,   134,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   205,     0,     0,
      15,     0,   324,   484,     0,     0,     0,     0,   484,   411,
     326,   343,     0,   484,   386,   387,   388,   177,   279,   403,
     407,   410,   484,   484,   485,    21,   638,   115,   114,   392,
       0,   439,   440,   441,   435,   436,   437,   438,   704,   705,
     615,   610,   611,   612,   609,   613,   614,   616,   617,   443,
     444,   442,   674,   583,   582,   584,   602,   586,   588,   587,
     589,   590,   591,   594,   595,   593,   592,   598,   601,   585,
     603,   604,   596,   581,   580,   600,   599,   556,   557,   597,
     607,   606,   605,   608,   558,   559,   560,   688,   561,   562,
     563,   569,   570,   564,   565,   566,   567,   568,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   686,   685,   698,
     455,   456,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   454,   674,   692,   689,   693,   703,   162,   674,   552,
     553,   547,   691,   546,   548,   549,   550,   551,   554,   555,
     690,   697,   696,   687,   694,   695,   676,   682,   684,   683,
     674,     0,     0,   439,   440,   441,   435,   436,   437,   438,
     391,   378,   484,   378,   484,   484,     0,   484,   411,     0,
     177,   371,   373,   372,   376,   377,   375,   374,   674,    33,
     351,   349,   350,   354,   355,   353,   352,   358,   357,   356,
       0,     0,   369,   370,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,     0,   484,   325,     0,     0,   327,
     328,     0,   491,   495,   497,     0,     0,   504,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   279,     0,    50,   279,   109,   116,     0,     0,
      27,    37,    24,   484,    26,    28,     0,    25,     0,   177,
     249,   238,   674,   187,   237,   189,   190,   188,   208,   484,
       0,   211,    22,   415,   340,   195,   193,   244,   331,     0,
     327,   328,   329,    58,   330,    57,     0,   334,   332,   333,
     335,   414,   336,   345,   378,   484,   378,   484,   135,   206,
       0,   484,   405,   384,   289,   291,   178,     0,   275,   265,
     177,   484,   484,   484,   402,   280,   472,   473,   482,   474,
     378,   434,   433,   487,     3,   676,     0,     0,   661,   660,
     167,   161,     0,     0,     0,   668,   670,   666,   348,   484,
     392,   279,    50,   279,   116,   331,   378,   378,   150,   146,
     142,     0,   145,     0,     0,     0,   153,     0,   151,     0,
     155,   154,     0,     0,   351,   349,   350,   354,   355,   353,
     352,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   383,   382,     0,   275,   177,   484,   380,   381,
      61,    39,    48,   408,   484,     0,     0,    58,     0,     0,
     121,   105,   117,   112,   484,   484,     0,     0,     0,     0,
       0,     0,   255,     0,     0,   249,   247,   337,   338,   339,
     649,   279,    50,   279,   116,   196,   194,   385,   378,   480,
     207,   212,   484,     0,   191,   219,   313,   484,     0,     0,
     267,   272,   266,     0,     0,   305,     0,   177,   477,   476,
     478,   475,   483,   404,   664,   643,   627,   672,   645,   632,
     646,   641,   662,   642,   633,   637,   636,     0,   631,   634,
     635,   640,   626,   644,   639,   628,   629,   630,     4,     0,
     679,   681,     0,   675,   678,   680,   699,     0,   164,     0,
       0,     0,   700,    30,   677,   702,   638,   638,   638,   413,
       0,   142,   177,   408,     0,   484,   279,   279,     0,   313,
     484,   327,   328,    32,     0,     0,     3,   158,   159,     0,
     556,   557,     0,   541,   540,     0,   538,     0,   539,   216,
     545,   157,   156,   489,     0,     0,     0,   499,   502,     0,
       0,   509,   513,   517,   521,   511,   515,   519,   523,   525,
     527,   529,   530,     0,    41,   274,   278,   379,    62,     0,
      60,    38,    47,    56,   484,    58,     0,     0,   107,     0,
     119,   122,     0,   111,   409,   484,   484,     0,   250,   251,
       0,   674,   236,     0,   262,   408,     0,   245,   255,     0,
       0,   408,     0,   484,   406,   400,   481,   290,   219,     0,
     232,   286,   314,     0,   307,   197,   192,   271,   276,     0,
     270,   287,   306,   480,   638,   651,   638,     0,    31,    29,
     701,   165,   163,     0,     0,     0,   429,   428,   427,     0,
     177,   279,   422,   426,   179,   180,   177,     0,     0,     0,
       0,   137,   141,   144,   139,   111,     0,     0,   136,   279,
     147,   307,    35,     4,     0,   544,     0,     0,   543,   542,
     534,   535,     0,   492,   496,   498,     0,     0,   505,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     532,    65,    66,    67,    44,   484,     0,   101,   102,   103,
      99,    49,    92,    97,   177,    45,    54,   484,   110,   121,
     123,   118,   104,     0,   326,     0,   177,     0,   484,   261,
     256,   257,     0,   341,   219,     0,   656,   657,   658,   654,
     655,   650,   653,   346,    42,    40,   108,   111,   401,   232,
     214,   225,   223,   221,   229,   234,     0,   220,   227,   228,
     218,   233,   319,   316,   317,     0,   242,   279,   625,   622,
     623,   268,   618,   620,   621,   292,   479,     0,     0,     0,
     488,   167,   430,   431,   432,   424,   284,   168,   484,   421,
     378,   171,   174,   669,   671,   667,   138,   140,   143,   255,
      34,   177,   536,   537,     0,     0,   500,     0,     0,   508,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     533,     0,     0,    64,     0,   100,   484,    98,     0,    94,
       0,    55,   120,     0,   676,     0,   127,   252,   253,   240,
     209,   258,   177,   232,   484,   649,   106,   213,   255,     0,
       0,   224,   230,   231,   226,   322,   318,   310,   311,   312,
     309,   308,   255,   277,     0,   619,   293,   288,   296,     0,
     648,   673,   647,   652,   663,   166,   378,   292,   285,   181,
     177,   423,   181,   177,     0,     0,   490,   493,     0,   503,
     506,   510,   514,   518,   522,   512,   516,   520,   524,     0,
       0,   531,     0,   391,     0,     0,    83,    79,    70,    76,
      63,    78,    72,    71,    75,    73,    68,    69,     0,    77,
       0,   202,   203,    74,     0,   324,     0,     0,   177,    80,
     177,     0,   177,    46,   124,   126,   125,   239,   219,   260,
     262,   263,   246,   248,     0,     0,   222,     0,   417,   235,
     279,     0,     0,     0,   624,   255,   665,   425,   281,   183,
     169,   182,   303,     0,   177,   172,   175,   148,   160,     0,
     676,     0,     0,     0,    90,   484,    88,     0,     0,     0,
       0,   177,    81,    84,    86,    87,     0,    85,     0,   198,
      82,   484,   204,     0,     0,    95,    93,    96,     0,   232,
     259,   265,   659,   484,   419,   378,   416,   484,   323,   484,
       0,     0,   282,   304,   181,   297,   494,     0,   507,   526,
     528,     0,   484,    89,     0,    91,   484,     0,     0,     0,
     484,   201,     0,   210,   264,   215,   378,   418,   320,   243,
     484,   184,   185,   292,   176,   149,   501,   674,   676,   408,
     130,     0,   484,     0,   199,     0,   674,   420,   294,   186,
     283,   299,   298,     0,   302,     0,     0,     0,    59,     0,
     408,   131,   200,     0,   297,   300,   301,   676,   133,   128,
      59,     0,   241,   295,     0,   129,   132
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   360,    91,    92,    93,   465,
      94,    95,    96,   362,    98,   353,    99,   930,   679,   379,
     513,   514,   682,   678,   805,   806,  1010,  1084,  1012,   811,
     812,   928,   924,   813,   101,   102,   103,   520,   104,   363,
     523,   692,   689,   690,   933,   364,   935,  1076,  1150,   106,
     107,   620,   628,   621,   458,   459,   899,  1115,   460,   108,
     324,   109,   365,   774,   366,   440,   607,   881,   608,   609,
     979,   610,   982,   611,   983,  1114,   886,   756,  1060,  1061,
    1111,  1141,   367,   113,   114,   115,  1087,  1020,  1021,   117,
     532,  1038,   118,   550,   718,   551,   948,   552,   119,   554,
     720,   857,   949,   858,   859,   860,   861,   950,   373,   374,
    1037,   555,   962,  1022,   535,   834,   387,   708,   530,   698,
     699,   703,   704,   830,  1040,   831,   832,  1101,   561,   562,
     729,   563,   120,   418,   504,   559,   867,   505,   506,   887,
    1143,   977,   419,   875,   420,   549,   967,  1055,  1174,  1145,
    1063,   566,   556,   961,   721,   968,   723,   863,   864,   955,
    1051,  1052,   814,   122,   285,   286,   534,   125,   126,   127,
     287,   540,   288,   271,   130,   131,   352,   507,   380,   133,
     134,   135,   136,   716,  1081,   138,   430,   548,   139,   140,
     272,  1049,  1050,  1105,  1136,   750,   751,   890,   976,   752,
     141,   142,   143,   425,   426,   427,   428,   733,   717,   429,
     694,   144,   146,   587,   145,   782,   482,   905,  1069,   483,
     484,   786,   988,   787,   487,   908,  1071,   790,   794,   791,
     795,   792,   796,   793,   797,   798,   799,   921,   649,   588,
     589,   590,   871,   872,   964,   591,   592,   433,   593,   594,
     973,   709,   878,   840,   841,   874,   945,   441,   595,   736,
     734,   596,   618,   616,   617,   597,   735,   436,   443,   603,
     604,   605,   267,   268,   269,   270
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1025
static const short int yypact[] =
{
   -1025,   113,   137, -1025, -1025,  7119,     3,   174,   183,   190,
     193,   273,   280,    -9,   127,   157, -1025, -1025, -1025, -1025,
     439, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
     112, -1025,  4490, -1025, -1025,  8765,    93,  2119, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025,   211,   272,   277,   291,   312,   321,
     345,   349,   371,   391,   396,   398,    18,    37,    81,    90,
     101,   108,   124,   143,   161,   169,   171,   173,   208,   224,
     243,   256,   268,   276,   288,   298,   303, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025,    34, -1025, -1025, -1025, -1025, -1025,
   -1025,  8432, -1025,   116,   116,   116,   116, -1025,   327,  8765,
   -1025,   337, -1025,   346,  7783,  1985,   413,  7952,   194,   290,
   -1025,   368,  8543, -1025, -1025, -1025, -1025,   244,   138, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   388,
    4958, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025,    26, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025,    73,  7952,    24,    38,    66,   128,   152,   176,   204,
     536, -1025, -1025, -1025, -1025, -1025,  7977,   413,   413,  8765,
     244, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   411,
      24,    38,    66,   128,   152,   176,   204, -1025, -1025, -1025,
    7952,  7952, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025,   418,   419, -1025,  7783,  7952,   413,
     413,  6941, -1025, -1025, -1025,  6941,  6941, -1025,  6941,  6941,
    6941,  6941,  6941,  6941,  6941,  6941,  6941,  6941,  6941,  6941,
    6941,  6941,  7347,   429,  8201,  7347, -1025,  7712,   423,  7952,
   -1025, -1025, -1025, -1025, -1025, -1025,  8432, -1025,  8654,   488,
     436, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
    8765, -1025, -1025,   553, -1025, -1025, -1025, -1025,   440,   413,
     413,   413, -1025, -1025, -1025, -1025,   368, -1025, -1025, -1025,
   -1025,   553, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
    7783, -1025, -1025,   553, -1025, -1025, -1025,  8024, -1025,   155,
      70, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   387,
   -1025,   553,   553,  5894, -1025, -1025,  2306,  2462, -1025, -1025,
     353, -1025,  2618,  3710,  2774, -1025, -1025, -1025, -1025, -1025,
   -1025,  7579,  8321,  7579,  7759, -1025, -1025, -1025, -1025, -1025,
   -1025,  8089, -1025,  2930,   385,   444, -1025,   450, -1025,    87,
   -1025, -1025,  6830,  7783, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025,   447,  6941,  6941,  6941,   456,   457,  6941,   458,   466,
     472,   474,   477,   479,   482,   484,   485,   486,   490,   497,
     499,   502, -1025, -1025,   493, -1025,   244, -1025, -1025, -1025,
   -1025, -1025, -1025,    55, -1025,  9009,   471,   413,   413,   509,
    6941, -1025, -1025, -1025,   227, -1025,  7832,  8654,  8024,  7952,
     511,  3086,   503,  8394,   630,   436, -1025, -1025, -1025, -1025,
   -1025,  7347,  8321,  7347,  7759, -1025, -1025,   553, -1025,   461,
   -1025, -1025, -1025,  2120, -1025, -1025,   504, -1025,  7783,   -20,
   -1025, -1025, -1025,   513,  8089, -1025,   508,   244,   553,   553,
     553, -1025, -1025,  2206, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025,   507, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   517,  3866,
   -1025, -1025,   510, -1025, -1025, -1025, -1025,     8, -1025,  8876,
      80,   613, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   553,
     524, -1025,   244,    60,   526,   203,  7579,  7579,   260,   239,
   -1025, -1025, -1025, -1025,   527,   413, -1025, -1025, -1025,   663,
     522,   528,    30, -1025, -1025,   532, -1025,   530, -1025, -1025,
   -1025, -1025, -1025, -1025,   537,   534,   541, -1025, -1025,   539,
    8765, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025,  7952, -1025,   544, -1025,   553,   136,  1938,
   -1025, -1025,   546,   553, -1025,   413,   413,  9009, -1025,   297,
   -1025,   549,  8765,   554,   553, -1025, -1025,  7783,   552, -1025,
      82, -1025, -1025,   551,   611, -1025,   413, -1025,   503,  6050,
     561,    71,   563,   227,  2206, -1025,   461, -1025, -1025,    46,
      83, -1025, -1025,   555,    35, -1025, -1025, -1025, -1025,  6362,
   -1025, -1025, -1025,   461, -1025, -1025, -1025,   556, -1025, -1025,
   -1025, -1025, -1025,  7952,  7952,  7952, -1025,   413,   413,  8765,
     244,   138, -1025, -1025, -1025, -1025,   244,   675,  5114,  5270,
    5426, -1025,   565, -1025, -1025, -1025,   567,   568, -1025,   138,
   -1025,    49, -1025,   571,  8765, -1025,   564,   570, -1025, -1025,
   -1025, -1025,  8765, -1025, -1025, -1025,  8765,  8765, -1025,   576,
    8765,  8765,  8765,  8765,  8765,  8765,  8765,  8765,  8765,  8765,
     582, -1025, -1025, -1025, -1025, -1025,   577, -1025, -1025, -1025,
     562,   585, -1025,   674,   488, -1025,   553, -1025, -1025,  6941,
   -1025, -1025, -1025,    51,   286,  7952,   488,  3242, -1025, -1025,
     586, -1025,  8765, -1025, -1025,   587, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025,   592, -1025,    83,
   -1025, -1025, -1025, -1025, -1025, -1025,   245, -1025,    73, -1025,
   -1025, -1025, -1025,   555, -1025,   501, -1025,   138, -1025,  6206,
   -1025,  6362, -1025, -1025, -1025,   341, -1025,  5582,  4646,  5738,
   -1025,   353, -1025, -1025, -1025, -1025,  8089, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   503,
   -1025,   244, -1025, -1025,   590,  8765, -1025,   593,  8765, -1025,
     594,   598,   601,   603,   604,   605,   606,   607,   588,   612,
   -1025,   609,  6985, -1025,  7952, -1025, -1025, -1025,  7952, -1025,
    1938,   553, -1025,  6362, -1025,   618, -1025, -1025, -1025, -1025,
     553,   671,   244,    83, -1025, -1025, -1025, -1025,   503,    73,
    8987, -1025, -1025, -1025, -1025,   610, -1025, -1025, -1025, -1025,
   -1025, -1025,   503, -1025,  6674, -1025, -1025, -1025, -1025,   614,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025,   341, -1025,   619,
      54,  2206,   619,   244,   622,   625, -1025, -1025,   621, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,   753,
     754, -1025,  7369,   246,  7904,    82, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,  7253, -1025,
     116, -1025, -1025, -1025,   632,   440,  7783,  7485,   244, -1025,
     488,  1670,   488,   585,  6362,  4802, -1025,   723, -1025, -1025,
   -1025, -1025, -1025,   553,  6050,   629, -1025,  8987, -1025, -1025,
     138,   627,  6362,   631, -1025,   503, -1025,  2206, -1025, -1025,
   -1025, -1025, -1025,   633,   244, -1025, -1025, -1025, -1025,   634,
   -1025,   635,   639,   640, -1025, -1025, -1025,   803,   116,   440,
    7601,   488, -1025, -1025, -1025, -1025,  7253, -1025,  7601, -1025,
   -1025, -1025, -1025,  7783,  8024, -1025, -1025, -1025,    82,    83,
   -1025,   155, -1025, -1025, -1025, -1025, -1025, -1025,  6362, -1025,
     643,  6518, -1025, -1025,   619, -1025, -1025,  4022, -1025, -1025,
   -1025,  8136, -1025, -1025,   803, -1025, -1025,  8024,  7601,   105,
   -1025, -1025,   638, -1025, -1025,   553, -1025,  2206,   553,   553,
   -1025,  6518, -1025,   341, -1025,   574, -1025, -1025, -1025,   109,
   -1025,  8136, -1025,  8274, -1025,   120, -1025,  2206,   553, -1025,
   -1025, -1025, -1025,    82,    82,  3398,  4178,   406,    63,  8274,
     111, -1025, -1025,  3554, -1025, -1025, -1025, -1025, -1025, -1025,
      68,   406, -1025,   574,  4334, -1025, -1025
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1025, -1025,  -394, -1025, -1025,   782,  -131, -1025, -1025, -1025,
   -1025,  -845,   -88,    -2,   -27, -1025, -1025, -1025, -1025,   339,
    -438,  -108,  -866, -1025, -1025, -1025, -1025,  -130, -1025,  -136,
    -236, -1025, -1025,   -14,  -125,  -124,   -24, -1025, -1025,     2,
    -482, -1025, -1025,   -16, -1025, -1025, -1025,  -273,  -709,  -115,
    -120,  -393,   187,    40, -1025, -1025, -1025, -1025,   188,  -111,
   -1025, -1025,     5, -1025,    -1, -1025, -1025, -1025,   -69, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025,   688, -1025,  -897, -1025,
   -1025, -1025,   809, -1025, -1025, -1025,  -107,  -186,    29,   -86,
   -1025, -1025,  -272,  -501, -1025, -1025, -1025,  -312,  -314,  -542,
    -693, -1025, -1025, -1025, -1025,  -801, -1025, -1025,   -87, -1025,
   -1025, -1025, -1025,   -98, -1025, -1025, -1025, -1025,   282, -1025,
      -7,  -678, -1025, -1025, -1025,  -221, -1025, -1025,  -280, -1025,
   -1025, -1025,  -100,   317,  -303,   319, -1025,   -41,   -82,  -707,
   -1025, -1025,  -246, -1025,  -703, -1025,  -923, -1025, -1025,  -343,
   -1025, -1025,  -443, -1025, -1025,  -477, -1025, -1025,   -30, -1025,
   -1025, -1025,  1158,  -122,   917,    14, -1025, -1025,    11,    99,
      -5, -1025,    45, -1025,  1139,   -15,   -97, -1025,    -4,   982,
   -1025, -1025,  -504, -1025,  1091,   142, -1025, -1025,   279,  -874,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
     235,   420,   228,  -384,   421, -1025,   422, -1025,   115, -1025,
    1027, -1025, -1025, -1025,   -73, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,
   -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025, -1025,    59,
     121,   158,  -871,  -851, -1025,  -309,  -112,  -549, -1025,   -19,
   -1025,   -85, -1025, -1024, -1025,  -674, -1025,  -583, -1025, -1025,
   -1025,  -228, -1025, -1025, -1025,   295, -1025,  -209,  -426, -1025,
    -421,    86,    41, -1025,  -659, -1025
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -659
static const short int yytable[] =
{
     128,   132,   388,    97,   111,   398,   355,   105,   281,   599,
     110,   283,   408,   472,   623,   471,   726,   392,   629,   124,
     965,   299,   614,   361,   742,   849,   386,   375,   376,   377,
     835,   289,   329,   437,   116,   842,   567,   284,   385,   442,
     598,   826,   693,   448,   462,   715,   409,   888,   947,   891,
     129,   327,   519,   888,  1058,   470,   424,   725,   680,    16,
     624,   444,  1034,   680,   414,   415,   680,   758,   759,   760,
      16,   680,   438,    16,   680,    16,  1048,  1008,    16,   722,
     414,   415,   330,   445,   446,  1065,   851,  1142,  -371,   463,
     438,   263,   158,   159,   778,   705,   291,   292,   293,   294,
     295,   296,   297,   553,   711,   404,   754,   368,   406,  -371,
     396,    16,   680,     3,   680,   852,   727,  1159,   266,   390,
     393,   728,   329,  -373,   149,   124,   843,  -358,   853,    16,
     755,   854,   421,  -358,   407,   389,   328,    -2,   416,  -351,
     116,   943,  1042,   765,    16,  -351,   410,  -371,   421,   741,
     855,  -372,   722,   264,   416,   726,   150,  1074,   439,   472,
     331,   652,   370,   531,   455,   801,   802,   803,  -371,   391,
     394,   356,   330,  1104,   565,   865,   439,   866,   614,   332,
     779,  1108,  -373,   965,   451,   877,   453,   879,   850,   865,
     265,   681,   -59,   866,   985,   -59,   725,   -59,   888,   681,
     -59,   651,   422,   423,   845,   455,   398,   845,   -59,   263,
    -372,   -59,   848,  -376,   553,   447,   421,  1144,   422,   423,
    1160,   984,   856,   333,   246,   397,   638,   400,   402,   715,
     298,   847,   334,   766,   767,  1041,   435,  -377,   710,   888,
     712,  1154,   773,   335,   553,   681,   -59,   845,   -59,   -59,
     336,   -59,   371,   372,   414,   415,  1172,   965,   450,  -373,
     262,  -375,   456,  -357,   951,   457,   337,   329,  -372,  -357,
    1045,   264,  -376,  1062,   804,  -376,  1066,   888,  -377,    38,
     888,   390,   409,  1167,  1053,   338,   422,   423,   388,  -374,
     150,   284,  -269,  -356,   560,   557,  -377,   389,  1133,  -356,
     952,   953,  1167,   339,  1181,   329,   329,   541,   265,   543,
    -349,   340,   546,   341,  1181,   342,  -349,   330,  -373,  -350,
    -375,   732,   390,   329,   545,  -350,  -354,  -372,   416,  -355,
    -327,   391,  -354,   573,  -376,  -355,  -327,  -377,   389,   630,
    -116,   404,   473,   522,   100,  1099,  1082,  -369,  -374,   517,
     343,   455,   329,  -369,   329,   330,   330,  1113,  -375,   626,
     627,   888,   527,  -116,  -116,  -374,   344,   522,   515,   622,
     842,   622,   391,   330,   282,    38,   462,  1110,   262,  -170,
     124,   770,   410,   553,  -315,   345,   400,   402,   291,   292,
     293,   294,   295,   296,   297,   116,   768,  -173,   346,   518,
     839,   769,   330,  -170,   330,   390,   696,   684,  -370,  -353,
     347,   412,   329,  -359,  -370,  -353,  -352,  -375,   348,  -359,
     873,   389,  -352,   242,  -374,   934,  -328,  -360,   400,   402,
     349,   558,  -328,  -360,    33,   818,   696,   842,   819,  1132,
     350,   409,   630,   978,  1171,   351,   396,   517,  -361,   329,
     100,   714,   261,   516,  -361,   391,   631,  -362,  1179,   635,
    1171,  1102,   330,  -362,   147,   148,   515,   842,   390,   378,
      38,   405,  1185,   382,   291,   292,   293,   294,   295,   296,
     297,  -363,  -325,   966,   389,  -364,  -315,  -363,   537,   538,
     539,  -364,   827,    21,    22,   263,   263,   518,    38,   330,
     404,   263,   263,   263,  1175,  1176,   632,  -365,  1035,   518,
     685,   635,   403,  -365,   957,   958,   959,   960,   391,   396,
      33,   329,   263,   329,   329,   434,   389,  -366,   517,   706,
     687,   650,  -367,  -366,  -368,   422,   423,   517,  -367,   329,
    -368,   410,   697,  1147,   622,   622,  1148,   515,   450,   396,
     464,   516,  1131,   390,   468,  -152,   515,   264,   264,   631,
     686,   518,   873,   264,   264,   264,   510,   247,   412,   389,
     261,   330,   416,   330,   330,   696,   529,    16,   518,   817,
     509,   636,   536,   509,   264,  1131,   637,   518,   653,   330,
     263,   807,   808,   809,   265,   265,  1064,   657,   658,   660,
     265,   265,   265,   391,   747,   749,  1161,   661,  1162,   632,
     757,   745,   650,   662,   614,   663,   400,   402,   664,  1163,
     665,   265,  1164,   666,   873,   667,   668,   669,   282,   674,
     954,   670,   516,   291,   292,   293,   294,   295,   296,   297,
     671,   516,   672,   673,  1117,   688,  -254,   412,   701,  -315,
     577,   731,   264,   737,   748,   738,   740,   358,   263,   412,
     761,   586,   764,   772,   262,   262,   775,   776,   329,   889,
     262,   262,   262,   777,   329,   780,   781,   784,   783,   509,
     788,   509,   685,  1149,   785,   728,   815,   622,   820,   265,
     822,   262,   390,   825,   828,   829,   614,   844,   389,   846,
     862,   892,   880,   896,   897,   282,   769,   405,   389,   900,
     902,   927,   553,  1168,  1091,  1170,   903,   923,   330,   909,
     264,  1046,  1166,   920,   330,   873,   926,   941,   946,   999,
     944,  1180,   686,   986,   400,   839,   989,   991,   329,   329,
     329,   992,   391,   873,   993,   614,   994,   995,   996,   997,
     998,  1184,  1001,  1000,  1036,  1039,  -321,   265,  1059,   262,
    1056,  1068,  1070,   614,   630,  1067,  1072,  1073,  1090,   509,
    1098,   509,  1103,  1107,  1109,  1156,  1112,  1116,  1118,   553,
     553,  1130,  1119,  1120,   538,   539,  1140,    90,   330,   330,
     330,  1007,  1011,   981,  1033,  1096,   925,  1013,  1014,   873,
    1025,   509,   839,   932,  1123,   833,   412,  1015,   762,   898,
     763,  1016,   975,   553,   112,  1019,  1078,   707,   937,  1100,
     329,  1134,  1023,   676,   675,   417,   963,   262,    17,    18,
      19,  1183,   839,   956,   821,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   753,   280,   400,   402,   876,  1029,
     571,   572,  1054,   585,   509,   509,   261,   261,   730,   972,
    1044,     0,   261,   261,   261,   936,   282,     0,     0,     0,
     330,   396,     0,     0,     0,     0,     0,     0,     0,  1057,
    1079,   631,     0,   261,     0,     0,   263,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1079,     0,     0,     0,
       0,     0,     0,     0,   455,  1079,     0,   408,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   128,  1027,   329,
    1009,  1018,   123,   329,   105,   329,     0,  1017,     0,  1092,
     361,   632,     0,  1089,     0,     0,  1026,   586,  1165,     0,
       0,   409,   509,     0,     0,     0,  1047,  1173,   264,     0,
       0,   261,     0,     0,   326,     0,     0,   586,  1079,     0,
       0,     0,     0,     0,  1079,     0,  1079,   129,  1106,   330,
       0,   455,   557,   330,     0,   330,     0,     0,   461,     0,
       0,     0,  1092,     0,     0,   265,   586,   586,   586,   361,
    1092,  1125,     0,     0,   409,     0,     0,   128,  1080,   329,
     404,  1077,   409,   406,     0,   696,  1079,     0,  1137,     0,
       0,     0,     0,   128,  1088,     0,  1083,  1086,   327,   261,
       0,   390,   128,  1085,     0,     0,   329,     0,   885,   407,
    1092,     5,  1026,     0,     0,     0,     0,   389,     0,  1157,
       0,  1093,   409,     0,   399,     0,     0,   129,     0,   330,
       0,     0,     0,     0,     0,   262,     0,   528,     0,     0,
       0,   404,     0,   129,     0,     0,     0,     0,     0,     0,
       0,   391,   129,  1124,     0,   128,   330,     0,     0,   396,
       0,   128,  1128,   128,  1083,  1086,     0,     0,   390,   631,
       0,  1085,     0,     0,   263,     0,   137,     0,     0,   586,
    1026,   404,  1093,   328,   389,   586,   586,   586,   564,     0,
       0,     0,   396,     0,   411,     0,   517,     0,     0,     0,
       0,     0,   631,   128,     0,   129,   290,   354,     0,   585,
       0,   129,   357,   129,     0,   515,     0,     0,   391,   632,
       0,     0,  1093,     0,     0,     0,   517,     0,   517,   585,
     383,     0,     0,     0,     0,   401,   264,     0,     0,     0,
     413,   586,     0,   121,   517,   515,   518,   515,     0,   431,
     432,     0,   632,   129,     0,     0,   263,     0,   585,   585,
     585,     0,     0,   515,     0,     0,     0,     0,     0,   326,
       0,     0,   586,   265,   564,   325,   518,     0,   518,     0,
       0,     0,   369,     0,     0,     0,     0,     0,     0,   509,
     381,     0,     0,     0,   518,     0,     0,     0,     0,     0,
     516,     0,     0,     0,   263,   263,     0,   326,   326,     0,
       0,     0,   263,     0,     0,     0,     0,     0,   264,     0,
       0,     0,     0,   263,     0,   399,     0,   261,     0,     0,
     516,     0,   516,     0,     0,   564,     0,     0,     0,     0,
       0,   100,   586,   262,   395,     0,     0,     0,   516,     0,
       0,   411,   586,     0,   326,   265,   326,     0,     0,     0,
     586,     0,     0,     0,     0,   509,   264,   264,     0,     0,
       0,   585,     0,     0,   264,     0,     0,   585,   585,   585,
       0,     0,     0,     0,     0,   264,   412,     0,     0,   452,
     461,   454,   383,     0,   401,     0,     0,     0,     0,     0,
       0,     0,     0,   265,   265,     0,     0,     0,     0,     0,
       0,   265,     0,     0,   508,     0,   586,   508,     0,   586,
       0,  1075,   265,     0,     0,   262,     0,     0,     0,     0,
     411,     0,   469,   585,     0,     0,     0,   100,     0,   412,
       0,     0,   411,     0,     0,   509,   405,   412,     0,   586,
       0,   326,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   634,     0,     0,   585,   509,     0,     0,     0,     0,
     526,     0,     0,   262,   262,     0,     0,     0,     0,     0,
       0,   262,     0,     0,     0,     0,   533,   412,     0,     0,
       0,     0,   262,     0,     0,     0,  1122,     0,     0,  1126,
       0,     0,     0,     0,     0,   282,     0,   405,     0,     0,
     449,     0,   542,   508,   544,   508,     0,     0,   547,     0,
       0,     0,     0,   326,     0,     0,   326,     0,   568,   569,
     570,     0,     0,     0,   585,   261,     0,   369,     0,     0,
       0,   326,     0,  1152,   585,     0,     0,   282,   466,   467,
     481,     0,   585,     0,   485,   486,   619,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     501,     0,     0,   395,     0,     0,     0,     0,     0,     0,
       0,     0,   929,     0,     0,     0,     0,     0,     0,   411,
       0,     0,     0,     0,   938,   524,     0,   525,     0,     0,
       0,     0,     0,   508,     0,   508,   746,     0,   585,     0,
       0,   585,     0,     0,   677,     0,     0,   261,     0,     0,
       0,   683,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   469,     0,     0,   508,     0,     0,     0,     0,
       0,   585,     0,   381,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   719,
       0,     0,     0,     0,   724,   261,   261,     0,     0,     0,
     326,   395,     0,   261,     0,     0,   326,     0,     0,     0,
       0,     0,     0,     0,   261,     0,     0,     0,   508,   508,
       0,     0,   625,     0,     0,     0,     0,     0,     0,     0,
       0,   654,   655,   656,     0,     0,   659,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   395,     0,     0,   771,     0,   691,
     326,   326,   326,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   395,   300,   301,   302,   303,   304,   305,   306,
       0,   395,     0,     0,   695,     0,     0,   700,     0,     0,
       0,   307,   308,   309,    16,     0,   508,     0,     0,   807,
     808,   809,   713,     0,     0,     0,     0,   810,     0,     0,
       0,   816,     0,     0,     0,     0,  1094,     0,  1095,    33,
    1097,     0,     0,   823,     0,     0,     0,     0,     0,     0,
       0,   411,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   326,     0,     0,     0,     0,     0,     0,     0,
       0,   789,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1127,
       0,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,     0,   395,     0,     0,     0,
       0,   800,   922,     0,     0,     0,   824,     0,     0,   123,
       0,   326,     0,     0,   931,   326,     0,   326,     0,     0,
       0,     0,     0,     0,     0,   940,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   901,     0,     0,     0,     0,
       0,     0,     0,   904,     0,     0,     0,   906,   907,     0,
       0,   910,   911,   912,   913,   914,   915,   916,   917,   918,
     919,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   882,   883,   884,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   980,     0,     0,     0,     0,
       0,   326,     0,   942,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   300,   301,   302,   303,   304,   305,   306,   326,     0,
       0,     0,     0,  1031,     0,     0,     0,     0,   691,   307,
     308,   309,     0,   508,     0,     0,     0,   807,   808,   809,
       0,  1043,     0,     0,     0,   810,     0,     0,     0,     0,
       0,     0,     0,   700,     0,     0,     0,    33,   300,   301,
     302,   303,   304,   305,   306,     0,   987,     0,     0,   990,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   411,
       0,     0,     0,  1028,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,   411,
       0,     0,     0,     0,    33,     0,     0,     0,     0,   508,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   411,     0,     0,     0,     0,     0,     0,     0,
     411,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1024,     0,  1030,     0,     0,    88,  1032,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
       0,     0,  1121,     0,     0,     0,   411,     0,     0,     0,
     411,     0,     0,     0,     0,     0,     0,     0,  1129,   508,
       0,     0,   300,   301,   302,   303,   304,   305,   306,     0,
    1135,     0,   639,     0,  1138,     0,  1139,     0,     0,   508,
     307,   308,   309,     0,     0,     0,     0,     0,     0,  1151,
       0,     0,     0,  1153,     0,     0,     0,  1155,     0,     0,
       0,     0,   325,     0,     0,     0,     0,  1158,    33,   310,
       0,   311,     0,     0,   640,   641,     0,     0,     0,  1169,
       0,   204,   205,   206,   642,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   502,   280,     0,
       0,     0,     0,     0,     0,     0,     0,   503,     0,   643,
     395,   644,   645,     0,   646,   647,    88,   249,   250,   251,
     648,   253,   254,   255,   256,   257,   258,   259,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     395,     0,   395,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   395,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   600,   242,     0,   243,   244,   245,   246,     0,
     601,   248,   602,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   600,   242,
     606,   243,   244,   245,   246,     0,   601,   248,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   600,   242,     0,   243,   244,   245,
     246,     0,   601,   248,   612,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     600,   242,     0,   243,   244,   245,   246,   615,   601,   248,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   600,   242,   633,   243,
     244,   245,   246,     0,   601,   248,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   600,   242,   702,   243,   244,   245,   246,     0,
     601,   248,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   600,   242,
     939,   243,   244,   245,   246,     0,   601,   248,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   600,   242,  1177,   243,   244,   245,
     246,     0,   601,   248,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     600,   242,  1182,   243,   244,   245,   246,     0,   601,   248,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   613,   242,     0,   243,
     244,   245,   246,     0,   601,   248,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,   229,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   739,   242,     0,   243,   244,   245,   246,     0,
     601,   248,     0,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   260,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,  1146,   601,   248,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1178,   242,     0,   243,   244,   245,
     246,     0,   601,   248,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
     229,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1186,   242,     0,   243,   244,   245,   246,     0,   601,   248,
       0,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   260,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,   229,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   242,     0,   243,
     244,   245,   246,     0,   247,   248,     0,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   260,   151,
     152,   153,   154,   155,   156,   157,   445,   446,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     574,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     575,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   576,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   970,   577,   971,   578,   579,   580,   447,     0,
     581,   582,     0,   249,   250,   251,   583,   253,   254,   255,
     256,   257,   258,   259,   584,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   242,
       0,   243,   244,   245,   246,     0,   601,   248,     0,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     260,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   242,     0,   243,   244,   245,
     246,     0,     0,   248,     0,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   260,   151,   152,   153,
     154,   155,   156,   157,   445,   446,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   574,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   575,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     0,   576,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   577,     0,   578,   579,   580,   447,   893,   581,   582,
       0,   249,   250,   251,   583,   253,   254,   255,   256,   257,
     258,   259,   584,   151,   152,   153,   154,   155,   156,   157,
     445,   446,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   574,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   575,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,     0,   576,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   577,     0,   578,
     579,   580,   447,   894,   581,   582,     0,   249,   250,   251,
     583,   253,   254,   255,   256,   257,   258,   259,   584,   151,
     152,   153,   154,   155,   156,   157,   445,   446,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     574,   173,   174,   175,   176,   177,   178,   179,   180,     0,
       0,   181,   182,   183,   184,   185,   186,     0,   187,   188,
     189,   190,     0,     0,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     575,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
       0,   576,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   577,     0,   578,   579,   580,   447,   895,
     581,   582,     0,   249,   250,   251,   583,   253,   254,   255,
     256,   257,   258,   259,   584,   151,   152,   153,   154,   155,
     156,   157,   445,   446,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   574,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   575,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     0,   576,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   577,
       0,   578,   579,   580,   447,     0,   581,   582,   969,   249,
     250,   251,   583,   253,   254,   255,   256,   257,   258,   259,
     584,   151,   152,   153,   154,   155,   156,   157,   445,   446,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   574,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   575,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,     0,   576,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   577,     0,   578,   579,   580,
     447,     0,   581,   582,   974,   249,   250,   251,   583,   253,
     254,   255,   256,   257,   258,   259,   584,   151,   152,   153,
     154,   155,   156,   157,   445,   446,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   574,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   575,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     0,   576,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   577,     0,   578,   579,   580,   447,     0,   581,   582,
       0,   249,   250,   251,   583,   253,   254,   255,   256,   257,
     258,   259,   584,   151,   152,   153,   154,   155,   156,   157,
     445,   446,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   574,   173,   174,   175,   176,   177,
     178,   179,   180,     0,     0,   181,   182,   183,   184,   185,
     186,     0,   187,   188,   189,   190,     0,     0,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   438,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,     0,   576,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   577,     0,   836,
     579,   837,   447,     0,   838,   582,     0,   249,   250,   251,
     439,   253,   254,   255,   256,   257,   258,   259,   584,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,     0,
       0,  -622,  -622,  -622,  -622,  -622,  -622,     0,  -622,  -622,
    -622,  -622,     0,     0,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
       0,  -622,     0,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  -622,     0,  -658,  -622,  -622,  -622,     0,
    -622,  -622,     0,  -622,  -622,  -622,  -622,  -622,  -622,  -622,
    -622,  -622,  -622,  -622,  -622,   151,   152,   153,   154,   155,
     156,   157,   445,   446,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   574,   173,   174,   175,
     176,   177,   178,   179,   180,     0,     0,   181,   182,   183,
     184,   185,   186,     0,   187,   188,   189,   190,     0,     0,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   868,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,     0,   576,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   577,
       0,     0,   579,     0,   447,     0,   869,   582,     0,   249,
     250,   251,   870,   253,   254,   255,   256,   257,   258,   259,
     584,   151,   152,   153,   154,   155,   156,   157,   445,   446,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   574,   173,   174,   175,   176,   177,   178,   179,
     180,     0,     0,   181,   182,   183,   184,   185,   186,     0,
     187,   188,   189,   190,     0,     0,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,     0,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,     0,   576,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   577,     0,     0,   579,     0,
     447,     0,   838,   582,     0,   249,   250,   251,     0,   253,
     254,   255,   256,   257,   258,   259,   584,   151,   152,   153,
     154,   155,   156,   157,   445,   446,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   574,   173,
     174,   175,   176,   177,   178,   179,   180,     0,     0,   181,
     182,   183,   184,   185,   186,     0,   187,   188,   189,   190,
       0,     0,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,     0,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   577,     0,     0,   579,     0,   447,     0,     0,   582,
       0,   249,   250,   251,     0,   253,   254,   255,   256,   257,
     258,   259,   584,   273,   274,   275,   276,   277,   278,   279,
       0,     0,   639,     0,     0,     0,     0,     0,     0,     0,
       0,   169,   170,   171,     0,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   280,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,   640,   641,     0,     0,     0,     0,
       0,   204,   205,   206,   642,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   474,   475,   476,   477,   478,   479,
     480,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,     0,     0,     0,     0,   643,
       0,   644,   645,     0,   646,   647,     0,   249,   250,   251,
     648,   253,   254,   255,   256,   257,   258,   259,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,    15,    16,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,  1002,  1003,    31,    32,
       0,     0,     0,     0,    33,    34,    35,     0,  1004,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
    1005,  1006,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,    88,     0,     0,     0,     0,     0,     0,     0,
      13,    14,    15,    16,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,    30,    31,    32,     0,     0,     0,     0,    33,    34,
      35,    36,    37,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,     0,    87,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,     0,    13,    14,    15,     0,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,   280,    31,   358,     0,     0,
       0,     0,    33,    34,     0,     0,   359,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,     0,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   502,   280,
      13,    14,    15,     0,    17,    18,    19,    20,   503,     0,
      88,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,   280,    31,   358,     0,     0,     0,     0,    33,    34,
       0,     0,     0,     0,     0,   421,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,  -273,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,   422,   423,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    13,    14,    15,     0,
      17,    18,    19,    20,     0,     0,    88,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   280,    31,     0,
       0,     0,     0,     0,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     502,   280,    13,    14,    15,     0,    17,    18,    19,    20,
     503,     0,    88,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,   280,    31,     0,     0,     0,     0,     0,
      33,    34,     0,     0,     0,     0,     0,   421,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,     0,   422,   423,     0,
       0,     0,     0,   307,   308,   309,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,   300,   301,   302,   303,   304,   305,   306,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,    16,     0,     0,   300,   301,   302,   303,
     304,   305,   306,     0,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,   307,   308,   309,     0,    33,     0,
       0,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    31,   384,     0,     0,
       0,     0,    33,     0,     0,   300,   301,   302,   303,   304,
     305,   306,     0,     0,    38,     0,     0,     0,   521,     0,
       0,     0,   522,   307,   308,   309,    16,     0,     0,    88,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,     0,   522,
       0,     0,     0,     0,     0,     0,    88,   300,   301,   302,
     303,   304,   305,   306,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,     0,     0,
      88,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,     0,     0,
       0,     0,     0,    33,   310,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   307,   308,   309,     0,     0,     0,    88,
     300,   301,   302,   303,   304,   305,   306,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,   307,   308,
     309,    33,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,   384,     0,     0,     0,     0,    33,   300,   301,   302,
     303,   304,   305,   306,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,     0,     0,
       0,    88,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,   300,   301,   302,   303,   304,   305,   306,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    33,   300,
     301,   302,   303,   304,   305,   306,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   308,   309,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,   307,   308,   309,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   511,  1147,     0,     0,  1148,   300,   301,   302,
     303,   304,   305,   306,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,    16,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,     0,
       0,     0,     0,    33,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,   511,     0,     0,
       0,   512,   307,   308,   309,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   300,   301,   302,
     303,   304,   305,   306,     0,     0,    38,     0,     0,     0,
       0,  1147,     0,     0,  1148,   307,   308,   309,    16,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   273,   274,   275,   276,   277,
     278,   279,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,     0,    17,    18,    19,
      20,   512,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,    31,   358,     0,     0,    38,
       0,    33,    34,     0,     0,   359,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   273,   274,   275,   276,
     277,   278,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   170,   171,     0,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,   280,    31,     0,     0,     0,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   273,   274,   275,
     276,   277,   278,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   280,    31,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,   171,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   280,     0,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   273,
     274,   275,   276,   277,   278,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
       0,   743,     0,   744,    20,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   280,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     273,   274,   275,   276,   277,   278,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   170,
     171,     0,   300,   301,   302,   303,   304,   305,   306,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,   280,
     307,   308,   309,     0,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   384,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   251,     0,   253,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       9,    11,    13,    15,    17,    19,    21,    23,    25,    27,
      29,    31,    33,    35,    37,    39,    41,    43,    45,    47,
      49,    51,    53,    55,    57,    59,    61,    63,    65,     0,
       0,    67,    69,    71,    73,    75,    77,     0,    79,    81,
      83,    85,     0,     0,    87,    89,    91,    93,    95,    97,
      99,   101,   103,   105,   107,   109,   111,   113,   115,   117,
     119,   121,   123,   125,   127,   129,   131,   133,   135,   137,
     139,   141,   143,   145,   147,   149,   151,   153,   155,   157,
       0,   159,     0,   161,   163,   165,   167,   169,   171,   173,
     175,   177,   179,   181,   183,   185,   187,   189,   191,   193,
     195,   197,   199,   201,   203,   205,   207,   209,   211,   213,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   215,     0,     0,   217,   219,   221,     0,
     223,   225,     0,   227,   229,   231,   233,   235,   237,   239,
     241,   243,   245,   247,   249,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   408,     0,   408,     0,   408,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   658,     0,   658,     0,   658,     0,   658,     0,   658,
       0,   408,     0,   408,     0
};

static const short int yycheck[] =
{
       5,     5,   124,     5,     5,   127,   103,     5,    35,   435,
       5,    35,   132,   327,   452,   327,   558,   125,   461,     5,
     871,    36,   443,   111,   607,   718,   124,   114,   115,   116,
     708,    35,    37,   242,     5,   709,   420,    35,   124,   248,
     434,   700,   524,   271,   290,   549,   132,   750,   849,   756,
       5,    37,   355,   756,   977,   327,   138,   558,     3,    24,
     453,   270,   933,     3,    10,    11,     3,   616,   617,   618,
      24,     3,    64,    24,     3,    24,   950,   922,    24,   556,
      10,    11,    37,    10,    11,   982,     3,  1111,    85,   298,
      64,    32,    10,    11,    64,   533,     3,     4,     5,     6,
       7,     8,     9,   417,   542,   132,    26,   111,   132,    85,
     125,    24,     3,     0,     3,    32,   136,  1141,    32,   124,
     125,   141,   127,    85,    12,   111,   709,   136,    45,    24,
      50,    48,    78,   142,   132,   124,    37,     0,    84,   136,
     111,   834,   943,   625,    24,   142,   132,   144,    78,   141,
      67,    85,   629,    32,    84,   697,    44,  1002,   150,   473,
     142,   473,    46,   372,   286,    29,    30,    31,   144,   124,
     125,   137,   127,  1047,   420,   140,   150,   142,   599,   142,
     150,  1052,   144,  1034,   281,   734,   283,   736,   142,   140,
      32,   136,   137,   142,   901,   140,   697,   137,   901,   136,
     140,   473,   148,   149,   136,   327,   328,   136,   137,   150,
     144,   140,   716,    85,   528,   142,    78,  1114,   148,   149,
    1143,   899,   139,   142,   142,   126,   139,   128,   129,   733,
     137,   713,   142,   626,   627,   942,   150,    85,   541,   942,
     543,   136,   636,   142,   558,   136,   137,   136,   137,   140,
     142,   140,   136,   137,    10,    11,   136,  1108,    12,    85,
      32,    85,   289,   136,    19,   289,   142,   272,    85,   142,
     948,   150,   144,   980,   138,    85,   983,   980,    85,    85,
     983,   286,   368,  1149,   962,   142,   148,   149,   410,    85,
      44,   289,   137,   136,   139,   417,   144,   286,  1099,   142,
      55,    56,  1168,   142,  1170,   310,   311,   404,   150,   406,
     136,   142,   410,   142,  1180,   142,   142,   272,   144,   136,
     144,   567,   327,   328,   410,   142,   136,   144,    84,   136,
     136,   286,   142,   430,   144,   142,   142,   144,   327,   461,
     137,   368,   328,   140,     5,  1038,  1005,   136,   144,   354,
     142,   473,   357,   142,   359,   310,   311,  1064,    85,   456,
     457,  1064,   366,   136,   137,    85,   142,   140,   354,   451,
    1044,   453,   327,   328,    35,    85,   622,  1055,   150,    26,
     366,   142,   368,   697,   145,   142,   287,   288,     3,     4,
       5,     6,     7,     8,     9,   366,   136,    44,   142,   354,
     709,   141,   357,    50,   359,   410,   528,   515,   136,   136,
     142,   132,   417,   136,   142,   142,   136,   144,   142,   142,
     729,   410,   142,   137,   144,   139,   136,   136,   329,   330,
     142,   417,   142,   142,    49,   138,   558,  1111,   141,  1098,
     142,   527,   564,   886,  1153,   142,   461,   452,   136,   454,
     111,   548,    32,   354,   142,   410,   461,   136,  1167,   464,
    1169,  1044,   417,   142,    25,    26,   452,  1141,   473,   142,
      85,   132,  1181,   136,     3,     4,     5,     6,     7,     8,
       9,   136,   136,   142,   473,   136,   145,   142,   389,   390,
     391,   142,   701,    32,    33,   436,   437,   452,    85,   454,
     527,   442,   443,   444,  1163,  1164,   461,   136,   934,   464,
     515,   516,   144,   142,    13,    14,    15,    16,   473,   534,
      49,   526,   463,   528,   529,   137,   515,   136,   533,   534,
     516,   472,   136,   142,   136,   148,   149,   542,   142,   544,
     142,   527,   528,   137,   626,   627,   140,   533,    12,   564,
     139,   452,  1094,   558,   136,   136,   542,   436,   437,   564,
     515,   516,   871,   442,   443,   444,   137,   144,   289,   558,
     150,   526,    84,   528,   529,   697,   140,    24,   533,   687,
     352,   137,   142,   355,   463,  1127,   136,   542,   141,   544,
     531,    29,    30,    31,   436,   437,   980,   141,   141,   141,
     442,   443,   444,   558,   609,   609,    32,   141,    34,   564,
     611,   609,   553,   141,  1035,   141,   517,   518,   141,    45,
     141,   463,    48,   141,   933,   141,   141,   141,   289,   136,
     858,   141,   533,     3,     4,     5,     6,     7,     8,     9,
     143,   542,   143,   141,  1070,   136,   143,   368,   137,   145,
     137,   143,   531,   146,   609,   138,   146,    44,   599,   380,
     136,   433,   136,   136,   436,   437,     3,   145,   673,   751,
     442,   443,   444,   145,   679,   143,   146,   143,   141,   451,
     141,   453,   687,  1121,   143,   141,   140,   769,   139,   531,
     136,   463,   697,   141,   143,    84,  1117,   136,   687,   136,
     145,    26,   146,   136,   136,   366,   141,   368,   697,   138,
     146,    37,  1026,  1151,  1026,  1153,   146,   140,   673,   143,
     599,   949,  1148,   141,   679,  1034,   141,   141,   136,   141,
     143,  1169,   687,   143,   635,  1044,   143,   143,   743,   744,
     745,   143,   697,  1052,   143,  1166,   143,   143,   143,   143,
     143,  1177,   143,   141,   136,    84,   146,   599,   139,   531,
     146,   136,   141,  1184,   886,   143,    13,    13,   136,   541,
      47,   543,   143,   146,   143,   137,   143,   143,   143,  1093,
    1094,  1093,   143,   143,   685,   686,   143,     5,   743,   744,
     745,   922,   922,   890,   930,  1031,   810,   922,   922,  1108,
     922,   573,  1111,   819,  1077,   706,   527,   922,   621,   769,
     622,   922,   881,  1127,     5,   922,  1002,   535,   825,  1040,
     825,  1101,   922,   506,   505,   137,   867,   599,    25,    26,
      27,  1174,  1141,   863,   692,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   609,    42,   747,   748,   733,   922,
     429,   429,   964,   433,   626,   627,   436,   437,   563,   878,
     945,    -1,   442,   443,   444,   824,   527,    -1,    -1,    -1,
     825,   886,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   976,
    1002,   886,    -1,   463,    -1,    -1,   827,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1018,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1026,  1027,    -1,  1027,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   922,   922,   924,
     922,   922,     5,   928,   922,   930,    -1,   922,    -1,  1027,
    1018,   886,    -1,  1020,    -1,    -1,   922,   709,  1147,    -1,
      -1,  1027,   714,    -1,    -1,    -1,   950,  1156,   827,    -1,
      -1,   531,    -1,    -1,    37,    -1,    -1,   729,  1080,    -1,
      -1,    -1,    -1,    -1,  1086,    -1,  1088,   922,  1050,   924,
      -1,  1093,  1094,   928,    -1,   930,    -1,    -1,   290,    -1,
      -1,    -1,  1080,    -1,    -1,   827,   758,   759,   760,  1077,
    1088,  1078,    -1,    -1,  1080,    -1,    -1,  1002,  1002,  1004,
    1027,  1002,  1088,  1027,    -1,  1127,  1128,    -1,  1105,    -1,
      -1,    -1,    -1,  1018,  1018,    -1,  1018,  1018,  1004,   599,
      -1,  1026,  1027,  1018,    -1,    -1,  1031,    -1,   749,  1027,
    1128,     4,  1018,    -1,    -1,    -1,    -1,  1026,    -1,  1136,
      -1,  1027,  1128,    -1,   127,    -1,    -1,  1002,    -1,  1004,
      -1,    -1,    -1,    -1,    -1,   827,    -1,   369,    -1,    -1,
      -1,  1088,    -1,  1018,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1026,  1027,  1077,    -1,  1080,  1031,    -1,    -1,  1094,
      -1,  1086,  1086,  1088,  1086,  1086,    -1,    -1,  1093,  1094,
      -1,  1086,    -1,    -1,  1035,    -1,     5,    -1,    -1,   871,
    1086,  1128,  1088,  1004,  1093,   877,   878,   879,   420,    -1,
      -1,    -1,  1127,    -1,   132,    -1,  1121,    -1,    -1,    -1,
      -1,    -1,  1127,  1128,    -1,  1080,    35,   100,    -1,   709,
      -1,  1086,   105,  1088,    -1,  1121,    -1,    -1,  1093,  1094,
      -1,    -1,  1128,    -1,    -1,    -1,  1151,    -1,  1153,   729,
     123,    -1,    -1,    -1,    -1,   128,  1035,    -1,    -1,    -1,
     133,   933,    -1,     5,  1169,  1151,  1121,  1153,    -1,   142,
     143,    -1,  1127,  1128,    -1,    -1,  1117,    -1,   758,   759,
     760,    -1,    -1,  1169,    -1,    -1,    -1,    -1,    -1,   272,
      -1,    -1,   964,  1035,   506,    37,  1151,    -1,  1153,    -1,
      -1,    -1,   111,    -1,    -1,    -1,    -1,    -1,    -1,   981,
     119,    -1,    -1,    -1,  1169,    -1,    -1,    -1,    -1,    -1,
    1121,    -1,    -1,    -1,  1165,  1166,    -1,   310,   311,    -1,
      -1,    -1,  1173,    -1,    -1,    -1,    -1,    -1,  1117,    -1,
      -1,    -1,    -1,  1184,    -1,   328,    -1,   827,    -1,    -1,
    1151,    -1,  1153,    -1,    -1,   567,    -1,    -1,    -1,    -1,
      -1,   922,  1034,  1035,   125,    -1,    -1,    -1,  1169,    -1,
      -1,   289,  1044,    -1,   357,  1117,   359,    -1,    -1,    -1,
    1052,    -1,    -1,    -1,    -1,  1057,  1165,  1166,    -1,    -1,
      -1,   871,    -1,    -1,  1173,    -1,    -1,   877,   878,   879,
      -1,    -1,    -1,    -1,    -1,  1184,  1027,    -1,    -1,   282,
     622,   284,   285,    -1,   287,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1165,  1166,    -1,    -1,    -1,    -1,    -1,
      -1,  1173,    -1,    -1,   352,    -1,  1108,   355,    -1,  1111,
      -1,  1002,  1184,    -1,    -1,  1117,    -1,    -1,    -1,    -1,
     368,    -1,   325,   933,    -1,    -1,    -1,  1018,    -1,  1080,
      -1,    -1,   380,    -1,    -1,  1137,  1027,  1088,    -1,  1141,
      -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   464,    -1,    -1,   964,  1157,    -1,    -1,    -1,    -1,
     363,    -1,    -1,  1165,  1166,    -1,    -1,    -1,    -1,    -1,
      -1,  1173,    -1,    -1,    -1,    -1,   379,  1128,    -1,    -1,
      -1,    -1,  1184,    -1,    -1,    -1,  1077,    -1,    -1,  1080,
      -1,    -1,    -1,    -1,    -1,  1086,    -1,  1088,    -1,    -1,
     272,    -1,   405,   451,   407,   453,    -1,    -1,   411,    -1,
      -1,    -1,    -1,   526,    -1,    -1,   529,    -1,   421,   422,
     423,    -1,    -1,    -1,  1034,  1035,    -1,   366,    -1,    -1,
      -1,   544,    -1,  1124,  1044,    -1,    -1,  1128,   310,   311,
     331,    -1,  1052,    -1,   335,   336,   449,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,    -1,    -1,   354,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   814,    -1,    -1,    -1,    -1,    -1,    -1,   527,
      -1,    -1,    -1,    -1,   826,   357,    -1,   359,    -1,    -1,
      -1,    -1,    -1,   541,    -1,   543,   609,    -1,  1108,    -1,
      -1,  1111,    -1,    -1,   507,    -1,    -1,  1117,    -1,    -1,
      -1,   514,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   525,    -1,    -1,   573,    -1,    -1,    -1,    -1,
      -1,  1141,    -1,   472,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   552,
      -1,    -1,    -1,    -1,   557,  1165,  1166,    -1,    -1,    -1,
     673,   452,    -1,  1173,    -1,    -1,   679,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1184,    -1,    -1,    -1,   626,   627,
      -1,    -1,   454,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   482,   483,   484,    -1,    -1,   487,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   515,    -1,    -1,   630,    -1,   520,
     743,   744,   745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   533,     3,     4,     5,     6,     7,     8,     9,
      -1,   542,    -1,    -1,   526,    -1,    -1,   529,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,   714,    -1,    -1,    29,
      30,    31,   544,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,   684,    -1,    -1,    -1,    -1,  1028,    -1,  1030,    49,
    1032,    -1,    -1,   696,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   749,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   825,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   660,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1081,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   687,    -1,    -1,    -1,
      -1,   673,   805,    -1,    -1,    -1,   697,    -1,    -1,   922,
      -1,   924,    -1,    -1,   817,   928,    -1,   930,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   828,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   774,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   782,    -1,    -1,    -1,   786,   787,    -1,
      -1,   790,   791,   792,   793,   794,   795,   796,   797,   798,
     799,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   743,   744,   745,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   888,    -1,    -1,    -1,    -1,
      -1,  1004,    -1,   832,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,  1031,    -1,
      -1,    -1,    -1,   926,    -1,    -1,    -1,    -1,   819,    21,
      22,    23,    -1,   981,    -1,    -1,    -1,    29,    30,    31,
      -1,   944,    -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   825,    -1,    -1,    -1,    49,     3,     4,
       5,     6,     7,     8,     9,    -1,   905,    -1,    -1,   908,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,  1027,
      -1,    -1,    -1,   922,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,  1047,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,  1057,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1080,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1088,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     922,    -1,   924,    -1,    -1,   147,   928,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,  1075,    -1,    -1,    -1,  1124,    -1,    -1,    -1,
    1128,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1091,  1137,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
    1103,    -1,    12,    -1,  1107,    -1,  1109,    -1,    -1,  1157,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,  1122,
      -1,    -1,    -1,  1126,    -1,    -1,    -1,  1130,    -1,    -1,
      -1,    -1,  1004,    -1,    -1,    -1,    -1,  1140,    49,    50,
      -1,    52,    -1,    -1,    54,    55,    -1,    -1,    -1,  1152,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    -1,   139,
    1121,   141,   142,    -1,   144,   145,   147,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1151,    -1,  1153,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,  1169,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,    -1,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,
     140,   141,   142,    -1,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,   138,   139,   140,   141,   142,    -1,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,
     140,   141,   142,    -1,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,    -1,   139,   140,   141,   142,    -1,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,   140,   141,   142,   143,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,
     142,    -1,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     136,   137,    -1,   139,   140,   141,   142,    -1,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
     140,   141,   142,    -1,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,   140,   141,   142,    -1,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,
     142,    -1,    -1,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,   140,   141,   142,   143,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
     140,   141,   142,   143,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,   143,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,   139,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,   139,   140,   141,   142,    -1,   144,   145,
      -1,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    -1,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,
     140,   141,   142,    -1,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      -1,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    -1,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,    -1,
     144,   145,    -1,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,   158,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    -1,    -1,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,
      -1,    -1,   140,    -1,   142,    -1,   144,   145,    -1,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,   140,    -1,
     142,    -1,   144,   145,    -1,   147,   148,   149,    -1,   151,
     152,   153,   154,   155,   156,   157,   158,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    -1,    -1,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    -1,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   137,    -1,    -1,   140,    -1,   142,    -1,    -1,   145,
      -1,   147,   148,   149,    -1,   151,   152,   153,   154,   155,
     156,   157,   158,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,   139,
      -1,   141,   142,    -1,   144,   145,    -1,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    53,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,
      51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,    -1,   136,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    -1,    -1,
      -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      21,    22,    23,    -1,    25,    26,    27,    28,    51,    -1,
     147,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   136,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,   148,   149,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,   147,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    21,    22,    23,    -1,    25,    26,    27,    28,
      51,    -1,   147,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,
      -1,    -1,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    24,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    49,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    43,    44,    -1,    -1,
      -1,    -1,    49,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    85,    -1,    -1,    -1,   136,    -1,
      -1,    -1,   140,    21,    22,    23,    24,    -1,    -1,   147,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,   140,
      -1,    -1,    -1,    -1,    -1,    -1,   147,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
     147,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,   147,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    49,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    -1,    49,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,   147,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,     3,     4,     5,     6,     7,     8,     9,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    49,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,    -1,    -1,   140,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,   140,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   137,    -1,    -1,   140,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,   140,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    -1,    -1,    85,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,     3,     4,     5,     6,     7,     8,     9,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      21,    22,    23,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   160,   161,     0,   162,   369,     3,     4,     5,     6,
       7,     8,     9,    21,    22,    23,    24,    25,    26,    27,
      28,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      42,    43,    44,    49,    50,    51,    52,    53,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   136,   147,   163,
     164,   165,   166,   167,   169,   170,   171,   172,   173,   175,
     178,   193,   194,   195,   197,   198,   208,   209,   218,   220,
     221,   223,   241,   242,   243,   244,   247,   248,   251,   257,
     291,   321,   322,   323,   324,   326,   327,   328,   329,   331,
     333,   334,   337,   338,   339,   340,   341,   343,   344,   347,
     348,   359,   360,   361,   370,   373,   371,    25,    26,    12,
      44,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    35,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   137,   139,   140,   141,   142,   144,   145,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   360,   361,   398,   399,   400,   430,   431,   432,   433,
     434,   332,   349,     3,     4,     5,     6,     7,     8,     9,
      42,   173,   178,   195,   198,   323,   324,   329,   331,   337,
     343,     3,     4,     5,     6,     7,     8,     9,   137,   334,
       3,     4,     5,     6,     7,     8,     9,    21,    22,    23,
      50,    52,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   219,   321,   323,   324,   328,   329,
     331,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   335,   174,   369,   335,   137,   369,    44,    53,
     164,   171,   172,   198,   204,   221,   223,   241,   337,   343,
      46,   136,   137,   267,   268,   267,   267,   267,   142,   178,
     337,   343,   136,   369,    44,   248,   272,   275,   322,   327,
     329,   331,   180,   329,   331,   333,   334,   328,   322,   323,
     328,   369,   328,   144,   173,   178,   195,   198,   209,   248,
     324,   338,   347,   369,    10,    11,    84,   235,   292,   301,
     303,    78,   148,   149,   297,   362,   363,   364,   365,   368,
     345,   369,   369,   406,   137,   430,   426,   426,    64,   150,
     224,   416,   426,   427,   426,    10,    11,   142,   420,   321,
      12,   335,   369,   335,   369,   322,   173,   195,   213,   214,
     217,   235,   301,   426,   139,   168,   321,   321,   136,   369,
     251,   256,   257,   324,     3,     4,     5,     6,     7,     8,
       9,   333,   375,   378,   379,   333,   333,   383,   333,   333,
     333,   333,   333,   333,   333,   333,   333,   333,   333,   333,
     333,   333,    41,    51,   293,   296,   297,   336,   338,   361,
     137,   136,   140,   179,   180,   324,   328,   329,   331,   293,
     196,   136,   140,   199,   321,   321,   369,   337,   235,   140,
     277,   426,   249,   369,   325,   273,   142,   328,   328,   328,
     330,   335,   369,   335,   369,   248,   272,   369,   346,   304,
     252,   254,   256,   257,   258,   270,   311,   322,   324,   294,
     139,   287,   288,   290,   235,   301,   310,   362,   369,   369,
     369,   363,   365,   335,    24,    64,    85,   137,   139,   140,
     141,   144,   145,   150,   158,   360,   361,   372,   398,   399,
     400,   404,   405,   407,   408,   417,   420,   424,   161,   427,
     136,   144,   146,   428,   429,   430,   138,   225,   227,   228,
     230,   232,   146,   136,   429,   143,   422,   423,   421,   369,
     210,   212,   297,   179,   210,   321,   335,   335,   211,   311,
     322,   329,   331,   138,   323,   329,   137,   136,   139,    12,
      54,    55,    64,   139,   141,   142,   144,   145,   150,   397,
     398,   251,   256,   141,   333,   333,   333,   141,   141,   333,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   143,   143,   141,   136,   294,   292,   369,   182,   177,
       3,   136,   181,   369,   180,   329,   331,   324,   136,   201,
     202,   333,   200,   199,   369,   321,   322,   324,   278,   279,
     321,   137,   138,   280,   281,   179,   329,   277,   276,   410,
     293,   179,   293,   321,   335,   341,   342,   367,   253,   369,
     259,   313,   314,   315,   369,   252,   258,   136,   141,   289,
     424,   143,   301,   366,   419,   425,   418,   146,   138,   136,
     146,   141,   416,    25,    27,   198,   323,   329,   331,   337,
     354,   355,   358,   359,    26,    50,   236,   223,   406,   406,
     406,   136,   211,   217,   136,   199,   210,   210,   136,   141,
     142,   369,   136,   161,   222,     3,   145,   145,    64,   150,
     143,   146,   374,   141,   143,   143,   380,   382,   141,   343,
     386,   388,   390,   392,   387,   389,   391,   393,   394,   395,
     321,    29,    30,    31,   138,   183,   184,    29,    30,    31,
      37,   188,   189,   192,   321,   140,   369,   180,   138,   141,
     139,   344,   136,   369,   333,   141,   433,   426,   143,    84,
     282,   284,   285,   328,   274,   280,   139,   141,   144,   404,
     412,   413,   414,   416,   136,   136,   136,   199,   341,   259,
     142,     3,    32,    45,    48,    67,   139,   260,   262,   263,
     264,   265,   145,   316,   317,   140,   142,   295,    64,   144,
     150,   401,   402,   404,   414,   302,   367,   406,   411,   406,
     146,   226,   321,   321,   321,   347,   235,   298,   303,   297,
     356,   298,    26,   143,   143,   143,   136,   136,   212,   215,
     138,   343,   146,   146,   343,   376,   343,   343,   384,   143,
     343,   343,   343,   343,   343,   343,   343,   343,   343,   343,
     141,   396,   369,   140,   191,   192,   141,    37,   190,   235,
     176,   369,   202,   203,   139,   205,   431,   279,   235,   138,
     369,   141,   343,   259,   143,   415,   136,   264,   255,   261,
     266,    19,    55,    56,   420,   318,   317,    13,    14,    15,
      16,   312,   271,   296,   403,   402,   142,   305,   314,   146,
     136,   138,   408,   409,   146,   227,   357,   300,   311,   229,
     369,   335,   231,   233,   280,   298,   143,   343,   381,   143,
     343,   143,   143,   143,   143,   143,   143,   143,   143,   141,
     141,   143,    41,    42,    53,   135,   136,   165,   170,   172,
     185,   186,   187,   193,   194,   208,   218,   221,   223,   245,
     246,   247,   272,   291,   321,   322,   324,   337,   343,   373,
     321,   369,   321,   188,   401,   427,   136,   269,   250,    84,
     283,   298,   264,   369,   410,   280,   420,   337,   348,   350,
     351,   319,   320,   280,   405,   306,   146,   335,   305,   139,
     237,   238,   298,   309,   362,   237,   298,   143,   136,   377,
     141,   385,    13,    13,   170,   178,   206,   223,   246,   322,
     337,   343,   433,   172,   186,   221,   223,   245,   337,   267,
     136,   256,   272,   324,   235,   235,   189,   235,    47,   259,
     284,   286,   416,   143,   348,   352,   297,   146,   401,   143,
     280,   239,   143,   298,   234,   216,   143,   427,   143,   143,
     143,   369,   178,   206,   337,   267,   178,   235,   337,   369,
     256,   258,   433,   264,   287,   369,   353,   335,   369,   369,
     143,   240,   412,   299,   237,   308,   143,   137,   140,   179,
     207,   369,   178,   369,   136,   369,   137,   335,   369,   412,
     305,    32,    34,    45,    48,   426,   427,   181,   179,   369,
     179,   207,   136,   426,   307,   433,   433,   138,   136,   207,
     179,   181,   138,   308,   427,   207,   136
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N) ((void) 0)
#endif


#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */
#define YYLEX yylex ()

YYSTYPE yylval;

YYLTYPE yylloc;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                                                             \
   do { YYRESULTTAG yyflag = YYE; if (yyflag != yyok) return yyflag; }             \
   while (YYID (0))

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                                \
  if (yydebug)                                        \
    YYFPRINTF Args;                                \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
        break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                            \
do {                                                                            \
  if (yydebug)                                                                    \
    {                                                                            \
      YYFPRINTF (stderr, "%s ", Title);                                            \
      yy_symbol_print (stderr, Type,                                            \
                       Value);  \
      YYFPRINTF (stderr, "\n");                                                    \
    }                                                                            \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef        YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
# if (! defined __cplusplus \
      || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL))
#  define YYSTACKEXPANDABLE 1
# else
#  define YYSTACKEXPANDABLE 0
# endif
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                        \
  do {                                                        \
    if (Yystack->yyspaceLeft < YYHEADROOM)                \
      yyexpandGLRStack (Yystack);                        \
  } while (YYID (0))
#else
# define YY_RESERVE_GLRSTACK(Yystack)                        \
  do {                                                        \
    if (Yystack->yyspaceLeft < YYHEADROOM)                \
      yyMemoryExhausted (Yystack);                        \
  } while (YYID (0))
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef short int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the first token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
  /** Source location for this state.  */
  YYLTYPE yyloc;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  YYLTYPE yyloc;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static void yyFail (yyGLRStack* yystackp, const char* yymsg)
  __attribute__ ((__noreturn__));
static void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != NULL)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static void yyMemoryExhausted (yyGLRStack* yystackp)
  __attribute__ ((__noreturn__));
static void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) __attribute__ ((__unused__));
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  yyGLRState* s;
  int i;
  s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
      YYASSERT (s->yyresolved);
      yyvsp[i].yystate.yyresolved = yytrue;
      yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      yyvsp[i].yystate.yyloc = s->yyloc;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
/*ARGSUSED*/ static YYRESULTTAG
yyuserAction (yyRuleNum yyn, int yyrhslen, yyGLRStackItem* yyvsp,
              YYSTYPE* yyvalp,
              YYLTYPE* YYOPTIONAL_LOC (yylocp),
              yyGLRStack* yystackp
              )
{
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  int yylow;
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                                     \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  YYLLOC_DEFAULT ((*yylocp), (yyvsp - yyrhslen), yyrhslen);

  switch (yyn)
    {
        case 4:

/* Line 936 of glr.c  */
#line 1474 "vtkParse.y"
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 33:

/* Line 936 of glr.c  */
#line 1527 "vtkParse.y"
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 34:

/* Line 936 of glr.c  */
#line 1528 "vtkParse.y"
    { popNamespace(); }
    break;

  case 43:

/* Line 936 of glr.c  */
#line 1551 "vtkParse.y"
    { pushType(); }
    break;

  case 44:

/* Line 936 of glr.c  */
#line 1552 "vtkParse.y"
    {
      const char *name = (currentClass ? currentClass->Name : NULL);
      popType();
      clearTypeId();
      if (name)
        {
        setTypeId(name);
        setTypeBase(guess_id_type(name));
        }
      end_class();
    }
    break;

  case 45:

/* Line 936 of glr.c  */
#line 1566 "vtkParse.y"
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.integer);
    }
    break;

  case 47:

/* Line 936 of glr.c  */
#line 1572 "vtkParse.y"
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer);
    }
    break;

  case 48:

/* Line 936 of glr.c  */
#line 1577 "vtkParse.y"
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer));
    }
    break;

  case 50:

/* Line 936 of glr.c  */
#line 1582 "vtkParse.y"
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer));
    }
    break;

  case 51:

/* Line 936 of glr.c  */
#line 1587 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 52:

/* Line 936 of glr.c  */
#line 1588 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 53:

/* Line 936 of glr.c  */
#line 1589 "vtkParse.y"
    { ((*yyvalp).integer) = 2; }
    break;

  case 54:

/* Line 936 of glr.c  */
#line 1593 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 55:

/* Line 936 of glr.c  */
#line 1595 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 59:

/* Line 936 of glr.c  */
#line 1603 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 60:

/* Line 936 of glr.c  */
#line 1604 "vtkParse.y"
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), "final") == 0); }
    break;

  case 62:

/* Line 936 of glr.c  */
#line 1608 "vtkParse.y"
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 65:

/* Line 936 of glr.c  */
#line 1620 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 66:

/* Line 936 of glr.c  */
#line 1621 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 67:

/* Line 936 of glr.c  */
#line 1622 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 91:

/* Line 936 of glr.c  */
#line 1652 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 94:

/* Line 936 of glr.c  */
#line 1660 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 95:

/* Line 936 of glr.c  */
#line 1662 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer))); }
    break;

  case 96:

/* Line 936 of glr.c  */
#line 1665 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer))); }
    break;

  case 97:

/* Line 936 of glr.c  */
#line 1669 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 98:

/* Line 936 of glr.c  */
#line 1670 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 99:

/* Line 936 of glr.c  */
#line 1673 "vtkParse.y"
    { ((*yyvalp).integer) = access_level; }
    break;

  case 101:

/* Line 936 of glr.c  */
#line 1677 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
    break;

  case 102:

/* Line 936 of glr.c  */
#line 1678 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
    break;

  case 103:

/* Line 936 of glr.c  */
#line 1679 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
    break;

  case 109:

/* Line 936 of glr.c  */
#line 1701 "vtkParse.y"
    { pushType(); }
    break;

  case 110:

/* Line 936 of glr.c  */
#line 1702 "vtkParse.y"
    {
      popType();
      clearTypeId();
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.str) != NULL)
        {
        setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.str));
        setTypeBase(guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.str)));
        }
      end_enum();
    }
    break;

  case 111:

/* Line 936 of glr.c  */
#line 1715 "vtkParse.y"
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str);
    }
    break;

  case 112:

/* Line 936 of glr.c  */
#line 1721 "vtkParse.y"
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
    break;

  case 113:

/* Line 936 of glr.c  */
#line 1728 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 114:

/* Line 936 of glr.c  */
#line 1729 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 115:

/* Line 936 of glr.c  */
#line 1730 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 116:

/* Line 936 of glr.c  */
#line 1733 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 117:

/* Line 936 of glr.c  */
#line 1734 "vtkParse.y"
    { pushType(); }
    break;

  case 118:

/* Line 936 of glr.c  */
#line 1735 "vtkParse.y"
    { ((*yyvalp).integer) = getType(); popType(); }
    break;

  case 122:

/* Line 936 of glr.c  */
#line 1742 "vtkParse.y"
    { add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), NULL); }
    break;

  case 123:

/* Line 936 of glr.c  */
#line 1743 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 124:

/* Line 936 of glr.c  */
#line 1744 "vtkParse.y"
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str), copySig()); }
    break;

  case 147:

/* Line 936 of glr.c  */
#line 1804 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 148:

/* Line 936 of glr.c  */
#line 1805 "vtkParse.y"
    { postSig(")"); }
    break;

  case 149:

/* Line 936 of glr.c  */
#line 1806 "vtkParse.y"
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.integer)); popFunction(); }
    break;

  case 150:

/* Line 936 of glr.c  */
#line 1810 "vtkParse.y"
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer), getSig());

      if (getVarName())
        {
        item->Name = getVarName();
        }

      if (item->TypeName == NULL)
        {
        vtkParse_FreeValue(item);
        }
      else if (currentClass)
        {
        vtkParse_AddTypedefToClass(currentClass, item);
        }
      else
        {
        vtkParse_AddTypedefToNamespace(currentNamespace, item);
        }
    }
    break;

  case 151:

/* Line 936 of glr.c  */
#line 1843 "vtkParse.y"
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), 0); }
    break;

  case 153:

/* Line 936 of glr.c  */
#line 1847 "vtkParse.y"
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str); }
    break;

  case 154:

/* Line 936 of glr.c  */
#line 1849 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 155:

/* Line 936 of glr.c  */
#line 1851 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 156:

/* Line 936 of glr.c  */
#line 1853 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 157:

/* Line 936 of glr.c  */
#line 1855 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 158:

/* Line 936 of glr.c  */
#line 1858 "vtkParse.y"
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), 1); }
    break;

  case 159:

/* Line 936 of glr.c  */
#line 1861 "vtkParse.y"
    { markSig(); }
    break;

  case 160:

/* Line 936 of glr.c  */
#line 1863 "vtkParse.y"
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (8))].yystate.yysemantics.yysval.integer), copySig());

      item->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (8))].yystate.yysemantics.yysval.str);

      if (currentTemplate)
        {
        vtkParse_FreeValue(item);
        }
      else if (currentClass)
        {
        vtkParse_AddTypedefToClass(currentClass, item);
        }
      else
        {
        vtkParse_AddTypedefToNamespace(currentNamespace, item);
        }
    }
    break;

  case 161:

/* Line 936 of glr.c  */
#line 1893 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 162:

/* Line 936 of glr.c  */
#line 1895 "vtkParse.y"
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
    break;

  case 163:

/* Line 936 of glr.c  */
#line 1903 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
    break;

  case 165:

/* Line 936 of glr.c  */
#line 1914 "vtkParse.y"
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
    break;

  case 167:

/* Line 936 of glr.c  */
#line 1918 "vtkParse.y"
    { markSig(); }
    break;

  case 168:

/* Line 936 of glr.c  */
#line 1920 "vtkParse.y"
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig()); }
    break;

  case 170:

/* Line 936 of glr.c  */
#line 1922 "vtkParse.y"
    { markSig(); }
    break;

  case 171:

/* Line 936 of glr.c  */
#line 1924 "vtkParse.y"
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig()); }
    break;

  case 173:

/* Line 936 of glr.c  */
#line 1926 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 174:

/* Line 936 of glr.c  */
#line 1927 "vtkParse.y"
    { postSig("class "); }
    break;

  case 175:

/* Line 936 of glr.c  */
#line 1929 "vtkParse.y"
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
    break;

  case 177:

/* Line 936 of glr.c  */
#line 1940 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 178:

/* Line 936 of glr.c  */
#line 1941 "vtkParse.y"
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
    break;

  case 179:

/* Line 936 of glr.c  */
#line 1944 "vtkParse.y"
    { postSig("class "); }
    break;

  case 180:

/* Line 936 of glr.c  */
#line 1945 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 183:

/* Line 936 of glr.c  */
#line 1951 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 184:

/* Line 936 of glr.c  */
#line 1953 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
    break;

  case 187:

/* Line 936 of glr.c  */
#line 1970 "vtkParse.y"
    { output_function(); }
    break;

  case 188:

/* Line 936 of glr.c  */
#line 1971 "vtkParse.y"
    { output_function(); }
    break;

  case 189:

/* Line 936 of glr.c  */
#line 1972 "vtkParse.y"
    { reject_function(); }
    break;

  case 190:

/* Line 936 of glr.c  */
#line 1973 "vtkParse.y"
    { reject_function(); }
    break;

  case 198:

/* Line 936 of glr.c  */
#line 1989 "vtkParse.y"
    { output_function(); }
    break;

  case 208:

/* Line 936 of glr.c  */
#line 2007 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 209:

/* Line 936 of glr.c  */
#line 2012 "vtkParse.y"
    { postSig(")"); }
    break;

  case 210:

/* Line 936 of glr.c  */
#line 2014 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 211:

/* Line 936 of glr.c  */
#line 2025 "vtkParse.y"
    { ((*yyvalp).str) = copySig(); }
    break;

  case 212:

/* Line 936 of glr.c  */
#line 2028 "vtkParse.y"
    { postSig(")"); }
    break;

  case 213:

/* Line 936 of glr.c  */
#line 2030 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 214:

/* Line 936 of glr.c  */
#line 2040 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 216:

/* Line 936 of glr.c  */
#line 2049 "vtkParse.y"
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 217:

/* Line 936 of glr.c  */
#line 2052 "vtkParse.y"
    { markSig(); postSig("operator "); }
    break;

  case 218:

/* Line 936 of glr.c  */
#line 2056 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 221:

/* Line 936 of glr.c  */
#line 2068 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 222:

/* Line 936 of glr.c  */
#line 2068 "vtkParse.y"
    { chopSig(); }
    break;

  case 223:

/* Line 936 of glr.c  */
#line 2069 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 224:

/* Line 936 of glr.c  */
#line 2071 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 225:

/* Line 936 of glr.c  */
#line 2077 "vtkParse.y"
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
    break;

  case 226:

/* Line 936 of glr.c  */
#line 2081 "vtkParse.y"
    { chopSig(); }
    break;

  case 229:

/* Line 936 of glr.c  */
#line 2086 "vtkParse.y"
    { postSig(" noexcept"); }
    break;

  case 230:

/* Line 936 of glr.c  */
#line 2089 "vtkParse.y"
    { currentFunction->IsDeleted = 1; }
    break;

  case 234:

/* Line 936 of glr.c  */
#line 2096 "vtkParse.y"
    { postSig(" -> "); clearType(); clearTypeId(); }
    break;

  case 235:

/* Line 936 of glr.c  */
#line 2098 "vtkParse.y"
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 242:

/* Line 936 of glr.c  */
#line 2116 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 243:

/* Line 936 of glr.c  */
#line 2120 "vtkParse.y"
    { postSig(")"); }
    break;

  case 244:

/* Line 936 of glr.c  */
#line 2127 "vtkParse.y"
    { closeSig(); }
    break;

  case 245:

/* Line 936 of glr.c  */
#line 2128 "vtkParse.y"
    { openSig(); }
    break;

  case 246:

/* Line 936 of glr.c  */
#line 2130 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      if (getType() & VTK_PARSE_VIRTUAL)
        {
        currentFunction->IsVirtual = 1;
        }
      if (getType() & VTK_PARSE_EXPLICIT)
        {
        currentFunction->IsExplicit = 1;
        }
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 247:

/* Line 936 of glr.c  */
#line 2147 "vtkParse.y"
    { pushType(); postSig("("); }
    break;

  case 248:

/* Line 936 of glr.c  */
#line 2149 "vtkParse.y"
    { popType(); postSig(")"); }
    break;

  case 255:

/* Line 936 of glr.c  */
#line 2166 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 257:

/* Line 936 of glr.c  */
#line 2169 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 258:

/* Line 936 of glr.c  */
#line 2170 "vtkParse.y"
    { clearType(); clearTypeId(); postSig(", "); }
    break;

  case 260:

/* Line 936 of glr.c  */
#line 2173 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
    break;

  case 261:

/* Line 936 of glr.c  */
#line 2175 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 262:

/* Line 936 of glr.c  */
#line 2178 "vtkParse.y"
    { markSig(); }
    break;

  case 263:

/* Line 936 of glr.c  */
#line 2180 "vtkParse.y"
    {
      ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(param);

      handle_complex_type(param, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig());
      add_legacy_parameter(currentFunction, param);

      if (getVarName())
        {
        param->Name = getVarName();
        }

      vtkParse_AddParameterToFunction(currentFunction, param);
    }
    break;

  case 264:

/* Line 936 of glr.c  */
#line 2195 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = getVarValue();
        }
    }
    break;

  case 265:

/* Line 936 of glr.c  */
#line 2204 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 267:

/* Line 936 of glr.c  */
#line 2208 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 268:

/* Line 936 of glr.c  */
#line 2209 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 269:

/* Line 936 of glr.c  */
#line 2210 "vtkParse.y"
    { clearVarValue(); markSig(); }
    break;

  case 270:

/* Line 936 of glr.c  */
#line 2211 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 272:

/* Line 936 of glr.c  */
#line 2223 "vtkParse.y"
    {
      unsigned int type = getType();
      ValueInfo *var = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(var);
      var->ItemType = VTK_VARIABLE_INFO;
      var->Access = access_level;

      handle_complex_type(var, type, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), getSig());

      var->Name = getVarName();

      if (getVarValue())
        {
        var->Value = getVarValue();
        }

      /* Is this a typedef? */
      if ((type & VTK_PARSE_TYPEDEF) != 0)
        {
        var->ItemType = VTK_TYPEDEF_INFO;
        if (var->TypeName == NULL)
          {
          vtkParse_FreeValue(var);
          }
        else if (currentClass)
          {
          vtkParse_AddTypedefToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddTypedefToNamespace(currentNamespace, var);
          }
        }
      /* Is this a constant? */
      else if (((type & VTK_PARSE_CONST) != 0) && var->Value != NULL &&
          (((type & VTK_PARSE_INDIRECT) == 0) ||
           ((type & VTK_PARSE_INDIRECT) == VTK_PARSE_ARRAY)))
        {
        var->ItemType = VTK_CONSTANT_INFO;
        if (currentClass)
          {
          vtkParse_AddConstantToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddConstantToNamespace(currentNamespace, var);
          }
        }
      /* This is a true variable i.e. not constant */
      else
        {
        if (currentClass)
          {
          vtkParse_AddVariableToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddVariableToNamespace(currentNamespace, var);
          }
        }
    }
    break;

  case 276:

/* Line 936 of glr.c  */
#line 2289 "vtkParse.y"
    { postSig(", "); }
    break;

  case 279:

/* Line 936 of glr.c  */
#line 2295 "vtkParse.y"
    { setTypePtr(0); }
    break;

  case 280:

/* Line 936 of glr.c  */
#line 2296 "vtkParse.y"
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 281:

/* Line 936 of glr.c  */
#line 2301 "vtkParse.y"
    {
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
        {
        ((*yyvalp).integer) = (VTK_PARSE_FUNCTION_PTR | (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer));
        }
      else
        {
        ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer);
        }
    }
    break;

  case 282:

/* Line 936 of glr.c  */
#line 2311 "vtkParse.y"
    { postSig(")"); }
    break;

  case 283:

/* Line 936 of glr.c  */
#line 2313 "vtkParse.y"
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (6))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.integer));
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        ((*yyvalp).integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((6) - (6))].yystate.yysemantics.yysval.integer) == VTK_PARSE_ARRAY)
        {
        ((*yyvalp).integer) = add_indirection_to_array(parens);
        }
    }
    break;

  case 284:

/* Line 936 of glr.c  */
#line 2329 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 286:

/* Line 936 of glr.c  */
#line 2335 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer); }
    break;

  case 287:

/* Line 936 of glr.c  */
#line 2336 "vtkParse.y"
    { postSig(")"); }
    break;

  case 288:

/* Line 936 of glr.c  */
#line 2338 "vtkParse.y"
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (5))].yystate.yysemantics.yysval.integer));
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        ((*yyvalp).integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.integer) == VTK_PARSE_ARRAY)
        {
        ((*yyvalp).integer) = add_indirection_to_array(parens);
        }
    }
    break;

  case 289:

/* Line 936 of glr.c  */
#line 2354 "vtkParse.y"
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("*"); }
    break;

  case 290:

/* Line 936 of glr.c  */
#line 2355 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer); }
    break;

  case 291:

/* Line 936 of glr.c  */
#line 2356 "vtkParse.y"
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
    break;

  case 292:

/* Line 936 of glr.c  */
#line 2360 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 293:

/* Line 936 of glr.c  */
#line 2361 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 294:

/* Line 936 of glr.c  */
#line 2362 "vtkParse.y"
    { postSig(")"); }
    break;

  case 295:

/* Line 936 of glr.c  */
#line 2363 "vtkParse.y"
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
    break;

  case 296:

/* Line 936 of glr.c  */
#line 2367 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
    break;

  case 299:

/* Line 936 of glr.c  */
#line 2371 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 304:

/* Line 936 of glr.c  */
#line 2379 "vtkParse.y"
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 306:

/* Line 936 of glr.c  */
#line 2384 "vtkParse.y"
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 307:

/* Line 936 of glr.c  */
#line 2387 "vtkParse.y"
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 308:

/* Line 936 of glr.c  */
#line 2389 "vtkParse.y"
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 313:

/* Line 936 of glr.c  */
#line 2398 "vtkParse.y"
    { clearArray(); }
    break;

  case 315:

/* Line 936 of glr.c  */
#line 2402 "vtkParse.y"
    { clearArray(); }
    break;

  case 319:

/* Line 936 of glr.c  */
#line 2409 "vtkParse.y"
    { postSig("["); }
    break;

  case 320:

/* Line 936 of glr.c  */
#line 2410 "vtkParse.y"
    { postSig("]"); }
    break;

  case 321:

/* Line 936 of glr.c  */
#line 2413 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 322:

/* Line 936 of glr.c  */
#line 2414 "vtkParse.y"
    { markSig(); }
    break;

  case 323:

/* Line 936 of glr.c  */
#line 2414 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 329:

/* Line 936 of glr.c  */
#line 2428 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 330:

/* Line 936 of glr.c  */
#line 2429 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 331:

/* Line 936 of glr.c  */
#line 2433 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 332:

/* Line 936 of glr.c  */
#line 2435 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 333:

/* Line 936 of glr.c  */
#line 2437 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 334:

/* Line 936 of glr.c  */
#line 2441 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 335:

/* Line 936 of glr.c  */
#line 2443 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 336:

/* Line 936 of glr.c  */
#line 2445 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 337:

/* Line 936 of glr.c  */
#line 2447 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 338:

/* Line 936 of glr.c  */
#line 2449 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 339:

/* Line 936 of glr.c  */
#line 2451 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 340:

/* Line 936 of glr.c  */
#line 2452 "vtkParse.y"
    { postSig("template "); }
    break;

  case 341:

/* Line 936 of glr.c  */
#line 2454 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.str)); }
    break;

  case 342:

/* Line 936 of glr.c  */
#line 2457 "vtkParse.y"
    { postSig("~"); }
    break;

  case 343:

/* Line 936 of glr.c  */
#line 2460 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 344:

/* Line 936 of glr.c  */
#line 2463 "vtkParse.y"
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
    break;

  case 345:

/* Line 936 of glr.c  */
#line 2466 "vtkParse.y"
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); postSig("<"); }
    break;

  case 346:

/* Line 936 of glr.c  */
#line 2468 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
    break;

  case 347:

/* Line 936 of glr.c  */
#line 2474 "vtkParse.y"
    { markSig(); postSig("decltype"); }
    break;

  case 348:

/* Line 936 of glr.c  */
#line 2475 "vtkParse.y"
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
    break;

  case 349:

/* Line 936 of glr.c  */
#line 2482 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 350:

/* Line 936 of glr.c  */
#line 2483 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 351:

/* Line 936 of glr.c  */
#line 2484 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 352:

/* Line 936 of glr.c  */
#line 2485 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 353:

/* Line 936 of glr.c  */
#line 2486 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 354:

/* Line 936 of glr.c  */
#line 2487 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 355:

/* Line 936 of glr.c  */
#line 2488 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 356:

/* Line 936 of glr.c  */
#line 2489 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 357:

/* Line 936 of glr.c  */
#line 2490 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 358:

/* Line 936 of glr.c  */
#line 2491 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 359:

/* Line 936 of glr.c  */
#line 2492 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
    break;

  case 360:

/* Line 936 of glr.c  */
#line 2493 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
    break;

  case 361:

/* Line 936 of glr.c  */
#line 2494 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
    break;

  case 362:

/* Line 936 of glr.c  */
#line 2495 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
    break;

  case 363:

/* Line 936 of glr.c  */
#line 2496 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
    break;

  case 364:

/* Line 936 of glr.c  */
#line 2497 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
    break;

  case 365:

/* Line 936 of glr.c  */
#line 2498 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
    break;

  case 366:

/* Line 936 of glr.c  */
#line 2499 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
    break;

  case 367:

/* Line 936 of glr.c  */
#line 2500 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
    break;

  case 368:

/* Line 936 of glr.c  */
#line 2501 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
    break;

  case 369:

/* Line 936 of glr.c  */
#line 2502 "vtkParse.y"
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
    break;

  case 370:

/* Line 936 of glr.c  */
#line 2503 "vtkParse.y"
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
    break;

  case 381:

/* Line 936 of glr.c  */
#line 2528 "vtkParse.y"
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer))); }
    break;

  case 382:

/* Line 936 of glr.c  */
#line 2529 "vtkParse.y"
    { setTypeMod(VTK_PARSE_TYPEDEF); }
    break;

  case 383:

/* Line 936 of glr.c  */
#line 2530 "vtkParse.y"
    { setTypeMod(VTK_PARSE_FRIEND); }
    break;

  case 386:

/* Line 936 of glr.c  */
#line 2537 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 387:

/* Line 936 of glr.c  */
#line 2538 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 388:

/* Line 936 of glr.c  */
#line 2539 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 389:

/* Line 936 of glr.c  */
#line 2540 "vtkParse.y"
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
    break;

  case 390:

/* Line 936 of glr.c  */
#line 2543 "vtkParse.y"
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
    break;

  case 391:

/* Line 936 of glr.c  */
#line 2544 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 392:

/* Line 936 of glr.c  */
#line 2545 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 393:

/* Line 936 of glr.c  */
#line 2546 "vtkParse.y"
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
    break;

  case 394:

/* Line 936 of glr.c  */
#line 2548 "vtkParse.y"
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
    break;

  case 395:

/* Line 936 of glr.c  */
#line 2551 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 396:

/* Line 936 of glr.c  */
#line 2552 "vtkParse.y"
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 397:

/* Line 936 of glr.c  */
#line 2553 "vtkParse.y"
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 398:

/* Line 936 of glr.c  */
#line 2556 "vtkParse.y"
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
    break;

  case 399:

/* Line 936 of glr.c  */
#line 2557 "vtkParse.y"
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
    break;

  case 401:

/* Line 936 of glr.c  */
#line 2562 "vtkParse.y"
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 403:

/* Line 936 of glr.c  */
#line 2572 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 405:

/* Line 936 of glr.c  */
#line 2574 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 408:

/* Line 936 of glr.c  */
#line 2580 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 409:

/* Line 936 of glr.c  */
#line 2582 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 411:

/* Line 936 of glr.c  */
#line 2587 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
    break;

  case 412:

/* Line 936 of glr.c  */
#line 2588 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 413:

/* Line 936 of glr.c  */
#line 2589 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 414:

/* Line 936 of glr.c  */
#line 2591 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 415:

/* Line 936 of glr.c  */
#line 2593 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 417:

/* Line 936 of glr.c  */
#line 2599 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 419:

/* Line 936 of glr.c  */
#line 2601 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 422:

/* Line 936 of glr.c  */
#line 2608 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 424:

/* Line 936 of glr.c  */
#line 2610 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 427:

/* Line 936 of glr.c  */
#line 2616 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
    break;

  case 428:

/* Line 936 of glr.c  */
#line 2618 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 429:

/* Line 936 of glr.c  */
#line 2620 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 430:

/* Line 936 of glr.c  */
#line 2622 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 431:

/* Line 936 of glr.c  */
#line 2624 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 432:

/* Line 936 of glr.c  */
#line 2626 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 433:

/* Line 936 of glr.c  */
#line 2629 "vtkParse.y"
    { setTypeId(""); }
    break;

  case 435:

/* Line 936 of glr.c  */
#line 2633 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
    break;

  case 436:

/* Line 936 of glr.c  */
#line 2634 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 437:

/* Line 936 of glr.c  */
#line 2635 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
    break;

  case 438:

/* Line 936 of glr.c  */
#line 2636 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
    break;

  case 439:

/* Line 936 of glr.c  */
#line 2637 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 440:

/* Line 936 of glr.c  */
#line 2638 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
    break;

  case 441:

/* Line 936 of glr.c  */
#line 2639 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
    break;

  case 442:

/* Line 936 of glr.c  */
#line 2640 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
    break;

  case 443:

/* Line 936 of glr.c  */
#line 2641 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 444:

/* Line 936 of glr.c  */
#line 2642 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
    break;

  case 445:

/* Line 936 of glr.c  */
#line 2643 "vtkParse.y"
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
    break;

  case 446:

/* Line 936 of glr.c  */
#line 2644 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
    break;

  case 447:

/* Line 936 of glr.c  */
#line 2645 "vtkParse.y"
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
    break;

  case 448:

/* Line 936 of glr.c  */
#line 2646 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
    break;

  case 449:

/* Line 936 of glr.c  */
#line 2647 "vtkParse.y"
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
    break;

  case 450:

/* Line 936 of glr.c  */
#line 2648 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
    break;

  case 451:

/* Line 936 of glr.c  */
#line 2649 "vtkParse.y"
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
    break;

  case 452:

/* Line 936 of glr.c  */
#line 2650 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
    break;

  case 453:

/* Line 936 of glr.c  */
#line 2651 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
    break;

  case 454:

/* Line 936 of glr.c  */
#line 2652 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
    break;

  case 455:

/* Line 936 of glr.c  */
#line 2653 "vtkParse.y"
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 456:

/* Line 936 of glr.c  */
#line 2654 "vtkParse.y"
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
    break;

  case 457:

/* Line 936 of glr.c  */
#line 2657 "vtkParse.y"
    { postSig("auto "); ((*yyvalp).integer) = 0; }
    break;

  case 458:

/* Line 936 of glr.c  */
#line 2658 "vtkParse.y"
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
    break;

  case 459:

/* Line 936 of glr.c  */
#line 2659 "vtkParse.y"
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
    break;

  case 460:

/* Line 936 of glr.c  */
#line 2660 "vtkParse.y"
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
    break;

  case 461:

/* Line 936 of glr.c  */
#line 2661 "vtkParse.y"
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
    break;

  case 462:

/* Line 936 of glr.c  */
#line 2662 "vtkParse.y"
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
    break;

  case 463:

/* Line 936 of glr.c  */
#line 2663 "vtkParse.y"
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
    break;

  case 464:

/* Line 936 of glr.c  */
#line 2664 "vtkParse.y"
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
    break;

  case 465:

/* Line 936 of glr.c  */
#line 2665 "vtkParse.y"
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
    break;

  case 466:

/* Line 936 of glr.c  */
#line 2666 "vtkParse.y"
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
    break;

  case 467:

/* Line 936 of glr.c  */
#line 2667 "vtkParse.y"
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
    break;

  case 468:

/* Line 936 of glr.c  */
#line 2668 "vtkParse.y"
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
    break;

  case 469:

/* Line 936 of glr.c  */
#line 2669 "vtkParse.y"
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
    break;

  case 470:

/* Line 936 of glr.c  */
#line 2670 "vtkParse.y"
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
    break;

  case 471:

/* Line 936 of glr.c  */
#line 2671 "vtkParse.y"
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 475:

/* Line 936 of glr.c  */
#line 2694 "vtkParse.y"
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 476:

/* Line 936 of glr.c  */
#line 2698 "vtkParse.y"
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
    break;

  case 477:

/* Line 936 of glr.c  */
#line 2702 "vtkParse.y"
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
    break;

  case 478:

/* Line 936 of glr.c  */
#line 2705 "vtkParse.y"
    { postSig("*"); }
    break;

  case 479:

/* Line 936 of glr.c  */
#line 2706 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer); }
    break;

  case 480:

/* Line 936 of glr.c  */
#line 2709 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
    break;

  case 481:

/* Line 936 of glr.c  */
#line 2711 "vtkParse.y"
    {
      if (((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer) & VTK_PARSE_CONST) != 0)
        {
        ((*yyvalp).integer) = VTK_PARSE_CONST_POINTER;
        }
      if (((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer) & VTK_PARSE_VOLATILE) != 0)
        {
        ((*yyvalp).integer) = VTK_PARSE_BAD_INDIRECT;
        }
    }
    break;

  case 483:

/* Line 936 of glr.c  */
#line 2727 "vtkParse.y"
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
        {
        n = VTK_PARSE_BAD_INDIRECT;
        }
      ((*yyvalp).integer) = n;
    }
    break;

  case 486:

/* Line 936 of glr.c  */
#line 2746 "vtkParse.y"
    { closeSig(); }
    break;

  case 487:

/* Line 936 of glr.c  */
#line 2746 "vtkParse.y"
    { openSig(); }
    break;

  case 489:

/* Line 936 of glr.c  */
#line 2753 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 490:

/* Line 936 of glr.c  */
#line 2754 "vtkParse.y"
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 491:

/* Line 936 of glr.c  */
#line 2763 "vtkParse.y"
    {postSig("Get");}
    break;

  case 492:

/* Line 936 of glr.c  */
#line 2764 "vtkParse.y"
    {markSig();}
    break;

  case 493:

/* Line 936 of glr.c  */
#line 2764 "vtkParse.y"
    {swapSig();}
    break;

  case 494:

/* Line 936 of glr.c  */
#line 2765 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 495:

/* Line 936 of glr.c  */
#line 2773 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 496:

/* Line 936 of glr.c  */
#line 2774 "vtkParse.y"
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 497:

/* Line 936 of glr.c  */
#line 2783 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 498:

/* Line 936 of glr.c  */
#line 2784 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 499:

/* Line 936 of glr.c  */
#line 2792 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 500:

/* Line 936 of glr.c  */
#line 2792 "vtkParse.y"
    {closeSig();}
    break;

  case 501:

/* Line 936 of glr.c  */
#line 2794 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (10))].yystate.yysemantics.yysval.str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (10))].yystate.yysemantics.yysval.str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (10))].yystate.yysemantics.yysval.str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 502:

/* Line 936 of glr.c  */
#line 2825 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 503:

/* Line 936 of glr.c  */
#line 2826 "vtkParse.y"
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 504:

/* Line 936 of glr.c  */
#line 2835 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 505:

/* Line 936 of glr.c  */
#line 2836 "vtkParse.y"
    {markSig();}
    break;

  case 506:

/* Line 936 of glr.c  */
#line 2836 "vtkParse.y"
    {swapSig();}
    break;

  case 507:

/* Line 936 of glr.c  */
#line 2837 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 508:

/* Line 936 of glr.c  */
#line 2846 "vtkParse.y"
    {
   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.str), "On");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (6))].yystate.yysemantics.yysval.str), "Off");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 509:

/* Line 936 of glr.c  */
#line 2863 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 510:

/* Line 936 of glr.c  */
#line 2864 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
    break;

  case 511:

/* Line 936 of glr.c  */
#line 2868 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 512:

/* Line 936 of glr.c  */
#line 2869 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
    break;

  case 513:

/* Line 936 of glr.c  */
#line 2873 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 514:

/* Line 936 of glr.c  */
#line 2874 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
    break;

  case 515:

/* Line 936 of glr.c  */
#line 2878 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 516:

/* Line 936 of glr.c  */
#line 2879 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
    break;

  case 517:

/* Line 936 of glr.c  */
#line 2883 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 518:

/* Line 936 of glr.c  */
#line 2884 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
    break;

  case 519:

/* Line 936 of glr.c  */
#line 2888 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 520:

/* Line 936 of glr.c  */
#line 2889 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
    break;

  case 521:

/* Line 936 of glr.c  */
#line 2893 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 522:

/* Line 936 of glr.c  */
#line 2894 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
    break;

  case 523:

/* Line 936 of glr.c  */
#line 2898 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 524:

/* Line 936 of glr.c  */
#line 2899 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
    break;

  case 525:

/* Line 936 of glr.c  */
#line 2903 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 526:

/* Line 936 of glr.c  */
#line 2905 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();
   currentFunction->Macro = "vtkSetVectorMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Signature =
     vtkstrcat7("void ", currentFunction->Name, "(", typeText,
                " a[", (((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.str), "]);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_POINTER | getType()),
                 getTypeId(), (int)strtol((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 527:

/* Line 936 of glr.c  */
#line 2920 "vtkParse.y"
    {startSig();}
    break;

  case 528:

/* Line 936 of glr.c  */
#line 2922 "vtkParse.y"
    {
   chopSig();
   currentFunction->Macro = "vtkGetVectorMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (9))].yystate.yysemantics.yysval.str));
   postSig(" *");
   postSig(currentFunction->Name);
   postSig("();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_POINTER | getType()),
              getTypeId(), (int)strtol((((yyGLRStackItem const *)yyvsp)[YYFILL ((8) - (9))].yystate.yysemantics.yysval.str), NULL, 0));
   output_function();
   }
    break;

  case 529:

/* Line 936 of glr.c  */
#line 2935 "vtkParse.y"
    {
     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
    break;

  case 530:

/* Line 936 of glr.c  */
#line 2972 "vtkParse.y"
    {
     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
    break;

  case 531:

/* Line 936 of glr.c  */
#line 3010 "vtkParse.y"
    {
   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "GetClassName";
   currentFunction->Signature = "const char *GetClassName();";
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "IsA";
   currentFunction->Signature = "virtual int IsA(const char *name);";
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "NewInstance";
   currentFunction->Signature = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), " *NewInstance();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "SafeDownCast";
   currentFunction->Signature =
     vtkstrcat3("static ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), " *SafeDownCast(vtkObject *o);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
   set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
              (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), 0);
   output_function();
   }
    break;

  case 534:

/* Line 936 of glr.c  */
#line 3054 "vtkParse.y"
    { ((*yyvalp).str) = "()"; }
    break;

  case 535:

/* Line 936 of glr.c  */
#line 3055 "vtkParse.y"
    { ((*yyvalp).str) = "[]"; }
    break;

  case 536:

/* Line 936 of glr.c  */
#line 3056 "vtkParse.y"
    { ((*yyvalp).str) = " new[]"; }
    break;

  case 537:

/* Line 936 of glr.c  */
#line 3057 "vtkParse.y"
    { ((*yyvalp).str) = " delete[]"; }
    break;

  case 538:

/* Line 936 of glr.c  */
#line 3058 "vtkParse.y"
    { ((*yyvalp).str) = "<"; }
    break;

  case 539:

/* Line 936 of glr.c  */
#line 3059 "vtkParse.y"
    { ((*yyvalp).str) = ">"; }
    break;

  case 540:

/* Line 936 of glr.c  */
#line 3060 "vtkParse.y"
    { ((*yyvalp).str) = ","; }
    break;

  case 541:

/* Line 936 of glr.c  */
#line 3061 "vtkParse.y"
    { ((*yyvalp).str) = "="; }
    break;

  case 542:

/* Line 936 of glr.c  */
#line 3062 "vtkParse.y"
    { ((*yyvalp).str) = ">>"; }
    break;

  case 543:

/* Line 936 of glr.c  */
#line 3063 "vtkParse.y"
    { ((*yyvalp).str) = ">>"; }
    break;

  case 544:

/* Line 936 of glr.c  */
#line 3064 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 546:

/* Line 936 of glr.c  */
#line 3068 "vtkParse.y"
    { ((*yyvalp).str) = "%"; }
    break;

  case 547:

/* Line 936 of glr.c  */
#line 3069 "vtkParse.y"
    { ((*yyvalp).str) = "*"; }
    break;

  case 548:

/* Line 936 of glr.c  */
#line 3070 "vtkParse.y"
    { ((*yyvalp).str) = "/"; }
    break;

  case 549:

/* Line 936 of glr.c  */
#line 3071 "vtkParse.y"
    { ((*yyvalp).str) = "-"; }
    break;

  case 550:

/* Line 936 of glr.c  */
#line 3072 "vtkParse.y"
    { ((*yyvalp).str) = "+"; }
    break;

  case 551:

/* Line 936 of glr.c  */
#line 3073 "vtkParse.y"
    { ((*yyvalp).str) = "!"; }
    break;

  case 552:

/* Line 936 of glr.c  */
#line 3074 "vtkParse.y"
    { ((*yyvalp).str) = "~"; }
    break;

  case 553:

/* Line 936 of glr.c  */
#line 3075 "vtkParse.y"
    { ((*yyvalp).str) = "&"; }
    break;

  case 554:

/* Line 936 of glr.c  */
#line 3076 "vtkParse.y"
    { ((*yyvalp).str) = "|"; }
    break;

  case 555:

/* Line 936 of glr.c  */
#line 3077 "vtkParse.y"
    { ((*yyvalp).str) = "^"; }
    break;

  case 556:

/* Line 936 of glr.c  */
#line 3078 "vtkParse.y"
    { ((*yyvalp).str) = " new"; }
    break;

  case 557:

/* Line 936 of glr.c  */
#line 3079 "vtkParse.y"
    { ((*yyvalp).str) = " delete"; }
    break;

  case 558:

/* Line 936 of glr.c  */
#line 3080 "vtkParse.y"
    { ((*yyvalp).str) = "<<="; }
    break;

  case 559:

/* Line 936 of glr.c  */
#line 3081 "vtkParse.y"
    { ((*yyvalp).str) = ">>="; }
    break;

  case 560:

/* Line 936 of glr.c  */
#line 3082 "vtkParse.y"
    { ((*yyvalp).str) = "<<"; }
    break;

  case 561:

/* Line 936 of glr.c  */
#line 3083 "vtkParse.y"
    { ((*yyvalp).str) = ".*"; }
    break;

  case 562:

/* Line 936 of glr.c  */
#line 3084 "vtkParse.y"
    { ((*yyvalp).str) = "->*"; }
    break;

  case 563:

/* Line 936 of glr.c  */
#line 3085 "vtkParse.y"
    { ((*yyvalp).str) = "->"; }
    break;

  case 564:

/* Line 936 of glr.c  */
#line 3086 "vtkParse.y"
    { ((*yyvalp).str) = "+="; }
    break;

  case 565:

/* Line 936 of glr.c  */
#line 3087 "vtkParse.y"
    { ((*yyvalp).str) = "-="; }
    break;

  case 566:

/* Line 936 of glr.c  */
#line 3088 "vtkParse.y"
    { ((*yyvalp).str) = "*="; }
    break;

  case 567:

/* Line 936 of glr.c  */
#line 3089 "vtkParse.y"
    { ((*yyvalp).str) = "/="; }
    break;

  case 568:

/* Line 936 of glr.c  */
#line 3090 "vtkParse.y"
    { ((*yyvalp).str) = "%="; }
    break;

  case 569:

/* Line 936 of glr.c  */
#line 3091 "vtkParse.y"
    { ((*yyvalp).str) = "++"; }
    break;

  case 570:

/* Line 936 of glr.c  */
#line 3092 "vtkParse.y"
    { ((*yyvalp).str) = "--"; }
    break;

  case 571:

/* Line 936 of glr.c  */
#line 3093 "vtkParse.y"
    { ((*yyvalp).str) = "&="; }
    break;

  case 572:

/* Line 936 of glr.c  */
#line 3094 "vtkParse.y"
    { ((*yyvalp).str) = "|="; }
    break;

  case 573:

/* Line 936 of glr.c  */
#line 3095 "vtkParse.y"
    { ((*yyvalp).str) = "^="; }
    break;

  case 574:

/* Line 936 of glr.c  */
#line 3096 "vtkParse.y"
    { ((*yyvalp).str) = "&&"; }
    break;

  case 575:

/* Line 936 of glr.c  */
#line 3097 "vtkParse.y"
    { ((*yyvalp).str) = "||"; }
    break;

  case 576:

/* Line 936 of glr.c  */
#line 3098 "vtkParse.y"
    { ((*yyvalp).str) = "=="; }
    break;

  case 577:

/* Line 936 of glr.c  */
#line 3099 "vtkParse.y"
    { ((*yyvalp).str) = "!="; }
    break;

  case 578:

/* Line 936 of glr.c  */
#line 3100 "vtkParse.y"
    { ((*yyvalp).str) = "<="; }
    break;

  case 579:

/* Line 936 of glr.c  */
#line 3101 "vtkParse.y"
    { ((*yyvalp).str) = ">="; }
    break;

  case 580:

/* Line 936 of glr.c  */
#line 3104 "vtkParse.y"
    { ((*yyvalp).str) = "typedef"; }
    break;

  case 581:

/* Line 936 of glr.c  */
#line 3105 "vtkParse.y"
    { ((*yyvalp).str) = "typename"; }
    break;

  case 582:

/* Line 936 of glr.c  */
#line 3106 "vtkParse.y"
    { ((*yyvalp).str) = "class"; }
    break;

  case 583:

/* Line 936 of glr.c  */
#line 3107 "vtkParse.y"
    { ((*yyvalp).str) = "struct"; }
    break;

  case 584:

/* Line 936 of glr.c  */
#line 3108 "vtkParse.y"
    { ((*yyvalp).str) = "union"; }
    break;

  case 585:

/* Line 936 of glr.c  */
#line 3109 "vtkParse.y"
    { ((*yyvalp).str) = "template"; }
    break;

  case 586:

/* Line 936 of glr.c  */
#line 3110 "vtkParse.y"
    { ((*yyvalp).str) = "public"; }
    break;

  case 587:

/* Line 936 of glr.c  */
#line 3111 "vtkParse.y"
    { ((*yyvalp).str) = "protected"; }
    break;

  case 588:

/* Line 936 of glr.c  */
#line 3112 "vtkParse.y"
    { ((*yyvalp).str) = "private"; }
    break;

  case 589:

/* Line 936 of glr.c  */
#line 3113 "vtkParse.y"
    { ((*yyvalp).str) = "const"; }
    break;

  case 590:

/* Line 936 of glr.c  */
#line 3114 "vtkParse.y"
    { ((*yyvalp).str) = "static"; }
    break;

  case 591:

/* Line 936 of glr.c  */
#line 3115 "vtkParse.y"
    { ((*yyvalp).str) = "thread_local"; }
    break;

  case 592:

/* Line 936 of glr.c  */
#line 3116 "vtkParse.y"
    { ((*yyvalp).str) = "constexpr"; }
    break;

  case 593:

/* Line 936 of glr.c  */
#line 3117 "vtkParse.y"
    { ((*yyvalp).str) = "inline"; }
    break;

  case 594:

/* Line 936 of glr.c  */
#line 3118 "vtkParse.y"
    { ((*yyvalp).str) = "virtual"; }
    break;

  case 595:

/* Line 936 of glr.c  */
#line 3119 "vtkParse.y"
    { ((*yyvalp).str) = "explicit"; }
    break;

  case 596:

/* Line 936 of glr.c  */
#line 3120 "vtkParse.y"
    { ((*yyvalp).str) = "decltype"; }
    break;

  case 597:

/* Line 936 of glr.c  */
#line 3121 "vtkParse.y"
    { ((*yyvalp).str) = "default"; }
    break;

  case 598:

/* Line 936 of glr.c  */
#line 3122 "vtkParse.y"
    { ((*yyvalp).str) = "extern"; }
    break;

  case 599:

/* Line 936 of glr.c  */
#line 3123 "vtkParse.y"
    { ((*yyvalp).str) = "using"; }
    break;

  case 600:

/* Line 936 of glr.c  */
#line 3124 "vtkParse.y"
    { ((*yyvalp).str) = "namespace"; }
    break;

  case 601:

/* Line 936 of glr.c  */
#line 3125 "vtkParse.y"
    { ((*yyvalp).str) = "operator"; }
    break;

  case 602:

/* Line 936 of glr.c  */
#line 3126 "vtkParse.y"
    { ((*yyvalp).str) = "enum"; }
    break;

  case 603:

/* Line 936 of glr.c  */
#line 3127 "vtkParse.y"
    { ((*yyvalp).str) = "throw"; }
    break;

  case 604:

/* Line 936 of glr.c  */
#line 3128 "vtkParse.y"
    { ((*yyvalp).str) = "noexcept"; }
    break;

  case 605:

/* Line 936 of glr.c  */
#line 3129 "vtkParse.y"
    { ((*yyvalp).str) = "const_cast"; }
    break;

  case 606:

/* Line 936 of glr.c  */
#line 3130 "vtkParse.y"
    { ((*yyvalp).str) = "dynamic_cast"; }
    break;

  case 607:

/* Line 936 of glr.c  */
#line 3131 "vtkParse.y"
    { ((*yyvalp).str) = "static_cast"; }
    break;

  case 608:

/* Line 936 of glr.c  */
#line 3132 "vtkParse.y"
    { ((*yyvalp).str) = "reinterpret_cast"; }
    break;

  case 622:

/* Line 936 of glr.c  */
#line 3156 "vtkParse.y"
    { postSig("< "); }
    break;

  case 623:

/* Line 936 of glr.c  */
#line 3157 "vtkParse.y"
    { postSig("> "); }
    break;

  case 625:

/* Line 936 of glr.c  */
#line 3158 "vtkParse.y"
    { postSig(">"); }
    break;

  case 627:

/* Line 936 of glr.c  */
#line 3162 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 631:

/* Line 936 of glr.c  */
#line 3169 "vtkParse.y"
    {
      if ((((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str))[0] == '+' || ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str))[0] == '-' ||
           ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str))[0] == '*' || ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str))[0] == '&') &&
          ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str))[1] == '\0')
        {
        int c1 = 0;
        size_t l;
        const char *cp;
        chopSig();
        cp = getSig();
        l = getSigLength();
        if (l != 0) { c1 = cp[l-1]; }
        if (c1 != 0 && c1 != '(' && c1 != '[' && c1 != '=')
          {
          postSig(" ");
          }
        postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str));
        if (vtkParse_CharType(c1, (CPRE_IDGIT|CPRE_QUOTE)) ||
            c1 == ')' || c1 == ']')
          {
          postSig(" ");
          }
        }
       else
        {
        postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str));
        postSig(" ");
        }
    }
    break;

  case 632:

/* Line 936 of glr.c  */
#line 3198 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 633:

/* Line 936 of glr.c  */
#line 3198 "vtkParse.y"
    { postSig("."); }
    break;

  case 634:

/* Line 936 of glr.c  */
#line 3199 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig(" "); }
    break;

  case 635:

/* Line 936 of glr.c  */
#line 3200 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig(" "); }
    break;

  case 637:

/* Line 936 of glr.c  */
#line 3203 "vtkParse.y"
    {
      int c1 = 0;
      size_t l;
      const char *cp;
      chopSig();
      cp = getSig();
      l = getSigLength();
      if (l != 0) { c1 = cp[l-1]; }
      while (vtkParse_CharType(c1, CPRE_IDGIT) && l != 0)
        {
        --l;
        c1 = cp[l-1];
        }
      if (l < 2 || cp[l-1] != ':' || cp[l-2] != ':')
        {
        cp = add_const_scope(&cp[l]);
        resetSig(l);
        postSig(cp);
        }
      postSig(" ");
    }
    break;

  case 641:

/* Line 936 of glr.c  */
#line 3230 "vtkParse.y"
    { postSig("< "); }
    break;

  case 642:

/* Line 936 of glr.c  */
#line 3231 "vtkParse.y"
    { postSig("> "); }
    break;

  case 643:

/* Line 936 of glr.c  */
#line 3232 "vtkParse.y"
    { postSig(">"); }
    break;

  case 645:

/* Line 936 of glr.c  */
#line 3236 "vtkParse.y"
    { postSig("= "); }
    break;

  case 646:

/* Line 936 of glr.c  */
#line 3237 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 648:

/* Line 936 of glr.c  */
#line 3241 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 656:

/* Line 936 of glr.c  */
#line 3255 "vtkParse.y"
    { postSig("= "); }
    break;

  case 657:

/* Line 936 of glr.c  */
#line 3256 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 658:

/* Line 936 of glr.c  */
#line 3260 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 659:

/* Line 936 of glr.c  */
#line 3266 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 662:

/* Line 936 of glr.c  */
#line 3277 "vtkParse.y"
    { postSig("["); }
    break;

  case 663:

/* Line 936 of glr.c  */
#line 3278 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 664:

/* Line 936 of glr.c  */
#line 3279 "vtkParse.y"
    { postSig("[["); }
    break;

  case 665:

/* Line 936 of glr.c  */
#line 3280 "vtkParse.y"
    { chopSig(); postSig("]] "); }
    break;

  case 666:

/* Line 936 of glr.c  */
#line 3283 "vtkParse.y"
    { postSig("("); }
    break;

  case 667:

/* Line 936 of glr.c  */
#line 3284 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 668:

/* Line 936 of glr.c  */
#line 3285 "vtkParse.y"
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("*"); }
    break;

  case 669:

/* Line 936 of glr.c  */
#line 3286 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 670:

/* Line 936 of glr.c  */
#line 3287 "vtkParse.y"
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("&"); }
    break;

  case 671:

/* Line 936 of glr.c  */
#line 3288 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 672:

/* Line 936 of glr.c  */
#line 3291 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 673:

/* Line 936 of glr.c  */
#line 3291 "vtkParse.y"
    { postSig("} "); }
    break;



/* Line 936 of glr.c  */
#line 9727 "vtkParse.tab.c"
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


/*ARGSUSED*/ static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
        break;
    }
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved ", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete ", yymsg);
          yy_symbol_print (stderr, yystos[yys->yylrState],
                           NULL);
          YYFPRINTF (stderr, "\n");
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #RULE.  */
static yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yyis_table_ninf(yytable_value) \
  YYID (0)

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *CONFLICTS to a pointer into yyconfl to 0-terminated list of
 *  conflicting reductions.
 */
static void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yyis_table_ninf (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

static yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  RULENUM on the semantic values in RHS to the list of
 *  alternative actions for STATE.  Assumes that RHS comes from
 *  stack #K of *STACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* rhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  yynewOption->yystate = rhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
      yynewOption->yyloc = yylloc;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize SET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = NULL;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize STACK to a single empty stack, with total maximum
 *  capacity for all stacks of SIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If STACK is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yysize, yynewSize;
  size_t yyn;
  yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != NULL)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != NULL)
            yys1->yysemantics.yyfirstVal =
              YYRELOC(yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != NULL)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != NULL)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != NULL)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                 yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != NULL)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that S is a GLRState somewhere on STACK, update the
 *  splitpoint of STACK, if needed, so that it is at least as deep as
 *  S.  */
static void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != NULL)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = NULL;
}

/** Undelete the last stack that was marked as deleted.  Can only be
    done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == NULL || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = NULL;
}

static void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == NULL)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #K of STACK, corresponding to LR state
 * LRSTATE, at input position POSN, with (resolved) semantic value SVAL.  */
static void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yynewState->yyloc = *yylocp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #K of YYSTACK, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* rhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = NULL;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, rhs, yyrule);
}

/** Pop the symbols consumed by reduction #RULE from the top of stack
 *  #K of STACK, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *VALP to the resulting value,
 *  and *LOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == NULL)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* rhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      return yyuserAction (yyrule, yynrhs, rhs,
                           yyvalp, yylocp, yystackp);
    }
  else
    {
      /* At present, doAction is never called in nondeterministic
       * mode, so this branch is never taken.  It is here in
       * anticipation of a future feature that will allow immediate
       * evaluation of selected actions in nondeterministic mode.  */
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yyvalp, yylocp, yystackp);
    }
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)                \
do {                                        \
  if (yydebug)                                \
    yy_reduce_print Args;                \
} while (YYID (0))

/*----------------------------------------------------------.
| Report that the RULE is going to be reduced on stack #K.  |
`----------------------------------------------------------*/

/*ARGSUSED*/ static void
yy_reduce_print (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
                 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  int yynrhs = yyrhsLength (yyrule);
  yybool yynormal __attribute__ ((__unused__)) =
    (yystackp->yysplitPoint == NULL);
  yyGLRStackItem* yyvsp = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
  int yylow = 1;
  int yyi;
  YYUSE (yyvalp);
  YYUSE (yylocp);
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(((yyGLRStackItem const *)yyvsp)[YYFILL ((yyi + 1) - (yynrhs))].yystate.yysemantics.yysval)
                                              );
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop items off stack #K of STACK according to grammar rule RULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with RULE and store its value with the
 *  newly pushed state, if FORCEEVAL or if STACK is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #K from
 *  the STACK.  In this case, the (necessarily deferred) semantic value is
 *  added to the options for the existing state's semantic value.
 */
static YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == NULL)
    {
      YYSTYPE yysval;
      YYLTYPE yyloc;

      YY_REDUCE_PRINT ((yystackp, yyk, yyrule, &yysval, &yyloc));
      YYCHK (yydoAction (yystackp, yyk, yyrule, &yysval,
                         &yyloc));
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval, &yyloc);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != NULL)
          {
            yyGLRState* yyp, *yysplit = yystackp->yysplitPoint;
            yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == NULL)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = NULL;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == NULL)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff Y0 and Y1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (Y0,Y1), destructively merge the
 *  alternative semantic values for the RHS-symbols of Y1 and Y0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p;
          yySemanticOption* yyz1;
          yyz0p = &yys0->yysemantics.yyfirstVal;
          yyz1 = yys1->yysemantics.yyfirstVal;
          while (YYID (yytrue))
            {
              if (yyz1 == *yyz0p || yyz1 == NULL)
                break;
              else if (*yyz0p == NULL)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous N states starting at and including state S.  If result
 *  != yyok, some states may have been left unresolved possibly with empty
 *  semantic option chains.  Regardless of whether result = yyok, each state
 *  has been left with consistent data so that yydestroyGLRState can be invoked
 *  if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of OPT, perform its user action, and return
 *  the semantic value and location.  Regardless of whether result = yyok, all
 *  RHS states have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp, YYLTYPE* yylocp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs;
  int yychar_current;
  YYSTYPE yylval_current;
  YYLTYPE yylloc_current;
  YYRESULTTAG yyflag;

  yynrhs = yyrhsLength (yyopt->yyrule);
  yyflag = yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  yychar_current = yychar;
  yylval_current = yylval;
  yylloc_current = yylloc;
  yychar = yyopt->yyrawchar;
  yylval = yyopt->yyval;
  yylloc = yyopt->yyloc;
  yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yyvalp, yylocp, yystackp);
  yychar = yychar_current;
  yylval = yylval_current;
  yylloc = yylloc_current;
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == NULL)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yyrhs[yyprhs[yyx->yyrule]+yyi-1]),
                       (unsigned long int) (yystates[yyi - 1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

/*ARGSUSED*/ static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Starting at and including state S1, resolve the location for each of the
 *  previous N1 states that is unresolved.  The first semantic option of a state
 *  is always chosen.  */
static void
yyresolveLocations (yyGLRState* yys1, int yyn1,
                    yyGLRStack *yystackp)
{
  if (0 < yyn1)
    {
      yyresolveLocations (yys1->yypred, yyn1 - 1, yystackp);
      if (!yys1->yyresolved)
        {
          yySemanticOption *yyoption;
          yyGLRStackItem yyrhsloc[1 + YYMAXRHS];
          int yynrhs;
          int yychar_current;
          YYSTYPE yylval_current;
          YYLTYPE yylloc_current;
          yyoption = yys1->yysemantics.yyfirstVal;
          YYASSERT (yyoption != NULL);
          yynrhs = yyrhsLength (yyoption->yyrule);
          if (yynrhs > 0)
            {
              yyGLRState *yys;
              int yyn;
              yyresolveLocations (yyoption->yystate, yynrhs,
                                  yystackp);
              for (yys = yyoption->yystate, yyn = yynrhs;
                   yyn > 0;
                   yys = yys->yypred, yyn -= 1)
                yyrhsloc[yyn].yystate.yyloc = yys->yyloc;
            }
          else
            {
              /* Both yyresolveAction and yyresolveLocations traverse the GSS
                 in reverse rightmost order.  It is only necessary to invoke
                 yyresolveLocations on a subforest for which yyresolveAction
                 would have been invoked next had an ambiguity not been
                 detected.  Thus the location of the previous state (but not
                 necessarily the previous state itself) is guaranteed to be
                 resolved already.  */
              yyGLRState *yyprevious = yyoption->yystate;
              yyrhsloc[0].yystate.yyloc = yyprevious->yyloc;
            }
          yychar_current = yychar;
          yylval_current = yylval;
          yylloc_current = yylloc;
          yychar = yyoption->yyrawchar;
          yylval = yyoption->yyval;
          yylloc = yyoption->yyloc;
          YYLLOC_DEFAULT ((yys1->yyloc), yyrhsloc, yynrhs);
          yychar = yychar_current;
          yylval = yylval_current;
          yylloc = yylloc_current;
        }
    }
}

/** Resolve the ambiguity represented in state S, perform the indicated
 *  actions, and set the semantic value of S.  If result != yyok, the chain of
 *  semantic options in S has been cleared instead or it has been left
 *  unmodified except that redundant options may have been removed.  Regardless
 *  of whether result = yyok, S has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest;
  yySemanticOption** yypp;
  yybool yymerge;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;
  YYLTYPE *yylocp = &yys->yyloc;

  yybest = yyoptionList;
  yymerge = yyfalse;
  for (yypp = &yyoptionList->yynext; *yypp != NULL; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              yyresolveLocations (yys, 1, yystackp);
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval,
                                yylocp);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != NULL; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                YYLTYPE yydummy;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other,
                                          &yydummy);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval, yylocp);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = NULL;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != NULL)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == NULL)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = NULL;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = NULL;
  yystackp->yylastDeleted = NULL;

  while (yyr != NULL)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  int yyaction;
  const short int* yyconflicts;
  yyRuleNum yyrule;

  while (yystackp->yytops.yystates[yyk] != NULL)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          YYCHK (yyglrReduce (yystackp, yyk, yyrule, yyfalse));
        }
      else
        {
          yySymbol yytoken;
          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = YYLEX;
            }

          if (yychar <= YYEOF)
            {
              yychar = yytoken = YYEOF;
              YYDPRINTF ((stderr, "Now at end of input.\n"));
            }
          else
            {
              yytoken = YYTRANSLATE (yychar);
              YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
            }

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              YYCHK (yyglrReduce (yystackp, yynewStack,
                                  *yyconflicts, yyfalse));
              YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                        yyposn));
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            YYCHK (yyglrReduce (yystackp, yyk, -yyaction,
                                yyfalse));
        }
    }
  return yyok;
}

/*ARGSUSED*/ static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState == 0)
    {
#if YYERROR_VERBOSE
      int yyn;
      yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      if (YYPACT_NINF < yyn && yyn <= YYLAST)
        {
          yySymbol yytoken = YYTRANSLATE (yychar);
          size_t yysize0 = yytnamerr (NULL, yytokenName (yytoken));
          size_t yysize = yysize0;
          size_t yysize1;
          yybool yysize_overflow = yyfalse;
          char* yymsg = NULL;
          enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
          char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
          int yyx;
          char *yyfmt;
          char const *yyf;
          static char const yyunexpected[] = "syntax error, unexpected %s";
          static char const yyexpecting[] = ", expecting %s";
          static char const yyor[] = " or %s";
          char yyformat[sizeof yyunexpected
                        + sizeof yyexpecting - 1
                        + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
                           * (sizeof yyor - 1))];
          char const *yyprefix = yyexpecting;

          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;

          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yycount = 1;

          yyarg[0] = yytokenName (yytoken);
          yyfmt = yystpcpy (yyformat, yyunexpected);

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    yyformat[sizeof yyunexpected - 1] = '\0';
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                yysize1 = yysize + yytnamerr (NULL, yytokenName (yyx));
                yysize_overflow |= yysize1 < yysize;
                yysize = yysize1;
                yyfmt = yystpcpy (yyfmt, yyprefix);
                yyprefix = yyor;
              }

          yyf = YY_(yyformat);
          yysize1 = yysize + strlen (yyf);
          yysize_overflow |= yysize1 < yysize;
          yysize = yysize1;

          if (!yysize_overflow)
            yymsg = (char *) YYMALLOC (yysize);

          if (yymsg)
            {
              char *yyp = yymsg;
              int yyi = 0;
              while ((*yyp = *yyf))
                {
                  if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
                    {
                      yyp += yytnamerr (yyp, yyarg[yyi++]);
                      yyf += 2;
                    }
                  else
                    {
                      yyp++;
                      yyf++;
                    }
                }
              yyerror (yymsg);
              YYFREE (yymsg);
            }
          else
            {
              yyerror (YY_("syntax error"));
              yyMemoryExhausted (yystackp);
            }
        }
      else
#endif /* YYERROR_VERBOSE */
        yyerror (YY_("syntax error"));
      yynerrs += 1;
    }
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
/*ARGSUSED*/ static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (YYID (yytrue))
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, NULL);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = YYLEX;
        if (yychar <= YYEOF)
          {
            yychar = yytoken = YYEOF;
            YYDPRINTF ((stderr, "Now at end of input.\n"));
          }
        else
          {
            yytoken = YYTRANSLATE (yychar);
            YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
          }
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yyis_pact_ninf (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (yytable[yyj] != 0 && ! yyis_table_ninf (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != NULL)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, NULL);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != NULL)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yyis_pact_ninf (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token having adjusted its location.  */
              YYLTYPE yyerrloc;
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval, &yyerrloc);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }

      if (yys->yypred != NULL)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == NULL)
    yyFail (yystackp, NULL);
}

#define YYCHK1(YYE)                                                             \
  do {                                                                             \
    switch (YYE) {                                                             \
    case yyok:                                                                     \
      break;                                                                     \
    case yyabort:                                                             \
      goto yyabortlab;                                                             \
    case yyaccept:                                                             \
      goto yyacceptlab;                                                             \
    case yyerr:                                                                     \
      goto yyuser_error;                                                     \
    default:                                                                     \
      goto yybuglab;                                                             \
    }                                                                             \
  } while (YYID (0))


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;


  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval, &yylloc);
  yyposn = 0;

  while (YYID (yytrue))
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (YYID (yytrue))
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = YYLEX;
                }

              if (yychar <= YYEOF)
                {
                  yychar = yytoken = YYEOF;
                  YYDPRINTF ((stderr, "Now at end of input.\n"));
                }
              else
                {
                  yytoken = YYTRANSLATE (yychar);
                  YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
                }

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval, &yylloc);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (YYID (yytrue))
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval, &yylloc);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar),
                &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                    if (yys->yypred != NULL)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  /* Make sure YYID is used.  */
  return YYID (yyresult);
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void yypstack (yyGLRStack* yystackp, size_t yyk)
  __attribute__ ((__unused__));
static void yypdumpstack (yyGLRStack* yystackp) __attribute__ ((__unused__));

static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == NULL)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                             \
    ((YYX) == NULL ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif



/* Line 2634 of glr.c  */
#line 3338 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* fill in the type name if none given */
const char *type_class(unsigned int type, const char *classname)
{
  if (classname)
    {
    if (classname[0] == '\0')
      {
      switch ((type & VTK_PARSE_BASE_TYPE))
        {
        case 0:
          classname = "auto";
          break;
        case VTK_PARSE_VOID:
          classname = "void";
          break;
        case VTK_PARSE_BOOL:
          classname = "bool";
          break;
        case VTK_PARSE_FLOAT:
          classname = "float";
          break;
        case VTK_PARSE_DOUBLE:
          classname = "double";
          break;
        case VTK_PARSE_LONG_DOUBLE:
          classname = "long double";
          break;
        case VTK_PARSE_CHAR:
          classname = "char";
          break;
        case VTK_PARSE_CHAR16_T:
          classname = "char16_t";
          break;
        case VTK_PARSE_CHAR32_T:
          classname = "char32_t";
          break;
        case VTK_PARSE_WCHAR_T:
          classname = "wchar_t";
          break;
        case VTK_PARSE_UNSIGNED_CHAR:
          classname = "unsigned char";
          break;
        case VTK_PARSE_SIGNED_CHAR:
          classname = "signed char";
          break;
        case VTK_PARSE_SHORT:
          classname = "short";
          break;
        case VTK_PARSE_UNSIGNED_SHORT:
          classname = "unsigned short";
          break;
        case VTK_PARSE_INT:
          classname = "int";
          break;
        case VTK_PARSE_UNSIGNED_INT:
          classname = "unsigned int";
          break;
        case VTK_PARSE_LONG:
          classname = "long";
          break;
        case VTK_PARSE_UNSIGNED_LONG:
          classname = "unsigned long";
          break;
        case VTK_PARSE_LONG_LONG:
          classname = "long long";
          break;
        case VTK_PARSE_UNSIGNED_LONG_LONG:
          classname = "unsigned long long";
          break;
        case VTK_PARSE___INT64:
          classname = "__int64";
          break;
        case VTK_PARSE_UNSIGNED___INT64:
          classname = "unsigned __int64";
          break;
        }
      }
    }

  return classname;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct_or_union)
{
  ClassInfo *outerClass = currentClass;
  pushClass();
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  vtkParse_InitClass(currentClass);
  currentClass->Name = classname;
  if (is_struct_or_union == 1)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  if (is_struct_or_union == 2)
    {
    currentClass->ItemType = VTK_UNION_INFO;
    }

  if (classname && classname[strlen(classname)-1] != '>')
    {
    if (outerClass)
      {
      vtkParse_AddClassToClass(outerClass, currentClass);
      }
    else
      {
      vtkParse_AddClassToNamespace(currentNamespace, currentClass);
      }
    }

  /* template information */
  if (currentTemplate)
    {
    currentClass->Template = currentTemplate;
    currentTemplate = NULL;
    }

  /* comment, if any */
  currentClass->Comment = vtkstrdup(getComment());

  access_level = VTK_ACCESS_PRIVATE;
  if (is_struct_or_union)
    {
    access_level = VTK_ACCESS_PUBLIC;
    }

  vtkParse_InitFunction(currentFunction);
  startSig();
  clearComment();
}

/* reached the end of a class definition */
void end_class()
{
  /* add default constructors */
  vtkParse_AddDefaultConstructors(currentClass, data->Strings);

  popClass();
}

/* add a base class to the specified class */
void add_base_class(ClassInfo *cls, const char *name, int al,
  unsigned int extra)
{
  /* "extra" can contain VTK_PARSE_VIRTUAL and VTK_PARSE_PACK */
  if (cls && al == VTK_ACCESS_PUBLIC &&
      (extra & VTK_PARSE_PACK) == 0)
    {
    vtkParse_AddStringToArray(&cls->SuperClasses,
                              &cls->NumberOfSuperClasses,
                              name);
    }
}

/* add a using declaration or directive */
void add_using(const char *name, int is_namespace)
{
  size_t i;
  UsingInfo *item;

  item = (UsingInfo *)malloc(sizeof(UsingInfo));
  vtkParse_InitUsing(item);
  if (is_namespace)
    {
    item->Name = NULL;
    item->Scope = name;
    }
  else
    {
    i = strlen(name);
    while (i > 0 && name[i-1] != ':') { i--; }
    item->Name = vtkstrdup(&name[i]);
    while (i > 0 && name[i-1] == ':') { i--; }
    item->Scope = vtkstrndup(name, i);
    }

  if (currentClass)
    {
    vtkParse_AddUsingToClass(currentClass, item);
    }
  else
    {
    vtkParse_AddUsingToNamespace(currentNamespace, item);
    }
}

/* start a new enum */
void start_enum(const char *name, int is_scoped,
                unsigned int type, const char *basename)
{
  EnumInfo *item;

  currentEnumType = (type ? type : VTK_PARSE_INT);
  currentEnumName = "int";
  currentEnumValue = NULL;

  if (type == 0 && is_scoped)
    {
    type = VTK_PARSE_INT;
    }

  if (name)
    {
    currentEnumName = name;
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    vtkParse_InitEnum(item);
    item->Name = name;
    item->Access = access_level;

    if (currentClass)
      {
      vtkParse_AddEnumToClass(currentClass, item);
      }
    else
      {
      vtkParse_AddEnumToNamespace(currentNamespace, item);
      }

    if (type)
      {
      vtkParse_AddStringToArray(&item->SuperClasses,
                                &item->NumberOfSuperClasses,
                                type_class(type, basename));
      }

    if (is_scoped)
      {
      pushClass();
      currentClass = item;
      }
    }
}

/* finish the enum */
void end_enum()
{
  if (currentClass && currentClass->ItemType == VTK_ENUM_INFO)
    {
    popClass();
    }

  currentEnumName = NULL;
  currentEnumValue = NULL;
}

/* add a constant to the enum */
void add_enum(const char *name, const char *value)
{
  static char text[2048];
  unsigned long i;
  long j;

  if (value)
    {
    strcpy(text, value);
    currentEnumValue = value;
    }
  else if (currentEnumValue)
    {
    i = strlen(text);
    while (i > 0 && text[i-1] >= '0' &&
           text[i-1] <= '9') { i--; }

    if (i == 0 || text[i-1] == ' ' ||
        (i > 1 && text[i-2] == ' ' &&
         (text[i-1] == '-' || text[i-1] == '+')))
      {
      if (i > 0 && text[i-1] != ' ')
        {
        i--;
        }
      j = (int)strtol(&text[i], NULL, 10);
      sprintf(&text[i], "%li", j+1);
      }
    else
      {
      i = strlen(text);
      strcpy(&text[i], " + 1");
      }
    currentEnumValue = vtkstrdup(text);
    }
  else
    {
    strcpy(text, "0");
    currentEnumValue = "0";
    }

  add_constant(name, currentEnumValue, currentEnumType, currentEnumName, 2);
}

/* for a macro constant, guess the constant type, doesn't do any math */
unsigned int guess_constant_type(const char *valstring)
{
  unsigned int valtype = 0;
  size_t k;
  unsigned long i;
  int is_name = 0;

  if (valstring == NULL || valstring[0] == '\0')
    {
    return 0;
    }

  k = vtkParse_SkipId(valstring);
  if (valstring[k] == '\0')
    {
    is_name = 1;
    }

  if (strcmp(valstring, "true") == 0 || strcmp(valstring, "false") == 0)
    {
    return VTK_PARSE_BOOL;
    }

  if (strcmp(valstring, "nullptr") == 0)
    {
    return VTK_PARSE_NULLPTR_T;
    }

  if (valstring[0] == '\'')
    {
    return VTK_PARSE_CHAR;
    }

  if (strncmp(valstring, "VTK_TYPE_CAST(", 14) == 0 ||
      strncmp(valstring, "static_cast<", 12) == 0 ||
      strncmp(valstring, "const_cast<", 11) == 0 ||
      strncmp(valstring, "(", 1) == 0)
    {
    const char *cp;
    size_t n;
    int is_unsigned = 0;

    cp = &valstring[1];
    if (valstring[0] == 'c')
      {
      cp = &valstring[11];
      }
    else if (valstring[0] == 's')
      {
      cp = &valstring[12];
      }
    else if (valstring[0] == 'V')
      {
      cp = &valstring[14];
      }

    if (strncmp(cp, "unsigned ", 9) == 0)
      {
      is_unsigned = 1;
      cp += 9;
      }

    n = strlen(cp);
    for (k = 0; k < n && cp[k] != ',' &&
         cp[k] != '>' && cp[k] != ')'; k++) { ; };

    if (strncmp(cp, "long long", k) == 0)
      { valtype = VTK_PARSE_LONG_LONG; }
    else if (strncmp(cp, "__int64", k) == 0)
      { valtype = VTK_PARSE___INT64; }
    else if (strncmp(cp, "long", k) == 0)
      { valtype = VTK_PARSE_LONG; }
    else if (strncmp(cp, "short", k) == 0)
      { valtype = VTK_PARSE_SHORT; }
    else if (strncmp(cp, "signed char", k) == 0)
      { valtype = VTK_PARSE_SIGNED_CHAR; }
    else if (strncmp(cp, "char", k) == 0)
      { valtype = VTK_PARSE_CHAR; }
    else if (strncmp(cp, "int", k) == 0 ||
             strncmp(cp, "signed", k) == 0)
      { valtype = VTK_PARSE_INT; }
    else if (strncmp(cp, "float", k) == 0)
      { valtype = VTK_PARSE_FLOAT; }
    else if (strncmp(cp, "double", k) == 0)
      { valtype = VTK_PARSE_DOUBLE; }
    else if (strncmp(cp, "char *", k) == 0)
      { valtype = VTK_PARSE_CHAR_PTR; }

    if (is_unsigned)
      {
      if (valtype == 0) { valtype = VTK_PARSE_INT; }
      valtype = (valtype | VTK_PARSE_UNSIGNED);
      }

    if (valtype != 0)
      {
      return valtype;
      }
    }

  /* check the current scope */
  if (is_name)
    {
    NamespaceInfo *scope = currentNamespace;
    if (namespaceDepth > 0)
      {
      scope = namespaceStack[0];
      }

    for (i = 0; i < scope->NumberOfConstants; i++)
      {
      if (strcmp(scope->Constants[i]->Name, valstring) == 0)
        {
        return scope->Constants[i]->Type;
        }
      }
    }

  /* check for preprocessor macros */
  if (is_name)
    {
    MacroInfo *macro = vtkParsePreprocess_GetMacro(
      preprocessor, valstring);

    if (macro && !macro->IsFunction)
      {
      return guess_constant_type(macro->Definition);
      }
    }

  /* fall back to the preprocessor to evaluate the constant */
    {
    preproc_int_t val;
    int is_unsigned;
    int result = vtkParsePreprocess_EvaluateExpression(
      preprocessor, valstring, &val, &is_unsigned);

    if (result == VTK_PARSE_PREPROC_DOUBLE)
      {
      return VTK_PARSE_DOUBLE;
      }
    else if (result == VTK_PARSE_PREPROC_FLOAT)
      {
      return VTK_PARSE_FLOAT;
      }
    else if (result == VTK_PARSE_PREPROC_STRING)
      {
      return VTK_PARSE_CHAR_PTR;
      }
    else if (result == VTK_PARSE_OK)
      {
      if (is_unsigned)
        {
        if ((preproc_uint_t)val <= VTK_UNSIGNED_INT_MAX)
          {
          return VTK_PARSE_UNSIGNED_INT;
          }
        else
          {
#if defined(VTK_TYPE_USE_LONG_LONG)
          return VTK_PARSE_UNSIGNED_LONG_LONG;
#elif defined(VTK_TYPE_USE___INT64)
          return VTK_PARSE_UNSIGNED___INT64;
#else
          return VTK_PARSE_UNSIGNED_LONG;
#endif
          }
        }
      else
        {
        if (val >= VTK_INT_MIN && val <= VTK_INT_MAX)
          {
          return VTK_PARSE_INT;
          }
        else
          {
#if defined(VTK_TYPE_USE_LONG_LONG)
          return VTK_PARSE_LONG_LONG;
#elif defined(VTK_TYPE_USE___INT64)
          return VTK_PARSE___INT64;
#else
          return VTK_PARSE_LONG;
#endif
          }
        }
      }
    }

  return 0;
}

/* add a constant to the current class or namespace */
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int flag)
{
  ValueInfo *con = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(con);
  con->ItemType = VTK_CONSTANT_INFO;
  con->Name = name;
  con->Value = value;
  con->Type = type;
  con->TypeName = type_class(type, typeclass);

  if (flag == 2)
    {
    con->IsEnum = 1;
    }

  if (flag == 1)
    {
    /* actually a macro, need to guess the type */
    ValueInfo **cptr = data->Contents->Constants;
    unsigned long n = data->Contents->NumberOfConstants;
    unsigned long i;

    con->Access = VTK_ACCESS_PUBLIC;
    if (con->Type == 0)
      {
      con->Type = guess_constant_type(con->Value);
      }

    for (i = 0; i < n; i++)
      {
      if (strcmp(cptr[i]->Name, con->Name) == 0)
        {
        break;
        }
      }

    if (i == n)
      {
      vtkParse_AddConstantToNamespace(data->Contents, con);
      }
    else
      {
      vtkParse_FreeValue(con);
      }
    }
  else if (currentClass)
    {
    con->Access = access_level;
    vtkParse_AddConstantToClass(currentClass, con);
    }
  else
    {
    con->Access = VTK_ACCESS_PUBLIC;
    vtkParse_AddConstantToNamespace(currentNamespace, con);
    }
}

/* if the name is a const in this namespace, the scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  NamespaceInfo *scope = currentNamespace;
  unsigned long i, j;
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

/* guess the type from the ID */
unsigned int guess_id_type(const char *cp)
{
  unsigned int t = 0;

  if (cp)
    {
    size_t i;
    const char *dp;

    i = strlen(cp);
    while (i > 0 && cp[i-1] != ':') { i--; }
    dp = &cp[i];

    if (strcmp(dp, "vtkStdString") == 0 ||
        strcmp(cp, "std::string") == 0)
      {
      t = VTK_PARSE_STRING;
      }
    else if (strcmp(dp, "vtkUnicodeString") == 0)
      {
      t = VTK_PARSE_UNICODE_STRING;
      }
    else if (strncmp(dp, "vtk", 3) == 0)
      {
      t = VTK_PARSE_OBJECT;
      }
    else if (strncmp(dp, "Q", 1) == 0 ||
             strncmp(cp, "Qt::", 4) == 0)
      {
      t = VTK_PARSE_QOBJECT;
      }
    else
      {
      t = VTK_PARSE_UNKNOWN;
      }
    }

  return t;
}

/* add a template parameter to the current template */
void add_template_parameter(
  unsigned int datatype, unsigned int extra, const char *funcSig)
{
  ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(param);
  handle_complex_type(param, datatype, extra, funcSig);
  param->Name = getVarName();
  vtkParse_AddParameterToTemplate(currentTemplate, param);
}

/* add a parameter to a function */
void add_parameter(FunctionInfo *func, unsigned int type,
                   const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(param);

  param->Type = type;
  param->TypeName = type_class(type, typeclass);

  if (count)
    {
    param->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&param->Dimensions, &param->NumberOfDimensions,
                              vtkstrdup(text));
    }

  add_legacy_parameter(func, param);

  vtkParse_AddParameterToFunction(func, param);
}

/* set the return type for the current function */
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *val = (ValueInfo *)malloc(sizeof(ValueInfo));

  vtkParse_InitValue(val);
  val->Type = type;
  val->TypeName = type_class(type, typeclass);

  if (count)
    {
    val->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&val->Dimensions, &val->NumberOfDimensions,
                              vtkstrdup(text));
    }

  func->ReturnValue = val;

#ifndef VTK_PARSE_LEGACY_REMOVE
  func->ReturnType = val->Type;
  func->ReturnClass = val->TypeName;
  func->HaveHint = (count > 0);
  func->HintSize = count;
#endif
}

unsigned long count_from_dimensions(ValueInfo *val)
{
  unsigned long count, i, n;
  const char *cp;

  /* count is the product of the dimensions */
  count = 0;
  if (val->NumberOfDimensions)
    {
    count = 1;
    for (i = 0; i < val->NumberOfDimensions; i++)
      {
      n = 0;
      cp = val->Dimensions[i];
      if (cp[0] != '\0')
        {
        while (*cp != '\0' && *cp >= '0' && *cp <= '9') { cp++; }
        while (*cp != '\0' && (*cp == 'u' || *cp == 'l' ||
                               *cp == 'U' || *cp == 'L')) { cp++; }
        if (*cp == '\0')
          {
          n = (int)strtol(val->Dimensions[i], NULL, 0);
          }
        }
      count *= n;
      }
    }

  return count;
}

/* deal with types that include function pointers or arrays */
void handle_complex_type(
  ValueInfo *val, unsigned int datatype, unsigned int extra,
  const char *funcSig)
{
  FunctionInfo *func = 0;

  /* remove specifiers like "friend" and "typedef" */
  datatype &= VTK_PARSE_QUALIFIED_TYPE;

  /* remove the pack specifier caused by "..." */
  if ((extra & VTK_PARSE_PACK) != 0)
    {
    val->IsPack = 1;
    extra ^= VTK_PARSE_PACK;
    }

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
    /* the current type becomes the function return type */
    func = getFunction();
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(func->ReturnValue);
    func->ReturnValue->Type = datatype;
    func->ReturnValue->TypeName = type_class(datatype, getTypeId());
    if (funcSig) { func->Signature = vtkstrdup(funcSig); }
    val->Function = func;

#ifndef VTK_PARSE_LEGACY_REMOVE
    func->ReturnType = func->ReturnValue->Type;
    func->ReturnClass = func->ReturnValue->TypeName;
#endif

    /* the val type is whatever was inside the parentheses */
    clearTypeId();
    setTypeId(func->Class ? "method" : "function");
    datatype = (extra & (VTK_PARSE_UNQUALIFIED_TYPE | VTK_PARSE_RVALUE));
    }
  else if ((extra & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
    {
    datatype = (datatype | VTK_PARSE_BAD_INDIRECT);
    }
  else if ((extra & VTK_PARSE_INDIRECT) != 0)
    {
    extra = (extra & (VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE));

    if ((extra & VTK_PARSE_REF) != 0)
      {
      datatype = (datatype | (extra & (VTK_PARSE_REF | VTK_PARSE_RVALUE)));
      extra = (extra & ~(VTK_PARSE_REF | VTK_PARSE_RVALUE));
      }

    if (extra != 0 && getArrayNDims() > 0)
      {
      /* pointer represents an unsized array bracket */
      datatype = add_indirection(datatype, VTK_PARSE_ARRAY);
      extra = ((extra >> 2) & VTK_PARSE_POINTER_MASK);
      }

    datatype = add_indirection(datatype, extra);
    }

  if (getArrayNDims() == 1)
    {
    if ((datatype & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_ARRAY)
      {
      /* turn the first set of brackets into a pointer */
      datatype = add_indirection(datatype, VTK_PARSE_POINTER);
      }
    else
      {
      pushArrayFront("");
      }
    }
  else if (getArrayNDims() > 1)
    {
    if ((datatype & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_ARRAY)
      {
      /* turn the first set of brackets into a pointer */
      datatype = add_indirection(datatype, VTK_PARSE_ARRAY);
      }
    else
      {
      pushArrayFront("");
      }
    }

  /* get the data type */
  val->Type = datatype;
  val->TypeName = type_class(datatype, getTypeId());

  /* copy contents of all brackets to the ArgDimensions */
  val->NumberOfDimensions = getArrayNDims();
  val->Dimensions = getArray();
  clearArray();

  /* count is the product of the dimensions */
  val->Count = count_from_dimensions(val);
}

/* add a parameter to the legacy part of the FunctionInfo struct */
void add_legacy_parameter(FunctionInfo *func, ValueInfo *param)
{
#ifndef VTK_PARSE_LEGACY_REMOVE
  unsigned long i = func->NumberOfArguments;

  if (i < MAX_ARGS)
    {
    func->NumberOfArguments = i + 1;
    func->ArgTypes[i] = param->Type;
    func->ArgClasses[i] = param->TypeName;
    func->ArgCounts[i] = param->Count;

    /* legacy wrappers need VTK_PARSE_FUNCTION without POINTER */
    if (param->Type == VTK_PARSE_FUNCTION_PTR)
      {
      /* check for signature "void (*func)(void *)" */
      if (param->Function->NumberOfParameters == 1 &&
          param->Function->Parameters[0]->Type == VTK_PARSE_VOID_PTR &&
          param->Function->Parameters[0]->NumberOfDimensions == 0 &&
          param->Function->ReturnValue->Type == VTK_PARSE_VOID)
        {
        func->ArgTypes[i] = VTK_PARSE_FUNCTION;
        }
      }
    }
  else
    {
    func->ArrayFailure = 1;
    }
#endif
}


/* reject the function, do not output it */
void reject_function()
{
  vtkParse_InitFunction(currentFunction);
  startSig();
  getMacro();
}

/* a simple routine that updates a few variables */
void output_function()
{
  const char *macro = getMacro();
  size_t n;
  unsigned long i, j;
  int match;

  /* reject template specializations */
  n = strlen(currentFunction->Name);
  if (currentFunction->Name[n-1] == '>')
    {
    /* make sure there is a matching angle bracket */
    while (n > 0 && currentFunction->Name[n-1] != '<') { n--; }
    if (n > 0)
      {
      reject_function();
      return;
      }
    }

  /* friend */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_FRIEND)
    {
    currentFunction->ReturnValue->Type ^= VTK_PARSE_FRIEND;
    output_friend_function();
    return;
    }

  /* typedef */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_TYPEDEF)
    {
    ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(item);
    item->ItemType = VTK_TYPEDEF_INFO;
    item->Access = access_level;
    item->Type = VTK_PARSE_FUNCTION;
    item->TypeName = "function";
    item->Function = currentFunction;
    item->Name = currentFunction->Name;

    currentFunction->ReturnValue->Type ^= VTK_PARSE_TYPEDEF;
    currentFunction->Class = NULL;

    if (currentClass)
      {
      vtkParse_AddTypedefToClass(currentClass, item);
      }
    else
      {
      vtkParse_AddTypedefToNamespace(currentNamespace, item);
      }

    currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    reject_function();
    return;
    }

  /* static */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_STATIC)
    {
    currentFunction->IsStatic = 1;
    }

  /* virtual */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_VIRTUAL)
    {
    currentFunction->IsVirtual = 1;
    }

  /* the signature */
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = getSig();
    }

  /* template information */
  if (currentTemplate)
    {
    currentFunction->Template = currentTemplate;
    currentTemplate = NULL;
    }

  /* a void argument is the same as no parameters */
  if (currentFunction->NumberOfParameters == 1 &&
      (currentFunction->Parameters[0]->Type & VTK_PARSE_UNQUALIFIED_TYPE) ==
      VTK_PARSE_VOID)
    {
    currentFunction->NumberOfParameters = 0;
    }

  /* is it defined in a legacy macro? */
  if (macro && strcmp(macro, "VTK_LEGACY") == 0)
    {
    currentFunction->IsLegacy = 1;
    }

  /* set public, protected */
  if (currentClass)
    {
    currentFunction->Access = access_level;
    }
  else
    {
    currentFunction->Access = VTK_ACCESS_PUBLIC;
    }

#ifndef VTK_PARSE_LEGACY_REMOVE
  /* a void argument is the same as no parameters */
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
    currentFunction->ReturnClass = "void";
    }

  /* set legacy flags */
  if (currentClass)
    {
    currentFunction->IsPublic = (access_level == VTK_ACCESS_PUBLIC);
    currentFunction->IsProtected = (access_level == VTK_ACCESS_PROTECTED);
    }
  else
    {
    currentFunction->IsPublic = 1;
    currentFunction->IsProtected = 0;
    }

  /* check for too many parameters */
  if (currentFunction->NumberOfParameters > MAX_ARGS)
    {
    currentFunction->ArrayFailure = 1;
    }

  /* also legacy: tell old wrappers that multi-dimensional arrays are bad */
  for (i = 0; i < currentFunction->NumberOfParameters; i++)
    {
    ValueInfo *param = currentFunction->Parameters[i];
    if ((param->Type & VTK_PARSE_POINTER_MASK) != 0)
      {
      if (((param->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION) ||
          ((param->Type & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT) ||
          ((param->Type & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_POINTER))
       {
       currentFunction->ArrayFailure = 1;
       }
      }

    /* allow only "void (*func)(void *)" as a valid function pointer */
    if ((param->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
      {
      if (i != 0 || param->Type != VTK_PARSE_FUNCTION_PTR ||
          currentFunction->NumberOfParameters != 2 ||
          currentFunction->Parameters[1]->Type != VTK_PARSE_VOID_PTR ||
          param->Function->NumberOfParameters != 1 ||
          param->Function->Parameters[0]->Type != VTK_PARSE_VOID_PTR ||
          param->Function->Parameters[0]->NumberOfDimensions != 0 ||
          param->Function->ReturnValue->Type != VTK_PARSE_VOID)
        {
        currentFunction->ArrayFailure = 1;
        }
      }
    }
#endif /* VTK_PARSE_LEGACY_REMOVE */

  if (currentClass)
    {
    /* is it a delete function */
    if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
      {
      currentClass->HasDelete = 1;
      }

    currentFunction->Class = currentClass->Name;
    vtkParse_AddFunctionToClass(currentClass, currentFunction);

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
        if (currentNamespace->Functions[i]->NumberOfParameters ==
            currentFunction->NumberOfParameters)
          {
          for (j = 0; j < currentFunction->NumberOfParameters; j++)
            {
            if (currentNamespace->Functions[i]->Parameters[j]->Type ==
                currentFunction->Parameters[j]->Type)
              {
              if (currentFunction->Parameters[j]->Type == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->Parameters[j]->TypeName,
                         currentFunction->Parameters[j]->TypeName) == 0)
                {
                break;
                }
              }
            }
          if (j == currentFunction->NumberOfParameters)
            {
            match = 1;
            break;
            }
          }
        }
      }

    if (!match)
      {
      vtkParse_AddFunctionToNamespace(currentNamespace, currentFunction);

      currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      }
    }

  vtkParse_InitFunction(currentFunction);
  startSig();
}

/* output a function that is not a method of the current class */
void output_friend_function()
{
  ClassInfo *tmpc = currentClass;
  currentClass = NULL;
  output_function();
  currentClass = tmpc;
}

void outputSetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n)
{
  static const char *mnames[] = {
    NULL, NULL,
    "vtkSetVector2Macro", "vtkSetVector3Macro", "vtkSetVector4Macro",
    NULL,
    "vtkSetVector6Macro",
    NULL };
  char ntext[32];
  unsigned long i, m;
  m = (n > 7 ? 0 : n);

  sprintf(ntext, "%lu", n);

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Set", var);
  startSig();
  postSig("void ");
  postSig(currentFunction->Name);
  postSig("(");
  postSig(typeText);
  for (i = 1; i < n; i++)
    {
    postSig(", ");
    postSig(typeText);
    }
  postSig(");");
  for (i = 0; i < n; i++)
    {
    add_parameter(currentFunction, paramType, getTypeId(), 0);
    }
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Set", var);
  currentFunction->Signature =
    vtkstrcat7("void ", currentFunction->Name, "(", typeText,
               " a[", ntext, "]);");
  add_parameter(currentFunction, (VTK_PARSE_POINTER | paramType),
                getTypeId(), n);
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();
}

void outputGetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n)
{
  static const char *mnames[] = {
    NULL, NULL,
    "vtkGetVector2Macro", "vtkGetVector3Macro", "vtkGetVector4Macro",
    NULL,
    "vtkGetVector6Macro",
    NULL };
  unsigned long m;
  m = (n > 7 ? 0 : n);

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Get", var);
  currentFunction->Signature =
    vtkstrcat4(typeText, " *", currentFunction->Name, "();");
  set_return(currentFunction, (VTK_PARSE_POINTER | paramType), getTypeId(), n);
  output_function();
}

/* Set a flag to ignore BTX/ETX markers in the files */
void vtkParse_SetIgnoreBTX(int option)
{
  if (option)
    {
    IgnoreBTX = 1;
    }
  else
    {
    IgnoreBTX = 0;
    }
}

/* Set a flag to recurse into included files */
void vtkParse_SetRecursive(int option)
{
  if (option)
    {
    Recursive = 1;
    }
  else
    {
    Recursive = 0;
    }
}

/* Set the global variable that stores the current executable */
void vtkParse_SetCommandName(const char *name)
{
  CommandName = name;
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, FILE *ifile, FILE *errfile)
{
  unsigned long i, j;
  int ret;
  FileInfo *file_info;
  char *main_class;

  /* "data" is a global variable used by the parser */
  data = (FileInfo *)malloc(sizeof(FileInfo));
  vtkParse_InitFile(data);
  data->Strings = (StringCache *)malloc(sizeof(StringCache));
  vtkParse_InitStringCache(data->Strings);

  /* "preprocessor" is a global struct used by the parser */
  preprocessor = (PreprocessInfo *)malloc(sizeof(PreprocessInfo));
  vtkParsePreprocess_Init(preprocessor, filename);
  preprocessor->Strings = data->Strings;
  vtkParsePreprocess_AddStandardMacros(preprocessor, VTK_PARSE_NATIVE);

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(preprocessor, IncludeDirectories[i]);
    }

  /* add macros specified on the command line */
  for (i = 0; i < NumberOfDefinitions; i++)
    {
    const char *cp = Definitions[i];

    if (*cp == 'U')
      {
      vtkParsePreprocess_RemoveMacro(preprocessor, &cp[1]);
      }
    else if (*cp == 'D')
      {
      const char *definition = &cp[1];
      while (*definition != '=' && *definition != '\0')
        {
        definition++;
        }
      if (*definition == '=')
        {
        definition++;
        }
      else
        {
        definition = NULL;
        }
      vtkParsePreprocess_AddMacro(preprocessor, &cp[1], definition);
      }
    }

  /* should explicitly check for vtkConfigure.h, or even explicitly load it */
#ifdef VTK_USE_64BIT_IDS
  vtkParsePreprocess_AddMacro(preprocessor, "VTK_USE_64BIT_IDS", NULL);
#endif

  data->FileName = vtkstrdup(filename);

  clearComment();

  namespaceDepth = 0;
  currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
  vtkParse_InitNamespace(currentNamespace);
  data->Contents = currentNamespace;

  templateDepth = 0;
  currentTemplate = NULL;

  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(currentFunction);
  startSig();

  parseDebug = 0;
  if (getenv("DEBUG") != NULL)
    {
    parseDebug = 1;
    }

  yyset_in(ifile);
  yyset_out(errfile);
  ret = yyparse();

  if (ret)
    {
    return NULL;
    }

  free(currentFunction);
  yylex_destroy();

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
  strncpy(main_class, &filename[i], j-i);
  main_class[j-i] = '\0';

  /* special treatment of the main class in the file */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->Name, main_class) == 0)
      {
      data->MainClass = currentNamespace->Classes[i];
      break;
      }
    }
  free(main_class);

  vtkParsePreprocess_Free(preprocessor);
  preprocessor = NULL;
  macroName = NULL;

  file_info = data;
  data = NULL;

  return file_info;
}

/* Read a hints file and update the FileInfo */
int vtkParse_ReadHints(FileInfo *file_info, FILE *hfile, FILE *errfile)
{
  char h_cls[512];
  char h_func[512];
  unsigned int h_type, type;
  unsigned long h_value;
  FunctionInfo *func_info;
  ClassInfo *class_info;
  NamespaceInfo *contents;
  unsigned long i, j;
  int lineno = 0;
  int n;

  contents = file_info->Contents;

  /* read each hint line in succession */
  while ((n = fscanf(hfile,"%s %s %x %lu", h_cls, h_func, &h_type, &h_value))
         != EOF)
    {
    lineno++;
    if (n < 4)
      {
      fprintf(errfile, "Wrapping: error parsing hints file line %i\n", lineno);
      exit(1);
      }

    /* erase "ref" and qualifiers from hint type */
    type = ((h_type & VTK_PARSE_BASE_TYPE) |
            (h_type & VTK_PARSE_POINTER_LOWMASK));

    /* find the matching class */
    for (i = 0; i < contents->NumberOfClasses; i++)
      {
      class_info = contents->Classes[i];

      if (strcmp(h_cls, class_info->Name) == 0)
        {
        /* find the matching function */
        for (j = 0; j < class_info->NumberOfFunctions; j++)
          {
          func_info = class_info->Functions[j];

          if ((strcmp(h_func, func_info->Name) == 0) &&
              func_info->ReturnValue &&
              (type == ((func_info->ReturnValue->Type & ~VTK_PARSE_REF) &
                        VTK_PARSE_UNQUALIFIED_TYPE)))
            {
            /* types that hints are accepted for */
            switch (func_info->ReturnValue->Type & VTK_PARSE_UNQUALIFIED_TYPE)
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
              case VTK_PARSE_CHAR_PTR:
                {
                if (func_info->ReturnValue->NumberOfDimensions == 0)
                  {
                  char text[64];
                  sprintf(text, "%lu", h_value);
                  func_info->ReturnValue->Count = h_value;
                  vtkParse_AddStringToArray(
                    &func_info->ReturnValue->Dimensions,
                    &func_info->ReturnValue->NumberOfDimensions,
                    vtkParse_CacheString(
                      file_info->Strings, text, strlen(text)));
#ifndef VTK_PARSE_LEGACY_REMOVE
                  func_info->HaveHint = 1;
                  func_info->HintSize = h_value;
#endif
                  }
                break;
                }
              default:
                {
                fprintf(errfile,
                        "Wrapping: unhandled hint type %#x\n", h_type);
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
  vtkParse_FreeFile(file_info);
  vtkParse_FreeStringCache(file_info->Strings);
  free(file_info->Strings);
  free(file_info);
}

/** Define a preprocessor macro. Function macros are not supported.  */
void vtkParse_DefineMacro(const char *name, const char *definition)
{
  size_t n = vtkParse_SkipId(name);
  size_t l;
  char *cp;

  if (definition == NULL)
    {
    definition = "";
    }

  l = n + strlen(definition) + 3;
  cp = (char *)malloc(l);
  cp[0] = 'D';
  strncpy(&cp[1], name, n);
  cp[n+1] = '\0';
  if (definition[0] != '\0')
    {
    cp[n+1] = '=';
    strcpy(&cp[n+2], definition);
    }
  cp[l] = '\0';

  vtkParse_AddStringToArray(&Definitions, &NumberOfDefinitions, cp);
}

/** Undefine a preprocessor macro.  */
void vtkParse_UndefineMacro(const char *name)
{
  size_t n = vtkParse_SkipId(name);
  char *cp;

  cp = (char *)malloc(n+2);
  cp[0] = 'U';
  strncpy(&cp[1], name, n);
  cp[n+1] = '\0';

  vtkParse_AddStringToArray(&Definitions, &NumberOfDefinitions, cp);
}

/** Add an include directory, for use with the "-I" option.  */
void vtkParse_IncludeDirectory(const char *dirname)
{
  size_t n = strlen(dirname);
  char *cp;
  unsigned long i;

  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    if (strncmp(IncludeDirectories[i], dirname, n) == 0 &&
        IncludeDirectories[i][n] == '\0')
      {
      return;
      }
    }

  cp = (char *)malloc(n+1);
  strcpy(cp, dirname);

  vtkParse_AddStringToArray(
    &IncludeDirectories, &NumberOfIncludeDirectories, cp);
}

/** Return the full path to a header file.  */
const char *vtkParse_FindIncludeFile(const char *filename)
{
  static StringCache cache = {0, 0, 0, 0};
  static PreprocessInfo info = {0, 0, 0, 0, 0, 0, &cache, 0, 0, 0};
  int val;
  unsigned long i;

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(&info, IncludeDirectories[i]);
    }

  return vtkParsePreprocess_FindIncludeFile(&info, filename, 0, &val);
}
