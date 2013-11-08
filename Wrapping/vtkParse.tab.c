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
  - remove the "goto yyerrlab1;" that appears right before yyerrlab1:
  - remove the #defined constants that appear right after the anonymous_enums

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
#line 1325 "vtkParse.tab.c"




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
#line 1296 "vtkParse.y"

  const char   *str;
  unsigned int  integer;



/* Line 215 of glr.c  */
#line 1485 "vtkParse.tab.c"
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
#line 1532 "vtkParse.tab.c"

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
#define YYLAST   9068

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  158
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  272
/* YYNRULES -- Number of rules.  */
#define YYNRULES  697
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1178
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
     356,   360,   361,   363,   364,   369,   377,   383,   390,   394,
     399,   405,   409,   411,   414,   420,   426,   433,   439,   446,
     449,   450,   454,   457,   459,   461,   462,   463,   472,   474,
     478,   480,   483,   486,   489,   493,   497,   502,   503,   512,
     516,   517,   523,   525,   526,   531,   532,   533,   539,   540,
     541,   547,   548,   549,   550,   558,   559,   561,   563,   565,
     566,   568,   569,   573,   575,   578,   581,   584,   587,   590,
     594,   599,   602,   606,   609,   613,   618,   621,   626,   632,
     636,   638,   640,   643,   645,   648,   652,   653,   654,   664,
     667,   668,   673,   674,   682,   685,   687,   691,   692,   695,
     696,   700,   702,   705,   707,   710,   712,   714,   716,   719,
     722,   723,   725,   726,   730,   734,   736,   738,   745,   746,
     753,   754,   762,   763,   764,   771,   772,   779,   780,   783,
     785,   789,   793,   794,   795,   798,   800,   801,   806,   810,
     812,   813,   814,   820,   821,   823,   824,   828,   833,   836,
     837,   840,   841,   842,   847,   850,   851,   853,   857,   858,
     865,   866,   868,   872,   873,   879,   880,   884,   886,   887,
     888,   889,   897,   899,   900,   903,   906,   910,   914,   917,
     919,   922,   924,   927,   930,   935,   937,   939,   941,   942,
     944,   945,   948,   950,   953,   954,   960,   961,   962,   965,
     967,   969,   971,   973,   975,   978,   981,   984,   987,   990,
     993,   996,   999,  1003,  1007,  1011,  1012,  1018,  1020,  1022,
    1024,  1025,  1031,  1032,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,
    1088,  1090,  1092,  1094,  1095,  1099,  1101,  1103,  1105,  1107,
    1110,  1114,  1116,  1118,  1120,  1122,  1124,  1126,  1129,  1131,
    1133,  1135,  1137,  1139,  1141,  1143,  1145,  1148,  1151,  1152,
    1156,  1157,  1162,  1164,  1168,  1173,  1175,  1177,  1178,  1183,
    1186,  1189,  1192,  1193,  1197,  1198,  1203,  1206,  1207,  1211,
    1212,  1217,  1219,  1221,  1223,  1225,  1228,  1231,  1234,  1237,
    1240,  1242,  1244,  1246,  1248,  1250,  1252,  1254,  1256,  1258,
    1260,  1262,  1264,  1266,  1268,  1270,  1272,  1274,  1276,  1278,
    1280,  1282,  1284,  1286,  1288,  1290,  1292,  1294,  1296,  1298,
    1300,  1302,  1304,  1306,  1308,  1310,  1312,  1314,  1316,  1318,
    1320,  1323,  1326,  1329,  1330,  1335,  1336,  1338,  1340,  1343,
    1344,  1347,  1348,  1349,  1356,  1357,  1365,  1366,  1367,  1368,
    1378,  1379,  1385,  1386,  1392,  1393,  1394,  1405,  1406,  1414,
    1415,  1416,  1417,  1427,  1434,  1435,  1443,  1444,  1452,  1453,
    1461,  1462,  1470,  1471,  1479,  1480,  1488,  1489,  1497,  1498,
    1506,  1507,  1517,  1518,  1528,  1533,  1538,  1546,  1547,  1549,
    1552,  1555,  1559,  1563,  1565,  1567,  1569,  1571,  1574,  1577,
    1580,  1582,  1584,  1586,  1588,  1590,  1592,  1594,  1596,  1598,
    1600,  1602,  1604,  1606,  1608,  1610,  1612,  1614,  1616,  1618,
    1620,  1622,  1624,  1626,  1628,  1630,  1632,  1634,  1636,  1638,
    1640,  1642,  1644,  1646,  1648,  1650,  1652,  1654,  1656,  1658,
    1660,  1662,  1664,  1666,  1668,  1670,  1672,  1674,  1676,  1678,
    1680,  1682,  1684,  1686,  1688,  1690,  1692,  1694,  1696,  1698,
    1700,  1702,  1704,  1706,  1708,  1710,  1712,  1714,  1716,  1718,
    1720,  1722,  1724,  1726,  1729,  1731,  1733,  1735,  1737,  1739,
    1741,  1743,  1745,  1747,  1749,  1751,  1753,  1755,  1757,  1759,
    1761,  1762,  1765,  1767,  1769,  1771,  1773,  1775,  1777,  1779,
    1781,  1783,  1784,  1787,  1788,  1791,  1793,  1795,  1797,  1799,
    1801,  1802,  1807,  1809,  1811,  1812,  1817,  1818,  1824,  1825,
    1830,  1831,  1836,  1837,  1842,  1843,  1848,  1849,  1852,  1853,
    1856,  1858,  1860,  1862,  1864,  1866,  1868,  1870,  1872,  1874,
    1876,  1878,  1880,  1882,  1884,  1886,  1888,  1890,  1892,  1894,
    1896,  1898,  1902,  1906,  1911,  1915,  1917,  1919
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const short int yyrhs[] =
{
     159,     0,    -1,   160,    -1,    -1,    -1,   160,   161,   366,
     162,    -1,   218,    -1,   216,    -1,   219,    -1,   169,    -1,
     192,    -1,   166,    -1,   168,    -1,   165,    -1,   206,    -1,
     288,    -1,   193,    -1,   171,    -1,   239,    -1,   163,    -1,
     164,    -1,   370,    -1,   318,   135,    -1,   135,    -1,   221,
     171,    -1,   221,   239,    -1,   221,   203,    -1,   221,   163,
      -1,   221,   219,    -1,    41,    43,   425,   422,   135,    -1,
      43,   425,   422,   135,    -1,    41,    12,   136,   160,   137,
      -1,    51,   136,   421,   137,    -1,    -1,    51,   331,   167,
     136,   160,   137,    -1,    51,   331,   138,   320,   135,    -1,
     170,    -1,   221,   170,    -1,   177,   366,   178,   135,    -1,
     177,   366,   135,    -1,   334,   177,   366,   178,   135,    -1,
     172,   332,   290,   135,    -1,   334,   172,   332,   290,   135,
      -1,    -1,   174,   173,   136,   181,   137,    -1,    -1,   177,
     366,   178,   180,   139,   175,   187,    -1,   177,   366,   178,
     180,    -1,    -1,   177,   366,   139,   176,   187,    -1,   177,
     366,    -1,    25,    -1,    24,    -1,    26,    -1,   321,   179,
     366,    -1,   325,   321,   179,   366,    -1,   179,   366,    -1,
     330,    -1,   326,    -1,    -1,     3,    -1,    -1,    -1,   181,
     182,   366,   184,    -1,   181,   183,   139,    -1,    28,    -1,
      29,    -1,    30,    -1,   216,    -1,   219,    -1,   169,    -1,
     192,    -1,   186,    -1,   206,    -1,   288,    -1,   193,    -1,
     171,    -1,   243,    -1,   185,    -1,   164,    -1,   370,    -1,
     134,   428,    -1,   318,   135,    -1,   135,    -1,   221,   171,
      -1,   221,   243,    -1,   221,   185,    -1,   221,   219,    -1,
      40,   204,    -1,    40,   221,   204,    -1,    40,   169,    -1,
      40,   244,   265,    -1,   188,    -1,   187,   140,   366,   188,
      -1,   318,   233,    -1,    36,   190,   318,   233,    -1,   191,
     189,   318,   233,    -1,    -1,    36,    -1,    -1,   191,    -1,
      28,    -1,    29,    -1,    30,    -1,   197,   366,   318,   198,
     135,    -1,   197,   366,   135,    -1,   334,   197,   366,   318,
     198,   135,    -1,   194,   332,   290,   135,    -1,   334,   194,
     332,   290,   135,    -1,    -1,   196,   136,   195,   200,   137,
      -1,   197,   366,   318,   198,    -1,   197,   366,   198,    -1,
      27,    -1,    27,    25,    -1,    27,    24,    -1,    -1,    -1,
     139,   199,   341,    -1,   201,    -1,   200,   140,   201,    -1,
      -1,   330,    -1,    -1,   330,   138,   202,   398,    -1,   340,
     233,   321,   330,   138,   422,   135,    -1,   177,   366,   178,
     180,   205,    -1,   334,   177,   366,   178,   180,   205,    -1,
     177,   366,   205,    -1,   334,   177,   366,   205,    -1,   136,
     421,   137,   422,   135,    -1,   139,   422,   135,    -1,   207,
      -1,   334,   207,    -1,    50,   340,   215,   209,   135,    -1,
      50,   172,   332,   208,   135,    -1,    50,   334,   172,   332,
     208,   135,    -1,    50,   194,   332,   208,   135,    -1,    50,
     334,   194,   332,   208,   135,    -1,   210,   209,    -1,    -1,
     209,   140,   210,    -1,   294,   215,    -1,   298,    -1,   212,
      -1,    -1,    -1,   233,   308,   141,   213,   278,   142,   214,
     305,    -1,   211,    -1,    52,   217,   135,    -1,   318,    -1,
      49,   318,    -1,   321,   254,    -1,   321,   249,    -1,   325,
     321,   254,    -1,   325,   321,   249,    -1,    52,    51,   318,
     135,    -1,    -1,    52,   318,   366,   138,   220,   340,   295,
     135,    -1,    43,   143,   411,    -1,    -1,    43,   143,   222,
     223,   411,    -1,   225,    -1,    -1,   223,   140,   224,   225,
      -1,    -1,    -1,   226,   351,   295,   227,   235,    -1,    -1,
      -1,   228,   234,   295,   229,   235,    -1,    -1,    -1,    -1,
     230,   221,    25,   231,   295,   232,   235,    -1,    -1,    83,
      -1,    25,    -1,    49,    -1,    -1,   236,    -1,    -1,   138,
     237,   238,    -1,   407,    -1,   238,   407,    -1,   240,   265,
      -1,   245,   265,    -1,   241,   265,    -1,   242,   265,    -1,
     340,   233,   256,    -1,   340,   233,   321,   256,    -1,   321,
     270,    -1,   334,   321,   270,    -1,   321,   246,    -1,   334,
     321,   246,    -1,   340,   233,   321,   250,    -1,   244,   265,
      -1,   321,   254,   366,   135,    -1,   334,   321,   254,   366,
     135,    -1,   340,   233,   256,    -1,   245,    -1,   270,    -1,
     334,   270,    -1,   246,    -1,   334,   246,    -1,   340,   233,
     250,    -1,    -1,    -1,   249,   141,   247,   278,   142,   366,
     248,   257,   262,    -1,   255,   340,    -1,    -1,   252,   251,
     257,   262,    -1,    -1,   254,   366,   141,   253,   278,   142,
     366,    -1,   255,   394,    -1,    42,    -1,   268,   257,   262,
      -1,    -1,   257,   258,    -1,    -1,    44,   259,   415,    -1,
      31,    -1,   138,    18,    -1,     3,    -1,   260,   415,    -1,
     260,    -1,   261,    -1,    47,    -1,   138,    54,    -1,   138,
      55,    -1,    -1,   263,    -1,    -1,    66,   264,   347,    -1,
     136,   421,   137,    -1,   266,    -1,   135,    -1,    45,   275,
     136,   421,   137,   267,    -1,    -1,   267,    46,   428,   136,
     421,   137,    -1,    -1,   319,   366,   141,   269,   278,   142,
     366,    -1,    -1,    -1,   273,   271,   275,   272,   257,   262,
      -1,    -1,   319,   141,   274,   278,   142,   366,    -1,    -1,
     139,   276,    -1,   277,    -1,   276,   140,   277,    -1,   318,
     428,   233,    -1,    -1,    -1,   279,   280,    -1,   282,    -1,
      -1,   280,   140,   281,   282,    -1,   280,   140,    83,    -1,
      83,    -1,    -1,    -1,   283,   340,   295,   284,   285,    -1,
      -1,   286,    -1,    -1,   138,   287,   398,    -1,   340,   289,
     291,   135,    -1,   298,   285,    -1,    -1,   293,   291,    -1,
      -1,    -1,   291,   140,   292,   293,    -1,   294,   289,    -1,
      -1,   359,    -1,   233,   297,   302,    -1,    -1,   300,   366,
     306,   142,   296,   302,    -1,    -1,   308,    -1,   233,   308,
     310,    -1,    -1,   300,   307,   142,   299,   302,    -1,    -1,
      10,   301,   364,    -1,    11,    -1,    -1,    -1,    -1,   141,
     303,   278,   142,   366,   304,   305,    -1,   311,    -1,    -1,
     305,    33,    -1,   305,    31,    -1,   305,    44,   428,    -1,
     305,    47,   428,    -1,   305,    47,    -1,   295,    -1,   359,
     295,    -1,   298,    -1,   359,   298,    -1,   319,   366,    -1,
     319,   366,   139,   309,    -1,    15,    -1,    13,    -1,    14,
      -1,    -1,   311,    -1,    -1,   312,   313,    -1,   314,    -1,
     313,   314,    -1,    -1,   144,   315,   316,   145,   366,    -1,
      -1,    -1,   317,   398,    -1,   319,    -1,   320,    -1,   330,
      -1,   326,    -1,   328,    -1,   323,   179,    -1,   323,   328,
      -1,   321,   319,    -1,   325,   319,    -1,   325,   320,    -1,
     324,   325,    -1,   326,   325,    -1,   328,   325,    -1,   321,
     324,   325,    -1,   321,   326,   325,    -1,   321,   328,   325,
      -1,    -1,   321,    43,   322,   326,   325,    -1,   146,    -1,
     331,    -1,    84,    -1,    -1,   331,   143,   327,   405,   411,
      -1,    -1,    48,   329,   415,    -1,     4,    -1,     5,    -1,
       3,    -1,     9,    -1,     8,    -1,     6,    -1,     7,    -1,
      22,    -1,    21,    -1,    20,    -1,   103,    -1,   104,    -1,
     105,    -1,   106,    -1,   107,    -1,   108,    -1,   109,    -1,
     110,    -1,   111,    -1,   112,    -1,   101,    -1,   102,    -1,
       3,    -1,     5,    -1,     4,    -1,     9,    -1,     8,    -1,
       6,    -1,     7,    -1,    -1,   332,   333,   366,    -1,   335,
      -1,   358,    -1,    50,    -1,    40,    -1,   335,   366,    -1,
     334,   335,   366,    -1,   336,    -1,   337,    -1,   338,    -1,
      39,    -1,    33,    -1,    41,    -1,    41,    12,    -1,    34,
      -1,    35,    -1,    38,    -1,    36,    -1,    37,    -1,    31,
      -1,    32,    -1,   338,    -1,   339,   338,    -1,   341,   294,
      -1,    -1,   344,   342,   332,    -1,    -1,   334,   344,   343,
     332,    -1,   345,    -1,   177,   366,   178,    -1,   197,   366,
     318,   366,    -1,   356,    -1,   328,    -1,    -1,    49,   346,
     318,   366,    -1,   326,   366,    -1,   320,   366,    -1,   348,
     294,    -1,    -1,   345,   349,   332,    -1,    -1,   334,   345,
     350,   332,    -1,   352,   294,    -1,    -1,   355,   353,   332,
      -1,    -1,   334,   344,   354,   332,    -1,   356,    -1,   328,
      -1,   326,    -1,   320,    -1,    24,   318,    -1,    26,   318,
      -1,   197,   318,    -1,   358,   366,    -1,   357,   366,    -1,
       6,    -1,     7,    -1,     8,    -1,     9,    -1,     3,    -1,
       4,    -1,     5,    -1,    22,    -1,    20,    -1,    21,    -1,
     103,    -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,
     108,    -1,   109,    -1,   110,    -1,   111,    -1,   112,    -1,
     101,    -1,   102,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,    90,    -1,    95,    -1,    96,    -1,    97,    -1,
      98,    -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,
      99,    -1,   100,    -1,   360,    -1,   361,    -1,   365,    -1,
     365,   360,    -1,   147,   366,    -1,    77,   366,    -1,    -1,
     148,   366,   363,   364,    -1,    -1,   339,    -1,   362,    -1,
     365,   362,    -1,    -1,   366,   367,    -1,    -1,    -1,    23,
     368,   401,   369,   145,   145,    -1,    -1,   113,   141,   330,
     140,   371,   340,   142,    -1,    -1,    -1,    -1,   114,   141,
     372,   330,   140,   373,   340,   374,   142,    -1,    -1,   115,
     141,   375,   330,   142,    -1,    -1,   116,   141,   376,   330,
     142,    -1,    -1,    -1,   117,   141,   330,   140,   377,   340,
     378,   140,   422,   142,    -1,    -1,   118,   141,   330,   140,
     379,   340,   142,    -1,    -1,    -1,    -1,   119,   141,   380,
     330,   140,   381,   340,   382,   142,    -1,   120,   141,   330,
     140,   340,   142,    -1,    -1,   121,   141,   330,   140,   383,
     340,   142,    -1,    -1,   125,   141,   330,   140,   384,   340,
     142,    -1,    -1,   122,   141,   330,   140,   385,   340,   142,
      -1,    -1,   126,   141,   330,   140,   386,   340,   142,    -1,
      -1,   123,   141,   330,   140,   387,   340,   142,    -1,    -1,
     127,   141,   330,   140,   388,   340,   142,    -1,    -1,   124,
     141,   330,   140,   389,   340,   142,    -1,    -1,   128,   141,
     330,   140,   390,   340,   142,    -1,    -1,   129,   141,   330,
     140,   391,   340,   140,    13,   142,    -1,    -1,   130,   141,
     330,   140,   392,   340,   140,    13,   142,    -1,   131,   141,
     330,   142,    -1,   132,   141,   330,   142,    -1,   133,   141,
     330,   140,   318,   393,   142,    -1,    -1,   140,    -1,   141,
     142,    -1,   144,   145,    -1,    53,   144,   145,    -1,    54,
     144,   145,    -1,   143,    -1,   149,    -1,   140,    -1,   138,
      -1,    63,   149,    -1,    63,    63,    -1,    12,     3,    -1,
     395,    -1,   150,    -1,   148,    -1,   151,    -1,   152,    -1,
     153,    -1,   154,    -1,   146,    -1,   147,    -1,   155,    -1,
     156,    -1,    53,    -1,    54,    -1,    60,    -1,    61,    -1,
      62,    -1,    64,    -1,    65,    -1,    66,    -1,    69,    -1,
      70,    -1,    71,    -1,    72,    -1,    73,    -1,    67,    -1,
      68,    -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,
      78,    -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,
      50,    -1,    49,    -1,    25,    -1,    24,    -1,    26,    -1,
      43,    -1,    28,    -1,    30,    -1,    29,    -1,    31,    -1,
      34,    -1,    35,    -1,    39,    -1,    38,    -1,    36,    -1,
      37,    -1,    48,    -1,    55,    -1,    41,    -1,    52,    -1,
      51,    -1,    42,    -1,    27,    -1,    44,    -1,    47,    -1,
      58,    -1,    57,    -1,    56,    -1,    59,    -1,    15,    -1,
      13,    -1,    14,    -1,    16,    -1,    17,    -1,    12,    -1,
      18,    -1,    19,    -1,   399,    -1,   398,   399,    -1,   400,
      -1,   409,    -1,   143,    -1,   149,    -1,    63,    -1,   412,
      -1,   415,    -1,   419,    -1,   395,    -1,   139,    -1,   157,
      -1,    84,    -1,   396,    -1,   397,    -1,   358,    -1,   357,
      -1,    -1,   401,   403,    -1,   400,    -1,   143,    -1,   149,
      -1,    63,    -1,   402,    -1,   138,    -1,   140,    -1,   403,
      -1,   135,    -1,    -1,   405,   408,    -1,    -1,   406,   404,
      -1,   409,    -1,   400,    -1,   407,    -1,   138,    -1,   140,
      -1,    -1,   143,   410,   405,   411,    -1,   149,    -1,    63,
      -1,    -1,   144,   413,   401,   145,    -1,    -1,    23,   414,
     401,   145,   145,    -1,    -1,   141,   416,   401,   142,    -1,
      -1,    10,   417,   401,   142,    -1,    -1,    11,   418,   401,
     142,    -1,    -1,   136,   420,   406,   137,    -1,    -1,   421,
     423,    -1,    -1,   422,   424,    -1,   424,    -1,   135,    -1,
     425,    -1,   143,    -1,   426,    -1,   428,    -1,   427,    -1,
      84,    -1,    83,    -1,   395,    -1,    63,    -1,   139,    -1,
     157,    -1,   149,    -1,   138,    -1,   140,    -1,   396,    -1,
     397,    -1,   358,    -1,   357,    -1,    85,    -1,   136,   421,
     137,    -1,   144,   421,   145,    -1,    23,   421,   145,   145,
      -1,   429,   421,   142,    -1,   141,    -1,    10,    -1,    11,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1471,  1471,  1473,  1475,  1474,  1485,  1486,  1487,  1488,
    1489,  1490,  1491,  1492,  1493,  1494,  1495,  1496,  1497,  1498,
    1499,  1500,  1501,  1502,  1505,  1506,  1507,  1508,  1509,  1512,
    1513,  1520,  1527,  1528,  1528,  1532,  1539,  1540,  1543,  1544,
    1545,  1548,  1549,  1552,  1552,  1567,  1566,  1572,  1578,  1577,
    1582,  1588,  1589,  1590,  1593,  1595,  1597,  1600,  1601,  1604,
    1605,  1607,  1609,  1608,  1617,  1621,  1622,  1623,  1626,  1627,
    1628,  1629,  1630,  1631,  1632,  1633,  1634,  1635,  1636,  1637,
    1638,  1639,  1640,  1641,  1644,  1645,  1646,  1647,  1650,  1651,
    1652,  1653,  1656,  1657,  1660,  1662,  1665,  1670,  1671,  1674,
    1675,  1678,  1679,  1680,  1691,  1692,  1693,  1697,  1698,  1702,
    1702,  1715,  1721,  1729,  1730,  1731,  1734,  1735,  1735,  1739,
    1740,  1742,  1743,  1744,  1744,  1752,  1756,  1758,  1760,  1761,
    1764,  1765,  1773,  1774,  1777,  1778,  1780,  1782,  1784,  1788,
    1790,  1791,  1794,  1797,  1798,  1801,  1802,  1801,  1806,  1840,
    1843,  1844,  1845,  1847,  1849,  1851,  1855,  1858,  1858,  1889,
    1892,  1891,  1909,  1911,  1910,  1915,  1917,  1915,  1919,  1921,
    1919,  1923,  1924,  1926,  1923,  1937,  1938,  1941,  1942,  1944,
    1945,  1948,  1948,  1958,  1959,  1967,  1968,  1969,  1970,  1973,
    1976,  1977,  1978,  1981,  1982,  1983,  1986,  1987,  1988,  1992,
    1993,  1994,  1995,  1998,  1999,  2000,  2004,  2009,  2003,  2021,
    2025,  2025,  2037,  2036,  2045,  2049,  2052,  2061,  2062,  2065,
    2065,  2066,  2067,  2073,  2078,  2079,  2080,  2083,  2086,  2087,
    2089,  2090,  2093,  2093,  2101,  2102,  2103,  2106,  2108,  2109,
    2113,  2112,  2124,  2125,  2124,  2144,  2144,  2148,  2149,  2152,
    2153,  2156,  2162,  2163,  2163,  2166,  2167,  2167,  2169,  2171,
    2175,  2177,  2175,  2201,  2202,  2205,  2205,  2213,  2216,  2275,
    2276,  2278,  2279,  2279,  2282,  2285,  2286,  2290,  2301,  2301,
    2319,  2320,  2324,  2326,  2326,  2344,  2344,  2346,  2350,  2351,
    2352,  2351,  2357,  2359,  2360,  2361,  2362,  2363,  2364,  2367,
    2368,  2372,  2373,  2377,  2378,  2382,  2383,  2384,  2387,  2388,
    2391,  2391,  2394,  2395,  2398,  2398,  2402,  2403,  2403,  2410,
    2411,  2414,  2415,  2416,  2417,  2418,  2421,  2423,  2425,  2429,
    2431,  2433,  2435,  2437,  2439,  2441,  2441,  2446,  2449,  2452,
    2455,  2455,  2463,  2463,  2471,  2472,  2473,  2474,  2475,  2476,
    2477,  2478,  2479,  2480,  2481,  2482,  2483,  2484,  2485,  2486,
    2487,  2488,  2489,  2490,  2491,  2492,  2499,  2500,  2501,  2502,
    2503,  2504,  2505,  2511,  2512,  2515,  2516,  2518,  2519,  2522,
    2523,  2526,  2527,  2528,  2529,  2532,  2533,  2534,  2535,  2536,
    2540,  2541,  2542,  2545,  2546,  2549,  2550,  2558,  2561,  2561,
    2563,  2563,  2567,  2568,  2570,  2574,  2575,  2577,  2577,  2579,
    2581,  2585,  2588,  2588,  2590,  2590,  2594,  2597,  2597,  2599,
    2599,  2603,  2604,  2606,  2608,  2610,  2612,  2614,  2618,  2619,
    2622,  2623,  2624,  2625,  2626,  2627,  2628,  2629,  2630,  2631,
    2632,  2633,  2634,  2635,  2636,  2637,  2638,  2639,  2640,  2641,
    2642,  2643,  2646,  2647,  2648,  2649,  2650,  2651,  2652,  2653,
    2654,  2655,  2656,  2657,  2658,  2659,  2660,  2680,  2681,  2682,
    2683,  2686,  2690,  2694,  2694,  2698,  2699,  2714,  2715,  2731,
    2732,  2735,  2735,  2735,  2742,  2742,  2752,  2753,  2753,  2752,
    2762,  2762,  2772,  2772,  2781,  2781,  2781,  2814,  2813,  2824,
    2825,  2825,  2824,  2834,  2852,  2852,  2857,  2857,  2862,  2862,
    2867,  2867,  2872,  2872,  2877,  2877,  2882,  2882,  2887,  2887,
    2892,  2892,  2909,  2909,  2923,  2960,  2998,  3038,  3039,  3046,
    3047,  3048,  3049,  3050,  3051,  3052,  3053,  3054,  3055,  3056,
    3057,  3060,  3061,  3062,  3063,  3064,  3065,  3066,  3067,  3068,
    3069,  3070,  3071,  3072,  3073,  3074,  3075,  3076,  3077,  3078,
    3079,  3080,  3081,  3082,  3083,  3084,  3085,  3086,  3087,  3088,
    3089,  3090,  3091,  3092,  3093,  3096,  3097,  3098,  3099,  3100,
    3101,  3102,  3103,  3104,  3105,  3106,  3107,  3108,  3109,  3110,
    3111,  3112,  3113,  3114,  3115,  3116,  3117,  3118,  3119,  3120,
    3121,  3122,  3123,  3124,  3127,  3128,  3129,  3130,  3131,  3132,
    3133,  3134,  3141,  3142,  3145,  3146,  3147,  3148,  3149,  3152,
    3153,  3154,  3155,  3185,  3185,  3186,  3187,  3188,  3189,  3190,
    3213,  3214,  3217,  3218,  3219,  3220,  3223,  3224,  3225,  3228,
    3229,  3231,  3232,  3234,  3235,  3238,  3239,  3242,  3243,  3244,
    3248,  3247,  3261,  3262,  3265,  3265,  3267,  3267,  3271,  3271,
    3273,  3273,  3275,  3275,  3279,  3279,  3284,  3285,  3287,  3288,
    3291,  3292,  3295,  3296,  3299,  3300,  3301,  3302,  3303,  3304,
    3305,  3306,  3306,  3306,  3306,  3306,  3307,  3308,  3309,  3310,
    3311,  3314,  3317,  3318,  3321,  3324,  3324,  3324
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
  "$@9", "nested_variable_initialization", "ignored_class",
  "ignored_class_body", "typedef_declaration", "basic_typedef_declaration",
  "typedef_declarator_list", "typedef_declarator_list_cont",
  "typedef_declarator", "typedef_direct_declarator",
  "function_direct_declarator", "$@10", "$@11", "typedef_declarator_id",
  "using_declaration", "using_id", "using_directive", "alias_declaration",
  "$@12", "template_head", "$@13", "template_parameter_list", "$@14",
  "template_parameter", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20",
  "$@21", "opt_ellipsis", "class_or_typename",
  "opt_template_parameter_initializer", "template_parameter_initializer",
  "$@22", "template_parameter_value", "function_definition",
  "function_declaration", "nested_method_declaration",
  "nested_operator_declaration", "method_definition", "method_declaration",
  "operator_declaration", "conversion_function", "$@23", "$@24",
  "conversion_function_id", "operator_function_nr", "$@25",
  "operator_function_sig", "$@26", "operator_function_id", "operator_sig",
  "function_nr", "function_trailer_clause", "function_trailer", "$@27",
  "noexcept_sig", "function_body_as_trailer", "opt_trailing_return_type",
  "trailing_return_type", "$@28", "function_body", "function_try_block",
  "handler_seq", "function_sig", "$@29", "structor_declaration", "$@30",
  "$@31", "structor_sig", "$@32", "opt_ctor_initializer",
  "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "$@33", "parameter_list", "$@34",
  "parameter_declaration", "$@35", "$@36", "opt_initializer",
  "initializer", "$@37", "variable_declaration", "init_declarator_id",
  "opt_declarator_list", "declarator_list_cont", "$@38", "init_declarator",
  "opt_ptr_operator_seq", "direct_abstract_declarator", "$@39",
  "opt_declarator_id", "direct_declarator", "$@40", "lp_or_la", "$@41",
  "opt_array_or_parameters", "$@42", "$@43", "function_qualifiers",
  "abstract_declarator", "declarator", "declarator_id", "bitfield_size",
  "opt_array_decorator_seq", "array_decorator_seq", "$@44",
  "array_decorator_seq_impl", "array_decorator", "$@45",
  "array_size_specifier", "$@46", "id_expression", "unqualified_id",
  "qualified_id", "nested_name_specifier", "$@47", "tilde_sig",
  "identifier_sig", "scope_operator_sig", "template_id", "$@48",
  "decltype_specifier", "$@49", "simple_id", "identifier",
  "opt_decl_specifier_seq", "decl_specifier2", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "function_specifier",
  "cv_qualifier", "cv_qualifier_seq", "store_type", "store_type_specifier",
  "$@50", "$@51", "type_specifier", "trailing_type_specifier", "$@52",
  "trailing_type_specifier_seq", "trailing_type_specifier_seq2", "$@53",
  "$@54", "tparam_type", "tparam_type_specifier2", "$@55", "$@56",
  "tparam_type_specifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "rvalue_reference",
  "pointer", "$@57", "ptr_cv_qualifier_seq", "pointer_seq",
  "attribute_specifier_seq", "attribute_specifier", "$@58", "$@59",
  "declaration_macro", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "constant_expression_item", "common_bracket_item",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig",
  "$@82", "right_angle_bracket", "brackets_sig", "$@83", "$@84",
  "parentheses_sig", "$@85", "$@86", "$@87", "braces_sig", "$@88",
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
     200,   201,   201,   202,   201,   203,   204,   204,   204,   204,
     205,   205,   206,   206,   207,   207,   207,   207,   207,   208,
     209,   209,   210,   211,   211,   213,   214,   212,   215,   216,
     217,   217,   217,   217,   217,   217,   218,   220,   219,   221,
     222,   221,   223,   224,   223,   226,   227,   225,   228,   229,
     225,   230,   231,   232,   225,   233,   233,   234,   234,   235,
     235,   237,   236,   238,   238,   239,   239,   239,   239,   240,
     241,   241,   241,   242,   242,   242,   243,   243,   243,   244,
     244,   244,   244,   245,   245,   245,   247,   248,   246,   249,
     251,   250,   253,   252,   254,   255,   256,   257,   257,   259,
     258,   258,   258,   258,   258,   258,   258,   260,   261,   261,
     262,   262,   264,   263,   265,   265,   265,   266,   267,   267,
     269,   268,   271,   272,   270,   274,   273,   275,   275,   276,
     276,   277,   278,   279,   278,   280,   281,   280,   280,   280,
     283,   284,   282,   285,   285,   287,   286,   288,   289,   290,
     290,   291,   292,   291,   293,   294,   294,   295,   296,   295,
     297,   297,   298,   299,   298,   301,   300,   300,   302,   303,
     304,   302,   302,   305,   305,   305,   305,   305,   305,   306,
     306,   307,   307,   308,   308,   309,   309,   309,   310,   310,
     312,   311,   313,   313,   315,   314,   316,   317,   316,   318,
     318,   319,   319,   319,   319,   319,   320,   320,   320,   321,
     321,   321,   321,   321,   321,   322,   321,   323,   324,   325,
     327,   326,   329,   328,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   331,   331,   331,   331,
     331,   331,   331,   332,   332,   333,   333,   333,   333,   334,
     334,   335,   335,   335,   335,   336,   336,   336,   336,   336,
     337,   337,   337,   338,   338,   339,   339,   340,   342,   341,
     343,   341,   344,   344,   344,   345,   345,   346,   345,   345,
     345,   347,   349,   348,   350,   348,   351,   353,   352,   354,
     352,   355,   355,   355,   355,   355,   355,   355,   356,   356,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   357,   357,
     357,   357,   358,   358,   358,   358,   358,   358,   358,   358,
     358,   358,   358,   358,   358,   358,   358,   359,   359,   359,
     359,   360,   361,   363,   362,   364,   364,   365,   365,   366,
     366,   368,   369,   367,   371,   370,   372,   373,   374,   370,
     375,   370,   376,   370,   377,   378,   370,   379,   370,   380,
     381,   382,   370,   370,   383,   370,   384,   370,   385,   370,
     386,   370,   387,   370,   388,   370,   389,   370,   390,   370,
     391,   370,   392,   370,   370,   370,   370,   393,   393,   394,
     394,   394,   394,   394,   394,   394,   394,   394,   394,   394,
     394,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   395,   395,   395,   395,   395,
     395,   395,   395,   395,   395,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   397,   397,   397,   397,   397,   397,
     397,   397,   398,   398,   399,   399,   399,   399,   399,   400,
     400,   400,   400,   400,   400,   400,   400,   400,   400,   400,
     401,   401,   402,   402,   402,   402,   403,   403,   403,   404,
     404,   405,   405,   406,   406,   407,   407,   408,   408,   408,
     410,   409,   411,   411,   413,   412,   414,   412,   416,   415,
     417,   415,   418,   415,   420,   419,   421,   421,   422,   422,
     423,   423,   424,   424,   425,   425,   425,   425,   425,   425,
     425,   425,   425,   425,   425,   425,   425,   425,   425,   425,
     425,   426,   427,   427,   428,   429,   429,   429
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
       3,     0,     1,     0,     4,     7,     5,     6,     3,     4,
       5,     3,     1,     2,     5,     5,     6,     5,     6,     2,
       0,     3,     2,     1,     1,     0,     0,     8,     1,     3,
       1,     2,     2,     2,     3,     3,     4,     0,     8,     3,
       0,     5,     1,     0,     4,     0,     0,     5,     0,     0,
       5,     0,     0,     0,     7,     0,     1,     1,     1,     0,
       1,     0,     3,     1,     2,     2,     2,     2,     2,     3,
       4,     2,     3,     2,     3,     4,     2,     4,     5,     3,
       1,     1,     2,     1,     2,     3,     0,     0,     9,     2,
       0,     4,     0,     7,     2,     1,     3,     0,     2,     0,
       3,     1,     2,     1,     2,     1,     1,     1,     2,     2,
       0,     1,     0,     3,     3,     1,     1,     6,     0,     6,
       0,     7,     0,     0,     6,     0,     6,     0,     2,     1,
       3,     3,     0,     0,     2,     1,     0,     4,     3,     1,
       0,     0,     5,     0,     1,     0,     3,     4,     2,     0,
       2,     0,     0,     4,     2,     0,     1,     3,     0,     6,
       0,     1,     3,     0,     5,     0,     3,     1,     0,     0,
       0,     7,     1,     0,     2,     2,     3,     3,     2,     1,
       2,     1,     2,     2,     4,     1,     1,     1,     0,     1,
       0,     2,     1,     2,     0,     5,     0,     0,     2,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     3,     3,     3,     0,     5,     1,     1,     1,
       0,     5,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     1,     1,     1,     1,     2,
       3,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     0,     3,
       0,     4,     1,     3,     4,     1,     1,     0,     4,     2,
       2,     2,     0,     3,     0,     4,     2,     0,     3,     0,
       4,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     2,     0,     4,     0,     1,     1,     2,     0,
       2,     0,     0,     6,     0,     7,     0,     0,     0,     9,
       0,     5,     0,     5,     0,     0,    10,     0,     7,     0,
       0,     0,     9,     6,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     9,     0,     9,     4,     4,     7,     0,     1,     2,
       2,     3,     3,     1,     1,     1,     1,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       0,     4,     1,     1,     0,     4,     0,     5,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     4,     3,     1,     1,     1
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
       0,     0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0,     0
};

