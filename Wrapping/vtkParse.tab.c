/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
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
refactored to make it more similar to the ANSI C++ 1996 BNF grammar,
but there are still many very significant differences.

The most significant difference between this parser and a "standard"
parser is that it only parses declarations in detail.  All other
statements and expressions are parsed as arbitrary sequences of symbols,
without any syntactic analysis.

The "unqualified_id" does not directly include "operator_function_id" or
"conversion_function_id" (e.g. ids like "operator=" or "operator int*").
Instead, these two id types are used to allow operator functions to be
handled by their own rules, rather than by the generic function rules.
These ids can only be used in function declarations and using declarations.

Types are handled quite differently from the ANSI BNF.  These differences
represent a prolonged (and ultimately successful) attempt to empirically
create a yacc parser without any shift/reduce conflicts.  The rules for
types are organized according to the way that types are usually defined
in working code, rather than strictly according to C++ grammar.

The declaration specifiers "friend" and "typedef" can only appear at the
beginning of a declaration sequence.  There are also restrictions on
where class and enum specifiers can be used: you can declare a new struct
within a variable declaration, but not within a parameter declaration.

The lexer returns each of "(scope::*", "(*", "(a::b::*", etc. as single
tokens.  The ANSI BNF, in contrast, would consider these to be a "("
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

/* names of classes marked as "concrete" */
unsigned long  NumberOfConcreteClasses = 0;
const char   **ConcreteClasses;

/* options that can be set by the programs that use the parser */
int            IgnoreBTX = 0;
int            Recursive = 0;

/* various state variables */
NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateInfo  *currentTemplate = NULL;
const char    *currentEnumName = NULL;
const char    *currentEnumValue = NULL;
parse_access_t access_level = VTK_ACCESS_PUBLIC;

/* functions from vtkParse.l */
void print_parser_error(const char *text, const char *cp, size_t n);

/* helper functions */
const char *type_class(unsigned int type, const char *classname);
void start_class(const char *classname, int is_struct_or_union);
void reject_class(const char *classname, int is_struct_or_union);
void end_class();
void add_base_class(ClassInfo *cls, const char *name, int access_lev,
                    int is_virtual);
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
void start_enum(const char *enumname);
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

