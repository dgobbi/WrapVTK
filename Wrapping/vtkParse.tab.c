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


The declaration specifiers "friend" and "typedef" can only appear at the
beginning of a declaration sequence.  There are also restrictions on
where class and enum specifiers can be used: you can declare a new struct
within a variable declaration, but not within a parameter declaration.

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

One ambiguous structure that has been found in some working code, but
is currently not dealt with properly by the parser, is the following:

  enum { x = mytemplate<int,2>::x };

This is interpreted as the following ungrammatical statement:

  enum { x = mytemplate < int ,
         2 > ::x };

This has proven to be very hard to fix in the parser, but it possible
to modify the statement so that it does not confuse the parser:

  enum { x = (mytemplate<int,2>::x) };

The parentheses serve to disambiguate the statement.

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
#line 1373 "vtkParse.tab.c"

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
     OP_RSHIFT_A = 306,
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

/* Line 222 of yacc.c  */
#line 1321 "vtkParse.y"

  const char   *str;
  unsigned int  integer;



/* Line 222 of yacc.c  */
#line 1656 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1668 "vtkParse.tab.c"

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
#define YYLAST   5847

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  240
/* YYNRULES -- Number of rules.  */
#define YYNRULES  610
/* YYNRULES -- Number of states.  */
#define YYNSTATES  991

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
       2,     2,     2,   140,     2,     2,     2,   136,   133,     2,
     127,   128,   134,   139,   126,   138,   143,   137,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   125,   121,
     129,   124,   135,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   130,     2,   131,   142,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,   141,   123,   132,     2,     2,     2,
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
     241,   247,   250,   252,   254,   258,   259,   261,   262,   267,
     274,   278,   283,   286,   290,   296,   300,   302,   305,   311,
     317,   324,   330,   337,   340,   341,   345,   348,   350,   352,
     353,   354,   362,   364,   368,   370,   373,   376,   379,   383,
     387,   392,   396,   397,   403,   405,   406,   411,   412,   413,
     419,   420,   421,   427,   428,   429,   430,   438,   440,   442,
     443,   445,   446,   450,   452,   455,   458,   461,   464,   467,
     470,   474,   477,   481,   484,   488,   492,   495,   499,   504,
     507,   509,   511,   514,   516,   519,   522,   523,   524,   532,
     535,   536,   540,   541,   547,   550,   552,   555,   556,   559,
     560,   564,   566,   569,   573,   575,   576,   582,   583,   584,
     590,   591,   597,   598,   601,   603,   607,   610,   611,   612,
     615,   617,   618,   623,   627,   628,   629,   635,   636,   638,
     639,   643,   648,   651,   652,   655,   656,   657,   662,   665,
     666,   668,   669,   672,   675,   676,   682,   685,   686,   692,
     694,   696,   698,   700,   702,   703,   704,   705,   712,   714,
     715,   718,   721,   725,   727,   730,   732,   735,   737,   741,
     743,   745,   747,   748,   750,   751,   754,   756,   759,   760,
     765,   766,   767,   770,   772,   774,   776,   778,   781,   784,
     787,   790,   793,   797,   801,   802,   808,   810,   812,   813,
     819,   820,   827,   829,   831,   833,   835,   837,   839,   841,
     844,   847,   850,   853,   856,   859,   862,   864,   866,   868,
     870,   872,   874,   876,   878,   880,   882,   884,   886,   888,
     890,   892,   894,   896,   898,   900,   902,   904,   905,   908,
     910,   912,   914,   916,   918,   921,   923,   925,   927,   929,
     931,   934,   936,   938,   940,   942,   944,   946,   948,   951,
     954,   955,   959,   960,   965,   967,   968,   972,   974,   976,
     979,   982,   985,   986,   990,   991,   996,   998,  1000,  1002,
    1005,  1008,  1011,  1013,  1015,  1017,  1019,  1021,  1023,  1025,
    1027,  1029,  1031,  1033,  1035,  1037,  1039,  1041,  1043,  1045,
    1047,  1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,  1065,
    1067,  1069,  1071,  1073,  1075,  1077,  1079,  1081,  1083,  1086,
    1088,  1090,  1091,  1095,  1097,  1100,  1101,  1109,  1110,  1111,
    1112,  1122,  1123,  1129,  1130,  1136,  1137,  1138,  1149,  1150,
    1158,  1159,  1160,  1161,  1171,  1178,  1179,  1187,  1188,  1196,
    1197,  1205,  1206,  1214,  1215,  1223,  1224,  1232,  1233,  1241,
    1242,  1250,  1251,  1261,  1262,  1272,  1277,  1282,  1290,  1291,
    1293,  1296,  1299,  1303,  1307,  1309,  1311,  1313,  1315,  1318,
    1321,  1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,
    1341,  1343,  1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,
    1361,  1363,  1365,  1367,  1369,  1371,  1373,  1375,  1377,  1379,
    1381,  1383,  1385,  1387,  1389,  1391,  1393,  1395,  1397,  1399,
    1401,  1403,  1405,  1407,  1409,  1411,  1413,  1415,  1417,  1419,
    1421,  1423,  1425,  1427,  1429,  1431,  1433,  1435,  1437,  1439,
    1441,  1443,  1445,  1447,  1449,  1451,  1453,  1456,  1458,  1460,
    1462,  1464,  1466,  1468,  1470,  1472,  1474,  1476,  1478,  1479,
    1482,  1484,  1486,  1488,  1490,  1492,  1494,  1496,  1498,  1500,
    1501,  1504,  1505,  1508,  1510,  1512,  1514,  1516,  1518,  1519,
    1524,  1526,  1528,  1529,  1534,  1535,  1540,  1541,  1546,  1547,
    1552,  1553,  1558,  1559,  1562,  1563,  1566,  1568,  1570,  1572,
    1574,  1576,  1578,  1580,  1582,  1584,  1586,  1588,  1590,  1592,
    1594,  1596,  1598,  1600,  1602,  1604,  1608,  1612,  1616,  1618,
    1620
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     145,     0,    -1,   146,    -1,    -1,    -1,   146,   147,   148,
      -1,   198,    -1,   196,    -1,   154,    -1,   151,    -1,   153,
      -1,   150,    -1,   186,    -1,   258,    -1,   176,    -1,   156,
      -1,   216,    -1,   149,    -1,   327,    -1,   288,   121,    -1,
     121,    -1,   199,   156,    -1,   199,   216,    -1,   199,   183,
      -1,   199,   149,    -1,    34,    12,   122,   146,   123,    -1,
      40,   122,   376,   123,    -1,    -1,    40,   299,   152,   122,
     146,   123,    -1,    40,   299,   124,   290,   121,    -1,   155,
      -1,   199,   155,    -1,   162,   288,   121,    -1,   302,   162,
     288,   121,    -1,   157,   300,   260,   121,    -1,   302,   157,
     300,   260,   121,    -1,    -1,   159,   158,   122,   163,   123,
      -1,    -1,   162,   288,   160,   169,    -1,    -1,   162,   161,
     169,    -1,    20,    -1,    19,    -1,    21,    -1,    -1,    -1,
     163,   164,   166,    -1,   163,   165,   125,    -1,    23,    -1,
      24,    -1,    25,    -1,   196,    -1,   154,    -1,   168,    -1,
     186,    -1,   258,    -1,   176,    -1,   156,    -1,   220,    -1,
     167,    -1,   327,    -1,   120,   382,    -1,   288,   121,    -1,
     121,    -1,   199,   156,    -1,   199,   220,    -1,   199,   167,
      -1,    33,   184,    -1,    33,   199,   184,    -1,    33,   154,
      -1,    33,   221,   237,    -1,    -1,   170,    -1,   125,   171,
      -1,   172,    -1,   171,   126,   172,    -1,   288,    -1,    30,
     174,   288,    -1,   175,   173,   288,    -1,    -1,    30,    -1,
      -1,   175,    -1,    23,    -1,    24,    -1,    25,    -1,   177,
     300,   260,   121,    -1,   302,   177,   300,   260,   121,    -1,
      -1,   179,   122,   178,   180,   123,    -1,    22,   288,    -1,
      22,    -1,   181,    -1,   180,   126,   181,    -1,    -1,   298,
      -1,    -1,   298,   124,   182,   355,    -1,   308,   291,   298,
     124,   377,   121,    -1,   162,   288,   185,    -1,   302,   162,
     288,   185,    -1,   162,   185,    -1,   302,   162,   185,    -1,
     122,   376,   123,   377,   121,    -1,   125,   377,   121,    -1,
     187,    -1,   302,   187,    -1,    39,   308,   195,   189,   121,
      -1,    39,   157,   300,   188,   121,    -1,    39,   302,   157,
     300,   188,   121,    -1,    39,   177,   300,   188,   121,    -1,
      39,   302,   177,   300,   188,   121,    -1,   190,   189,    -1,
      -1,   189,   126,   190,    -1,   264,   195,    -1,   268,    -1,
     192,    -1,    -1,    -1,   278,   127,   193,   248,   128,   194,
     275,    -1,   191,    -1,    41,   197,   121,    -1,   288,    -1,
      38,   288,    -1,   291,   231,    -1,   291,   226,    -1,   294,
     291,   231,    -1,   294,   291,   226,    -1,    41,    40,   288,
     121,    -1,    36,   129,   367,    -1,    -1,    36,   129,   200,
     201,   367,    -1,   203,    -1,    -1,   201,   126,   202,   203,
      -1,    -1,    -1,   204,   314,   265,   205,   212,    -1,    -1,
      -1,   206,   211,   265,   207,   212,    -1,    -1,    -1,    -1,
     208,   199,    20,   209,   265,   210,   212,    -1,    20,    -1,
      38,    -1,    -1,   213,    -1,    -1,   124,   214,   215,    -1,
     363,    -1,   215,   363,    -1,   217,   237,    -1,   222,   237,
      -1,   218,   237,    -1,   219,   237,    -1,   308,   233,    -1,
     308,   291,   233,    -1,   291,   240,    -1,   302,   291,   240,
      -1,   291,   223,    -1,   302,   291,   223,    -1,   308,   291,
     227,    -1,   221,   237,    -1,   291,   231,   121,    -1,   302,
     291,   231,   121,    -1,   308,   233,    -1,   222,    -1,   240,
      -1,   302,   240,    -1,   223,    -1,   302,   223,    -1,   308,
     227,    -1,    -1,    -1,   226,   127,   224,   248,   128,   225,
     234,    -1,   232,   308,    -1,    -1,   229,   228,   234,    -1,
      -1,   231,   127,   230,   248,   128,    -1,   232,   351,    -1,
      35,    -1,   238,   234,    -1,    -1,   234,   235,    -1,    -1,
      37,   236,   370,    -1,    26,    -1,   124,    18,    -1,   122,
     376,   123,    -1,   121,    -1,    -1,   289,   127,   239,   248,
     128,    -1,    -1,    -1,   243,   241,   245,   242,   234,    -1,
      -1,   289,   127,   244,   248,   128,    -1,    -1,   125,   246,
      -1,   247,    -1,   246,   126,   247,    -1,   288,   382,    -1,
      -1,    -1,   249,   250,    -1,   252,    -1,    -1,   250,   126,
     251,   252,    -1,   250,   126,    71,    -1,    -1,    -1,   253,
     308,   265,   254,   255,    -1,    -1,   256,    -1,    -1,   124,
     257,   355,    -1,   308,   259,   261,   121,    -1,   268,   255,
      -1,    -1,   263,   261,    -1,    -1,    -1,   261,   126,   262,
     263,    -1,   264,   259,    -1,    -1,   322,    -1,    -1,   266,
     280,    -1,   278,   272,    -1,    -1,   270,   276,   128,   267,
     272,    -1,   278,   280,    -1,    -1,   271,   277,   128,   269,
     272,    -1,   127,    -1,    10,    -1,    11,    -1,    10,    -1,
      11,    -1,    -1,    -1,    -1,   127,   273,   248,   128,   274,
     275,    -1,   281,    -1,    -1,   275,    28,    -1,   275,    26,
      -1,   275,    37,   382,    -1,   265,    -1,   322,   265,    -1,
     268,    -1,   322,   268,    -1,   298,    -1,   298,   125,   279,
      -1,    15,    -1,    13,    -1,    14,    -1,    -1,   281,    -1,
      -1,   282,   283,    -1,   284,    -1,   283,   284,    -1,    -1,
     130,   285,   286,   131,    -1,    -1,    -1,   287,   355,    -1,
     289,    -1,   290,    -1,   298,    -1,   295,    -1,   291,   289,
      -1,   294,   289,    -1,   294,   290,    -1,   293,   294,    -1,
     295,   294,    -1,   291,   293,   294,    -1,   291,   295,   294,
      -1,    -1,   291,    36,   292,   295,   294,    -1,   299,    -1,
      72,    -1,    -1,   299,   129,   296,   361,   367,    -1,    -1,
     132,   299,   129,   297,   361,   367,    -1,     4,    -1,     5,
      -1,     3,    -1,     9,    -1,     8,    -1,     6,    -1,     7,
      -1,   132,     4,    -1,   132,     5,    -1,   132,     3,    -1,
     132,     9,    -1,   132,     8,    -1,   132,     6,    -1,   132,
       7,    -1,    86,    -1,    85,    -1,    89,    -1,    90,    -1,
      91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,    -1,
      96,    -1,    97,    -1,    98,    -1,    87,    -1,    88,    -1,
       3,    -1,     5,    -1,     4,    -1,     9,    -1,     8,    -1,
       6,    -1,     7,    -1,    -1,   300,   301,    -1,   303,    -1,
     321,    -1,    39,    -1,    33,    -1,   303,    -1,   302,   303,
      -1,   304,    -1,   305,    -1,   306,    -1,    28,    -1,    34,
      -1,    34,    12,    -1,    29,    -1,    32,    -1,    30,    -1,
      31,    -1,    26,    -1,    27,    -1,   306,    -1,   307,   306,
      -1,   309,   264,    -1,    -1,   312,   310,   300,    -1,    -1,
     302,   312,   311,   300,    -1,   319,    -1,    -1,    38,   313,
     288,    -1,   295,    -1,   290,    -1,   162,   288,    -1,    22,
     288,    -1,   315,   264,    -1,    -1,   318,   316,   300,    -1,
      -1,   302,   312,   317,   300,    -1,   319,    -1,   295,    -1,
     290,    -1,    19,   288,    -1,    21,   288,    -1,    22,   288,
      -1,   321,    -1,   320,    -1,     6,    -1,     7,    -1,     8,
      -1,     9,    -1,     3,    -1,     4,    -1,     5,    -1,    85,
      -1,    86,    -1,    89,    -1,    90,    -1,    91,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    96,    -1,    97,
      -1,    98,    -1,    87,    -1,    88,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    82,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    83,    -1,    84,    -1,   323,
      -1,   326,    -1,   326,   323,    -1,   133,    -1,   134,    -1,
      -1,   134,   325,   307,    -1,   324,    -1,   326,   324,    -1,
      -1,    99,   127,   298,   126,   328,   308,   128,    -1,    -1,
      -1,    -1,   100,   127,   329,   298,   126,   330,   308,   331,
     128,    -1,    -1,   101,   127,   332,   298,   128,    -1,    -1,
     102,   127,   333,   298,   128,    -1,    -1,    -1,   103,   127,
     298,   126,   334,   308,   335,   126,   377,   128,    -1,    -1,
     104,   127,   298,   126,   336,   308,   128,    -1,    -1,    -1,
      -1,   105,   127,   337,   298,   126,   338,   308,   339,   128,
      -1,   106,   127,   298,   126,   308,   128,    -1,    -1,   107,
     127,   298,   126,   340,   308,   128,    -1,    -1,   111,   127,
     298,   126,   341,   308,   128,    -1,    -1,   108,   127,   298,
     126,   342,   308,   128,    -1,    -1,   112,   127,   298,   126,
     343,   308,   128,    -1,    -1,   109,   127,   298,   126,   344,
     308,   128,    -1,    -1,   113,   127,   298,   126,   345,   308,
     128,    -1,    -1,   110,   127,   298,   126,   346,   308,   128,
      -1,    -1,   114,   127,   298,   126,   347,   308,   128,    -1,
      -1,   115,   127,   298,   126,   348,   308,   126,    13,   128,
      -1,    -1,   116,   127,   298,   126,   349,   308,   126,    13,
     128,    -1,   117,   127,   298,   128,    -1,   118,   127,   298,
     128,    -1,   119,   127,   298,   126,   288,   350,   128,    -1,
      -1,   126,    -1,   127,   128,    -1,   130,   131,    -1,    42,
     130,   131,    -1,    43,   130,   131,    -1,   129,    -1,   135,
      -1,   126,    -1,   124,    -1,    51,   135,    -1,    51,    51,
      -1,   352,    -1,   136,    -1,   134,    -1,   137,    -1,   138,
      -1,   139,    -1,   140,    -1,   132,    -1,   133,    -1,   141,
      -1,   142,    -1,    42,    -1,    43,    -1,    48,    -1,    49,
      -1,    50,    -1,    52,    -1,    53,    -1,    54,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    55,
      -1,    56,    -1,    62,    -1,    63,    -1,    64,    -1,    65,
      -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,    70,
      -1,    39,    -1,    38,    -1,    20,    -1,    19,    -1,    21,
      -1,    36,    -1,    23,    -1,    25,    -1,    24,    -1,    26,
      -1,    29,    -1,    32,    -1,    30,    -1,    34,    -1,    41,
      -1,    40,    -1,    35,    -1,    22,    -1,    37,    -1,    46,
      -1,    45,    -1,    44,    -1,    47,    -1,    15,    -1,    13,
      -1,    14,    -1,    16,    -1,    17,    -1,    12,    -1,    18,
      -1,   358,    -1,   355,   358,    -1,   368,    -1,   370,    -1,
     374,    -1,   352,    -1,   125,    -1,   143,    -1,    72,    -1,
     353,    -1,   354,    -1,   321,    -1,   320,    -1,    -1,   357,
     359,    -1,   356,    -1,   129,    -1,   135,    -1,    51,    -1,
     358,    -1,   124,    -1,   126,    -1,   359,    -1,   121,    -1,
      -1,   361,   364,    -1,    -1,   362,   360,    -1,   365,    -1,
     356,    -1,   363,    -1,   124,    -1,   126,    -1,    -1,   129,
     366,   361,   367,    -1,   135,    -1,    51,    -1,    -1,   130,
     369,   357,   131,    -1,    -1,   127,   371,   357,   128,    -1,
      -1,    10,   372,   357,   128,    -1,    -1,    11,   373,   357,
     128,    -1,    -1,   122,   375,   362,   123,    -1,    -1,   376,
     378,    -1,    -1,   377,   379,    -1,   379,    -1,   121,    -1,
     380,    -1,   382,    -1,   381,    -1,    72,    -1,    71,    -1,
     352,    -1,    51,    -1,   125,    -1,   143,    -1,   129,    -1,
     135,    -1,   124,    -1,   126,    -1,   353,    -1,   354,    -1,
     319,    -1,    73,    -1,   122,   376,   123,    -1,   130,   376,
     131,    -1,   383,   376,   128,    -1,   127,    -1,    10,    -1,
      11,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1480,  1480,  1482,  1484,  1483,  1494,  1495,  1496,  1497,
    1498,  1499,  1500,  1501,  1502,  1503,  1504,  1505,  1506,  1507,
    1508,  1511,  1512,  1513,  1514,  1521,  1528,  1529,  1529,  1533,
    1540,  1541,  1544,  1545,  1548,  1549,  1552,  1552,  1566,  1566,
    1568,  1568,  1572,  1573,  1574,  1576,  1578,  1577,  1586,  1590,
    1591,  1592,  1595,  1596,  1597,  1598,  1599,  1600,  1601,  1602,
    1603,  1604,  1605,  1606,  1607,  1610,  1611,  1612,  1615,  1616,
    1617,  1618,  1620,  1621,  1624,  1627,  1628,  1631,  1633,  1635,
    1639,  1640,  1643,  1644,  1647,  1648,  1649,  1660,  1661,  1665,
    1665,  1678,  1679,  1682,  1683,  1685,  1686,  1687,  1687,  1695,
    1698,  1699,  1700,  1701,  1704,  1705,  1713,  1714,  1717,  1718,
    1720,  1722,  1724,  1728,  1730,  1731,  1734,  1737,  1738,  1741,
    1742,  1741,  1746,  1780,  1783,  1784,  1785,  1787,  1789,  1791,
    1795,  1802,  1805,  1804,  1822,  1824,  1823,  1828,  1830,  1828,
    1832,  1834,  1832,  1836,  1837,  1839,  1836,  1850,  1851,  1853,
    1854,  1857,  1857,  1867,  1868,  1876,  1877,  1878,  1879,  1882,
    1885,  1886,  1887,  1890,  1891,  1892,  1895,  1896,  1897,  1900,
    1901,  1902,  1903,  1906,  1907,  1908,  1912,  1916,  1911,  1928,
    1932,  1932,  1943,  1942,  1951,  1955,  1958,  1967,  1968,  1971,
    1971,  1972,  1973,  1981,  1982,  1986,  1985,  1997,  1998,  1997,
    2016,  2016,  2019,  2020,  2023,  2024,  2027,  2033,  2034,  2034,
    2037,  2038,  2038,  2040,  2044,  2046,  2044,  2070,  2071,  2074,
    2074,  2082,  2085,  2144,  2145,  2147,  2148,  2148,  2151,  2154,
    2155,  2159,  2159,  2161,  2172,  2172,  2191,  2192,  2192,  2210,
    2211,  2213,  2217,  2219,  2222,  2223,  2224,  2223,  2229,  2231,
    2232,  2233,  2234,  2237,  2238,  2242,  2243,  2247,  2248,  2251,
    2252,  2253,  2256,  2257,  2260,  2260,  2263,  2264,  2267,  2267,
    2270,  2271,  2271,  2278,  2279,  2282,  2283,  2286,  2288,  2290,
    2294,  2296,  2298,  2300,  2302,  2302,  2307,  2310,  2313,  2313,
    2320,  2319,  2335,  2336,  2337,  2338,  2339,  2340,  2341,  2342,
    2343,  2344,  2345,  2346,  2347,  2348,  2349,  2350,  2351,  2352,
    2353,  2354,  2355,  2356,  2357,  2358,  2359,  2360,  2361,  2362,
    2369,  2370,  2371,  2372,  2373,  2374,  2375,  2382,  2383,  2386,
    2387,  2389,  2390,  2393,  2394,  2397,  2398,  2399,  2402,  2403,
    2404,  2405,  2408,  2409,  2410,  2413,  2414,  2417,  2418,  2427,
    2430,  2430,  2432,  2432,  2436,  2437,  2437,  2439,  2441,  2443,
    2445,  2449,  2452,  2452,  2454,  2454,  2458,  2459,  2461,  2463,
    2465,  2467,  2471,  2472,  2475,  2476,  2477,  2478,  2479,  2480,
    2481,  2482,  2483,  2484,  2485,  2486,  2487,  2488,  2489,  2490,
    2491,  2492,  2493,  2494,  2495,  2498,  2499,  2500,  2501,  2502,
    2503,  2504,  2505,  2506,  2507,  2508,  2528,  2529,  2530,  2533,
    2536,  2537,  2537,  2552,  2553,  2570,  2570,  2580,  2581,  2581,
    2580,  2590,  2590,  2600,  2600,  2609,  2609,  2609,  2642,  2641,
    2652,  2653,  2653,  2652,  2662,  2680,  2680,  2685,  2685,  2690,
    2690,  2695,  2695,  2700,  2700,  2705,  2705,  2710,  2710,  2715,
    2715,  2720,  2720,  2737,  2737,  2751,  2788,  2826,  2866,  2867,
    2874,  2875,  2876,  2877,  2878,  2879,  2880,  2881,  2882,  2883,
    2884,  2887,  2888,  2889,  2890,  2891,  2892,  2893,  2894,  2895,
    2896,  2897,  2898,  2899,  2900,  2901,  2902,  2903,  2904,  2905,
    2906,  2907,  2908,  2909,  2910,  2911,  2912,  2913,  2914,  2915,
    2916,  2917,  2918,  2919,  2920,  2923,  2924,  2925,  2926,  2927,
    2928,  2929,  2930,  2931,  2932,  2933,  2934,  2935,  2936,  2937,
    2938,  2939,  2940,  2941,  2942,  2943,  2944,  2945,  2948,  2949,
    2950,  2951,  2952,  2953,  2954,  2961,  2962,  2965,  2966,  2967,
    2968,  2999,  2999,  3000,  3001,  3002,  3003,  3004,  3027,  3028,
    3030,  3031,  3032,  3033,  3035,  3036,  3037,  3039,  3040,  3042,
    3043,  3045,  3046,  3049,  3050,  3053,  3054,  3055,  3059,  3058,
    3072,  3073,  3076,  3076,  3080,  3080,  3082,  3082,  3084,  3084,
    3088,  3088,  3093,  3094,  3096,  3097,  3100,  3101,  3104,  3105,
    3106,  3107,  3108,  3109,  3110,  3111,  3111,  3111,  3111,  3111,
    3111,  3112,  3112,  3113,  3114,  3117,  3120,  3123,  3126,  3126,
    3126
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
  "OP_RSHIFT_A", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW",
  "OP_INCR", "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ",
  "OP_DIVIDE_EQ", "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ",
  "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER",
  "VOID", "BOOL", "FLOAT", "DOUBLE", "INT", "SHORT", "LONG", "INT64__",
  "CHAR", "SIGNED", "UNSIGNED", "SSIZE_T", "SIZE_T", "IdType", "FloatType",
  "TypeInt8", "TypeUInt8", "TypeInt16", "TypeUInt16", "TypeInt32",
  "TypeUInt32", "TypeInt64", "TypeUInt64", "TypeFloat32", "TypeFloat64",
  "SetMacro", "GetMacro", "SetStringMacro", "GetStringMacro",
  "SetClampMacro", "SetObjectMacro", "GetObjectMacro", "BooleanMacro",
  "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "'='", "':'", "','", "'('",
  "')'", "'<'", "'['", "']'", "'~'", "'&'", "'*'", "'>'", "'%'", "'/'",
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
  "enum_specifier", "$@7", "enum_head", "enumerator_list",
  "enumerator_definition", "$@8", "nested_variable_initialization",
  "ignored_class", "ignored_class_body", "typedef_declaration",
  "basic_typedef_declaration", "typedef_declarator_list",
  "typedef_declarator_list_cont", "typedef_declarator",
  "typedef_direct_declarator", "function_direct_declarator", "$@9", "$@10",
  "typedef_declarator_id", "using_declaration", "using_id",
  "using_directive", "template_head", "$@11", "template_parameter_list",
  "$@12", "template_parameter", "$@13", "$@14", "$@15", "$@16", "$@17",
  "$@18", "$@19", "class_or_typename",
  "opt_template_parameter_initializer", "template_parameter_initializer",
  "$@20", "template_parameter_value", "function_definition",
  "function_declaration", "nested_method_declaration",
  "nested_operator_declaration", "method_definition", "method_declaration",
  "operator_declaration", "conversion_function", "$@21", "$@22",
  "conversion_function_id", "operator_function_nr", "$@23",
  "operator_function_sig", "$@24", "operator_function_id", "operator_sig",
  "function_nr", "function_trailer_clause", "function_trailer", "$@25",
  "function_body", "function_sig", "$@26", "structor_declaration", "$@27",
  "$@28", "structor_sig", "$@29", "opt_ctor_initializer",
  "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "$@30", "parameter_list", "$@31",
  "parameter_declaration", "$@32", "$@33", "opt_initializer",
  "initializer", "$@34", "variable_declaration", "init_declarator_id",
  "opt_declarator_list", "declarator_list_cont", "$@35", "init_declarator",
  "opt_ptr_operator_seq", "direct_abstract_declarator", "$@36", "$@37",
  "direct_declarator", "$@38", "p_or_lp_or_la", "lp_or_la",
  "opt_array_or_parameters", "$@39", "$@40", "function_qualifiers",
  "abstract_declarator", "declarator", "declarator_id", "bitfield_size",
  "opt_array_decorator_seq", "array_decorator_seq", "$@41",
  "array_decorator_seq_impl", "array_decorator", "$@42",
  "array_size_specifier", "$@43", "id_expression", "unqualified_id",
  "qualified_id", "nested_name_specifier", "$@44", "identifier_sig",
  "scope_operator_sig", "template_id", "$@45", "$@46", "simple_id",
  "identifier", "opt_decl_specifier_seq", "decl_specifier2",
  "decl_specifier_seq", "decl_specifier", "storage_class_specifier",
  "function_specifier", "cv_qualifier", "cv_qualifier_seq", "store_type",
  "store_type_specifier", "$@47", "$@48", "type_specifier", "$@49",
  "tparam_type", "tparam_type_specifier2", "$@50", "$@51",
  "tparam_type_specifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "pointer", "$@52",
  "pointer_seq", "declaration_macro", "$@53", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "opt_comma", "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "common_bracket_item", "any_bracket_contents",
  "bracket_pitem", "any_bracket_item", "braces_item",
  "angle_bracket_contents", "braces_contents", "angle_bracket_pitem",
  "angle_bracket_item", "angle_brackets_sig", "$@75",
  "right_angle_bracket", "brackets_sig", "$@76", "parentheses_sig", "$@77",
  "$@78", "$@79", "braces_sig", "$@80", "ignored_items",
  "ignored_expression", "ignored_item", "ignored_item_no_semi",
  "ignored_braces", "ignored_brackets", "ignored_parentheses",
  "ignored_left_parenthesis", 0
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
      91,    93,   126,    38,    42,    62,    37,    47,    45,    43,
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
     177,   179,   179,   180,   180,   181,   181,   182,   181,   183,
     184,   184,   184,   184,   185,   185,   186,   186,   187,   187,
     187,   187,   187,   188,   189,   189,   190,   191,   191,   193,
     194,   192,   195,   196,   197,   197,   197,   197,   197,   197,
     198,   199,   200,   199,   201,   202,   201,   204,   205,   203,
     206,   207,   203,   208,   209,   210,   203,   211,   211,   212,
     212,   214,   213,   215,   215,   216,   216,   216,   216,   217,
     218,   218,   218,   219,   219,   219,   220,   220,   220,   221,
     221,   221,   221,   222,   222,   222,   224,   225,   223,   226,
     228,   227,   230,   229,   231,   232,   233,   234,   234,   236,
     235,   235,   235,   237,   237,   239,   238,   241,   242,   240,
     244,   243,   245,   245,   246,   246,   247,   248,   249,   248,
     250,   251,   250,   250,   253,   254,   252,   255,   255,   257,
     256,   258,   259,   260,   260,   261,   262,   261,   263,   264,
     264,   266,   265,   265,   267,   265,   268,   269,   268,   270,
     270,   270,   271,   271,   272,   273,   274,   272,   272,   275,
     275,   275,   275,   276,   276,   277,   277,   278,   278,   279,
     279,   279,   280,   280,   282,   281,   283,   283,   285,   284,
     286,   287,   286,   288,   288,   289,   289,   290,   290,   290,
     291,   291,   291,   291,   292,   291,   293,   294,   296,   295,
     297,   295,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     299,   299,   299,   299,   299,   299,   299,   300,   300,   301,
     301,   301,   301,   302,   302,   303,   303,   303,   304,   304,
     304,   304,   305,   305,   305,   306,   306,   307,   307,   308,
     310,   309,   311,   309,   312,   313,   312,   312,   312,   312,
     312,   314,   316,   315,   317,   315,   318,   318,   318,   318,
     318,   318,   319,   319,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   320,   320,   320,   320,   320,
     320,   320,   320,   320,   320,   321,   321,   321,   321,   321,
     321,   321,   321,   321,   321,   321,   322,   322,   322,   323,
     324,   325,   324,   326,   326,   328,   327,   329,   330,   331,
     327,   332,   327,   333,   327,   334,   335,   327,   336,   327,
     337,   338,   339,   327,   327,   340,   327,   341,   327,   342,
     327,   343,   327,   344,   327,   345,   327,   346,   327,   347,
     327,   348,   327,   349,   327,   327,   327,   327,   350,   350,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   352,   352,   352,   352,   352,
     352,   352,   352,   352,   352,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   354,   354,
     354,   354,   354,   354,   354,   355,   355,   356,   356,   356,
     356,   356,   356,   356,   356,   356,   356,   356,   357,   357,
     358,   358,   358,   358,   359,   359,   359,   360,   360,   361,
     361,   362,   362,   363,   363,   364,   364,   364,   366,   365,
     367,   367,   369,   368,   371,   370,   372,   370,   373,   370,
     375,   374,   376,   376,   377,   377,   378,   378,   379,   379,
     379,   379,   379,   379,   379,   379,   379,   379,   379,   379,
     379,   379,   379,   379,   379,   380,   381,   382,   383,   383,
     383
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
       5,     2,     1,     1,     3,     0,     1,     0,     4,     6,
       3,     4,     2,     3,     5,     3,     1,     2,     5,     5,
       6,     5,     6,     2,     0,     3,     2,     1,     1,     0,
       0,     7,     1,     3,     1,     2,     2,     2,     3,     3,
       4,     3,     0,     5,     1,     0,     4,     0,     0,     5,
       0,     0,     5,     0,     0,     0,     7,     1,     1,     0,
       1,     0,     3,     1,     2,     2,     2,     2,     2,     2,
       3,     2,     3,     2,     3,     3,     2,     3,     4,     2,
       1,     1,     2,     1,     2,     2,     0,     0,     7,     2,
       0,     3,     0,     5,     2,     1,     2,     0,     2,     0,
       3,     1,     2,     3,     1,     0,     5,     0,     0,     5,
       0,     5,     0,     2,     1,     3,     2,     0,     0,     2,
       1,     0,     4,     3,     0,     0,     5,     0,     1,     0,
       3,     4,     2,     0,     2,     0,     0,     4,     2,     0,
       1,     0,     2,     2,     0,     5,     2,     0,     5,     1,
       1,     1,     1,     1,     0,     0,     0,     6,     1,     0,
       2,     2,     3,     1,     2,     1,     2,     1,     3,     1,
       1,     1,     0,     1,     0,     2,     1,     2,     0,     4,
       0,     0,     2,     1,     1,     1,     1,     2,     2,     2,
       2,     2,     3,     3,     0,     5,     1,     1,     0,     5,
       0,     6,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       0,     3,     0,     4,     1,     0,     3,     1,     1,     2,
       2,     2,     0,     3,     0,     4,     1,     1,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     0,     3,     1,     2,     0,     7,     0,     0,     0,
       9,     0,     5,     0,     5,     0,     0,    10,     0,     7,
       0,     0,     0,     9,     6,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     9,     0,     9,     4,     4,     7,     0,     1,
       2,     2,     3,     3,     1,     1,     1,     1,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     0,     4,
       1,     1,     0,     4,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     3,     1,     1,
       1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       3,     0,     4,     1,     0,   378,   379,   380,   374,   375,
     376,   377,    43,    42,    44,    92,   345,   346,   338,   341,
     343,   344,   342,   339,   185,     0,   355,     0,     0,     0,
     287,   395,   396,   397,   398,   400,   401,   402,   403,   399,
     404,   405,   381,   382,   393,   394,   383,   384,   385,   386,
     387,   388,   389,   390,   391,   392,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    20,     0,     5,
      17,    11,     9,    10,     8,    30,    15,   327,    36,    40,
      14,   327,     0,    12,   106,     7,     6,     0,    16,     0,
       0,     0,     0,   173,     0,     0,    13,     0,   273,   358,
       0,     0,     0,   357,   275,   286,     0,   333,   335,   336,
     337,     0,   229,   350,   354,   373,   372,    18,   294,   292,
     293,   297,   298,   296,   295,   307,   306,   318,   319,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   360,
     274,     0,   276,   340,   132,     0,   378,   379,   380,   374,
     375,   376,   377,   339,   381,   382,   393,   394,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,     0,   327,
      40,   327,   358,   357,     0,     0,   320,   322,   321,   325,
     326,   324,   323,   582,    27,     0,     0,     0,   124,     0,
       0,     0,   417,   421,   423,     0,     0,   430,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   301,   299,   300,   304,   305,   303,   302,     0,
     229,     0,    72,   359,   229,    89,     0,    24,    31,    21,
      23,     0,    22,     0,     0,   194,   582,   155,   157,   158,
     156,   176,     0,     0,   179,    19,   284,   163,   161,   197,
     277,     0,   276,   280,   278,   279,   281,   288,   327,    40,
     327,   107,   174,     0,   334,   352,   242,   243,   175,   180,
       0,     0,   159,   187,   225,   217,     0,   262,     0,     0,
     257,   409,   410,   349,   230,   406,   413,   407,   327,   277,
       3,   571,   570,   137,   131,   356,   340,   229,   359,   229,
     327,   327,   294,   292,   293,   297,   298,   296,   295,     0,
     122,   118,   114,   117,   262,   257,     0,     0,     0,   125,
       0,   123,   127,   126,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   290,   332,   331,
       0,   225,     0,   328,   329,   330,    45,     0,    41,    73,
      32,    72,     0,    95,   360,     0,     0,     0,   208,   359,
       0,   202,   200,   282,   283,   559,   229,   359,   229,   164,
     162,   327,   187,   182,   481,   482,   483,   484,   485,     0,
     486,   487,   488,   494,   495,   489,   490,   491,   492,   493,
     496,   497,   498,   499,   500,   501,   502,   503,   504,   467,
     466,     0,   464,     0,   477,   478,   472,   465,   471,   473,
     474,   475,   476,   479,   480,   184,   470,   186,     0,   219,
     222,   218,   255,     0,     0,   236,   263,     0,   195,   165,
     160,     0,     0,   408,   414,   351,     4,     0,   134,     0,
       0,     0,     0,   114,     0,     0,   229,   229,   301,   299,
     300,   304,   305,   303,   302,     0,   119,   378,   379,   380,
     374,   375,   376,   377,   609,   610,   533,   529,   530,   528,
     531,   532,   534,   508,   507,   509,   522,   511,   513,   512,
     514,   515,   517,   516,   518,   521,   510,   523,   506,   505,
     520,   519,   481,   482,   526,   525,   524,   527,   594,   592,
     591,   604,   587,   582,    26,   599,   595,   600,   608,   597,
     582,   598,   596,   603,   593,   601,   602,   583,   586,   588,
     590,   589,   582,     0,     0,     3,   130,   477,   129,   128,
     415,     0,     0,     0,   425,   428,     0,     0,   435,   439,
     443,   447,   437,   441,   445,   449,   451,   453,   455,   456,
       0,   559,    34,   224,   228,    46,    84,    85,    86,    82,
      74,    75,    80,    77,    39,    87,     0,    93,    96,   275,
     193,     0,   214,     0,     0,     0,   198,   208,     0,     0,
      33,     0,   353,   181,   208,     0,     0,   469,   468,   460,
     461,   191,   189,     0,   188,   221,   226,     0,   237,   256,
     268,   265,   266,   208,   260,   261,   259,   258,   347,   412,
      25,   135,   133,     0,     0,     0,   368,   367,     0,   231,
     229,   362,   366,   147,   148,   231,     0,   109,   113,   116,
     111,     0,     0,   108,   229,   208,     0,     0,     0,    29,
       4,     0,   418,   422,   424,     0,     0,   431,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   458,
       0,    49,    50,    51,    37,     0,     0,     0,    83,     0,
      81,     0,    90,    95,    97,   584,   177,   209,   210,     0,
     285,   203,   204,     0,   187,     0,   576,   578,   543,   580,
     566,   541,   567,   574,   568,   572,   542,   547,   546,   540,
     544,   545,   564,   565,   560,   563,   289,   537,   538,   539,
      35,    88,     0,   462,   463,     0,   192,   229,   553,   551,
     552,   220,   550,   535,   244,   271,   267,     0,   348,   137,
     369,   370,   371,   364,   240,   241,   239,   138,   262,   231,
     244,   361,   327,   141,   144,   110,   112,   115,     0,   605,
     606,   607,    28,     0,     0,   426,     0,     0,   434,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   459,
       0,   291,     0,     0,     0,    64,    53,    58,    47,    60,
      54,    57,    55,    52,     0,    59,     0,   170,   171,    56,
       0,   273,     0,     0,     0,    61,    48,    78,    76,    79,
      94,     0,     0,   187,   211,   231,     0,   206,   199,   201,
     548,   548,   561,   548,   559,   548,   183,   190,   227,   536,
     245,   238,   248,     0,     0,   196,   136,   327,   149,   232,
     253,     0,   231,   233,   363,   149,   231,   120,   416,   419,
       0,   429,   432,   436,   440,   444,   448,   438,   442,   446,
     450,     0,     0,   457,    70,     0,    68,     0,     0,     0,
       0,     0,    62,    65,    67,     0,    66,     0,   166,    63,
       0,   172,     0,   169,   276,    98,    99,   585,   178,   213,
     214,   215,   205,     0,     0,     0,     0,     0,     0,   208,
     269,   272,   365,   151,   139,   150,   234,   254,   142,   145,
     249,     0,   584,     0,     0,     0,   582,   584,   102,   359,
       0,    69,     0,    71,     0,     0,   167,     0,   212,   217,
     555,   556,   577,   554,   549,   579,   558,   581,   557,   562,
     575,   569,   573,     0,     0,   244,   149,   121,   420,     0,
     433,   452,   454,     0,     0,   100,     0,     0,   103,   359,
     168,   216,   246,   152,   153,   235,   146,   251,   250,     0,
     427,   584,   105,     0,   101,   249,   154,   252,     0,   247,
     104
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     4,    79,   237,    81,    82,   328,    83,
      84,    85,   239,    87,   231,    88,   371,   232,   252,   575,
     685,   686,   798,   884,   800,   368,   369,   580,   581,   691,
     687,   582,    90,    91,   373,    92,   586,   587,   821,   240,
     876,   928,    93,    94,   462,   475,   463,   320,   321,   655,
     920,   322,    95,   197,    96,   241,   303,   457,   749,   458,
     459,   848,   460,   855,   461,   856,   956,   645,   914,   915,
     954,   973,   242,    99,   100,   101,   886,   806,   807,   103,
     378,   823,   104,   278,   392,   279,   604,   280,   105,   282,
     437,   614,   735,   247,   283,   623,   808,   381,   704,   259,
     597,   596,   701,   702,   591,   592,   697,   900,   698,   699,
     939,   440,   441,   617,   106,   284,   360,   438,   737,   361,
     362,   757,   758,   955,   285,   744,   759,   286,   841,   909,
     985,   957,   851,   443,   760,   627,   445,   446,   447,   621,
     622,   745,   843,   844,   198,   108,   182,   151,   380,   111,
     112,   152,   385,   571,   114,   115,   230,   363,   253,   117,
     118,   119,   120,   629,   881,   122,   298,   391,   123,   155,
     639,   640,   762,   847,   641,   124,   125,   126,   294,   295,
     296,   452,   297,   127,   661,   337,   774,   921,   338,   339,
     665,   860,   666,   342,   777,   923,   669,   673,   670,   674,
     671,   675,   672,   676,   677,   678,   790,   435,   719,   720,
     721,   741,   742,   903,   943,   944,   949,   598,   905,   723,
     724,   725,   834,   304,   727,   835,   728,   833,   830,   831,
     729,   832,   326,   822,   537,   538,   539,   540,   541,   542
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -903
static const yytype_int16 yypact[] =
{
    -903,    64,    83,  -903,  4158,   109,   129,   161,   214,   240,
     279,   280,  -903,  -903,  -903,  5461,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,    90,  -903,   -17,  -903,  4856,   477,  5205,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,   -35,    61,    62,   152,   218,   235,   237,   252,
     256,   266,   271,   315,   319,   320,     8,    40,    58,    82,
     126,   142,   158,   167,   183,   187,   205,   210,   215,   219,
     228,   238,   248,   249,   253,   257,   264,  -903,   512,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  5461,
    -903,  -903,    65,  -903,  -903,  -903,  -903,  4277,  -903,    -2,
      -2,    -2,    -2,  -903,   276,  4952,  -903,    24,  -903,   166,
    5317,   338,  5461,   188,  -903,   286,  4373,  -903,  -903,  -903,
    -903,  5253,    41,  -903,  -903,  -903,  -903,  -903,   -24,     1,
      15,    34,    70,    78,    84,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,   296,
    -903,  5483,   338,   297,   -11,  5461,   -24,     1,    15,    34,
      70,    78,    84,   417,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,   567,  -903,
    5461,  -903,  -903,   338,  4856,  5096,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,   308,  5461,  5461,   316,  -903,  5317,
    5461,  5531,  -903,  -903,  -903,  5531,  5531,  -903,  5531,  5531,
    5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,  5531,
    5531,  5531,   310,   333,   345,   347,   349,   367,   368,   376,
    5604,   385,   335,   106,  5604,  -903,  5461,  -903,  -903,  -903,
    -903,  4277,  -903,  4664,  5509,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  5461,  4952,  -903,  -903,  -903,  -903,  -903,  -903,
     381,   338,   338,  -903,  -903,  -903,  -903,  -903,  -903,  5461,
    -903,  -903,  -903,  5317,  -903,  -903,  -903,  -903,  -903,  -903,
     382,  5705,  -903,  -903,  -903,   386,  1076,   393,   398,  5317,
     -30,  -903,   192,  -903,  -903,  -903,  -903,    41,  -903,  -903,
    -903,  -903,  -903,    60,  -903,  -903,  -903,  5618,    18,  5618,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,   613,
    -903,  -903,  -903,  -903,   172,   387,  1280,   418,   404,  -903,
     406,  -903,  -903,  -903,  3899,  5317,   402,  5531,  5531,  5531,
     403,   411,  5531,   413,   414,   420,   421,   423,   425,   427,
     428,   429,   430,   431,   416,   432,   435,  -903,  -903,  -903,
     441,  -903,  5096,  -903,  -903,  -903,  -903,  5144,  -903,  -903,
    -903,   335,   444,  5531,  -903,  4664,  5317,  1478,   439,  -903,
     461,   443,  -903,  -903,  -903,  -903,  5604,   329,  5604,  -903,
    -903,  -903,  -903,  -903,   448,   449,  -903,  -903,  -903,     2,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,   452,  -903,   451,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,    37,   -10,  -903,
    -903,  -903,  -903,   455,  5096,  -903,  -903,   454,  -903,  -903,
    -903,   227,   251,  -903,  -903,  1353,   462,     3,  -903,  5048,
      80,   550,   466,  -903,  5096,   468,  5618,  5618,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,     5,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,   474,   338,  -903,  -903,   567,  -903,  -903,
    -903,   475,   476,   478,  -903,  -903,   479,  4952,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    5461,  -903,  -903,   482,  -903,    54,  -903,  -903,  -903,   464,
     484,  -903,   572,  -903,  -903,  -903,   196,  -903,   487,   489,
    -903,   486,  -903,   338,   286,  5461,  -903,   439,  3476,   502,
    -903,   503,  1353,    37,   439,   494,   496,  -903,  -903,  -903,
    -903,  -903,  -903,   585,  -903,  -903,  -903,  3617,  -903,  -903,
    -903,   454,  -903,   439,  -903,  -903,  -903,  -903,  -903,   251,
    -903,  -903,  -903,  5461,  5461,  5461,  -903,   338,  4952,  1126,
      41,  -903,  -903,  -903,  -903,  1126,   608,  -903,   509,  -903,
    -903,   515,   516,  -903,    41,   439,  1643,  1784,  1925,  -903,
     517,  4952,  -903,  -903,  -903,  4952,  4952,  -903,   510,  4952,
    4952,  4952,  4952,  4952,  4952,  4952,  4952,  4952,  4952,   513,
    3476,  -903,  -903,  -903,  -903,  4039,   518,  5461,  -903,  5144,
    -903,  5461,  -903,  5531,  -903,  -903,  -903,   519,  -903,  4952,
    -903,   520,  -903,    46,  -903,   514,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,   521,  -903,  -903,    59,  -903,    41,  -903,  -903,
    -903,  3617,  -903,  -903,   269,   522,  -903,   524,  -903,    60,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,   393,  1056,
     269,  -903,  -903,  -903,  -903,  -903,  -903,  -903,   526,  -903,
    -903,  -903,  -903,   527,  4952,  -903,   528,  4952,  -903,   530,
     532,   533,   534,   535,   536,   537,   538,   541,   542,  -903,
     544,  -903,  4472,  5413,    46,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  4472,  -903,    -2,  -903,  -903,  -903,
     523,   381,  5317,  4568,  5253,  -903,  -903,  -903,  -903,  -903,
    -903,  3617,  2207,  -903,   570,  1126,  5461,  -903,    37,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,   543,  3617,  -903,  -903,  -903,   545,  -903,
    -903,   547,  1126,  -903,  1353,   545,  1126,  -903,  -903,  -903,
     551,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,   634,   635,  -903,  -903,  5301,  -903,   472,    -2,   381,
    4760,  5509,  -903,  -903,  -903,  4472,  -903,  4760,  -903,  -903,
     529,  -903,  5317,  -903,  -903,  3617,  -903,  -903,    37,  -903,
    -903,  -903,  -903,  2912,  3053,  2771,  3194,  3476,  3335,   439,
    -903,  3617,  1353,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,   548,  -903,   552,   554,   564,  -903,  -903,  -903,   331,
    5301,  -903,   472,  -903,  5301,  4760,  -903,   557,  -903,   386,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,   566,  3758,   269,   545,   292,  -903,  2348,
    -903,  -903,  -903,  2066,  2489,  -903,   331,  5301,  -903,   336,
    -903,  -903,  -903,  3758,  -903,  -903,  -903,  -903,  -903,    46,
    -903,  -903,  -903,   336,  -903,  -903,  -903,  -903,  2630,   292,
    -903
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -903,  -903,  -261,  -903,  -903,   669,  -903,  -903,  -903,  -903,
    -635,   -93,    12,   -26,  -903,  -903,  -903,  -903,     6,  -903,
    -903,  -903,  -903,    -6,  -903,   324,  -903,  -903,     9,  -903,
    -903,   120,    16,   -25,  -903,  -903,  -903,    10,  -903,  -903,
    -175,  -581,    25,  -109,  -244,   245,    63,  -903,  -903,  -903,
    -903,   258,    28,  -903,  -903,    11,  -903,  -903,  -903,   -34,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -810,  -903,
    -903,  -903,   730,  -903,  -903,  -903,    50,   -56,    26,  -104,
    -903,  -903,  -173,  -243,  -903,  -903,  -903,  -186,   -46,  -266,
    -364,  -903,  -903,   -83,  -903,  -903,  -101,  -903,  -903,  -903,
    -903,  -903,  -903,   -89,  -562,  -903,  -903,  -903,  -161,  -903,
    -903,  -198,  -903,  -903,    57,   383,  -162,   388,  -903,    19,
     -95,  -551,  -903,  -903,  -138,  -903,  -903,  -903,  -726,  -903,
    -903,  -238,  -903,  -903,   -70,  -903,    -5,  -700,  -903,  -903,
     127,  -903,  -903,  -903,    -1,   160,    -4,    20,  -903,   -52,
      14,    55,  -903,  -903,   818,   -23,    23,  -903,     4,   -50,
    -903,  -903,  -414,  -903,   323,  -903,  -903,  -903,   -75,  -903,
    -903,  -903,  -903,  -903,  -903,  -213,  -373,   204,  -265,   458,
     460,  -903,  -903,    67,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,
    -903,  -903,  -903,  -903,  -903,  -903,  -903,  -903,  -245,  -115,
     -60,  -737,  -576,  -358,  -541,  -147,  -903,  -539,  -903,  -902,
    -903,  -903,  -903,  -428,  -903,  -903,    29,  -903,  -903,  -903,
    -903,  -903,  -226,  -860,  -903,  -754,  -903,  -903,  -666,  -903
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -412
static const yytype_int16 yytable[] =
{
     109,   179,   181,   107,   238,   194,   257,   271,   116,   258,
      89,   150,   272,   333,   149,    97,    86,   248,   249,   250,
     377,   444,   722,   450,   110,   150,   332,   293,   603,   632,
     102,   184,   680,   180,   853,   705,   436,   827,   628,   456,
     301,   275,   732,   200,   842,   918,   449,   323,  -320,   199,
     796,   287,   974,   607,   301,   229,   484,   485,   261,   113,
     842,   747,   959,   611,     3,   465,   274,   964,   897,   706,
     707,   986,   372,  -322,   612,   281,   743,   681,   682,   683,
    -140,   534,   183,    -2,   895,   150,  -307,  -321,   233,   436,
     268,   270,  -307,   768,   763,   451,  -143,  -275,  -140,   261,
     643,   243,   153,    89,   722,  -320,  -325,   911,   265,   275,
     450,   615,   154,   533,   234,   324,   616,   110,   644,   245,
     246,   988,   269,   102,   302,   263,   653,   266,   882,   631,
    -322,   654,   534,   449,   274,   201,   273,   608,   302,   272,
     -38,   289,  -326,   -38,  -321,   255,   976,   261,   442,   549,
    -324,   150,   183,   334,   305,   229,  -323,   874,   310,   311,
     183,   613,   548,  -325,   533,   262,   266,   202,   275,   389,
     726,   183,   390,   528,   291,   292,   150,   684,   275,   308,
     364,  -320,  -306,  -318,   364,   203,   713,   235,  -306,  -318,
     180,   150,   150,   274,   329,   330,   265,   266,   281,  -326,
     839,  -322,   307,   274,   309,   897,   262,  -324,   850,   204,
     897,   535,   464,  -323,   464,   748,   287,   268,  -411,  -411,
     335,   261,   651,   652,   599,   717,   601,   370,   -38,   975,
    -294,   -38,   150,  -321,   897,   374,  -294,   261,  -320,   183,
     624,   625,   626,   281,   717,   375,   642,   180,   150,   269,
    -292,   379,   791,   205,   262,   842,  -292,   364,  -322,   364,
      30,   110,   535,   273,   376,   150,   536,   102,   387,   206,
     260,   272,   264,  -319,   901,   383,   384,    16,    17,  -319,
     743,   288,  -293,   261,   660,   207,  -325,  -274,  -293,   334,
    -321,   386,   287,   388,   208,   907,   183,   656,   183,   476,
     275,   917,  -264,   743,   657,   919,   619,   717,   183,  -276,
     209,   299,  -326,   987,   210,  -276,   658,   536,   977,   692,
     978,   455,   693,   543,   261,   274,   323,   121,   262,   979,
     281,   722,   211,   466,   467,  -297,   364,   212,   364,  -308,
     828,  -297,   213,  -325,   262,  -308,   214,   953,   965,   268,
     185,  -324,  -323,   968,   839,   215,  -309,   594,  -310,   299,
     264,  -298,  -309,   150,  -310,   216,   583,  -298,   717,  -326,
     839,   464,   464,  -311,   287,   217,   218,  -312,   722,  -311,
     219,   180,   544,  -312,   220,   965,   968,  -313,   984,   183,
     262,   221,  -314,  -313,   324,   273,   840,   722,  -314,  -264,
    -296,  -295,   984,   251,   288,   364,  -296,  -295,  -324,  -323,
      30,   534,   534,   534,   602,   267,   364,   364,   -91,   300,
     244,   186,   187,   188,   189,   190,   191,   192,   254,   306,
     183,   262,   327,   260,   365,   593,  -315,   331,   365,  -320,
    -316,  -317,  -315,   533,   533,   533,  -316,  -317,   717,   288,
     600,   -38,   370,   926,   -38,   636,   927,   600,   926,   898,
     367,   927,  -322,   638,   186,   187,   188,   189,   190,   191,
     192,   717,   646,   904,  -321,   906,  -325,   908,  -326,   951,
     186,   187,   188,   189,   190,   191,   192,   576,   577,   578,
      30,    12,    13,    14,   852,   299,  -324,  -323,    16,    17,
      18,    19,    20,    21,    22,   357,   163,   366,   382,   393,
     439,   365,   451,   365,   637,   222,   223,   224,   225,   226,
     227,   228,   717,  -264,   229,   448,   545,   546,   550,   554,
     717,   717,   717,   717,   717,   717,   288,   555,   717,   557,
     558,   535,   535,   535,   568,   761,   559,   560,   893,   561,
     178,   562,   364,   563,   564,   565,   566,   567,   266,   464,
     569,   570,   572,   753,   244,   585,   150,  -207,   595,   679,
     186,   187,   188,   189,   190,   191,   192,   534,   605,   606,
     609,   717,   610,   618,   620,   630,    25,   647,   274,   650,
     365,   150,   365,   178,   703,   659,   536,   536,   536,   193,
     717,   662,   690,   736,   663,   667,   664,   700,   616,   533,
     689,   694,   183,   695,   696,   893,   468,   469,   470,   471,
     472,   473,   474,   730,   731,   733,   890,   734,   764,   150,
     150,   150,   750,   751,   752,   654,   765,   766,   778,   789,
     772,   899,   829,   816,   889,   824,   826,   924,   925,   836,
     936,   266,   845,  -270,   857,   858,   861,   254,   863,   365,
     864,   865,   866,   867,   868,   869,   870,   871,   872,   913,
     365,   365,   873,    80,   910,   916,   958,   922,   970,   799,
     960,   109,   961,   150,   810,   150,   817,   150,   583,   813,
     819,    89,   962,   183,   972,   584,   804,   797,   818,   688,
     963,   801,   931,   820,   271,   812,   937,   535,   648,   272,
     802,   238,   891,   803,   534,   846,   183,   767,   534,   534,
     183,   183,   649,   888,   183,   183,   183,   183,   183,   183,
     183,   183,   183,   183,    98,   805,   878,   902,   275,   938,
     113,   971,   809,   534,   287,   574,   533,   989,   746,   573,
     533,   533,   815,   849,   183,   453,   838,   454,   948,     0,
     261,     0,   536,   274,   837,     0,   281,     0,   281,     0,
       0,     0,     0,     0,     0,   533,   272,     0,     0,   891,
       0,     0,     0,   272,   238,   854,   891,   268,   270,   150,
       0,   594,     0,     0,     0,   933,   880,     0,   875,     0,
       0,     0,   718,   877,   364,   275,   365,   200,   887,     0,
      89,     0,   275,   199,     0,   885,   883,     0,     0,   269,
       0,   718,   150,     0,   812,   703,     0,     0,     0,   183,
     274,   272,   183,   892,   891,   281,     0,   274,     0,     0,
     261,     0,     0,     0,   535,   811,   281,   113,   535,   535,
       0,     0,     0,     0,     0,     0,     0,     0,   594,   113,
     275,   268,   364,     0,     0,     0,     0,   262,   113,   894,
     912,   150,     0,   535,   929,     0,     0,     0,     0,     0,
     668,   932,   274,   930,   718,   274,   934,     0,     0,   935,
       0,   180,     0,   269,     0,     0,   885,   883,     0,   536,
       0,     0,     0,   536,   536,   812,     0,   892,     0,   268,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   150,     0,   536,   966,
     150,     0,     0,   969,     0,   113,   894,     0,   967,   290,
     113,   180,   113,     0,     0,   718,     0,   262,     0,     0,
       0,     0,   879,     0,     0,   892,     0,     0,     0,     0,
       0,     0,     0,   150,   879,     0,   983,     0,     0,     0,
       0,     0,   299,   879,   288,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   773,     0,     0,     0,   775,   776,
     113,     0,   779,   780,   781,   782,   783,   784,   785,   786,
     787,   788,     0,   325,     0,     0,     0,     0,   814,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   336,
       0,     0,   825,   340,   341,   718,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     879,   288,     0,     0,     0,   879,     0,   879,   718,     0,
       0,     0,   299,     0,     0,     0,     0,     0,   365,   312,
     313,   314,   315,   316,   317,   318,   754,   755,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
     313,   314,   315,   316,   317,   318,   276,   277,     0,     0,
       0,     0,     0,     0,     0,   879,     0,   859,     0,   718,
     862,     0,     0,     0,   325,     0,     0,   718,   718,   718,
     718,   718,   718,     0,     0,   718,   365,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
     313,   314,   315,   316,   317,   318,   754,   755,     0,     0,
       0,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   551,   552,   553,   718,     0,
     556,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,   718,     0,     0,
     325,     0,     0,   756,     0,     0,     0,     0,   319,   291,
     292,   588,     0,     0,   589,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   319,   291,
     292,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   756,     0,     0,     0,     0,   319,     0,
       0,     0,   325,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   325,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,     0,   501,
     502,     0,   503,     0,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   396,   397,
     398,   518,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   519,   520,   521,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,    16,
      17,    18,    19,    20,    21,    22,   358,   163,     0,     0,
       0,     0,   359,     0,     0,     0,     0,     0,     0,     0,
       0,   522,   523,   524,   525,   526,   527,   528,     0,   529,
     530,     0,   424,   425,   426,   531,   428,   429,   430,   431,
     432,   433,   434,   532,     0,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   325,     0,     0,
       0,     0,     0,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,     0,   501,   502,     0,
     503,   588,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   396,   397,   398,   518,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   519,
     520,   521,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   325,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   522,
     523,   590,   525,   526,   527,   528,     0,   529,   530,     0,
     424,   425,   426,   531,   428,   429,   430,   431,   432,   433,
     434,   532,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   290,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   325,     0,     0,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
     325,     0,   501,   502,   325,   503,     0,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   396,   397,   398,   518,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   519,   520,   521,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   522,   523,   769,   525,   526,   527,
     528,     0,   529,   530,     0,   424,   425,   426,   531,   428,
     429,   430,   431,   432,   433,   434,   532,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,     0,   501,   502,     0,   503,     0,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   396,   397,   398,   518,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   519,   520,   521,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   522,   523,     0,   525,   526,
     527,   528,     0,   529,   530,   770,   424,   425,   426,   531,
     428,   429,   430,   431,   432,   433,   434,   532,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,     0,   501,   502,     0,   503,     0,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   396,   397,   398,   518,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,   519,   520,   521,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   522,   523,     0,   525,
     526,   527,   528,   771,   529,   530,     0,   424,   425,   426,
     531,   428,   429,   430,   431,   432,   433,   434,   532,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,     0,   501,   502,     0,   503,     0,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   396,   397,   398,   518,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   519,   520,   521,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   522,   523,   981,
     525,   526,   527,   528,     0,   529,   530,     0,   424,   425,
     426,   531,   428,   429,   430,   431,   432,   433,   434,   532,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,     0,   501,   502,     0,   503,
       0,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   396,   397,   398,   518,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,   519,   520,
     521,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   896,   523,
       0,   525,   526,   527,   528,     0,   529,   530,     0,   424,
     425,   426,   531,   428,   429,   430,   431,   432,   433,   434,
     532,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,     0,   501,   502,     0,
     503,     0,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   396,   397,   398,   518,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,   519,
     520,   521,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     523,     0,   525,   526,   527,   528,   980,   529,   530,     0,
     424,   425,   426,   531,   428,   429,   430,   431,   432,   433,
     434,   532,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,     0,     0,   501,   502,
       0,   503,     0,   504,   505,   506,   507,   508,   509,   510,
     511,   512,   513,   514,   515,   516,   517,   396,   397,   398,
     518,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
     519,   520,   521,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     982,   523,     0,   525,   526,   527,   528,     0,   529,   530,
       0,   424,   425,   426,   531,   428,   429,   430,   431,   432,
     433,   434,   532,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,   490,   491,   492,   493,
     494,   495,   496,   497,   498,   499,   500,     0,     0,   501,
     502,     0,   503,     0,   504,   505,   506,   507,   508,   509,
     510,   511,   512,   513,   514,   515,   516,   517,   396,   397,
     398,   518,   400,   401,   402,   403,   404,   405,   406,   407,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   519,   520,   521,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   990,   523,     0,   525,   526,   527,   528,     0,   529,
     530,     0,   424,   425,   426,   531,   428,   429,   430,   431,
     432,   433,   434,   532,   477,   478,   479,   480,   481,   482,
     483,   706,   707,   486,   487,   488,   489,   490,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,     0,     0,
     501,   502,     0,   503,     0,   504,   505,   506,   507,   508,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   396,
     397,   398,   738,   400,   401,   402,   403,   404,   405,   406,
     407,   408,   409,   410,   411,   412,   413,   414,   415,   416,
     417,   418,     0,   708,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   946,   709,   947,   940,   711,   941,   713,     0,
     739,   715,     0,   424,   425,   426,   740,   428,   429,   430,
     431,   432,   433,   434,   716,   477,   478,   479,   480,   481,
     482,   483,   706,   707,   486,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   500,     0,
       0,   501,   502,     0,   503,     0,   504,   505,   506,   507,
     508,   509,   510,   511,   512,   513,   514,   515,   516,   517,
     396,   397,   398,   738,   400,   401,   402,   403,   404,   405,
     406,   407,   408,   409,   410,   411,   412,   413,   414,   415,
     416,   417,   418,     0,   708,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   709,     0,   940,   711,   941,   713,
     942,   739,   715,     0,   424,   425,   426,   740,   428,   429,
     430,   431,   432,   433,   434,   716,   477,   478,   479,   480,
     481,   482,   483,   706,   707,   486,   487,   488,   489,   490,
     491,   492,   493,   494,   495,   496,   497,   498,   499,   500,
       0,     0,   501,   502,     0,   503,     0,   504,   505,   506,
     507,   508,   509,   510,   511,   512,   513,   514,   515,   516,
     517,   396,   397,   398,   738,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,     0,   708,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   709,     0,   940,   711,   941,
     713,   945,   739,   715,     0,   424,   425,   426,   740,   428,
     429,   430,   431,   432,   433,   434,   716,   477,   478,   479,
     480,   481,   482,   483,   706,   707,   486,   487,   488,   489,
     490,   491,   492,   493,   494,   495,   496,   497,   498,   499,
     500,     0,     0,   501,   502,     0,   503,     0,   504,   505,
     506,   507,   508,   509,   510,   511,   512,   513,   514,   515,
     516,   517,   396,   397,   398,   738,   400,   401,   402,   403,
     404,   405,   406,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,     0,   708,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   709,     0,   940,   711,
     941,   713,   950,   739,   715,     0,   424,   425,   426,   740,
     428,   429,   430,   431,   432,   433,   434,   716,   477,   478,
     479,   480,   481,   482,   483,   706,   707,   486,   487,   488,
     489,   490,   491,   492,   493,   494,   495,   496,   497,   498,
     499,   500,     0,     0,   501,   502,     0,   503,     0,   504,
     505,   506,   507,   508,   509,   510,   511,   512,   513,   514,
     515,   516,   517,   396,   397,   398,   738,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,     0,   708,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   709,     0,   940,
     711,   941,   713,     0,   739,   715,   952,   424,   425,   426,
     740,   428,   429,   430,   431,   432,   433,   434,   716,   477,
     478,   479,   480,   481,   482,   483,   706,   707,   486,   487,
     488,   489,   490,   491,   492,   493,   494,   495,   496,   497,
     498,   499,   500,     0,     0,   501,   502,     0,   503,     0,
     504,   505,   506,   507,   508,   509,   510,   511,   512,   513,
     514,   515,   516,   517,   396,   397,   398,   301,   400,   401,
     402,   403,   404,   405,   406,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,     0,   708,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   709,     0,
     710,   711,   712,   713,     0,   714,   715,     0,   424,   425,
     426,   302,   428,   429,   430,   431,   432,   433,   434,   716,
     477,   478,   479,   480,   481,   482,   483,   706,   707,   486,
     487,   488,   489,   490,   491,   492,   493,   494,   495,   496,
     497,   498,   499,   500,     0,     0,   501,   502,     0,   503,
       0,   504,   505,   506,   507,   508,   509,   510,   511,   512,
     513,   514,   515,   516,   517,   396,   397,   398,   738,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     411,   412,   413,   414,   415,   416,   417,   418,     0,   708,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   709,
       0,     0,   711,     0,   713,     0,   739,   715,     0,   424,
     425,   426,   740,   428,   429,   430,   431,   432,   433,   434,
     716,   477,   478,   479,   480,   481,   482,   483,   706,   707,
     486,   487,   488,   489,   490,   491,   492,   493,   494,   495,
     496,   497,   498,   499,   500,     0,     0,   501,   502,     0,
     503,     0,   504,   505,   506,   507,   508,   509,   510,   511,
     512,   513,   514,   515,   516,   517,   396,   397,   398,     0,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   412,   413,   414,   415,   416,   417,   418,     0,
     708,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     709,     0,     0,   711,     0,   713,     0,   714,   715,     0,
     424,   425,   426,     0,   428,   429,   430,   431,   432,   433,
     434,   716,   156,   157,   158,   159,   160,   161,   162,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,   236,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,     0,   163,     0,     0,     0,    26,     0,     0,
       0,   394,   395,     0,     0,     0,     0,   396,   397,   398,
     399,   400,   401,   402,   403,   404,   405,   406,   407,   408,
     409,   410,   411,   412,   413,   414,   415,   416,   417,   418,
       0,    30,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   419,     0,   420,   421,     0,   422,   423,
       0,   547,   425,   426,   427,   428,   429,   430,   431,   432,
     433,   434,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,    22,   792,   163,    24,    25,     0,    26,    27,     0,
     793,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,   794,
     795,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,    78,     0,     0,     0,     0,     0,    12,    13,    14,
      15,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,    23,    24,    25,     0,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,     0,    77,
     156,   157,   158,   159,   160,   161,   162,     0,     0,     0,
      78,     0,     0,     0,     0,     0,    12,    13,    14,   236,
       0,     0,     0,    16,    17,    18,    19,    20,    21,    22,
       0,   163,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   156,   157,   158,   159,
     160,   161,   162,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,    13,    14,    15,     0,     0,     0,    16,
      17,    18,    19,    20,    21,    22,     0,   163,    24,   178,
       0,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,     0,     0,     0,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   236,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,   178,   163,    24,    25,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,     5,     6,     7,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    12,    13,    14,
      15,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,   163,    24,    78,     0,    26,    27,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,   156,   157,   158,
     159,   160,   161,   162,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    12,    13,    14,   236,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,     0,   163,    24,
      78,     0,    26,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,     5,     6,     7,     8,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    12,
      13,    14,   236,     0,     0,     0,    16,    17,    18,    19,
      20,    21,    22,     0,   163,    24,   178,     0,    26,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,   156,
     157,   158,   159,   160,   161,   162,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    12,    13,    14,    15,     0,
       0,     0,    16,    17,    18,    19,    20,    21,    22,     0,
     163,     0,    78,     0,    26,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   156,   157,   158,   159,   160,
     161,   162,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,   236,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,     0,   163,     0,   178,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   156,   157,   158,   159,   160,   161,   162,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   633,     0,   634,
     635,     0,     0,     0,    16,    17,    18,    19,    20,    21,
      22,     0,   163,     0,   178,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
     313,   314,   315,   316,   317,   318,   276,   277,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   128,   129,   130,
     131,   132,   133,   134,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   576,   577,   578,
       0,     0,     0,     0,   579,     0,     0,     0,     0,     0,
     178,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   128,   129,
     130,   131,   132,   133,   134,     0,    30,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   319,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,   195,     0,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   128,   129,   130,   131,
     132,   133,   134,   276,   277,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    30,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    24,     0,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   128,   129,   130,   131,   132,   133,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     128,   129,   130,   131,   132,   133,   134,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    78,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    24,   256,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   128,   129,   130,   131,
     132,   133,   134,   926,     0,     0,   927,     0,     0,     0,
       0,     0,     0,    78,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
       0,   195,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   128,   129,   130,   131,   132,   133,
     134,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    30,   128,   129,   130,   131,
     132,   133,   134,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   128,   129,   130,   131,   132,   133,   134,   256,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,   312,   313,   314,   315,   316,   317,
     318,     0,     0,     0,    24,    78,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
       0,     0,     0,     0,     0,     0,     0,     0,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    78,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,     0,     0,
       0,     0,     0,     0,     0,    78,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      16,    17,    18,    19,    20,    21,    22,   358,   163,     0,
       0,    78,     0,   359,    16,    17,    18,    19,    20,    21,
      22,   358,   163,     0,     0,     0,     0,   359,     0,     0,
       0,     0,     0,   319,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,     0,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  -223,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   291,   292,     0,
       0,     0,     0,     0,     0,     0,     0,   394,   395,     0,
       0,   291,   292,   396,   397,   398,   399,   400,   401,   402,
     403,   404,   405,   406,   407,   408,   409,   410,   411,   412,
     413,   414,   415,   416,   417,   418,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   419,
       0,   420,   421,     0,   422,   423,     0,   424,   425,   426,
     427,   428,   429,   430,   431,   432,   433,   434
};

static const yytype_int16 yycheck[] =
{
       4,    27,    27,     4,    97,    28,   110,   116,     4,   110,
       4,    15,   116,   199,    15,     4,     4,   100,   101,   102,
     246,   286,   598,   289,     4,    29,   199,   122,   392,   457,
       4,    27,   571,    27,   760,   597,   281,   703,   452,   300,
      51,   116,   604,    29,   744,   855,   289,   185,    72,    29,
     685,   121,   954,    51,    51,    78,    10,    11,   110,     4,
     760,   623,   922,    26,     0,   309,   116,   927,   822,    10,
      11,   973,   234,    72,    37,   121,   617,    23,    24,    25,
      20,   326,    27,     0,   821,    89,   121,    72,    89,   334,
     116,   116,   127,   655,   645,   125,    36,   127,    38,   151,
      20,    97,    12,    97,   680,   129,    72,   844,   112,   184,
     376,   121,   129,   326,    91,   185,   126,    97,    38,   121,
     122,   981,   116,    97,   135,   111,   121,   113,   794,   126,
     129,   126,   377,   376,   184,   127,   116,   135,   135,   243,
     122,   121,    72,   125,   129,   121,   956,   199,   286,   335,
      72,   155,    97,   199,   155,   178,    72,   792,   184,   184,
     105,   124,   335,   129,   377,   110,   152,   127,   243,   273,
     598,   116,   273,   127,   133,   134,   180,   123,   253,   180,
     230,    72,   121,   121,   234,   127,   127,   122,   127,   127,
     184,   195,   196,   243,   195,   196,   200,   183,   244,   129,
     741,    72,   179,   253,   181,   959,   151,   129,   759,   127,
     964,   326,   307,   129,   309,   629,   286,   243,    26,    27,
     200,   273,   466,   467,   386,   598,   388,   121,   122,   955,
     121,   125,   236,    72,   988,   236,   127,   289,   129,   184,
      13,    14,    15,   289,   617,   241,   459,   241,   252,   243,
     121,   252,   680,   127,   199,   955,   127,   307,   129,   309,
      72,   241,   377,   243,   244,   269,   326,   241,   269,   127,
     110,   375,   112,   121,   825,   261,   262,    26,    27,   127,
     821,   121,   121,   335,   545,   127,    72,   121,   127,   335,
     129,   268,   362,   270,   127,   834,   241,   523,   243,   127,
     375,   852,   130,   844,   530,   856,   444,   680,   253,   121,
     127,   151,    72,   979,   127,   127,   542,   377,    26,   123,
      28,   298,   126,   327,   376,   375,   464,     4,   273,    37,
     376,   907,   127,   310,   311,   121,   386,   127,   388,   121,
     704,   127,   127,   129,   289,   127,   127,   909,   929,   375,
      27,    72,    72,   934,   895,   127,   121,   380,   121,   199,
     200,   121,   127,   367,   127,   127,   367,   127,   741,   129,
     911,   466,   467,   121,   444,   127,   127,   121,   954,   127,
     127,   375,   327,   127,   127,   966,   967,   121,   969,   334,
     335,   127,   121,   127,   464,   375,   127,   973,   127,   130,
     121,   121,   983,   127,   244,   455,   127,   127,   129,   129,
      72,   656,   657,   658,   391,   129,   466,   467,   122,   122,
      97,     3,     4,     5,     6,     7,     8,     9,   105,    12,
     375,   376,   124,   273,   230,   380,   121,   121,   234,   129,
     121,   121,   127,   656,   657,   658,   127,   127,   821,   289,
     121,   122,   121,   122,   125,   459,   125,   121,   122,   823,
     125,   125,   129,   459,     3,     4,     5,     6,     7,     8,
       9,   844,   461,   831,   129,   833,   129,   835,   129,   907,
       3,     4,     5,     6,     7,     8,     9,    23,    24,    25,
      72,    19,    20,    21,   759,   335,   129,   129,    26,    27,
      28,    29,    30,    31,    32,   129,    34,   122,   127,   127,
     124,   307,   125,   309,   459,     3,     4,     5,     6,     7,
       8,     9,   895,   130,   547,   127,   122,   121,   126,   126,
     903,   904,   905,   906,   907,   908,   376,   126,   911,   126,
     126,   656,   657,   658,   128,   640,   126,   126,   814,   126,
     132,   126,   602,   126,   126,   126,   126,   126,   544,   654,
     128,   126,   121,   638,   241,   121,   570,   128,   125,   570,
       3,     4,     5,     6,     7,     8,     9,   822,   130,   130,
     128,   954,   131,   128,   130,   123,    36,   121,   638,   121,
     386,   595,   388,   132,   595,   121,   656,   657,   658,   122,
     973,   126,    30,    18,   128,   126,   128,   593,   126,   822,
     126,   124,   557,   124,   128,   881,     3,     4,     5,     6,
       7,     8,     9,   121,   121,   131,   812,   131,    20,   633,
     634,   635,   633,   634,   635,   126,   121,   121,   128,   126,
     123,    71,   128,   125,   121,   126,   126,    13,    13,   128,
     121,   637,   128,   131,   128,   128,   128,   334,   128,   455,
     128,   128,   128,   128,   128,   128,   128,   126,   126,   124,
     466,   467,   128,     4,   131,   128,   128,   126,   121,   685,
     128,   685,   128,   687,   685,   689,   687,   691,   689,   685,
     691,   685,   128,   638,   128,   371,   685,   685,   689,   579,
     926,   685,   877,   693,   813,   685,   892,   822,   463,   813,
     685,   804,   813,   685,   959,   749,   661,   654,   963,   964,
     665,   666,   464,   806,   669,   670,   671,   672,   673,   674,
     675,   676,   677,   678,     4,   685,   792,   826,   813,   900,
     685,   939,   685,   988,   814,   362,   959,   985,   621,   361,
     963,   964,   685,   758,   699,   297,   737,   297,   905,    -1,
     812,    -1,   822,   813,   735,    -1,   812,    -1,   814,    -1,
      -1,    -1,    -1,    -1,    -1,   988,   880,    -1,    -1,   880,
      -1,    -1,    -1,   887,   877,   762,   887,   813,   813,   793,
      -1,   814,    -1,    -1,    -1,   878,   792,    -1,   792,    -1,
      -1,    -1,   598,   792,   854,   880,   602,   793,   804,    -1,
     804,    -1,   887,   793,    -1,   804,   804,    -1,    -1,   813,
      -1,   617,   826,    -1,   804,   826,    -1,    -1,    -1,   774,
     880,   935,   777,   813,   935,   881,    -1,   887,    -1,    -1,
     892,    -1,    -1,    -1,   959,   685,   892,   792,   963,   964,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   881,   804,
     935,   887,   912,    -1,    -1,    -1,    -1,   812,   813,   814,
     847,   875,    -1,   988,   875,    -1,    -1,    -1,    -1,    -1,
     557,   877,   932,   877,   680,   935,   880,    -1,    -1,   885,
      -1,   885,    -1,   887,    -1,    -1,   885,   885,    -1,   959,
      -1,    -1,    -1,   963,   964,   885,    -1,   887,    -1,   935,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   930,    -1,   988,   930,
     934,    -1,    -1,   934,    -1,   880,   881,    -1,   932,   121,
     885,   935,   887,    -1,    -1,   741,    -1,   892,    -1,    -1,
      -1,    -1,   792,    -1,    -1,   935,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   967,   804,    -1,   967,    -1,    -1,    -1,
      -1,    -1,   812,   813,   814,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   661,    -1,    -1,    -1,   665,   666,
     935,    -1,   669,   670,   671,   672,   673,   674,   675,   676,
     677,   678,    -1,   185,    -1,    -1,    -1,    -1,   685,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   201,
      -1,    -1,   699,   205,   206,   821,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     880,   881,    -1,    -1,    -1,   885,    -1,   887,   844,    -1,
      -1,    -1,   892,    -1,    -1,    -1,    -1,    -1,   854,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   935,    -1,   774,    -1,   895,
     777,    -1,    -1,    -1,   286,    -1,    -1,   903,   904,   905,
     906,   907,   908,    -1,    -1,   911,   912,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,   337,   338,   339,   954,    -1,
     342,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,   973,    -1,    -1,
     362,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,   133,
     134,   373,    -1,    -1,   376,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   127,    -1,    -1,    -1,    -1,   132,    -1,
      -1,    -1,   444,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   464,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    -1,    -1,
      -1,    -1,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,   123,   124,   125,   126,   127,    -1,   129,
     130,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,    -1,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   639,    -1,    -1,
      -1,    -1,    -1,   645,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    29,    30,    -1,
      32,   693,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,   759,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,
     122,   123,   124,   125,   126,   127,    -1,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   814,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   825,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
     852,    -1,    29,    30,   856,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   121,   122,   123,   124,   125,   126,
     127,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,   125,
     126,   127,    -1,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   121,   122,    -1,   124,
     125,   126,   127,   128,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,   123,
     124,   125,   126,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   121,   122,
      -1,   124,   125,   126,   127,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,   124,   125,   126,   127,   128,   129,   130,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     121,   122,    -1,   124,   125,   126,   127,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   121,   122,    -1,   124,   125,   126,   127,    -1,   129,
     130,    -1,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    -1,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   121,   122,   123,   124,   125,   126,   127,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    -1,   124,   125,   126,   127,
     128,   129,   130,    -1,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,   125,
     126,   127,   128,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    72,    -1,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,   124,
     125,   126,   127,    -1,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    -1,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,    -1,
     124,   125,   126,   127,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   122,
      -1,    -1,   125,    -1,   127,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     122,    -1,    -1,   125,    -1,   127,    -1,   129,   130,    -1,
     132,   133,   134,    -1,   136,   137,   138,   139,   140,   141,
     142,   143,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    -1,    34,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    42,    43,    -1,    -1,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      -1,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   124,    -1,   126,   127,    -1,   129,   130,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,
      21,    22,    -1,    -1,    -1,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,   132,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,    36,    -1,    38,    39,    40,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,    -1,   121,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,
      -1,    -1,    -1,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,
      27,    28,    29,    30,    31,    32,    -1,    34,    35,   132,
      -1,    38,    39,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,   132,    34,    35,    36,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    20,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    35,   132,    -1,    38,    39,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    19,    20,    21,    22,    -1,    -1,    -1,
      26,    27,    28,    29,    30,    31,    32,    -1,    34,    35,
     132,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,
      20,    21,    22,    -1,    -1,    -1,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    35,   132,    -1,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    72,    -1,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    19,    20,    21,    22,    -1,
      -1,    -1,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,   132,    -1,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    19,    20,    21,    22,    -1,    -1,    -1,    26,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,   132,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    19,    -1,    21,
      22,    -1,    -1,    -1,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,   132,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    23,    24,    25,
      -1,    -1,    -1,    -1,    30,    -1,    -1,    -1,    -1,    -1,
     132,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,    72,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    38,    -1,    40,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    72,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,     3,     4,     5,     6,
       7,     8,     9,   122,    -1,    -1,   125,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    72,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,     3,     4,     5,     6,     7,     8,     9,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    72,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    35,   132,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    -1,
      -1,   132,    -1,    39,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    -1,    -1,    -1,    -1,    39,    -1,    -1,
      -1,    -1,    -1,   132,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    -1,
      -1,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   121,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   133,   134,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    -1,
      -1,   133,   134,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   124,
      -1,   126,   127,    -1,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142
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
     113,   114,   115,   116,   117,   118,   119,   121,   132,   148,
     149,   150,   151,   153,   154,   155,   156,   157,   159,   162,
     176,   177,   179,   186,   187,   196,   198,   199,   216,   217,
     218,   219,   222,   223,   226,   232,   258,   288,   289,   290,
     291,   293,   294,   295,   298,   299,   302,   303,   304,   305,
     306,   308,   309,   312,   319,   320,   321,   327,     3,     4,
       5,     6,     7,     8,     9,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,   288,
     290,   291,   295,    12,   129,   313,     3,     4,     5,     6,
       7,     8,     9,    34,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,   132,   157,
     162,   177,   290,   295,   302,   308,     3,     4,     5,     6,
       7,     8,     9,   122,   299,    38,    40,   197,   288,   291,
     294,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,     3,     4,     5,     6,     7,     8,     9,   299,
     300,   158,   161,   288,   300,   122,    22,   149,   155,   156,
     183,   199,   216,   302,   308,   121,   122,   237,   237,   237,
     237,   127,   162,   302,   308,   121,    36,   223,   240,   243,
     289,   293,   295,   294,   289,   290,   294,   129,   157,   162,
     177,   187,   223,   291,   303,   312,    10,    11,   227,   229,
     231,   232,   233,   238,   259,   268,   271,   278,   289,   291,
     298,   133,   134,   264,   322,   323,   324,   326,   310,   289,
     122,    51,   135,   200,   367,   288,    12,   300,   288,   300,
     157,   177,     3,     4,     5,     6,     7,     8,     9,   132,
     191,   192,   195,   268,   278,   298,   376,   124,   152,   288,
     288,   121,   226,   231,   232,   291,   298,   329,   332,   333,
     298,   298,   337,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   129,    33,    39,
     260,   263,   264,   301,   303,   321,   122,   125,   169,   170,
     121,   160,   260,   178,   288,   302,   291,   376,   224,   288,
     292,   241,   127,   294,   294,   296,   300,   288,   300,   223,
     240,   311,   228,   127,    42,    43,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,   124,
     126,   127,   129,   130,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   351,   352,   234,   261,   124,
     255,   256,   268,   277,   322,   280,   281,   282,   127,   227,
     233,   125,   325,   323,   324,   300,   146,   201,   203,   204,
     206,   208,   188,   190,   264,   188,   300,   300,     3,     4,
       5,     6,     7,     8,     9,   189,   127,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    29,    30,    32,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    51,    71,
      72,    73,   121,   122,   123,   124,   125,   126,   127,   129,
     130,   135,   143,   319,   352,   353,   354,   378,   379,   380,
     381,   382,   383,   290,   295,   122,   121,   132,   226,   231,
     126,   298,   298,   298,   126,   126,   298,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   128,   128,
     126,   297,   121,   261,   259,   163,    23,    24,    25,    30,
     171,   172,   175,   288,   169,   121,   180,   181,   298,   298,
     123,   248,   249,   295,   299,   125,   245,   244,   361,   260,
     121,   260,   300,   234,   230,   130,   130,    51,   135,   128,
     131,    26,    37,   124,   235,   121,   126,   257,   128,   268,
     130,   283,   284,   239,    13,    14,    15,   279,   306,   307,
     123,   126,   367,    19,    21,    22,   290,   295,   302,   314,
     315,   318,   319,    20,    38,   211,   199,   121,   189,   195,
     121,   188,   188,   121,   126,   193,   376,   376,   376,   121,
     146,   328,   126,   128,   128,   334,   336,   126,   308,   340,
     342,   344,   346,   341,   343,   345,   347,   348,   349,   288,
     361,    23,    24,    25,   123,   164,   165,   174,   175,   126,
      30,   173,   123,   126,   124,   124,   128,   250,   252,   253,
     294,   246,   247,   288,   242,   248,    10,    11,    72,   122,
     124,   125,   126,   127,   129,   130,   143,   320,   321,   352,
     353,   354,   356,   363,   364,   365,   367,   368,   370,   374,
     121,   121,   248,   131,   131,   236,    18,   262,    51,   129,
     135,   355,   356,   358,   269,   285,   284,   248,   306,   202,
     288,   288,   288,   312,    10,    11,   127,   265,   266,   270,
     278,   264,   316,   265,    20,   121,   121,   190,   248,   123,
     131,   128,   123,   308,   330,   308,   308,   338,   128,   308,
     308,   308,   308,   308,   308,   308,   308,   308,   308,   126,
     350,   367,    33,    41,   120,   121,   154,   156,   166,   167,
     168,   176,   186,   196,   199,   220,   221,   222,   240,   258,
     288,   289,   291,   302,   308,   327,   125,   288,   172,   288,
     181,   182,   377,   225,   126,   308,   126,   382,   234,   128,
     372,   373,   375,   371,   366,   369,   128,   370,   263,   358,
     127,   272,   281,   286,   287,   128,   203,   317,   205,   280,
     265,   276,   322,   272,   300,   207,   209,   128,   128,   308,
     335,   128,   308,   128,   128,   128,   128,   128,   128,   128,
     128,   126,   126,   128,   154,   162,   184,   199,   221,   289,
     302,   308,   382,   156,   167,   199,   220,   302,   237,   121,
     231,   240,   291,   233,   295,   355,   121,   379,   234,    71,
     251,   265,   247,   357,   357,   362,   357,   361,   357,   273,
     131,   355,   300,   124,   212,   213,   128,   265,   212,   265,
     194,   331,   126,   339,    13,    13,   122,   125,   185,   288,
     162,   184,   302,   237,   162,   302,   121,   231,   252,   254,
     124,   126,   128,   358,   359,   128,   121,   123,   359,   360,
     128,   367,   131,   248,   214,   267,   210,   275,   128,   377,
     128,   128,   128,   376,   377,   185,   288,   162,   185,   288,
     121,   255,   128,   215,   363,   272,   212,    26,    28,    37,
     128,   123,   121,   288,   185,   274,   363,   382,   377,   275,
     121
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
#line 1484 "vtkParse.y"
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
#line 1529 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 1530 "vtkParse.y"
    { popNamespace(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1552 "vtkParse.y"
    { pushType(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
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

  case 38:

/* Line 1455 of yacc.c  */
#line 1566 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), (yyvsp[(1) - (2)].integer)); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1568 "vtkParse.y"
    { start_class(NULL, (yyvsp[(1) - (1)].integer)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1572 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1573 "vtkParse.y"
    { (yyval.integer) = 1; }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 1574 "vtkParse.y"
    { (yyval.integer) = 2; }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1578 "vtkParse.y"
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
#line 1590 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 1591 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 1592 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 1618 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1632 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(1) - (1)].str), access_level, 0); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1634 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(3) - (3)].str), (yyvsp[(2) - (3)].integer), 1); }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1636 "vtkParse.y"
    { add_base_class(currentClass, (yyvsp[(3) - (3)].str), (yyvsp[(1) - (3)].integer), (yyvsp[(2) - (3)].integer)); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1639 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1640 "vtkParse.y"
    { (yyval.integer) = 1; }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1643 "vtkParse.y"
    { (yyval.integer) = access_level; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1647 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PUBLIC; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1648 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PRIVATE; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1649 "vtkParse.y"
    { (yyval.integer) = VTK_ACCESS_PROTECTED; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1665 "vtkParse.y"
    { pushType(); start_enum((yyvsp[(1) - (2)].str)); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1666 "vtkParse.y"
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
#line 1678 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (2)].str); }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1679 "vtkParse.y"
    { (yyval.str) = NULL; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1686 "vtkParse.y"
    { add_enum((yyvsp[(1) - (1)].str), NULL); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1687 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1688 "vtkParse.y"
    { chopSig(); add_enum((yyvsp[(1) - (4)].str), copySig()); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 1741 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 1742 "vtkParse.y"
    { postSig(")"); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 1743 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; popFunction(); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 1747 "vtkParse.y"
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

  case 123:

/* Line 1455 of yacc.c  */
#line 1780 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 1784 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (2)].str); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1786 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1788 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1790 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1792 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1795 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1803 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1805 "vtkParse.y"
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1813 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1824 "vtkParse.y"
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1828 "vtkParse.y"
    { markSig(); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1830 "vtkParse.y"
    { add_template_parameter(getType(), (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1832 "vtkParse.y"
    { markSig(); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1834 "vtkParse.y"
    { add_template_parameter(0, (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1836 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1837 "vtkParse.y"
    { postSig("class"); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1839 "vtkParse.y"
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (yyvsp[(5) - (5)].integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 1850 "vtkParse.y"
    { postSig("class "); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1851 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1857 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1859 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1876 "vtkParse.y"
    { output_function(); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1877 "vtkParse.y"
    { output_function(); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1878 "vtkParse.y"
    { reject_function(); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1879 "vtkParse.y"
    { reject_function(); }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1895 "vtkParse.y"
    { output_function(); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1912 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1916 "vtkParse.y"
    { postSig(")"); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1918 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1929 "vtkParse.y"
    { (yyval.str) = copySig(); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1932 "vtkParse.y"
    { postSig(")"); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1933 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1943 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1952 "vtkParse.y"
    { chopSig(); (yyval.str) = vtkstrcat(copySig(), (yyvsp[(2) - (2)].str)); postSig((yyvsp[(2) - (2)].str)); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1955 "vtkParse.y"
    { markSig(); postSig("operator "); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1959 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1971 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1971 "vtkParse.y"
    { chopSig(); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1972 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1974 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1986 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1990 "vtkParse.y"
    { postSig(")"); }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1997 "vtkParse.y"
    { closeSig(); }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1998 "vtkParse.y"
    { openSig(); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1999 "vtkParse.y"
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

  case 200:

/* Line 1455 of yacc.c  */
#line 2016 "vtkParse.y"
    { pushType(); postSig("("); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 2017 "vtkParse.y"
    { popType(); postSig(")"); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 2034 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 2037 "vtkParse.y"
    { clearType(); clearTypeId(); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 2038 "vtkParse.y"
    { clearType(); clearTypeId(); postSig(", "); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 2041 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 2044 "vtkParse.y"
    { markSig(); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 2046 "vtkParse.y"
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

  case 216:

/* Line 1455 of yacc.c  */
#line 2061 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = getVarValue();
        }
    }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 2070 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 2074 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 2075 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 2086 "vtkParse.y"
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

  case 226:

/* Line 1455 of yacc.c  */
#line 2148 "vtkParse.y"
    { postSig(", "); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 2154 "vtkParse.y"
    { setTypePtr(0); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 2155 "vtkParse.y"
    { setTypePtr((yyvsp[(1) - (1)].integer)); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 2159 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 2160 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 2162 "vtkParse.y"
    {
      if ((yyvsp[(2) - (2)].integer) == VTK_PARSE_FUNCTION)
        {
        (yyval.integer) = VTK_PARSE_FUNCTION_PTR;
        }
      else
        {
        (yyval.integer) = 0;
        }
    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 2172 "vtkParse.y"
    { postSig(")"); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 2174 "vtkParse.y"
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

  case 236:

/* Line 1455 of yacc.c  */
#line 2191 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 2192 "vtkParse.y"
    { postSig(")"); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 2194 "vtkParse.y"
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

  case 239:

/* Line 1455 of yacc.c  */
#line 2210 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 2211 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 2213 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 2217 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 2219 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 2222 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 2223 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 2224 "vtkParse.y"
    { postSig(")"); }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 2225 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 2229 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 2233 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 2239 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 2244 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 2247 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 2248 "vtkParse.y"
    { setVarName((yyvsp[(1) - (3)].str)); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 2256 "vtkParse.y"
    { clearArray(); }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 2260 "vtkParse.y"
    { clearArray(); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 2267 "vtkParse.y"
    { postSig("["); }
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 2267 "vtkParse.y"
    { postSig("]"); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 2270 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 2271 "vtkParse.y"
    { markSig(); }
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 2271 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 2287 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 2289 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 2291 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 2295 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2297 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2299 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2301 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2302 "vtkParse.y"
    { postSig("template "); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2304 "vtkParse.y"
    { (yyval.str) = vtkstrcat4((yyvsp[(1) - (5)].str), "template ", (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2307 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2310 "vtkParse.y"
    { (yyval.str) = "::"; postSig((yyval.str)); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2313 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2315 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = copySig(); clearTypeId();
    }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2320 "vtkParse.y"
    { markSig(); postSig("~"); postSig((yyvsp[(2) - (3)].str)); postSig("<"); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2322 "vtkParse.y"
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = copySig(); clearTypeId();
    }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2335 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2336 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 2337 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2338 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2339 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2340 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2341 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2342 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2343 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2344 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2345 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2346 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2347 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 2348 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2349 "vtkParse.y"
    { (yyval.str) = "size_t"; postSig((yyval.str)); }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 2350 "vtkParse.y"
    { (yyval.str) = "ssize_t"; postSig((yyval.str)); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2351 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; postSig((yyval.str)); }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2352 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; postSig((yyval.str)); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2353 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; postSig((yyval.str)); }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2354 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; postSig((yyval.str)); }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2355 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; postSig((yyval.str)); }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2356 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; postSig((yyval.str)); }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2357 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; postSig((yyval.str)); }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 2358 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; postSig((yyval.str)); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 2359 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; postSig((yyval.str)); }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2360 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; postSig((yyval.str)); }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2361 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; postSig((yyval.str)); }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 2362 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; postSig((yyval.str)); }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2388 "vtkParse.y"
    { setTypeBase(buildTypeBase(getType(), (yyvsp[(1) - (1)].integer))); }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 2389 "vtkParse.y"
    { setTypeMod(VTK_PARSE_TYPEDEF); }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2390 "vtkParse.y"
    { setTypeMod(VTK_PARSE_FRIEND); }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2397 "vtkParse.y"
    { setTypeMod((yyvsp[(1) - (1)].integer)); }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2398 "vtkParse.y"
    { setTypeMod((yyvsp[(1) - (1)].integer)); }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2399 "vtkParse.y"
    { setTypeMod((yyvsp[(1) - (1)].integer)); }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2402 "vtkParse.y"
    { postSig("mutable "); (yyval.integer) = VTK_PARSE_MUTABLE; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2403 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2404 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2405 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2408 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2409 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2410 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2413 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2414 "vtkParse.y"
    { postSig("volatile "); (yyval.integer) = VTK_PARSE_VOLATILE; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2419 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2430 "vtkParse.y"
    { setTypeBase((yyvsp[(1) - (1)].integer)); }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2432 "vtkParse.y"
    { setTypeBase((yyvsp[(2) - (2)].integer)); }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 2437 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 2438 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = guess_id_type((yyvsp[(3) - (3)].str)); }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 2440 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 2442 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 2444 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 2446 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 2452 "vtkParse.y"
    { setTypeBase((yyvsp[(1) - (1)].integer)); }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 2454 "vtkParse.y"
    { setTypeBase((yyvsp[(2) - (2)].integer)); }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 2460 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 2462 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = guess_id_type((yyvsp[(1) - (1)].str)); }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 2464 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 2466 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 2468 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(2) - (2)].str)); (yyval.integer) = guess_id_type((yyvsp[(2) - (2)].str)); }
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 2471 "vtkParse.y"
    { setTypeId(""); }
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 2475 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 2476 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 2477 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 2478 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 2479 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 2480 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 2481 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 2482 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 2483 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 2484 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 2485 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 2486 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 2487 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2488 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2489 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 2490 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 2491 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 2492 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2493 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2494 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2495 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2498 "vtkParse.y"
    { postSig("void "); (yyval.integer) = VTK_PARSE_VOID; }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2499 "vtkParse.y"
    { postSig("bool "); (yyval.integer) = VTK_PARSE_BOOL; }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 2500 "vtkParse.y"
    { postSig("float "); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2501 "vtkParse.y"
    { postSig("double "); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2502 "vtkParse.y"
    { postSig("char "); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2503 "vtkParse.y"
    { postSig("int "); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2504 "vtkParse.y"
    { postSig("short "); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2505 "vtkParse.y"
    { postSig("long "); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2506 "vtkParse.y"
    { postSig("__int64 "); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2507 "vtkParse.y"
    { postSig("signed "); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2508 "vtkParse.y"
    { postSig("unsigned "); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 2530 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 2533 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2536 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2537 "vtkParse.y"
    { postSig("*"); }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2538 "vtkParse.y"
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

  case 414:

/* Line 1455 of yacc.c  */
#line 2554 "vtkParse.y"
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

  case 415:

/* Line 1455 of yacc.c  */
#line 2570 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2571 "vtkParse.y"
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

  case 417:

/* Line 1455 of yacc.c  */
#line 2580 "vtkParse.y"
    {postSig("Get");}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2581 "vtkParse.y"
    {markSig();}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2581 "vtkParse.y"
    {swapSig();}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2582 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2590 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2591 "vtkParse.y"
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

  case 423:

/* Line 1455 of yacc.c  */
#line 2600 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2601 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 2609 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2609 "vtkParse.y"
    {closeSig();}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 2611 "vtkParse.y"
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

  case 428:

/* Line 1455 of yacc.c  */
#line 2642 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 2643 "vtkParse.y"
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

  case 430:

/* Line 1455 of yacc.c  */
#line 2652 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 2653 "vtkParse.y"
    {markSig();}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 2653 "vtkParse.y"
    {swapSig();}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 2654 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 2663 "vtkParse.y"
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

  case 435:

/* Line 1455 of yacc.c  */
#line 2680 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 2681 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 2);
   }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 2685 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 2686 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 2);
   }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2690 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 2691 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 3);
   }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 2695 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 2696 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 3);
   }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2700 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2701 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 4);
   }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2705 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2706 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 4);
   }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2710 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2711 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 6);
   }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2715 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2716 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), getType(), copySig(), 6);
   }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2720 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2722 "vtkParse.y"
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

  case 453:

/* Line 1455 of yacc.c  */
#line 2737 "vtkParse.y"
    {startSig();}
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2739 "vtkParse.y"
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

  case 455:

/* Line 1455 of yacc.c  */
#line 2752 "vtkParse.y"
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

  case 456:

/* Line 1455 of yacc.c  */
#line 2789 "vtkParse.y"
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

  case 457:

/* Line 1455 of yacc.c  */
#line 2827 "vtkParse.y"
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
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2874 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2875 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2876 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2877 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2878 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2879 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2880 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2881 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2882 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2883 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2887 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2888 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2889 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2890 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2891 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2892 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2893 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2894 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2895 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2896 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2897 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2898 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2899 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2900 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2901 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2902 "vtkParse.y"
    { (yyval.str) = ".*"; }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2903 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2904 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2905 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2906 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2907 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2908 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2909 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2910 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2911 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2912 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2913 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2914 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2915 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 2916 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 501:

/* Line 1455 of yacc.c  */
#line 2917 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 502:

/* Line 1455 of yacc.c  */
#line 2918 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 503:

/* Line 1455 of yacc.c  */
#line 2919 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 504:

/* Line 1455 of yacc.c  */
#line 2920 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 505:

/* Line 1455 of yacc.c  */
#line 2923 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 506:

/* Line 1455 of yacc.c  */
#line 2924 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 507:

/* Line 1455 of yacc.c  */
#line 2925 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 508:

/* Line 1455 of yacc.c  */
#line 2926 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 509:

/* Line 1455 of yacc.c  */
#line 2927 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 510:

/* Line 1455 of yacc.c  */
#line 2928 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 511:

/* Line 1455 of yacc.c  */
#line 2929 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 512:

/* Line 1455 of yacc.c  */
#line 2930 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 513:

/* Line 1455 of yacc.c  */
#line 2931 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 514:

/* Line 1455 of yacc.c  */
#line 2932 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 515:

/* Line 1455 of yacc.c  */
#line 2933 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 516:

/* Line 1455 of yacc.c  */
#line 2934 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 517:

/* Line 1455 of yacc.c  */
#line 2935 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 518:

/* Line 1455 of yacc.c  */
#line 2936 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 519:

/* Line 1455 of yacc.c  */
#line 2937 "vtkParse.y"
    { (yyval.str) = "using"; }
    break;

  case 520:

/* Line 1455 of yacc.c  */
#line 2938 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 521:

/* Line 1455 of yacc.c  */
#line 2939 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 522:

/* Line 1455 of yacc.c  */
#line 2940 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 523:

/* Line 1455 of yacc.c  */
#line 2941 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 524:

/* Line 1455 of yacc.c  */
#line 2942 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 525:

/* Line 1455 of yacc.c  */
#line 2943 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 526:

/* Line 1455 of yacc.c  */
#line 2944 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 527:

/* Line 1455 of yacc.c  */
#line 2945 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 540:

/* Line 1455 of yacc.c  */
#line 2969 "vtkParse.y"
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
#line 2999 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 542:

/* Line 1455 of yacc.c  */
#line 2999 "vtkParse.y"
    { postSig("."); }
    break;

  case 543:

/* Line 1455 of yacc.c  */
#line 3000 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 544:

/* Line 1455 of yacc.c  */
#line 3001 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 545:

/* Line 1455 of yacc.c  */
#line 3002 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 547:

/* Line 1455 of yacc.c  */
#line 3005 "vtkParse.y"
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
#line 3031 "vtkParse.y"
    { postSig("< "); }
    break;

  case 552:

/* Line 1455 of yacc.c  */
#line 3032 "vtkParse.y"
    { postSig("> "); }
    break;

  case 553:

/* Line 1455 of yacc.c  */
#line 3033 "vtkParse.y"
    { postSig(">"); }
    break;

  case 555:

/* Line 1455 of yacc.c  */
#line 3036 "vtkParse.y"
    { postSig("= "); }
    break;

  case 556:

/* Line 1455 of yacc.c  */
#line 3037 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 558:

/* Line 1455 of yacc.c  */
#line 3040 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 566:

/* Line 1455 of yacc.c  */
#line 3054 "vtkParse.y"
    { postSig("= "); }
    break;

  case 567:

/* Line 1455 of yacc.c  */
#line 3055 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 568:

/* Line 1455 of yacc.c  */
#line 3059 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 569:

/* Line 1455 of yacc.c  */
#line 3065 "vtkParse.y"
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 572:

/* Line 1455 of yacc.c  */
#line 3076 "vtkParse.y"
    { postSig("["); }
    break;

  case 573:

/* Line 1455 of yacc.c  */
#line 3077 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 574:

/* Line 1455 of yacc.c  */
#line 3080 "vtkParse.y"
    { postSig("("); }
    break;

  case 575:

/* Line 1455 of yacc.c  */
#line 3081 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 576:

/* Line 1455 of yacc.c  */
#line 3082 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 577:

/* Line 1455 of yacc.c  */
#line 3083 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 578:

/* Line 1455 of yacc.c  */
#line 3084 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 579:

/* Line 1455 of yacc.c  */
#line 3085 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 580:

/* Line 1455 of yacc.c  */
#line 3088 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 581:

/* Line 1455 of yacc.c  */
#line 3088 "vtkParse.y"
    { postSig("} "); }
    break;



/* Line 1455 of yacc.c  */
#line 8086 "vtkParse.tab.c"
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
#line 3128 "vtkParse.y"

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