/* YYDEFACT[S] -- default rule to reduce with in state S when YYTABLE
   doesn't specify something else to do.  Zero means the default is an
   error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   479,     0,   434,   435,   436,   430,
     431,   432,   433,   438,   439,   437,   481,    52,    51,    53,
     113,   393,   394,   385,   388,   389,   391,   392,   390,   384,
     386,   215,     0,   342,   407,     0,     0,     0,   339,   452,
     453,   454,   455,   456,   461,   462,   463,   464,   457,   458,
     459,   460,   465,   466,   450,   451,   440,   441,   442,   443,
     444,   445,   446,   447,   448,   449,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   337,     5,
      19,    20,    13,    11,    12,     9,    36,    17,   373,    43,
     479,    10,    16,   373,     0,   479,    14,   132,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   203,     0,     0,
      15,     0,   319,   479,     0,     0,     0,     0,   479,   406,
     321,   338,     0,   479,   381,   382,   383,   175,   275,   398,
     402,   405,   479,   479,   480,    21,   630,   115,   114,   387,
       0,   434,   435,   436,   430,   431,   432,   433,   696,   697,
     609,   605,   606,   604,   607,   608,   610,   611,   438,   439,
     437,   666,   578,   577,   579,   597,   581,   583,   582,   584,
     585,   586,   589,   590,   588,   587,   593,   596,   580,   598,
     599,   591,   576,   575,   595,   594,   551,   552,   592,   602,
     601,   600,   603,   553,   554,   555,   680,   556,   557,   558,
     564,   565,   559,   560,   561,   562,   563,   566,   567,   568,
     569,   570,   571,   572,   573,   574,   678,   677,   690,   450,
     451,   440,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   666,   684,   681,   685,   695,   160,   666,   547,   548,
     542,   683,   541,   543,   544,   545,   546,   549,   550,   682,
     689,   688,   679,   686,   687,   668,   674,   676,   675,   666,
       0,     0,   434,   435,   436,   430,   431,   432,   433,   386,
     373,   479,   373,   479,   479,     0,   479,   406,     0,   175,
     366,   368,   367,   371,   372,   370,   369,   666,    33,   346,
     344,   345,   349,   350,   348,   347,   353,   352,   351,     0,
       0,   364,   365,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,     0,   479,   320,     0,     0,   322,   323,
       0,   486,   490,   492,     0,     0,   499,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   275,     0,    50,   275,   109,   116,     0,     0,    27,
      37,    24,   479,    26,    28,     0,    25,     0,   175,   247,
     236,   666,   185,   235,   187,   188,   186,   206,   479,     0,
     209,    22,   410,   335,   193,   191,   242,   326,     0,   322,
     323,   324,    58,   325,    57,     0,   329,   327,   328,   330,
     409,   331,   340,   373,   479,   373,   479,   133,   204,     0,
     479,   400,   379,   285,   287,   176,     0,   271,   263,   175,
     479,   479,   479,   397,   276,   467,   468,   477,   469,   373,
     429,   428,   482,     3,   668,     0,     0,   653,   652,   165,
     159,     0,     0,     0,   660,   662,   658,   343,   479,   387,
     275,    50,   275,   116,   326,   373,   373,   148,   144,   140,
       0,   143,     0,     0,     0,   151,     0,   149,     0,   153,
     152,     0,     0,   346,   344,   345,   349,   350,   348,   347,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   378,   377,     0,   271,   175,   479,   375,   376,    61,
      39,    48,   403,   479,     0,     0,    58,     0,     0,   121,
     105,   117,   112,   479,   479,     0,     0,     0,     0,     0,
       0,   253,     0,     0,   247,   245,   332,   333,   334,   641,
     275,    50,   275,   116,   194,   192,   380,   373,   475,   205,
     210,   479,     0,   189,   217,   308,   479,     0,     0,   265,
     268,   264,     0,   301,     0,   175,   472,   471,   473,   470,
     478,   399,   656,   635,   625,   664,   637,   623,   638,   633,
     654,   634,   624,   629,   628,     0,   622,   626,   627,   632,
     636,   631,   619,   620,   621,     4,     0,   671,   673,     0,
     667,   670,   672,   691,     0,   162,     0,     0,     0,   692,
      30,   669,   694,   630,   630,   630,   408,     0,   140,   175,
     403,     0,   479,   275,   275,     0,   308,   479,   322,   323,
      32,     0,     0,     3,   156,   157,     0,   551,   552,     0,
     536,   535,     0,   533,     0,   534,   214,   540,   155,   154,
     484,     0,     0,     0,   494,   497,     0,     0,   504,   508,
     512,   516,   506,   510,   514,   518,   520,   522,   524,   525,
       0,    41,   270,   274,   374,    62,     0,    60,    38,    47,
      56,   479,    58,     0,     0,   107,     0,   119,   122,     0,
     111,   404,   479,   479,     0,   248,   249,     0,   666,   234,
       0,   260,   403,     0,   243,   253,     0,     0,   403,     0,
     479,   401,   395,   476,   286,   217,     0,   230,   282,   309,
       0,   303,   195,   190,   267,   272,     0,   283,   302,   475,
     630,   643,   630,     0,    31,    29,   693,   163,   161,     0,
       0,     0,   424,   423,   422,     0,   175,   275,   417,   421,
     177,   178,   175,     0,     0,     0,     0,   135,   139,   142,
     137,   111,     0,     0,   134,   275,   145,   303,    35,     4,
       0,   539,     0,     0,   538,   537,   529,   530,     0,   487,
     491,   493,     0,     0,   500,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   527,    65,    66,    67,
      44,   479,     0,   101,   102,   103,    99,    49,    92,    97,
     175,    45,    54,   479,   110,   121,   123,   118,   104,     0,
     321,     0,   175,     0,   479,   259,   254,   255,     0,   336,
     217,     0,   648,   649,   650,   646,   647,   642,   645,   341,
      42,    40,   108,   111,   396,   230,   212,   223,   221,   219,
     227,   232,     0,   218,   225,   226,   216,   231,   314,   311,
     312,     0,   240,   275,   618,   616,   617,   266,   612,   614,
     615,   288,   474,     0,     0,     0,   483,   165,   425,   426,
     427,   419,   280,   166,   479,   416,   373,   169,   172,   661,
     663,   659,   136,   138,   141,   253,    34,   175,   531,   532,
       0,     0,   495,     0,     0,   503,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   528,     0,     0,    64,
       0,   100,   479,    98,     0,    94,     0,    55,   120,     0,
     668,   250,   251,   238,   207,   256,   175,   230,   479,   641,
     106,   211,   253,     0,     0,   222,   228,   229,   224,   317,
     313,   306,   307,   305,   304,   253,   273,   613,   289,   284,
     292,     0,   640,   665,   639,   644,   655,   164,   373,   288,
     281,   179,   175,   418,   179,   175,     0,     0,   485,   488,
       0,   498,   501,   505,   509,   513,   517,   507,   511,   515,
     519,     0,     0,   526,     0,   386,     0,     0,    83,    79,
      70,    76,    63,    78,    72,    71,    75,    73,    68,    69,
       0,    77,     0,   200,   201,    74,     0,   319,     0,     0,
     175,    80,   175,     0,   175,    46,   124,     0,   237,   217,
     258,   260,   261,   244,   246,     0,     0,   220,     0,   412,
     233,   275,     0,     0,     0,   253,   657,   420,   277,   181,
     167,   180,   299,     0,   175,   170,   173,   146,   158,     0,
     668,     0,     0,     0,    90,   479,    88,     0,     0,     0,
       0,   175,    81,    84,    86,    87,     0,    85,     0,   196,
      82,   479,   202,     0,     0,    95,    93,    96,   125,     0,
     230,   257,   263,   651,   479,   414,   373,   411,   479,   318,
     479,     0,     0,   278,   300,   179,   293,   489,     0,   502,
     521,   523,     0,   479,    89,     0,    91,   479,     0,     0,
       0,   479,   199,     0,   208,   262,   213,   373,   413,   315,
     241,   479,   182,   183,   288,   174,   147,   496,   666,   668,
     403,   128,     0,   479,     0,   197,     0,   666,   415,   290,
     184,   279,   295,   294,     0,   298,     0,     0,     0,    59,
       0,   403,   129,   198,     0,   293,   296,   297,   668,   131,
     126,    59,     0,   239,   291,     0,   127,   130
};

/* YYPDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   359,    91,    92,    93,   464,
      94,    95,    96,   361,    98,   352,    99,   926,   676,   378,
     512,   513,   679,   675,   801,   802,  1002,  1074,  1004,   807,
     808,   924,   920,   809,   101,   102,   103,   519,   104,   362,
     522,   689,   686,   687,   929,   363,  1066,  1141,   106,   107,
     617,   625,   618,   457,   458,   895,  1106,   459,   108,   323,
     109,   364,   770,   365,   439,   604,   877,   605,   606,   971,
     607,   974,   608,   975,  1105,   882,   752,  1050,  1051,  1102,
    1132,   366,   113,   114,   115,  1077,  1012,  1013,   117,   531,
    1029,   118,   549,   715,   550,   942,   551,   119,   553,   717,
     853,   943,   854,   855,   856,   857,   944,   372,   373,  1028,
     554,   955,  1014,   534,   830,   386,   705,   529,   695,   696,
     700,   701,   826,  1031,   827,   828,  1092,   560,   561,   726,
     120,   417,   503,   558,   863,   504,   505,   883,  1134,   969,
     418,   871,   419,   548,   959,  1045,  1165,  1136,  1053,   564,
     555,   954,   718,   960,   720,   859,   860,   949,  1042,  1043,
     810,   122,   284,   285,   533,   125,   126,   127,   286,   539,
     287,   270,   130,   131,   351,   506,   379,   133,   134,   135,
     136,   713,  1071,   138,   429,   547,   139,   140,   271,  1040,
    1041,  1096,  1127,   746,   747,   886,   968,   748,   141,   142,
     143,   424,   425,   426,   427,   729,   714,   428,   691,   144,
     146,   585,   145,   778,   481,   901,  1059,   482,   483,   782,
     980,   783,   486,   904,  1061,   786,   790,   787,   791,   788,
     792,   789,   793,   794,   795,   917,   646,   262,   263,   264,
     867,   868,   589,   432,   590,   591,   965,   706,   874,   836,
     837,   870,   939,   440,   592,   732,   730,   593,   615,   613,
     614,   594,   731,   435,   442,   600,   601,   602,   266,   267,
     268,   269
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -977
static const short int yypact[] =
{
    -977,    82,    89,  -977,  -977,  6822,    -7,   167,   243,   292,
     319,   329,   354,   -32,    11,   103,  -977,  -977,  -977,  -977,
     356,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
      95,  -977,  4520,  -977,  -977,  8626,   290,  7460,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,   193,   194,   248,   282,   293,   324,
     339,   342,   358,   359,   373,   380,   -26,    48,   112,   141,
     151,   160,   168,   189,   191,   196,   198,   211,   244,   259,
     261,   264,   268,   279,   304,   328,   335,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,    19,  -977,  -977,  -977,  -977,  -977,
    -977,  8296,  -977,    45,    45,    45,    45,  -977,   338,  8626,
    -977,     6,  -977,   210,  7571,  8258,   263,  7747,   234,   247,
    -977,   341,  8406,  -977,  -977,  -977,  -977,   122,     1,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,   350,
    4830,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,    25,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
      70,  7747,    21,   174,   177,   201,   206,   223,   229,   484,
    -977,  -977,  -977,  -977,  -977,  7793,   263,   263,  8626,   122,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,   360,    21,
     174,   177,   201,   206,   223,   229,  -977,  -977,  -977,  7747,
    7747,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,   366,   368,  -977,  7571,  7747,   263,   263,
    2011,  -977,  -977,  -977,  2011,  2011,  -977,  2011,  2011,  2011,
    2011,  2011,  2011,  2011,  2011,  2011,  2011,  2011,  2011,  2011,
    2011,  8122,   375,  7975,  8122,  -977,  1584,   376,  7747,  -977,
    -977,  -977,  -977,  -977,  -977,  8296,  -977,  8516,   450,   400,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  8626,
    -977,  -977,   523,  -977,  -977,  -977,  -977,   407,   263,   263,
     263,  -977,  -977,  -977,  -977,   341,  -977,  -977,  -977,  -977,
     523,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  7571,
    -977,  -977,   523,  -977,  -977,  -977,  7818,  -977,   412,    54,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,   120,  -977,
     523,   523,  5760,  -977,  -977,  2195,  2350,  -977,  -977,   240,
    -977,  2505,  3590,  2660,  -977,  -977,  -977,  -977,  -977,  -977,
    8195,  8086,  8195,  7525,  -977,  -977,  -977,  -977,  -977,  -977,
    7864,  -977,  2815,   389,   418,  -977,   420,  -977,    52,  -977,
    -977,  6535,  7571,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
     419,  2011,  2011,  2011,   422,   423,  2011,   424,   430,   433,
     438,   440,   441,   442,   446,   447,   451,   452,   448,   455,
     453,  -977,  -977,   463,  -977,   122,  -977,  -977,  -977,  -977,
    -977,  -977,    60,  -977,  8956,   644,   263,   263,   465,  2011,
    -977,  -977,  -977,   396,  -977,  7636,  8516,  7818,  7747,   466,
    2970,   468,  2062,   783,   400,  -977,  -977,  -977,  -977,  -977,
    8122,  8086,  8122,  7525,  -977,  -977,   523,  -977,   513,  -977,
    -977,  -977,  1905,  -977,  -977,   469,  -977,  7571,   -34,  -977,
    -977,  -977,  7864,  -977,   472,   122,   523,   523,   523,  -977,
    -977,  8948,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,   462,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,   479,  3745,  -977,  -977,   475,
    -977,  -977,  -977,  -977,    13,  -977,  8736,    61,   579,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,   523,   488,  -977,   122,
      80,   490,   -12,  8195,  8195,   105,   143,  -977,  -977,  -977,
    -977,   492,   263,  -977,  -977,  -977,   625,   485,   486,    29,
    -977,  -977,   489,  -977,   487,  -977,  -977,  -977,  -977,  -977,
    -977,   494,   495,   497,  -977,  -977,   496,  8626,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    7747,  -977,   500,  -977,   523,   142,  7414,  -977,  -977,   502,
     523,  -977,   263,   263,  8956,  -977,   217,  -977,   504,  8626,
     519,   523,  -977,  -977,  7571,   506,  -977,    84,  -977,  -977,
     514,   572,  -977,   263,  -977,   468,  5915,   522,    71,   524,
     396,  8948,  -977,   513,  -977,  -977,    47,   132,  -977,  -977,
     517,    43,  -977,  -977,  -977,  -977,  6225,  -977,  -977,   513,
    -977,  -977,  -977,   518,  -977,  -977,  -977,  -977,  -977,  7747,
    7747,  7747,  -977,   263,   263,  8626,   122,     1,  -977,  -977,
    -977,  -977,   122,   633,  4985,  5140,  5295,  -977,   526,  -977,
    -977,  -977,   527,   529,  -977,     1,  -977,    44,  -977,   530,
    8626,  -977,   525,   531,  -977,  -977,  -977,  -977,  8626,  -977,
    -977,  -977,  8626,  8626,  -977,   532,  8626,  8626,  8626,  8626,
    8626,  8626,  8626,  8626,  8626,  8626,   528,  -977,  -977,  -977,
    -977,  -977,   533,  -977,  -977,  -977,   414,   535,  -977,   641,
     450,  -977,   523,  -977,  -977,  2011,  -977,  -977,  -977,    77,
     540,  7747,   450,  3125,  -977,  -977,   541,  -977,  8626,  -977,
    -977,   544,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,   547,  -977,   132,  -977,  -977,  -977,  -977,
    -977,  -977,   208,  -977,    70,  -977,  -977,  -977,  -977,   517,
    -977,   511,  -977,     1,  -977,  6070,  -977,  6225,  -977,  -977,
    -977,   170,  -977,  5450,  4675,  5605,  -977,   240,  -977,  -977,
    -977,  -977,  7864,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,   468,  -977,   122,  -977,  -977,
     545,  8626,  -977,   546,  8626,  -977,   548,   552,   554,   555,
     559,   560,   562,   566,   570,   571,  -977,   573,  6689,  -977,
    7747,  -977,  -977,  -977,  7747,  -977,  7414,   523,  -977,  6225,
    -977,  -977,  -977,  -977,   523,   629,   122,   132,  -977,  -977,
    -977,  -977,   468,    70,  8846,  -977,  -977,  -977,  -977,   568,
    -977,  -977,  -977,  -977,  -977,   468,  -977,  -977,  -977,  -977,
    -977,   574,  -977,  -977,  -977,  -977,  -977,  -977,  -977,   170,
    -977,   578,    46,  8948,   578,   122,   575,   583,  -977,  -977,
     580,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,   709,   710,  -977,  7071,   100,  7682,    84,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    6955,  -977,    45,  -977,  -977,  -977,   591,   407,  7571,  7187,
     122,  -977,   450,  1735,   450,   535,  6225,  3900,   681,  -977,
    -977,  -977,  -977,  -977,   523,  5915,   586,  -977,  8846,  -977,
    -977,     1,   588,  6225,   589,   468,  -977,  8948,  -977,  -977,
    -977,  -977,  -977,   595,   122,  -977,  -977,  -977,  -977,   596,
    -977,   597,   598,   599,  -977,  -977,  -977,  1419,    45,   407,
    7303,   450,  -977,  -977,  -977,  -977,  6955,  -977,  7303,  -977,
    -977,  -977,  -977,  7571,  7818,  -977,  -977,  -977,  -977,    84,
     132,  -977,   412,  -977,  -977,  -977,  -977,  -977,  -977,  6225,
    -977,   600,  6380,  -977,  -977,   578,  -977,  -977,  4055,  -977,
    -977,  -977,  7929,  -977,  -977,  1419,  -977,  -977,  7818,  7303,
      94,  -977,  -977,   609,  -977,  -977,   523,  -977,  8948,   523,
     523,  -977,  6380,  -977,   170,  -977,   385,  -977,  -977,  -977,
      88,  -977,  7929,  -977,  8040,  -977,    98,  -977,  8948,   523,
    -977,  -977,  -977,  -977,    84,    84,  3280,  4210,   220,    57,
    8040,   111,  -977,  -977,  3435,  -977,  -977,  -977,  -977,  -977,
    -977,    69,   220,  -977,   385,  4365,  -977,  -977
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -977,  -977,  -390,  -977,  -977,   741,  -170,  -977,  -977,  -977,
    -977,  -834,  -105,    -2,   -24,  -977,  -977,  -977,  -977,   204,
    -439,  -108,  -710,  -977,  -977,  -977,  -977,  -168,  -977,  -175,
    -271,  -977,  -977,   -53,  -161,  -159,   -33,  -977,  -977,    18,
    -475,  -977,  -977,   -54,  -977,  -977,  -305,  -607,  -155,  -128,
    -402,   146,     2,  -977,  -977,  -977,  -977,   147,  -150,  -977,
    -977,     5,  -977,    -4,  -977,  -977,  -977,  -106,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,   -52,  -977,  -877,  -977,  -977,
    -977,   764,  -977,  -977,  -977,  -145,  -219,    14,   -90,  -977,
    -977,  -275,  -503,  -977,  -977,  -977,  -318,  -286,  -550,  -679,
    -977,  -977,  -977,  -977,  -821,  -977,  -977,   -86,  -977,  -977,
    -977,  -977,   -97,  -977,  -977,  -977,  -977,   245,  -977,   -43,
    -683,  -977,  -977,  -977,  -250,  -977,  -977,  -309,  -977,  -977,
    -136,   288,  -310,   280,  -977,   -69,   -40,  -694,  -977,  -977,
    -242,  -977,  -684,  -977,  -920,  -977,  -977,  -370,  -977,  -977,
    -442,  -977,  -977,  -459,  -977,  -977,   -63,  -977,  -977,  -977,
     906,  1011,   941,    34,  -977,  -977,   -51,   128,    -5,  -977,
      15,  -977,  1037,   -21,   -65,  -977,     0,   875,  -977,  -977,
    -493,  -977,   739,   110,  -977,  -977,  -119,  -865,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,   195,   176,
     153,  -398,   372,  -977,   374,  -977,    75,  -977,   680,  -977,
    -977,  -977,  -113,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,  -977,
    -977,  -977,  -977,  -977,  -977,  -977,  -977,   685,   539,   786,
    -868,  -826,  -680,  -456,  -977,   -68,  -977,  -132,  -977,  -976,
    -977,  -661,  -977,  -588,  -977,  -977,  -977,  -245,  -977,  -977,
    -977,  -977,  -977,  -210,  -425,  -977,  -428,    81,  -977,  -977,
    -664,  -977
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -651
static const short int yytable[] =
{
     128,   111,   282,    97,   407,   132,   360,   723,   470,   596,
     110,   280,   620,   411,   611,   298,   738,   391,   626,   116,
     129,   565,   831,   105,   941,   447,   835,   385,   374,   375,
     376,   436,   328,   822,   384,   288,   845,   441,   354,   124,
     471,   957,   408,   595,   518,   838,   869,   461,   690,  1048,
     621,   469,   329,   283,   722,   712,   413,   414,   887,   443,
     677,  1026,   884,   677,   413,   414,    16,    16,   884,    16,
      16,   326,   677,   388,   677,    16,   437,  -366,   420,  1039,
     444,   445,     3,   677,  1000,   416,   750,   462,   437,    -2,
     369,   677,   774,   702,   158,   159,   719,  1055,   423,   405,
      16,   724,   708,  -353,   395,  -366,   725,   149,   403,  -353,
     751,   367,   449,   265,   677,   330,  1033,    16,   839,   389,
     392,    16,   328,   420,  -116,   116,  1133,   521,  -346,   415,
     552,   420,   413,   414,  -346,   847,  -366,   415,   150,   390,
     393,   381,   329,   150,   723,   124,  -352,   761,   421,   422,
     406,   937,  -352,   737,   649,   355,  1150,   754,   755,   756,
    1064,   530,   438,   848,  -366,   327,   409,   719,   611,   411,
     797,   798,   799,  1095,   438,  1099,   849,   563,   775,   850,
     370,   371,   861,   861,   862,   261,   471,   869,   846,   331,
     635,   722,   678,   421,   422,   678,   -59,   648,   851,   -59,
     957,   421,   422,   977,   841,   415,   841,   -59,   260,   100,
     -59,   446,   976,   884,  1151,   450,   -59,   452,   862,   -59,
     844,   762,   763,   678,   -59,   245,   945,   -59,  1135,  1145,
     707,   434,   709,  1163,   388,   843,   712,   460,  -351,   281,
     764,   552,  1032,   769,  -351,   765,   841,   -59,   411,   869,
     -59,  -368,   884,   332,   396,   456,   399,   401,  -368,  1036,
     411,  -367,   946,   947,   455,  -168,   328,   421,   422,  1124,
     852,   552,  1044,   957,   873,   388,   875,   408,  1052,   800,
     389,  1056,   333,  -171,   766,  -371,   329,  -310,   884,  -168,
    -372,   884,   334,   290,   291,   292,   293,   294,   295,   296,
     390,   335,  -344,   261,   328,   328,   283,  -370,  -344,   336,
    -368,   958,   545,  -369,  -310,   100,   527,  -368,    38,   544,
    -367,   389,   328,   728,   329,   329,   260,  -367,  -364,  -365,
     337,    38,   338,  1072,  -364,  -365,   404,   339,   540,   340,
     542,   390,   329,   403,  -371,  -320,   869,    38,   516,  -372,
    1090,   328,   341,   328,   814,   835,  1138,   815,   388,  1139,
    1104,   472,  1101,   869,   571,   526,  -370,   562,   517,  -322,
     884,   329,  -369,   329,   838,  -322,  -371,   461,  -345,   116,
     147,   148,  -323,  -354,  -345,   342,  -367,   514,  -323,  -354,
     623,   624,   290,   291,   292,   293,   294,   295,   296,   124,
     343,   409,   344,  -372,   389,   345,   681,   411,   552,   346,
     619,   328,   619,  -370,   399,   401,  1152,  -355,  1153,   869,
     347,   388,   835,  -355,   390,  1123,   297,  -349,  -356,  1154,
    1158,   329,  1155,  -349,  -356,  -371,   408,    33,  -369,   395,
     970,   838,   803,   804,   805,   348,   516,  1093,   328,  1158,
     557,  1172,   835,   562,  -350,   628,   399,   401,   632,  -357,
    -350,  1172,  -372,   388,  -348,  -357,   517,   389,   329,   349,
    -348,   838,  -370,    38,  -358,   629,   350,  -359,   517,   377,
    -358,   515,   711,  -359,   402,   514,   433,   390,   823,  -347,
    1166,  1167,   281,  -360,  -361,  -347,   449,  -369,   463,  -360,
    -361,   467,   403,  -150,   508,  1027,   388,   508,  -362,   682,
     632,   509,   395,   562,  -362,  -363,   536,   537,   538,   246,
     328,  -363,   328,   328,   951,   952,   953,   516,   703,   683,
     517,  -116,  -116,   415,  1122,   521,   516,  1162,   328,   528,
     329,   395,   329,   329,    21,    22,    16,   517,   535,   684,
     559,  1170,   389,  1162,   633,   634,   517,   628,   329,   650,
     409,   694,   654,   655,   657,  1176,   514,   460,  1122,   281,
     658,   404,   390,   659,  1054,   514,   813,   629,   660,   515,
     661,   662,   663,   619,   619,   584,   664,   665,   261,   261,
     668,   666,   667,   670,   261,   261,   261,   669,   671,   611,
     685,   743,   698,   508,   753,   508,   745,   733,   583,   948,
    -252,   260,   260,  -310,   727,   261,   734,   260,   260,   260,
     736,   744,   357,   757,   741,   760,   881,   768,   771,   772,
     773,   776,   777,   388,   779,  1108,   784,   780,   260,   781,
     725,   811,   816,   388,   399,   401,   821,   290,   291,   292,
     293,   294,   295,   296,   818,   825,   824,   840,   888,   842,
     515,   858,   892,   876,   893,   328,   765,   896,   916,   515,
     898,   328,   919,  1140,   905,   922,   899,   923,   930,   682,
     611,   935,   940,   261,     5,   329,   938,   978,   981,   389,
     983,   329,    33,   508,   984,   508,   985,   986,  1037,   683,
    1081,   987,   988,  1159,   989,  1161,   260,   885,   990,   390,
     991,   992,  1030,  -316,  1157,   993,  1049,  1057,  1058,  1046,
    1060,  1171,  1062,  1063,   508,   619,  1080,  1089,  1094,   611,
     281,  1100,   552,  1098,   328,   328,   328,  1103,  1107,  1109,
    1110,  1111,  1131,  1175,   137,  1147,    90,   611,   999,   261,
    1003,  1025,  1086,   921,   329,   329,   329,  1005,   925,  1006,
     399,   928,  1114,  1007,   758,  1121,   759,   894,  1008,   112,
     932,   967,   260,  1011,   289,  1068,   508,   508,   931,   704,
     353,  1091,  1015,  1125,   672,   356,   290,   291,   292,   293,
     294,   295,   296,   673,   956,  1174,   950,   552,   552,   817,
     569,   749,   570,   382,   872,  1021,   964,  1035,   400,     0,
     537,   538,     0,   412,     0,     0,   328,     0,     0,     0,
       0,   973,   430,   431,     0,     0,     0,     0,     0,     0,
       0,   829,   552,     0,     0,     0,   329,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     368,     0,     0,     0,     0,     0,     0,     0,   380,   584,
       0,   395,     0,     0,   508,     0,     0,     0,     0,     0,
       0,   399,   401,     0,     0,     0,     0,   628,     0,   584,
       0,     0,   583,     0,     0,     0,     0,     0,     0,     0,
       0,   407,     0,     0,     0,     0,     0,   629,     0,     0,
     411,     0,   583,  1047,     0,   360,     0,   584,   584,   584,
       0,   121,     0,   128,  1010,   328,  1001,     0,  1019,   328,
       0,   328,  1082,  1009,     0,     0,  1079,     0,  1156,   408,
     583,   583,   583,   129,     0,   329,   105,  1164,     0,   329,
       0,   329,     0,   324,  1038,     0,   123,     0,     0,     0,
       0,   411,  1018,     0,     0,     0,     0,     0,     0,   411,
       0,   451,   360,   453,   382,     0,   400,   388,  1084,     0,
    1085,   587,  1087,  1082,     0,     0,   261,     0,   325,     0,
     408,  1082,  1116,     0,     0,     0,   405,     0,   408,   128,
    1067,   328,     0,     0,  1070,   403,     0,     0,     0,   260,
     411,  1097,     0,     0,   468,   128,  1076,   410,  1073,   129,
    1078,   329,     0,   389,   128,  1075,     0,     0,   328,  1118,
     584,     0,  1082,     0,     0,   129,   584,   584,   584,   408,
     326,  1128,   388,   390,   129,     0,     0,   406,   329,     0,
       0,     0,   525,   583,  1018,     0,     0,     0,     0,   583,
     583,   583,     0,  1083,   403,     0,     0,     0,   532,     0,
       0,     0,  1148,   395,     0,   128,     0,  1115,   398,     0,
       0,   128,  1076,   128,  1073,     0,  1119,     0,   389,   628,
       0,  1075,   584,     0,   541,   129,   543,     0,     0,     0,
     546,   129,     0,   129,     0,   403,     0,   395,   390,   629,
     566,   567,   568,     0,   368,   583,     0,   516,     0,     0,
    1018,     0,  1083,   628,   128,     0,     0,   586,     0,     0,
       0,     0,   100,     0,   327,     0,   508,   517,   616,     0,
       0,     0,     0,   629,   129,   387,     0,   516,   397,   516,
       0,     0,     0,     0,     0,     0,   514,     0,     0,     0,
       0,     0,     0,  1083,     0,   516,   647,   517,     0,   517,
       0,     0,   394,   410,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   517,   514,   448,   514,   584,
     261,     0,     0,     0,     0,     0,   674,     0,   584,     0,
       0,     0,     0,   680,   514,     0,   584,     0,  1065,     0,
     508,     0,   583,   260,   468,     0,     0,     0,     0,     0,
     380,   583,   325,     0,   100,   465,   466,     0,   588,   583,
       0,     0,     0,   404,     0,     0,   507,     0,     0,   507,
       0,   716,     0,     0,     0,     0,   721,   647,     0,     0,
     515,     0,   410,     0,     0,   587,     0,     0,     0,     0,
     325,   325,   584,     0,   410,   584,     0,     0,     0,     0,
       0,   261,   523,     0,   524,   587,     0,     0,   398,     0,
     515,  1113,   515,     0,  1117,   583,     0,     0,   583,     0,
     281,   508,   404,     0,   260,   584,     0,     0,   515,     0,
       0,     0,     0,   587,   587,   587,   454,   325,     0,   325,
       0,   508,     0,     0,     0,     0,     0,   767,   583,   261,
     261,     0,     0,     0,     0,     0,     0,   261,     0,  1143,
       0,     0,     0,   281,     0,   507,     0,   507,   261,     0,
       0,     0,   260,   260,     0,     0,     0,   454,   397,     0,
     260,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,     0,     0,     0,     0,     0,     0,     0,   622,
       0,   812,     0,     0,     0,     0,     0,   480,     0,     0,
       0,   484,   485,   819,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,     0,
     394,   586,     0,     0,   325,     0,   785,     0,     0,     0,
       0,   410,     0,     0,   631,     0,   587,     0,     0,     0,
       0,   586,   587,   587,   587,   507,     0,   507,     0,     0,
     387,     0,     0,     0,     0,     0,     0,   556,     0,     0,
       0,   692,     0,     0,   697,     0,     0,     0,     0,   586,
     586,   586,     0,    17,    18,    19,   507,     0,     0,   710,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     279,     0,     0,     0,     0,     0,   325,     0,   587,   325,
       0,   627,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   918,     0,   454,   325,     0,     0,     0,   394,     0,
       0,     0,   588,   927,     0,     0,     0,     0,   507,   507,
       0,     0,     0,     0,   934,     0,     0,     0,     0,   897,
       0,     0,   588,     0,     0,     0,     0,   900,   651,   652,
     653,   902,   903,   656,     0,   906,   907,   908,   909,   910,
     911,   912,   913,   914,   915,     0,     0,     0,   693,     0,
     588,   588,   588,     0,     0,     0,     0,   742,     0,     0,
       0,   394,   586,     0,     0,     0,   688,     0,   586,   586,
     586,     0,     0,     0,   972,   587,     0,   936,   693,   394,
       0,     0,     0,   627,   587,     0,   796,     0,   394,     0,
       0,     0,   587,     0,     0,     0,   507,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,  1023,     0,   306,   307,   308,    16,     0,     0,
       0,   325,     0,     0,   586,     0,     0,   325,  1034,     0,
     410,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,   587,     0,
     979,   587,     0,   982,     0,   878,   879,   880,     0,     0,
       0,     0,     0,   588,     0,     0,     0,  1020,     0,   588,
     588,   588,     0,     0,     0,     0,     0,     0,    38,     0,
       0,   587,     0,     0,     0,     0,     0,     0,     0,     0,
     325,   325,   325,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,     0,     0,
       0,     0,     0,     0,     0,   693,     0,     0,     0,     0,
       0,   586,     0,     0,     0,   588,     0,     0,     0,   520,
     586,   394,     0,   521,     0,     0,     0,   697,   586,     0,
      88,   820,     0,     0,     0,     0,     0,     0,   299,   300,
     301,   302,   303,   304,   305,  1112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   307,   308,    16,     0,
       0,  1120,   325,   803,   804,   805,     0,     0,     0,     0,
       0,   806,     0,     0,  1126,     0,     0,     0,  1129,     0,
    1130,     0,     0,    33,   586,     0,     0,   586,     0,     0,
       0,     0,     0,  1142,     0,     0,     0,  1144,     0,     0,
       0,  1146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1149,   588,     0,     0,     0,     0,   586,     0,    38,
       0,   588,     0,  1160,  1016,     0,  1022,     0,     0,   588,
    1024,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   507,     0,
       0,     0,   688,     0,     0,     0,     0,     0,     0,   123,
       0,   325,     0,     0,     0,   325,     0,   325,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,   588,     0,     0,   588,     0,
       0,     0,     0,   627,   410,     0,     0,     0,     0,     0,
       0,     0,   324,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   410,     0,     0,     0,   636,   588,     0,
       0,     0,   507,     0,     0,     0,     0,     0,     0,  1017,
       0,     0,     0,     0,     0,     0,     0,   325,     0,     0,
       0,     0,     0,     0,     0,   410,     0,     0,     0,     0,
       0,     0,     0,   410,     0,     0,     0,     0,   637,   638,
       0,     0,     0,     0,   325,   203,   204,   205,   639,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,     0,
     410,     0,     0,     0,   410,     0,     0,     0,     0,     0,
       0,     0,     0,   507,     0,  1069,     0,     0,     0,     0,
       0,     0,     0,     0,   473,   474,   475,   476,   477,   478,
     479,  1069,     0,   507,     0,     0,     0,     0,     0,   454,
    1069,   306,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   640,     0,   641,   642,     0,   643,   644,
       0,   248,   249,   250,   645,   252,   253,   254,   255,   256,
     257,   258,     0,     0,     0,   299,   300,   301,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1069,   306,   307,   308,    16,     0,  1069,     0,  1069,
       0,     0,     0,     0,   454,   556,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,     0,     0,     0,     0,     0,   693,
    1069,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,   394,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,     0,     0,     0,     0,   394,
       0,   394,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,   241,     0,   242,   243,   244,   245,     0,   598,   247,
     599,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   597,   241,   603,   242,   243,
     244,   245,     0,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,   241,     0,   242,   243,   244,   245,     0,   598,   247,
     609,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   597,   241,     0,   242,   243,
     244,   245,   612,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,   241,   630,   242,   243,   244,   245,     0,   598,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   597,   241,   699,   242,   243,
     244,   245,     0,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,   241,   933,   242,   243,   244,   245,     0,   598,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   597,   241,  1168,   242,   243,
     244,   245,     0,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     597,   241,  1173,   242,   243,   244,   245,     0,   598,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   610,   241,     0,   242,   243,
     244,   245,     0,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     735,   241,     0,   242,   243,   244,   245,     0,   598,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1088,   241,     0,   242,   243,
     244,   245,     0,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   241,     0,   242,   243,   244,   245,  1137,   598,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1169,   241,     0,   242,   243,
     244,   245,     0,   598,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1177,   241,     0,   242,   243,   244,   245,     0,   598,   247,
       0,   248,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,     0,   242,   243,
     244,   245,     0,   246,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   444,   445,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   572,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   573,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,   574,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     962,   575,   963,   576,   577,   578,   446,     0,   579,   580,
       0,   248,   249,   250,   581,   252,   253,   254,   255,   256,
     257,   258,   582,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   241,     0,   242,   243,
     244,   245,     0,     0,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   151,   152,
     153,   154,   155,   156,   157,   444,   445,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   572,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   573,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,   574,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,   576,   577,   578,   446,   889,   579,   580,
       0,   248,   249,   250,   581,   252,   253,   254,   255,   256,
     257,   258,   582,   151,   152,   153,   154,   155,   156,   157,
     444,   445,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   572,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   573,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,   574,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   575,     0,   576,   577,
     578,   446,   890,   579,   580,     0,   248,   249,   250,   581,
     252,   253,   254,   255,   256,   257,   258,   582,   151,   152,
     153,   154,   155,   156,   157,   444,   445,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   572,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   573,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,   574,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,   576,   577,   578,   446,   891,   579,   580,
       0,   248,   249,   250,   581,   252,   253,   254,   255,   256,
     257,   258,   582,   151,   152,   153,   154,   155,   156,   157,
     444,   445,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   572,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   573,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,   574,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   575,     0,   576,   577,
     578,   446,     0,   579,   580,   961,   248,   249,   250,   581,
     252,   253,   254,   255,   256,   257,   258,   582,   151,   152,
     153,   154,   155,   156,   157,   444,   445,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   572,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   573,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,   574,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,   576,   577,   578,   446,     0,   579,   580,
     966,   248,   249,   250,   581,   252,   253,   254,   255,   256,
     257,   258,   582,   151,   152,   153,   154,   155,   156,   157,
     444,   445,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   572,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   573,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,   574,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   575,     0,   576,   577,
     578,   446,     0,   579,   580,     0,   248,   249,   250,   581,
     252,   253,   254,   255,   256,   257,   258,   582,   151,   152,
     153,   154,   155,   156,   157,   444,   445,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   572,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   437,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,   574,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,   832,   577,   833,   446,     0,   834,   580,
       0,   248,   249,   250,   438,   252,   253,   254,   255,   256,
     257,   258,   582,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,     0,     0,  -616,  -616,  -616,  -616,  -616,  -616,
       0,  -616,  -616,  -616,  -616,     0,     0,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,     0,  -616,     0,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -616,     0,  -650,  -616,
    -616,  -616,     0,  -616,  -616,     0,  -616,  -616,  -616,  -616,
    -616,  -616,  -616,  -616,  -616,  -616,  -616,  -616,   151,   152,
     153,   154,   155,   156,   157,   444,   445,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   572,   172,
     173,   174,   175,   176,   177,   178,   179,     0,     0,   180,
     181,   182,   183,   184,   185,     0,   186,   187,   188,   189,
       0,     0,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   864,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,   574,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   575,     0,     0,   577,     0,   446,     0,   865,   580,
       0,   248,   249,   250,   866,   252,   253,   254,   255,   256,
     257,   258,   582,   151,   152,   153,   154,   155,   156,   157,
     444,   445,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   572,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,     0,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,   574,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   575,     0,     0,   577,
       0,   446,     0,   834,   580,     0,   248,   249,   250,     0,
     252,   253,   254,   255,   256,   257,   258,   582,   272,   273,
     274,   275,   276,   277,   278,     0,     0,   636,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,     0,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,   637,   638,
       0,     0,     0,     0,     0,   203,   204,   205,   639,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   229,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   640,     0,   641,   642,     0,   643,   644,
       0,   248,   249,   250,   645,   252,   253,   254,   255,   256,
     257,   258,     6,     7,     8,     9,    10,    11,    12,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    13,
      14,    15,    16,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   994,
     995,    31,    32,     0,     0,     0,     0,    33,    34,    35,
       0,   996,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,   997,   998,     6,     7,     8,     9,    10,
      11,    12,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    13,    14,    15,    16,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,    30,    31,    32,     0,     0,     0,     0,
      33,    34,    35,    36,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,     0,    87,     6,     7,
       8,     9,    10,    11,    12,     0,     0,     0,    88,     0,
       0,     0,     0,     0,     0,    13,    14,    15,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,    31,   357,     0,
       0,     0,     0,    33,    34,     0,     0,   358,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,     0,    17,    18,    19,    20,     0,
       0,    88,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   279,    31,   357,     0,     0,     0,     0,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
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
       0,     0,     0,     0,     0,    33,    34,    35,     0,     0,
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
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   307,   308,     0,     0,     0,
       0,     0,   803,   804,   805,     0,     0,     0,     0,    88,
     806,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,   307,   308,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,   309,
       0,   310,     0,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,     0,   299,   300,
     301,   302,   303,   304,   305,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,   306,   307,   308,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    33,   299,   300,   301,   302,   303,   304,
     305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,   307,   308,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,    38,
       0,     0,     0,    31,   383,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,     0,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   307,   308,    16,
       0,     0,     0,     0,   521,     0,     0,     0,     0,     0,
       0,    88,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    33,   299,   300,   301,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   306,   307,   308,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
      38,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,   309,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,     0,
     299,   300,   301,   302,   303,   304,   305,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,   306,   307,   308,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,    33,   299,   300,   301,   302,
     303,   304,   305,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   307,   308,     0,     0,     0,     0,
       0,   299,   300,   301,   302,   303,   304,   305,    88,     0,
       0,    38,     0,     0,     0,     0,   383,     0,   306,   307,
     308,    33,     0,     0,     0,     0,     0,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
      31,     0,     0,     0,     0,     0,    33,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   306,   307,   308,     0,     0,     0,
       0,     0,     0,    88,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,     0,     0,     0,     0,
       0,     0,    33,     0,     0,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,     0,   299,   300,   301,   302,   303,   304,   305,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   306,
     307,   308,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    88,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,    33,   299,   300,
     301,   302,   303,   304,   305,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   307,   308,    16,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      88,     0,     0,    38,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,     0,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
     306,   307,   308,    16,   510,  1138,     0,     0,  1139,     0,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    33,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   307,   308,    16,
     510,     0,     0,     0,   511,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    21,    22,    23,    24,    25,    26,    27,
      28,    29,   501,   279,     0,     0,     0,     0,     0,     0,
      38,     0,   502,     0,     0,     0,  1138,     0,     0,  1139,
       0,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   420,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,     0,     0,   511,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   501,   279,     0,     0,     0,
       0,     0,     0,     0,     0,   502,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  -269,     0,     0,
       0,   299,   300,   301,   302,   303,   304,   305,     0,   421,
     422,     0,   420,     0,     0,     0,     0,     0,   306,   307,
     308,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,     0,   272,
     273,   274,   275,   276,   277,   278,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   279,    31,   357,
       0,     0,   421,   422,    33,    34,     0,     0,   358,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   279,    31,     0,
       0,     0,     0,     0,    33,    34,    35,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   279,    31,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   279,     0,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
     739,     0,   740,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   279,     0,     0,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   272,
     273,   274,   275,   276,   277,   278,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
       0,     0,     0,     0,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   279,     0,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   306,   307,   308,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   501,   279,
       0,     0,     0,     0,     0,     0,     0,     0,   502,   383,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322
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
       0,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     5,     0,     0,     0,     0,     0,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,   249,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   251,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     7,     9,    11,    13,    15,    17,    19,
      21,    23,    25,    27,    29,    31,    33,    35,    37,    39,
      41,    43,    45,    47,    49,    51,    53,    55,    57,    59,
      61,    63,     0,     0,    65,    67,    69,    71,    73,    75,
       0,    77,    79,    81,    83,     0,     0,    85,    87,    89,
      91,    93,    95,    97,    99,   101,   103,   105,   107,   109,
     111,   113,   115,   117,   119,   121,   123,   125,   127,   129,
     131,   133,   135,   137,   139,   141,   143,   145,   147,   149,
     151,   153,   155,     0,   157,     0,   159,   161,   163,   165,
     167,   169,   171,   173,   175,   177,   179,   181,   183,   185,
     187,   189,   191,   193,   195,   197,   199,   201,   203,   205,
     207,   209,   211,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   213,     0,     0,   215,
     217,   219,     0,   221,   223,     0,   225,   227,   229,   231,
     233,   235,   237,   239,   241,   243,   245,   247,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   403,     0,   403,     0,   403,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   650,
       0,   650,     0,   650,     0,   650,     0,   650,     0,   403,
       0,   403,     0
};

static const short int yycheck[] =
{
       5,     5,    35,     5,   132,     5,   111,   557,   326,   434,
       5,    35,   451,   132,   442,    36,   604,   125,   460,     5,
       5,   419,   705,     5,   845,   270,   706,   124,   114,   115,
     116,   241,    37,   697,   124,    35,   715,   247,   103,     5,
     326,   867,   132,   433,   354,   706,   726,   289,   523,   969,
     452,   326,    37,    35,   557,   548,    10,    11,   752,   269,
       3,   929,   746,     3,    10,    11,    23,    23,   752,    23,
      23,    37,     3,   124,     3,    23,    63,    84,    77,   944,
      10,    11,     0,     3,   918,   137,    25,   297,    63,     0,
      45,     3,    63,   532,    10,    11,   555,   974,   138,   132,
      23,   135,   541,   135,   125,    84,   140,    12,   132,   141,
      49,   111,    12,    32,     3,   141,   937,    23,   706,   124,
     125,    23,   127,    77,   136,   111,  1102,   139,   135,    83,
     416,    77,    10,    11,   141,     3,   143,    83,    43,   124,
     125,   135,   127,    43,   694,   111,   135,   622,   147,   148,
     132,   830,   141,   140,   472,   136,  1132,   613,   614,   615,
     994,   371,   149,    31,   143,    37,   132,   626,   596,   288,
      28,    29,    30,  1038,   149,  1043,    44,   419,   149,    47,
     135,   136,   139,   139,   141,    32,   472,   867,   141,   141,
     138,   694,   135,   147,   148,   135,   136,   472,    66,   139,
    1026,   147,   148,   897,   135,    83,   135,   136,    32,     5,
     139,   141,   895,   897,  1134,   280,   136,   282,   141,   139,
     713,   623,   624,   135,   136,   141,    18,   139,  1105,   135,
     540,   150,   542,   135,   285,   710,   729,   289,   135,    35,
     135,   527,   936,   633,   141,   140,   135,   136,   367,   929,
     139,    84,   936,   141,   126,   288,   128,   129,    84,   942,
     379,    84,    54,    55,   288,    25,   271,   147,   148,  1090,
     138,   557,   955,  1099,   730,   326,   732,   367,   972,   137,
     285,   975,   141,    43,   141,    84,   271,   144,   972,    49,
      84,   975,   141,     3,     4,     5,     6,     7,     8,     9,
     285,   141,   135,   150,   309,   310,   288,    84,   141,   141,
     143,   141,   409,    84,   144,   111,   368,   143,    84,   409,
     143,   326,   327,   565,   309,   310,   150,    84,   135,   135,
     141,    84,   141,   997,   141,   141,   132,   141,   403,   141,
     405,   326,   327,   367,   143,   135,  1026,    84,   353,   143,
    1029,   356,   141,   358,   137,  1035,   136,   140,   409,   139,
    1054,   327,  1045,  1043,   429,   365,   143,   419,   353,   135,
    1054,   356,   143,   358,  1035,   141,    84,   619,   135,   365,
      24,    25,   135,   135,   141,   141,   143,   353,   141,   141,
     455,   456,     3,     4,     5,     6,     7,     8,     9,   365,
     141,   367,   141,    84,   409,   141,   514,   526,   694,   141,
     450,   416,   452,    84,   286,   287,    31,   135,    33,  1099,
     141,   472,  1102,   141,   409,  1089,   136,   135,   135,    44,
    1140,   416,    47,   141,   141,   143,   526,    48,    84,   460,
     882,  1102,    28,    29,    30,   141,   451,  1035,   453,  1159,
     416,  1161,  1132,   505,   135,   460,   328,   329,   463,   135,
     141,  1171,   143,   514,   135,   141,   451,   472,   453,   141,
     141,  1132,   143,    84,   135,   460,   141,   135,   463,   141,
     141,   353,   547,   141,   143,   451,   136,   472,   698,   135,
    1154,  1155,   288,   135,   135,   141,    12,   143,   138,   141,
     141,   135,   526,   135,   351,   930,   557,   354,   135,   514,
     515,   136,   533,   565,   141,   135,   388,   389,   390,   143,
     525,   141,   527,   528,    13,    14,    15,   532,   533,   514,
     515,   135,   136,    83,  1084,   139,   541,  1144,   543,   139,
     525,   562,   527,   528,    31,    32,    23,   532,   141,   515,
     138,  1158,   557,  1160,   136,   135,   541,   562,   543,   140,
     526,   527,   140,   140,   140,  1172,   532,   619,  1118,   365,
     140,   367,   557,   140,   972,   541,   684,   562,   140,   451,
     140,   140,   140,   623,   624,   432,   140,   140,   435,   436,
     142,   140,   140,   140,   441,   442,   443,   142,   135,  1027,
     135,   606,   136,   450,   608,   452,   606,   145,   432,   854,
     142,   435,   436,   144,   142,   462,   137,   441,   442,   443,
     145,   606,    43,   135,   606,   135,   745,   135,     3,   144,
     144,   142,   145,   684,   140,  1060,   140,   142,   462,   142,
     140,   139,   138,   694,   516,   517,   140,     3,     4,     5,
       6,     7,     8,     9,   135,    83,   142,   135,    25,   135,
     532,   144,   135,   145,   135,   670,   140,   137,   140,   541,
     145,   676,   139,  1112,   142,   140,   145,    36,   138,   684,
    1108,   140,   135,   530,     4,   670,   142,   142,   142,   694,
     142,   676,    48,   540,   142,   542,   142,   142,   943,   684,
    1018,   142,   142,  1142,   142,  1144,   530,   747,   142,   694,
     140,   140,    83,   145,  1139,   142,   138,   142,   135,   145,
     140,  1160,    13,    13,   571,   765,   135,    46,   142,  1157,
     526,   142,  1018,   145,   739,   740,   741,   142,   142,   142,
     142,   142,   142,  1168,     5,   136,     5,  1175,   918,   596,
     918,   926,  1023,   806,   739,   740,   741,   918,   810,   918,
     632,   815,  1067,   918,   618,  1083,   619,   765,   918,     5,
     822,   877,   596,   918,    35,   994,   623,   624,   821,   534,
     100,  1031,   918,  1092,   504,   105,     3,     4,     5,     6,
       7,     8,     9,   505,   863,  1165,   859,  1083,  1084,   689,
     428,   606,   428,   123,   729,   918,   874,   939,   128,    -1,
     682,   683,    -1,   133,    -1,    -1,   821,    -1,    -1,    -1,
      -1,   886,   142,   143,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   703,  1118,    -1,    -1,    -1,   821,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     111,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,   706,
      -1,   882,    -1,    -1,   711,    -1,    -1,    -1,    -1,    -1,
      -1,   743,   744,    -1,    -1,    -1,    -1,   882,    -1,   726,
      -1,    -1,   706,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1019,    -1,    -1,    -1,    -1,    -1,   882,    -1,    -1,
    1019,    -1,   726,   968,    -1,  1010,    -1,   754,   755,   756,
      -1,     5,    -1,   918,   918,   920,   918,    -1,   918,   924,
      -1,   926,  1019,   918,    -1,    -1,  1012,    -1,  1138,  1019,
     754,   755,   756,   918,    -1,   920,   918,  1147,    -1,   924,
      -1,   926,    -1,    37,   944,    -1,     5,    -1,    -1,    -1,
      -1,  1070,   918,    -1,    -1,    -1,    -1,    -1,    -1,  1078,
      -1,   281,  1067,   283,   284,    -1,   286,  1018,  1020,    -1,
    1022,   432,  1024,  1070,    -1,    -1,   823,    -1,    37,    -1,
    1070,  1078,  1068,    -1,    -1,    -1,  1019,    -1,  1078,   994,
     994,   996,    -1,    -1,   994,  1019,    -1,    -1,    -1,   823,
    1119,  1041,    -1,    -1,   324,  1010,  1010,   132,  1010,   994,
    1010,   996,    -1,  1018,  1019,  1010,    -1,    -1,  1023,  1071,
     867,    -1,  1119,    -1,    -1,  1010,   873,   874,   875,  1119,
     996,  1096,  1083,  1018,  1019,    -1,    -1,  1019,  1023,    -1,
      -1,    -1,   362,   867,  1010,    -1,    -1,    -1,    -1,   873,
     874,   875,    -1,  1019,  1078,    -1,    -1,    -1,   378,    -1,
      -1,    -1,  1127,  1084,    -1,  1070,    -1,  1067,   127,    -1,
      -1,  1076,  1076,  1078,  1076,    -1,  1076,    -1,  1083,  1084,
      -1,  1076,   929,    -1,   404,  1070,   406,    -1,    -1,    -1,
     410,  1076,    -1,  1078,    -1,  1119,    -1,  1118,  1083,  1084,
     420,   421,   422,    -1,   365,   929,    -1,  1112,    -1,    -1,
    1076,    -1,  1078,  1118,  1119,    -1,    -1,   432,    -1,    -1,
      -1,    -1,   918,    -1,   996,    -1,   973,  1112,   448,    -1,
      -1,    -1,    -1,  1118,  1119,   124,    -1,  1142,   127,  1144,
      -1,    -1,    -1,    -1,    -1,    -1,  1112,    -1,    -1,    -1,
      -1,    -1,    -1,  1119,    -1,  1160,   471,  1142,    -1,  1144,
      -1,    -1,   125,   288,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1160,  1142,   271,  1144,  1026,
    1027,    -1,    -1,    -1,    -1,    -1,   506,    -1,  1035,    -1,
      -1,    -1,    -1,   513,  1160,    -1,  1043,    -1,   994,    -1,
    1047,    -1,  1026,  1027,   524,    -1,    -1,    -1,    -1,    -1,
     471,  1035,   271,    -1,  1010,   309,   310,    -1,   432,  1043,
      -1,    -1,    -1,  1019,    -1,    -1,   351,    -1,    -1,   354,
      -1,   551,    -1,    -1,    -1,    -1,   556,   552,    -1,    -1,
    1112,    -1,   367,    -1,    -1,   706,    -1,    -1,    -1,    -1,
     309,   310,  1099,    -1,   379,  1102,    -1,    -1,    -1,    -1,
      -1,  1108,   356,    -1,   358,   726,    -1,    -1,   327,    -1,
    1142,  1067,  1144,    -1,  1070,  1099,    -1,    -1,  1102,    -1,
    1076,  1128,  1078,    -1,  1108,  1132,    -1,    -1,  1160,    -1,
      -1,    -1,    -1,   754,   755,   756,   285,   356,    -1,   358,
      -1,  1148,    -1,    -1,    -1,    -1,    -1,   627,  1132,  1156,
    1157,    -1,    -1,    -1,    -1,    -1,    -1,  1164,    -1,  1115,
      -1,    -1,    -1,  1119,    -1,   450,    -1,   452,  1175,    -1,
      -1,    -1,  1156,  1157,    -1,    -1,    -1,   326,   327,    -1,
    1164,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   453,
      -1,   681,    -1,    -1,    -1,    -1,    -1,   330,    -1,    -1,
      -1,   334,   335,   693,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,    -1,    -1,
     353,   706,    -1,    -1,   453,    -1,   657,    -1,    -1,    -1,
      -1,   526,    -1,    -1,   463,    -1,   867,    -1,    -1,    -1,
      -1,   726,   873,   874,   875,   540,    -1,   542,    -1,    -1,
     409,    -1,    -1,    -1,    -1,    -1,    -1,   416,    -1,    -1,
      -1,   525,    -1,    -1,   528,    -1,    -1,    -1,    -1,   754,
     755,   756,    -1,    24,    25,    26,   571,    -1,    -1,   543,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,   525,    -1,   929,   528,
      -1,   460,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   801,    -1,   472,   543,    -1,    -1,    -1,   451,    -1,
      -1,    -1,   706,   813,    -1,    -1,    -1,    -1,   623,   624,
      -1,    -1,    -1,    -1,   824,    -1,    -1,    -1,    -1,   770,
      -1,    -1,   726,    -1,    -1,    -1,    -1,   778,   481,   482,
     483,   782,   783,   486,    -1,   786,   787,   788,   789,   790,
     791,   792,   793,   794,   795,    -1,    -1,    -1,   527,    -1,
     754,   755,   756,    -1,    -1,    -1,    -1,   606,    -1,    -1,
      -1,   514,   867,    -1,    -1,    -1,   519,    -1,   873,   874,
     875,    -1,    -1,    -1,   884,  1026,    -1,   828,   557,   532,
      -1,    -1,    -1,   562,  1035,    -1,   670,    -1,   541,    -1,
      -1,    -1,  1043,    -1,    -1,    -1,   711,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   922,    -1,    20,    21,    22,    23,    -1,    -1,
      -1,   670,    -1,    -1,   929,    -1,    -1,   676,   938,    -1,
     745,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,  1099,    -1,
     901,  1102,    -1,   904,    -1,   739,   740,   741,    -1,    -1,
      -1,    -1,    -1,   867,    -1,    -1,    -1,   918,    -1,   873,
     874,   875,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,  1132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     739,   740,   741,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   694,    -1,    -1,    -1,    -1,
      -1,  1026,    -1,    -1,    -1,   929,    -1,    -1,    -1,   135,
    1035,   684,    -1,   139,    -1,    -1,    -1,   821,  1043,    -1,
     146,   694,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,  1065,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,  1081,   821,    28,    29,    30,    -1,    -1,    -1,    -1,
      -1,    36,    -1,    -1,  1094,    -1,    -1,    -1,  1098,    -1,
    1100,    -1,    -1,    48,  1099,    -1,    -1,  1102,    -1,    -1,
      -1,    -1,    -1,  1113,    -1,    -1,    -1,  1117,    -1,    -1,
      -1,  1121,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1131,  1026,    -1,    -1,    -1,    -1,  1132,    -1,    84,
      -1,  1035,    -1,  1143,   918,    -1,   920,    -1,    -1,  1043,
     924,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   973,    -1,
      -1,    -1,   815,    -1,    -1,    -1,    -1,    -1,    -1,   918,
      -1,   920,    -1,    -1,    -1,   924,    -1,   926,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   146,    -1,    -1,    -1,  1099,    -1,    -1,  1102,    -1,
      -1,    -1,    -1,   882,  1019,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   996,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1038,    -1,    -1,    -1,    12,  1132,    -1,
      -1,    -1,  1047,    -1,    -1,    -1,    -1,    -1,    -1,   918,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   996,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1070,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1078,    -1,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,  1023,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    -1,
    1115,    -1,    -1,    -1,  1119,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1128,    -1,   994,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,  1010,    -1,  1148,    -1,    -1,    -1,    -1,    -1,  1018,
    1019,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1070,    20,    21,    22,    23,    -1,  1076,    -1,  1078,
      -1,    -1,    -1,    -1,  1083,  1084,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    -1,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    -1,    -1,    -1,    -1,    -1,  1118,
    1119,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    -1,  1112,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,  1142,
      -1,  1144,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1160,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,   137,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   135,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,    -1,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     135,   136,   137,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
     140,   141,    -1,    -1,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
     140,   141,   142,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   138,   139,   140,   141,   142,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   138,   139,   140,   141,    -1,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,   138,   139,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,   138,   139,
     140,   141,    -1,   143,   144,    -1,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      -1,    -1,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,    -1,    -1,   139,    -1,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    35,    36,    37,    38,    39,
      -1,    41,    42,    43,    44,    -1,    -1,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    -1,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    -1,    84,    -1,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,   139,
      -1,   141,    -1,   143,   144,    -1,   146,   147,   148,    -1,
     150,   151,   152,   153,   154,   155,   156,   157,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    12,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    53,    54,
      -1,    -1,    -1,    -1,    -1,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   138,    -1,   140,   141,    -1,   143,   144,
      -1,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    -1,    -1,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      -1,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    84,    -1,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,   146,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    -1,    -1,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,    -1,   135,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,   146,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    -1,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    -1,
      -1,    -1,    -1,    48,    49,    -1,    -1,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      -1,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    24,    25,    26,    27,    -1,
      -1,   146,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    42,    43,    -1,    -1,    -1,    -1,    48,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
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
      -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    29,    30,    -1,    -1,    -1,    -1,   146,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    48,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    49,
      -1,    51,    -1,    -1,    -1,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    48,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,    84,
      -1,    -1,    -1,    42,    43,    -1,    -1,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
      -1,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,   146,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,    48,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   146,    -1,    -1,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    84,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   146,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,    48,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,   146,    -1,
      -1,    84,    -1,    -1,    -1,    -1,    43,    -1,    20,    21,
      22,    48,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
      42,    -1,    -1,    -1,    -1,    -1,    48,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,   146,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,    -1,    -1,    -1,    -1,
      -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,     3,     4,     5,     6,     7,     8,     9,   146,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   146,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,    48,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     146,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    84,
      20,    21,    22,    23,   135,   136,    -1,    -1,   139,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,    48,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,
     135,    -1,    -1,    -1,   139,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    84,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    50,    -1,    -1,    -1,   136,    -1,    -1,   139,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,    77,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,    -1,    -1,   139,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,   147,
     148,    -1,    77,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    48,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    43,
      -1,    -1,   147,   148,    48,    49,    -1,    -1,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    42,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    -1,    26,    27,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      84,    -1,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    50,    43,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   159,   160,     0,   161,   366,     3,     4,     5,     6,
       7,     8,     9,    20,    21,    22,    23,    24,    25,    26,
      27,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      41,    42,    43,    48,    49,    50,    51,    52,    84,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   135,   146,   162,
     163,   164,   165,   166,   168,   169,   170,   171,   172,   174,
     177,   192,   193,   194,   196,   197,   206,   207,   216,   218,
     219,   221,   239,   240,   241,   242,   245,   246,   249,   255,
     288,   318,   319,   320,   321,   323,   324,   325,   326,   328,
     330,   331,   334,   335,   336,   337,   338,   340,   341,   344,
     345,   356,   357,   358,   367,   370,   368,    24,    25,    12,
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
     357,   358,   395,   396,   397,   425,   426,   427,   428,   429,
     329,   346,     3,     4,     5,     6,     7,     8,     9,    41,
     172,   177,   194,   197,   320,   321,   326,   328,   334,   340,
       3,     4,     5,     6,     7,     8,     9,   136,   331,     3,
       4,     5,     6,     7,     8,     9,    20,    21,    22,    49,
      51,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   217,   318,   320,   321,   325,   326,   328,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   332,   173,   366,   332,   136,   366,    43,    52,   163,
     170,   171,   197,   203,   219,   221,   239,   334,   340,    45,
     135,   136,   265,   266,   265,   265,   265,   141,   177,   334,
     340,   135,   366,    43,   246,   270,   273,   319,   324,   326,
     328,   179,   326,   328,   330,   331,   325,   319,   320,   325,
     366,   325,   143,   172,   177,   194,   197,   207,   246,   321,
     335,   344,   366,    10,    11,    83,   233,   289,   298,   300,
      77,   147,   148,   294,   359,   360,   361,   362,   365,   342,
     366,   366,   401,   136,   425,   421,   421,    63,   149,   222,
     411,   421,   422,   421,    10,    11,   141,   415,   318,    12,
     332,   366,   332,   366,   319,   172,   194,   211,   212,   215,
     233,   298,   421,   138,   167,   318,   318,   135,   366,   249,
     254,   255,   321,     3,     4,     5,     6,     7,     8,     9,
     330,   372,   375,   376,   330,   330,   380,   330,   330,   330,
     330,   330,   330,   330,   330,   330,   330,   330,   330,   330,
     330,    40,    50,   290,   293,   294,   333,   335,   358,   136,
     135,   139,   178,   179,   321,   325,   326,   328,   290,   195,
     135,   139,   198,   318,   318,   366,   334,   233,   139,   275,
     421,   247,   366,   322,   271,   141,   325,   325,   325,   327,
     332,   366,   332,   366,   246,   270,   366,   343,   301,   250,
     252,   254,   255,   256,   268,   308,   319,   321,   291,   138,
     285,   286,   233,   298,   307,   359,   366,   366,   366,   360,
     362,   332,    23,    63,    84,   136,   138,   139,   140,   143,
     144,   149,   157,   357,   358,   369,   395,   396,   397,   400,
     402,   403,   412,   415,   419,   160,   422,   135,   143,   145,
     423,   424,   425,   137,   223,   225,   226,   228,   230,   145,
     135,   424,   142,   417,   418,   416,   366,   208,   210,   294,
     178,   208,   318,   332,   332,   209,   308,   319,   326,   328,
     137,   320,   326,   136,   135,   138,    12,    53,    54,    63,
     138,   140,   141,   143,   144,   149,   394,   395,   249,   254,
     140,   330,   330,   330,   140,   140,   330,   140,   140,   140,
     140,   140,   140,   140,   140,   140,   140,   140,   142,   142,
     140,   135,   291,   289,   366,   181,   176,     3,   135,   180,
     366,   179,   326,   328,   321,   135,   200,   201,   330,   199,
     198,   366,   318,   319,   321,   276,   277,   318,   136,   137,
     278,   279,   178,   326,   275,   274,   405,   290,   178,   290,
     318,   332,   338,   339,   364,   251,   366,   257,   310,   311,
     312,   366,   250,   256,   135,   140,   287,   142,   298,   363,
     414,   420,   413,   145,   137,   135,   145,   140,   411,    24,
      26,   197,   320,   326,   328,   334,   351,   352,   355,   356,
      25,    49,   234,   221,   401,   401,   401,   135,   209,   215,
     135,   198,   208,   208,   135,   140,   141,   366,   135,   160,
     220,     3,   144,   144,    63,   149,   142,   145,   371,   140,
     142,   142,   377,   379,   140,   340,   383,   385,   387,   389,
     384,   386,   388,   390,   391,   392,   318,    28,    29,    30,
     137,   182,   183,    28,    29,    30,    36,   187,   188,   191,
     318,   139,   366,   179,   137,   140,   138,   341,   135,   366,
     330,   140,   428,   421,   142,    83,   280,   282,   283,   325,
     272,   278,   138,   140,   143,   400,   407,   408,   409,   411,
     135,   135,   135,   198,   338,   257,   141,     3,    31,    44,
      47,    66,   138,   258,   260,   261,   262,   263,   144,   313,
     314,   139,   141,   292,    63,   143,   149,   398,   399,   400,
     409,   299,   364,   401,   406,   401,   145,   224,   318,   318,
     318,   344,   233,   295,   300,   294,   353,   295,    25,   142,
     142,   142,   135,   135,   210,   213,   137,   340,   145,   145,
     340,   373,   340,   340,   381,   142,   340,   340,   340,   340,
     340,   340,   340,   340,   340,   340,   140,   393,   366,   139,
     190,   191,   140,    36,   189,   233,   175,   366,   201,   202,
     138,   277,   233,   137,   366,   140,   340,   257,   142,   410,
     135,   262,   253,   259,   264,    18,    54,    55,   415,   315,
     314,    13,    14,    15,   309,   269,   293,   399,   141,   302,
     311,   145,   135,   137,   403,   404,   145,   225,   354,   297,
     308,   227,   366,   332,   229,   231,   278,   295,   142,   340,
     378,   142,   340,   142,   142,   142,   142,   142,   142,   142,
     142,   140,   140,   142,    40,    41,    52,   134,   135,   164,
     169,   171,   184,   185,   186,   192,   193,   206,   216,   219,
     221,   243,   244,   245,   270,   288,   318,   319,   321,   334,
     340,   370,   318,   366,   318,   187,   398,   422,   267,   248,
      83,   281,   295,   262,   366,   405,   278,   415,   334,   345,
     347,   348,   316,   317,   278,   303,   145,   332,   302,   138,
     235,   236,   295,   306,   359,   235,   295,   142,   135,   374,
     140,   382,    13,    13,   169,   177,   204,   221,   244,   319,
     334,   340,   428,   171,   185,   219,   221,   243,   334,   265,
     135,   254,   270,   321,   233,   233,   188,   233,   135,    46,
     257,   282,   284,   411,   142,   345,   349,   294,   145,   398,
     142,   278,   237,   142,   295,   232,   214,   142,   422,   142,
     142,   142,   366,   177,   204,   334,   265,   177,   233,   334,
     366,   254,   256,   428,   262,   285,   366,   350,   332,   366,
     366,   142,   238,   407,   296,   235,   305,   142,   136,   139,
     178,   205,   366,   177,   366,   135,   366,   136,   332,   366,
     407,   302,    31,    33,    44,    47,   421,   422,   180,   178,
     366,   178,   205,   135,   421,   304,   428,   428,   137,   135,
     205,   178,   180,   137,   305,   422,   205,   135
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
static inline const char*
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
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     __attribute__ ((__unused__));
static inline int
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
#line 1475 "vtkParse.y"
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
#line 1528 "vtkParse.y"
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 34:

/* Line 936 of glr.c  */
#line 1529 "vtkParse.y"
    { popNamespace(); }
    break;

  case 43:

/* Line 936 of glr.c  */
#line 1552 "vtkParse.y"
    { pushType(); }
    break;

  case 44:

/* Line 936 of glr.c  */
#line 1553 "vtkParse.y"
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
#line 1567 "vtkParse.y"
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (5))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.integer);
    }
    break;

  case 47:

/* Line 936 of glr.c  */
#line 1573 "vtkParse.y"
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer);
    }
    break;

  case 48:

/* Line 936 of glr.c  */
#line 1578 "vtkParse.y"
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer));
    }
    break;

  case 50:

/* Line 936 of glr.c  */
#line 1583 "vtkParse.y"
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer));
    }
    break;

  case 51:

/* Line 936 of glr.c  */
#line 1588 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 52:

/* Line 936 of glr.c  */
#line 1589 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 53:

/* Line 936 of glr.c  */
#line 1590 "vtkParse.y"
    { ((*yyvalp).integer) = 2; }
    break;

  case 54:

/* Line 936 of glr.c  */
#line 1594 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 55:

/* Line 936 of glr.c  */
#line 1596 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 59:

/* Line 936 of glr.c  */
#line 1604 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 60:

/* Line 936 of glr.c  */
#line 1605 "vtkParse.y"
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), "final") == 0); }
    break;

  case 62:

/* Line 936 of glr.c  */
#line 1609 "vtkParse.y"
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
#line 1621 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 66:

/* Line 936 of glr.c  */
#line 1622 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 67:

/* Line 936 of glr.c  */
#line 1623 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 91:

/* Line 936 of glr.c  */
#line 1653 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 94:

/* Line 936 of glr.c  */
#line 1661 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 95:

/* Line 936 of glr.c  */
#line 1663 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer))); }
    break;

  case 96:

/* Line 936 of glr.c  */
#line 1666 "vtkParse.y"
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (4))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer))); }
    break;

  case 97:

/* Line 936 of glr.c  */
#line 1670 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 98:

/* Line 936 of glr.c  */
#line 1671 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 99:

/* Line 936 of glr.c  */
#line 1674 "vtkParse.y"
    { ((*yyvalp).integer) = access_level; }
    break;

  case 101:

/* Line 936 of glr.c  */
#line 1678 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
    break;

  case 102:

/* Line 936 of glr.c  */
#line 1679 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
    break;

  case 103:

/* Line 936 of glr.c  */
#line 1680 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
    break;

  case 109:

/* Line 936 of glr.c  */
#line 1702 "vtkParse.y"
    { pushType(); }
    break;

  case 110:

/* Line 936 of glr.c  */
#line 1703 "vtkParse.y"
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
#line 1716 "vtkParse.y"
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str);
    }
    break;

  case 112:

/* Line 936 of glr.c  */
#line 1722 "vtkParse.y"
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
    break;

  case 113:

/* Line 936 of glr.c  */
#line 1729 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 114:

/* Line 936 of glr.c  */
#line 1730 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 115:

/* Line 936 of glr.c  */
#line 1731 "vtkParse.y"
    { ((*yyvalp).integer) = 1; }
    break;

  case 116:

/* Line 936 of glr.c  */
#line 1734 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 117:

/* Line 936 of glr.c  */
#line 1735 "vtkParse.y"
    { pushType(); }
    break;

  case 118:

/* Line 936 of glr.c  */
#line 1736 "vtkParse.y"
    { ((*yyvalp).integer) = getType(); popType(); }
    break;

  case 122:

/* Line 936 of glr.c  */
#line 1743 "vtkParse.y"
    { add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), NULL); }
    break;

  case 123:

/* Line 936 of glr.c  */
#line 1744 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 124:

/* Line 936 of glr.c  */
#line 1745 "vtkParse.y"
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str), copySig()); }
    break;

  case 145:

/* Line 936 of glr.c  */
#line 1801 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 146:

/* Line 936 of glr.c  */
#line 1802 "vtkParse.y"
    { postSig(")"); }
    break;

  case 147:

/* Line 936 of glr.c  */
#line 1803 "vtkParse.y"
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (8))].yystate.yysemantics.yysval.integer)); popFunction(); }
    break;

  case 148:

/* Line 936 of glr.c  */
#line 1807 "vtkParse.y"
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

  case 149:

/* Line 936 of glr.c  */
#line 1840 "vtkParse.y"
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), 0); }
    break;

  case 151:

/* Line 936 of glr.c  */
#line 1844 "vtkParse.y"
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str); }
    break;

  case 152:

/* Line 936 of glr.c  */
#line 1846 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 153:

/* Line 936 of glr.c  */
#line 1848 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 154:

/* Line 936 of glr.c  */
#line 1850 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 155:

/* Line 936 of glr.c  */
#line 1852 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 156:

/* Line 936 of glr.c  */
#line 1855 "vtkParse.y"
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str), 1); }
    break;

  case 157:

/* Line 936 of glr.c  */
#line 1858 "vtkParse.y"
    { markSig(); }
    break;

  case 158:

/* Line 936 of glr.c  */
#line 1860 "vtkParse.y"
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

  case 159:

/* Line 936 of glr.c  */
#line 1890 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 160:

/* Line 936 of glr.c  */
#line 1892 "vtkParse.y"
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
    break;

  case 161:

/* Line 936 of glr.c  */
#line 1900 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
    break;

  case 163:

/* Line 936 of glr.c  */
#line 1911 "vtkParse.y"
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
    break;

  case 165:

/* Line 936 of glr.c  */
#line 1915 "vtkParse.y"
    { markSig(); }
    break;

  case 166:

/* Line 936 of glr.c  */
#line 1917 "vtkParse.y"
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig()); }
    break;

  case 168:

/* Line 936 of glr.c  */
#line 1919 "vtkParse.y"
    { markSig(); }
    break;

  case 169:

/* Line 936 of glr.c  */
#line 1921 "vtkParse.y"
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer), copySig()); }
    break;

  case 171:

/* Line 936 of glr.c  */
#line 1923 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 172:

/* Line 936 of glr.c  */
#line 1924 "vtkParse.y"
    { postSig("class"); }
    break;

  case 173:

/* Line 936 of glr.c  */
#line 1926 "vtkParse.y"
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
    break;

  case 175:

/* Line 936 of glr.c  */
#line 1937 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 176:

/* Line 936 of glr.c  */
#line 1938 "vtkParse.y"
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
    break;

  case 177:

/* Line 936 of glr.c  */
#line 1941 "vtkParse.y"
    { postSig("class "); }
    break;

  case 178:

/* Line 936 of glr.c  */
#line 1942 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 181:

/* Line 936 of glr.c  */
#line 1948 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 182:

/* Line 936 of glr.c  */
#line 1950 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
    break;

  case 185:

/* Line 936 of glr.c  */
#line 1967 "vtkParse.y"
    { output_function(); }
    break;

  case 186:

/* Line 936 of glr.c  */
#line 1968 "vtkParse.y"
    { output_function(); }
    break;

  case 187:

/* Line 936 of glr.c  */
#line 1969 "vtkParse.y"
    { reject_function(); }
    break;

  case 188:

/* Line 936 of glr.c  */
#line 1970 "vtkParse.y"
    { reject_function(); }
    break;

  case 196:

/* Line 936 of glr.c  */
#line 1986 "vtkParse.y"
    { output_function(); }
    break;

  case 206:

/* Line 936 of glr.c  */
#line 2004 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 207:

/* Line 936 of glr.c  */
#line 2009 "vtkParse.y"
    { postSig(")"); }
    break;

  case 208:

/* Line 936 of glr.c  */
#line 2011 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 209:

/* Line 936 of glr.c  */
#line 2022 "vtkParse.y"
    { ((*yyvalp).str) = copySig(); }
    break;

  case 210:

/* Line 936 of glr.c  */
#line 2025 "vtkParse.y"
    { postSig(")"); }
    break;

  case 211:

/* Line 936 of glr.c  */
#line 2027 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 212:

/* Line 936 of glr.c  */
#line 2037 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 214:

/* Line 936 of glr.c  */
#line 2046 "vtkParse.y"
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 215:

/* Line 936 of glr.c  */
#line 2049 "vtkParse.y"
    { markSig(); postSig("operator "); }
    break;

  case 216:

/* Line 936 of glr.c  */
#line 2053 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 219:

/* Line 936 of glr.c  */
#line 2065 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 220:

/* Line 936 of glr.c  */
#line 2065 "vtkParse.y"
    { chopSig(); }
    break;

  case 221:

/* Line 936 of glr.c  */
#line 2066 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 222:

/* Line 936 of glr.c  */
#line 2068 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 223:

/* Line 936 of glr.c  */
#line 2074 "vtkParse.y"
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
    break;

  case 224:

/* Line 936 of glr.c  */
#line 2078 "vtkParse.y"
    { chopSig(); }
    break;

  case 227:

/* Line 936 of glr.c  */
#line 2083 "vtkParse.y"
    { postSig(" noexcept"); }
    break;

  case 228:

/* Line 936 of glr.c  */
#line 2086 "vtkParse.y"
    { currentFunction->IsDeleted = 1; }
    break;

  case 232:

/* Line 936 of glr.c  */
#line 2093 "vtkParse.y"
    { postSig(" -> "); clearType(); clearTypeId(); }
    break;

  case 233:

/* Line 936 of glr.c  */
#line 2095 "vtkParse.y"
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 240:

/* Line 936 of glr.c  */
#line 2113 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 241:

/* Line 936 of glr.c  */
#line 2117 "vtkParse.y"
    { postSig(")"); }
    break;

  case 242:

/* Line 936 of glr.c  */
#line 2124 "vtkParse.y"
    { closeSig(); }
    break;

  case 243:

/* Line 936 of glr.c  */
#line 2125 "vtkParse.y"
    { openSig(); }
    break;

  case 244:

/* Line 936 of glr.c  */
#line 2127 "vtkParse.y"
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

  case 245:

/* Line 936 of glr.c  */
#line 2144 "vtkParse.y"
    { pushType(); postSig("("); }
    break;

  case 246:

/* Line 936 of glr.c  */
#line 2146 "vtkParse.y"
    { popType(); postSig(")"); }
    break;

  case 253:

/* Line 936 of glr.c  */
#line 2163 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 255:

/* Line 936 of glr.c  */
#line 2166 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 256:

/* Line 936 of glr.c  */
#line 2167 "vtkParse.y"
    { clearType(); clearTypeId(); postSig(", "); }
    break;

  case 258:

/* Line 936 of glr.c  */
#line 2170 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
    break;

  case 259:

/* Line 936 of glr.c  */
#line 2172 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 260:

/* Line 936 of glr.c  */
#line 2175 "vtkParse.y"
    { markSig(); }
    break;

  case 261:

/* Line 936 of glr.c  */
#line 2177 "vtkParse.y"
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

  case 262:

/* Line 936 of glr.c  */
#line 2192 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = getVarValue();
        }
    }
    break;

  case 263:

/* Line 936 of glr.c  */
#line 2201 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 265:

/* Line 936 of glr.c  */
#line 2205 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 266:

/* Line 936 of glr.c  */
#line 2206 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 268:

/* Line 936 of glr.c  */
#line 2217 "vtkParse.y"
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
        if (currentClass)
          {
          vtkParse_AddVariableToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddVariableToNamespace(currentNamespace, var);
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

  case 272:

/* Line 936 of glr.c  */
#line 2279 "vtkParse.y"
    { postSig(", "); }
    break;

  case 275:

/* Line 936 of glr.c  */
#line 2285 "vtkParse.y"
    { setTypePtr(0); }
    break;

  case 276:

/* Line 936 of glr.c  */
#line 2286 "vtkParse.y"
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 277:

/* Line 936 of glr.c  */
#line 2291 "vtkParse.y"
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

  case 278:

/* Line 936 of glr.c  */
#line 2301 "vtkParse.y"
    { postSig(")"); }
    break;

  case 279:

/* Line 936 of glr.c  */
#line 2303 "vtkParse.y"
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

  case 280:

/* Line 936 of glr.c  */
#line 2319 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 282:

/* Line 936 of glr.c  */
#line 2325 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.integer); }
    break;

  case 283:

/* Line 936 of glr.c  */
#line 2326 "vtkParse.y"
    { postSig(")"); }
    break;

  case 284:

/* Line 936 of glr.c  */
#line 2328 "vtkParse.y"
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

  case 285:

/* Line 936 of glr.c  */
#line 2344 "vtkParse.y"
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("*"); }
    break;

  case 286:

/* Line 936 of glr.c  */
#line 2345 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.integer); }
    break;

  case 287:

/* Line 936 of glr.c  */
#line 2346 "vtkParse.y"
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
    break;

  case 288:

/* Line 936 of glr.c  */
#line 2350 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 289:

/* Line 936 of glr.c  */
#line 2351 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 290:

/* Line 936 of glr.c  */
#line 2352 "vtkParse.y"
    { postSig(")"); }
    break;

  case 291:

/* Line 936 of glr.c  */
#line 2353 "vtkParse.y"
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
    break;

  case 292:

/* Line 936 of glr.c  */
#line 2357 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
    break;

  case 295:

/* Line 936 of glr.c  */
#line 2361 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 300:

/* Line 936 of glr.c  */
#line 2369 "vtkParse.y"
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 302:

/* Line 936 of glr.c  */
#line 2374 "vtkParse.y"
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 303:

/* Line 936 of glr.c  */
#line 2377 "vtkParse.y"
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 304:

/* Line 936 of glr.c  */
#line 2379 "vtkParse.y"
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 308:

/* Line 936 of glr.c  */
#line 2387 "vtkParse.y"
    { clearArray(); }
    break;

  case 310:

/* Line 936 of glr.c  */
#line 2391 "vtkParse.y"
    { clearArray(); }
    break;

  case 314:

/* Line 936 of glr.c  */
#line 2398 "vtkParse.y"
    { postSig("["); }
    break;

  case 315:

/* Line 936 of glr.c  */
#line 2399 "vtkParse.y"
    { postSig("]"); }
    break;

  case 316:

/* Line 936 of glr.c  */
#line 2402 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 317:

/* Line 936 of glr.c  */
#line 2403 "vtkParse.y"
    { markSig(); }
    break;

  case 318:

/* Line 936 of glr.c  */
#line 2403 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 324:

/* Line 936 of glr.c  */
#line 2417 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 325:

/* Line 936 of glr.c  */
#line 2418 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 326:

/* Line 936 of glr.c  */
#line 2422 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 327:

/* Line 936 of glr.c  */
#line 2424 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 328:

/* Line 936 of glr.c  */
#line 2426 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 329:

/* Line 936 of glr.c  */
#line 2430 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 330:

/* Line 936 of glr.c  */
#line 2432 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 331:

/* Line 936 of glr.c  */
#line 2434 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 332:

/* Line 936 of glr.c  */
#line 2436 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 333:

/* Line 936 of glr.c  */
#line 2438 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 334:

/* Line 936 of glr.c  */
#line 2440 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (3))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 335:

/* Line 936 of glr.c  */
#line 2441 "vtkParse.y"
    { postSig("template "); }
    break;

  case 336:

/* Line 936 of glr.c  */
#line 2443 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (5))].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL ((5) - (5))].yystate.yysemantics.yysval.str)); }
    break;

  case 337:

/* Line 936 of glr.c  */
#line 2446 "vtkParse.y"
    { postSig("~"); }
    break;

  case 338:

/* Line 936 of glr.c  */
#line 2449 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 339:

/* Line 936 of glr.c  */
#line 2452 "vtkParse.y"
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
    break;

  case 340:

/* Line 936 of glr.c  */
#line 2455 "vtkParse.y"
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); postSig("<"); }
    break;

  case 341:

/* Line 936 of glr.c  */
#line 2457 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
    break;

  case 342:

/* Line 936 of glr.c  */
#line 2463 "vtkParse.y"
    { markSig(); postSig("decltype"); }
    break;

  case 343:

/* Line 936 of glr.c  */
#line 2464 "vtkParse.y"
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
    break;

  case 344:

/* Line 936 of glr.c  */
#line 2471 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 345:

/* Line 936 of glr.c  */
#line 2472 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 346:

/* Line 936 of glr.c  */
#line 2473 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 347:

/* Line 936 of glr.c  */
#line 2474 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 348:

/* Line 936 of glr.c  */
#line 2475 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 349:

/* Line 936 of glr.c  */
#line 2476 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 350:

/* Line 936 of glr.c  */
#line 2477 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 351:

/* Line 936 of glr.c  */
#line 2478 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 352:

/* Line 936 of glr.c  */
#line 2479 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 353:

/* Line 936 of glr.c  */
#line 2480 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 354:

/* Line 936 of glr.c  */
#line 2481 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
    break;

  case 355:

/* Line 936 of glr.c  */
#line 2482 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
    break;

  case 356:

/* Line 936 of glr.c  */
#line 2483 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
    break;

  case 357:

/* Line 936 of glr.c  */
#line 2484 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
    break;

  case 358:

/* Line 936 of glr.c  */
#line 2485 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
    break;

  case 359:

/* Line 936 of glr.c  */
#line 2486 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
    break;

  case 360:

/* Line 936 of glr.c  */
#line 2487 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
    break;

  case 361:

/* Line 936 of glr.c  */
#line 2488 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
    break;

  case 362:

/* Line 936 of glr.c  */
#line 2489 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
    break;

  case 363:

/* Line 936 of glr.c  */
#line 2490 "vtkParse.y"
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
    break;

  case 364:

/* Line 936 of glr.c  */
#line 2491 "vtkParse.y"
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
    break;

  case 365:

/* Line 936 of glr.c  */
#line 2492 "vtkParse.y"
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
    break;

  case 376:

/* Line 936 of glr.c  */
#line 2517 "vtkParse.y"
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer))); }
    break;

  case 377:

/* Line 936 of glr.c  */
#line 2518 "vtkParse.y"
    { setTypeMod(VTK_PARSE_TYPEDEF); }
    break;

  case 378:

/* Line 936 of glr.c  */
#line 2519 "vtkParse.y"
    { setTypeMod(VTK_PARSE_FRIEND); }
    break;

  case 381:

/* Line 936 of glr.c  */
#line 2526 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 382:

/* Line 936 of glr.c  */
#line 2527 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 383:

/* Line 936 of glr.c  */
#line 2528 "vtkParse.y"
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 384:

/* Line 936 of glr.c  */
#line 2529 "vtkParse.y"
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
    break;

  case 385:

/* Line 936 of glr.c  */
#line 2532 "vtkParse.y"
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
    break;

  case 386:

/* Line 936 of glr.c  */
#line 2533 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 387:

/* Line 936 of glr.c  */
#line 2534 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 388:

/* Line 936 of glr.c  */
#line 2535 "vtkParse.y"
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
    break;

  case 389:

/* Line 936 of glr.c  */
#line 2537 "vtkParse.y"
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
    break;

  case 390:

/* Line 936 of glr.c  */
#line 2540 "vtkParse.y"
    { ((*yyvalp).integer) = 0; }
    break;

  case 391:

/* Line 936 of glr.c  */
#line 2541 "vtkParse.y"
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 392:

/* Line 936 of glr.c  */
#line 2542 "vtkParse.y"
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 393:

/* Line 936 of glr.c  */
#line 2545 "vtkParse.y"
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
    break;

  case 394:

/* Line 936 of glr.c  */
#line 2546 "vtkParse.y"
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
    break;

  case 396:

/* Line 936 of glr.c  */
#line 2551 "vtkParse.y"
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 398:

/* Line 936 of glr.c  */
#line 2561 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 400:

/* Line 936 of glr.c  */
#line 2563 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 403:

/* Line 936 of glr.c  */
#line 2569 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (3))].yystate.yysemantics.yysval.str)); }
    break;

  case 404:

/* Line 936 of glr.c  */
#line 2571 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 406:

/* Line 936 of glr.c  */
#line 2576 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
    break;

  case 407:

/* Line 936 of glr.c  */
#line 2577 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 408:

/* Line 936 of glr.c  */
#line 2578 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (4))].yystate.yysemantics.yysval.str)); }
    break;

  case 409:

/* Line 936 of glr.c  */
#line 2580 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 410:

/* Line 936 of glr.c  */
#line 2582 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 412:

/* Line 936 of glr.c  */
#line 2588 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 414:

/* Line 936 of glr.c  */
#line 2590 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 417:

/* Line 936 of glr.c  */
#line 2597 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.integer)); }
    break;

  case 419:

/* Line 936 of glr.c  */
#line 2599 "vtkParse.y"
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 422:

/* Line 936 of glr.c  */
#line 2605 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
    break;

  case 423:

/* Line 936 of glr.c  */
#line 2607 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 424:

/* Line 936 of glr.c  */
#line 2609 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); }
    break;

  case 425:

/* Line 936 of glr.c  */
#line 2611 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 426:

/* Line 936 of glr.c  */
#line 2613 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 427:

/* Line 936 of glr.c  */
#line 2615 "vtkParse.y"
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 428:

/* Line 936 of glr.c  */
#line 2618 "vtkParse.y"
    { setTypeId(""); }
    break;

  case 430:

/* Line 936 of glr.c  */
#line 2622 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
    break;

  case 431:

/* Line 936 of glr.c  */
#line 2623 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 432:

/* Line 936 of glr.c  */
#line 2624 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
    break;

  case 433:

/* Line 936 of glr.c  */
#line 2625 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
    break;

  case 434:

/* Line 936 of glr.c  */
#line 2626 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 435:

/* Line 936 of glr.c  */
#line 2627 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
    break;

  case 436:

/* Line 936 of glr.c  */
#line 2628 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
    break;

  case 437:

/* Line 936 of glr.c  */
#line 2629 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
    break;

  case 438:

/* Line 936 of glr.c  */
#line 2630 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 439:

/* Line 936 of glr.c  */
#line 2631 "vtkParse.y"
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
    break;

  case 440:

/* Line 936 of glr.c  */
#line 2632 "vtkParse.y"
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
    break;

  case 441:

/* Line 936 of glr.c  */
#line 2633 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
    break;

  case 442:

/* Line 936 of glr.c  */
#line 2634 "vtkParse.y"
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
    break;

  case 443:

/* Line 936 of glr.c  */
#line 2635 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
    break;

  case 444:

/* Line 936 of glr.c  */
#line 2636 "vtkParse.y"
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
    break;

  case 445:

/* Line 936 of glr.c  */
#line 2637 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
    break;

  case 446:

/* Line 936 of glr.c  */
#line 2638 "vtkParse.y"
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
    break;

  case 447:

/* Line 936 of glr.c  */
#line 2639 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
    break;

  case 448:

/* Line 936 of glr.c  */
#line 2640 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
    break;

  case 449:

/* Line 936 of glr.c  */
#line 2641 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
    break;

  case 450:

/* Line 936 of glr.c  */
#line 2642 "vtkParse.y"
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 451:

/* Line 936 of glr.c  */
#line 2643 "vtkParse.y"
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
    break;

  case 452:

/* Line 936 of glr.c  */
#line 2646 "vtkParse.y"
    { postSig("auto "); ((*yyvalp).integer) = 0; }
    break;

  case 453:

/* Line 936 of glr.c  */
#line 2647 "vtkParse.y"
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
    break;

  case 454:

/* Line 936 of glr.c  */
#line 2648 "vtkParse.y"
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
    break;

  case 455:

/* Line 936 of glr.c  */
#line 2649 "vtkParse.y"
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
    break;

  case 456:

/* Line 936 of glr.c  */
#line 2650 "vtkParse.y"
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
    break;

  case 457:

/* Line 936 of glr.c  */
#line 2651 "vtkParse.y"
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
    break;

  case 458:

/* Line 936 of glr.c  */
#line 2652 "vtkParse.y"
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
    break;

  case 459:

/* Line 936 of glr.c  */
#line 2653 "vtkParse.y"
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
    break;

  case 460:

/* Line 936 of glr.c  */
#line 2654 "vtkParse.y"
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
    break;

  case 461:

/* Line 936 of glr.c  */
#line 2655 "vtkParse.y"
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
    break;

  case 462:

/* Line 936 of glr.c  */
#line 2656 "vtkParse.y"
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
    break;

  case 463:

/* Line 936 of glr.c  */
#line 2657 "vtkParse.y"
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
    break;

  case 464:

/* Line 936 of glr.c  */
#line 2658 "vtkParse.y"
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
    break;

  case 465:

/* Line 936 of glr.c  */
#line 2659 "vtkParse.y"
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
    break;

  case 466:

/* Line 936 of glr.c  */
#line 2660 "vtkParse.y"
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 470:

/* Line 936 of glr.c  */
#line 2683 "vtkParse.y"
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (2))].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.integer)); }
    break;

  case 471:

/* Line 936 of glr.c  */
#line 2687 "vtkParse.y"
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
    break;

  case 472:

/* Line 936 of glr.c  */
#line 2691 "vtkParse.y"
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
    break;

  case 473:

/* Line 936 of glr.c  */
#line 2694 "vtkParse.y"
    { postSig("*"); }
    break;

  case 474:

/* Line 936 of glr.c  */
#line 2695 "vtkParse.y"
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (4))].yystate.yysemantics.yysval.integer); }
    break;

  case 475:

/* Line 936 of glr.c  */
#line 2698 "vtkParse.y"
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
    break;

  case 476:

/* Line 936 of glr.c  */
#line 2700 "vtkParse.y"
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

  case 478:

/* Line 936 of glr.c  */
#line 2716 "vtkParse.y"
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

  case 481:

/* Line 936 of glr.c  */
#line 2735 "vtkParse.y"
    { closeSig(); }
    break;

  case 482:

/* Line 936 of glr.c  */
#line 2735 "vtkParse.y"
    { openSig(); }
    break;

  case 484:

/* Line 936 of glr.c  */
#line 2742 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 485:

/* Line 936 of glr.c  */
#line 2743 "vtkParse.y"
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

  case 486:

/* Line 936 of glr.c  */
#line 2752 "vtkParse.y"
    {postSig("Get");}
    break;

  case 487:

/* Line 936 of glr.c  */
#line 2753 "vtkParse.y"
    {markSig();}
    break;

  case 488:

/* Line 936 of glr.c  */
#line 2753 "vtkParse.y"
    {swapSig();}
    break;

  case 489:

/* Line 936 of glr.c  */
#line 2754 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 490:

/* Line 936 of glr.c  */
#line 2762 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 491:

/* Line 936 of glr.c  */
#line 2763 "vtkParse.y"
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

  case 492:

/* Line 936 of glr.c  */
#line 2772 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 493:

/* Line 936 of glr.c  */
#line 2773 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (5))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 494:

/* Line 936 of glr.c  */
#line 2781 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 495:

/* Line 936 of glr.c  */
#line 2781 "vtkParse.y"
    {closeSig();}
    break;

  case 496:

/* Line 936 of glr.c  */
#line 2783 "vtkParse.y"
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

  case 497:

/* Line 936 of glr.c  */
#line 2814 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 498:

/* Line 936 of glr.c  */
#line 2815 "vtkParse.y"
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

  case 499:

/* Line 936 of glr.c  */
#line 2824 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 500:

/* Line 936 of glr.c  */
#line 2825 "vtkParse.y"
    {markSig();}
    break;

  case 501:

/* Line 936 of glr.c  */
#line 2825 "vtkParse.y"
    {swapSig();}
    break;

  case 502:

/* Line 936 of glr.c  */
#line 2826 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL ((4) - (9))].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 503:

/* Line 936 of glr.c  */
#line 2835 "vtkParse.y"
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

  case 504:

/* Line 936 of glr.c  */
#line 2852 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 505:

/* Line 936 of glr.c  */
#line 2853 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
    break;

  case 506:

/* Line 936 of glr.c  */
#line 2857 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 507:

/* Line 936 of glr.c  */
#line 2858 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
    break;

  case 508:

/* Line 936 of glr.c  */
#line 2862 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 509:

/* Line 936 of glr.c  */
#line 2863 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
    break;

  case 510:

/* Line 936 of glr.c  */
#line 2867 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 511:

/* Line 936 of glr.c  */
#line 2868 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
    break;

  case 512:

/* Line 936 of glr.c  */
#line 2872 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 513:

/* Line 936 of glr.c  */
#line 2873 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
    break;

  case 514:

/* Line 936 of glr.c  */
#line 2877 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 515:

/* Line 936 of glr.c  */
#line 2878 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
    break;

  case 516:

/* Line 936 of glr.c  */
#line 2882 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 517:

/* Line 936 of glr.c  */
#line 2883 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
    break;

  case 518:

/* Line 936 of glr.c  */
#line 2887 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 519:

/* Line 936 of glr.c  */
#line 2888 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
    break;

  case 520:

/* Line 936 of glr.c  */
#line 2892 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 521:

/* Line 936 of glr.c  */
#line 2894 "vtkParse.y"
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

  case 522:

/* Line 936 of glr.c  */
#line 2909 "vtkParse.y"
    {startSig();}
    break;

  case 523:

/* Line 936 of glr.c  */
#line 2911 "vtkParse.y"
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

  case 524:

/* Line 936 of glr.c  */
#line 2924 "vtkParse.y"
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

  case 525:

/* Line 936 of glr.c  */
#line 2961 "vtkParse.y"
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

  case 526:

/* Line 936 of glr.c  */
#line 2999 "vtkParse.y"
    {
   int is_concrete = 0;
   unsigned long i;

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "GetClassName";
   currentFunction->Signature = "const char *GetClassName();";
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "IsA";
   currentFunction->Signature = "int IsA(const char *name);";
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
     vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), " *SafeDownCast(vtkObject* o);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
   set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
              (((yyGLRStackItem const *)yyvsp)[YYFILL ((3) - (7))].yystate.yysemantics.yysval.str), 0);
   output_function();
   }
    break;

  case 529:

/* Line 936 of glr.c  */
#line 3046 "vtkParse.y"
    { ((*yyvalp).str) = "()"; }
    break;

  case 530:

/* Line 936 of glr.c  */
#line 3047 "vtkParse.y"
    { ((*yyvalp).str) = "[]"; }
    break;

  case 531:

/* Line 936 of glr.c  */
#line 3048 "vtkParse.y"
    { ((*yyvalp).str) = " new[]"; }
    break;

  case 532:

/* Line 936 of glr.c  */
#line 3049 "vtkParse.y"
    { ((*yyvalp).str) = " delete[]"; }
    break;

  case 533:

/* Line 936 of glr.c  */
#line 3050 "vtkParse.y"
    { ((*yyvalp).str) = "<"; }
    break;

  case 534:

/* Line 936 of glr.c  */
#line 3051 "vtkParse.y"
    { ((*yyvalp).str) = ">"; }
    break;

  case 535:

/* Line 936 of glr.c  */
#line 3052 "vtkParse.y"
    { ((*yyvalp).str) = ","; }
    break;

  case 536:

/* Line 936 of glr.c  */
#line 3053 "vtkParse.y"
    { ((*yyvalp).str) = "="; }
    break;

  case 537:

/* Line 936 of glr.c  */
#line 3054 "vtkParse.y"
    { ((*yyvalp).str) = ">>"; }
    break;

  case 538:

/* Line 936 of glr.c  */
#line 3055 "vtkParse.y"
    { ((*yyvalp).str) = ">>"; }
    break;

  case 539:

/* Line 936 of glr.c  */
#line 3056 "vtkParse.y"
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL ((2) - (2))].yystate.yysemantics.yysval.str)); }
    break;

  case 541:

/* Line 936 of glr.c  */
#line 3060 "vtkParse.y"
    { ((*yyvalp).str) = "%"; }
    break;

  case 542:

/* Line 936 of glr.c  */
#line 3061 "vtkParse.y"
    { ((*yyvalp).str) = "*"; }
    break;

  case 543:

/* Line 936 of glr.c  */
#line 3062 "vtkParse.y"
    { ((*yyvalp).str) = "/"; }
    break;

  case 544:

/* Line 936 of glr.c  */
#line 3063 "vtkParse.y"
    { ((*yyvalp).str) = "-"; }
    break;

  case 545:

/* Line 936 of glr.c  */
#line 3064 "vtkParse.y"
    { ((*yyvalp).str) = "+"; }
    break;

  case 546:

/* Line 936 of glr.c  */
#line 3065 "vtkParse.y"
    { ((*yyvalp).str) = "!"; }
    break;

  case 547:

/* Line 936 of glr.c  */
#line 3066 "vtkParse.y"
    { ((*yyvalp).str) = "~"; }
    break;

  case 548:

/* Line 936 of glr.c  */
#line 3067 "vtkParse.y"
    { ((*yyvalp).str) = "&"; }
    break;

  case 549:

/* Line 936 of glr.c  */
#line 3068 "vtkParse.y"
    { ((*yyvalp).str) = "|"; }
    break;

  case 550:

/* Line 936 of glr.c  */
#line 3069 "vtkParse.y"
    { ((*yyvalp).str) = "^"; }
    break;

  case 551:

/* Line 936 of glr.c  */
#line 3070 "vtkParse.y"
    { ((*yyvalp).str) = " new"; }
    break;

  case 552:

/* Line 936 of glr.c  */
#line 3071 "vtkParse.y"
    { ((*yyvalp).str) = " delete"; }
    break;

  case 553:

/* Line 936 of glr.c  */
#line 3072 "vtkParse.y"
    { ((*yyvalp).str) = "<<="; }
    break;

  case 554:

/* Line 936 of glr.c  */
#line 3073 "vtkParse.y"
    { ((*yyvalp).str) = ">>="; }
    break;

  case 555:

/* Line 936 of glr.c  */
#line 3074 "vtkParse.y"
    { ((*yyvalp).str) = "<<"; }
    break;

  case 556:

/* Line 936 of glr.c  */
#line 3075 "vtkParse.y"
    { ((*yyvalp).str) = ".*"; }
    break;

  case 557:

/* Line 936 of glr.c  */
#line 3076 "vtkParse.y"
    { ((*yyvalp).str) = "->*"; }
    break;

  case 558:

/* Line 936 of glr.c  */
#line 3077 "vtkParse.y"
    { ((*yyvalp).str) = "->"; }
    break;

  case 559:

/* Line 936 of glr.c  */
#line 3078 "vtkParse.y"
    { ((*yyvalp).str) = "+="; }
    break;

  case 560:

/* Line 936 of glr.c  */
#line 3079 "vtkParse.y"
    { ((*yyvalp).str) = "-="; }
    break;

  case 561:

/* Line 936 of glr.c  */
#line 3080 "vtkParse.y"
    { ((*yyvalp).str) = "*="; }
    break;

  case 562:

/* Line 936 of glr.c  */
#line 3081 "vtkParse.y"
    { ((*yyvalp).str) = "/="; }
    break;

  case 563:

/* Line 936 of glr.c  */
#line 3082 "vtkParse.y"
    { ((*yyvalp).str) = "%="; }
    break;

  case 564:

/* Line 936 of glr.c  */
#line 3083 "vtkParse.y"
    { ((*yyvalp).str) = "++"; }
    break;

  case 565:

/* Line 936 of glr.c  */
#line 3084 "vtkParse.y"
    { ((*yyvalp).str) = "--"; }
    break;

  case 566:

/* Line 936 of glr.c  */
#line 3085 "vtkParse.y"
    { ((*yyvalp).str) = "&="; }
    break;

  case 567:

/* Line 936 of glr.c  */
#line 3086 "vtkParse.y"
    { ((*yyvalp).str) = "|="; }
    break;

  case 568:

/* Line 936 of glr.c  */
#line 3087 "vtkParse.y"
    { ((*yyvalp).str) = "^="; }
    break;

  case 569:

/* Line 936 of glr.c  */
#line 3088 "vtkParse.y"
    { ((*yyvalp).str) = "&&"; }
    break;

  case 570:

/* Line 936 of glr.c  */
#line 3089 "vtkParse.y"
    { ((*yyvalp).str) = "||"; }
    break;

  case 571:

/* Line 936 of glr.c  */
#line 3090 "vtkParse.y"
    { ((*yyvalp).str) = "=="; }
    break;

  case 572:

/* Line 936 of glr.c  */
#line 3091 "vtkParse.y"
    { ((*yyvalp).str) = "!="; }
    break;

  case 573:

/* Line 936 of glr.c  */
#line 3092 "vtkParse.y"
    { ((*yyvalp).str) = "<="; }
    break;

  case 574:

/* Line 936 of glr.c  */
#line 3093 "vtkParse.y"
    { ((*yyvalp).str) = ">="; }
    break;

  case 575:

/* Line 936 of glr.c  */
#line 3096 "vtkParse.y"
    { ((*yyvalp).str) = "typedef"; }
    break;

  case 576:

/* Line 936 of glr.c  */
#line 3097 "vtkParse.y"
    { ((*yyvalp).str) = "typename"; }
    break;

  case 577:

/* Line 936 of glr.c  */
#line 3098 "vtkParse.y"
    { ((*yyvalp).str) = "class"; }
    break;

  case 578:

/* Line 936 of glr.c  */
#line 3099 "vtkParse.y"
    { ((*yyvalp).str) = "struct"; }
    break;

  case 579:

/* Line 936 of glr.c  */
#line 3100 "vtkParse.y"
    { ((*yyvalp).str) = "union"; }
    break;

  case 580:

/* Line 936 of glr.c  */
#line 3101 "vtkParse.y"
    { ((*yyvalp).str) = "template"; }
    break;

  case 581:

/* Line 936 of glr.c  */
#line 3102 "vtkParse.y"
    { ((*yyvalp).str) = "public"; }
    break;

  case 582:

/* Line 936 of glr.c  */
#line 3103 "vtkParse.y"
    { ((*yyvalp).str) = "protected"; }
    break;

  case 583:

/* Line 936 of glr.c  */
#line 3104 "vtkParse.y"
    { ((*yyvalp).str) = "private"; }
    break;

  case 584:

/* Line 936 of glr.c  */
#line 3105 "vtkParse.y"
    { ((*yyvalp).str) = "const"; }
    break;

  case 585:

/* Line 936 of glr.c  */
#line 3106 "vtkParse.y"
    { ((*yyvalp).str) = "static"; }
    break;

  case 586:

/* Line 936 of glr.c  */
#line 3107 "vtkParse.y"
    { ((*yyvalp).str) = "thread_local"; }
    break;

  case 587:

/* Line 936 of glr.c  */
#line 3108 "vtkParse.y"
    { ((*yyvalp).str) = "constexpr"; }
    break;

  case 588:

/* Line 936 of glr.c  */
#line 3109 "vtkParse.y"
    { ((*yyvalp).str) = "inline"; }
    break;

  case 589:

/* Line 936 of glr.c  */
#line 3110 "vtkParse.y"
    { ((*yyvalp).str) = "virtual"; }
    break;

  case 590:

/* Line 936 of glr.c  */
#line 3111 "vtkParse.y"
    { ((*yyvalp).str) = "explicit"; }
    break;

  case 591:

/* Line 936 of glr.c  */
#line 3112 "vtkParse.y"
    { ((*yyvalp).str) = "decltype"; }
    break;

  case 592:

/* Line 936 of glr.c  */
#line 3113 "vtkParse.y"
    { ((*yyvalp).str) = "default"; }
    break;

  case 593:

/* Line 936 of glr.c  */
#line 3114 "vtkParse.y"
    { ((*yyvalp).str) = "extern"; }
    break;

  case 594:

/* Line 936 of glr.c  */
#line 3115 "vtkParse.y"
    { ((*yyvalp).str) = "using"; }
    break;

  case 595:

/* Line 936 of glr.c  */
#line 3116 "vtkParse.y"
    { ((*yyvalp).str) = "namespace"; }
    break;

  case 596:

/* Line 936 of glr.c  */
#line 3117 "vtkParse.y"
    { ((*yyvalp).str) = "operator"; }
    break;

  case 597:

/* Line 936 of glr.c  */
#line 3118 "vtkParse.y"
    { ((*yyvalp).str) = "enum"; }
    break;

  case 598:

/* Line 936 of glr.c  */
#line 3119 "vtkParse.y"
    { ((*yyvalp).str) = "throw"; }
    break;

  case 599:

/* Line 936 of glr.c  */
#line 3120 "vtkParse.y"
    { ((*yyvalp).str) = "noexcept"; }
    break;

  case 600:

/* Line 936 of glr.c  */
#line 3121 "vtkParse.y"
    { ((*yyvalp).str) = "const_cast"; }
    break;

  case 601:

/* Line 936 of glr.c  */
#line 3122 "vtkParse.y"
    { ((*yyvalp).str) = "dynamic_cast"; }
    break;

  case 602:

/* Line 936 of glr.c  */
#line 3123 "vtkParse.y"
    { ((*yyvalp).str) = "static_cast"; }
    break;

  case 603:

/* Line 936 of glr.c  */
#line 3124 "vtkParse.y"
    { ((*yyvalp).str) = "reinterpret_cast"; }
    break;

  case 616:

/* Line 936 of glr.c  */
#line 3147 "vtkParse.y"
    { postSig("< "); }
    break;

  case 617:

/* Line 936 of glr.c  */
#line 3148 "vtkParse.y"
    { postSig("> "); }
    break;

  case 618:

/* Line 936 of glr.c  */
#line 3149 "vtkParse.y"
    { postSig(">"); }
    break;

  case 622:

/* Line 936 of glr.c  */
#line 3156 "vtkParse.y"
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

  case 623:

/* Line 936 of glr.c  */
#line 3185 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 624:

/* Line 936 of glr.c  */
#line 3185 "vtkParse.y"
    { postSig("."); }
    break;

  case 625:

/* Line 936 of glr.c  */
#line 3186 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 626:

/* Line 936 of glr.c  */
#line 3187 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig(" "); }
    break;

  case 627:

/* Line 936 of glr.c  */
#line 3188 "vtkParse.y"
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig(" "); }
    break;

  case 629:

/* Line 936 of glr.c  */
#line 3191 "vtkParse.y"
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

  case 633:

/* Line 936 of glr.c  */
#line 3218 "vtkParse.y"
    { postSig("< "); }
    break;

  case 634:

/* Line 936 of glr.c  */
#line 3219 "vtkParse.y"
    { postSig("> "); }
    break;

  case 635:

/* Line 936 of glr.c  */
#line 3220 "vtkParse.y"
    { postSig(">"); }
    break;

  case 637:

/* Line 936 of glr.c  */
#line 3224 "vtkParse.y"
    { postSig("= "); }
    break;

  case 638:

/* Line 936 of glr.c  */
#line 3225 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 640:

/* Line 936 of glr.c  */
#line 3229 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 648:

/* Line 936 of glr.c  */
#line 3243 "vtkParse.y"
    { postSig("= "); }
    break;

  case 649:

/* Line 936 of glr.c  */
#line 3244 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 650:

/* Line 936 of glr.c  */
#line 3248 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 651:

/* Line 936 of glr.c  */
#line 3254 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 654:

/* Line 936 of glr.c  */
#line 3265 "vtkParse.y"
    { postSig("["); }
    break;

  case 655:

/* Line 936 of glr.c  */
#line 3266 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 656:

/* Line 936 of glr.c  */
#line 3267 "vtkParse.y"
    { postSig("[["); }
    break;

  case 657:

/* Line 936 of glr.c  */
#line 3268 "vtkParse.y"
    { chopSig(); postSig("]] "); }
    break;

  case 658:

/* Line 936 of glr.c  */
#line 3271 "vtkParse.y"
    { postSig("("); }
    break;

  case 659:

/* Line 936 of glr.c  */
#line 3272 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 660:

/* Line 936 of glr.c  */
#line 3273 "vtkParse.y"
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("*"); }
    break;

  case 661:

/* Line 936 of glr.c  */
#line 3274 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 662:

/* Line 936 of glr.c  */
#line 3275 "vtkParse.y"
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL ((1) - (1))].yystate.yysemantics.yysval.str)); postSig("&"); }
    break;

  case 663:

/* Line 936 of glr.c  */
#line 3276 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 664:

/* Line 936 of glr.c  */
#line 3279 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 665:

/* Line 936 of glr.c  */
#line 3279 "vtkParse.y"
    { postSig("} "); }
    break;



/* Line 936 of glr.c  */
#line 9681 "vtkParse.tab.c"
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
static inline int
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
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yyis_pact_ninf(yystate) \
  ((yystate) == YYPACT_NINF)

/** True iff LR state STATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yyis_pact_ninf (yypact[yystate]);
}

/** The default reduction for STATE, assuming it has one.  */
static inline yyRuleNum
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
static inline void
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

static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yylhs)
{
  int yyr;
  yyr = yypgoto[yylhs - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yylhs - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem.  Callers should call
 * YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 * headroom.  */

static inline yyGLRStackItem*
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
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != NULL && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #K in STACK.  */
static inline void
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

static inline void
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
static inline void
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
static inline void
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
static inline YYRESULTTAG
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

/*ARGSUSED*/ static inline void
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
static inline YYRESULTTAG
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
#line 3326 "vtkParse.y"

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
    /* for now, reject it instead of turning a method into a typedef */
    currentFunction->ReturnValue->Type ^= VTK_PARSE_TYPEDEF;
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
