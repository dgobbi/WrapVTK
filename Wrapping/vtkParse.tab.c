
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
     OCT_LITERAL = 270,
     FLOAT_LITERAL = 271,
     CHAR_LITERAL = 272,
     ZERO = 273,
     NULLPTR = 274,
     SSIZE_T = 275,
     SIZE_T = 276,
     NULLPTR_T = 277,
     BEGIN_ATTRIB = 278,
     STRUCT = 279,
     CLASS = 280,
     UNION = 281,
     ENUM = 282,
     PUBLIC = 283,
     PRIVATE = 284,
     PROTECTED = 285,
     CONST = 286,
     VOLATILE = 287,
     MUTABLE = 288,
     STATIC = 289,
     THREAD_LOCAL = 290,
     VIRTUAL = 291,
     EXPLICIT = 292,
     INLINE = 293,
     CONSTEXPR = 294,
     FRIEND = 295,
     EXTERN = 296,
     OPERATOR = 297,
     TEMPLATE = 298,
     THROW = 299,
     TRY = 300,
     CATCH = 301,
     NOEXCEPT = 302,
     DECLTYPE = 303,
     TYPENAME = 304,
     TYPEDEF = 305,
     NAMESPACE = 306,
     USING = 307,
     NEW = 308,
     DELETE = 309,
     DEFAULT = 310,
     STATIC_CAST = 311,
     DYNAMIC_CAST = 312,
     CONST_CAST = 313,
     REINTERPRET_CAST = 314,
     OP_LSHIFT_EQ = 315,
     OP_RSHIFT_EQ = 316,
     OP_LSHIFT = 317,
     OP_RSHIFT_A = 318,
     OP_DOT_POINTER = 319,
     OP_ARROW_POINTER = 320,
     OP_ARROW = 321,
     OP_INCR = 322,
     OP_DECR = 323,
     OP_PLUS_EQ = 324,
     OP_MINUS_EQ = 325,
     OP_TIMES_EQ = 326,
     OP_DIVIDE_EQ = 327,
     OP_REMAINDER_EQ = 328,
     OP_AND_EQ = 329,
     OP_OR_EQ = 330,
     OP_XOR_EQ = 331,
     OP_LOGIC_AND = 332,
     OP_LOGIC_OR = 333,
     OP_LOGIC_EQ = 334,
     OP_LOGIC_NEQ = 335,
     OP_LOGIC_LEQ = 336,
     OP_LOGIC_GEQ = 337,
     ELLIPSIS = 338,
     DOUBLE_COLON = 339,
     OTHER = 340,
     AUTO = 341,
     VOID = 342,
     BOOL = 343,
     FLOAT = 344,
     DOUBLE = 345,
     INT = 346,
     SHORT = 347,
     LONG = 348,
     INT64__ = 349,
     CHAR = 350,
     CHAR16_T = 351,
     CHAR32_T = 352,
     WCHAR_T = 353,
     SIGNED = 354,
     UNSIGNED = 355,
     IdType = 356,
     FloatType = 357,
     TypeInt8 = 358,
     TypeUInt8 = 359,
     TypeInt16 = 360,
     TypeUInt16 = 361,
     TypeInt32 = 362,
     TypeUInt32 = 363,
     TypeInt64 = 364,
     TypeUInt64 = 365,
     TypeFloat32 = 366,
     TypeFloat64 = 367,
     SetMacro = 368,
     GetMacro = 369,
     SetStringMacro = 370,
     GetStringMacro = 371,
     SetClampMacro = 372,
     SetObjectMacro = 373,
     GetObjectMacro = 374,
     BooleanMacro = 375,
     SetVector2Macro = 376,
     SetVector3Macro = 377,
     SetVector4Macro = 378,
     SetVector6Macro = 379,
     GetVector2Macro = 380,
     GetVector3Macro = 381,
     GetVector4Macro = 382,
     GetVector6Macro = 383,
     SetVectorMacro = 384,
     GetVectorMacro = 385,
     ViewportCoordinateMacro = 386,
     WorldCoordinateMacro = 387,
     TypeMacro = 388,
     VTK_BYTE_SWAP_DECL = 389
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
#line 1483 "vtkParse.tab.c"
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
#line 1530 "vtkParse.tab.c"

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
# define YYUSE(e) ((void) (e))

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
#define YYLAST   9313

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  276
/* YYNRULES -- Number of rules.  */
#define YYNRULES  703
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1185
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   389

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   154,     2,     2,     2,   150,   147,     2,
     141,   142,   148,   153,   140,   152,   157,   151,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   139,   135,
     143,   138,   149,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   144,     2,   145,   156,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   136,   155,   137,   146,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134
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
     945,   947,   949,   950,   952,   953,   956,   958,   961,   962,
     968,   969,   970,   973,   975,   977,   979,   981,   983,   986,
     989,   992,   995,   998,  1001,  1004,  1007,  1011,  1015,  1019,
    1020,  1026,  1028,  1030,  1032,  1033,  1039,  1040,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,
    1088,  1090,  1092,  1094,  1096,  1098,  1100,  1102,  1103,  1107,
    1109,  1111,  1113,  1115,  1118,  1122,  1124,  1126,  1128,  1130,
    1132,  1134,  1137,  1139,  1141,  1143,  1145,  1147,  1149,  1151,
    1153,  1156,  1159,  1160,  1164,  1165,  1170,  1172,  1176,  1181,
    1183,  1185,  1186,  1191,  1194,  1197,  1200,  1201,  1205,  1206,
    1211,  1214,  1215,  1219,  1220,  1225,  1227,  1229,  1231,  1233,
    1236,  1239,  1242,  1245,  1248,  1250,  1252,  1254,  1256,  1258,
    1260,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,
    1280,  1282,  1284,  1286,  1288,  1290,  1292,  1294,  1296,  1298,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1322,  1324,  1326,  1328,  1331,  1334,  1337,  1338,  1343,
    1344,  1346,  1348,  1351,  1352,  1355,  1356,  1357,  1364,  1365,
    1373,  1374,  1375,  1376,  1386,  1387,  1393,  1394,  1400,  1401,
    1402,  1413,  1414,  1422,  1423,  1424,  1425,  1435,  1442,  1443,
    1451,  1452,  1460,  1461,  1469,  1470,  1478,  1479,  1487,  1488,
    1496,  1497,  1505,  1506,  1514,  1515,  1525,  1526,  1536,  1541,
    1546,  1554,  1555,  1557,  1560,  1563,  1567,  1571,  1573,  1575,
    1577,  1579,  1582,  1585,  1588,  1590,  1592,  1594,  1596,  1598,
    1600,  1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,
    1620,  1622,  1624,  1626,  1628,  1630,  1632,  1634,  1636,  1638,
    1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,  1658,
    1660,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,  1678,
    1680,  1682,  1684,  1686,  1688,  1690,  1692,  1694,  1696,  1698,
    1700,  1702,  1704,  1706,  1708,  1710,  1712,  1714,  1716,  1718,
    1720,  1722,  1724,  1726,  1728,  1730,  1732,  1734,  1737,  1739,
    1741,  1743,  1744,  1748,  1750,  1752,  1754,  1756,  1758,  1760,
    1762,  1764,  1766,  1768,  1770,  1772,  1774,  1775,  1778,  1780,
    1782,  1784,  1786,  1788,  1790,  1792,  1794,  1796,  1797,  1800,
    1801,  1804,  1806,  1808,  1810,  1812,  1814,  1815,  1820,  1822,
    1824,  1825,  1830,  1831,  1837,  1838,  1843,  1844,  1849,  1850,
    1855,  1856,  1861,  1862,  1865,  1866,  1869,  1871,  1873,  1875,
    1877,  1879,  1881,  1883,  1885,  1887,  1889,  1891,  1893,  1895,
    1897,  1899,  1901,  1903,  1905,  1907,  1909,  1911,  1915,  1919,
    1924,  1928,  1930,  1932
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     159,     0,    -1,   160,    -1,    -1,    -1,   160,   161,   368,
     162,    -1,   219,    -1,   217,    -1,   220,    -1,   169,    -1,
     192,    -1,   166,    -1,   168,    -1,   165,    -1,   207,    -1,
     290,    -1,   193,    -1,   171,    -1,   240,    -1,   163,    -1,
     164,    -1,   372,    -1,   320,   135,    -1,   135,    -1,   222,
     171,    -1,   222,   240,    -1,   222,   203,    -1,   222,   163,
      -1,   222,   220,    -1,    41,    43,   429,   426,   135,    -1,
      43,   429,   426,   135,    -1,    41,    12,   136,   160,   137,
      -1,    51,   136,   425,   137,    -1,    -1,    51,   333,   167,
     136,   160,   137,    -1,    51,   333,   138,   322,   135,    -1,
     170,    -1,   222,   170,    -1,   177,   368,   178,   135,    -1,
     177,   368,   135,    -1,   336,   177,   368,   178,   135,    -1,
     172,   334,   292,   135,    -1,   336,   172,   334,   292,   135,
      -1,    -1,   174,   173,   136,   181,   137,    -1,    -1,   177,
     368,   178,   180,   139,   175,   187,    -1,   177,   368,   178,
     180,    -1,    -1,   177,   368,   139,   176,   187,    -1,   177,
     368,    -1,    25,    -1,    24,    -1,    26,    -1,   323,   179,
     368,    -1,   327,   323,   179,   368,    -1,   179,   368,    -1,
     332,    -1,   328,    -1,    -1,     3,    -1,    -1,    -1,   181,
     182,   368,   184,    -1,   181,   183,   139,    -1,    28,    -1,
      29,    -1,    30,    -1,   217,    -1,   220,    -1,   169,    -1,
     192,    -1,   186,    -1,   207,    -1,   290,    -1,   193,    -1,
     171,    -1,   244,    -1,   185,    -1,   164,    -1,   372,    -1,
     134,   432,    -1,   320,   135,    -1,   135,    -1,   222,   171,
      -1,   222,   244,    -1,   222,   185,    -1,   222,   220,    -1,
      40,   205,    -1,    40,   222,   205,    -1,    40,   169,    -1,
      40,   245,   266,    -1,   188,    -1,   187,   140,   368,   188,
      -1,   320,   234,    -1,    36,   190,   320,   234,    -1,   191,
     189,   320,   234,    -1,    -1,    36,    -1,    -1,   191,    -1,
      28,    -1,    29,    -1,    30,    -1,   197,   368,   320,   198,
     135,    -1,   197,   368,   135,    -1,   336,   197,   368,   320,
     198,   135,    -1,   194,   334,   292,   135,    -1,   336,   194,
     334,   292,   135,    -1,    -1,   196,   136,   195,   200,   137,
      -1,   197,   368,   320,   198,    -1,   197,   368,   198,    -1,
      27,    -1,    27,    25,    -1,    27,    24,    -1,    -1,    -1,
     139,   199,   343,    -1,   201,    -1,   200,   140,   201,    -1,
      -1,   332,    -1,    -1,   332,   138,   202,   400,    -1,   342,
     234,   323,   332,   204,   135,    -1,   138,   426,    -1,   430,
      -1,   177,   368,   178,   180,   206,    -1,   336,   177,   368,
     178,   180,   206,    -1,   177,   368,   206,    -1,   336,   177,
     368,   206,    -1,   136,   425,   137,   426,   135,    -1,   139,
     426,   135,    -1,   208,    -1,   336,   208,    -1,    50,   342,
     216,   210,   135,    -1,    50,   172,   334,   209,   135,    -1,
      50,   336,   172,   334,   209,   135,    -1,    50,   194,   334,
     209,   135,    -1,    50,   336,   194,   334,   209,   135,    -1,
     211,   210,    -1,    -1,   210,   140,   211,    -1,   296,   216,
      -1,   300,    -1,   213,    -1,    -1,    -1,   234,   310,   141,
     214,   279,   142,   215,   307,    -1,   212,    -1,    52,   218,
     135,    -1,   320,    -1,    49,   320,    -1,   323,   255,    -1,
     323,   250,    -1,   327,   323,   255,    -1,   327,   323,   250,
      -1,    52,    51,   320,   135,    -1,    -1,    52,   320,   368,
     138,   221,   342,   297,   135,    -1,    43,   143,   415,    -1,
      -1,    43,   143,   223,   224,   415,    -1,   226,    -1,    -1,
     224,   140,   225,   226,    -1,    -1,    -1,   227,   353,   297,
     228,   236,    -1,    -1,    -1,   229,   235,   297,   230,   236,
      -1,    -1,    -1,    -1,   231,   222,    25,   232,   297,   233,
     236,    -1,    -1,    83,    -1,    25,    -1,    49,    -1,    -1,
     237,    -1,    -1,   138,   238,   239,    -1,   411,    -1,   239,
     411,    -1,   241,   266,    -1,   246,   266,    -1,   242,   266,
      -1,   243,   266,    -1,   342,   234,   257,    -1,   342,   234,
     323,   257,    -1,   323,   271,    -1,   336,   323,   271,    -1,
     323,   247,    -1,   336,   323,   247,    -1,   342,   234,   323,
     251,    -1,   245,   266,    -1,   323,   255,   368,   135,    -1,
     336,   323,   255,   368,   135,    -1,   342,   234,   257,    -1,
     246,    -1,   271,    -1,   336,   271,    -1,   247,    -1,   336,
     247,    -1,   342,   234,   251,    -1,    -1,    -1,   250,   141,
     248,   279,   142,   368,   249,   258,   263,    -1,   256,   342,
      -1,    -1,   253,   252,   258,   263,    -1,    -1,   255,   368,
     141,   254,   279,   142,   368,    -1,   256,   396,    -1,    42,
      -1,   269,   258,   263,    -1,    -1,   258,   259,    -1,    -1,
      44,   260,   419,    -1,    31,    -1,   138,    18,    -1,     3,
      -1,   261,   419,    -1,   261,    -1,   262,    -1,    47,    -1,
     138,    54,    -1,   138,    55,    -1,    -1,   264,    -1,    -1,
      66,   265,   349,    -1,   136,   425,   137,    -1,   267,    -1,
     135,    -1,    45,   276,   136,   425,   137,   268,    -1,    -1,
     268,    46,   432,   136,   425,   137,    -1,    -1,   321,   368,
     141,   270,   279,   142,   368,    -1,    -1,    -1,   274,   272,
     276,   273,   258,   263,    -1,    -1,   321,   141,   275,   279,
     142,   368,    -1,    -1,   139,   277,    -1,   278,    -1,   277,
     140,   278,    -1,   320,   432,   234,    -1,    -1,    -1,   280,
     281,    -1,   283,    -1,    -1,   281,   140,   282,   283,    -1,
     281,   140,    83,    -1,    83,    -1,    -1,    -1,   284,   342,
     297,   285,   286,    -1,    -1,   287,    -1,    -1,   138,   288,
     400,    -1,    -1,   289,   423,    -1,   342,   291,   293,   135,
      -1,   300,   286,    -1,    -1,   295,   293,    -1,    -1,    -1,
     293,   140,   294,   295,    -1,   296,   291,    -1,    -1,   361,
      -1,   234,   299,   304,    -1,    -1,   302,   368,   308,   142,
     298,   304,    -1,    -1,   310,    -1,   234,   310,   312,    -1,
      -1,   302,   309,   142,   301,   304,    -1,    -1,    10,   303,
     366,    -1,    11,    -1,    -1,    -1,    -1,   141,   305,   279,
     142,   368,   306,   307,    -1,   313,    -1,    -1,   307,    33,
      -1,   307,    31,    -1,   307,    44,   432,    -1,   307,    47,
     432,    -1,   307,    47,    -1,   297,    -1,   361,   297,    -1,
     300,    -1,   361,   300,    -1,   321,   368,    -1,   321,   368,
     139,   311,    -1,    15,    -1,    13,    -1,    14,    -1,    -1,
     313,    -1,    -1,   314,   315,    -1,   316,    -1,   315,   316,
      -1,    -1,   144,   317,   318,   145,   368,    -1,    -1,    -1,
     319,   400,    -1,   321,    -1,   322,    -1,   332,    -1,   328,
      -1,   330,    -1,   325,   179,    -1,   325,   330,    -1,   323,
     321,    -1,   327,   321,    -1,   327,   322,    -1,   326,   327,
      -1,   328,   327,    -1,   330,   327,    -1,   323,   326,   327,
      -1,   323,   328,   327,    -1,   323,   330,   327,    -1,    -1,
     323,    43,   324,   328,   327,    -1,   146,    -1,   333,    -1,
      84,    -1,    -1,   333,   143,   329,   409,   415,    -1,    -1,
      48,   331,   419,    -1,     4,    -1,     5,    -1,     3,    -1,
       9,    -1,     8,    -1,     6,    -1,     7,    -1,    22,    -1,
      21,    -1,    20,    -1,   103,    -1,   104,    -1,   105,    -1,
     106,    -1,   107,    -1,   108,    -1,   109,    -1,   110,    -1,
     111,    -1,   112,    -1,   101,    -1,   102,    -1,     3,    -1,
       5,    -1,     4,    -1,     9,    -1,     8,    -1,     6,    -1,
       7,    -1,    -1,   334,   335,   368,    -1,   337,    -1,   360,
      -1,    50,    -1,    40,    -1,   337,   368,    -1,   336,   337,
     368,    -1,   338,    -1,   339,    -1,   340,    -1,    39,    -1,
      33,    -1,    41,    -1,    41,    12,    -1,    34,    -1,    35,
      -1,    38,    -1,    36,    -1,    37,    -1,    31,    -1,    32,
      -1,   340,    -1,   341,   340,    -1,   343,   296,    -1,    -1,
     346,   344,   334,    -1,    -1,   336,   346,   345,   334,    -1,
     347,    -1,   177,   368,   178,    -1,   197,   368,   320,   368,
      -1,   358,    -1,   330,    -1,    -1,    49,   348,   320,   368,
      -1,   328,   368,    -1,   322,   368,    -1,   350,   296,    -1,
      -1,   347,   351,   334,    -1,    -1,   336,   347,   352,   334,
      -1,   354,   296,    -1,    -1,   357,   355,   334,    -1,    -1,
     336,   346,   356,   334,    -1,   358,    -1,   330,    -1,   328,
      -1,   322,    -1,    24,   320,    -1,    26,   320,    -1,   197,
     320,    -1,   360,   368,    -1,   359,   368,    -1,     6,    -1,
       7,    -1,     8,    -1,     9,    -1,     3,    -1,     4,    -1,
       5,    -1,    22,    -1,    20,    -1,    21,    -1,   103,    -1,
     104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,    -1,
     109,    -1,   110,    -1,   111,    -1,   112,    -1,   101,    -1,
     102,    -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,
      90,    -1,    95,    -1,    96,    -1,    97,    -1,    98,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    99,    -1,
     100,    -1,   362,    -1,   363,    -1,   367,    -1,   367,   362,
      -1,   147,   368,    -1,    77,   368,    -1,    -1,   148,   368,
     365,   366,    -1,    -1,   341,    -1,   364,    -1,   367,   364,
      -1,    -1,   368,   369,    -1,    -1,    -1,    23,   370,   405,
     371,   145,   145,    -1,    -1,   113,   141,   332,   140,   373,
     342,   142,    -1,    -1,    -1,    -1,   114,   141,   374,   332,
     140,   375,   342,   376,   142,    -1,    -1,   115,   141,   377,
     332,   142,    -1,    -1,   116,   141,   378,   332,   142,    -1,
      -1,    -1,   117,   141,   332,   140,   379,   342,   380,   140,
     426,   142,    -1,    -1,   118,   141,   332,   140,   381,   342,
     142,    -1,    -1,    -1,    -1,   119,   141,   382,   332,   140,
     383,   342,   384,   142,    -1,   120,   141,   332,   140,   342,
     142,    -1,    -1,   121,   141,   332,   140,   385,   342,   142,
      -1,    -1,   125,   141,   332,   140,   386,   342,   142,    -1,
      -1,   122,   141,   332,   140,   387,   342,   142,    -1,    -1,
     126,   141,   332,   140,   388,   342,   142,    -1,    -1,   123,
     141,   332,   140,   389,   342,   142,    -1,    -1,   127,   141,
     332,   140,   390,   342,   142,    -1,    -1,   124,   141,   332,
     140,   391,   342,   142,    -1,    -1,   128,   141,   332,   140,
     392,   342,   142,    -1,    -1,   129,   141,   332,   140,   393,
     342,   140,    13,   142,    -1,    -1,   130,   141,   332,   140,
     394,   342,   140,    13,   142,    -1,   131,   141,   332,   142,
      -1,   132,   141,   332,   142,    -1,   133,   141,   332,   140,
     320,   395,   142,    -1,    -1,   140,    -1,   141,   142,    -1,
     144,   145,    -1,    53,   144,   145,    -1,    54,   144,   145,
      -1,   143,    -1,   149,    -1,   140,    -1,   138,    -1,    63,
     149,    -1,    63,    63,    -1,    12,     3,    -1,   397,    -1,
     150,    -1,   148,    -1,   151,    -1,   152,    -1,   153,    -1,
     154,    -1,   146,    -1,   147,    -1,   155,    -1,   156,    -1,
      53,    -1,    54,    -1,    60,    -1,    61,    -1,    62,    -1,
      64,    -1,    65,    -1,    66,    -1,    69,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    67,    -1,    68,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,    80,    -1,    81,    -1,    82,    -1,    50,    -1,
      49,    -1,    25,    -1,    24,    -1,    26,    -1,    43,    -1,
      28,    -1,    30,    -1,    29,    -1,    31,    -1,    34,    -1,
      35,    -1,    39,    -1,    38,    -1,    36,    -1,    37,    -1,
      48,    -1,    55,    -1,    41,    -1,    52,    -1,    51,    -1,
      42,    -1,    27,    -1,    44,    -1,    47,    -1,    58,    -1,
      57,    -1,    56,    -1,    59,    -1,    15,    -1,    13,    -1,
      14,    -1,    16,    -1,    17,    -1,    12,    -1,    18,    -1,
      19,    -1,   401,    -1,   400,   401,    -1,   403,    -1,   413,
      -1,   143,    -1,    -1,   149,   402,   404,    -1,    63,    -1,
     404,    -1,    84,    -1,   416,    -1,   419,    -1,   423,    -1,
     397,    -1,   139,    -1,   157,    -1,   398,    -1,   399,    -1,
     360,    -1,   359,    -1,    -1,   405,   407,    -1,   403,    -1,
     143,    -1,   149,    -1,    63,    -1,   406,    -1,   138,    -1,
     140,    -1,   407,    -1,   135,    -1,    -1,   409,   412,    -1,
      -1,   410,   408,    -1,   413,    -1,   403,    -1,   411,    -1,
     138,    -1,   140,    -1,    -1,   143,   414,   409,   415,    -1,
     149,    -1,    63,    -1,    -1,   144,   417,   405,   145,    -1,
      -1,    23,   418,   405,   145,   145,    -1,    -1,   141,   420,
     405,   142,    -1,    -1,    10,   421,   405,   142,    -1,    -1,
      11,   422,   405,   142,    -1,    -1,   136,   424,   410,   137,
      -1,    -1,   425,   427,    -1,    -1,   426,   428,    -1,   428,
      -1,   135,    -1,   429,    -1,   143,    -1,   430,    -1,   432,
      -1,   431,    -1,    84,    -1,    83,    -1,   397,    -1,    63,
      -1,   139,    -1,   157,    -1,   149,    -1,   138,    -1,   140,
      -1,   398,    -1,   399,    -1,   360,    -1,   359,    -1,    85,
      -1,   136,   425,   137,    -1,   144,   425,   145,    -1,    23,
     425,   145,   145,    -1,   433,   425,   142,    -1,   141,    -1,
      10,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1469,  1469,  1471,  1473,  1472,  1483,  1484,  1485,  1486,
    1487,  1488,  1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,
    1497,  1498,  1499,  1500,  1503,  1504,  1505,  1506,  1507,  1510,
    1511,  1518,  1525,  1526,  1526,  1530,  1537,  1538,  1541,  1542,
    1543,  1546,  1547,  1550,  1550,  1565,  1564,  1570,  1576,  1575,
    1580,  1586,  1587,  1588,  1591,  1593,  1595,  1598,  1599,  1602,
    1603,  1605,  1607,  1606,  1615,  1619,  1620,  1621,  1624,  1625,
    1626,  1627,  1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,
    1636,  1637,  1638,  1639,  1642,  1643,  1644,  1645,  1648,  1649,
    1650,  1651,  1654,  1655,  1658,  1660,  1663,  1668,  1669,  1672,
    1673,  1676,  1677,  1678,  1689,  1690,  1691,  1695,  1696,  1700,
    1700,  1713,  1719,  1727,  1728,  1729,  1732,  1733,  1733,  1737,
    1738,  1740,  1741,  1742,  1742,  1750,  1754,  1755,  1758,  1760,
    1762,  1763,  1766,  1767,  1775,  1776,  1779,  1780,  1782,  1784,
    1786,  1790,  1792,  1793,  1796,  1799,  1800,  1803,  1804,  1803,
    1808,  1842,  1845,  1846,  1847,  1849,  1851,  1853,  1857,  1860,
    1860,  1891,  1894,  1893,  1911,  1913,  1912,  1917,  1919,  1917,
    1921,  1923,  1921,  1925,  1926,  1928,  1925,  1939,  1940,  1943,
    1944,  1946,  1947,  1950,  1950,  1960,  1961,  1969,  1970,  1971,
    1972,  1975,  1978,  1979,  1980,  1983,  1984,  1985,  1988,  1989,
    1990,  1994,  1995,  1996,  1997,  2000,  2001,  2002,  2006,  2011,
    2005,  2023,  2027,  2027,  2039,  2038,  2047,  2051,  2054,  2063,
    2064,  2067,  2067,  2068,  2069,  2075,  2080,  2081,  2082,  2085,
    2088,  2089,  2091,  2092,  2095,  2095,  2103,  2104,  2105,  2108,
    2110,  2111,  2115,  2114,  2126,  2127,  2126,  2146,  2146,  2150,
    2151,  2154,  2155,  2158,  2164,  2165,  2165,  2168,  2169,  2169,
    2171,  2173,  2177,  2179,  2177,  2203,  2204,  2207,  2207,  2209,
    2209,  2218,  2221,  2284,  2285,  2287,  2288,  2288,  2291,  2294,
    2295,  2299,  2310,  2310,  2328,  2329,  2333,  2335,  2335,  2353,
    2353,  2355,  2359,  2360,  2361,  2360,  2366,  2368,  2369,  2370,
    2371,  2372,  2373,  2376,  2377,  2381,  2382,  2386,  2387,  2391,
    2392,  2393,  2396,  2397,  2400,  2400,  2403,  2404,  2407,  2407,
    2411,  2412,  2412,  2419,  2420,  2423,  2424,  2425,  2426,  2427,
    2430,  2432,  2434,  2438,  2440,  2442,  2444,  2446,  2448,  2450,
    2450,  2455,  2458,  2461,  2464,  2464,  2472,  2472,  2480,  2481,
    2482,  2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,  2491,
    2492,  2493,  2494,  2495,  2496,  2497,  2498,  2499,  2500,  2501,
    2508,  2509,  2510,  2511,  2512,  2513,  2514,  2520,  2521,  2524,
    2525,  2527,  2528,  2531,  2532,  2535,  2536,  2537,  2538,  2541,
    2542,  2543,  2544,  2545,  2549,  2550,  2551,  2554,  2555,  2558,
    2559,  2567,  2570,  2570,  2572,  2572,  2576,  2577,  2579,  2583,
    2584,  2586,  2586,  2588,  2590,  2594,  2597,  2597,  2599,  2599,
    2603,  2606,  2606,  2608,  2608,  2612,  2613,  2615,  2617,  2619,
    2621,  2623,  2627,  2628,  2631,  2632,  2633,  2634,  2635,  2636,
    2637,  2638,  2639,  2640,  2641,  2642,  2643,  2644,  2645,  2646,
    2647,  2648,  2649,  2650,  2651,  2652,  2655,  2656,  2657,  2658,
    2659,  2660,  2661,  2662,  2663,  2664,  2665,  2666,  2667,  2668,
    2669,  2689,  2690,  2691,  2692,  2695,  2699,  2703,  2703,  2707,
    2708,  2723,  2724,  2740,  2741,  2744,  2744,  2744,  2751,  2751,
    2761,  2762,  2762,  2761,  2771,  2771,  2781,  2781,  2790,  2790,
    2790,  2823,  2822,  2833,  2834,  2834,  2833,  2843,  2861,  2861,
    2866,  2866,  2871,  2871,  2876,  2876,  2881,  2881,  2886,  2886,
    2891,  2891,  2896,  2896,  2901,  2901,  2918,  2918,  2932,  2969,
    3007,  3044,  3045,  3052,  3053,  3054,  3055,  3056,  3057,  3058,
    3059,  3060,  3061,  3062,  3063,  3066,  3067,  3068,  3069,  3070,
    3071,  3072,  3073,  3074,  3075,  3076,  3077,  3078,  3079,  3080,
    3081,  3082,  3083,  3084,  3085,  3086,  3087,  3088,  3089,  3090,
    3091,  3092,  3093,  3094,  3095,  3096,  3097,  3098,  3099,  3102,
    3103,  3104,  3105,  3106,  3107,  3108,  3109,  3110,  3111,  3112,
    3113,  3114,  3115,  3116,  3117,  3118,  3119,  3120,  3121,  3122,
    3123,  3124,  3125,  3126,  3127,  3128,  3129,  3130,  3133,  3134,
    3135,  3136,  3137,  3138,  3139,  3140,  3147,  3148,  3151,  3152,
    3153,  3154,  3154,  3155,  3158,  3159,  3162,  3163,  3164,  3165,
    3195,  3195,  3196,  3197,  3198,  3199,  3222,  3223,  3226,  3227,
    3228,  3229,  3232,  3233,  3234,  3237,  3238,  3240,  3241,  3243,
    3244,  3247,  3248,  3251,  3252,  3253,  3257,  3256,  3270,  3271,
    3274,  3274,  3276,  3276,  3280,  3280,  3282,  3282,  3284,  3284,
    3288,  3288,  3293,  3294,  3296,  3297,  3300,  3301,  3304,  3305,
    3308,  3309,  3310,  3311,  3312,  3313,  3314,  3315,  3315,  3315,
    3315,  3315,  3316,  3317,  3318,  3319,  3320,  3323,  3326,  3327,
    3330,  3333,  3333,  3333
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VTK_ID", "QT_ID", "StdString",
  "UnicodeString", "OSTREAM", "ISTREAM", "LP", "LA", "STRING_LITERAL",
  "INT_LITERAL", "HEX_LITERAL", "OCT_LITERAL", "FLOAT_LITERAL",
  "CHAR_LITERAL", "ZERO", "NULLPTR", "SSIZE_T", "SIZE_T", "NULLPTR_T",
  "BEGIN_ATTRIB", "STRUCT", "CLASS", "UNION", "ENUM", "PUBLIC", "PRIVATE",
  "PROTECTED", "CONST", "VOLATILE", "MUTABLE", "STATIC", "THREAD_LOCAL",
  "VIRTUAL", "EXPLICIT", "INLINE", "CONSTEXPR", "FRIEND", "EXTERN",
  "OPERATOR", "TEMPLATE", "THROW", "TRY", "CATCH", "NOEXCEPT", "DECLTYPE",
  "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "NEW", "DELETE", "DEFAULT",
  "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST", "REINTERPRET_CAST",
  "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT_A",
  "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR",
  "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND",
  "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ",
  "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER", "AUTO", "VOID",
  "BOOL", "FLOAT", "DOUBLE", "INT", "SHORT", "LONG", "INT64__", "CHAR",
  "CHAR16_T", "CHAR32_T", "WCHAR_T", "SIGNED", "UNSIGNED", "IdType",
  "FloatType", "TypeInt8", "TypeUInt8", "TypeInt16", "TypeUInt16",
  "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64", "TypeFloat32",
  "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
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
       0,   158,   159,   160,   161,   160,   162,   162,   162,   162,
     162,   162,   162,   162,   162,   162,   162,   162,   162,   162,
     162,   162,   162,   162,   163,   163,   163,   163,   163,   164,
     164,   165,   166,   167,   166,   168,   169,   169,   170,   170,
     170,   171,   171,   173,   172,   175,   174,   174,   176,   174,
     174,   177,   177,   177,   178,   178,   178,   179,   179,   180,
     180,   181,   182,   181,   181,   183,   183,   183,   184,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   184,   184,   185,   185,   185,   185,   186,   186,
     186,   186,   187,   187,   188,   188,   188,   189,   189,   190,
     190,   191,   191,   191,   192,   192,   192,   193,   193,   195,
     194,   196,   196,   197,   197,   197,   198,   199,   198,   200,
     200,   201,   201,   202,   201,   203,   204,   204,   205,   205,
     205,   205,   206,   206,   207,   207,   208,   208,   208,   208,
     208,   209,   210,   210,   211,   212,   212,   214,   215,   213,
     216,   217,   218,   218,   218,   218,   218,   218,   219,   221,
     220,   222,   223,   222,   224,   225,   224,   227,   228,   226,
     229,   230,   226,   231,   232,   233,   226,   234,   234,   235,
     235,   236,   236,   238,   237,   239,   239,   240,   240,   240,
     240,   241,   242,   242,   242,   243,   243,   243,   244,   244,
     244,   245,   245,   245,   245,   246,   246,   246,   248,   249,
     247,   250,   252,   251,   254,   253,   255,   256,   257,   258,
     258,   260,   259,   259,   259,   259,   259,   259,   259,   261,
     262,   262,   263,   263,   265,   264,   266,   266,   266,   267,
     268,   268,   270,   269,   272,   273,   271,   275,   274,   276,
     276,   277,   277,   278,   279,   280,   279,   281,   282,   281,
     281,   281,   284,   285,   283,   286,   286,   288,   287,   289,
     287,   290,   291,   292,   292,   293,   294,   293,   295,   296,
     296,   297,   298,   297,   299,   299,   300,   301,   300,   303,
     302,   302,   304,   305,   306,   304,   304,   307,   307,   307,
     307,   307,   307,   308,   308,   309,   309,   310,   310,   311,
     311,   311,   312,   312,   314,   313,   315,   315,   317,   316,
     318,   319,   318,   320,   320,   321,   321,   321,   321,   321,
     322,   322,   322,   323,   323,   323,   323,   323,   323,   324,
     323,   325,   326,   327,   329,   328,   331,   330,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     333,   333,   333,   333,   333,   333,   333,   334,   334,   335,
     335,   335,   335,   336,   336,   337,   337,   337,   337,   338,
     338,   338,   338,   338,   339,   339,   339,   340,   340,   341,
     341,   342,   344,   343,   345,   343,   346,   346,   346,   347,
     347,   348,   347,   347,   347,   349,   351,   350,   352,   350,
     353,   355,   354,   356,   354,   357,   357,   357,   357,   357,
     357,   357,   358,   358,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   360,   360,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   361,   361,   361,   361,   362,   363,   365,   364,   366,
     366,   367,   367,   368,   368,   370,   371,   369,   373,   372,
     374,   375,   376,   372,   377,   372,   378,   372,   379,   380,
     372,   381,   372,   382,   383,   384,   372,   372,   385,   372,
     386,   372,   387,   372,   388,   372,   389,   372,   390,   372,
     391,   372,   392,   372,   393,   372,   394,   372,   372,   372,
     372,   395,   395,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   399,   399,
     399,   399,   399,   399,   399,   399,   400,   400,   401,   401,
     401,   402,   401,   401,   403,   403,   404,   404,   404,   404,
     404,   404,   404,   404,   404,   404,   405,   405,   406,   406,
     406,   406,   407,   407,   407,   408,   408,   409,   409,   410,
     410,   411,   411,   412,   412,   412,   414,   413,   415,   415,
     417,   416,   418,   416,   420,   419,   421,   419,   422,   419,
     424,   423,   425,   425,   426,   426,   427,   427,   428,   428,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   430,   431,   431,
     432,   433,   433,   433
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
       1,     1,     0,     1,     0,     2,     1,     2,     0,     5,
       0,     0,     2,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     2,     2,     2,     3,     3,     3,     0,
       5,     1,     1,     1,     0,     5,     0,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     1,
       1,     1,     1,     2,     3,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     3,     0,     4,     1,     3,     4,     1,
       1,     0,     4,     2,     2,     2,     0,     3,     0,     4,
       2,     0,     3,     0,     4,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     0,     4,     0,
       1,     1,     2,     0,     2,     0,     0,     6,     0,     7,
       0,     0,     0,     9,     0,     5,     0,     5,     0,     0,
      10,     0,     7,     0,     0,     0,     9,     6,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     9,     0,     9,     4,     4,
       7,     0,     1,     2,     2,     3,     3,     1,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     0,     4,     1,     1,
       0,     4,     0,     5,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       3,     1,     1,     1
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
       0,     0,     0,     0
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
       0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   483,     0,   438,   439,   440,   434,
     435,   436,   437,   442,   443,   441,   485,    52,    51,    53,
     113,   397,   398,   389,   392,   393,   395,   396,   394,   388,
     390,   217,     0,   346,   411,     0,     0,     0,   343,   456,
     457,   458,   459,   460,   465,   466,   467,   468,   461,   462,
     463,   464,   469,   470,   454,   455,   444,   445,   446,   447,
     448,   449,   450,   451,   452,   453,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   341,     5,
      19,    20,    13,    11,    12,     9,    36,    17,   377,    43,
     483,    10,    16,   377,     0,   483,    14,   134,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   205,     0,     0,
      15,     0,   323,   483,     0,     0,     0,     0,   483,   410,
     325,   342,     0,   483,   385,   386,   387,   177,   279,   402,
     406,   409,   483,   483,   484,    21,   636,   115,   114,   391,
       0,   438,   439,   440,   434,   435,   436,   437,   702,   703,
     613,   609,   610,   608,   611,   612,   614,   615,   442,   443,
     441,   672,   582,   581,   583,   601,   585,   587,   586,   588,
     589,   590,   593,   594,   592,   591,   597,   600,   584,   602,
     603,   595,   580,   579,   599,   598,   555,   556,   596,   606,
     605,   604,   607,   557,   558,   559,   686,   560,   561,   562,
     568,   569,   563,   564,   565,   566,   567,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   684,   683,   696,   454,
     455,   444,   445,   446,   447,   448,   449,   450,   451,   452,
     453,   672,   690,   687,   691,   701,   162,   672,   551,   552,
     546,   689,   545,   547,   548,   549,   550,   553,   554,   688,
     695,   694,   685,   692,   693,   674,   680,   682,   681,   672,
       0,     0,   438,   439,   440,   434,   435,   436,   437,   390,
     377,   483,   377,   483,   483,     0,   483,   410,     0,   177,
     370,   372,   371,   375,   376,   374,   373,   672,    33,   350,
     348,   349,   353,   354,   352,   351,   357,   356,   355,     0,
       0,   368,   369,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,     0,   483,   324,     0,     0,   326,   327,
       0,   490,   494,   496,     0,     0,   503,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   279,     0,    50,   279,   109,   116,     0,     0,    27,
      37,    24,   483,    26,    28,     0,    25,     0,   177,   249,
     238,   672,   187,   237,   189,   190,   188,   208,   483,     0,
     211,    22,   414,   339,   195,   193,   244,   330,     0,   326,
     327,   328,    58,   329,    57,     0,   333,   331,   332,   334,
     413,   335,   344,   377,   483,   377,   483,   135,   206,     0,
     483,   404,   383,   289,   291,   178,     0,   275,   265,   177,
     483,   483,   483,   401,   280,   471,   472,   481,   473,   377,
     433,   432,   486,     3,   674,     0,     0,   659,   658,   167,
     161,     0,     0,     0,   666,   668,   664,   347,   483,   391,
     279,    50,   279,   116,   330,   377,   377,   150,   146,   142,
       0,   145,     0,     0,     0,   153,     0,   151,     0,   155,
     154,     0,     0,   350,   348,   349,   353,   354,   352,   351,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   382,   381,     0,   275,   177,   483,   379,   380,    61,
      39,    48,   407,   483,     0,     0,    58,     0,     0,   121,
     105,   117,   112,   483,   483,     0,     0,     0,     0,     0,
       0,   255,     0,     0,   249,   247,   336,   337,   338,   647,
     279,    50,   279,   116,   196,   194,   384,   377,   479,   207,
     212,   483,     0,   191,   219,   312,   483,     0,     0,   267,
     272,   266,     0,     0,   305,     0,   177,   476,   475,   477,
     474,   482,   403,   662,   641,   625,   670,   643,   630,   644,
     639,   660,   640,   631,   635,   634,     0,   629,   632,   633,
     638,   624,   642,   637,   626,   627,   628,     4,     0,   677,
     679,     0,   673,   676,   678,   697,     0,   164,     0,     0,
       0,   698,    30,   675,   700,   636,   636,   636,   412,     0,
     142,   177,   407,     0,   483,   279,   279,     0,   312,   483,
     326,   327,    32,     0,     0,     3,   158,   159,     0,   555,
     556,     0,   540,   539,     0,   537,     0,   538,   216,   544,
     157,   156,   488,     0,     0,     0,   498,   501,     0,     0,
     508,   512,   516,   520,   510,   514,   518,   522,   524,   526,
     528,   529,     0,    41,   274,   278,   378,    62,     0,    60,
      38,    47,    56,   483,    58,     0,     0,   107,     0,   119,
     122,     0,   111,   408,   483,   483,     0,   250,   251,     0,
     672,   236,     0,   262,   407,     0,   245,   255,     0,     0,
     407,     0,   483,   405,   399,   480,   290,   219,     0,   232,
     286,   313,     0,   307,   197,   192,   271,   276,     0,   270,
     287,   306,   479,   636,   649,   636,     0,    31,    29,   699,
     165,   163,     0,     0,     0,   428,   427,   426,     0,   177,
     279,   421,   425,   179,   180,   177,     0,     0,     0,     0,
     137,   141,   144,   139,   111,     0,     0,   136,   279,   147,
     307,    35,     4,     0,   543,     0,     0,   542,   541,   533,
     534,     0,   491,   495,   497,     0,     0,   504,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   531,
      65,    66,    67,    44,   483,     0,   101,   102,   103,    99,
      49,    92,    97,   177,    45,    54,   483,   110,   121,   123,
     118,   104,     0,   325,     0,   177,     0,   483,   261,   256,
     257,     0,   340,   219,     0,   654,   655,   656,   652,   653,
     648,   651,   345,    42,    40,   108,   111,   400,   232,   214,
     225,   223,   221,   229,   234,     0,   220,   227,   228,   218,
     233,   318,   315,   316,     0,   242,   279,   623,   620,   621,
     268,   616,   618,   619,   292,   478,     0,     0,     0,   487,
     167,   429,   430,   431,   423,   284,   168,   483,   420,   377,
     171,   174,   667,   669,   665,   138,   140,   143,   255,    34,
     177,   535,   536,     0,     0,   499,     0,     0,   507,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   532,
       0,     0,    64,     0,   100,   483,    98,     0,    94,     0,
      55,   120,     0,   674,     0,   127,   252,   253,   240,   209,
     258,   177,   232,   483,   647,   106,   213,   255,     0,     0,
     224,   230,   231,   226,   321,   317,   310,   311,   309,   308,
     255,   277,     0,   617,   293,   288,   296,     0,   646,   671,
     645,   650,   661,   166,   377,   292,   285,   181,   177,   422,
     181,   177,     0,     0,   489,   492,     0,   502,   505,   509,
     513,   517,   521,   511,   515,   519,   523,     0,     0,   530,
       0,   390,     0,     0,    83,    79,    70,    76,    63,    78,
      72,    71,    75,    73,    68,    69,     0,    77,     0,   202,
     203,    74,     0,   323,     0,     0,   177,    80,   177,     0,
     177,    46,   124,   126,   125,   239,   219,   260,   262,   263,
     246,   248,     0,     0,   222,     0,   416,   235,   279,     0,
       0,     0,   622,   255,   663,   424,   281,   183,   169,   182,
     303,     0,   177,   172,   175,   148,   160,     0,   674,     0,
       0,     0,    90,   483,    88,     0,     0,     0,     0,   177,
      81,    84,    86,    87,     0,    85,     0,   198,    82,   483,
     204,     0,     0,    95,    93,    96,     0,   232,   259,   265,
     657,   483,   418,   377,   415,   483,   322,   483,     0,     0,
     282,   304,   181,   297,   493,     0,   506,   525,   527,     0,
     483,    89,     0,    91,   483,     0,     0,     0,   483,   201,
       0,   210,   264,   215,   377,   417,   319,   243,   483,   184,
     185,   292,   176,   149,   500,   672,   674,   407,   130,     0,
     483,     0,   199,     0,   672,   419,   294,   186,   283,   299,
     298,     0,   302,     0,     0,     0,    59,     0,   407,   131,
     200,     0,   297,   300,   301,   674,   133,   128,    59,     0,
     241,   295,     0,   129,   132
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   359,    91,    92,    93,   464,
      94,    95,    96,   361,    98,   352,    99,   929,   678,   378,
     512,   513,   681,   677,   804,   805,  1008,  1082,  1010,   810,
     811,   927,   923,   812,   101,   102,   103,   519,   104,   362,
     522,   691,   688,   689,   932,   363,   934,  1074,  1148,   106,
     107,   619,   627,   620,   457,   458,   898,  1113,   459,   108,
     323,   109,   364,   773,   365,   439,   606,   880,   607,   608,
     977,   609,   980,   610,   981,  1112,   885,   755,  1058,  1059,
    1109,  1139,   366,   113,   114,   115,  1085,  1018,  1019,   117,
     531,  1036,   118,   549,   717,   550,   947,   551,   119,   553,
     719,   856,   948,   857,   858,   859,   860,   949,   372,   373,
    1035,   554,   960,  1020,   534,   833,   386,   707,   529,   697,
     698,   702,   703,   829,  1038,   830,   831,  1099,   560,   561,
     728,   562,   120,   417,   503,   558,   866,   504,   505,   886,
    1141,   975,   418,   874,   419,   548,   965,  1053,  1172,  1143,
    1061,   565,   555,   959,   720,   966,   722,   862,   863,   954,
    1049,  1050,   813,   122,   284,   285,   533,   125,   126,   127,
     286,   539,   287,   270,   130,   131,   351,   506,   379,   133,
     134,   135,   136,   715,  1079,   138,   429,   547,   139,   140,
     271,  1047,  1048,  1103,  1134,   749,   750,   889,   974,   751,
     141,   142,   143,   424,   425,   426,   427,   732,   716,   428,
     693,   144,   146,   586,   145,   781,   481,   904,  1067,   482,
     483,   785,   986,   786,   486,   907,  1069,   789,   793,   790,
     794,   791,   795,   792,   796,   797,   798,   920,   648,   587,
     588,   589,   870,   871,   962,   590,   591,   432,   592,   593,
     971,   708,   877,   839,   840,   873,   944,   440,   594,   735,
     733,   595,   617,   615,   616,   596,   734,   435,   442,   602,
     603,   604,   266,   267,   268,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -1030