static size_t vtkidlen(const char *text)
{
  size_t i = 0;
  char c = text[0];

  if ((c >= 'a' && c <= 'z') ||
      (c >= 'A' && c <= 'Z') ||
       c == '_')
    {
    do
      {
      c = text[++i];
      }
    while ((c >= 'a' && c <= 'z') ||
           (c >= 'A' && c <= 'Z') ||
           (c >= '0' && c <= '9') ||
           c == '_');
    }

  return i;
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
  storedType &= ~(unsigned int)(VTK_PARSE_INDIRECT);
  ind &= VTK_PARSE_INDIRECT;
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



/* Line 189 of yacc.c  */
#line 1358 "vtkParse.tab.c"

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
     STRUCT = 274,
     CLASS = 275,
     UNION = 276,
     ENUM = 277,
     PUBLIC = 278,
     PRIVATE = 279,
     PROTECTED = 280,
     CONST = 281,
     VOLATILE = 282,
     MUTABLE = 283,
     STATIC = 284,
     VIRTUAL = 285,
     EXPLICIT = 286,
     INLINE = 287,
     FRIEND = 288,
     EXTERN = 289,
     OPERATOR = 290,
     TEMPLATE = 291,
     THROW = 292,
     TYPENAME = 293,
     TYPEDEF = 294,
     NAMESPACE = 295,
     USING = 296,
     NEW = 297,
     DELETE = 298,
     STATIC_CAST = 299,
     DYNAMIC_CAST = 300,
     CONST_CAST = 301,
     REINTERPRET_CAST = 302,
     OP_LSHIFT_EQ = 303,
     OP_RSHIFT_EQ = 304,
     OP_LSHIFT = 305,
     OP_RSHIFT = 306,
     OP_DOT_POINTER = 307,
     OP_ARROW_POINTER = 308,
     OP_ARROW = 309,
     OP_INCR = 310,
     OP_DECR = 311,
     OP_PLUS_EQ = 312,
     OP_MINUS_EQ = 313,
     OP_TIMES_EQ = 314,
     OP_DIVIDE_EQ = 315,
     OP_REMAINDER_EQ = 316,
     OP_AND_EQ = 317,
     OP_OR_EQ = 318,
     OP_XOR_EQ = 319,
     OP_LOGIC_AND = 320,
     OP_LOGIC_OR = 321,
     OP_LOGIC_EQ = 322,
     OP_LOGIC_NEQ = 323,
     OP_LOGIC_LEQ = 324,
     OP_LOGIC_GEQ = 325,
     ELLIPSIS = 326,
     DOUBLE_COLON = 327,
     OTHER = 328,
     VOID = 329,
     BOOL = 330,
     FLOAT = 331,
     DOUBLE = 332,
     INT = 333,
     SHORT = 334,
     LONG = 335,
     INT64__ = 336,
     CHAR = 337,
     SIGNED = 338,
     UNSIGNED = 339,
     SSIZE_T = 340,
     SIZE_T = 341,
     IdType = 342,
     FloatType = 343,
     TypeInt8 = 344,
     TypeUInt8 = 345,
     TypeInt16 = 346,
     TypeUInt16 = 347,
     TypeInt32 = 348,
     TypeUInt32 = 349,
     TypeInt64 = 350,
     TypeUInt64 = 351,
     TypeFloat32 = 352,
     TypeFloat64 = 353,
     SetMacro = 354,
     GetMacro = 355,
     SetStringMacro = 356,
     GetStringMacro = 357,
     SetClampMacro = 358,
     SetObjectMacro = 359,
     GetObjectMacro = 360,
     BooleanMacro = 361,
     SetVector2Macro = 362,
     SetVector3Macro = 363,
     SetVector4Macro = 364,
     SetVector6Macro = 365,
     GetVector2Macro = 366,
     GetVector3Macro = 367,
     GetVector4Macro = 368,
     GetVector6Macro = 369,
     SetVectorMacro = 370,
     GetVectorMacro = 371,
     ViewportCoordinateMacro = 372,
     WorldCoordinateMacro = 373,
     TypeMacro = 374,
     VTK_BYTE_SWAP_DECL = 375
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 1306 "vtkParse.y"

  const char   *str;
  unsigned int  integer;



/* Line 214 of yacc.c  */
#line 1641 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1653 "vtkParse.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)                \
      do                                        \
        {                                        \
          YYSIZE_T yyi;                                \
          for (yyi = 0; yyi < (Count); yyi++)        \
            (To)[yyi] = (From)[yyi];                \
        }                                        \
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                                \
    do                                                                        \
      {                                                                        \
        YYSIZE_T yynewbytes;                                                \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                        \
        Stack = &yyptr->Stack_alloc;                                        \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                                \
      }                                                                        \
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5734

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  240
/* YYNRULES -- Number of rules.  */
#define YYNRULES  606
/* YYNRULES -- Number of states.  */
#define YYNSTATES  974

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   375

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,     2,     2,     2,   136,   134,     2,
     127,   128,   135,   139,   126,   138,   143,   137,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   125,   121,
     129,   124,   130,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   131,     2,   132,   142,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,   141,   123,   133,     2,     2,     2,
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
     115,   116,   117,   118,   119,   120
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     6,     7,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    33,    35,    37,
      40,    42,    45,    48,    51,    54,    60,    65,    66,    73,
      79,    81,    84,    88,    93,    98,   104,   105,   111,   112,
     117,   118,   122,   124,   126,   128,   129,   130,   134,   138,
     140,   142,   144,   146,   148,   150,   152,   154,   156,   158,
     160,   162,   164,   167,   170,   172,   175,   178,   181,   184,
     188,   191,   195,   196,   198,   201,   203,   207,   209,   213,
     217,   218,   220,   221,   223,   225,   227,   229,   234,   240,
     241,   247,   250,   252,   253,   255,   257,   260,   264,   266,
     267,   272,   279,   283,   288,   291,   295,   301,   305,   307,
     310,   316,   322,   329,   335,   342,   345,   346,   350,   353,
     355,   357,   358,   359,   367,   369,   373,   375,   378,   381,
     384,   388,   392,   397,   401,   402,   408,   410,   411,   416,
     417,   418,   424,   425,   426,   432,   433,   434,   435,   443,
     445,   447,   448,   450,   451,   455,   457,   460,   463,   466,
     469,   472,   475,   479,   482,   486,   489,   493,   497,   500,
     504,   509,   512,   514,   516,   519,   521,   524,   527,   528,
     529,   537,   540,   541,   545,   546,   552,   555,   557,   560,
     561,   564,   565,   569,   571,   574,   578,   580,   581,   587,
     589,   591,   592,   593,   599,   600,   606,   607,   610,   612,
     616,   619,   620,   621,   624,   626,   627,   632,   636,   637,
     638,   644,   645,   647,   648,   652,   657,   660,   661,   664,
     665,   666,   671,   674,   675,   677,   680,   681,   687,   690,
     691,   697,   699,   701,   703,   705,   707,   708,   709,   710,
     717,   719,   720,   723,   726,   730,   732,   735,   737,   740,
     741,   743,   745,   749,   751,   753,   755,   756,   758,   759,
     762,   764,   767,   768,   773,   774,   775,   778,   780,   782,
     784,   786,   789,   792,   795,   798,   801,   805,   809,   810,
     816,   818,   820,   821,   827,   829,   831,   833,   835,   837,
     839,   841,   844,   847,   850,   853,   856,   859,   862,   864,
     866,   868,   870,   872,   874,   876,   878,   880,   882,   884,
     886,   888,   890,   892,   894,   896,   898,   900,   902,   904,
     905,   908,   910,   912,   914,   916,   918,   921,   923,   925,
     927,   929,   931,   934,   936,   938,   940,   942,   944,   946,
     948,   951,   954,   955,   959,   960,   965,   967,   968,   972,
     974,   976,   979,   982,   985,   986,   990,   991,   996,   998,
    1000,  1002,  1005,  1008,  1011,  1013,  1015,  1017,  1019,  1021,
    1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,
    1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,  1061,
    1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,
    1083,  1086,  1088,  1090,  1091,  1095,  1097,  1100,  1101,  1109,
    1110,  1111,  1112,  1122,  1123,  1129,  1130,  1136,  1137,  1138,
    1149,  1150,  1158,  1159,  1160,  1161,  1171,  1178,  1179,  1187,
    1188,  1196,  1197,  1205,  1206,  1214,  1215,  1223,  1224,  1232,
    1233,  1241,  1242,  1250,  1251,  1261,  1262,  1272,  1277,  1282,
    1290,  1291,  1293,  1296,  1299,  1303,  1307,  1309,  1311,  1313,
    1315,  1317,  1319,  1321,  1323,  1325,  1327,  1329,  1331,  1333,
    1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,  1351,  1353,
    1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,
    1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,
    1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,
    1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,
    1435,  1437,  1439,  1441,  1443,  1445,  1447,  1450,  1452,  1454,
    1456,  1458,  1460,  1462,  1464,  1466,  1468,  1470,  1472,  1473,
    1476,  1478,  1480,  1482,  1484,  1486,  1488,  1490,  1492,  1493,
    1496,  1497,  1500,  1502,  1504,  1506,  1508,  1510,  1511,  1516,
    1517,  1522,  1523,  1528,  1529,  1534,  1535,  1540,  1541,  1546,
    1547,  1550,  1551,  1554,  1556,  1558,  1560,  1562,  1564,  1566,
    1568,  1570,  1572,  1574,  1576,  1578,  1580,  1582,  1584,  1586,
    1588,  1590,  1594,  1598,  1602,  1604,  1606
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     145,     0,    -1,   146,    -1,    -1,    -1,   146,   147,   148,
      -1,   199,    -1,   197,    -1,   154,    -1,   151,    -1,   153,
      -1,   150,    -1,   187,    -1,   260,    -1,   176,    -1,   156,
      -1,   217,    -1,   149,    -1,   328,    -1,   290,   121,    -1,
     121,    -1,   200,   156,    -1,   200,   217,    -1,   200,   184,
      -1,   200,   149,    -1,    34,    12,   122,   146,   123,    -1,
      40,   122,   376,   123,    -1,    -1,    40,   300,   152,   122,
     146,   123,    -1,    40,   300,   124,   292,   121,    -1,   155,
      -1,   200,   155,    -1,   162,   290,   121,    -1,   303,   162,
     290,   121,    -1,   157,   301,   262,   121,    -1,   303,   157,
     301,   262,   121,    -1,    -1,   159,   158,   122,   163,   123,
      -1,    -1,   162,   290,   160,   169,    -1,    -1,   162,   161,
     169,    -1,    20,    -1,    19,    -1,    21,    -1,    -1,    -1,
     163,   164,   166,    -1,   163,   165,   125,    -1,    23,    -1,
      24,    -1,    25,    -1,   197,    -1,   154,    -1,   168,    -1,
     187,    -1,   260,    -1,   176,    -1,   156,    -1,   221,    -1,
     167,    -1,   328,    -1,   120,   382,    -1,   290,   121,    -1,
     121,    -1,   200,   156,    -1,   200,   221,    -1,   200,   167,
      -1,    33,   185,    -1,    33,   200,   185,    -1,    33,   154,
      -1,    33,   222,   238,    -1,    -1,   170,    -1,   125,   171,
      -1,   172,    -1,   171,   126,   172,    -1,   290,    -1,    30,
     174,   290,    -1,   175,   173,   290,    -1,    -1,    30,    -1,
      -1,   175,    -1,    23,    -1,    24,    -1,    25,    -1,   177,
     301,   262,   121,    -1,   303,   177,   301,   262,   121,    -1,
      -1,   179,   122,   178,   180,   123,    -1,    22,   290,    -1,
      22,    -1,    -1,   181,    -1,   182,    -1,   181,   126,    -1,
     181,   126,   182,    -1,   299,    -1,    -1,   299,   124,   183,
     356,    -1,   309,   293,   299,   124,   377,   121,    -1,   162,
     290,   186,    -1,   303,   162,   290,   186,    -1,   162,   186,
      -1,   303,   162,   186,    -1,   122,   376,   123,   377,   121,
      -1,   125,   377,   121,    -1,   188,    -1,   303,   188,    -1,
      39,   309,   196,   190,   121,    -1,    39,   157,   301,   189,
     121,    -1,    39,   303,   157,   301,   189,   121,    -1,    39,
     177,   301,   189,   121,    -1,    39,   303,   177,   301,   189,
     121,    -1,   191,   190,    -1,    -1,   190,   126,   191,    -1,
     266,   196,    -1,   269,    -1,   193,    -1,    -1,    -1,   280,
     127,   194,   250,   128,   195,   276,    -1,   192,    -1,    41,
     198,   121,    -1,   290,    -1,    38,   290,    -1,   293,   232,
      -1,   293,   227,    -1,   296,   293,   232,    -1,   296,   293,
     227,    -1,    41,    40,   290,   121,    -1,    36,   129,   130,
      -1,    -1,    36,   129,   201,   202,   130,    -1,   204,    -1,
      -1,   202,   126,   203,   204,    -1,    -1,    -1,   205,   315,
     267,   206,   213,    -1,    -1,    -1,   207,   212,   267,   208,
     213,    -1,    -1,    -1,    -1,   209,   200,    20,   210,   267,
     211,   213,    -1,    20,    -1,    38,    -1,    -1,   214,    -1,
      -1,   124,   215,   216,    -1,   364,    -1,   216,   364,    -1,
     218,   238,    -1,   223,   238,    -1,   219,   238,    -1,   220,
     238,    -1,   309,   234,    -1,   309,   293,   234,    -1,   293,
     242,    -1,   303,   293,   242,    -1,   293,   224,    -1,   303,
     293,   224,    -1,   309,   293,   228,    -1,   222,   238,    -1,
     293,   232,   121,    -1,   303,   293,   232,   121,    -1,   309,
     234,    -1,   223,    -1,   242,    -1,   303,   242,    -1,   224,
      -1,   303,   224,    -1,   309,   228,    -1,    -1,    -1,   227,
     127,   225,   250,   128,   226,   235,    -1,   233,   309,    -1,
      -1,   230,   229,   235,    -1,    -1,   232,   127,   231,   250,
     128,    -1,   233,   352,    -1,    35,    -1,   239,   235,    -1,
      -1,   235,   236,    -1,    -1,    37,   237,   370,    -1,    26,
      -1,   124,    18,    -1,   122,   376,   123,    -1,   121,    -1,
      -1,   241,   127,   240,   250,   128,    -1,   299,    -1,   297,
      -1,    -1,    -1,   245,   243,   247,   244,   235,    -1,    -1,
     241,   127,   246,   250,   128,    -1,    -1,   125,   248,    -1,
     249,    -1,   248,   126,   249,    -1,   290,   382,    -1,    -1,
      -1,   251,   252,    -1,   254,    -1,    -1,   252,   126,   253,
     254,    -1,   252,   126,    71,    -1,    -1,    -1,   255,   309,
     267,   256,   257,    -1,    -1,   258,    -1,    -1,   124,   259,
     356,    -1,   309,   261,   263,   121,    -1,   269,   257,    -1,
      -1,   265,   263,    -1,    -1,    -1,   263,   126,   264,   265,
      -1,   266,   261,    -1,    -1,   323,    -1,   279,   282,    -1,
      -1,   271,   277,   128,   268,   273,    -1,   280,   282,    -1,
      -1,   272,   278,   128,   270,   273,    -1,   127,    -1,    10,
      -1,    11,    -1,    10,    -1,    11,    -1,    -1,    -1,    -1,
     127,   274,   250,   128,   275,   276,    -1,   283,    -1,    -1,
     276,    28,    -1,   276,    26,    -1,   276,    37,   382,    -1,
     267,    -1,   323,   267,    -1,   269,    -1,   323,   269,    -1,
      -1,   280,    -1,   299,    -1,   299,   125,   281,    -1,    15,
      -1,    13,    -1,    14,    -1,    -1,   283,    -1,    -1,   284,
     285,    -1,   286,    -1,   285,   286,    -1,    -1,   131,   287,
     288,   132,    -1,    -1,    -1,   289,   356,    -1,   291,    -1,
     292,    -1,   299,    -1,   297,    -1,   293,   291,    -1,   296,
     291,    -1,   296,   292,    -1,   295,   296,    -1,   297,   296,
      -1,   293,   295,   296,    -1,   293,   297,   296,    -1,    -1,
     293,    36,   294,   297,   296,    -1,   300,    -1,    72,    -1,
      -1,   300,   129,   298,   362,   130,    -1,     4,    -1,     5,
      -1,     3,    -1,     9,    -1,     8,    -1,     6,    -1,     7,
      -1,   133,     4,    -1,   133,     5,    -1,   133,     3,    -1,
     133,     9,    -1,   133,     8,    -1,   133,     6,    -1,   133,
       7,    -1,    86,    -1,    85,    -1,    89,    -1,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
      96,    -1,    97,    -1,    98,    -1,    87,    -1,    88,    -1,
       3,    -1,     5,    -1,     4,    -1,     9,    -1,     8,    -1,
       6,    -1,     7,    -1,    -1,   301,   302,    -1,   304,    -1,
     322,    -1,    39,    -1,    33,    -1,   304,    -1,   303,   304,
      -1,   305,    -1,   306,    -1,   307,    -1,    28,    -1,    34,
      -1,    34,    12,    -1,    29,    -1,    32,    -1,    30,    -1,
      31,    -1,    26,    -1,    27,    -1,   307,    -1,   308,   307,
      -1,   310,   266,    -1,    -1,   313,   311,   301,    -1,    -1,
     303,   313,   312,   301,    -1,   320,    -1,    -1,    38,   314,
     290,    -1,   297,    -1,   292,    -1,   162,   290,    -1,    22,
     290,    -1,   316,   266,    -1,    -1,   319,   317,   301,    -1,
      -1,   303,   313,   318,   301,    -1,   320,    -1,   297,    -1,
     292,    -1,    19,   290,    -1,    21,   290,    -1,    22,   290,
      -1,   322,    -1,   321,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,     3,    -1,     4,    -1,     5,    -1,    85,
      -1,    86,    -1,    89,    -1,    90,    -1,    91,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    87,    -1,    88,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    82,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    83,    -1,    84,    -1,   324,
      -1,   327,    -1,   327,   324,    -1,   134,    -1,   135,    -1,
      -1,   135,   326,   308,    -1,   325,    -1,   327,   325,    -1,
      -1,    99,   127,   299,   126,   329,   309,   128,    -1,    -1,
      -1,    -1,   100,   127,   330,   299,   126,   331,   309,   332,
     128,    -1,    -1,   101,   127,   333,   299,   128,    -1,    -1,
     102,   127,   334,   299,   128,    -1,    -1,    -1,   103,   127,
     299,   126,   335,   309,   336,   126,   377,   128,    -1,    -1,
     104,   127,   299,   126,   337,   309,   128,    -1,    -1,    -1,
      -1,   105,   127,   338,   299,   126,   339,   309,   340,   128,
      -1,   106,   127,   299,   126,   309,   128,    -1,    -1,   107,
     127,   299,   126,   341,   309,   128,    -1,    -1,   111,   127,
     299,   126,   342,   309,   128,    -1,    -1,   108,   127,   299,
     126,   343,   309,   128,    -1,    -1,   112,   127,   299,   126,
     344,   309,   128,    -1,    -1,   109,   127,   299,   126,   345,
     309,   128,    -1,    -1,   113,   127,   299,   126,   346,   309,
     128,    -1,    -1,   110,   127,   299,   126,   347,   309,   128,
      -1,    -1,   114,   127,   299,   126,   348,   309,   128,    -1,
      -1,   115,   127,   299,   126,   349,   309,   126,    13,   128,
      -1,    -1,   116,   127,   299,   126,   350,   309,   126,    13,
     128,    -1,   117,   127,   299,   128,    -1,   118,   127,   299,
     128,    -1,   119,   127,   299,   126,   299,   351,   128,    -1,
      -1,   126,    -1,   127,   128,    -1,   131,   132,    -1,    42,
     131,   132,    -1,    43,   131,   132,    -1,   129,    -1,   130,
      -1,   126,    -1,   124,    -1,   353,    -1,   136,    -1,   135,
      -1,   137,    -1,   138,    -1,   139,    -1,   140,    -1,   133,
      -1,   134,    -1,   141,    -1,   142,    -1,    42,    -1,    43,
      -1,    48,    -1,    49,    -1,    50,    -1,    51,    -1,    52,
      -1,    53,    -1,    54,    -1,    57,    -1,    58,    -1,    59,
      -1,    60,    -1,    61,    -1,    55,    -1,    56,    -1,    62,
      -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,    67,
      -1,    68,    -1,    69,    -1,    70,    -1,    39,    -1,    38,
      -1,    20,    -1,    19,    -1,    21,    -1,    36,    -1,    23,
      -1,    25,    -1,    24,    -1,    26,    -1,    29,    -1,    32,
      -1,    30,    -1,    34,    -1,    40,    -1,    35,    -1,    22,
      -1,    37,    -1,    46,    -1,    45,    -1,    44,    -1,    47,
      -1,    15,    -1,    13,    -1,    14,    -1,    16,    -1,    17,
      -1,    12,    -1,    18,    -1,   359,    -1,   356,   359,    -1,
     368,    -1,   370,    -1,   374,    -1,   353,    -1,   125,    -1,
     143,    -1,    72,    -1,   354,    -1,   355,    -1,   322,    -1,
     321,    -1,    -1,   358,   360,    -1,   357,    -1,   129,    -1,
     130,    -1,   359,    -1,   124,    -1,   126,    -1,   360,    -1,
     121,    -1,    -1,   362,   365,    -1,    -1,   363,   361,    -1,
     366,    -1,   357,    -1,   364,    -1,   124,    -1,   126,    -1,
      -1,   129,   367,   362,   130,    -1,    -1,   131,   369,   358,
     132,    -1,    -1,   127,   371,   358,   128,    -1,    -1,    10,
     372,   358,   128,    -1,    -1,    11,   373,   358,   128,    -1,
      -1,   122,   375,   363,   123,    -1,    -1,   376,   378,    -1,
      -1,   377,   379,    -1,   379,    -1,   121,    -1,   380,    -1,
     382,    -1,   381,    -1,    72,    -1,    71,    -1,   353,    -1,
     125,    -1,   143,    -1,   129,    -1,   130,    -1,   124,    -1,
     126,    -1,   354,    -1,   355,    -1,   320,    -1,    73,    -1,
     122,   376,   123,    -1,   131,   376,   132,    -1,   383,   376,
     128,    -1,   127,    -1,    10,    -1,    11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1465,  1465,  1467,  1469,  1468,  1479,  1480,  1481,  1482,
    1483,  1484,  1485,  1486,  1487,  1488,  1489,  1490,  1491,  1492,
    1493,  1496,  1497,  1498,  1499,  1506,  1513,  1514,  1514,  1518,
    1525,  1526,  1529,  1530,  1533,  1534,  1537,  1537,  1551,  1551,
    1553,  1553,  1557,  1558,  1559,  1561,  1563,  1562,  1571,  1575,
    1576,  1577,  1580,  1581,  1582,  1583,  1584,  1585,  1586,  1587,
    1588,  1589,  1590,  1591,  1592,  1595,  1596,  1597,  1600,  1601,
    1602,  1603,  1605,  1606,  1609,  1612,  1613,  1616,  1618,  1620,
    1624,  1625,  1628,  1629,  1632,  1633,  1634,  1645,  1646,  1650,
    1650,  1663,  1664,  1666,  1667,  1670,  1671,  1672,  1675,  1676,
    1676,  1684,  1687,  1688,  1689,  1690,  1693,  1694,  1702,  1703,
    1706,  1707,  1709,  1711,  1713,  1717,  1719,  1720,  1723,  1726,
    1727,  1730,  1731,  1730,  1735,  1769,  1772,  1773,  1774,  1776,
    1778,  1780,  1784,  1791,  1794,  1793,  1811,  1813,  1812,  1817,
    1819,  1817,  1821,  1823,  1821,  1825,  1826,  1828,  1825,  1839,
    1840,  1842,  1843,  1846,  1846,  1856,  1857,  1865,  1866,  1867,
    1868,  1871,  1874,  1875,  1876,  1879,  1880,  1881,  1884,  1885,
    1886,  1889,  1890,  1891,  1892,  1895,  1896,  1897,  1901,  1905,
    1900,  1917,  1921,  1921,  1932,  1931,  1940,  1944,  1947,  1956,
    1957,  1960,  1960,  1961,  1962,  1970,  1971,  1975,  1974,  1982,
    1983,  1991,  1992,  1991,  2010,  2010,  2013,  2014,  2017,  2018,
    2021,  2027,  2028,  2028,  2031,  2032,  2032,  2034,  2038,  2040,
    2038,  2064,  2065,  2068,  2068,  2076,  2079,  2138,  2139,  2141,
    2142,  2142,  2145,  2148,  2149,  2153,  2154,  2154,  2173,  2174,
    2174,  2192,  2193,  2195,  2199,  2201,  2204,  2205,  2206,  2205,
    2211,  2213,  2214,  2215,  2216,  2219,  2220,  2224,  2225,  2229,
    2230,  2233,  2234,  2237,  2238,  2239,  2242,  2243,  2246,  2246,
    2249,  2250,  2253,  2253,  2256,  2257,  2257,  2264,  2265,  2268,
    2269,  2272,  2274,  2276,  2280,  2282,  2284,  2286,  2288,  2288,
    2293,  2296,  2299,  2299,  2314,  2315,  2316,  2317,  2318,  2319,
    2320,  2321,  2322,  2323,  2324,  2325,  2326,  2327,  2328,  2329,
    2330,  2331,  2332,  2333,  2334,  2335,  2336,  2337,  2338,  2339,
    2340,  2341,  2348,  2349,  2350,  2351,  2352,  2353,  2354,  2361,
    2362,  2365,  2366,  2368,  2369,  2372,  2373,  2376,  2377,  2378,
    2381,  2382,  2383,  2384,  2387,  2388,  2389,  2392,  2393,  2396,
    2397,  2406,  2409,  2409,  2411,  2411,  2415,  2416,  2416,  2418,
    2420,  2422,  2424,  2428,  2431,  2431,  2433,  2433,  2437,  2438,
    2440,  2442,  2444,  2446,  2450,  2451,  2454,  2455,  2456,  2457,
    2458,  2459,  2460,  2461,  2462,  2463,  2464,  2465,  2466,  2467,
    2468,  2469,  2470,  2471,  2472,  2473,  2474,  2477,  2478,  2479,
    2480,  2481,  2482,  2483,  2484,  2485,  2486,  2487,  2507,  2508,
    2509,  2512,  2515,  2516,  2516,  2531,  2532,  2549,  2549,  2559,
    2560,  2560,  2559,  2569,  2569,  2579,  2579,  2588,  2588,  2588,
    2621,  2620,  2631,  2632,  2632,  2631,  2641,  2659,  2659,  2664,
    2664,  2669,  2669,  2674,  2674,  2679,  2679,  2684,  2684,  2689,
    2689,  2694,  2694,  2699,  2699,  2716,  2716,  2730,  2767,  2805,
    2857,  2858,  2865,  2866,  2867,  2868,  2869,  2870,  2871,  2872,
    2873,  2876,  2877,  2878,  2879,  2880,  2881,  2882,  2883,  2884,
    2885,  2886,  2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,
    2895,  2896,  2897,  2898,  2899,  2900,  2901,  2902,  2903,  2904,
    2905,  2906,  2907,  2908,  2909,  2910,  2913,  2914,  2915,  2916,
    2917,  2918,  2919,  2920,  2921,  2922,  2923,  2924,  2925,  2926,
    2927,  2928,  2929,  2930,  2931,  2932,  2933,  2934,  2937,  2938,
    2939,  2940,  2941,  2942,  2943,  2950,  2951,  2954,  2955,  2956,
    2957,  2988,  2988,  2989,  2990,  2991,  2992,  2993,  3016,  3017,
    3019,  3020,  3021,  3023,  3024,  3025,  3027,  3028,  3030,  3031,
    3033,  3034,  3037,  3038,  3041,  3042,  3043,  3047,  3046,  3060,
    3060,  3064,  3064,  3066,  3066,  3068,  3068,  3072,  3072,  3077,
    3078,  3080,  3081,  3084,  3085,  3088,  3089,  3090,  3091,  3092,
    3093,  3094,  3094,  3094,  3094,  3094,  3094,  3095,  3095,  3096,
    3097,  3100,  3103,  3106,  3109,  3109,  3109
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
  "CHAR_LITERAL", "ZERO", "STRUCT", "CLASS", "UNION", "ENUM", "PUBLIC",
  "PRIVATE", "PROTECTED", "CONST", "VOLATILE", "MUTABLE", "STATIC",
  "VIRTUAL", "EXPLICIT", "INLINE", "FRIEND", "EXTERN", "OPERATOR",
  "TEMPLATE", "THROW", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "NEW",
  "DELETE", "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST",
  "REINTERPRET_CAST", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR",
  "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND",
  "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ",
  "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER", "VOID", "BOOL",
  "FLOAT", "DOUBLE", "INT", "SHORT", "LONG", "INT64__", "CHAR", "SIGNED",
  "UNSIGNED", "SSIZE_T", "SIZE_T", "IdType", "FloatType", "TypeInt8",
  "TypeUInt8", "TypeInt16", "TypeUInt16", "TypeInt32", "TypeUInt32",
  "TypeInt64", "TypeUInt64", "TypeFloat32", "TypeFloat64", "SetMacro",
  "GetMacro", "SetStringMacro", "GetStringMacro", "SetClampMacro",
  "SetObjectMacro", "GetObjectMacro", "BooleanMacro", "SetVector2Macro",
  "SetVector3Macro", "SetVector4Macro", "SetVector6Macro",
  "GetVector2Macro", "GetVector3Macro", "GetVector4Macro",
  "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "'='", "':'", "','", "'('",
  "')'", "'<'", "'>'", "'['", "']'", "'~'", "'&'", "'*'", "'%'", "'/'",
  "'-'", "'+'", "'!'", "'|'", "'^'", "'.'", "$accept", "translation_unit",
  "opt_declaration_seq", "$@1", "declaration", "template_declaration",
  "linkage_specification", "namespace_definition", "$@2",
  "namespace_alias_definition", "forward_declaration",
  "simple_forward_declaration", "class_definition", "class_specifier",
  "$@3", "class_head", "$@4", "$@5", "class_key", "member_specification",
  "$@6", "member_access_specifier", "member_declaration",
  "template_member_declaration", "friend_declaration", "opt_base_clause",
  "base_clause", "base_specifier_list", "base_specifier", "opt_virtual",
  "opt_access_specifier", "access_specifier", "enum_definition",
  "enum_specifier", "$@7", "enum_head", "opt_enumerator_list",
  "enumerator_list", "enumerator_definition", "$@8",
  "nested_variable_initialization", "ignored_class", "ignored_class_body",
  "typedef_declaration", "basic_typedef_declaration",
  "typedef_declarator_list", "typedef_declarator_list_cont",
  "typedef_declarator", "typedef_direct_declarator",
  "function_direct_declarator", "$@9", "$@10", "typedef_declarator_id",
  "using_declaration", "using_id", "using_directive", "template_head",
  "$@11", "template_parameter_list", "$@12", "template_parameter", "$@13",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "class_or_typename",
  "opt_template_parameter_initializer", "template_parameter_initializer",
  "$@20", "template_parameter_value", "function_definition",
  "function_declaration", "nested_method_declaration",
  "nested_operator_declaration", "method_definition", "method_declaration",
  "operator_declaration", "conversion_function", "$@21", "$@22",
  "conversion_function_id", "operator_function_nr", "$@23",
  "operator_function_sig", "$@24", "operator_function_id", "operator_sig",
  "function_nr", "function_trailer_clause", "function_trailer", "$@25",
  "function_body", "function_sig", "$@26", "function_name",
  "structor_declaration", "$@27", "$@28", "structor_sig", "$@29",
  "opt_ctor_initializer", "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "$@30", "parameter_list", "$@31",
  "parameter_declaration", "$@32", "$@33", "opt_initializer",
  "initializer", "$@34", "variable_declaration", "init_declarator_id",
  "opt_declarator_list", "declarator_list_cont", "$@35", "init_declarator",
  "opt_ptr_operator_seq", "direct_abstract_declarator", "$@36",
  "direct_declarator", "$@37", "p_or_lp_or_la", "lp_or_la",
  "opt_array_or_parameters", "$@38", "$@39", "function_qualifiers",
  "abstract_declarator", "declarator", "opt_declarator_id",
  "declarator_id", "bitfield_size", "opt_array_decorator_seq",
  "array_decorator_seq", "$@40", "array_decorator_seq_impl",
  "array_decorator", "$@41", "array_size_specifier", "$@42",
  "id_expression", "unqualified_id", "qualified_id",
  "nested_name_specifier", "$@43", "identifier_sig", "scope_operator_sig",
  "template_id", "$@44", "simple_id", "identifier",
  "opt_decl_specifier_seq", "decl_specifier2", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "function_specifier",
  "cv_qualifier", "cv_qualifier_seq", "store_type", "store_type_specifier",
  "$@45", "$@46", "type_specifier", "$@47", "tparam_type",
  "tparam_type_specifier2", "$@48", "$@49", "tparam_type_specifier",
  "simple_type_specifier", "type_name", "primitive_type",
  "ptr_operator_seq", "reference", "pointer", "$@50", "pointer_seq",
  "declaration_macro", "$@51", "$@52", "$@53", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "common_bracket_item", "any_bracket_contents",
  "bracket_pitem", "any_bracket_item", "braces_item",
  "angle_bracket_contents", "braces_contents", "angle_bracket_pitem",
  "angle_bracket_item", "angle_brackets_sig", "$@73", "brackets_sig",
  "$@74", "parentheses_sig", "$@75", "$@76", "$@77", "braces_sig", "$@78",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_braces", "ignored_brackets",
  "ignored_parentheses", "ignored_left_parenthesis", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,    59,   123,   125,    61,    58,    44,    40,    41,    60,
      62,    91,    93,   126,    38,    42,    37,    47,    45,    43,
      33,   124,    94,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   144,   145,   146,   147,   146,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   149,   149,   149,   149,   150,   151,   152,   151,   153,
     154,   154,   155,   155,   156,   156,   158,   157,   160,   159,
     161,   159,   162,   162,   162,   163,   164,   163,   163,   165,
     165,   165,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   167,   167,   168,   168,
     168,   168,   169,   169,   170,   171,   171,   172,   172,   172,
     173,   173,   174,   174,   175,   175,   175,   176,   176,   178,
     177,   179,   179,   180,   180,   181,   181,   181,   182,   183,
     182,   184,   185,   185,   185,   185,   186,   186,   187,   187,
     188,   188,   188,   188,   188,   189,   190,   190,   191,   192,
     192,   194,   195,   193,   196,   197,   198,   198,   198,   198,
     198,   198,   199,   200,   201,   200,   202,   203,   202,   205,
     206,   204,   207,   208,   204,   209,   210,   211,   204,   212,
     212,   213,   213,   215,   214,   216,   216,   217,   217,   217,
     217,   218,   219,   219,   219,   220,   220,   220,   221,   221,
     221,   222,   222,   222,   222,   223,   223,   223,   225,   226,
     224,   227,   229,   228,   231,   230,   232,   233,   234,   235,
     235,   237,   236,   236,   236,   238,   238,   240,   239,   241,
     241,   243,   244,   242,   246,   245,   247,   247,   248,   248,
     249,   250,   251,   250,   252,   253,   252,   252,   255,   256,
     254,   257,   257,   259,   258,   260,   261,   262,   262,   263,
     264,   263,   265,   266,   266,   267,   268,   267,   269,   270,
     269,   271,   271,   271,   272,   272,   273,   274,   275,   273,
     273,   276,   276,   276,   276,   277,   277,   278,   278,   279,
     279,   280,   280,   281,   281,   281,   282,   282,   284,   283,
     285,   285,   287,   286,   288,   289,   288,   290,   290,   291,
     291,   292,   292,   292,   293,   293,   293,   293,   294,   293,
     295,   296,   298,   297,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   300,   300,   300,   300,   300,   300,   300,   301,
     301,   302,   302,   302,   302,   303,   303,   304,   304,   304,
     305,   305,   305,   305,   306,   306,   306,   307,   307,   308,
     308,   309,   311,   310,   312,   310,   313,   314,   313,   313,
     313,   313,   313,   315,   317,   316,   318,   316,   319,   319,
     319,   319,   319,   319,   320,   320,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   321,   322,   322,   322,
     322,   322,   322,   322,   322,   322,   322,   322,   323,   323,
     323,   324,   325,   326,   325,   327,   327,   329,   328,   330,
     331,   332,   328,   333,   328,   334,   328,   335,   336,   328,
     337,   328,   338,   339,   340,   328,   328,   341,   328,   342,
     328,   343,   328,   344,   328,   345,   328,   346,   328,   347,
     328,   348,   328,   349,   328,   350,   328,   328,   328,   328,
     351,   351,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   355,   355,
     355,   355,   355,   355,   355,   356,   356,   357,   357,   357,
     357,   357,   357,   357,   357,   357,   357,   357,   358,   358,
     359,   359,   359,   360,   360,   360,   361,   361,   362,   362,
     363,   363,   364,   364,   365,   365,   365,   367,   366,   369,
     368,   371,   370,   372,   370,   373,   370,   375,   374,   376,
     376,   377,   377,   378,   378,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   380,   381,   382,   383,   383,   383
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     2,     2,     2,     2,     5,     4,     0,     6,     5,
       1,     2,     3,     4,     4,     5,     0,     5,     0,     4,
       0,     3,     1,     1,     1,     0,     0,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     2,     2,     3,
       2,     3,     0,     1,     2,     1,     3,     1,     3,     3,
       0,     1,     0,     1,     1,     1,     1,     4,     5,     0,
       5,     2,     1,     0,     1,     1,     2,     3,     1,     0,
       4,     6,     3,     4,     2,     3,     5,     3,     1,     2,
       5,     5,     6,     5,     6,     2,     0,     3,     2,     1,
       1,     0,     0,     7,     1,     3,     1,     2,     2,     2,
       3,     3,     4,     3,     0,     5,     1,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     0,     7,     1,
       1,     0,     1,     0,     3,     1,     2,     2,     2,     2,
       2,     2,     3,     2,     3,     2,     3,     3,     2,     3,
       4,     2,     1,     1,     2,     1,     2,     2,     0,     0,
       7,     2,     0,     3,     0,     5,     2,     1,     2,     0,
       2,     0,     3,     1,     2,     3,     1,     0,     5,     1,
       1,     0,     0,     5,     0,     5,     0,     2,     1,     3,
       2,     0,     0,     2,     1,     0,     4,     3,     0,     0,
       5,     0,     1,     0,     3,     4,     2,     0,     2,     0,
       0,     4,     2,     0,     1,     2,     0,     5,     2,     0,
       5,     1,     1,     1,     1,     1,     0,     0,     0,     6,
       1,     0,     2,     2,     3,     1,     2,     1,     2,     0,
       1,     1,     3,     1,     1,     1,     0,     1,     0,     2,
       1,     2,     0,     4,     0,     0,     2,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     3,     3,     0,     5,
       1,     1,     0,     5,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     0,     3,     0,     4,     1,     0,     3,     1,
       1,     2,     2,     2,     0,     3,     0,     4,     1,     1,
       1,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     0,     3,     1,     2,     0,     7,     0,
       0,     0,     9,     0,     5,     0,     5,     0,     0,    10,
       0,     7,     0,     0,     0,     9,     6,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     9,     0,     9,     4,     4,     7,
       0,     1,     2,     2,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     4,     1,     0,   380,   381,   382,   376,   377,
     378,   379,    43,    42,    44,    92,   347,   348,   340,   343,
     345,   346,   344,   341,   187,     0,   357,     0,     0,     0,
     291,   397,   398,   399,   400,   402,   403,   404,   405,   401,
     406,   407,   383,   384,   395,   396,   385,   386,   387,   388,
     389,   390,   391,   392,   393,   394,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     5,
      17,    11,     9,    10,     8,    30,    15,   329,    36,    40,
      14,   329,     0,    12,   108,     7,     6,     0,    16,     0,
       0,     0,     0,   175,     0,     0,    13,     0,   277,   360,
       0,     0,     0,   359,   279,   290,     0,   335,   337,   338,
     339,     0,   233,   352,   356,   375,   374,    18,   296,   294,
     295,   299,   300,   298,   297,   309,   308,   320,   321,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   362,
     278,     0,   280,   342,   134,     0,   380,   381,   382,   376,
     377,   378,   379,   341,   383,   384,   395,   396,   385,   386,
     387,   388,   389,   390,   391,   392,   393,   394,   329,    40,
     329,   360,   359,     0,     0,   322,   324,   323,   327,   328,
     326,   325,   579,    27,     0,     0,     0,   126,     0,     0,
       0,   419,   423,   425,     0,     0,   432,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   303,   301,   302,   306,   307,   305,   304,   233,     0,
      72,   361,   233,    89,     0,    24,    31,    21,    23,     0,
      22,     0,     0,   196,   579,   157,   159,   160,   158,   178,
       0,     0,   181,    19,   288,   165,     0,   163,   201,   281,
       0,   280,   279,   284,   282,   283,   285,   292,   329,    40,
     329,   109,   176,     0,   336,   354,   244,   245,   177,   182,
       0,     0,   161,   189,     0,   229,   221,     0,   266,     0,
     200,   261,   411,   412,   351,   234,   408,   415,   409,   329,
     280,     3,   133,   139,   358,   342,   233,   361,   233,   329,
     329,   296,   294,   295,   299,   300,   298,   297,   124,   120,
     116,   119,   266,   261,     0,     0,     0,   127,     0,   125,
     129,   128,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   334,   333,     0,   229,     0,
     330,   331,   332,    45,     0,    41,    73,    32,    72,     0,
      93,   362,     0,     0,   199,     0,   212,   361,     0,   204,
     206,   286,   287,   558,   233,   361,   233,   166,   164,   329,
     189,   184,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   495,   496,   490,   491,   492,   493,   494,   497,   498,
     499,   500,   501,   502,   503,   504,   505,   469,   468,     0,
     466,   467,     0,   477,   478,   472,   471,   473,   474,   475,
     476,   479,   480,   186,   470,   188,   197,     0,   223,   226,
     222,   257,     0,     0,   238,   267,     0,   167,   162,   200,
       0,     0,   410,   416,   353,     4,     0,   136,     0,     0,
       0,     0,   116,     0,     0,   233,   233,     0,   121,   380,
     381,   382,   376,   377,   378,   379,   605,   606,   533,   529,
     530,   528,   531,   532,   534,   509,   508,   510,   522,   512,
     514,   513,   515,   516,   518,   517,   519,   521,   511,   523,
     507,   506,   520,   481,   482,   526,   525,   524,   527,   589,
     588,   600,   584,   579,    26,   595,   591,   596,   604,   593,
     594,   579,   592,   599,   590,   597,   598,   580,   583,   585,
     587,   586,   579,     0,     0,     3,   132,   131,   130,   417,
       0,     0,     0,   427,   430,     0,     0,   437,   441,   445,
     449,   439,   443,   447,   451,   453,   455,   457,   458,     0,
      34,   228,   232,    46,    84,    85,    86,    82,    74,    75,
      80,    77,    39,    87,     0,    94,    95,    98,   199,   195,
       0,   218,     0,     0,   212,     0,   202,     0,     0,    33,
       0,   355,   183,   212,     0,     0,   462,   463,   193,   191,
       0,   190,   212,   225,   230,     0,   239,   258,   272,   269,
     270,   264,   265,   263,   262,   349,   414,    25,   137,   135,
       0,     0,     0,   370,   369,     0,   259,   233,   364,   368,
     149,   150,   259,     0,   111,   115,   118,   113,     0,     0,
     110,   233,   212,     0,     0,     0,    29,     4,     0,   420,
     424,   426,     0,     0,   433,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   460,    49,    50,    51,
      37,     0,     0,     0,    83,     0,    81,     0,    90,    96,
      99,   581,   179,   213,   214,     0,   289,     0,   207,   208,
       0,   189,   573,   575,   543,   577,   565,   541,   566,   571,
     567,   293,   569,   542,   547,   546,   540,   544,   545,   563,
     564,   559,   562,   537,   538,   539,    35,    88,     0,   464,
     465,     0,   194,     0,   233,   551,   552,   224,   550,   535,
     246,   275,   271,   350,   139,   371,   372,   373,   366,   242,
     243,   241,   140,   259,   266,   260,   363,   329,   143,   146,
     112,   114,   117,     0,   601,   602,   603,    28,     0,     0,
     428,     0,     0,   436,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   461,     0,     0,     0,     0,    64,
      53,    58,    47,    60,    54,    57,    55,    52,     0,    59,
       0,   172,   173,    56,     0,     0,   359,     0,     0,    61,
      48,    78,    76,    79,    97,     0,     0,   189,   215,   259,
     205,     0,   210,   203,   548,   548,   560,   548,   558,   548,
     185,   192,   198,   231,   536,   247,   240,   250,     0,     0,
     138,   329,   151,   255,     0,   259,   235,   365,   151,   259,
     122,   418,   421,     0,   431,   434,   438,   442,   446,   450,
     440,   444,   448,   452,     0,     0,   459,    70,     0,    68,
       0,     0,   359,     0,     0,    62,    65,    67,     0,    66,
       0,   168,    63,     0,   174,     0,   171,   200,   100,   101,
     582,   180,   217,   218,   219,   209,     0,     0,     0,     0,
       0,     0,   212,   273,   276,   367,   153,   141,   152,   236,
     256,   144,   147,   251,     0,   581,     0,     0,     0,   579,
     581,   104,   361,     0,    69,     0,    71,     0,     0,   169,
       0,   216,   221,   554,   555,   574,   553,   549,   576,   557,
     578,   556,   561,   572,   568,   570,     0,     0,   246,   151,
     123,   422,     0,   435,   454,   456,     0,     0,   102,     0,
       0,   105,   361,   170,   220,   248,   154,   155,   237,   148,
     253,   252,     0,   429,   581,   107,     0,   103,   251,   156,
     254,     0,   249,   106
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    79,   235,    81,    82,   326,    83,
      84,    85,   237,    87,   229,    88,   368,   230,   250,   563,
     671,   672,   782,   867,   784,   365,   366,   568,   569,   677,
     673,   570,    90,    91,   370,    92,   574,   575,   576,   805,
     238,   859,   911,    93,    94,   461,   467,   462,   318,   319,
     642,   903,   320,    95,   196,    96,   239,   303,   456,   734,
     457,   458,   832,   459,   838,   460,   839,   939,   632,   897,
     898,   937,   956,   240,    99,   100,   101,   869,   790,   791,
     103,   376,   807,   104,   278,   390,   279,   593,   280,   105,
     282,   435,   601,   721,   245,   283,   602,   256,   792,   380,
     691,   258,   584,   586,   688,   689,   580,   581,   683,   883,
     684,   685,   922,   439,   440,   605,   106,   285,   357,   437,
     724,   358,   359,   742,   938,   286,   730,   743,   287,   826,
     892,   968,   940,   834,   442,   744,   745,   614,   444,   445,
     446,   609,   610,   731,   828,   829,   197,   108,   181,   151,
     378,   111,   112,   182,   383,   114,   115,   228,   360,   251,
     117,   118,   119,   120,   616,   864,   122,   299,   389,   123,
     155,   626,   627,   747,   831,   628,   124,   125,   126,   295,
     296,   297,   451,   298,   127,   648,   335,   759,   904,   336,
     337,   652,   843,   653,   340,   762,   906,   656,   660,   657,
     661,   658,   662,   659,   663,   664,   665,   775,   433,   706,
     707,   708,   727,   728,   886,   926,   927,   932,   587,   888,
     710,   711,   712,   818,   713,   819,   714,   817,   814,   815,
     715,   816,   324,   806,   527,   528,   529,   530,   531,   532
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -870
static const yytype_int16 yypact[] =
{
    -870,   111,   118,  -870,  4317,    23,    99,   150,   170,   175,
     234,   250,  -870,  -870,  -870,  4921,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   137,  -870,     1,  -870,  5504,    58,  4690,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,    83,   161,   174,   198,   226,   230,   241,   255,
     257,   259,   285,   287,   290,   323,    26,    43,    57,    61,
      73,   108,   136,   151,   159,   178,   200,   203,   213,   215,
     225,   232,   237,   239,   246,   248,   256,  -870,   395,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  4921,
    -870,  -870,    64,  -870,  -870,  -870,  -870,  5216,  -870,   188,
     188,   188,   188,  -870,   269,  5600,  -870,   295,  -870,   300,
    4859,   337,  4921,   -46,  -870,   297,  5312,  -870,  -870,  -870,
    -870,  4739,   -33,  -870,  -870,  -870,  -870,  -870,    -2,     9,
      16,    48,    52,    82,    92,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   325,
    -870,  4991,   337,   329,   339,  4921,    -2,     9,    16,    48,
      52,    82,    92,   443,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  4921,
    -870,  -870,   337,  5504,  1184,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   349,  4921,  4921,   368,  -870,  4859,  4921,
    4594,  -870,  -870,  -870,  4594,  4594,  -870,  4594,  4594,  4594,
    4594,  4594,  4594,  4594,  4594,  4594,  4594,  4594,  4594,  4594,
    4594,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  5016,   370,
     365,    91,  5016,  -870,  4921,  -870,  -870,  -870,  -870,  5216,
    -870,  5408,  5025,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    4921,  5600,  -870,  -870,  -870,  -870,   367,  -870,  -870,  -870,
     337,   -13,   371,  -870,  -870,  -870,  -870,  -870,  -870,  4921,
    -870,  -870,  -870,  4859,  -870,  -870,  -870,  -870,  -870,  -870,
     373,  5142,  -870,  -870,   374,  -870,   378,  1122,   364,  4859,
     337,    15,  -870,   311,  -870,  -870,  -870,  -870,   -33,  -870,
     337,  -870,  -870,   288,  -870,  -870,  5099,   126,  5099,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,    -8,   372,  1379,   309,   381,  -870,   384,  -870,
    -870,  -870,  4058,  4859,   382,  4594,  4594,  4594,   385,   387,
    4594,   389,   390,   391,   393,   394,   396,   397,   399,   400,
     401,   405,   376,   379,   406,  -870,  -870,   388,  -870,  1184,
    -870,  -870,  -870,  -870,  1236,  -870,  -870,  -870,   365,   412,
    4594,  -870,  5408,  4859,  -870,  1520,   407,  -870,   478,  -870,
     409,  -870,  -870,  -870,  5016,   324,  5016,  -870,  -870,  -870,
    -870,  -870,   375,   410,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   408,
    -870,  -870,   386,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,    68,  -870,   -37,  -870,  -870,
    -870,  -870,   414,  1184,  -870,  -870,   413,  -870,  -870,   337,
     380,   392,  -870,  -870,  1261,   398,   106,  -870,  5636,    59,
     501,   417,  -870,  1184,   424,  5099,  5099,   -17,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   426,   337,  -870,  -870,  -870,  -870,  -870,
     420,   421,   422,  -870,  -870,   427,  5600,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  4594,
    -870,   428,  -870,    53,  -870,  -870,  -870,   453,   429,  -870,
     518,  -870,  -870,  -870,   433,   431,  -870,   440,   441,  -870,
     423,  -870,   337,   297,   407,  4921,  -870,  3494,   446,  -870,
     447,  1261,    68,   407,   437,   438,  -870,  -870,  -870,  -870,
     553,  -870,   407,  -870,  -870,  3776,  -870,  -870,  -870,   413,
    -870,  -870,  -870,  -870,  -870,  -870,   392,  -870,  -870,  -870,
    4921,  4921,  4921,  -870,   337,  5600,  4760,   -33,  -870,  -870,
    -870,  -870,  4760,   554,  -870,   449,  -870,  -870,   455,   456,
    -870,   -33,   407,  1661,  1802,  1943,  -870,   457,  5600,  -870,
    -870,  -870,  5600,  5600,  -870,   450,  5600,  5600,  5600,  5600,
    5600,  5600,  5600,  5600,  5600,  5600,   458,  -870,  -870,  -870,
    -870,  4198,   454,  4921,  -870,  1236,  -870,  4921,  -870,  4594,
    -870,  -870,  -870,   459,  -870,  5600,  -870,   461,   460,  -870,
      45,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   463,  -870,
    -870,    47,  -870,   464,   -33,  -870,  -870,  3776,  -870,  -870,
       8,   451,  -870,  -870,   288,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   987,   364,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,   466,  -870,  -870,  -870,  -870,   467,  5600,
    -870,   469,  5600,  -870,   470,   471,   472,   473,   474,   475,
     477,   479,   480,   482,  -870,   483,  4436,  4893,    45,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  4436,  -870,
     188,  -870,  -870,  -870,   491,  4859,   129,  4532,  4739,  -870,
    -870,  -870,  -870,  -870,  -870,  3776,  2225,  -870,   516,  4760,
    -870,  4921,  -870,    68,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,   481,  3776,
    -870,  -870,   490,  -870,   487,  4760,  -870,  1261,   490,  4760,
    -870,  -870,  -870,   507,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,   622,   623,  -870,  -870,  4788,  -870,
     600,   188,   -13,  4628,  5025,  -870,  -870,  -870,  4436,  -870,
    4628,  -870,  -870,   517,  -870,  4859,  -870,  -870,  3776,  -870,
    -870,    68,  -870,  -870,  -870,  -870,  2930,  3071,  2789,  3212,
    3635,  3353,   407,  -870,  3776,  1261,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,   509,  -870,   511,   512,   513,  -870,
    -870,  -870,   345,  4788,  -870,   600,  -870,  4788,  4628,  -870,
     521,  -870,   378,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,   515,  3917,     8,   490,
     247,  -870,  2366,  -870,  -870,  -870,  2084,  2507,  -870,   345,
    4788,  -870,   350,  -870,  -870,  -870,  3917,  -870,  -870,  -870,
    -870,  -870,    45,  -870,  -870,  -870,   350,  -870,  -870,  -870,
    -870,  2648,   247,  -870
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -870,  -870,  -280,  -870,  -870,   643,  -870,  -870,  -870,  -870,
    -633,   -81,     4,   -26,  -870,  -870,  -870,  -870,    13,  -870,
    -870,  -870,  -870,   -23,  -870,   281,  -870,  -870,   -25,  -870,
    -870,    84,   -19,     0,  -870,  -870,  -870,  -870,   -21,  -870,
    -870,  -206,  -492,   -16,  -114,  -258,   194,    18,  -870,  -870,
    -870,  -870,   201,    -6,  -870,  -870,    -1,  -870,  -870,  -870,
     -71,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -814,
    -870,  -870,  -870,   664,  -870,  -870,  -870,    14,  -104,    37,
     -80,  -870,  -870,  -164,  -236,  -870,  -870,  -870,  -185,  -116,
    -274,  -355,  -870,  -870,   -56,  -870,  -870,  -111,   -67,  -870,
    -870,  -870,  -870,  -870,  -870,  -123,  -542,  -870,  -870,  -870,
    -194,  -870,  -870,  -230,  -870,  -870,    22,   335,  -199,   344,
    -870,   -18,   -75,  -610,  -870,  -132,  -870,  -870,  -870,  -235,
    -870,  -870,  -264,  -870,  -870,  -870,   -98,  -870,   -36,  -711,
    -870,  -870,    96,  -870,  -870,  -870,    24,   -39,     3,    25,
    -870,   -30,   -20,    -4,  -870,   223,   -24,   154,  -870,    10,
     107,  -870,  -870,  -402,  -870,   383,  -870,  -870,  -870,   -85,
    -870,  -870,  -870,  -870,  -870,  -870,    81,   221,   425,  -281,
     411,   415,  -870,  -870,    39,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,
    -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,  -870,    17,
    -115,   124,  -733,  -567,  -652,  -522,  -177,  -870,  -102,  -870,
    -869,  -870,  -870,  -870,  -870,  -870,    -7,  -870,  -870,  -870,
    -870,  -870,  -232,  -836,  -870,  -703,  -870,  -870,  -642,  -870
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -414
static const yytype_int16 yytable[] =
{
     113,   178,   271,    97,   193,   281,   443,   109,    86,   199,
     284,   152,   375,   331,   116,   448,   236,    89,   150,   827,
     709,   455,   748,   288,   901,   152,    30,   180,   107,   110,
     255,   275,   150,   369,   330,   592,   272,   183,   780,   149,
     179,   102,   687,   257,   246,   247,   248,   294,   812,   615,
     464,   718,   321,   447,   198,   476,   477,   692,   693,    30,
     723,   185,   186,   187,   188,   189,   190,   191,   957,   942,
    -322,   259,   878,   264,   947,  -280,   667,   668,   669,   630,
     260,  -324,   332,   729,   603,   152,   322,   969,  -323,   604,
     268,   263,   150,   266,   598,  -322,   894,   631,   275,   448,
     753,   292,   293,   880,   640,   599,   261,   241,   152,   641,
      89,     3,   259,   231,  -200,   265,   270,   290,    -2,   468,
    -327,   260,   110,  -268,  -328,   959,   281,  -322,   971,   269,
     154,   284,   266,   833,   102,   825,   865,   447,  -324,  -268,
     450,   273,  -199,   857,  -296,  -323,   289,   300,   538,   153,
    -296,   152,  -322,   200,  -326,   441,   275,   309,   150,   259,
     264,   272,   266,   887,  -325,   889,   275,   891,   260,   537,
     201,  -324,   518,   281,   699,   152,   670,  -327,   284,   304,
     192,  -328,   150,   310,   202,   588,   233,   590,   203,   288,
     152,   152,   600,   387,   300,   152,   179,   150,   150,   884,
     204,    30,   265,   307,  -309,   824,   388,   638,   639,   525,
    -309,  -326,   367,   -38,   733,   268,   -38,   332,   327,   328,
    -294,  -325,  -323,   274,   333,   900,  -294,   827,  -324,   902,
     152,   463,   618,   463,   259,   205,   619,   150,   290,   880,
     381,   382,  -327,   260,   880,   232,   152,  -328,   -38,   372,
    -280,   -38,   179,   150,   269,   647,  -200,   281,   371,   260,
     525,   288,   284,   206,   110,   152,   273,   373,   880,   261,
     266,  -295,   150,   960,   377,   961,   102,  -295,   207,  -323,
     382,   643,  -308,   729,   962,   449,   208,   275,  -308,   644,
     274,  -299,   272,   385,   259,  -320,  -300,  -299,   434,  -327,
     645,  -320,  -300,   260,  -328,   209,  -326,   729,  -142,   243,
     244,   607,   185,   186,   187,   188,   189,   190,   191,  -321,
     970,   534,  -325,   709,  -145,  -321,  -142,   210,   533,   300,
     211,   321,   306,   262,   308,   361,   813,  -413,  -413,   361,
     212,   524,   213,   260,   291,   288,   268,  -310,   274,   434,
     936,  -311,   214,  -310,   583,  -298,   824,  -311,   274,   215,
     152,  -298,  -312,  -326,   216,   322,   217,   150,  -312,   449,
     709,  -297,   824,   218,   582,   219,  -313,  -297,  -314,  -325,
    -315,    30,  -313,   220,  -314,   179,  -315,   121,   571,   709,
     463,   463,   524,   611,   612,   613,   249,   273,   221,   222,
     223,   224,   225,   226,   227,   523,  -316,   323,  -317,    30,
     184,  -318,  -316,   361,  -317,   361,   253,  -318,    16,    17,
     948,  -278,   384,   334,   386,   951,   267,   338,   339,   382,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,  -319,   589,   -38,   -91,   526,   -38,
    -319,   301,   881,   454,   624,   305,   523,   948,   951,   633,
     967,   623,   835,   465,   466,   374,   367,   909,   625,   302,
     910,   589,   909,   325,   967,   910,   564,   565,   566,   274,
     242,   185,   186,   187,   188,   189,   190,   191,   252,   329,
     364,   361,   363,   361,   379,  -268,   262,   450,  -199,   526,
     391,   436,   438,   535,   557,   536,   594,   558,   539,   560,
     323,   543,   374,   544,   266,   546,   547,   548,   597,   549,
     550,   617,   551,   552,   876,   553,   554,   555,   525,   525,
     525,   556,   559,   573,   585,  -211,   596,    25,   634,   629,
     738,   595,   606,   591,   608,   637,   649,   646,   676,   650,
     651,   682,   746,   654,   604,   675,   678,   679,   540,   541,
     542,   361,   686,   545,   680,   681,   463,   716,   717,   719,
     720,   722,   361,   361,   749,   641,   750,   751,   763,   800,
     757,   152,   323,  -274,   774,   808,   811,   882,   150,   810,
     876,   820,   822,   577,   840,   841,   578,   844,   846,   847,
     848,   849,   850,   851,   266,   852,   854,   853,   855,   690,
     873,   856,   872,   893,   896,   899,   152,   152,   152,    12,
      13,    14,   242,   150,   150,   150,    16,    17,    18,    19,
      20,    21,    22,   905,   163,   907,   908,   941,   919,   943,
     944,   945,   953,   955,   735,   736,   737,    80,   783,   572,
     802,   674,   785,   362,   914,   786,   635,   362,   804,   752,
     524,   524,   524,   830,   636,   787,   323,   796,    98,   152,
     788,   152,   861,   152,   109,   781,   150,   946,   150,   281,
     150,   797,   281,   271,    89,   789,   323,   284,   885,   921,
     920,   525,   954,   793,   562,   794,   795,   801,   361,   571,
     288,   803,   561,   958,   972,   732,   823,   236,   836,   452,
     799,   931,   275,   453,   821,   252,   890,   272,     0,     0,
       0,     0,     0,     0,   523,   523,   523,     0,     0,     0,
     874,   362,   274,   362,   871,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   281,     0,
       0,     0,     0,   284,     0,     0,   259,   199,     0,   281,
       0,     0,     0,     0,     0,   260,     0,   526,   526,   526,
       0,   268,   862,   152,   583,   860,   266,     0,   275,   236,
     150,     0,   666,   272,   862,   275,   863,   868,     0,   858,
     272,   300,   866,   862,   877,     0,   874,   270,   870,     0,
       0,    89,   198,   874,     0,   916,     0,   152,   704,   362,
     269,   362,     0,   795,   150,     0,     0,     0,     0,     0,
       0,     0,   875,   524,     0,     0,   704,   525,     0,     0,
       0,   525,   525,   275,     0,   690,   259,     0,   272,     0,
     583,     0,   266,     0,   268,   260,     0,     0,     0,   323,
       0,   874,     0,     0,   152,   323,   525,     0,     0,   862,
     877,   150,     0,     0,   862,     0,   862,   868,     0,     0,
     915,   300,   866,   913,     0,     0,   917,     0,   918,   362,
       0,   179,   912,   269,     0,     0,     0,   523,     0,     0,
     362,   362,   268,   795,   262,   875,     0,     0,     0,     0,
       0,   837,   577,     0,   274,     0,     0,     0,     0,   152,
       0,     0,     0,   152,   862,     0,   150,     0,     0,     0,
     150,     0,     0,     0,     0,     0,     0,     0,   950,   655,
     526,   179,     0,     0,     0,     0,     0,   949,     0,     0,
       0,   952,     0,   875,   361,     0,   152,     0,   704,     0,
       0,     0,     0,   150,     0,     0,     0,     0,     0,   524,
       0,     0,     0,   524,   524,     0,   323,     0,     0,     0,
     274,     0,     0,     0,   966,     0,     0,   274,     0,     0,
       0,     0,     0,     0,     0,   895,     0,     0,   524,     0,
     311,   312,   313,   314,   315,   316,   317,   739,   740,   374,
       0,     0,   361,     0,     0,     0,     0,     0,     0,     0,
       0,   374,   705,     0,     0,     0,   362,     0,     0,     0,
     374,   291,   274,   523,     0,   274,   704,   523,   523,     0,
     705,   758,   323,     0,     0,   760,   761,     0,     0,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   773,     0,
     704,     0,   523,     0,   798,     0,     0,     0,   323,     0,
       0,     0,   323,     0,     0,     0,   526,     0,   809,     0,
     526,   526,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   374,   374,     0,     0,
       0,   374,     0,   374,     0,   526,     0,     0,     0,   704,
       0,     0,     0,     0,     0,     0,     0,   704,   704,   704,
     704,   704,   704,     0,   741,   704,     0,     0,     0,     0,
      78,   292,   293,     0,     0,   311,   312,   313,   314,   315,
     316,   317,   276,   277,     0,     0,     0,     0,     0,     0,
       0,   374,   842,     0,     0,   845,     0,     0,     0,     0,
       0,     0,   705,     0,     0,     0,     0,     0,   704,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   704,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   276,   277,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     705,     0,     0,     0,     0,     0,     0,     0,     0,   128,
     129,   130,   131,   132,   133,   134,     0,     0,     0,     0,
       0,     0,     0,     0,   705,    78,   292,   293,     0,   564,
     565,   566,   362,     0,     0,     0,   567,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,     0,     0,     0,     0,    16,    17,    18,
      19,    20,    21,    22,   355,   163,     0,     0,     0,     0,
     356,     0,     0,   705,     0,     0,     0,     0,    30,     0,
       0,   705,   705,   705,   705,   705,   705,    78,     0,   705,
     362,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   705,     0,     0,     0,     0,     0,     0,    78,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   705,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,     0,     0,   493,   494,
       0,   495,     0,   496,   497,   498,   499,   500,   501,   502,
       0,   503,   504,   505,   506,   507,   508,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     509,   510,   511,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     512,   513,   514,   515,   516,   517,   518,     0,   519,   520,
     521,     0,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   522,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,     0,     0,   493,
     494,     0,   495,     0,   496,   497,   498,   499,   500,   501,
     502,     0,   503,   504,   505,   506,   507,   508,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   509,   510,   511,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   512,   513,   579,   515,   516,   517,   518,     0,   519,
     520,   521,     0,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   522,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,     0,     0,
     493,   494,     0,   495,     0,   496,   497,   498,   499,   500,
     501,   502,     0,   503,   504,   505,   506,   507,   508,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   509,   510,   511,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   512,   513,   754,   515,   516,   517,   518,     0,
     519,   520,   521,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   522,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,     0,
       0,   493,   494,     0,   495,     0,   496,   497,   498,   499,
     500,   501,   502,     0,   503,   504,   505,   506,   507,   508,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   509,   510,   511,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   512,   513,     0,   515,   516,   517,   518,
       0,   519,   520,   521,   755,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   522,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
       0,     0,   493,   494,     0,   495,     0,   496,   497,   498,
     499,   500,   501,   502,     0,   503,   504,   505,   506,   507,
     508,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   509,   510,   511,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   512,   513,     0,   515,   516,   517,
     518,   756,   519,   520,   521,     0,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   522,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,     0,     0,   493,   494,     0,   495,     0,   496,   497,
     498,   499,   500,   501,   502,     0,   503,   504,   505,   506,
     507,   508,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   509,   510,   511,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   512,   513,   964,   515,   516,
     517,   518,     0,   519,   520,   521,     0,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   522,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,     0,     0,   493,   494,     0,   495,     0,   496,
     497,   498,   499,   500,   501,   502,     0,   503,   504,   505,
     506,   507,   508,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   509,   510,   511,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   879,   513,     0,   515,
     516,   517,   518,     0,   519,   520,   521,     0,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   522,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,     0,     0,   493,   494,     0,   495,     0,
     496,   497,   498,   499,   500,   501,   502,     0,   503,   504,
     505,   506,   507,   508,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   509,   510,   511,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   513,     0,
     515,   516,   517,   518,   963,   519,   520,   521,     0,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   522,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,     0,     0,   493,   494,     0,   495,
       0,   496,   497,   498,   499,   500,   501,   502,     0,   503,
     504,   505,   506,   507,   508,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   509,   510,
     511,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   965,   513,
       0,   515,   516,   517,   518,     0,   519,   520,   521,     0,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     522,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,     0,     0,   493,   494,     0,
     495,     0,   496,   497,   498,   499,   500,   501,   502,     0,
     503,   504,   505,   506,   507,   508,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   509,
     510,   511,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   973,
     513,     0,   515,   516,   517,   518,     0,   519,   520,   521,
       0,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,   522,   469,   470,   471,   472,   473,   474,   475,   692,
     693,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,     0,     0,   493,   494,
       0,   495,     0,   496,   497,   498,   499,   500,   501,   502,
       0,   503,   504,   505,   506,   507,   508,   394,   395,   396,
     397,   398,   399,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
       0,   694,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     929,   695,   930,   923,   697,   924,   699,     0,   725,   726,
     702,     0,   423,   424,   425,   426,   427,   428,   429,   430,
     431,   432,   703,   469,   470,   471,   472,   473,   474,   475,
     692,   693,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,     0,     0,   493,
     494,     0,   495,     0,   496,   497,   498,   499,   500,   501,
     502,     0,   503,   504,   505,   506,   507,   508,   394,   395,
     396,   397,   398,   399,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,     0,   694,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   695,     0,   923,   697,   924,   699,   925,   725,
     726,   702,     0,   423,   424,   425,   426,   427,   428,   429,
     430,   431,   432,   703,   469,   470,   471,   472,   473,   474,
     475,   692,   693,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,     0,     0,
     493,   494,     0,   495,     0,   496,   497,   498,   499,   500,
     501,   502,     0,   503,   504,   505,   506,   507,   508,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,     0,   694,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   695,     0,   923,   697,   924,   699,   928,
     725,   726,   702,     0,   423,   424,   425,   426,   427,   428,
     429,   430,   431,   432,   703,   469,   470,   471,   472,   473,
     474,   475,   692,   693,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,     0,
       0,   493,   494,     0,   495,     0,   496,   497,   498,   499,
     500,   501,   502,     0,   503,   504,   505,   506,   507,   508,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,     0,   694,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   695,     0,   923,   697,   924,   699,
     933,   725,   726,   702,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,   703,   469,   470,   471,   472,
     473,   474,   475,   692,   693,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,   490,   491,   492,
       0,     0,   493,   494,     0,   495,     0,   496,   497,   498,
     499,   500,   501,   502,     0,   503,   504,   505,   506,   507,
     508,   394,   395,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,     0,   694,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   695,     0,   923,   697,   924,
     699,     0,   725,   726,   702,   935,   423,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   703,   469,   470,   471,
     472,   473,   474,   475,   692,   693,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,   490,   491,
     492,     0,     0,   493,   494,     0,   495,     0,   496,   497,
     498,   499,   500,   501,   502,     0,   503,   504,   505,   506,
     507,   508,   394,   395,   396,   397,   398,   399,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,     0,   694,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   695,     0,   696,   697,
     698,   699,     0,   700,   701,   702,     0,   423,   424,   425,
     426,   427,   428,   429,   430,   431,   432,   703,   469,   470,
     471,   472,   473,   474,   475,   692,   693,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,     0,     0,   493,   494,     0,   495,     0,   496,
     497,   498,   499,   500,   501,   502,     0,   503,   504,   505,
     506,   507,   508,   394,   395,   396,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,     0,   694,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   695,     0,   696,
     697,   698,   699,     0,   700,   934,   702,     0,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   703,   469,
     470,   471,   472,   473,   474,   475,   692,   693,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,     0,     0,   493,   494,     0,   495,     0,
     496,   497,   498,   499,   500,   501,   502,     0,   503,   504,
     505,   506,   507,   508,   394,   395,   396,   397,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,     0,   694,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   695,     0,
       0,   697,     0,   699,     0,   725,   726,   702,     0,   423,
     424,   425,   426,   427,   428,   429,   430,   431,   432,   703,
     469,   470,   471,   472,   473,   474,   475,   692,   693,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,     0,     0,   493,   494,     0,   495,
       0,   496,   497,   498,   499,   500,   501,   502,     0,   503,
     504,   505,   506,   507,   508,   394,   395,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,     0,   694,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   695,
       0,     0,   697,     0,   699,     0,   700,     0,   702,     0,
     423,   424,   425,   426,   427,   428,   429,   430,   431,   432,
     703,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
     234,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,   163,     0,     0,     0,    26,     0,     0,     0,
     392,   393,     0,     0,     0,     0,   394,   395,   396,   397,
     398,   399,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   417,     0,   418,   419,     0,   420,   421,   422,
       0,   423,   424,   425,   426,   427,   428,   429,   430,   431,
     432,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,   776,   163,    24,    25,     0,    26,    27,     0,   777,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,   778,   779,
       5,     6,     7,     8,     9,    10,    11,     0,     0,     0,
       0,    78,     0,     0,     0,     0,    12,    13,    14,    15,
       0,     0,     0,    16,    17,    18,    19,    20,    21,    22,
       0,    23,    24,    25,     0,    26,    27,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,     0,    77,     5,
       6,     7,     8,     9,    10,    11,     0,     0,     0,     0,
      78,     0,     0,     0,     0,    12,    13,    14,   234,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,     0,
     163,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,   163,    24,     0,    78,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
     234,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,   163,    24,     0,    78,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   128,   129,   130,   131,   132,   133,   134,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    78,   194,     0,
     195,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   130,   131,   132,   133,   134,   276,
     277,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    78,    30,   311,   312,   313,   314,   315,   316,   317,
     739,   740,     0,     0,    24,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
       0,   128,   129,   130,   131,   132,   133,   134,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,     0,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,     0,
      30,     0,   128,   129,   130,   131,   132,   133,   134,     0,
       0,     0,    78,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   741,     0,     0,
       0,     0,     0,    78,    24,   254,   128,   129,   130,   131,
     132,   133,   134,     0,     0,     0,     0,     0,     0,     0,
     909,     0,     0,   910,     0,     0,     0,     0,     0,     0,
       0,    78,     0,     0,   128,   129,   130,   131,   132,   133,
     134,   194,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,     0,    30,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    78,    30,   128,   129,   130,   131,   132,   133,
     134,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,    78,   254,   128,   129,
     130,   131,   132,   133,   134,     0,     0,     0,     0,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,   355,
     163,     0,     0,     0,    78,   356,     0,     0,     0,     0,
      24,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    78,    16,    17,    18,    19,    20,
      21,    22,   355,   163,     0,     0,     0,  -227,   356,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     292,   293,     0,     0,     0,     0,     0,     0,    78,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   392,   393,     0,     0,     0,     0,
     394,   395,   396,   397,   398,   399,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,     0,     0,     0,     0,     0,     0,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,   292,   293,    12,    13,    14,   234,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,     0,
     163,    24,    25,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   417,     0,   418,   419,
       0,   420,   421,   422,     0,   423,   424,   425,   426,   427,
     428,   429,   430,   431,   432,     0,     0,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,   163,    24,     0,     0,
      26,    27,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
     234,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,   163,    24,     0,     0,    26,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,    15,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,     0,   163,     0,
       0,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   156,   157,   158,   159,   160,   161,   162,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    14,   234,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,     0,   163,     0,     0,     0,    26,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   620,     0,   621,   622,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,     0,
     163,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177
};

static const yytype_int16 yycheck[] =
{
       4,    27,   116,     4,    28,   121,   287,     4,     4,    29,
     121,    15,   244,   198,     4,   289,    97,     4,    15,   730,
     587,   301,   632,   121,   838,    29,    72,    27,     4,     4,
     110,   116,    29,   232,   198,   390,   116,    27,   671,    15,
      27,     4,   584,   110,   100,   101,   102,   122,   690,   451,
     308,   593,   184,   289,    29,    10,    11,    10,    11,    72,
     602,     3,     4,     5,     6,     7,     8,     9,   937,   905,
      72,   110,   805,   112,   910,   121,    23,    24,    25,    20,
     110,    72,   198,   605,   121,    89,   184,   956,    72,   126,
     116,   111,    89,   113,    26,    72,   829,    38,   183,   373,
     642,   134,   135,   806,   121,    37,   110,    97,   112,   126,
      97,     0,   151,    89,   127,   112,   116,   121,     0,   127,
      72,   151,    97,   131,    72,   939,   242,   129,   964,   116,
     129,   242,   152,   743,    97,   127,   778,   373,   129,   131,
     125,   116,   127,   776,   121,   129,   121,   151,   333,    12,
     127,   155,   129,   127,    72,   287,   241,   183,   155,   198,
     199,   241,   182,   815,    72,   817,   251,   819,   198,   333,
     127,    72,   127,   289,   127,   179,   123,   129,   289,   155,
     122,   129,   179,   183,   127,   384,   122,   386,   127,   287,
     194,   195,   124,   273,   198,   199,   183,   194,   195,   809,
     127,    72,   199,   179,   121,   727,   273,   465,   466,   324,
     127,   129,   121,   122,   616,   241,   125,   333,   194,   195,
     121,   129,    72,   116,   199,   835,   127,   938,   129,   839,
     234,   306,   126,   308,   273,   127,   130,   234,   242,   942,
     260,   261,    72,   273,   947,    91,   250,    72,   122,   239,
     121,   125,   239,   250,   241,   535,   127,   373,   234,   289,
     375,   359,   373,   127,   239,   269,   241,   242,   971,   273,
     290,   121,   269,    26,   250,    28,   239,   127,   127,   129,
     300,   513,   121,   805,    37,   289,   127,   372,   127,   521,
     183,   121,   372,   269,   333,   121,   121,   127,   281,   129,
     532,   127,   127,   333,   129,   127,    72,   829,    20,   121,
     122,   443,     3,     4,     5,     6,     7,     8,     9,   121,
     962,   325,    72,   890,    36,   127,    38,   127,   325,   333,
     127,   463,   178,   110,   180,   228,   691,    26,    27,   232,
     127,   324,   127,   373,   121,   443,   372,   121,   241,   332,
     892,   121,   127,   127,   378,   121,   878,   127,   251,   127,
     364,   127,   121,   129,   127,   463,   127,   364,   127,   373,
     937,   121,   894,   127,   378,   127,   121,   127,   121,   129,
     121,    72,   127,   127,   127,   372,   127,     4,   364,   956,
     465,   466,   375,    13,    14,    15,   127,   372,     3,     4,
       5,     6,     7,     8,     9,   324,   121,   184,   121,    72,
      27,   121,   127,   306,   127,   308,   121,   127,    26,    27,
     912,   121,   268,   200,   270,   917,   129,   204,   205,   449,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   121,   121,   122,   122,   324,   125,
     127,   122,   807,   299,   458,    12,   375,   949,   950,   460,
     952,   458,   743,   309,   310,   242,   121,   122,   458,   130,
     125,   121,   122,   124,   966,   125,    23,    24,    25,   372,
      97,     3,     4,     5,     6,     7,     8,     9,   105,   121,
     125,   384,   122,   386,   127,   131,   273,   125,   127,   375,
     127,   127,   124,   122,   128,   121,   131,   128,   126,   121,
     287,   126,   289,   126,   534,   126,   126,   126,   132,   126,
     126,   123,   126,   126,   798,   126,   126,   126,   643,   644,
     645,   126,   126,   121,   125,   128,   128,    36,   121,   458,
     625,   131,   128,   389,   131,   121,   126,   121,    30,   128,
     128,   128,   627,   126,   126,   126,   123,   126,   335,   336,
     337,   454,   582,   340,   124,   124,   641,   121,   121,   132,
     132,    18,   465,   466,    20,   126,   121,   121,   128,   125,
     123,   585,   359,   132,   126,   126,   126,    71,   585,   128,
     864,   128,   128,   370,   128,   128,   373,   128,   128,   128,
     128,   128,   128,   128,   624,   128,   126,   128,   126,   585,
     795,   128,   121,   132,   124,   128,   620,   621,   622,    19,
      20,    21,   239,   620,   621,   622,    26,    27,    28,    29,
      30,    31,    32,   126,    34,    13,    13,   128,   121,   128,
     128,   128,   121,   128,   620,   621,   622,     4,   671,   368,
     675,   567,   671,   228,   860,   671,   462,   232,   679,   641,
     643,   644,   645,   734,   463,   671,   443,   671,     4,   673,
     671,   675,   776,   677,   671,   671,   673,   909,   675,   795,
     677,   671,   798,   797,   671,   671,   463,   798,   811,   883,
     875,   806,   922,   671,   359,   671,   671,   673,   591,   675,
     798,   677,   358,   938,   968,   609,   724,   788,   744,   298,
     671,   888,   797,   298,   721,   332,   818,   797,    -1,    -1,
      -1,    -1,    -1,    -1,   643,   644,   645,    -1,    -1,    -1,
     797,   306,   625,   308,   790,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   864,    -1,
      -1,    -1,    -1,   864,    -1,    -1,   795,   777,    -1,   875,
      -1,    -1,    -1,    -1,    -1,   795,    -1,   643,   644,   645,
      -1,   797,   776,   777,   798,   776,   796,    -1,   863,   860,
     777,    -1,   559,   863,   788,   870,   776,   788,    -1,   776,
     870,   795,   788,   797,   798,    -1,   863,   797,   788,    -1,
      -1,   788,   777,   870,    -1,   861,    -1,   811,   587,   384,
     797,   386,    -1,   788,   811,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   797,   806,    -1,    -1,   605,   942,    -1,    -1,
      -1,   946,   947,   918,    -1,   811,   875,    -1,   918,    -1,
     864,    -1,   862,    -1,   870,   875,    -1,    -1,    -1,   626,
      -1,   918,    -1,    -1,   858,   632,   971,    -1,    -1,   863,
     864,   858,    -1,    -1,   868,    -1,   870,   868,    -1,    -1,
     860,   875,   868,   860,    -1,    -1,   863,    -1,   868,   454,
      -1,   868,   858,   870,    -1,    -1,    -1,   806,    -1,    -1,
     465,   466,   918,   868,   671,   870,    -1,    -1,    -1,    -1,
      -1,   747,   679,    -1,   797,    -1,    -1,    -1,    -1,   913,
      -1,    -1,    -1,   917,   918,    -1,   913,    -1,    -1,    -1,
     917,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   915,   546,
     806,   918,    -1,    -1,    -1,    -1,    -1,   913,    -1,    -1,
      -1,   917,    -1,   918,   837,    -1,   950,    -1,   727,    -1,
      -1,    -1,    -1,   950,    -1,    -1,    -1,    -1,    -1,   942,
      -1,    -1,    -1,   946,   947,    -1,   743,    -1,    -1,    -1,
     863,    -1,    -1,    -1,   950,    -1,    -1,   870,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   831,    -1,    -1,   971,    -1,
       3,     4,     5,     6,     7,     8,     9,    10,    11,   776,
      -1,    -1,   895,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   788,   587,    -1,    -1,    -1,   591,    -1,    -1,    -1,
     797,   798,   915,   942,    -1,   918,   805,   946,   947,    -1,
     605,   648,   809,    -1,    -1,   652,   653,    -1,    -1,   656,
     657,   658,   659,   660,   661,   662,   663,   664,   665,    -1,
     829,    -1,   971,    -1,   671,    -1,    -1,    -1,   835,    -1,
      -1,    -1,   839,    -1,    -1,    -1,   942,    -1,   685,    -1,
     946,   947,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,   863,   864,    -1,    -1,
      -1,   868,    -1,   870,    -1,   971,    -1,    -1,    -1,   878,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   886,   887,   888,
     889,   890,   891,    -1,   127,   894,    -1,    -1,    -1,    -1,
     133,   134,   135,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   918,   759,    -1,    -1,   762,    -1,    -1,    -1,    -1,
      -1,    -1,   727,    -1,    -1,    -1,    -1,    -1,   937,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   956,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     805,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   829,   133,   134,   135,    -1,    23,
      24,    25,   837,    -1,    -1,    -1,    30,    -1,    -1,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    -1,    -1,    -1,    -1,
      39,    -1,    -1,   878,    -1,    -1,    -1,    -1,    72,    -1,
      -1,   886,   887,   888,   889,   890,   891,   133,    -1,   894,
     895,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   937,    -1,    -1,    -1,    -1,    -1,    -1,   133,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   956,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,   129,   130,
     131,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,   129,
     130,   131,    -1,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
     129,   130,   131,    -1,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   121,   122,    -1,   124,   125,   126,   127,
      -1,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,    -1,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,
     126,   127,    -1,   129,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,
     125,   126,   127,    -1,   129,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
      -1,   124,   125,   126,   127,    -1,   129,   130,   131,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,    -1,   124,   125,   126,   127,    -1,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,   123,   124,   125,   126,   127,    -1,   129,   130,
     131,    -1,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    -1,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,    -1,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   122,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,    -1,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,   124,   125,   126,
     127,    -1,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,   125,
     126,   127,    -1,   129,   130,   131,    -1,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,   130,   131,    -1,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
      -1,   125,    -1,   127,    -1,   129,   130,   131,    -1,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,   125,    -1,   127,    -1,   129,    -1,   131,    -1,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,    -1,
      42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    -1,   126,   127,    -1,   129,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,   133,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    -1,    38,    39,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,    -1,   121,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
     133,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,   133,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    -1,   133,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     3,     4,     5,     6,     7,     8,     9,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   133,    38,    -1,
      40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    72,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    -1,    -1,    35,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   133,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      72,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,   133,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   127,    -1,    -1,
      -1,    -1,    -1,   133,    35,    36,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,   125,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   133,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,   133,    72,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,   133,    36,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    -1,    -1,   133,    39,    -1,    -1,    -1,    -1,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,   133,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    -1,    -1,   121,    39,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     134,   135,    -1,    -1,    -1,    -1,    -1,    -1,   133,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    42,    43,    -1,    -1,    -1,    -1,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   134,   135,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   124,    -1,   126,   127,
      -1,   129,   130,   131,    -1,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    -1,
      -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    -1,    38,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    -1,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   145,   146,     0,   147,     3,     4,     5,     6,     7,
       8,     9,    19,    20,    21,    22,    26,    27,    28,    29,
      30,    31,    32,    34,    35,    36,    38,    39,    40,    41,
      72,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   121,   133,   148,
     149,   150,   151,   153,   154,   155,   156,   157,   159,   162,
     176,   177,   179,   187,   188,   197,   199,   200,   217,   218,
     219,   220,   223,   224,   227,   233,   260,   290,   291,   292,
     293,   295,   296,   297,   299,   300,   303,   304,   305,   306,
     307,   309,   310,   313,   320,   321,   322,   328,     3,     4,
       5,     6,     7,     8,     9,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   290,
     292,   293,   297,    12,   129,   314,     3,     4,     5,     6,
       7,     8,     9,    34,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   157,   162,
     177,   292,   297,   303,   309,     3,     4,     5,     6,     7,
       8,     9,   122,   300,    38,    40,   198,   290,   293,   296,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,     3,     4,     5,     6,     7,     8,     9,   301,   158,
     161,   290,   301,   122,    22,   149,   155,   156,   184,   200,
     217,   303,   309,   121,   122,   238,   238,   238,   238,   127,
     162,   303,   309,   121,    36,   224,   241,   242,   245,   291,
     295,   297,   299,   296,   291,   292,   296,   129,   157,   162,
     177,   188,   224,   293,   304,   313,    10,    11,   228,   230,
     232,   233,   234,   239,   241,   261,   269,   272,   280,   293,
     297,   299,   134,   135,   266,   323,   324,   325,   327,   311,
     297,   122,   130,   201,   290,    12,   301,   290,   301,   157,
     177,     3,     4,     5,     6,     7,     8,     9,   192,   193,
     196,   269,   280,   299,   376,   124,   152,   290,   290,   121,
     227,   232,   233,   293,   299,   330,   333,   334,   299,   299,
     338,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,    33,    39,   262,   265,   266,
     302,   304,   322,   122,   125,   169,   170,   121,   160,   262,
     178,   290,   303,   293,   299,   376,   225,   290,   294,   127,
     243,   296,   296,   298,   301,   290,   301,   224,   242,   312,
     229,   127,    42,    43,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,   124,   126,   127,
     129,   130,   131,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   352,   353,   235,   127,   263,   124,   257,
     258,   269,   278,   323,   282,   283,   284,   228,   234,   297,
     125,   326,   324,   325,   301,   146,   202,   204,   205,   207,
     209,   189,   191,   266,   189,   301,   301,   190,   127,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    29,    30,    32,    34,    35,    36,    37,
      38,    39,    40,    42,    43,    44,    45,    46,    47,    71,
      72,    73,   121,   122,   123,   124,   125,   126,   127,   129,
     130,   131,   143,   320,   353,   354,   355,   378,   379,   380,
     381,   382,   383,   292,   297,   122,   121,   227,   232,   126,
     299,   299,   299,   126,   126,   299,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   128,   128,   126,
     121,   263,   261,   163,    23,    24,    25,    30,   171,   172,
     175,   290,   169,   121,   180,   181,   182,   299,   299,   123,
     250,   251,   297,   300,   246,   125,   247,   362,   262,   121,
     262,   301,   235,   231,   131,   131,   128,   132,    26,    37,
     124,   236,   240,   121,   126,   259,   128,   269,   131,   285,
     286,    13,    14,    15,   281,   307,   308,   123,   126,   130,
      19,    21,    22,   292,   297,   303,   315,   316,   319,   320,
      20,    38,   212,   200,   121,   190,   196,   121,   189,   189,
     121,   126,   194,   376,   376,   376,   121,   146,   329,   126,
     128,   128,   335,   337,   126,   309,   341,   343,   345,   347,
     342,   344,   346,   348,   349,   350,   299,    23,    24,    25,
     123,   164,   165,   174,   175,   126,    30,   173,   123,   126,
     124,   124,   128,   252,   254,   255,   296,   250,   248,   249,
     290,   244,    10,    11,    72,   122,   124,   125,   126,   127,
     129,   130,   131,   143,   321,   322,   353,   354,   355,   357,
     364,   365,   366,   368,   370,   374,   121,   121,   250,   132,
     132,   237,    18,   250,   264,   129,   130,   356,   357,   359,
     270,   287,   286,   307,   203,   290,   290,   290,   313,    10,
      11,   127,   267,   271,   279,   280,   266,   317,   267,    20,
     121,   121,   191,   250,   123,   132,   128,   123,   309,   331,
     309,   309,   339,   128,   309,   309,   309,   309,   309,   309,
     309,   309,   309,   309,   126,   351,    33,    41,   120,   121,
     154,   156,   166,   167,   168,   176,   187,   197,   200,   221,
     222,   223,   242,   260,   290,   293,   297,   303,   309,   328,
     125,   290,   172,   290,   182,   183,   377,   226,   126,   309,
     128,   126,   382,   235,   372,   373,   375,   371,   367,   369,
     128,   370,   128,   265,   359,   127,   273,   283,   288,   289,
     204,   318,   206,   267,   277,   323,   282,   301,   208,   210,
     128,   128,   309,   336,   128,   309,   128,   128,   128,   128,
     128,   128,   128,   128,   126,   126,   128,   154,   162,   185,
     200,   222,   297,   303,   309,   382,   156,   167,   200,   221,
     303,   238,   121,   232,   242,   293,   234,   297,   356,   121,
     379,   235,    71,   253,   267,   249,   358,   358,   363,   358,
     362,   358,   274,   132,   356,   301,   124,   213,   214,   128,
     267,   213,   267,   195,   332,   126,   340,    13,    13,   122,
     125,   186,   290,   162,   185,   303,   238,   162,   303,   121,
     232,   254,   256,   124,   126,   128,   359,   360,   128,   121,
     123,   360,   361,   128,   130,   132,   250,   215,   268,   211,
     276,   128,   377,   128,   128,   128,   376,   377,   186,   290,
     162,   186,   290,   121,   257,   128,   216,   364,   273,   213,
      26,    28,    37,   128,   123,   121,   290,   186,   275,   364,
     382,   377,   276,   121
};

#define yyerrok                (yyerrstatus = 0)
#define yyclearin        (yychar = YYEMPTY)
#define YYEMPTY                (-2)
#define YYEOF                0

#define YYACCEPT        goto yyacceptlab
#define YYABORT                goto yyabortlab
#define YYERROR                goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL                goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                        \
do                                                                \
  if (yychar == YYEMPTY && yylen == 1)                                \
    {                                                                \
      yychar = (Token);                                                \
      yylval = (Value);                                                \
      yytoken = YYTRANSLATE (yychar);                                \
      YYPOPSTACK (1);                                                \
      goto yybackup;                                                \
    }                                                                \
  else                                                                \
    {                                                                \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                        \
    }                                                                \
while (YYID (0))


#define YYTERROR        1
#define YYERRCODE        256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                        \
      if (YYID (N))                                                    \
        {                                                                \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;        \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;                \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;        \
        }                                                                \
      else                                                                \
        {                                                                \
          (Current).first_line   = (Current).last_line   =                \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =                \
            YYRHSLOC (Rhs, 0).last_column;                                \
        }                                                                \
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)                        \
     fprintf (File, "%d.%d-%d.%d",                        \
              (Loc).first_line, (Loc).first_column,        \
              (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                                \
  if (yydebug)                                        \
    YYFPRINTF Args;                                \
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                          \
do {                                                                          \
  if (yydebug)                                                                  \
    {                                                                          \
      YYFPRINTF (stderr, "%s ", Title);                                          \
      yy_symbol_print (stderr,                                                  \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                                  \
    }                                                                          \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
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

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                                \
do {                                                                \
  if (yydebug)                                                        \
    yy_stack_print ((Bottom), (Top));                                \
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)                \
do {                                        \
  if (yydebug)                                \
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef        YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
         constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
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

      yyarg[0] = yytname[yytype];
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
            yyarg[yycount++] = yytname[yyx];
            yysize1 = yysize + yytnamerr (0, yytname[yyx]);
            yysize_overflow |= (yysize1 < yysize);
            yysize = yysize1;
            yyfmt = yystpcpy (yyfmt, yyprefix);
            yyprefix = yyor;
          }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
        return YYSIZE_MAXIMUM;

      if (yyresult)
        {
          /* Avoid sprintf, as that infringes on the user's name space.
             Don't have undefined behavior even if the translation
             produced a string with the wrong number of "%s"s.  */
          char *yyp = yyresult;
          int yyi = 0;
          while ((*yyp = *yyf) != '\0')
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
        }
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
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

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 1514 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 1515 "vtkParse.y"
    { popNamespace(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1537 "vtkParse.y"
    { pushType(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1538 "vtkParse.y"
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

  case 38:

/* Line 1455 of yacc.c  */
#line 1551 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].integer)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1553 "vtkParse.y"
    { start_class(NULL, (yyvsp[(1) - (1)].integer)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1557 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1558 "vtkParse.y"
    { (yyval.integer) = 1; }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1559 "vtkParse.y"
    { (yyval.integer) = 2; }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1563 "vtkParse.y"
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 1575 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1576 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1577 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1603 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1617 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(1) - (1)].str), access_level, 0); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1619 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(3) - (3)].str), (yyvsp[(2) - (3)].integer), 1); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1621 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].integer)); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1624 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1625 "vtkParse.y"
    { (yyval.integer) = 1; }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1628 "vtkParse.y"
    { (yyval.integer) = access_level; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1632 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PUBLIC; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1633 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PRIVATE; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1634 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PROTECTED; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
    { pushType(); start_enum((yyvsp[(1) - (2)].str)); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1651 "vtkParse.y"
    {
      popType();
      clearTypeId();
      if ((yyvsp[(1) - (5)].str) != NULL)
        {
        setTypeId((yyvsp[(1) - (5)].str));
        setTypeBase(guess_id_type((yyvsp[(1) - (5)].str)));
        }
      end_enum();
    }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1663 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (2)].str); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1664 "vtkParse.y"
    { (yyval.str) = NULL; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1675 "vtkParse.y"
    { add_enum((yyvsp[(1) - (1)].str), NULL); }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1676 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1677 "vtkParse.y"
    { chopSig(); add_enum((yyvsp[(1) - (4)].str), copySig()); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1730 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1731 "vtkParse.y"
    { postSig(")"); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 1732 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; popFunction(); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1736 "vtkParse.y"
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (yyvsp[(1) - (1)].integer), getSig());

      if (getVarName())
        {
        item->Name = getVarName();
        }

      if (item->Class == NULL)
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

  case 125:

/* Line 1455 of yacc.c  */
#line 1769 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1773 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (2)].str); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1775 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1777 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1779 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1781 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1784 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1792 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1794 "vtkParse.y"
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1802 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1813 "vtkParse.y"
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1817 "vtkParse.y"
    { markSig(); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1819 "vtkParse.y"
    { add_template_parameter(getType(), (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1821 "vtkParse.y"
    { markSig(); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1823 "vtkParse.y"
    { add_template_parameter(0, (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1825 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1826 "vtkParse.y"
    { postSig("class"); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1828 "vtkParse.y"
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (yyvsp[(5) - (5)].integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1839 "vtkParse.y"
    { postSig("class "); }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1840 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1846 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 1848 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1865 "vtkParse.y"
    { output_function(); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1866 "vtkParse.y"
    { output_function(); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1867 "vtkParse.y"
    { reject_function(); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 1868 "vtkParse.y"
    { reject_function(); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1884 "vtkParse.y"
    { output_function(); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1901 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1905 "vtkParse.y"
    { postSig(")"); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1907 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1918 "vtkParse.y"
    { (yyval.str) = copySig(); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1921 "vtkParse.y"
    { postSig(")"); }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1922 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1932 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1941 "vtkParse.y"
    { chopSig(); (yyval.str) = vtkstrcat(copySig(), (yyvsp[(2) - (2)].str)); postSig((yyvsp[(2) - (2)].str)); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1944 "vtkParse.y"
    { markSig(); postSig("operator "); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1948 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1960 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1960 "vtkParse.y"
    { chopSig(); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1961 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1963 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1975 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1979 "vtkParse.y"
    { postSig(")"); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1991 "vtkParse.y"
    { closeSig(); }
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1992 "vtkParse.y"
    { openSig(); }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1993 "vtkParse.y"
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
      currentFunction->Name = (yyvsp[(1) - (5)].str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 2010 "vtkParse.y"
    { pushType(); postSig("("); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 2011 "vtkParse.y"
    { popType(); postSig(")"); }
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 2028 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2031 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2032 "vtkParse.y"
    { clearType(); clearTypeId(); postSig(", "); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2035 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 2038 "vtkParse.y"
    { markSig(); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2040 "vtkParse.y"
    {
      ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(param);

      handle_complex_type(param, getType(), (yyvsp[(3) - (3)].integer), copySig());
      add_legacy_parameter(currentFunction, param);

      if (getVarName())
        {
        param->Name = getVarName();
        }

      vtkParse_AddParameterToFunction(currentFunction, param);
    }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2055 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = getVarValue();
        }
    }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 2064 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 2068 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 2069 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 2080 "vtkParse.y"
    {
      unsigned int type = getType();
      ValueInfo *var = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(var);
      var->ItemType = VTK_VARIABLE_INFO;
      var->Access = access_level;

      handle_complex_type(var, type, (yyvsp[(1) - (2)].integer), getSig());

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

  case 230:

/* Line 1455 of yacc.c  */
#line 2142 "vtkParse.y"
    { postSig(", "); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2148 "vtkParse.y"
    { setTypePtr(0); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2149 "vtkParse.y"
    { setTypePtr((yyvsp[(1) - (1)].integer)); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2153 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 2154 "vtkParse.y"
    { postSig(")"); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2156 "vtkParse.y"
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer));
      if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        (yyval.integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_ARRAY)
        {
        (yyval.integer) = add_indirection_to_array(parens);
        }
    }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2173 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 2174 "vtkParse.y"
    { postSig(")"); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2176 "vtkParse.y"
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer));
      if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        (yyval.integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_ARRAY)
        {
        (yyval.integer) = add_indirection_to_array(parens);
        }
    }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2192 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2193 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2195 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2199 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2201 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2204 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2205 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2206 "vtkParse.y"
    { postSig(")"); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 2207 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 2211 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 2215 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2221 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2226 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 2229 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 2233 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2234 "vtkParse.y"
    { setVarName((yyvsp[(1) - (3)].str)); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 2242 "vtkParse.y"
    { clearArray(); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2246 "vtkParse.y"
    { clearArray(); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2253 "vtkParse.y"
    { postSig("["); }
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 2253 "vtkParse.y"
    { postSig("]"); }
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 2256 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 2257 "vtkParse.y"
    { markSig(); }
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 2257 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2273 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2275 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2277 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2281 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2283 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2285 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2287 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2288 "vtkParse.y"
    { postSig("template "); }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2290 "vtkParse.y"
    { (yyval.str) = vtkstrcat4((yyvsp[(1) - (5)].str), "template ", (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2293 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2296 "vtkParse.y"
    { (yyval.str) = "::"; postSig((yyval.str)); }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2299 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2301 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = copySig(); clearTypeId();
    }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2314 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2315 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2316 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2317 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2318 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2319 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2320 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2321 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2322 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2323 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2324 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2325 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2326 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2327 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2328 "vtkParse.y"
    { (yyval.str) = "size_t"; postSig((yyval.str)); }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2329 "vtkParse.y"
    { (yyval.str) = "ssize_t"; postSig((yyval.str)); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2330 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; postSig((yyval.str)); }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2331 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; postSig((yyval.str)); }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2332 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; postSig((yyval.str)); }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2333 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; postSig((yyval.str)); }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2334 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; postSig((yyval.str)); }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2335 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; postSig((yyval.str)); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2336 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; postSig((yyval.str)); }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2337 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; postSig((yyval.str)); }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2338 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; postSig((yyval.str)); }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2339 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; postSig((yyval.str)); }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 2340 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; postSig((yyval.str)); }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 2341 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; postSig((yyval.str)); }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2367 "vtkParse.y"
    { setTypeBase(buildTypeBase(getType(), (yyvsp[(1) - (1)].integer))); }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2368 "vtkParse.y"
    { setTypeMod(VTK_PARSE_TYPEDEF); }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2369 "vtkParse.y"
    { setTypeMod(VTK_PARSE_FRIEND); }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2376 "vtkParse.y"
    { setTypeMod((yyvsp[(1) - (1)].integer)); }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2377 "vtkParse.y"
    { setTypeMod((yyvsp[(1) - (1)].integer)); }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2378 "vtkParse.y"
    { setTypeMod((yyvsp[(1) - (1)].integer)); }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2381 "vtkParse.y"
    { postSig("mutable "); (yyval.integer) = VTK_PARSE_MUTABLE; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2382 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2383 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2384 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2387 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2388 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2389 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2392 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2393 "vtkParse.y"
    { postSig("volatile "); (yyval.integer) = VTK_PARSE_VOLATILE; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2398 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2409 "vtkParse.y"
    { setTypeBase((yyvsp[(1) - (1)].integer)); }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2411 "vtkParse.y"
    { setTypeBase((yyvsp[(2) - (2)].integer)); }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 2416 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 2417 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = guess_id_type((yyvsp[(3) - (3)].str)); }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 2419 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 2421 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 2423 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 2425 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 2431 "vtkParse.y"
    { setTypeBase((yyvsp[(1) - (1)].integer)); }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 2433 "vtkParse.y"
    { setTypeBase((yyvsp[(2) - (2)].integer)); }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 2439 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 2441 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 2443 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 2445 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 2447 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 2450 "vtkParse.y"
    { setTypeId(""); }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 2454 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 2455 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 2456 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 2457 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 2458 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 2459 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 2460 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 2461 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 2462 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 2463 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 2464 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2465 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2466 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 2467 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 2468 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 2469 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2470 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2471 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2472 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2473 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2474 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 2477 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID; }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2478 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL; }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2479 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2480 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2481 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2482 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2483 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2484 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2485 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 2486 "vtkParse.y"
    { postSig("signed "); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 2487 "vtkParse.y"
    { postSig("unsigned "); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2509 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2512 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2515 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 2516 "vtkParse.y"
    { postSig("*"); }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 2517 "vtkParse.y"
    {
      if (((yyvsp[(3) - (3)].integer) & VTK_PARSE_CONST) != 0)
        {
        (yyval.integer) = VTK_PARSE_CONST_POINTER;
        }
      if (((yyvsp[(3) - (3)].integer) & VTK_PARSE_VOLATILE) != 0)
        {
        (yyval.integer) = VTK_PARSE_BAD_INDIRECT;
        }
    }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2533 "vtkParse.y"
    {
      unsigned int n;
      n = (((yyvsp[(1) - (2)].integer) << 2) | (yyvsp[(2) - (2)].integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
        {
        n = VTK_PARSE_BAD_INDIRECT;
        }
      (yyval.integer) = n;
    }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 2549 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2550 "vtkParse.y"
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2559 "vtkParse.y"
    {postSig("Get");}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2560 "vtkParse.y"
    {markSig();}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2560 "vtkParse.y"
    {swapSig();}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2561 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 2569 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2570 "vtkParse.y"
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 2579 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2580 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 2588 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 2588 "vtkParse.y"
    {closeSig();}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 2590 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (10)].str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 2621 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 2622 "vtkParse.y"
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 2631 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 2632 "vtkParse.y"
    {markSig();}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 2632 "vtkParse.y"
    {swapSig();}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 2633 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 2642 "vtkParse.y"
    {
   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((yyvsp[(3) - (6)].str), "On");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((yyvsp[(3) - (6)].str), "Off");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 2659 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 2660 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 2);
   }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2664 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 2665 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 2);
   }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 2669 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 2670 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 3);
   }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2674 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2675 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 3);
   }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2679 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2680 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 4);
   }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2684 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2685 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 4);
   }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2689 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2690 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 6);
   }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2694 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2695 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 6);
   }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2699 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2701 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();
   currentFunction->Macro = "vtkSetVectorMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (9)].str));
   currentFunction->Signature =
     vtkstrcat7("void ", currentFunction->Name, "(", typeText,
                " a[", (yyvsp[(8) - (9)].str), "]);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_POINTER | getType()),
                 getTypeId(), (int)strtol((yyvsp[(8) - (9)].str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2716 "vtkParse.y"
    {startSig();}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2718 "vtkParse.y"
    {
   chopSig();
   currentFunction->Macro = "vtkGetVectorMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (9)].str));
   postSig(" *");
   postSig(currentFunction->Name);
   postSig("();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_POINTER | getType()),
              getTypeId(), (int)strtol((yyvsp[(8) - (9)].str), NULL, 0));
   output_function();
   }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2731 "vtkParse.y"
    {
     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (4)].str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2768 "vtkParse.y"
    {
     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (4)].str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2806 "vtkParse.y"
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
   currentFunction->Signature = vtkstrcat((yyvsp[(3) - (7)].str), " *NewInstance();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (yyvsp[(3) - (7)].str), 0);
   output_function();

   for (i = 0; i < NumberOfConcreteClasses; i++)
     {
     if (strcmp(currentClass->Name, ConcreteClasses[i]) == 0)
       {
       is_concrete = 1;
       break;
       }
     }

   if ( is_concrete )
     {
     currentFunction->Macro = "vtkTypeMacro";
     currentFunction->Name = "SafeDownCast";
     currentFunction->Signature =
       vtkstrcat((yyvsp[(3) - (7)].str), " *SafeDownCast(vtkObject* o);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
     set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
                (yyvsp[(3) - (7)].str), 0);
     output_function();
     }
   }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2865 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2866 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2867 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2868 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2869 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2870 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2871 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2872 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2876 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2877 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2878 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2879 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2880 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2881 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2882 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2883 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2884 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2885 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2886 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2887 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2888 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2889 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2890 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2891 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2892 "vtkParse.y"
    { (yyval.str) = ".*"; }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2893 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2894 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2895 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2896 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2897 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2898 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2899 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2900 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2901 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2902 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2903 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2904 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 2905 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 2906 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 2907 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 2908 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 2909 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 2910 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 2913 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 2914 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 2915 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 2916 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 2917 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 2918 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 2919 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 2920 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 2921 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 2922 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 2923 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 2924 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 2925 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 2926 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 2927 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 2928 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 2929 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 2930 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 2931 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 2932 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 2933 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 2934 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 2958 "vtkParse.y"
    {
      if ((((yyvsp[(1) - (1)].str))[0] == '+' || ((yyvsp[(1) - (1)].str))[0] == '-' ||
           ((yyvsp[(1) - (1)].str))[0] == '*' || ((yyvsp[(1) - (1)].str))[0] == '&') &&
          ((yyvsp[(1) - (1)].str))[1] == '\0')
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
        postSig((yyvsp[(1) - (1)].str));
        if ((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z') ||
            (c1 >= '0' && c1 <= '9') || c1 == '_' || c1 == '\'' ||
            c1 == '\"' || c1 == ')' || c1 == ']')
          {
          postSig(" ");
          }
        }
       else
        {
        postSig((yyvsp[(1) - (1)].str));
        postSig(" ");
        }
    }
    break;

  case 541:

/* Line 1455 of yacc.c  */
#line 2988 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 2988 "vtkParse.y"
    { postSig("."); }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 2989 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 2990 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 2991 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 2994 "vtkParse.y"
    {
      int c1 = 0;
      size_t l;
      const char *cp;
      chopSig();
      cp = getSig();
      l = getSigLength();
      if (l != 0) { c1 = cp[l-1]; }
      while (((c1 >= 'A' && c1 <= 'Z') || (c1 >= 'a' && c1 <= 'z') ||
              (c1 >= '0' && c1 <= '9') || c1 == '_') && l != 0)
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
    }
    break;

  case 551:

/* Line 1455 of yacc.c  */
#line 3020 "vtkParse.y"
    { postSig("< "); }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 3021 "vtkParse.y"
    { postSig("> "); }
    break;

  case 554:

/* Line 1455 of yacc.c  */
#line 3024 "vtkParse.y"
    { postSig("= "); }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 3025 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 557:

/* Line 1455 of yacc.c  */
#line 3028 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 565:

/* Line 1455 of yacc.c  */
#line 3042 "vtkParse.y"
    { postSig("= "); }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 3043 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 3047 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 3053 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 3060 "vtkParse.y"
    { postSig("["); }
    break;

  case 570:

/* Line 1455 of yacc.c  */
#line 3061 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 571:

/* Line 1455 of yacc.c  */
#line 3064 "vtkParse.y"
    { postSig("("); }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 3065 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 3066 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 3067 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 3068 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 3069 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 3072 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 3072 "vtkParse.y"
    { postSig("} "); }
    break;



/* Line 1455 of yacc.c  */
#line 7995 "vtkParse.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
        YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
        if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
          {
            YYSIZE_T yyalloc = 2 * yysize;
            if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
              yyalloc = YYSTACK_ALLOC_MAXIMUM;
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yyalloc);
            if (yymsg)
              yymsg_alloc = yyalloc;
            else
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
              }
          }

        if (0 < yysize && yysize <= yymsg_alloc)
          {
            (void) yysyntax_error (yymsg, yystate, yychar);
            yyerror (yymsg);
          }
        else
          {
            yyerror (YY_("syntax error"));
            if (yysize != 0)
              goto yyexhaustedlab;
          }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;        /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
                 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 3111 "vtkParse.y"

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

/* reject the class */
void reject_class(const char *classname, int is_struct_or_union)
{
  static ClassInfo static_class;

  pushClass();
  currentClass = &static_class;
  currentClass->Name = classname;
  vtkParse_InitClass(currentClass);

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
void add_base_class(ClassInfo *cls, const char *name, int al, int virt)
{
  if (cls && al == VTK_ACCESS_PUBLIC)
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
void start_enum(const char *name)
{
  EnumInfo *item;

  currentEnumName = "int";
  currentEnumValue = NULL;
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

  add_constant(name, currentEnumValue, VTK_PARSE_INT, currentEnumName, 2);
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

  if (valstring[0] < '0' || valstring[0] > '9')
    {
    k = 0;
    while ((valstring[k] >= '0' && valstring[k] <= '9') ||
           (valstring[k] >= 'a' && valstring[k] <= 'z') ||
           (valstring[k] >= 'A' && valstring[k] <= 'Z') ||
           valstring[k] == '_') { k++; }

    if (valstring[k] == '\0')
      {
      is_name = 1;
      }
    }

  if (strcmp(valstring, "true") == 0 || strcmp(valstring, "false") == 0)
    {
    return VTK_PARSE_BOOL;
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
  con->Class = type_class(type, typeclass);

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
  param->Class = type_class(type, typeclass);

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
  val->Class = type_class(type, typeclass);

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
  func->ReturnClass = val->Class;
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

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
    /* the current type becomes the function return type */
    func = getFunction();
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(func->ReturnValue);
    func->ReturnValue->Type = datatype;
    func->ReturnValue->Class = type_class(datatype, getTypeId());
    if (funcSig) { func->Signature = vtkstrdup(funcSig); }
    val->Function = func;

#ifndef VTK_PARSE_LEGACY_REMOVE
    func->ReturnType = func->ReturnValue->Type;
    func->ReturnClass = func->ReturnValue->Class;
#endif

    /* the val type is whatever was inside the parentheses */
    clearTypeId();
    setTypeId(func->Class ? "method" : "function");
    datatype = (extra & VTK_PARSE_UNQUALIFIED_TYPE);
    }
  else if ((extra & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
    {
    datatype = (datatype | VTK_PARSE_BAD_INDIRECT);
    }
  else if ((extra & VTK_PARSE_INDIRECT) != 0)
    {
    extra = (extra & VTK_PARSE_INDIRECT);

    if ((extra & VTK_PARSE_REF) != 0)
      {
      datatype = (datatype | VTK_PARSE_REF);
      extra = (extra & ~VTK_PARSE_REF);
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
  val->Class = type_class(datatype, getTypeId());

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
    func->ArgClasses[i] = param->Class;
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
                  strcmp(currentNamespace->Functions[i]->Parameters[j]->Class,
                         currentFunction->Parameters[j]->Class) == 0)
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
    print_parser_error("syntax error", NULL, 0);
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

/* Set a property before parsing */
void vtkParse_SetClassProperty(
  const char *classname, const char *property)
{
   /* the only property recognized */
   if (strcmp(property, "concrete") == 0 ||
       strcmp(property, "CONCRETE") == 0 ||
       strcmp(property, "Concrete") == 0)
     {
     char *cp = (char *)malloc(strlen(classname) + 1);
     strcpy(cp, classname);

     vtkParse_AddStringToArray(&ConcreteClasses,
                               &NumberOfConcreteClasses,
                               cp);
     }
}

/** Define a preprocessor macro. Function macros are not supported.  */
void vtkParse_DefineMacro(const char *name, const char *definition)
{
  size_t n = vtkidlen(name);
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
  size_t n = vtkidlen(name);
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
  static PreprocessInfo info = {0, 0, 0, 0, 0, 0, 0, 0, 0};
  int val;
  unsigned long i;

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(&info, IncludeDirectories[i]);
    }

  return vtkParsePreprocess_FindIncludeFile(&info, filename, 0, &val);
}