static const short int yypact[] =
{
   -1030,    86,   113, -1030, -1030,  7068,   150,   166,   193,   242,
     253,   274,   422,   -17,    -3,   121, -1030, -1030, -1030, -1030,
     293, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
      88, -1030,  4426, -1030, -1030,  8825,   291,  2020, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030,   132,   209,   254,   265,   277,   301,
     333,   341,   366,   377,   380,   407,   -18,    22,    30,    47,
     102,   147,   208,   220,   232,   245,   264,   272,   273,   298,
     302,   315,   340,   344,   348,   349,   370, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030,   118, -1030, -1030, -1030, -1030, -1030,
   -1030,  8495, -1030,    40,    40,    40,    40, -1030,   385,  8825,
   -1030,     8, -1030,   303,  7680,  9201,   393,  7854,   184,   256,
   -1030,   335,  8605, -1030, -1030, -1030, -1030,   134,   110, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,   398,
    4891, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030,    16, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
      91,  7854,    24,    51,   136,   165,   169,   200,   203,   525,
   -1030, -1030, -1030, -1030, -1030,  7874,   393,   393,  8825,   134,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,   406,    24,
      51,   136,   165,   169,   200,   203, -1030, -1030, -1030,  7854,
    7854, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030,   410,   414, -1030,  7680,  7854,   393,   393,
    8223, -1030, -1030, -1030,  8223,  8223, -1030,  8223,  8223,  8223,
    8223,  8223,  8223,  8223,  8223,  8223,  8223,  8223,  8223,  8223,
    8223,  8349,   420,  8156,  8349, -1030,  1910,   421,  7854, -1030,
   -1030, -1030, -1030, -1030, -1030,  8495, -1030,  8715,   467,   427,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,  8825,
   -1030, -1030,   544, -1030, -1030, -1030, -1030,   428,   393,   393,
     393, -1030, -1030, -1030, -1030,   335, -1030, -1030, -1030, -1030,
     544, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,  7680,
   -1030, -1030,   544, -1030, -1030, -1030,  7984, -1030,    26,    59,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,   -50, -1030,
     544,   544,  5821, -1030, -1030,  2256,  2411, -1030, -1030,   286,
   -1030,  2566,  3651,  2721, -1030, -1030, -1030, -1030, -1030, -1030,
    8377,  8267,  8377,  7659, -1030, -1030, -1030, -1030, -1030, -1030,
    8007, -1030,  2876,   416,   435, -1030,   443, -1030,    48, -1030,
   -1030,  6751,  7680, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
     440,  8223,  8223,  8223,   441,   444,  8223,   447,   449,   450,
     453,   454,   456,   457,   458,   459,   460,   465,   464,   469,
     472, -1030, -1030,   448, -1030,   134, -1030, -1030, -1030, -1030,
   -1030, -1030,    74, -1030,  9176,   744,   393,   393,   481,  8223,
   -1030, -1030, -1030,   324, -1030,  7709,  8715,  7984,  7854,   473,
    3031,   476,  9155,   773,   427, -1030, -1030, -1030, -1030, -1030,
    8349,  8267,  8349,  7659, -1030, -1030,   544, -1030,   337, -1030,
   -1030, -1030,  6855, -1030, -1030,   478, -1030,  7680,   212, -1030,
   -1030, -1030,   484,  8007, -1030,   482,   134,   544,   544,   544,
   -1030, -1030,  1852, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030,   483, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030,   486,  3806, -1030,
   -1030,   485, -1030, -1030, -1030, -1030,   174, -1030,  8935,    84,
     583, -1030, -1030, -1030, -1030, -1030, -1030, -1030,   544,   492,
   -1030,   134,    57,   496,   167,  8377,  8377,   224,   131, -1030,
   -1030, -1030, -1030,   500,   393, -1030, -1030, -1030,   633,   493,
     495,    29, -1030, -1030,   498, -1030,   499, -1030, -1030, -1030,
   -1030, -1030, -1030,   503,   504,   510, -1030, -1030,   505,  8825,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030,  7854, -1030,   514, -1030,   544,   123,  1760, -1030,
   -1030,   516,   544, -1030,   393,   393,  9176, -1030,   149, -1030,
     518,  8825,   522,   544, -1030, -1030,  7680,   519, -1030,   101,
   -1030, -1030,   521,   577, -1030,   393, -1030,   476,  5976,   526,
      80,   530,   324,  1852, -1030,   337, -1030, -1030,    41,    60,
   -1030, -1030,   527,    38, -1030, -1030, -1030, -1030,  6286, -1030,
   -1030, -1030,   337, -1030, -1030, -1030,   524, -1030, -1030, -1030,
   -1030, -1030,  7854,  7854,  7854, -1030,   393,   393,  8825,   134,
     110, -1030, -1030, -1030, -1030,   134,   641,  5046,  5201,  5356,
   -1030,   532, -1030, -1030, -1030,   535,   539, -1030,   110, -1030,
      42, -1030,   538,  8825, -1030,   531,   534, -1030, -1030, -1030,
   -1030,  8825, -1030, -1030, -1030,  8825,  8825, -1030,   540,  8825,
    8825,  8825,  8825,  8825,  8825,  8825,  8825,  8825,  8825,   537,
   -1030, -1030, -1030, -1030, -1030,   541, -1030, -1030, -1030,   474,
     543, -1030,   648,   467, -1030,   544, -1030, -1030,  8223, -1030,
   -1030, -1030,    50,   127,  7854,   467,  3186, -1030, -1030,   545,
   -1030,  8825, -1030, -1030,   546, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030,   551, -1030,    60, -1030,
   -1030, -1030, -1030, -1030, -1030,    75, -1030,    91, -1030, -1030,
   -1030, -1030,   527, -1030,   561, -1030,   110, -1030,  6131, -1030,
    6286, -1030, -1030, -1030,   216, -1030,  5511,  4581,  5666, -1030,
     286, -1030, -1030, -1030, -1030,  8007, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,   476, -1030,
     134, -1030, -1030,   547,  8825, -1030,   548,  8825, -1030,   556,
     557,   558,   559,   563,   565,   566,   567,   571,   572, -1030,
     573,  6935, -1030,  7854, -1030, -1030, -1030,  7854, -1030,  1760,
     544, -1030,  6286, -1030,   568, -1030, -1030, -1030, -1030,   544,
     635,   134,    60, -1030, -1030, -1030, -1030,   476,    91,  9045,
   -1030, -1030, -1030, -1030,   579, -1030, -1030, -1030, -1030, -1030,
     476, -1030,  6596, -1030, -1030, -1030, -1030,   580, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030,   216, -1030,   578,    64,  1852,
     578,   134,   584,   587, -1030, -1030,   592, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030,   720,   721, -1030,
    7317,   105,  7824,   101, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030,  7201, -1030,    40, -1030,
   -1030, -1030,   600,   428,  7680,  7433,   134, -1030,   467,  1640,
     467,   543,  6286,  4736, -1030,   696, -1030, -1030, -1030, -1030,
   -1030,   544,  5976,   601, -1030,  9045, -1030, -1030,   110,   599,
    6286,   603, -1030,   476, -1030,  1852, -1030, -1030, -1030, -1030,
   -1030,   612,   134, -1030, -1030, -1030, -1030,   618, -1030,   619,
     620,   621, -1030, -1030, -1030,   823,    40,   428,  7549,   467,
   -1030, -1030, -1030, -1030,  7201, -1030,  7549, -1030, -1030, -1030,
   -1030,  7680,  7984, -1030, -1030, -1030,   101,    60, -1030,    26,
   -1030, -1030, -1030, -1030, -1030, -1030,  6286, -1030,   623,  6441,
   -1030, -1030,   578, -1030, -1030,  3961, -1030, -1030, -1030,  8036,
   -1030, -1030,   823, -1030, -1030,  7984,  7549,    49, -1030, -1030,
     630, -1030, -1030,   544, -1030,  1852,   544,   544, -1030,  6441,
   -1030,   216, -1030,   439, -1030, -1030, -1030,    87, -1030,  8036,
   -1030,  8202, -1030,    66, -1030,  1852,   544, -1030, -1030, -1030,
   -1030,   101,   101,  3341,  4116,   248,    54,  8202,   112, -1030,
   -1030,  3496, -1030, -1030, -1030, -1030, -1030, -1030,    73,   248,
   -1030,   439,  4271, -1030, -1030
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1030, -1030,  -399, -1030, -1030,   762,  -153, -1030, -1030, -1030,
   -1030,  -815,  -108,     6,   -29, -1030, -1030, -1030, -1030,   297,
    -392,  -107,  -731, -1030, -1030, -1030, -1030,  -150, -1030,  -157,
    -255, -1030, -1030,   -25,  -136,  -135,   -33, -1030, -1030,     2,
    -487, -1030, -1030,   -28, -1030, -1030, -1030,  -284,  -632,  -128,
    -131,  -398,   175,    32, -1030, -1030, -1030, -1030,   173,  -125,
   -1030, -1030,    10, -1030,     7, -1030, -1030, -1030,   -83, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030,   336, -1030,  -913, -1030,
   -1030, -1030,   793, -1030, -1030, -1030,  -120,  -198,    28,   -85,
   -1030, -1030,  -268,  -501, -1030, -1030, -1030,  -318,  -322,  -530,
    -673, -1030, -1030, -1030, -1030,  -828, -1030, -1030,   -93, -1030,
   -1030, -1030, -1030,   -78, -1030, -1030, -1030, -1030,   271, -1030,
     -15,  -677, -1030, -1030, -1030,  -232, -1030, -1030,  -292, -1030,
   -1030, -1030,  -111,   306,  -309,   308, -1030,   -52,   -72,  -717,
   -1030, -1030,  -246, -1030,  -700, -1030,  -923, -1030, -1030,  -357,
   -1030, -1030,  -432, -1030, -1030,  -460, -1030, -1030,   -46, -1030,
   -1030, -1030,  1184,  1076,  1058,    14, -1030, -1030,   -82,   305,
      -5, -1030,    45, -1030,   939,   -20,   -90, -1030,     5,   774,
   -1030, -1030,  -486, -1030,   778,   126, -1030, -1030,  -127,  -871,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
     217,   206,   278,  -410,   396, -1030,   399, -1030,    94, -1030,
    1108, -1030, -1030, -1030,   -92, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,
   -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030, -1030,     9,
      52,    89,  -836,  -835, -1030,  -640,  -134,  -459, -1030,   -47,
   -1030,  -113, -1030, -1029, -1030,  -660, -1030,  -580, -1030, -1030,
   -1030,  -256, -1030, -1030, -1030,   270, -1030,  -216,  -417, -1030,
    -418,    95,    11, -1030,  -670, -1030
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -657
static const short int yytable[] =
{
     128,   407,   282,   360,   471,   411,   280,   105,   470,   566,
     132,    97,   111,   354,   447,   110,   298,   598,   391,   124,
     946,   374,   375,   376,   613,   436,   741,   725,   628,   825,
     834,   441,   328,   116,   597,   963,   692,   283,   890,   384,
     288,   262,   388,   461,   848,   518,   385,   408,   841,   887,
     129,   326,  1056,   443,   623,   887,   724,   679,   469,   622,
     679,    16,   714,   850,    16,    16,   423,  1063,   838,   413,
     414,    16,    16,    16,   413,   414,   679,   679,  1046,   437,
    1140,   462,   329,   679,   263,   369,     3,    16,   872,    16,
     679,   851,   777,   950,   552,   721,  1032,   421,   422,   405,
     149,   444,   445,   403,   852,   395,  1006,   853,  -370,   753,
    1157,   158,   159,    -2,  1040,   679,   367,   449,  -357,   389,
     392,   264,   328,   330,  -357,   124,   854,   265,   842,   951,
     952,   150,  -356,   754,   406,  -372,   420,   764,  -356,   116,
     704,   420,   415,   381,   413,   414,   409,   415,   150,   710,
     471,   800,   801,   802,   651,   530,   757,   758,   759,   262,
     942,   411,  -269,   331,   559,   438,   725,  -370,   721,   390,
     393,   332,   329,   564,  1102,   370,   371,   864,   778,   865,
     613,   864,   849,   983,  1152,  1072,   637,   420,   333,   680,
     450,   865,   452,   -59,  -372,   724,   -59,   963,   855,  1142,
     887,  1170,   263,   388,   650,   552,   421,   422,   844,   680,
     -59,   421,   422,   -59,  1106,   844,   -59,   415,  1158,   -59,
    -371,   982,   680,   -59,  1039,   846,   -59,   765,   766,   847,
     872,   709,   446,   711,  -370,   552,   772,   437,   260,   264,
     411,   887,   245,   334,   388,   434,   714,   844,   -59,  -375,
    -372,   -59,   411,  -376,   355,   456,  -355,   421,   422,   455,
     803,  1060,  -355,   241,  1064,   933,   328,  -368,    38,  1131,
    1043,   963,   769,  -368,   876,  -314,   878,  -371,   887,  -371,
     389,   887,   408,  1051,  -374,  -350,   817,  -373,   335,   818,
     283,  -350,   872,  -370,   290,   291,   292,   293,   294,   295,
     296,  -348,   100,  -116,   328,   328,   521,  -348,  -375,  -372,
     261,  -170,  -376,   540,   740,   542,   329,   147,   148,  -326,
     731,   389,   328,   438,   544,  -326,  -375,   388,  -349,  -173,
     390,   545,   281,  1080,  -349,  -170,  -371,  -376,   403,   572,
      38,   472,   327,  -374,  -369,  1111,  -373,   726,   516,   336,
    -369,   328,   727,   328,   329,   329,   260,   964,  -374,   767,
    -314,   337,   887,  1097,   768,   625,   626,   514,    21,    22,
     526,   390,   329,   338,   552,   461,  1108,  -353,   621,   124,
     621,   409,   841,  -353,  1145,  -375,   339,  1146,  -354,  -358,
     388,  -327,   872,   116,  -354,  -358,  -376,  -327,   517,   411,
    -359,   329,   838,   329,   389,   340,  -359,   683,   100,  -352,
     872,   328,  -360,   341,   342,  -352,  1165,  -374,  -360,   290,
     291,   292,   293,   294,   295,   296,  1130,   297,   261,   404,
     557,   396,   388,   399,   401,  1165,  -361,  1179,  -324,   343,
     395,   408,  -361,   344,   262,   262,   516,  1179,   328,   841,
     262,   262,   262,   976,   390,   630,   345,   713,   634,  -116,
    -116,   329,  1100,   521,    33,   514,   872,   389,  -362,   838,
    1159,   262,  1160,   416,  -362,   388,  -363,    38,   402,   841,
     649,   346,  -363,  1161,   826,   347,  1162,   263,   263,   348,
     349,  1173,  1174,   263,   263,   263,   517,   403,   329,   838,
      38,  -364,   806,   807,   808,   631,  -373,  -364,   517,   684,
     634,   350,  -365,   395,   263,  -366,  1033,   390,  -365,  1169,
     328,  -366,   328,   328,   264,   264,   377,   516,   705,   686,
     264,   264,   264,  1177,   433,  1169,   516,   449,   328,   262,
     409,   696,  -367,   395,   463,   467,   514,  1183,  -367,  -152,
     415,   264,   389,   621,   621,   514,   509,  -351,   630,   685,
     517,   649,  1129,  -351,   246,  -373,   528,    16,  1062,   535,
     329,   635,   329,   329,   956,   957,   958,   517,   636,   816,
     652,   656,   263,   673,   657,   281,   517,   659,   329,   660,
     661,   399,   401,   662,   663,  1129,   664,   665,   666,   667,
     668,   953,   390,   746,   388,   669,   670,   262,   631,   700,
     744,   671,   672,   748,   388,   613,   687,   756,  -254,   264,
     576,   884,  -314,   737,   730,   460,   357,   760,   736,   508,
     739,   763,   508,   399,   401,   771,   774,   775,   584,   776,
     779,   260,   260,   782,   780,   787,   783,   260,   260,   260,
     263,  1115,   784,   747,   727,   814,   819,   821,   515,   824,
     828,   843,   281,   827,   404,   845,   891,   328,   260,   879,
     895,   861,   768,   328,   896,   899,   901,   919,   888,   902,
     922,   684,   908,   925,   926,   940,   945,   264,   943,   984,
     987,   389,  1044,   536,   537,   538,   621,   613,   989,   990,
     991,   992,   552,  1034,   527,   993,  1089,   994,   995,   996,
     585,   997,   998,   261,   261,   999,  1057,   329,  1037,   261,
     261,   261,  1066,   329,  -320,  1054,  1065,  1147,   508,  1164,
     508,   685,  1068,  1070,  1071,  1088,   260,   328,   328,   328,
     261,   390,  1096,  1101,  1105,  1107,   613,   290,   291,   292,
     293,   294,   295,   296,  1110,   563,   515,  1166,  1182,  1168,
    1114,  1116,  1117,  1118,   613,  1138,  1154,    90,  1005,   552,
     552,  1009,  1031,  1128,  1094,  1178,   290,   291,   292,   293,
     294,   295,   296,   137,   924,  1011,  1012,   329,   329,   329,
     931,  1121,    33,  1013,   762,   761,  1014,   973,   112,   979,
     897,  1017,  1076,   552,   260,   706,  1098,  1132,   261,   936,
    1021,   675,   674,   289,   961,  1181,   955,   820,   508,   328,
     508,   399,   401,   281,   570,   752,   875,   571,  1052,  1027,
     970,  1042,   729,     0,   935,   262,     0,   515,     0,     0,
       0,   563,     0,     0,     0,     0,   515,    17,    18,    19,
     508,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   279,   395,     0,     0,     0,   329,
       0,     0,     0,     0,     0,     0,   261,     0,   263,     0,
     630,     0,     0,     0,  1055,     0,     0,     0,     0,   368,
       0,     0,     0,     0,   407,     0,     0,   380,   411,     0,
       0,     0,   563,   508,   508,     0,   410,     0,   360,     0,
       0,     0,     0,     0,   584,   264,   128,     0,   328,     0,
       0,     0,   328,   105,   328,  1087,  1025,  1007,  1016,  1163,
     631,  1015,     0,     0,   584,  1024,     0,     0,  1171,   399,
     408,     0,   388,     0,     0,     0,     0,  1090,     0,     0,
       0,   411,     0,     0,  1045,     0,     0,   460,     0,   411,
       0,     0,     0,   584,   584,   584,   129,   360,   329,     0,
       0,     0,   329,     0,   329,     0,  1104,     0,     0,     0,
       0,     0,     0,  1123,     0,     0,   585,     0,     0,   537,
     538,   508,   405,   408,     0,   128,   403,   328,     0,   411,
    1090,   408,     0,     0,     0,  1078,   585,  1075,  1090,   388,
     832,   128,     0,  1135,     0,     0,   326,     0,     0,   389,
     128,  1086,  1081,  1084,   328,     0,  1083,   406,     0,     0,
    1024,     0,   260,     0,     0,   585,   585,   585,     0,  1091,
       0,   408,   262,     0,  1155,   129,     0,   329,  1090,     0,
       0,   399,   401,     0,     0,     0,     0,   403,     0,     0,
       0,   129,   410,   123,   394,     0,     0,     0,     0,   390,
     129,     0,   395,   128,   329,     0,   584,     0,     0,   128,
    1122,   128,   584,   584,   584,   263,   389,   630,     0,  1126,
    1081,  1084,     0,     0,  1083,   325,     0,   403,  1024,     0,
    1091,     0,     0,     0,   261,   395,     0,     0,     0,     0,
       0,     0,     5,     0,   516,     0,     0,     0,     0,     0,
     630,   128,   264,   129,   262,   507,     0,     0,   507,   129,
       0,   129,     0,   514,     0,     0,   390,   631,   584,     0,
    1091,   410,     0,   368,   516,     0,   516,     0,   585,   928,
       0,     0,     0,   410,   585,   585,   585,     0,     0,     0,
       0,   937,   516,   514,   517,   514,     0,   263,   584,     0,
     631,   129,   262,   262,     0,     0,     0,     0,     0,     0,
     262,   514,     0,     0,     0,   398,     0,     0,     0,   121,
       0,   262,     0,     0,   517,     0,   517,     0,     0,     0,
     387,     0,     0,   397,   264,     0,     0,     0,   353,     0,
     585,     0,   517,   356,     0,   263,   263,     0,   100,     0,
       0,   324,     0,   263,   507,     0,   507,     0,     0,     0,
       0,   382,     0,     0,   263,     0,   400,     0,   584,   260,
     585,   412,     0,     0,     0,     0,     0,     0,   584,   380,
     430,   431,   264,   264,     0,     0,   584,   508,     0,     0,
     264,     0,     0,     0,     0,     0,     0,     0,     0,   480,
       0,   264,     0,   484,   485,     0,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,     0,   394,     0,     0,     0,     0,  1073,     0,     0,
     410,     0,     0,     0,     0,     0,     0,   327,     0,     0,
     585,   261,   584,   100,   507,   584,   507,     0,     0,     0,
     585,   260,   404,     0,     0,     0,     0,     0,   585,   325,
       0,     0,     0,   508,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   584,   507,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   454,  1092,     0,  1093,     0,  1095,   325,   325,   260,
     260,     0,  1120,     0,     0,  1124,     0,   260,     0,     0,
       0,   281,     0,   404,   585,   398,     0,   585,   260,   451,
     394,   453,   382,   261,   400,     0,     0,     0,     0,   507,
     507,     0,   454,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   508,   325,  1125,   325,   585,     0,  1150,
     653,   654,   655,   281,   515,   658,     0,     0,     0,     0,
       0,     0,   468,   508,     0,     0,     0,   788,     0,     0,
       0,   261,   261,     0,     0,     0,     0,     0,     0,   261,
       0,     0,     0,   394,   515,   448,   515,     0,   690,     0,
     261,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     525,   394,   515,     0,     0,     0,     0,     0,     0,     0,
     394,     0,     0,     0,     0,   387,   532,   507,     0,     0,
       0,     0,   556,   465,   466,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   325,   541,     0,   543,     0,     0,     0,   546,     0,
       0,   633,   410,     0,     0,     0,     0,     0,   567,   568,
     569,     0,     0,     0,     0,     0,   629,     0,     0,     0,
     523,     0,   524,     0,     0,     0,     0,     0,   454,     0,
       0,   900,     0,     0,     0,     0,   618,     0,     0,   903,
       0,     0,     0,   905,   906,     0,     0,   909,   910,   911,
     912,   913,   914,   915,   916,   917,   918,     0,     0,     0,
       0,     0,     0,   325,     0,     0,   325,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   325,     0,   695,     0,     0,     0,     0,     0,   941,
       0,     0,     0,     0,   676,     0,     0,     0,     0,     0,
       0,   682,     0,     0,     0,   394,     0,     0,     0,     0,
       0,     0,   468,   695,     0,   823,     0,   624,     0,   629,
       0,     0,     0,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   718,
     306,   307,   308,    16,   723,     0,   745,     0,   806,   807,
     808,     0,     0,     0,     0,     0,   809,     0,     0,     0,
       0,     0,   985,     0,     0,   988,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1026,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   694,
       0,     0,   699,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,   712,     0,     0,
     325,     0,     0,     0,     0,     0,   325,   770,     0,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   507,     0,     0,     0,   690,     0,     0,
       0,     0,     0,   299,   300,   301,   302,   303,   304,   305,
       0,     0,   695,     0,     0,     0,     0,     0,     0,     0,
     306,   307,   308,     0,     0,     0,    88,     0,   806,   807,
     808,   815,     0,     0,     0,     0,   809,     0,     0,   410,
     325,   325,   325,   822,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   410,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   507,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,   410,     0,     0,     0,   799,     0,     0,     0,
     410,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   325,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   501,   279,     0,     0,   410,     0,     0,     0,
     410,     0,   502,     0,     0,     0,    88,     0,     0,   507,
       0,     0,   921,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,   930,     0,   881,   882,   883,   507,
     306,   307,   308,    16,     0,   939,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,     0,     0,     0,    33,     0,
       0,   629,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   123,
       0,   325,     0,     0,     0,   325,     0,   325,     0,     0,
       0,     0,     0,     0,    38,   978,     0,  1023,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   699,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,  1029,     0,     0,     0,     0,     0,     0,
     306,   307,   308,     0,     0,   520,     0,     0,     0,   521,
       0,  1041,     0,     0,     0,     0,    88,     0,   394,     0,
     325,     0,     0,     0,     0,     0,     0,     0,    33,   309,
       0,   310,     0,     0,     0,     0,  1077,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,   394,     0,
     394,     0,  1077,     0,     0,     0,     0,     0,     0,     0,
     454,  1077,     0,     0,    38,  1022,   394,  1028,     0,     0,
       0,  1030,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1077,     0,     0,     0,     0,     0,
    1077,     0,  1077,     0,     0,     0,    88,   454,   556,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1119,     0,     0,     0,     0,   324,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1127,     0,     0,
       0,   695,  1077,     0,     0,     0,     0,     0,     0,  1133,
       0,     0,     0,  1136,     0,  1137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1149,     0,
       0,     0,  1151,     0,     0,     0,  1153,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1167,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   599,   241,     0,   242,   243,   244,   245,     0,   600,
     247,   601,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   599,   241,   605,   242,
     243,   244,   245,     0,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   599,   241,     0,   242,   243,   244,   245,     0,   600,
     247,   611,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   599,   241,     0,   242,
     243,   244,   245,   614,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   599,   241,   632,   242,   243,   244,   245,     0,   600,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   599,   241,   701,   242,
     243,   244,   245,     0,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   599,   241,   938,   242,   243,   244,   245,     0,   600,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   599,   241,  1175,   242,
     243,   244,   245,     0,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   599,   241,  1180,   242,   243,   244,   245,     0,   600,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   612,   241,     0,   242,
     243,   244,   245,     0,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   738,   241,     0,   242,   243,   244,   245,     0,   600,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,     0,   242,
     243,   244,   245,  1144,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1176,   241,     0,   242,   243,   244,   245,     0,   600,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  1184,   241,     0,   242,
     243,   244,   245,     0,   600,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,   242,   243,   244,   245,     0,   246,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   444,   445,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   573,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   574,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,   575,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   968,   576,   969,   577,
     578,   579,   446,     0,   580,   581,     0,   248,   249,   250,
     582,   252,   253,   254,   255,   256,   257,   258,   583,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,   242,   243,   244,   245,     0,   600,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   241,     0,   242,
     243,   244,   245,     0,     0,   247,     0,   248,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   151,
     152,   153,   154,   155,   156,   157,   444,   445,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   573,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   574,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
     575,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,   577,   578,   579,   446,   892,   580,
     581,     0,   248,   249,   250,   582,   252,   253,   254,   255,
     256,   257,   258,   583,   151,   152,   153,   154,   155,   156,
     157,   444,   445,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   573,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   574,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,   575,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,   577,
     578,   579,   446,   893,   580,   581,     0,   248,   249,   250,
     582,   252,   253,   254,   255,   256,   257,   258,   583,   151,
     152,   153,   154,   155,   156,   157,   444,   445,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   573,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   574,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
     575,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,   577,   578,   579,   446,   894,   580,
     581,     0,   248,   249,   250,   582,   252,   253,   254,   255,
     256,   257,   258,   583,   151,   152,   153,   154,   155,   156,
     157,   444,   445,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   573,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   574,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,   575,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,   577,
     578,   579,   446,     0,   580,   581,   967,   248,   249,   250,
     582,   252,   253,   254,   255,   256,   257,   258,   583,   151,
     152,   153,   154,   155,   156,   157,   444,   445,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   573,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   574,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
     575,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,   577,   578,   579,   446,     0,   580,
     581,   972,   248,   249,   250,   582,   252,   253,   254,   255,
     256,   257,   258,   583,   151,   152,   153,   154,   155,   156,
     157,   444,   445,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   573,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   574,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,   575,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,   577,
     578,   579,   446,     0,   580,   581,     0,   248,   249,   250,
     582,   252,   253,   254,   255,   256,   257,   258,   583,   151,
     152,   153,   154,   155,   156,   157,   444,   445,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   573,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   437,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
     575,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,   835,   578,   836,   446,     0,   837,
     581,     0,   248,   249,   250,   438,   252,   253,   254,   255,
     256,   257,   258,   583,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,     0,     0,  -620,  -620,  -620,  -620,  -620,
    -620,     0,  -620,  -620,  -620,  -620,     0,     0,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,     0,  -620,     0,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -620,     0,  -656,
    -620,  -620,  -620,     0,  -620,  -620,     0,  -620,  -620,  -620,
    -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,  -620,   151,
     152,   153,   154,   155,   156,   157,   444,   445,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   573,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   867,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
     575,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,   578,     0,   446,     0,   868,
     581,     0,   248,   249,   250,   869,   252,   253,   254,   255,
     256,   257,   258,   583,   151,   152,   153,   154,   155,   156,
     157,   444,   445,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   573,   172,   173,   174,   175,   176,
     177,   178,   179,     0,     0,   180,   181,   182,   183,   184,
     185,     0,   186,   187,   188,   189,     0,     0,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,     0,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,   575,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,     0,     0,
     578,     0,   446,     0,   837,   581,     0,   248,   249,   250,
       0,   252,   253,   254,   255,   256,   257,   258,   583,   151,
     152,   153,   154,   155,   156,   157,   444,   445,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   573,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,     0,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
       0,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   576,     0,     0,   578,     0,   446,     0,     0,
     581,     0,   248,   249,   250,     0,   252,   253,   254,   255,
     256,   257,   258,   583,   272,   273,   274,   275,   276,   277,
     278,     0,     0,   638,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,     0,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   279,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,   639,   640,     0,     0,     0,     0,
       0,   203,   204,   205,   641,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,     0,     0,     0,   638,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   642,
       0,   643,   644,     0,   645,   646,     0,   248,   249,   250,
     647,   252,   253,   254,   255,   256,   257,   258,   639,   640,
       0,     0,     0,     0,     0,   203,   204,   205,   641,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,    16,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,  1000,  1001,    31,    32,     0,
       0,     0,     0,    33,    34,    35,     0,  1002,     0,     0,
       0,     0,     0,   642,     0,   643,   644,     0,   645,   646,
       0,   248,   249,   250,   647,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,  1003,
    1004,     6,     7,     8,     9,    10,    11,    12,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,    13,    14,
      15,    16,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,    30,
      31,    32,     0,     0,     0,     0,    33,    34,    35,    36,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,     0,    87,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    13,    14,    15,     0,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   279,    31,   357,     0,     0,     0,     0,    33,
      34,     0,     0,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     0,
       6,     7,     8,     9,    10,    11,    12,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
       0,    17,    18,    19,    20,     0,     0,    88,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   279,    31,
     357,     0,     0,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    13,    14,    15,     0,    17,    18,    19,
      20,     0,     0,    88,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   279,    31,     0,     0,     0,     0,
       0,    33,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,     0,    17,    18,    19,    20,     0,     0,    88,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     279,    31,     0,     0,     0,     0,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,   299,   300,   301,   302,   303,   304,   305,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   306,
     307,   308,    16,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
     306,   307,   308,     0,     0,     0,     0,    33,     0,     0,
       0,     0,   299,   300,   301,   302,   303,   304,   305,     0,
       0,     0,    31,   383,     0,     0,     0,     0,    33,   306,
     307,   308,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    33,     0,     0,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    38,     0,     0,     0,     0,   521,     0,
       0,     0,     0,     0,     0,    88,     0,     0,     0,     0,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     0,     0,     0,     0,    88,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   307,   308,     0,     0,     0,
       0,     0,     0,     0,     0,    88,     0,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,    33,   309,   306,   307,   308,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   307,   308,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,   383,     0,     0,
       0,     0,    33,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,     0,     0,
      88,     0,     0,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,   306,   307,   308,     0,     0,     0,
     299,   300,   301,   302,   303,   304,   305,     0,     0,     0,
      88,     0,     0,     0,     0,     0,    31,   306,   307,   308,
       0,     0,    33,     0,     0,     0,     0,     0,     0,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,   306,   307,   308,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,   510,  1145,     0,     0,  1146,   306,   307,   308,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,   299,   300,   301,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   306,   307,   308,    16,   473,   474,   475,   476,
     477,   478,   479,     0,     0,     0,     0,     0,     0,     0,
      38,     0,     0,   306,   307,   308,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,     0,
     299,   300,   301,   302,   303,   304,   305,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,   306,   307,   308,
      16,   510,     0,     0,     0,   511,     0,     0,     0,     0,
       0,     0,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,    33,     0,     0,     0,     0,
       0,     0,     0,     0,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,     0,     0,  1145,     0,
       0,  1146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   501,
     279,     0,     0,     0,     0,     0,     0,     0,     0,   502,
       0,     0,     0,     0,     0,     0,   511,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   501,   279,     0,
       0,     0,     0,     0,     0,     0,   420,   502,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,   420,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,     0,     0,  -273,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   421,   422,   272,   273,
     274,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,   421,   422,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,    31,   357,     0,
       0,     0,     0,    33,    34,     0,     0,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   272,   273,
     274,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,    31,     0,     0,
       0,     0,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   272,   273,
     274,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,    31,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   272,   273,
     274,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   272,   273,
     274,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,   742,
       0,   743,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   272,   273,
     274,   275,   276,   277,   278,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,     0,
       0,     0,     0,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   299,   300,
     301,   302,   303,   304,   305,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   307,   308,    16,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   307,   308,     0,
       0,     0,     0,    33,   299,   300,   301,   302,   303,   304,
     305,     0,     0,     0,     0,     0,     0,     0,     0,   383,
       0,   306,   307,   308,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
     249,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   251,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     7,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      39,    41,    43,    45,    47,    49,    51,    53,    55,    57,
      59,    61,    63,     0,     0,    65,    67,    69,    71,    73,
      75,     0,    77,    79,    81,    83,     0,     0,    85,    87,
      89,    91,    93,    95,    97,    99,   101,   103,   105,   107,
     109,   111,   113,   115,   117,   119,   121,   123,   125,   127,
     129,   131,   133,   135,   137,   139,   141,   143,   145,   147,
     149,   151,   153,   155,     0,   157,     0,   159,   161,   163,
     165,   167,   169,   171,   173,   175,   177,   179,   181,   183,
     185,   187,   189,   191,   193,   195,   197,   199,   201,   203,
     205,   207,   209,   211,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   213,     0,     0,
     215,   217,   219,     0,   221,   223,     0,   225,   227,   229,
     231,   233,   235,   237,   239,   241,   243,   245,   247,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   407,     0,   407,     0,   407,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   656,
       0,   656,     0,   656,     0,   656,     0,   656,     0,   407,
       0,   407,     0
};

static const short int yycheck[] =
{
       5,   132,    35,   111,   326,   132,    35,     5,   326,   419,
       5,     5,     5,   103,   270,     5,    36,   434,   125,     5,
     848,   114,   115,   116,   442,   241,   606,   557,   460,   699,
     707,   247,    37,     5,   433,   870,   523,    35,   755,   124,
      35,    32,   124,   289,   717,   354,   124,   132,   708,   749,
       5,    37,   975,   269,   452,   755,   557,     3,   326,   451,
       3,    23,   548,     3,    23,    23,   138,   980,   708,    10,
      11,    23,    23,    23,    10,    11,     3,     3,   949,    63,
    1109,   297,    37,     3,    32,    45,     0,    23,   728,    23,
       3,    31,    63,    18,   416,   555,   932,   147,   148,   132,
      12,    10,    11,   132,    44,   125,   921,    47,    84,    25,
    1139,    10,    11,     0,   942,     3,   111,    12,   135,   124,
     125,    32,   127,   141,   141,   111,    66,    32,   708,    54,
      55,    43,   135,    49,   132,    84,    77,   624,   141,   111,
     532,    77,    83,   135,    10,    11,   132,    83,    43,   541,
     472,    28,    29,    30,   472,   371,   615,   616,   617,   150,
     833,   288,   136,   141,   138,   149,   696,   143,   628,   124,
     125,   141,   127,   419,  1045,   135,   136,   139,   149,   141,
     598,   139,   141,   900,   135,  1000,   138,    77,   141,   135,
     280,   141,   282,   136,   143,   696,   139,  1032,   138,  1112,
     900,   135,   150,   285,   472,   527,   147,   148,   135,   135,
     136,   147,   148,   139,  1050,   135,   136,    83,  1141,   139,
      84,   898,   135,   136,   941,   712,   139,   625,   626,   715,
     870,   540,   141,   542,    84,   557,   635,    63,    32,   150,
     367,   941,   141,   141,   326,   150,   732,   135,   136,    84,
      84,   139,   379,    84,   136,   288,   135,   147,   148,   288,
     137,   978,   141,   136,   981,   138,   271,   135,    84,  1097,
     947,  1106,   141,   141,   733,   144,   735,    84,   978,   143,
     285,   981,   367,   960,    84,   135,   137,    84,   141,   140,
     288,   141,   932,   143,     3,     4,     5,     6,     7,     8,
       9,   135,     5,   136,   309,   310,   139,   141,   143,   143,
      32,    25,   143,   403,   140,   405,   271,    24,    25,   135,
     566,   326,   327,   149,   409,   141,    84,   409,   135,    43,
     285,   409,    35,  1003,   141,    49,   143,    84,   367,   429,
      84,   327,    37,   143,   135,  1062,   143,   135,   353,   141,
     141,   356,   140,   358,   309,   310,   150,   141,    84,   135,
     144,   141,  1062,  1036,   140,   455,   456,   353,    31,    32,
     365,   326,   327,   141,   696,   621,  1053,   135,   450,   365,
     452,   367,  1042,   141,   136,   143,   141,   139,   135,   135,
     472,   135,  1032,   365,   141,   141,   143,   141,   353,   526,
     135,   356,  1042,   358,   409,   141,   141,   514,   111,   135,
    1050,   416,   135,   141,   141,   141,  1147,   143,   141,     3,
       4,     5,     6,     7,     8,     9,  1096,   136,   150,   132,
     416,   126,   514,   128,   129,  1166,   135,  1168,   135,   141,
     460,   526,   141,   141,   435,   436,   451,  1178,   453,  1109,
     441,   442,   443,   885,   409,   460,   141,   547,   463,   135,
     136,   416,  1042,   139,    48,   451,  1106,   472,   135,  1109,
      31,   462,    33,   137,   141,   557,   135,    84,   143,  1139,
     471,   141,   141,    44,   700,   141,    47,   435,   436,   141,
     141,  1161,  1162,   441,   442,   443,   451,   526,   453,  1139,
      84,   135,    28,    29,    30,   460,    84,   141,   463,   514,
     515,   141,   135,   533,   462,   135,   933,   472,   141,  1151,
     525,   141,   527,   528,   435,   436,   141,   532,   533,   515,
     441,   442,   443,  1165,   136,  1167,   541,    12,   543,   530,
     526,   527,   135,   563,   138,   135,   532,  1179,   141,   135,
      83,   462,   557,   625,   626,   541,   136,   135,   563,   514,
     515,   552,  1092,   141,   143,   143,   139,    23,   978,   141,
     525,   136,   527,   528,    13,    14,    15,   532,   135,   686,
     140,   140,   530,   135,   140,   288,   541,   140,   543,   140,
     140,   286,   287,   140,   140,  1125,   140,   140,   140,   140,
     140,   857,   557,   608,   686,   140,   142,   598,   563,   136,
     608,   142,   140,   608,   696,  1033,   135,   610,   142,   530,
     136,   748,   144,   137,   142,   289,    43,   135,   145,   351,
     145,   135,   354,   328,   329,   135,     3,   144,   432,   144,
     142,   435,   436,   140,   145,   140,   142,   441,   442,   443,
     598,  1068,   142,   608,   140,   139,   138,   135,   353,   140,
      83,   135,   365,   142,   367,   135,    25,   672,   462,   145,
     135,   144,   140,   678,   135,   137,   145,   140,   750,   145,
     139,   686,   142,   140,    36,   140,   135,   598,   142,   142,
     142,   696,   948,   388,   389,   390,   768,  1115,   142,   142,
     142,   142,  1024,   135,   368,   142,  1024,   142,   142,   142,
     432,   140,   140,   435,   436,   142,   138,   672,    83,   441,
     442,   443,   135,   678,   145,   145,   142,  1119,   450,  1146,
     452,   686,   140,    13,    13,   135,   530,   742,   743,   744,
     462,   696,    46,   142,   145,   142,  1164,     3,     4,     5,
       6,     7,     8,     9,   142,   419,   451,  1149,  1175,  1151,
     142,   142,   142,   142,  1182,   142,   136,     5,   921,  1091,
    1092,   921,   929,  1091,  1029,  1167,     3,     4,     5,     6,
       7,     8,     9,     5,   809,   921,   921,   742,   743,   744,
     818,  1075,    48,   921,   621,   620,   921,   880,     5,   889,
     768,   921,  1000,  1125,   598,   534,  1038,  1099,   530,   824,
     921,   505,   504,    35,   866,  1172,   862,   691,   540,   824,
     542,   516,   517,   526,   428,   608,   732,   428,   962,   921,
     877,   944,   562,    -1,   823,   826,    -1,   532,    -1,    -1,
      -1,   505,    -1,    -1,    -1,    -1,   541,    24,    25,    26,
     572,    -1,    -1,    -1,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,   885,    -1,    -1,    -1,   824,
      -1,    -1,    -1,    -1,    -1,    -1,   598,    -1,   826,    -1,
     885,    -1,    -1,    -1,   974,    -1,    -1,    -1,    -1,   111,
      -1,    -1,    -1,    -1,  1025,    -1,    -1,   119,  1025,    -1,
      -1,    -1,   566,   625,   626,    -1,   132,    -1,  1016,    -1,
      -1,    -1,    -1,    -1,   708,   826,   921,    -1,   923,    -1,
      -1,    -1,   927,   921,   929,  1018,   921,   921,   921,  1145,
     885,   921,    -1,    -1,   728,   921,    -1,    -1,  1154,   634,
    1025,    -1,  1024,    -1,    -1,    -1,    -1,  1025,    -1,    -1,
      -1,  1078,    -1,    -1,   949,    -1,    -1,   621,    -1,  1086,
      -1,    -1,    -1,   757,   758,   759,   921,  1075,   923,    -1,
      -1,    -1,   927,    -1,   929,    -1,  1048,    -1,    -1,    -1,
      -1,    -1,    -1,  1076,    -1,    -1,   708,    -1,    -1,   684,
     685,   713,  1025,  1078,    -1,  1000,  1025,  1002,    -1,  1126,
    1078,  1086,    -1,    -1,    -1,  1000,   728,  1000,  1086,  1091,
     705,  1016,    -1,  1103,    -1,    -1,  1002,    -1,    -1,  1024,
    1025,  1016,  1016,  1016,  1029,    -1,  1016,  1025,    -1,    -1,
    1016,    -1,   826,    -1,    -1,   757,   758,   759,    -1,  1025,
      -1,  1126,  1033,    -1,  1134,  1000,    -1,  1002,  1126,    -1,
      -1,   746,   747,    -1,    -1,    -1,    -1,  1086,    -1,    -1,
      -1,  1016,   288,     5,   125,    -1,    -1,    -1,    -1,  1024,
    1025,    -1,  1092,  1078,  1029,    -1,   870,    -1,    -1,  1084,
    1075,  1086,   876,   877,   878,  1033,  1091,  1092,    -1,  1084,
    1084,  1084,    -1,    -1,  1084,    37,    -1,  1126,  1084,    -1,
    1086,    -1,    -1,    -1,   826,  1125,    -1,    -1,    -1,    -1,
      -1,    -1,     4,    -1,  1119,    -1,    -1,    -1,    -1,    -1,
    1125,  1126,  1033,  1078,  1115,   351,    -1,    -1,   354,  1084,
      -1,  1086,    -1,  1119,    -1,    -1,  1091,  1092,   932,    -1,
    1126,   367,    -1,   365,  1149,    -1,  1151,    -1,   870,   813,
      -1,    -1,    -1,   379,   876,   877,   878,    -1,    -1,    -1,
      -1,   825,  1167,  1149,  1119,  1151,    -1,  1115,   962,    -1,
    1125,  1126,  1163,  1164,    -1,    -1,    -1,    -1,    -1,    -1,
    1171,  1167,    -1,    -1,    -1,   127,    -1,    -1,    -1,     5,
      -1,  1182,    -1,    -1,  1149,    -1,  1151,    -1,    -1,    -1,
     124,    -1,    -1,   127,  1115,    -1,    -1,    -1,   100,    -1,
     932,    -1,  1167,   105,    -1,  1163,  1164,    -1,   921,    -1,
      -1,    37,    -1,  1171,   450,    -1,   452,    -1,    -1,    -1,
      -1,   123,    -1,    -1,  1182,    -1,   128,    -1,  1032,  1033,
     962,   133,    -1,    -1,    -1,    -1,    -1,    -1,  1042,   471,
     142,   143,  1163,  1164,    -1,    -1,  1050,   979,    -1,    -1,
    1171,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   330,
      -1,  1182,    -1,   334,   335,    -1,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
      -1,    -1,   353,    -1,    -1,    -1,    -1,  1000,    -1,    -1,
     526,    -1,    -1,    -1,    -1,    -1,    -1,  1002,    -1,    -1,
    1032,  1033,  1106,  1016,   540,  1109,   542,    -1,    -1,    -1,
    1042,  1115,  1025,    -1,    -1,    -1,    -1,    -1,  1050,   271,
      -1,    -1,    -1,  1055,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1139,   572,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   285,  1026,    -1,  1028,    -1,  1030,   309,   310,  1163,
    1164,    -1,  1075,    -1,    -1,  1078,    -1,  1171,    -1,    -1,
      -1,  1084,    -1,  1086,  1106,   327,    -1,  1109,  1182,   281,
     451,   283,   284,  1115,   286,    -1,    -1,    -1,    -1,   625,
     626,    -1,   326,   327,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1135,   356,  1079,   358,  1139,    -1,  1122,
     481,   482,   483,  1126,  1119,   486,    -1,    -1,    -1,    -1,
      -1,    -1,   324,  1155,    -1,    -1,    -1,   659,    -1,    -1,
      -1,  1163,  1164,    -1,    -1,    -1,    -1,    -1,    -1,  1171,
      -1,    -1,    -1,   514,  1149,   271,  1151,    -1,   519,    -1,
    1182,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     362,   532,  1167,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     541,    -1,    -1,    -1,    -1,   409,   378,   713,    -1,    -1,
      -1,    -1,   416,   309,   310,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   453,   404,    -1,   406,    -1,    -1,    -1,   410,    -1,
      -1,   463,   748,    -1,    -1,    -1,    -1,    -1,   420,   421,
     422,    -1,    -1,    -1,    -1,    -1,   460,    -1,    -1,    -1,
     356,    -1,   358,    -1,    -1,    -1,    -1,    -1,   472,    -1,
      -1,   773,    -1,    -1,    -1,    -1,   448,    -1,    -1,   781,
      -1,    -1,    -1,   785,   786,    -1,    -1,   789,   790,   791,
     792,   793,   794,   795,   796,   797,   798,    -1,    -1,    -1,
      -1,    -1,    -1,   525,    -1,    -1,   528,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   543,    -1,   527,    -1,    -1,    -1,    -1,    -1,   831,
      -1,    -1,    -1,    -1,   506,    -1,    -1,    -1,    -1,    -1,
      -1,   513,    -1,    -1,    -1,   686,    -1,    -1,    -1,    -1,
      -1,    -1,   524,   557,    -1,   696,    -1,   453,    -1,   563,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   551,
      20,    21,    22,    23,   556,    -1,   608,    -1,    28,    29,
      30,    -1,    -1,    -1,    -1,    -1,    36,    -1,    -1,    -1,
      -1,    -1,   904,    -1,    -1,   907,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   921,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   525,
      -1,    -1,   528,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,   543,    -1,    -1,
     672,    -1,    -1,    -1,    -1,    -1,   678,   629,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   979,    -1,    -1,    -1,   818,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,   696,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,   146,    -1,    28,    29,
      30,   683,    -1,    -1,    -1,    -1,    36,    -1,    -1,  1025,
     742,   743,   744,   695,    -1,    -1,    -1,    -1,    48,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1045,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1055,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1078,    -1,    -1,    -1,   672,    -1,    -1,    -1,
    1086,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   824,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,  1122,    -1,    -1,    -1,
    1126,    -1,    50,    -1,    -1,    -1,   146,    -1,    -1,  1135,
      -1,    -1,   804,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,   816,    -1,   742,   743,   744,  1155,
      20,    21,    22,    23,    -1,   827,    -1,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,    -1,    -1,    -1,    -1,    48,    -1,
      -1,   885,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   921,
      -1,   923,    -1,    -1,    -1,   927,    -1,   929,    -1,    -1,
      -1,    -1,    -1,    -1,    84,   887,    -1,   921,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   824,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,   925,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,   135,    -1,    -1,    -1,   139,
      -1,   943,    -1,    -1,    -1,    -1,   146,    -1,  1119,    -1,
    1002,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,    -1,  1000,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1029,  1149,    -1,
    1151,    -1,  1016,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1024,  1025,    -1,    -1,    84,   921,  1167,   923,    -1,    -1,
      -1,   927,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1078,    -1,    -1,    -1,    -1,    -1,
    1084,    -1,  1086,    -1,    -1,    -1,   146,  1091,  1092,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1073,    -1,    -1,    -1,    -1,  1002,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1089,    -1,    -1,
      -1,  1125,  1126,    -1,    -1,    -1,    -1,    -1,    -1,  1101,
      -1,    -1,    -1,  1105,    -1,  1107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1120,    -1,
      -1,    -1,  1124,    -1,    -1,    -1,  1128,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1138,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1150,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,   137,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
     139,   140,   141,    -1,    -1,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,   139,   140,   141,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
     139,   140,   141,   142,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,   139,   140,   141,   142,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
     139,   140,   141,    -1,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,   138,   139,   140,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,
     139,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,   139,    -1,   141,    -1,   143,
     144,    -1,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    44,    -1,    -1,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    -1,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
     139,    -1,   141,    -1,   143,   144,    -1,   146,   147,   148,
      -1,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      44,    -1,    -1,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    -1,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    -1,
      -1,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,    -1,    -1,   139,    -1,   141,    -1,    -1,
     144,    -1,   146,   147,   148,    -1,   150,   151,   152,   153,
     154,   155,   156,   157,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    53,    54,    -1,    -1,    -1,    -1,
      -1,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   138,
      -1,   140,   141,    -1,   143,   144,    -1,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    52,    -1,    -1,
      -1,    -1,    -1,   138,    -1,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,   146,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    -1,    -1,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    84,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,    -1,   135,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    27,    -1,
      -1,    -1,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    26,    27,    -1,    -1,   146,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    26,
      27,    -1,    -1,   146,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    42,    -1,    -1,    -1,    -1,
      -1,    48,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    26,    27,    -1,    -1,   146,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    42,    -1,    -1,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    48,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    84,    -1,    -1,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,    -1,    -1,    -1,   146,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   146,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    49,    20,    21,    22,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    48,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    42,    20,    21,    22,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    48,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,   135,   136,    -1,    -1,   139,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      48,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    20,    21,    22,
      23,   135,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,   136,    -1,
      -1,   139,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    77,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
      -1,    -1,    -1,    -1,    77,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,    -1,    -1,
      -1,    -1,    -1,    -1,   135,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,   148,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,   147,   148,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      -1,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    48,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,
      -1,    20,    21,    22,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   159,   160,     0,   161,   368,     3,     4,     5,     6,
       7,     8,     9,    20,    21,    22,    23,    24,    25,    26,
      27,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    48,    49,    50,    51,    52,    84,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   135,   146,   162,
     163,   164,   165,   166,   168,   169,   170,   171,   172,   174,
     177,   192,   193,   194,   196,   197,   207,   208,   217,   219,
     220,   222,   240,   241,   242,   243,   246,   247,   250,   256,
     290,   320,   321,   322,   323,   325,   326,   327,   328,   330,
     332,   333,   336,   337,   338,   339,   340,   342,   343,   346,
     347,   358,   359,   360,   369,   372,   370,    24,    25,    12,
      43,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      34,    35,    36,    37,    38,    39,    41,    42,    43,    44,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   136,   138,   139,   140,   141,   143,   144,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     359,   360,   397,   398,   399,   429,   430,   431,   432,   433,
     331,   348,     3,     4,     5,     6,     7,     8,     9,    41,
     172,   177,   194,   197,   322,   323,   328,   330,   336,   342,
       3,     4,     5,     6,     7,     8,     9,   136,   333,     3,
       4,     5,     6,     7,     8,     9,    20,    21,    22,    49,
      51,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   218,   320,   322,   323,   327,   328,   330,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   334,   173,   368,   334,   136,   368,    43,    52,   163,
     170,   171,   197,   203,   220,   222,   240,   336,   342,    45,
     135,   136,   266,   267,   266,   266,   266,   141,   177,   336,
     342,   135,   368,    43,   247,   271,   274,   321,   326,   328,
     330,   179,   328,   330,   332,   333,   327,   321,   322,   327,
     368,   327,   143,   172,   177,   194,   197,   208,   247,   323,
     337,   346,   368,    10,    11,    83,   234,   291,   300,   302,
      77,   147,   148,   296,   361,   362,   363,   364,   367,   344,
     368,   368,   405,   136,   429,   425,   425,    63,   149,   223,
     415,   425,   426,   425,    10,    11,   141,   419,   320,    12,
     334,   368,   334,   368,   321,   172,   194,   212,   213,   216,
     234,   300,   425,   138,   167,   320,   320,   135,   368,   250,
     255,   256,   323,     3,     4,     5,     6,     7,     8,     9,
     332,   374,   377,   378,   332,   332,   382,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,    40,    50,   292,   295,   296,   335,   337,   360,   136,
     135,   139,   178,   179,   323,   327,   328,   330,   292,   195,
     135,   139,   198,   320,   320,   368,   336,   234,   139,   276,
     425,   248,   368,   324,   272,   141,   327,   327,   327,   329,
     334,   368,   334,   368,   247,   271,   368,   345,   303,   251,
     253,   255,   256,   257,   269,   310,   321,   323,   293,   138,
     286,   287,   289,   234,   300,   309,   361,   368,   368,   368,
     362,   364,   334,    23,    63,    84,   136,   138,   139,   140,
     143,   144,   149,   157,   359,   360,   371,   397,   398,   399,
     403,   404,   406,   407,   416,   419,   423,   160,   426,   135,
     143,   145,   427,   428,   429,   137,   224,   226,   227,   229,
     231,   145,   135,   428,   142,   421,   422,   420,   368,   209,
     211,   296,   178,   209,   320,   334,   334,   210,   310,   321,
     328,   330,   137,   322,   328,   136,   135,   138,    12,    53,
      54,    63,   138,   140,   141,   143,   144,   149,   396,   397,
     250,   255,   140,   332,   332,   332,   140,   140,   332,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   140,   140,
     142,   142,   140,   135,   293,   291,   368,   181,   176,     3,
     135,   180,   368,   179,   328,   330,   323,   135,   200,   201,
     332,   199,   198,   368,   320,   321,   323,   277,   278,   320,
     136,   137,   279,   280,   178,   328,   276,   275,   409,   292,
     178,   292,   320,   334,   340,   341,   366,   252,   368,   258,
     312,   313,   314,   368,   251,   257,   135,   140,   288,   423,
     142,   300,   365,   418,   424,   417,   145,   137,   135,   145,
     140,   415,    24,    26,   197,   322,   328,   330,   336,   353,
     354,   357,   358,    25,    49,   235,   222,   405,   405,   405,
     135,   210,   216,   135,   198,   209,   209,   135,   140,   141,
     368,   135,   160,   221,     3,   144,   144,    63,   149,   142,
     145,   373,   140,   142,   142,   379,   381,   140,   342,   385,
     387,   389,   391,   386,   388,   390,   392,   393,   394,   320,
      28,    29,    30,   137,   182,   183,    28,    29,    30,    36,
     187,   188,   191,   320,   139,   368,   179,   137,   140,   138,
     343,   135,   368,   332,   140,   432,   425,   142,    83,   281,
     283,   284,   327,   273,   279,   138,   140,   143,   403,   411,
     412,   413,   415,   135,   135,   135,   198,   340,   258,   141,
       3,    31,    44,    47,    66,   138,   259,   261,   262,   263,
     264,   144,   315,   316,   139,   141,   294,    63,   143,   149,
     400,   401,   403,   413,   301,   366,   405,   410,   405,   145,
     225,   320,   320,   320,   346,   234,   297,   302,   296,   355,
     297,    25,   142,   142,   142,   135,   135,   211,   214,   137,
     342,   145,   145,   342,   375,   342,   342,   383,   142,   342,
     342,   342,   342,   342,   342,   342,   342,   342,   342,   140,
     395,   368,   139,   190,   191,   140,    36,   189,   234,   175,
     368,   201,   202,   138,   204,   430,   278,   234,   137,   368,
     140,   342,   258,   142,   414,   135,   263,   254,   260,   265,
      18,    54,    55,   419,   317,   316,    13,    14,    15,   311,
     270,   295,   402,   401,   141,   304,   313,   145,   135,   137,
     407,   408,   145,   226,   356,   299,   310,   228,   368,   334,
     230,   232,   279,   297,   142,   342,   380,   142,   342,   142,
     142,   142,   142,   142,   142,   142,   142,   140,   140,   142,
      40,    41,    52,   134,   135,   164,   169,   171,   184,   185,
     186,   192,   193,   207,   217,   220,   222,   244,   245,   246,
     271,   290,   320,   321,   323,   336,   342,   372,   320,   368,
     320,   187,   400,   426,   135,   268,   249,    83,   282,   297,
     263,   368,   409,   279,   419,   336,   347,   349,   350,   318,
     319,   279,   404,   305,   145,   334,   304,   138,   236,   237,
     297,   308,   361,   236,   297,   142,   135,   376,   140,   384,
      13,    13,   169,   177,   205,   222,   245,   321,   336,   342,
     432,   171,   185,   220,   222,   244,   336,   266,   135,   255,
     271,   323,   234,   234,   188,   234,    46,   258,   283,   285,
     415,   142,   347,   351,   296,   145,   400,   142,   279,   238,
     142,   297,   233,   215,   142,   426,   142,   142,   142,   368,
     177,   205,   336,   266,   177,   234,   336,   368,   255,   257,
     432,   263,   286,   368,   352,   334,   368,   368,   142,   239,
     411,   298,   236,   307,   142,   136,   139,   178,   206,   368,
     177,   368,   135,   368,   136,   334,   368,   411,   304,    31,
      33,    44,    47,   425,   426,   180,   178,   368,   178,   206,
     135,   425,   306,   432,   432,   137,   135,   206,   178,   180,
     137,   307,   426,   206,   135
};


/* Prevent warning if -Wmissing-prototypes.  */
int yyparse (void);

/* Error token number */
#define YYTERROR 1

/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */


#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N) ((void) Rhs)
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
#line 1473 "vtkParse.y"
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
#line 1526 "vtkParse.y"
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 34:

/* Line 936 of glr.c  */
#line 1527 "vtkParse.y"
    { popNamespace(); }
    break;

  case 43:

/* Line 936 of glr.c  */
#line 1550 "vtkParse.y"
    { pushType(); }
    break;

  case 44:

/* Line 936 of glr.c  */
#line 1551 "vtkParse.y"
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
#line 1565 "vtkParse.y"
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.integer);
    }
    break;

  case 47:

/* Line 936 of glr.c  */
#line 1571 "vtkParse.y"
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer);
    }
    break;

  case 48:

/* Line 936 of glr.c  */
#line 1576 "vtkParse.y"
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer));
    }
    break;

  case 50:

/* Line 936 of glr.c  */
#line 1581 "vtkParse.y"
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer));
    }
    break;

  case 51:

/* Line 936 of glr.c  */
#line 1586 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 52:

/* Line 936 of glr.c  */
#line 1587 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 53:

/* Line 936 of glr.c  */
#line 1588 "vtkParse.y"
    { ((*yyvalp).integer) = 2; }
    break;

  case 54:

/* Line 936 of glr.c  */
#line 1592 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 55:

/* Line 936 of glr.c  */
#line 1594 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 59:

/* Line 936 of glr.c  */
#line 1602 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 60:

/* Line 936 of glr.c  */
#line 1603 "vtkParse.y"
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), "final") == 0); }
    break;

  case 62:

/* Line 936 of glr.c  */
#line 1607 "vtkParse.y"
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
#line 1619 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 66:

/* Line 936 of glr.c  */
#line 1620 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 67:

/* Line 936 of glr.c  */
#line 1621 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 91:

/* Line 936 of glr.c  */
#line 1651 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 94:

/* Line 936 of glr.c  */
#line 1659 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 95:

/* Line 936 of glr.c  */
#line 1661 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer))); }
    break;

  case 96:

/* Line 936 of glr.c  */
#line 1664 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer))); }
    break;

  case 97:

/* Line 936 of glr.c  */
#line 1668 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 98:

/* Line 936 of glr.c  */
#line 1669 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 99:

/* Line 936 of glr.c  */
#line 1672 "vtkParse.y"
    { ((*yyvalp).integer) = access_level; }
    break;

  case 101:

/* Line 936 of glr.c  */
#line 1676 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
    break;

  case 102:

/* Line 936 of glr.c  */
#line 1677 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
    break;

  case 103:

/* Line 936 of glr.c  */
#line 1678 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
    break;

  case 109:

/* Line 936 of glr.c  */
#line 1700 "vtkParse.y"
    { pushType(); }
    break;

  case 110:

/* Line 936 of glr.c  */
#line 1701 "vtkParse.y"
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
#line 1714 "vtkParse.y"
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str);
    }
    break;

  case 112:

/* Line 936 of glr.c  */
#line 1720 "vtkParse.y"
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
    break;

  case 113:

/* Line 936 of glr.c  */
#line 1727 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 114:

/* Line 936 of glr.c  */
#line 1728 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 115:

/* Line 936 of glr.c  */
#line 1729 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 116:

/* Line 936 of glr.c  */
#line 1732 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 117:

/* Line 936 of glr.c  */
#line 1733 "vtkParse.y"
    { pushType(); }
    break;

  case 118:

/* Line 936 of glr.c  */
#line 1734 "vtkParse.y"
    { ((*yyvalp).integer) = getType(); popType(); }
    break;

  case 122:

/* Line 936 of glr.c  */
#line 1741 "vtkParse.y"
    { add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), NULL); }
    break;

  case 123:

/* Line 936 of glr.c  */
#line 1742 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 124:

/* Line 936 of glr.c  */
#line 1743 "vtkParse.y"
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str), copySig()); }
    break;

  case 147:

/* Line 936 of glr.c  */
#line 1803 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 148:

/* Line 936 of glr.c  */
#line 1804 "vtkParse.y"
    { postSig(")"); }
    break;

  case 149:

/* Line 936 of glr.c  */
#line 1805 "vtkParse.y"
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.integer)); popFunction(); }
    break;

  case 150:

/* Line 936 of glr.c  */
#line 1809 "vtkParse.y"
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
#line 1842 "vtkParse.y"
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), 0); }
    break;

  case 153:

/* Line 936 of glr.c  */
#line 1846 "vtkParse.y"
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str); }
    break;

  case 154:

/* Line 936 of glr.c  */
#line 1848 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 155:

/* Line 936 of glr.c  */
#line 1850 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 156:

/* Line 936 of glr.c  */
#line 1852 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 157:

/* Line 936 of glr.c  */
#line 1854 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 158:

/* Line 936 of glr.c  */
#line 1857 "vtkParse.y"
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), 1); }
    break;

  case 159:

/* Line 936 of glr.c  */
#line 1860 "vtkParse.y"
    { markSig(); }
    break;

  case 160:

/* Line 936 of glr.c  */
#line 1862 "vtkParse.y"
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
#line 1892 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 162:

/* Line 936 of glr.c  */
#line 1894 "vtkParse.y"
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
#line 1902 "vtkParse.y"
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
#line 1913 "vtkParse.y"
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
    break;

  case 167:

/* Line 936 of glr.c  */
#line 1917 "vtkParse.y"
    { markSig(); }
    break;

  case 168:

/* Line 936 of glr.c  */
#line 1919 "vtkParse.y"
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig()); }
    break;

  case 170:

/* Line 936 of glr.c  */
#line 1921 "vtkParse.y"
    { markSig(); }
    break;

  case 171:

/* Line 936 of glr.c  */
#line 1923 "vtkParse.y"
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig()); }
    break;

  case 173:

/* Line 936 of glr.c  */
#line 1925 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 174:

/* Line 936 of glr.c  */
#line 1926 "vtkParse.y"
    { postSig("class "); }
    break;

  case 175:

/* Line 936 of glr.c  */
#line 1928 "vtkParse.y"
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
#line 1939 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 178:

/* Line 936 of glr.c  */
#line 1940 "vtkParse.y"
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
    break;

  case 179:

/* Line 936 of glr.c  */
#line 1943 "vtkParse.y"
    { postSig("class "); }
    break;

  case 180:

/* Line 936 of glr.c  */
#line 1944 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 183:

/* Line 936 of glr.c  */
#line 1950 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 184:

/* Line 936 of glr.c  */
#line 1952 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
    break;

  case 187:

/* Line 936 of glr.c  */
#line 1969 "vtkParse.y"
    { output_function(); }
    break;

  case 188:

/* Line 936 of glr.c  */
#line 1970 "vtkParse.y"
    { output_function(); }
    break;

  case 189:

/* Line 936 of glr.c  */
#line 1971 "vtkParse.y"
    { reject_function(); }
    break;

  case 190:

/* Line 936 of glr.c  */
#line 1972 "vtkParse.y"
    { reject_function(); }
    break;

  case 198:

/* Line 936 of glr.c  */
#line 1988 "vtkParse.y"
    { output_function(); }
    break;

  case 208:

/* Line 936 of glr.c  */
#line 2006 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 209:

/* Line 936 of glr.c  */
#line 2011 "vtkParse.y"
    { postSig(")"); }
    break;

  case 210:

/* Line 936 of glr.c  */
#line 2013 "vtkParse.y"
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
#line 2024 "vtkParse.y"
    { ((*yyvalp).str) = copySig(); }
    break;

  case 212:

/* Line 936 of glr.c  */
#line 2027 "vtkParse.y"
    { postSig(")"); }
    break;

  case 213:

/* Line 936 of glr.c  */
#line 2029 "vtkParse.y"
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
#line 2039 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 216:

/* Line 936 of glr.c  */
#line 2048 "vtkParse.y"
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 217:

/* Line 936 of glr.c  */
#line 2051 "vtkParse.y"
    { markSig(); postSig("operator "); }
    break;

  case 218:

/* Line 936 of glr.c  */
#line 2055 "vtkParse.y"
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
#line 2067 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 222:

/* Line 936 of glr.c  */
#line 2067 "vtkParse.y"
    { chopSig(); }
    break;

  case 223:

/* Line 936 of glr.c  */
#line 2068 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 224:

/* Line 936 of glr.c  */
#line 2070 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 225:

/* Line 936 of glr.c  */
#line 2076 "vtkParse.y"
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
    break;

  case 226:

/* Line 936 of glr.c  */
#line 2080 "vtkParse.y"
    { chopSig(); }
    break;

  case 229:

/* Line 936 of glr.c  */
#line 2085 "vtkParse.y"
    { postSig(" noexcept"); }
    break;

  case 230:

/* Line 936 of glr.c  */
#line 2088 "vtkParse.y"
    { currentFunction->IsDeleted = 1; }
    break;

  case 234:

/* Line 936 of glr.c  */
#line 2095 "vtkParse.y"
    { postSig(" -> "); clearType(); clearTypeId(); }
    break;

  case 235:

/* Line 936 of glr.c  */
#line 2097 "vtkParse.y"
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 242:

/* Line 936 of glr.c  */
#line 2115 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 243:

/* Line 936 of glr.c  */
#line 2119 "vtkParse.y"
    { postSig(")"); }
    break;

  case 244:

/* Line 936 of glr.c  */
#line 2126 "vtkParse.y"
    { closeSig(); }
    break;

  case 245:

/* Line 936 of glr.c  */
#line 2127 "vtkParse.y"
    { openSig(); }
    break;

  case 246:

/* Line 936 of glr.c  */
#line 2129 "vtkParse.y"
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
#line 2146 "vtkParse.y"
    { pushType(); postSig("("); }
    break;

  case 248:

/* Line 936 of glr.c  */
#line 2148 "vtkParse.y"
    { popType(); postSig(")"); }
    break;

  case 255:

/* Line 936 of glr.c  */
#line 2165 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 257:

/* Line 936 of glr.c  */
#line 2168 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 258:

/* Line 936 of glr.c  */
#line 2169 "vtkParse.y"
    { clearType(); clearTypeId(); postSig(", "); }
    break;

  case 260:

/* Line 936 of glr.c  */
#line 2172 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
    break;

  case 261:

/* Line 936 of glr.c  */
#line 2174 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 262:

/* Line 936 of glr.c  */
#line 2177 "vtkParse.y"
    { markSig(); }
    break;

  case 263:

/* Line 936 of glr.c  */
#line 2179 "vtkParse.y"
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
#line 2194 "vtkParse.y"
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
#line 2203 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 267:

/* Line 936 of glr.c  */
#line 2207 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 268:

/* Line 936 of glr.c  */
#line 2208 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 269:

/* Line 936 of glr.c  */
#line 2209 "vtkParse.y"
    { clearVarValue(); markSig(); }
    break;

  case 270:

/* Line 936 of glr.c  */
#line 2210 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 272:

/* Line 936 of glr.c  */
#line 2222 "vtkParse.y"
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
#line 2288 "vtkParse.y"
    { postSig(", "); }
    break;

  case 279:

/* Line 936 of glr.c  */
#line 2294 "vtkParse.y"
    { setTypePtr(0); }
    break;

  case 280:

/* Line 936 of glr.c  */
#line 2295 "vtkParse.y"
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 281:

/* Line 936 of glr.c  */
#line 2300 "vtkParse.y"
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
#line 2310 "vtkParse.y"
    { postSig(")"); }
    break;

  case 283:

/* Line 936 of glr.c  */
#line 2312 "vtkParse.y"
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
#line 2328 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 286:

/* Line 936 of glr.c  */
#line 2334 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer); }
    break;

  case 287:

/* Line 936 of glr.c  */
#line 2335 "vtkParse.y"
    { postSig(")"); }
    break;

  case 288:

/* Line 936 of glr.c  */
#line 2337 "vtkParse.y"
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
#line 2353 "vtkParse.y"
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("*"); }
    break;

  case 290:

/* Line 936 of glr.c  */
#line 2354 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer); }
    break;

  case 291:

/* Line 936 of glr.c  */
#line 2355 "vtkParse.y"
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
    break;

  case 292:

/* Line 936 of glr.c  */
#line 2359 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 293:

/* Line 936 of glr.c  */
#line 2360 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 294:

/* Line 936 of glr.c  */
#line 2361 "vtkParse.y"
    { postSig(")"); }
    break;

  case 295:

/* Line 936 of glr.c  */
#line 2362 "vtkParse.y"
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
    break;

  case 296:

/* Line 936 of glr.c  */
#line 2366 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
    break;

  case 299:

/* Line 936 of glr.c  */
#line 2370 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 304:

/* Line 936 of glr.c  */
#line 2378 "vtkParse.y"
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 306:

/* Line 936 of glr.c  */
#line 2383 "vtkParse.y"
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 307:

/* Line 936 of glr.c  */
#line 2386 "vtkParse.y"
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 308:

/* Line 936 of glr.c  */
#line 2388 "vtkParse.y"
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 312:

/* Line 936 of glr.c  */
#line 2396 "vtkParse.y"
    { clearArray(); }
    break;

  case 314:

/* Line 936 of glr.c  */
#line 2400 "vtkParse.y"
    { clearArray(); }
    break;

  case 318:

/* Line 936 of glr.c  */
#line 2407 "vtkParse.y"
    { postSig("["); }
    break;

  case 319:

/* Line 936 of glr.c  */
#line 2408 "vtkParse.y"
    { postSig("]"); }
    break;

  case 320:

/* Line 936 of glr.c  */
#line 2411 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 321:

/* Line 936 of glr.c  */
#line 2412 "vtkParse.y"
    { markSig(); }
    break;

  case 322:

/* Line 936 of glr.c  */
#line 2412 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 328:

/* Line 936 of glr.c  */
#line 2426 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 329:

/* Line 936 of glr.c  */
#line 2427 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 330:

/* Line 936 of glr.c  */
#line 2431 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
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
#line 2439 "vtkParse.y"
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
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
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
#line 2450 "vtkParse.y"
    { postSig("template "); }
    break;

  case 340:

/* Line 936 of glr.c  */
#line 2452 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.str)); }
    break;

  case 341:

/* Line 936 of glr.c  */
#line 2455 "vtkParse.y"
    { postSig("~"); }
    break;

  case 342:

/* Line 936 of glr.c  */
#line 2458 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 343:

/* Line 936 of glr.c  */
#line 2461 "vtkParse.y"
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
    break;

  case 344:

/* Line 936 of glr.c  */
#line 2464 "vtkParse.y"
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); postSig("<"); }
    break;

  case 345:

/* Line 936 of glr.c  */
#line 2466 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
    break;

  case 346:

/* Line 936 of glr.c  */
#line 2472 "vtkParse.y"
    { markSig(); postSig("decltype"); }
    break;

  case 347:

/* Line 936 of glr.c  */
#line 2473 "vtkParse.y"
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
    break;

  case 348:

/* Line 936 of glr.c  */
#line 2480 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 349:

/* Line 936 of glr.c  */
#line 2481 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 350:

/* Line 936 of glr.c  */
#line 2482 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 351:

/* Line 936 of glr.c  */
#line 2483 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 352:

/* Line 936 of glr.c  */
#line 2484 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 353:

/* Line 936 of glr.c  */
#line 2485 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 354:

/* Line 936 of glr.c  */
#line 2486 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 355:

/* Line 936 of glr.c  */
#line 2487 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 356:

/* Line 936 of glr.c  */
#line 2488 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 357:

/* Line 936 of glr.c  */
#line 2489 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 358:

/* Line 936 of glr.c  */
#line 2490 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
    break;

  case 359:

/* Line 936 of glr.c  */
#line 2491 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
    break;

  case 360:

/* Line 936 of glr.c  */
#line 2492 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
    break;

  case 361:

/* Line 936 of glr.c  */
#line 2493 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
    break;

  case 362:

/* Line 936 of glr.c  */
#line 2494 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
    break;

  case 363:

/* Line 936 of glr.c  */
#line 2495 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
    break;

  case 364:

/* Line 936 of glr.c  */
#line 2496 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
    break;

  case 365:

/* Line 936 of glr.c  */
#line 2497 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
    break;

  case 366:

/* Line 936 of glr.c  */
#line 2498 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
    break;

  case 367:

/* Line 936 of glr.c  */
#line 2499 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
    break;

  case 368:

/* Line 936 of glr.c  */
#line 2500 "vtkParse.y"
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
    break;

  case 369:

/* Line 936 of glr.c  */
#line 2501 "vtkParse.y"
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
    break;

  case 380:

/* Line 936 of glr.c  */
#line 2526 "vtkParse.y"
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer))); }
    break;

  case 381:

/* Line 936 of glr.c  */
#line 2527 "vtkParse.y"
    { setTypeMod(VTK_PARSE_TYPEDEF); }
    break;

  case 382:

/* Line 936 of glr.c  */
#line 2528 "vtkParse.y"
    { setTypeMod(VTK_PARSE_FRIEND); }
    break;

  case 385:

/* Line 936 of glr.c  */
#line 2535 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 386:

/* Line 936 of glr.c  */
#line 2536 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 387:

/* Line 936 of glr.c  */
#line 2537 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 388:

/* Line 936 of glr.c  */
#line 2538 "vtkParse.y"
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
    break;

  case 389:

/* Line 936 of glr.c  */
#line 2541 "vtkParse.y"
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
    break;

  case 390:

/* Line 936 of glr.c  */
#line 2542 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 391:

/* Line 936 of glr.c  */
#line 2543 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 392:

/* Line 936 of glr.c  */
#line 2544 "vtkParse.y"
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
    break;

  case 393:

/* Line 936 of glr.c  */
#line 2546 "vtkParse.y"
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
    break;

  case 394:

/* Line 936 of glr.c  */
#line 2549 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 395:

/* Line 936 of glr.c  */
#line 2550 "vtkParse.y"
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 396:

/* Line 936 of glr.c  */
#line 2551 "vtkParse.y"
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 397:

/* Line 936 of glr.c  */
#line 2554 "vtkParse.y"
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
    break;

  case 398:

/* Line 936 of glr.c  */
#line 2555 "vtkParse.y"
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
    break;

  case 400:

/* Line 936 of glr.c  */
#line 2560 "vtkParse.y"
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 402:

/* Line 936 of glr.c  */
#line 2570 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 404:

/* Line 936 of glr.c  */
#line 2572 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 407:

/* Line 936 of glr.c  */
#line 2578 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 408:

/* Line 936 of glr.c  */
#line 2580 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 410:

/* Line 936 of glr.c  */
#line 2585 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
    break;

  case 411:

/* Line 936 of glr.c  */
#line 2586 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 412:

/* Line 936 of glr.c  */
#line 2587 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 413:

/* Line 936 of glr.c  */
#line 2589 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 414:

/* Line 936 of glr.c  */
#line 2591 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 416:

/* Line 936 of glr.c  */
#line 2597 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 418:

/* Line 936 of glr.c  */
#line 2599 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 421:

/* Line 936 of glr.c  */
#line 2606 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 423:

/* Line 936 of glr.c  */
#line 2608 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 426:

/* Line 936 of glr.c  */
#line 2614 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
    break;

  case 427:

/* Line 936 of glr.c  */
#line 2616 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 428:

/* Line 936 of glr.c  */
#line 2618 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 429:

/* Line 936 of glr.c  */
#line 2620 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
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
#line 2627 "vtkParse.y"
    { setTypeId(""); }
    break;

  case 434:

/* Line 936 of glr.c  */
#line 2631 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
    break;

  case 435:

/* Line 936 of glr.c  */
#line 2632 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 436:

/* Line 936 of glr.c  */
#line 2633 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
    break;

  case 437:

/* Line 936 of glr.c  */
#line 2634 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
    break;

  case 438:

/* Line 936 of glr.c  */
#line 2635 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 439:

/* Line 936 of glr.c  */
#line 2636 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
    break;

  case 440:

/* Line 936 of glr.c  */
#line 2637 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
    break;

  case 441:

/* Line 936 of glr.c  */
#line 2638 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
    break;

  case 442:

/* Line 936 of glr.c  */
#line 2639 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 443:

/* Line 936 of glr.c  */
#line 2640 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
    break;

  case 444:

/* Line 936 of glr.c  */
#line 2641 "vtkParse.y"
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
    break;

  case 445:

/* Line 936 of glr.c  */
#line 2642 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
    break;

  case 446:

/* Line 936 of glr.c  */
#line 2643 "vtkParse.y"
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
    break;

  case 447:

/* Line 936 of glr.c  */
#line 2644 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
    break;

  case 448:

/* Line 936 of glr.c  */
#line 2645 "vtkParse.y"
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
    break;

  case 449:

/* Line 936 of glr.c  */
#line 2646 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
    break;

  case 450:

/* Line 936 of glr.c  */
#line 2647 "vtkParse.y"
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
    break;

  case 451:

/* Line 936 of glr.c  */
#line 2648 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
    break;

  case 452:

/* Line 936 of glr.c  */
#line 2649 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
    break;

  case 453:

/* Line 936 of glr.c  */
#line 2650 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
    break;

  case 454:

/* Line 936 of glr.c  */
#line 2651 "vtkParse.y"
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 455:

/* Line 936 of glr.c  */
#line 2652 "vtkParse.y"
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
    break;

  case 456:

/* Line 936 of glr.c  */
#line 2655 "vtkParse.y"
    { postSig("auto "); ((*yyvalp).integer) = 0; }
    break;

  case 457:

/* Line 936 of glr.c  */
#line 2656 "vtkParse.y"
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
    break;

  case 458:

/* Line 936 of glr.c  */
#line 2657 "vtkParse.y"
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
    break;

  case 459:

/* Line 936 of glr.c  */
#line 2658 "vtkParse.y"
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
    break;

  case 460:

/* Line 936 of glr.c  */
#line 2659 "vtkParse.y"
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
    break;

  case 461:

/* Line 936 of glr.c  */
#line 2660 "vtkParse.y"
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
    break;

  case 462:

/* Line 936 of glr.c  */
#line 2661 "vtkParse.y"
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
    break;

  case 463:

/* Line 936 of glr.c  */
#line 2662 "vtkParse.y"
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
    break;

  case 464:

/* Line 936 of glr.c  */
#line 2663 "vtkParse.y"
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
    break;

  case 465:

/* Line 936 of glr.c  */
#line 2664 "vtkParse.y"
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
    break;

  case 466:

/* Line 936 of glr.c  */
#line 2665 "vtkParse.y"
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
    break;

  case 467:

/* Line 936 of glr.c  */
#line 2666 "vtkParse.y"
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
    break;

  case 468:

/* Line 936 of glr.c  */
#line 2667 "vtkParse.y"
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
    break;

  case 469:

/* Line 936 of glr.c  */
#line 2668 "vtkParse.y"
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
    break;

  case 470:

/* Line 936 of glr.c  */
#line 2669 "vtkParse.y"
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 474:

/* Line 936 of glr.c  */
#line 2692 "vtkParse.y"
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 475:

/* Line 936 of glr.c  */
#line 2696 "vtkParse.y"
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
    break;

  case 476:

/* Line 936 of glr.c  */
#line 2700 "vtkParse.y"
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
    break;

  case 477:

/* Line 936 of glr.c  */
#line 2703 "vtkParse.y"
    { postSig("*"); }
    break;

  case 478:

/* Line 936 of glr.c  */
#line 2704 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer); }
    break;

  case 479:

/* Line 936 of glr.c  */
#line 2707 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
    break;

  case 480:

/* Line 936 of glr.c  */
#line 2709 "vtkParse.y"
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

  case 482:

/* Line 936 of glr.c  */
#line 2725 "vtkParse.y"
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

  case 485:

/* Line 936 of glr.c  */
#line 2744 "vtkParse.y"
    { closeSig(); }
    break;

  case 486:

/* Line 936 of glr.c  */
#line 2744 "vtkParse.y"
    { openSig(); }
    break;

  case 488:

/* Line 936 of glr.c  */
#line 2751 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 489:

/* Line 936 of glr.c  */
#line 2752 "vtkParse.y"
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

  case 490:

/* Line 936 of glr.c  */
#line 2761 "vtkParse.y"
    {postSig("Get");}
    break;

  case 491:

/* Line 936 of glr.c  */
#line 2762 "vtkParse.y"
    {markSig();}
    break;

  case 492:

/* Line 936 of glr.c  */
#line 2762 "vtkParse.y"
    {swapSig();}
    break;

  case 493:

/* Line 936 of glr.c  */
#line 2763 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 494:

/* Line 936 of glr.c  */
#line 2771 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 495:

/* Line 936 of glr.c  */
#line 2772 "vtkParse.y"
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

  case 496:

/* Line 936 of glr.c  */
#line 2781 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 497:

/* Line 936 of glr.c  */
#line 2782 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 498:

/* Line 936 of glr.c  */
#line 2790 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 499:

/* Line 936 of glr.c  */
#line 2790 "vtkParse.y"
    {closeSig();}
    break;

  case 500:

/* Line 936 of glr.c  */
#line 2792 "vtkParse.y"
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

  case 501:

/* Line 936 of glr.c  */
#line 2823 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 502:

/* Line 936 of glr.c  */
#line 2824 "vtkParse.y"
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

  case 503:

/* Line 936 of glr.c  */
#line 2833 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 504:

/* Line 936 of glr.c  */
#line 2834 "vtkParse.y"
    {markSig();}
    break;

  case 505:

/* Line 936 of glr.c  */
#line 2834 "vtkParse.y"
    {swapSig();}
    break;

  case 506:

/* Line 936 of glr.c  */
#line 2835 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 507:

/* Line 936 of glr.c  */
#line 2844 "vtkParse.y"
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

  case 508:

/* Line 936 of glr.c  */
#line 2861 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 509:

/* Line 936 of glr.c  */
#line 2862 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
    break;

  case 510:

/* Line 936 of glr.c  */
#line 2866 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 511:

/* Line 936 of glr.c  */
#line 2867 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
    break;

  case 512:

/* Line 936 of glr.c  */
#line 2871 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 513:

/* Line 936 of glr.c  */
#line 2872 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
    break;

  case 514:

/* Line 936 of glr.c  */
#line 2876 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 515:

/* Line 936 of glr.c  */
#line 2877 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
    break;

  case 516:

/* Line 936 of glr.c  */
#line 2881 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 517:

/* Line 936 of glr.c  */
#line 2882 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
    break;

  case 518:

/* Line 936 of glr.c  */
#line 2886 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 519:

/* Line 936 of glr.c  */
#line 2887 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
    break;

  case 520:

/* Line 936 of glr.c  */
#line 2891 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 521:

/* Line 936 of glr.c  */
#line 2892 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
    break;

  case 522:

/* Line 936 of glr.c  */
#line 2896 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 523:

/* Line 936 of glr.c  */
#line 2897 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
    break;

  case 524:

/* Line 936 of glr.c  */
#line 2901 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 525:

/* Line 936 of glr.c  */
#line 2903 "vtkParse.y"
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

  case 526:

/* Line 936 of glr.c  */
#line 2918 "vtkParse.y"
    {startSig();}
    break;

  case 527:

/* Line 936 of glr.c  */
#line 2920 "vtkParse.y"
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

  case 528:

/* Line 936 of glr.c  */
#line 2933 "vtkParse.y"
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

  case 529:

/* Line 936 of glr.c  */
#line 2970 "vtkParse.y"
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

  case 530:

/* Line 936 of glr.c  */
#line 3008 "vtkParse.y"
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

  case 533:

/* Line 936 of glr.c  */
#line 3052 "vtkParse.y"
    { ((*yyvalp).str) = "()"; }
    break;

  case 534:

/* Line 936 of glr.c  */
#line 3053 "vtkParse.y"
    { ((*yyvalp).str) = "[]"; }
    break;

  case 535:

/* Line 936 of glr.c  */
#line 3054 "vtkParse.y"
    { ((*yyvalp).str) = " new[]"; }
    break;

  case 536:

/* Line 936 of glr.c  */
#line 3055 "vtkParse.y"
    { ((*yyvalp).str) = " delete[]"; }
    break;

  case 537:

/* Line 936 of glr.c  */
#line 3056 "vtkParse.y"
    { ((*yyvalp).str) = "<"; }
    break;

  case 538:

/* Line 936 of glr.c  */
#line 3057 "vtkParse.y"
    { ((*yyvalp).str) = ">"; }
    break;

  case 539:

/* Line 936 of glr.c  */
#line 3058 "vtkParse.y"
    { ((*yyvalp).str) = ","; }
    break;

  case 540:

/* Line 936 of glr.c  */
#line 3059 "vtkParse.y"
    { ((*yyvalp).str) = "="; }
    break;

  case 541:

/* Line 936 of glr.c  */
#line 3060 "vtkParse.y"
    { ((*yyvalp).str) = ">>"; }
    break;

  case 542:

/* Line 936 of glr.c  */
#line 3061 "vtkParse.y"
    { ((*yyvalp).str) = ">>"; }
    break;

  case 543:

/* Line 936 of glr.c  */
#line 3062 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 545:

/* Line 936 of glr.c  */
#line 3066 "vtkParse.y"
    { ((*yyvalp).str) = "%"; }
    break;

  case 546:

/* Line 936 of glr.c  */
#line 3067 "vtkParse.y"
    { ((*yyvalp).str) = "*"; }
    break;

  case 547:

/* Line 936 of glr.c  */
#line 3068 "vtkParse.y"
    { ((*yyvalp).str) = "/"; }
    break;

  case 548:

/* Line 936 of glr.c  */
#line 3069 "vtkParse.y"
    { ((*yyvalp).str) = "-"; }
    break;

  case 549:

/* Line 936 of glr.c  */
#line 3070 "vtkParse.y"
    { ((*yyvalp).str) = "+"; }
    break;

  case 550:

/* Line 936 of glr.c  */
#line 3071 "vtkParse.y"
    { ((*yyvalp).str) = "!"; }
    break;

  case 551:

/* Line 936 of glr.c  */
#line 3072 "vtkParse.y"
    { ((*yyvalp).str) = "~"; }
    break;

  case 552:

/* Line 936 of glr.c  */
#line 3073 "vtkParse.y"
    { ((*yyvalp).str) = "&"; }
    break;

  case 553:

/* Line 936 of glr.c  */
#line 3074 "vtkParse.y"
    { ((*yyvalp).str) = "|"; }
    break;

  case 554:

/* Line 936 of glr.c  */
#line 3075 "vtkParse.y"
    { ((*yyvalp).str) = "^"; }
    break;

  case 555:

/* Line 936 of glr.c  */
#line 3076 "vtkParse.y"
    { ((*yyvalp).str) = " new"; }
    break;

  case 556:

/* Line 936 of glr.c  */
#line 3077 "vtkParse.y"
    { ((*yyvalp).str) = " delete"; }
    break;

  case 557:

/* Line 936 of glr.c  */
#line 3078 "vtkParse.y"
    { ((*yyvalp).str) = "<<="; }
    break;

  case 558:

/* Line 936 of glr.c  */
#line 3079 "vtkParse.y"
    { ((*yyvalp).str) = ">>="; }
    break;

  case 559:

/* Line 936 of glr.c  */
#line 3080 "vtkParse.y"
    { ((*yyvalp).str) = "<<"; }
    break;

  case 560:

/* Line 936 of glr.c  */
#line 3081 "vtkParse.y"
    { ((*yyvalp).str) = ".*"; }
    break;

  case 561:

/* Line 936 of glr.c  */
#line 3082 "vtkParse.y"
    { ((*yyvalp).str) = "->*"; }
    break;

  case 562:

/* Line 936 of glr.c  */
#line 3083 "vtkParse.y"
    { ((*yyvalp).str) = "->"; }
    break;

  case 563:

/* Line 936 of glr.c  */
#line 3084 "vtkParse.y"
    { ((*yyvalp).str) = "+="; }
    break;

  case 564:

/* Line 936 of glr.c  */
#line 3085 "vtkParse.y"
    { ((*yyvalp).str) = "-="; }
    break;

  case 565:

/* Line 936 of glr.c  */
#line 3086 "vtkParse.y"
    { ((*yyvalp).str) = "*="; }
    break;

  case 566:

/* Line 936 of glr.c  */
#line 3087 "vtkParse.y"
    { ((*yyvalp).str) = "/="; }
    break;

  case 567:

/* Line 936 of glr.c  */
#line 3088 "vtkParse.y"
    { ((*yyvalp).str) = "%="; }
    break;

  case 568:

/* Line 936 of glr.c  */
#line 3089 "vtkParse.y"
    { ((*yyvalp).str) = "++"; }
    break;

  case 569:

/* Line 936 of glr.c  */
#line 3090 "vtkParse.y"
    { ((*yyvalp).str) = "--"; }
    break;

  case 570:

/* Line 936 of glr.c  */
#line 3091 "vtkParse.y"
    { ((*yyvalp).str) = "&="; }
    break;

  case 571:

/* Line 936 of glr.c  */
#line 3092 "vtkParse.y"
    { ((*yyvalp).str) = "|="; }
    break;

  case 572:

/* Line 936 of glr.c  */
#line 3093 "vtkParse.y"
    { ((*yyvalp).str) = "^="; }
    break;

  case 573:

/* Line 936 of glr.c  */
#line 3094 "vtkParse.y"
    { ((*yyvalp).str) = "&&"; }
    break;

  case 574:

/* Line 936 of glr.c  */
#line 3095 "vtkParse.y"
    { ((*yyvalp).str) = "||"; }
    break;

  case 575:

/* Line 936 of glr.c  */
#line 3096 "vtkParse.y"
    { ((*yyvalp).str) = "=="; }
    break;

  case 576:

/* Line 936 of glr.c  */
#line 3097 "vtkParse.y"
    { ((*yyvalp).str) = "!="; }
    break;

  case 577:

/* Line 936 of glr.c  */
#line 3098 "vtkParse.y"
    { ((*yyvalp).str) = "<="; }
    break;

  case 578:

/* Line 936 of glr.c  */
#line 3099 "vtkParse.y"
    { ((*yyvalp).str) = ">="; }
    break;

  case 579:

/* Line 936 of glr.c  */
#line 3102 "vtkParse.y"
    { ((*yyvalp).str) = "typedef"; }
    break;

  case 580:

/* Line 936 of glr.c  */
#line 3103 "vtkParse.y"
    { ((*yyvalp).str) = "typename"; }
    break;

  case 581:

/* Line 936 of glr.c  */
#line 3104 "vtkParse.y"
    { ((*yyvalp).str) = "class"; }
    break;

  case 582:

/* Line 936 of glr.c  */
#line 3105 "vtkParse.y"
    { ((*yyvalp).str) = "struct"; }
    break;

  case 583:

/* Line 936 of glr.c  */
#line 3106 "vtkParse.y"
    { ((*yyvalp).str) = "union"; }
    break;

  case 584:

/* Line 936 of glr.c  */
#line 3107 "vtkParse.y"
    { ((*yyvalp).str) = "template"; }
    break;

  case 585:

/* Line 936 of glr.c  */
#line 3108 "vtkParse.y"
    { ((*yyvalp).str) = "public"; }
    break;

  case 586:

/* Line 936 of glr.c  */
#line 3109 "vtkParse.y"
    { ((*yyvalp).str) = "protected"; }
    break;

  case 587:

/* Line 936 of glr.c  */
#line 3110 "vtkParse.y"
    { ((*yyvalp).str) = "private"; }
    break;

  case 588:

/* Line 936 of glr.c  */
#line 3111 "vtkParse.y"
    { ((*yyvalp).str) = "const"; }
    break;

  case 589:

/* Line 936 of glr.c  */
#line 3112 "vtkParse.y"
    { ((*yyvalp).str) = "static"; }
    break;

  case 590:

/* Line 936 of glr.c  */
#line 3113 "vtkParse.y"
    { ((*yyvalp).str) = "thread_local"; }
    break;

  case 591:

/* Line 936 of glr.c  */
#line 3114 "vtkParse.y"
    { ((*yyvalp).str) = "constexpr"; }
    break;

  case 592:

/* Line 936 of glr.c  */
#line 3115 "vtkParse.y"
    { ((*yyvalp).str) = "inline"; }
    break;

  case 593:

/* Line 936 of glr.c  */
#line 3116 "vtkParse.y"
    { ((*yyvalp).str) = "virtual"; }
    break;

  case 594:

/* Line 936 of glr.c  */
#line 3117 "vtkParse.y"
    { ((*yyvalp).str) = "explicit"; }
    break;

  case 595:

/* Line 936 of glr.c  */
#line 3118 "vtkParse.y"
    { ((*yyvalp).str) = "decltype"; }
    break;

  case 596:

/* Line 936 of glr.c  */
#line 3119 "vtkParse.y"
    { ((*yyvalp).str) = "default"; }
    break;

  case 597:

/* Line 936 of glr.c  */
#line 3120 "vtkParse.y"
    { ((*yyvalp).str) = "extern"; }
    break;

  case 598:

/* Line 936 of glr.c  */
#line 3121 "vtkParse.y"
    { ((*yyvalp).str) = "using"; }
    break;

  case 599:

/* Line 936 of glr.c  */
#line 3122 "vtkParse.y"
    { ((*yyvalp).str) = "namespace"; }
    break;

  case 600:

/* Line 936 of glr.c  */
#line 3123 "vtkParse.y"
    { ((*yyvalp).str) = "operator"; }
    break;

  case 601:

/* Line 936 of glr.c  */
#line 3124 "vtkParse.y"
    { ((*yyvalp).str) = "enum"; }
    break;

  case 602:

/* Line 936 of glr.c  */
#line 3125 "vtkParse.y"
    { ((*yyvalp).str) = "throw"; }
    break;

  case 603:

/* Line 936 of glr.c  */
#line 3126 "vtkParse.y"
    { ((*yyvalp).str) = "noexcept"; }
    break;

  case 604:

/* Line 936 of glr.c  */
#line 3127 "vtkParse.y"
    { ((*yyvalp).str) = "const_cast"; }
    break;

  case 605:

/* Line 936 of glr.c  */
#line 3128 "vtkParse.y"
    { ((*yyvalp).str) = "dynamic_cast"; }
    break;

  case 606:

/* Line 936 of glr.c  */
#line 3129 "vtkParse.y"
    { ((*yyvalp).str) = "static_cast"; }
    break;

  case 607:

/* Line 936 of glr.c  */
#line 3130 "vtkParse.y"
    { ((*yyvalp).str) = "reinterpret_cast"; }
    break;

  case 620:

/* Line 936 of glr.c  */
#line 3153 "vtkParse.y"
    { postSig("< "); }
    break;

  case 621:

/* Line 936 of glr.c  */
#line 3154 "vtkParse.y"
    { postSig("> "); }
    break;

  case 623:

/* Line 936 of glr.c  */
#line 3155 "vtkParse.y"
    { postSig(">"); }
    break;

  case 625:

/* Line 936 of glr.c  */
#line 3159 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 629:

/* Line 936 of glr.c  */
#line 3166 "vtkParse.y"
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

  case 630:

/* Line 936 of glr.c  */
#line 3195 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 631:

/* Line 936 of glr.c  */
#line 3195 "vtkParse.y"
    { postSig("."); }
    break;

  case 632:

/* Line 936 of glr.c  */
#line 3196 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig(" "); }
    break;

  case 633:

/* Line 936 of glr.c  */
#line 3197 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig(" "); }
    break;

  case 635:

/* Line 936 of glr.c  */
#line 3200 "vtkParse.y"
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

  case 639:

/* Line 936 of glr.c  */
#line 3227 "vtkParse.y"
    { postSig("< "); }
    break;

  case 640:

/* Line 936 of glr.c  */
#line 3228 "vtkParse.y"
    { postSig("> "); }
    break;

  case 641:

/* Line 936 of glr.c  */
#line 3229 "vtkParse.y"
    { postSig(">"); }
    break;

  case 643:

/* Line 936 of glr.c  */
#line 3233 "vtkParse.y"
    { postSig("= "); }
    break;

  case 644:

/* Line 936 of glr.c  */
#line 3234 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 646:

/* Line 936 of glr.c  */
#line 3238 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 654:

/* Line 936 of glr.c  */
#line 3252 "vtkParse.y"
    { postSig("= "); }
    break;

  case 655:

/* Line 936 of glr.c  */
#line 3253 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 656:

/* Line 936 of glr.c  */
#line 3257 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 657:

/* Line 936 of glr.c  */
#line 3263 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 660:

/* Line 936 of glr.c  */
#line 3274 "vtkParse.y"
    { postSig("["); }
    break;

  case 661:

/* Line 936 of glr.c  */
#line 3275 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 662:

/* Line 936 of glr.c  */
#line 3276 "vtkParse.y"
    { postSig("[["); }
    break;

  case 663:

/* Line 936 of glr.c  */
#line 3277 "vtkParse.y"
    { chopSig(); postSig("]] "); }
    break;

  case 664:

/* Line 936 of glr.c  */
#line 3280 "vtkParse.y"
    { postSig("("); }
    break;

  case 665:

/* Line 936 of glr.c  */
#line 3281 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 666:

/* Line 936 of glr.c  */
#line 3282 "vtkParse.y"
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("*"); }
    break;

  case 667:

/* Line 936 of glr.c  */
#line 3283 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 668:

/* Line 936 of glr.c  */
#line 3284 "vtkParse.y"
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("&"); }
    break;

  case 669:

/* Line 936 of glr.c  */
#line 3285 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 670:

/* Line 936 of glr.c  */
#line 3288 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 671:

/* Line 936 of glr.c  */
#line 3288 "vtkParse.y"
    { postSig("} "); }
    break;



/* Line 936 of glr.c  */
#line 9782 "vtkParse.tab.c"
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
#line 3335 "vtkParse.y"

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
