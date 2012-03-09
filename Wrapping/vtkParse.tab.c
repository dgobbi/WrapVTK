/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     ID = 258,
     VTK_ID = 259,
     QT_ID = 260,
     VAR_FUNCTION = 261,
     StdString = 262,
     UnicodeString = 263,
     OSTREAM = 264,
     ISTREAM = 265,
     LP = 266,
     LA = 267,
     STRING_LITERAL = 268,
     INT_LITERAL = 269,
     HEX_LITERAL = 270,
     OCT_LITERAL = 271,
     FLOAT_LITERAL = 272,
     CHAR_LITERAL = 273,
     ZERO = 274,
     STRUCT = 275,
     CLASS = 276,
     UNION = 277,
     ENUM = 278,
     PUBLIC = 279,
     PRIVATE = 280,
     PROTECTED = 281,
     CONST = 282,
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
     OP_ARROW_POINTER = 307,
     OP_ARROW = 308,
     OP_INCR = 309,
     OP_DECR = 310,
     OP_PLUS_EQ = 311,
     OP_MINUS_EQ = 312,
     OP_TIMES_EQ = 313,
     OP_DIVIDE_EQ = 314,
     OP_REMAINDER_EQ = 315,
     OP_AND_EQ = 316,
     OP_OR_EQ = 317,
     OP_XOR_EQ = 318,
     OP_LOGIC_AND = 319,
     OP_LOGIC_OR = 320,
     OP_LOGIC_EQ = 321,
     OP_LOGIC_NEQ = 322,
     OP_LOGIC_LEQ = 323,
     OP_LOGIC_GEQ = 324,
     ELLIPSIS = 325,
     DOUBLE_COLON = 326,
     OTHER = 327,
     VOID = 328,
     BOOL = 329,
     FLOAT = 330,
     DOUBLE = 331,
     LONG_DOUBLE = 332,
     INT = 333,
     UNSIGNED_INT = 334,
     SHORT = 335,
     UNSIGNED_SHORT = 336,
     LONG = 337,
     UNSIGNED_LONG = 338,
     LONG_LONG = 339,
     UNSIGNED_LONG_LONG = 340,
     INT64__ = 341,
     UNSIGNED_INT64__ = 342,
     CHAR = 343,
     SIGNED_CHAR = 344,
     UNSIGNED_CHAR = 345,
     SIGNED = 346,
     UNSIGNED = 347,
     SSIZE_T = 348,
     SIZE_T = 349,
     IdType = 350,
     FloatType = 351,
     TypeInt8 = 352,
     TypeUInt8 = 353,
     TypeInt16 = 354,
     TypeUInt16 = 355,
     TypeInt32 = 356,
     TypeUInt32 = 357,
     TypeInt64 = 358,
     TypeUInt64 = 359,
     TypeFloat32 = 360,
     TypeFloat64 = 361,
     SetMacro = 362,
     GetMacro = 363,
     SetStringMacro = 364,
     GetStringMacro = 365,
     SetClampMacro = 366,
     SetObjectMacro = 367,
     GetObjectMacro = 368,
     BooleanMacro = 369,
     SetVector2Macro = 370,
     SetVector3Macro = 371,
     SetVector4Macro = 372,
     SetVector6Macro = 373,
     GetVector2Macro = 374,
     GetVector3Macro = 375,
     GetVector4Macro = 376,
     GetVector6Macro = 377,
     SetVectorMacro = 378,
     GetVectorMacro = 379,
     ViewportCoordinateMacro = 380,
     WorldCoordinateMacro = 381,
     TypeMacro = 382,
     VTK_BYTE_SWAP_DECL = 383
   };
#endif




/* Copy the first part of user declarations.  */
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
pointers, etc.  The parse also creates a typeId string, which is either
a simple id that gives the class name or type name, or is "function" for
function pointer types, or "method" for method pointer types.
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
#include "vtkParseString.h"
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

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* the "preprocessor" */
PreprocessInfo preprocessor = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };

/* global variables */
FileInfo data;

unsigned long  NumberOfConcreteClasses = 0;
const char   **ConcreteClasses;

NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateArgs  *currentTemplate = NULL;

const char    *currentEnumName = 0;
const char    *currentEnumValue = 0;

int            parseDebug;
parse_access_t access_level = VTK_ACCESS_PUBLIC;
int            IgnoreBTX = 0;

/* helper functions */
void start_class(const char *classname, int is_struct_or_union);
void reject_class(const char *classname, int is_struct_or_union);
void end_class();
void output_friend_function(void);
void output_function(void);
void reject_function(void);
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count);
void add_argument(FunctionInfo *func, unsigned int type,
                  const char *classname, unsigned long count);
void add_template_arg(unsigned int datatype,
                      unsigned int extra, const char *funcSig);
void add_using(const char *name, int is_namespace);
void start_enum(const char *enumname);
void add_enum(const char *name, const char *value);
void end_enum();
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);
void prepend_scope(char *cp, const char *arg);
unsigned int add_indirection(unsigned int tval, unsigned int ptr);
unsigned int add_indirection_to_array(unsigned int ptr);
void handle_complex_type(ValueInfo *val, unsigned int datatype,
                         unsigned int extra, const char *funcSig);
void handle_function_type(ValueInfo *arg, const char *name,
                          const char *funcSig);

void outputSetVectorMacro(const char *var, unsigned int argType,
                          const char *typeText, unsigned long n);
void outputGetVectorMacro(const char *var, unsigned int argType,
                          const char *typeText, unsigned long n);

/*----------------------------------------------------------------
 * String utility methods
 *
 * Strings are centrally allocated and are const, and they are not
 * freed until the program exits.  If they need to be freed before
 * then, vtkParse_FreeStrings() can be called.
 */

/* duplicate the first n bytes of a string and terminate */
static const char *vtkstrndup(const char *in, size_t n)
{
  char *res = NULL;

  res = vtkParse_NewString(n);
  strncpy(res, in, n);
  res[n] = '\0';

  return res;
}

/* duplicate a string */
static const char *vtkstrdup(const char *in)
{
  if (in)
    {
    return vtkstrndup(in, strlen(in));
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
  cp = vtkParse_NewString(m);
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
      data.Description = vtkstrdup(getComment());
      clearComment();
      break;
    case 3:
      data.SeeAlso = vtkstrdup(getComment());
      clearComment();
      break;
    case 4:
      data.Caveats = vtkstrdup(getComment());
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
    currentNamespace->Name = vtkstrdup(name);
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
TemplateArgs *templateStack[10];
unsigned long templateDepth = 0;

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateArgs *)malloc(sizeof(TemplateArgs));
  vtkParse_InitTemplateArgs(currentTemplate);
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

/* reallocate Signature if n chars cannot be appended */
void checkSigSize(size_t n)
{
  const char *ccp;

  if (sigAllocatedLength == 0)
    {
    sigLength = 0;
    sigAllocatedLength = 80 + n;
    signature = vtkParse_NewString(sigAllocatedLength);
    signature[0] = '\0';
    }
  else if (sigLength + n > sigAllocatedLength)
    {
    sigAllocatedLength += sigLength + n;
    ccp = signature;
    signature = vtkParse_NewString(sigAllocatedLength);
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
  return cp;
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
 * Storage type for vars and functions
 */

/* "private" variables */
unsigned int storageType = 0;

/* clear the storage type */
void clearStorageType()
{
  storageType = 0;
}

/* save the storage type */
void setStorageType(unsigned int val)
{
  storageType = val;
}

/* modify the indirection (pointers, refs) in the storage type */
void setStorageTypeIndirection(unsigned int ind)
{
  storageType = (storageType & ~VTK_PARSE_INDIRECT);
  ind = (ind & VTK_PARSE_INDIRECT);
  storageType = (storageType | ind);
}

/* retrieve the storage type */
unsigned int getStorageType()
{
  return storageType;
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
                            vtkstrdup(size));
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

  arrayDimensions[0] = vtkstrdup(size);
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
 * Variables and Arguments
 */

/* "private" variables */
char *currentVarName = 0;
char *currentVarValue = 0;
char *currentId = 0;

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

/* variable value -------------- */

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

/* variable type -------------- */

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
  size_t n;

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
  functionVarNameStack[functionDepth] = vtkstrdup(getVarName());
  functionTypeIdStack[functionDepth] = vtkstrdup(getTypeId());
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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 1121 "vtkParse.y"
{
  const char   *str;
  unsigned int  integer;
}
/* Line 193 of yacc.c.  */
#line 1456 "vtkParse.tab.c"
        YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1469 "vtkParse.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)                                        \
    do                                                                        \
      {                                                                        \
        YYSIZE_T yynewbytes;                                                \
        YYCOPY (&yyptr->Stack, Stack, yysize);                                \
        Stack = &yyptr->Stack;                                                \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                                \
      }                                                                        \
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   6315

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  152
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  203
/* YYNRULES -- Number of rules.  */
#define YYNRULES  565
/* YYNRULES -- Number of states.  */
#define YYNSTATES  962

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   383

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   148,     2,     2,     2,   144,   142,     2,
     135,   136,   143,   147,   133,   146,   151,   145,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   132,   129,
     137,   134,   138,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   139,     2,   140,   150,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   130,   149,   131,   141,     2,     2,     2,
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
     125,   126,   127,   128
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    11,    13,    15,    17,
      19,    21,    23,    27,    31,    36,    39,    42,    46,    50,
      53,    56,    60,    64,    66,    69,    71,    77,    78,    85,
      90,    94,    98,   102,   107,   112,   117,   122,   127,   132,
     138,   144,   150,   151,   159,   160,   168,   173,   174,   182,
     187,   188,   189,   193,   197,   199,   201,   203,   205,   209,
     213,   218,   221,   224,   228,   231,   235,   237,   240,   243,
     248,   250,   251,   254,   256,   260,   262,   265,   268,   271,
     273,   275,   277,   278,   285,   286,   292,   293,   295,   299,
     301,   302,   307,   315,   318,   322,   326,   329,   333,   336,
     342,   346,   351,   356,   361,   365,   367,   368,   375,   380,
     385,   389,   395,   402,   406,   407,   413,   415,   416,   421,
     422,   423,   429,   430,   431,   437,   438,   439,   445,   447,
     449,   450,   452,   453,   457,   459,   462,   465,   469,   472,
     476,   479,   481,   483,   486,   489,   493,   495,   498,   499,
     500,   501,   511,   512,   516,   517,   518,   519,   528,   531,
     532,   535,   538,   541,   542,   546,   548,   551,   555,   557,
     558,   564,   566,   568,   569,   570,   576,   577,   583,   584,
     588,   589,   593,   596,   597,   598,   601,   603,   605,   606,
     611,   612,   613,   619,   621,   623,   626,   627,   629,   630,
     634,   639,   644,   648,   651,   652,   655,   656,   657,   662,
     663,   666,   667,   671,   674,   675,   681,   684,   685,   691,
     693,   695,   697,   699,   701,   702,   704,   707,   708,   709,
     715,   717,   719,   722,   724,   727,   728,   730,   732,   733,
     735,   736,   739,   740,   746,   747,   749,   750,   751,   754,
     756,   758,   760,   762,   764,   766,   768,   771,   774,   777,
     780,   783,   786,   789,   791,   793,   795,   797,   799,   801,
     803,   805,   807,   809,   811,   813,   815,   817,   819,   821,
     823,   825,   827,   829,   831,   833,   835,   837,   839,   842,
     844,   846,   848,   850,   853,   855,   858,   860,   863,   865,
     868,   871,   873,   875,   877,   878,   882,   885,   888,   891,
     894,   896,   897,   903,   905,   907,   909,   912,   915,   918,
     921,   924,   928,   932,   933,   939,   941,   943,   945,   947,
     949,   951,   953,   955,   957,   959,   961,   963,   965,   967,
     969,   971,   973,   975,   977,   979,   981,   983,   985,   987,
     989,   991,   993,   995,   997,   999,  1001,  1003,  1005,  1007,
    1009,  1011,  1013,  1015,  1017,  1019,  1021,  1023,  1025,  1027,
    1029,  1031,  1034,  1036,  1038,  1041,  1043,  1046,  1047,  1055,
    1056,  1057,  1058,  1068,  1069,  1075,  1076,  1082,  1083,  1084,
    1095,  1096,  1104,  1105,  1106,  1107,  1117,  1124,  1125,  1133,
    1134,  1142,  1143,  1151,  1152,  1160,  1161,  1169,  1170,  1178,
    1179,  1187,  1188,  1196,  1197,  1207,  1208,  1218,  1223,  1228,
    1236,  1237,  1239,  1242,  1245,  1249,  1253,  1255,  1257,  1259,
    1261,  1263,  1265,  1267,  1269,  1271,  1273,  1275,  1277,  1279,
    1281,  1283,  1285,  1287,  1289,  1291,  1293,  1295,  1297,  1299,
    1301,  1303,  1305,  1307,  1309,  1311,  1313,  1315,  1317,  1319,
    1321,  1323,  1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,
    1341,  1343,  1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,
    1361,  1363,  1365,  1367,  1369,  1371,  1373,  1375,  1377,  1379,
    1381,  1383,  1385,  1387,  1389,  1391,  1394,  1396,  1398,  1400,
    1402,  1404,  1406,  1408,  1410,  1412,  1414,  1415,  1418,  1420,
    1422,  1424,  1426,  1428,  1430,  1432,  1434,  1435,  1438,  1439,
    1442,  1444,  1446,  1448,  1450,  1452,  1453,  1458,  1459,  1464,
    1465,  1470,  1471,  1476,  1477,  1482,  1483,  1488,  1489,  1492,
    1493,  1496,  1498,  1500,  1502,  1504,  1506,  1508,  1510,  1512,
    1514,  1516,  1518,  1520,  1522,  1524,  1526,  1528,  1530,  1532,
    1534,  1538,  1542,  1546,  1548,  1550
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     153,     0,    -1,    -1,    -1,   153,   154,   155,    -1,   159,
      -1,   184,    -1,   157,    -1,   156,    -1,   181,    -1,   245,
      -1,   177,    -1,   171,   247,   129,    -1,   160,   247,   129,
      -1,   185,   160,   247,   129,    -1,   201,   222,    -1,   205,
     222,    -1,   185,   201,   222,    -1,   185,   205,   222,    -1,
     204,   222,    -1,   202,   222,    -1,   185,   204,   222,    -1,
     185,   202,   222,    -1,   299,    -1,   287,   129,    -1,   129,
      -1,    34,    13,   130,   153,   131,    -1,    -1,    40,   275,
     158,   130,   153,   131,    -1,    40,   130,   347,   131,    -1,
      21,   287,   129,    -1,    20,   287,   129,    -1,    22,   287,
     129,    -1,    33,    21,   287,   129,    -1,    33,    20,   287,
     129,    -1,    33,    22,   287,   129,    -1,   185,    21,   287,
     129,    -1,   185,    20,   287,   129,    -1,   185,    22,   287,
     129,    -1,    33,   185,    21,   287,   129,    -1,    33,   185,
      20,   287,   129,    -1,    33,   185,    22,   287,   129,    -1,
      -1,    21,   287,   161,   167,   130,   164,   131,    -1,    -1,
      20,   287,   162,   167,   130,   164,   131,    -1,    20,   130,
     347,   131,    -1,    -1,    22,   287,   163,   167,   130,   164,
     131,    -1,    22,   130,   347,   131,    -1,    -1,    -1,   164,
     165,   166,    -1,   164,   170,   132,    -1,   159,    -1,   184,
      -1,   181,    -1,   245,    -1,   171,   247,   129,    -1,   160,
     247,   129,    -1,   185,   160,   247,   129,    -1,    33,   179,
      -1,    33,   178,    -1,    33,   203,   222,    -1,   203,   222,
      -1,   185,   203,   222,    -1,   299,    -1,   128,   353,    -1,
     287,   129,    -1,   289,    35,   323,   129,    -1,   129,    -1,
      -1,   132,   168,    -1,   169,    -1,   169,   133,   168,    -1,
     287,    -1,    25,   287,    -1,    26,   287,    -1,    24,   287,
      -1,    24,    -1,    25,    -1,    26,    -1,    -1,    23,   275,
     172,   130,   174,   131,    -1,    -1,    23,   173,   130,   174,
     131,    -1,    -1,   175,    -1,   175,   133,   174,    -1,   274,
      -1,    -1,   274,   134,   176,   327,    -1,   185,   279,   289,
     274,   134,   348,   129,    -1,   185,   179,    -1,    21,   287,
     180,    -1,    20,   287,   180,    -1,    20,   180,    -1,    22,
     287,   180,    -1,    22,   180,    -1,   130,   347,   131,   348,
     129,    -1,   132,   348,   129,    -1,    39,   280,   182,   129,
      -1,    39,   160,   241,   129,    -1,    39,   171,   241,   129,
      -1,    39,     6,   129,    -1,   255,    -1,    -1,   265,   135,
     183,   234,   136,   259,    -1,    41,    40,   287,   129,    -1,
      41,    38,   287,   129,    -1,    41,   287,   129,    -1,    41,
     289,    35,   323,   129,    -1,    41,   292,   289,    35,   323,
     129,    -1,    36,   137,   138,    -1,    -1,    36,   137,   186,
     187,   138,    -1,   189,    -1,    -1,   189,   133,   188,   187,
      -1,    -1,    -1,   190,   293,   253,   191,   197,    -1,    -1,
      -1,   192,   196,   253,   193,   197,    -1,    -1,    -1,   194,
     185,   253,   195,   197,    -1,    21,    -1,    38,    -1,    -1,
     198,    -1,    -1,   134,   199,   200,    -1,   335,    -1,   200,
     335,    -1,   279,   216,    -1,   279,   289,   216,    -1,   289,
     226,    -1,   276,   289,   226,    -1,   279,   216,    -1,   205,
      -1,   226,    -1,   276,   226,    -1,   289,   206,    -1,   279,
     289,   210,    -1,   206,    -1,   279,   210,    -1,    -1,    -1,
      -1,    35,   207,   279,   135,   208,   234,   136,   209,   217,
      -1,    -1,   212,   211,   217,    -1,    -1,    -1,    -1,    35,
     213,   323,   214,   135,   215,   234,   136,    -1,   223,   217,
      -1,    -1,   217,   218,    -1,   217,   220,    -1,   217,   221,
      -1,    -1,    37,   219,   341,    -1,    27,    -1,   134,    19,
      -1,   130,   347,   131,    -1,   129,    -1,    -1,   225,   135,
     224,   234,   136,    -1,   274,    -1,   285,    -1,    -1,    -1,
     229,   227,   231,   228,   217,    -1,    -1,   225,   135,   230,
     234,   136,    -1,    -1,   132,   233,   232,    -1,    -1,   133,
     233,   232,    -1,   287,   353,    -1,    -1,    -1,   235,   236,
      -1,    70,    -1,   238,    -1,    -1,   238,   133,   237,   236,
      -1,    -1,    -1,   239,   280,   253,   240,   242,    -1,     6,
      -1,   274,    -1,   296,   274,    -1,    -1,   243,    -1,    -1,
     134,   244,   327,    -1,   279,   246,   248,   129,    -1,    29,
       6,   248,   129,    -1,     6,   248,   129,    -1,   255,   242,
      -1,    -1,   250,   248,    -1,    -1,    -1,   248,   133,   249,
     250,    -1,    -1,   251,   246,    -1,    -1,   296,   252,   246,
      -1,   264,   266,    -1,    -1,   257,   262,   136,   254,   260,
      -1,   265,   266,    -1,    -1,   258,   263,   136,   256,   260,
      -1,   135,    -1,    11,    -1,    12,    -1,    11,    -1,    12,
      -1,    -1,    27,    -1,    37,   353,    -1,    -1,    -1,   135,
     261,   234,   136,   259,    -1,   267,    -1,   253,    -1,   296,
     253,    -1,   255,    -1,   296,   255,    -1,    -1,   265,    -1,
     274,    -1,    -1,   267,    -1,    -1,   268,   269,    -1,    -1,
     271,   139,   270,   272,   140,    -1,    -1,   269,    -1,    -1,
      -1,   273,   327,    -1,     4,    -1,     5,    -1,     3,    -1,
      10,    -1,     9,    -1,     7,    -1,     8,    -1,   141,     4,
      -1,   141,     5,    -1,   141,     3,    -1,   141,    10,    -1,
     141,     9,    -1,   141,     7,    -1,   141,     8,    -1,    94,
      -1,    93,    -1,    97,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   106,    -1,    95,    -1,    96,    -1,     3,    -1,     5,
      -1,     4,    -1,    10,    -1,     9,    -1,     7,    -1,     8,
      -1,   278,    -1,    28,    -1,    32,    -1,    34,    -1,    34,
      13,    -1,    31,    -1,    29,    -1,    30,    -1,   277,    -1,
     278,   277,    -1,   280,    -1,   276,   280,    -1,   281,    -1,
     281,   296,    -1,   282,    -1,   284,   282,    -1,   282,   284,
      -1,   293,    -1,   285,    -1,   288,    -1,    -1,    38,   283,
     287,    -1,    21,   294,    -1,    20,   294,    -1,    22,   294,
      -1,    23,   294,    -1,    27,    -1,    -1,   275,   137,   286,
     333,   138,    -1,   274,    -1,   285,    -1,   288,    -1,   289,
     274,    -1,   289,   285,    -1,   292,   287,    -1,   291,   292,
      -1,   285,   292,    -1,   289,   291,   292,    -1,   289,   285,
     292,    -1,    -1,   289,    36,   290,   285,   292,    -1,   275,
      -1,    71,    -1,   295,    -1,   294,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,     3,    -1,     4,    -1,     5,
      -1,    93,    -1,    94,    -1,    97,    -1,    98,    -1,    99,
      -1,   100,    -1,   101,    -1,   102,    -1,   103,    -1,   104,
      -1,   105,    -1,   106,    -1,    95,    -1,    96,    -1,    73,
      -1,    74,    -1,    75,    -1,    76,    -1,    77,    -1,    88,
      -1,    89,    -1,    90,    -1,    78,    -1,    79,    -1,    80,
      -1,    81,    -1,    82,    -1,    83,    -1,    84,    -1,    85,
      -1,    86,    -1,    87,    -1,    91,    -1,    92,    -1,   142,
      -1,   297,   142,    -1,   297,    -1,   298,    -1,   297,   298,
      -1,   143,    -1,   143,    27,    -1,    -1,   107,   135,   274,
     133,   300,   280,   136,    -1,    -1,    -1,    -1,   108,   135,
     301,   274,   133,   302,   280,   303,   136,    -1,    -1,   109,
     135,   304,   274,   136,    -1,    -1,   110,   135,   305,   274,
     136,    -1,    -1,    -1,   111,   135,   274,   133,   306,   281,
     307,   133,   348,   136,    -1,    -1,   112,   135,   274,   133,
     308,   281,   136,    -1,    -1,    -1,    -1,   113,   135,   309,
     274,   133,   310,   281,   311,   136,    -1,   114,   135,   274,
     133,   281,   136,    -1,    -1,   115,   135,   274,   133,   312,
     281,   136,    -1,    -1,   119,   135,   274,   133,   313,   281,
     136,    -1,    -1,   116,   135,   274,   133,   314,   281,   136,
      -1,    -1,   120,   135,   274,   133,   315,   281,   136,    -1,
      -1,   117,   135,   274,   133,   316,   281,   136,    -1,    -1,
     121,   135,   274,   133,   317,   281,   136,    -1,    -1,   118,
     135,   274,   133,   318,   281,   136,    -1,    -1,   122,   135,
     274,   133,   319,   281,   136,    -1,    -1,   123,   135,   274,
     133,   320,   281,   133,    14,   136,    -1,    -1,   124,   135,
     274,   133,   321,   281,   133,    14,   136,    -1,   125,   135,
     274,   136,    -1,   126,   135,   274,   136,    -1,   127,   135,
     274,   133,   274,   322,   136,    -1,    -1,   133,    -1,   135,
     136,    -1,   139,   140,    -1,    42,   139,   140,    -1,    43,
     139,   140,    -1,   137,    -1,   138,    -1,   133,    -1,   134,
      -1,   324,    -1,   144,    -1,   143,    -1,   145,    -1,   146,
      -1,   147,    -1,   148,    -1,   141,    -1,   142,    -1,   149,
      -1,   150,    -1,    42,    -1,    43,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    54,
      -1,    55,    -1,    61,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    39,    -1,    38,    -1,    21,    -1,    20,    -1,    22,
      -1,    36,    -1,    24,    -1,    26,    -1,    25,    -1,    27,
      -1,    29,    -1,    32,    -1,    30,    -1,    34,    -1,    40,
      -1,    35,    -1,    23,    -1,    37,    -1,    46,    -1,    45,
      -1,    44,    -1,    47,    -1,    16,    -1,    14,    -1,    15,
      -1,    17,    -1,    18,    -1,    13,    -1,    19,    -1,   330,
      -1,   327,   330,    -1,   339,    -1,   341,    -1,   345,    -1,
     324,    -1,   132,    -1,   151,    -1,    71,    -1,   325,    -1,
     326,    -1,   293,    -1,    -1,   329,   331,    -1,   328,    -1,
     137,    -1,   138,    -1,   330,    -1,   134,    -1,   133,    -1,
     331,    -1,   129,    -1,    -1,   333,   336,    -1,    -1,   334,
     332,    -1,   337,    -1,   328,    -1,   335,    -1,   134,    -1,
     133,    -1,    -1,   137,   338,   333,   138,    -1,    -1,   139,
     340,   329,   140,    -1,    -1,   135,   342,   329,   136,    -1,
      -1,    11,   343,   329,   136,    -1,    -1,    12,   344,   329,
     136,    -1,    -1,   130,   346,   334,   131,    -1,    -1,   347,
     349,    -1,    -1,   348,   350,    -1,   350,    -1,   129,    -1,
     351,    -1,   353,    -1,   352,    -1,    71,    -1,   324,    -1,
     132,    -1,   151,    -1,   137,    -1,   138,    -1,   134,    -1,
     133,    -1,   325,    -1,   326,    -1,   293,    -1,     6,    -1,
      70,    -1,    72,    -1,   130,   347,   131,    -1,   139,   347,
     140,    -1,   354,   347,   136,    -1,   135,    -1,    11,    -1,
      12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1287,  1287,  1289,  1288,  1299,  1300,  1301,  1302,  1303,
    1304,  1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,
    1314,  1315,  1316,  1317,  1318,  1319,  1327,  1334,  1334,  1336,
    1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,
    1353,  1354,  1357,  1357,  1359,  1359,  1361,  1362,  1362,  1364,
    1366,  1368,  1367,  1376,  1379,  1380,  1381,  1382,  1383,  1384,
    1385,  1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,
    1395,  1397,  1398,  1401,  1402,  1405,  1406,  1407,  1408,  1416,
    1417,  1418,  1429,  1429,  1430,  1430,  1432,  1433,  1434,  1437,
    1438,  1438,  1446,  1449,  1452,  1453,  1454,  1455,  1456,  1459,
    1460,  1467,  1490,  1491,  1492,  1495,  1496,  1496,  1506,  1507,
    1508,  1509,  1511,  1520,  1523,  1522,  1533,  1534,  1534,  1538,
    1540,  1538,  1542,  1544,  1542,  1546,  1548,  1546,  1559,  1560,
    1562,  1563,  1566,  1566,  1576,  1577,  1585,  1588,  1589,  1590,
    1593,  1594,  1595,  1596,  1599,  1600,  1603,  1604,  1607,  1608,
    1612,  1607,  1623,  1623,  1632,  1632,  1633,  1632,  1641,  1649,
    1650,  1651,  1652,  1655,  1655,  1658,  1661,  1669,  1670,  1674,
    1673,  1681,  1682,  1690,  1691,  1690,  1708,  1708,  1710,  1711,
    1713,  1714,  1717,  1723,  1724,  1724,  1727,  1728,  1729,  1729,
    1732,  1734,  1732,  1763,  1788,  1789,  1792,  1793,  1796,  1796,
    1804,  1805,  1806,  1809,  1860,  1861,  1863,  1864,  1864,  1867,
    1867,  1869,  1868,  1873,  1874,  1874,  1893,  1894,  1894,  1912,
    1913,  1915,  1919,  1921,  1924,  1925,  1926,  1928,  1929,  1929,
    1935,  1938,  1939,  1943,  1944,  1948,  1949,  1952,  1955,  1956,
    1959,  1959,  1962,  1962,  1964,  1965,  1968,  1969,  1969,  1979,
    1980,  1981,  1982,  1983,  1984,  1985,  1986,  1987,  1988,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,
    2000,  2001,  2002,  2003,  2004,  2005,  2006,  2013,  2014,  2015,
    2016,  2017,  2018,  2019,  2027,  2030,  2031,  2032,  2033,  2034,
    2035,  2036,  2039,  2040,  2048,  2049,  2056,  2057,  2060,  2061,
    2062,  2065,  2066,  2068,  2070,  2070,  2072,  2073,  2074,  2075,
    2078,  2081,  2081,  2089,  2090,  2091,  2094,  2095,  2096,  2099,
    2101,  2103,  2105,  2107,  2107,  2111,  2114,  2117,  2118,  2121,
    2122,  2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,
    2132,  2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,
    2144,  2145,  2146,  2147,  2148,  2149,  2150,  2151,  2153,  2154,
    2156,  2157,  2159,  2160,  2162,  2163,  2165,  2166,  2168,  2169,
    2189,  2190,  2191,  2196,  2197,  2209,  2210,  2217,  2217,  2227,
    2228,  2228,  2227,  2237,  2237,  2247,  2247,  2256,  2256,  2256,
    2289,  2288,  2299,  2300,  2300,  2299,  2309,  2327,  2327,  2332,
    2332,  2337,  2337,  2342,  2342,  2347,  2347,  2352,  2352,  2357,
    2357,  2362,  2362,  2367,  2367,  2384,  2384,  2398,  2435,  2473,
    2526,  2526,  2533,  2534,  2535,  2536,  2537,  2538,  2539,  2540,
    2541,  2544,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,
    2553,  2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,
    2563,  2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,
    2573,  2574,  2575,  2576,  2577,  2580,  2581,  2582,  2583,  2584,
    2585,  2586,  2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,
    2595,  2596,  2597,  2598,  2599,  2600,  2601,  2604,  2605,  2606,
    2607,  2608,  2609,  2610,  2617,  2618,  2621,  2622,  2623,  2624,
    2655,  2655,  2656,  2657,  2658,  2659,  2661,  2662,  2664,  2665,
    2666,  2668,  2669,  2670,  2672,  2673,  2675,  2676,  2678,  2679,
    2682,  2683,  2686,  2687,  2688,  2692,  2691,  2705,  2705,  2709,
    2709,  2711,  2711,  2713,  2713,  2717,  2717,  2722,  2723,  2725,
    2726,  2729,  2730,  2733,  2733,  2733,  2734,  2734,  2734,  2734,
    2734,  2734,  2734,  2734,  2735,  2735,  2735,  2735,  2736,  2736,
    2739,  2742,  2745,  2748,  2748,  2748
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VTK_ID", "QT_ID", "VAR_FUNCTION",
  "StdString", "UnicodeString", "OSTREAM", "ISTREAM", "LP", "LA",
  "STRING_LITERAL", "INT_LITERAL", "HEX_LITERAL", "OCT_LITERAL",
  "FLOAT_LITERAL", "CHAR_LITERAL", "ZERO", "STRUCT", "CLASS", "UNION",
  "ENUM", "PUBLIC", "PRIVATE", "PROTECTED", "CONST", "MUTABLE", "STATIC",
  "VIRTUAL", "EXPLICIT", "INLINE", "FRIEND", "EXTERN", "OPERATOR",
  "TEMPLATE", "THROW", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "NEW",
  "DELETE", "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST",
  "REINTERPRET_CAST", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR",
  "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND",
  "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ",
  "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER", "VOID", "BOOL",
  "FLOAT", "DOUBLE", "LONG_DOUBLE", "INT", "UNSIGNED_INT", "SHORT",
  "UNSIGNED_SHORT", "LONG", "UNSIGNED_LONG", "LONG_LONG",
  "UNSIGNED_LONG_LONG", "INT64__", "UNSIGNED_INT64__", "CHAR",
  "SIGNED_CHAR", "UNSIGNED_CHAR", "SIGNED", "UNSIGNED", "SSIZE_T",
  "SIZE_T", "IdType", "FloatType", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
  "GetStringMacro", "SetClampMacro", "SetObjectMacro", "GetObjectMacro",
  "BooleanMacro", "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "':'", "','", "'='", "'('",
  "')'", "'<'", "'>'", "'['", "']'", "'~'", "'&'", "'*'", "'%'", "'/'",
  "'-'", "'+'", "'!'", "'|'", "'^'", "'.'", "$accept", "strt", "@1",
  "file_item", "extern_section", "namespace", "@2", "class_forward_decl",
  "class_def", "@3", "@4", "@5", "class_def_body", "@6", "class_def_item",
  "maybe_bases", "base_list", "base_list_item", "access_specifier",
  "enum_def", "@7", "@8", "enum_list", "enum_item", "@9",
  "template_variable_initialization", "template_internal_class",
  "internal_class", "internal_class_body", "type_def",
  "complex_typedef_id", "@10", "using", "template", "@11",
  "template_parameters", "@12", "template_parameter", "@13", "@14", "@15",
  "@16", "@17", "@18", "class_or_typename", "maybe_template_default",
  "template_default", "@19", "template_parameter_value", "function",
  "scoped_method", "method", "scoped_operator", "operator",
  "typecast_op_func", "@20", "@21", "@22", "op_func", "@23", "op_sig",
  "@24", "@25", "@26", "func", "func_trailer", "throw_trailer", "@27",
  "const_trailer", "pure_trailer", "func_body", "func_sig", "@28",
  "func_name", "structor", "@29", "@30", "structor_sig", "@31",
  "maybe_initializers", "more_initializers", "initializer",
  "parameter_list", "@32", "more_parameters", "@33", "parameter", "@34",
  "@35", "maybe_indirect_id", "maybe_assign_value", "assign_value", "@36",
  "variables", "var_id_maybe_assign_value", "maybe_variables",
  "maybe_other_variables", "@37", "other_variable", "@38", "@39",
  "param_decl", "@40", "var_decl", "@41", "p_or_lp_or_la", "lp_or_la",
  "maybe_func_const", "maybe_array_or_parameters", "@42",
  "maybe_indirect_param_decl", "maybe_indirect_var_decl", "maybe_var_id",
  "var_id", "maybe_array_decorator", "array_decorator", "@43", "array",
  "@44", "more_array", "array_size", "@45", "simple_id", "class_id",
  "storage_mods", "storage_mod", "storage_seq", "storage_type", "type",
  "type_red", "type_red2", "@46", "const_mod", "templated_id", "@47",
  "any_id", "scoped_id", "scope", "@48", "class_id_sig",
  "scope_resolution", "type_simple", "type_id", "type_primitive",
  "type_indirection", "pointers", "pointer_or_const_pointer", "macro",
  "@49", "@50", "@51", "@52", "@53", "@54", "@55", "@56", "@57", "@58",
  "@59", "@60", "@61", "@62", "@63", "@64", "@65", "@66", "@67", "@68",
  "@69", "@70", "maybe_comma", "op_token", "op_token_no_delim", "keyword",
  "literal", "const_expr", "common_bracket_item", "any_bracket_contents",
  "bracket_pitem", "any_bracket_item", "braces_item",
  "angle_bracket_contents", "braces_contents", "angle_bracket_pitem",
  "angle_bracket_item", "angle_brackets_sig", "@71", "brackets_sig", "@72",
  "parens_sig", "@73", "@74", "@75", "braces_sig", "@76", "maybe_other",
  "maybe_other_no_semi", "other_stuff", "other_stuff_no_semi", "braces",
  "brackets", "parens", "lparen", 0
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,    59,
     123,   125,    58,    44,    61,    40,    41,    60,    62,    91,
      93,   126,    38,    42,    37,    47,    45,    43,    33,   124,
      94,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   152,   153,   154,   153,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   156,   158,   157,   157,
     159,   159,   159,   159,   159,   159,   159,   159,   159,   159,
     159,   159,   161,   160,   162,   160,   160,   163,   160,   160,
     164,   165,   164,   164,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   166,   166,   166,   166,
     166,   167,   167,   168,   168,   169,   169,   169,   169,   170,
     170,   170,   172,   171,   173,   171,   174,   174,   174,   175,
     176,   175,   177,   178,   179,   179,   179,   179,   179,   180,
     180,   181,   181,   181,   181,   182,   183,   182,   184,   184,
     184,   184,   184,   185,   186,   185,   187,   188,   187,   190,
     191,   189,   192,   193,   189,   194,   195,   189,   196,   196,
     197,   197,   199,   198,   200,   200,   201,   202,   202,   202,
     203,   203,   203,   203,   204,   204,   205,   205,   207,   208,
     209,   206,   211,   210,   213,   214,   215,   212,   216,   217,
     217,   217,   217,   219,   218,   220,   221,   222,   222,   224,
     223,   225,   225,   227,   228,   226,   230,   229,   231,   231,
     232,   232,   233,   234,   235,   234,   236,   236,   237,   236,
     239,   240,   238,   238,   241,   241,   242,   242,   244,   243,
     245,   245,   245,   246,   247,   247,   248,   249,   248,   251,
     250,   252,   250,   253,   254,   253,   255,   256,   255,   257,
     257,   257,   258,   258,   259,   259,   259,   260,   261,   260,
     260,   262,   262,   263,   263,   264,   264,   265,   266,   266,
     268,   267,   270,   269,   271,   271,   272,   273,   272,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   275,   275,   275,
     275,   275,   275,   275,   276,   277,   277,   277,   277,   277,
     277,   277,   278,   278,   279,   279,   280,   280,   281,   281,
     281,   282,   282,   282,   283,   282,   282,   282,   282,   282,
     284,   286,   285,   287,   287,   287,   288,   288,   288,   289,
     289,   289,   289,   290,   289,   291,   292,   293,   293,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     296,   296,   296,   297,   297,   298,   298,   300,   299,   301,
     302,   303,   299,   304,   299,   305,   299,   306,   307,   299,
     308,   299,   309,   310,   311,   299,   299,   312,   299,   313,
     299,   314,   299,   315,   299,   316,   299,   317,   299,   318,
     299,   319,   299,   320,   299,   321,   299,   299,   299,   299,
     322,   322,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   324,   324,   324,   324,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   326,   326,   326,
     326,   326,   326,   326,   327,   327,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   329,   329,   330,   330,
     330,   331,   331,   331,   332,   332,   333,   333,   334,   334,
     335,   335,   336,   336,   336,   338,   337,   340,   339,   342,
     341,   343,   341,   344,   341,   346,   345,   347,   347,   348,
     348,   349,   349,   350,   350,   350,   350,   350,   350,   350,
     350,   350,   350,   350,   350,   350,   350,   350,   350,   350,
     351,   352,   353,   354,   354,   354
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     4,     2,     2,     3,     3,     2,
       2,     3,     3,     1,     2,     1,     5,     0,     6,     4,
       3,     3,     3,     4,     4,     4,     4,     4,     4,     5,
       5,     5,     0,     7,     0,     7,     4,     0,     7,     4,
       0,     0,     3,     3,     1,     1,     1,     1,     3,     3,
       4,     2,     2,     3,     2,     3,     1,     2,     2,     4,
       1,     0,     2,     1,     3,     1,     2,     2,     2,     1,
       1,     1,     0,     6,     0,     5,     0,     1,     3,     1,
       0,     4,     7,     2,     3,     3,     2,     3,     2,     5,
       3,     4,     4,     4,     3,     1,     0,     6,     4,     4,
       3,     5,     6,     3,     0,     5,     1,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     1,     1,
       0,     1,     0,     3,     1,     2,     2,     3,     2,     3,
       2,     1,     1,     2,     2,     3,     1,     2,     0,     0,
       0,     9,     0,     3,     0,     0,     0,     8,     2,     0,
       2,     2,     2,     0,     3,     1,     2,     3,     1,     0,
       5,     1,     1,     0,     0,     5,     0,     5,     0,     3,
       0,     3,     2,     0,     0,     2,     1,     1,     0,     4,
       0,     0,     5,     1,     1,     2,     0,     1,     0,     3,
       4,     4,     3,     2,     0,     2,     0,     0,     4,     0,
       2,     0,     3,     2,     0,     5,     2,     0,     5,     1,
       1,     1,     1,     1,     0,     1,     2,     0,     0,     5,
       1,     1,     2,     1,     2,     0,     1,     1,     0,     1,
       0,     2,     0,     5,     0,     1,     0,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     2,     1,     2,     1,     2,     1,     2,
       2,     1,     1,     1,     0,     3,     2,     2,     2,     2,
       1,     0,     5,     1,     1,     1,     2,     2,     2,     2,
       2,     3,     3,     0,     5,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     2,     1,     2,     0,     7,     0,
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
       1,     1,     1,     1,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     4,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,   333,   334,   335,   206,   329,   330,
     331,   332,     0,     0,     0,    84,   310,   285,   290,   291,
     289,   286,     0,   287,   148,     0,   304,     0,     0,     0,
     326,   350,   351,   352,   353,   354,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   355,   356,   357,   368,
     369,   336,   337,   348,   349,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     4,     8,
       7,     5,   209,   209,    11,     9,     6,     0,     0,     0,
       0,     0,   146,    10,   313,   325,     0,   292,   284,     0,
     294,   296,   298,     0,   302,     0,   303,     0,     0,     0,
     301,   328,   327,    23,     0,   537,   314,    44,   315,     0,
     307,    42,   306,   537,    47,   308,   333,   334,   335,   329,
     330,   331,   332,   336,   337,   348,   349,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,     0,    82,   309,
     206,     0,     0,     0,     0,   288,     0,   114,     0,     0,
       0,     0,     0,     0,     0,     0,   302,   303,   277,   279,
     278,   282,   283,   281,   280,   537,    27,   251,   249,   250,
     254,   255,   253,   252,     0,     0,   264,   263,   275,   276,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,     0,   379,   383,   385,     0,     0,   392,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   256,   257,   261,   262,   260,
     259,   370,   375,     0,   206,     0,   211,   372,   373,     0,
       0,     0,     0,     0,   290,   287,   209,     0,     0,     0,
       0,     0,   168,   537,    15,    20,    19,    16,   311,     0,
       0,     0,   295,     0,   293,   222,   223,   154,   147,   152,
     136,   159,     0,   206,   196,     0,   238,   237,   172,     0,
     297,   300,   299,   320,    24,   323,   144,     0,   138,   173,
     316,   317,     0,   319,   318,   202,   207,     0,    31,    71,
     316,   317,    30,    71,     0,    32,    71,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     2,     0,     0,   113,
     119,   305,   104,    44,    42,    47,   251,   249,   250,   254,
     255,   253,   252,     0,   194,     0,     0,     0,   105,   238,
     237,     0,     0,     0,     0,   110,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   376,
      13,   205,   210,     0,   371,   374,    12,    44,    42,    47,
     333,   334,   335,   329,   330,   331,   332,   288,     0,    17,
      22,    21,    18,   171,     0,     0,   516,   139,     0,   159,
     158,   169,     0,   198,   203,   197,   233,     0,     0,   216,
     239,   244,   145,   137,   172,     0,   176,   178,   322,   321,
     209,   557,   564,   565,   492,   488,   489,   487,   490,   491,
     493,   468,   467,   469,   481,   471,   473,   472,   474,   475,
     477,   476,   478,   480,   470,   482,   466,   465,   479,   441,
     442,   485,   484,   483,   486,   443,   444,   445,   446,   447,
     448,   454,   455,   449,   450,   451,   452,   453,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   558,   546,   559,
     542,   537,    46,   548,   553,   552,   563,   550,   551,   537,
     437,   438,   432,   431,   433,   434,   435,   436,   439,   440,
     549,   556,   547,   554,   555,   538,   541,   543,   545,   544,
     537,     0,     0,     0,    49,     0,     0,    87,    89,    86,
     201,    34,    33,    35,     0,     0,     0,     3,   149,     0,
     116,     0,     0,     0,   102,   195,   103,   101,   106,    29,
       2,   109,   108,   441,   442,   428,   429,     0,   426,   427,
       0,     0,   430,     0,   377,     0,     0,     0,   387,   390,
       0,     0,   397,   401,   405,   409,   399,   403,   407,   411,
     413,   415,   417,   418,     0,   212,    37,    36,    38,    14,
     171,   167,     0,   155,   153,   165,   163,     0,   160,   161,
     162,   184,   200,     0,   217,   234,   241,     0,     0,     0,
     184,     0,   174,   208,     0,     0,     0,     0,     0,     0,
      72,    73,    75,    50,    50,    50,    85,    86,    90,     0,
      40,    39,    41,    26,   184,   115,   117,   235,   128,   129,
     235,   235,   184,     3,     0,     0,   422,   423,   111,     0,
       0,   380,   384,   386,     0,     0,   393,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   420,   539,
     531,   533,   502,   535,   500,   524,   523,   529,   525,   312,
     527,   501,   505,   499,   503,   504,   521,   522,   517,   520,
     496,   497,   498,     0,     0,   166,     0,   190,   509,   510,
     199,   508,   494,   227,   242,   324,     0,   180,     0,   159,
     560,   561,   562,    78,    76,    77,     0,    51,    51,    51,
      88,     0,    83,     0,   119,   220,   221,   219,   120,   235,
     238,   236,   123,   126,     0,    28,   424,   425,   112,     0,
       0,   388,     0,     0,   396,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   421,     0,     0,   506,   506,
     518,   506,   516,   506,   156,   164,   170,   193,   186,   185,
     187,     0,   495,   228,   218,   230,   247,   177,     0,   179,
     182,   175,    74,    79,    80,    81,    45,     0,     0,    43,
      48,    91,   150,   118,   130,   231,     0,   235,   213,   130,
     130,   224,   378,   381,     0,   391,   394,   398,   402,   406,
     410,   400,   404,   408,   412,     0,     0,   419,    92,   540,
       0,     0,     0,     0,     0,     0,   184,   188,   235,   184,
       0,     0,   180,     0,     0,    70,    54,   209,    52,   209,
      56,    55,     0,     0,   141,   142,    57,   171,     0,     0,
     302,     0,     0,    66,    53,   159,   132,   121,   131,   214,
     232,   124,   127,   225,     0,   107,     0,   539,     0,     0,
       0,   513,   512,   532,   511,   507,   534,   515,   536,   514,
     519,   530,   526,   528,     0,   190,   191,     0,   243,   248,
     181,     0,     0,     0,    62,    61,     0,     0,     0,   302,
      67,     0,     0,   209,     0,    64,   143,   140,   172,    68,
       0,   151,     0,   227,   226,   382,     0,   395,   414,   416,
     157,   189,   196,   224,   537,   539,    96,     0,     0,    98,
       0,     0,     0,     0,    93,    63,    59,    58,     0,    65,
       0,   133,   134,   215,   389,   192,   229,     0,     0,    95,
      94,    97,     0,     0,     0,    60,    69,   135,   539,   100,
       0,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    88,    89,    90,   352,    91,    92,   313,
     309,   316,   717,   787,   838,   522,   620,   621,   788,    93,
     318,   157,   526,   527,   721,    94,   894,   895,   926,    95,
     347,   642,    96,    97,   330,   539,   724,   540,   541,   794,
     542,   799,   543,   800,   640,   857,   858,   912,   941,    98,
      99,   843,   100,   844,   102,   166,   634,   855,   278,   409,
     279,   408,   693,   826,   280,   410,   598,   694,   599,   600,
     264,   281,   601,   282,   845,   427,   709,   299,   610,   612,
     779,   707,   696,   697,   769,   885,   770,   771,   922,   343,
     414,   415,   603,   103,   283,   243,   124,   430,   244,   245,
     383,   728,   913,   284,   703,   729,   285,   865,   774,   829,
     796,   417,   730,   286,   419,   420,   421,   606,   776,   607,
     830,   831,   104,   105,   848,   107,   108,   898,   110,   111,
     112,   168,   113,   126,   406,   304,   128,   129,   425,   118,
     119,   120,   121,   122,   246,   247,   248,   123,   650,   359,
     740,   866,   360,   361,   654,   804,   655,   364,   743,   868,
     658,   662,   659,   663,   660,   664,   661,   665,   666,   667,
     756,   561,   683,   684,   685,   700,   701,   820,   874,   875,
     880,   592,   822,   687,   688,   689,   762,   690,   763,   691,
     761,   758,   759,   692,   760,   307,   757,   515,   516,   517,
     518,   519,   520
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -814
static const yytype_int16 yypact[] =
{
    -814,    56,  -814,  4281,   181,   224,   246,  -814,   264,   276,
     287,   320,  5082,  5442,  5096,  1023,  -814,  -814,    92,  -814,
    -814,  -814,   192,   101,  -814,    11,  -814,  5965,   216,  4896,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,    58,   324,   343,   392,   404,   408,   420,   424,   432,
     436,   454,   461,   465,   472,    51,    63,    73,    87,    99,
     105,   138,   144,   179,   191,   201,   207,   210,   213,   222,
     225,   229,   242,   251,   257,   260,  -814,   476,  -814,  -814,
    -814,  -814,   149,   149,  -814,  -814,  -814,  5757,   -11,   -11,
     -11,   -11,  -814,  -814,  -814,   261,  6069,  -814,   482,  4878,
    -814,   113,   302,  6173,    -4,   268,   275,  5200,   336,  5456,
    -814,  -814,  -814,  -814,    71,  -814,   336,   280,  -814,  5560,
    -814,   281,  -814,  -814,   285,  -814,     1,    12,   128,   145,
     159,   182,   193,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,   288,  -814,  -814,
    -814,  5456,  5456,  5456,   441,   290,  5861,   277,  5456,   292,
    5082,  5442,  5096,   894,   894,  5249,   336,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,     4,     8,     9,
      13,    17,    46,    52,  5456,  5456,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
     296,  5272,  5456,  5610,  -814,  -814,  -814,  5610,  5610,  -814,
    5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,  5610,
    5610,  5610,  5610,  5610,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,   400,   300,  -814,  5249,  -814,   142,  -814,   305,
    5082,  5442,  5096,  4236,  -814,   418,   149,   -11,   -11,   -11,
     -11,  5577,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  4236,
    4236,  4236,  -814,  5560,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,   316,  -814,   332,   862,   319,   342,   336,  5321,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,   352,  -814,  -814,
     342,   -29,   336,  -814,  -814,  -814,  -814,  1152,  -814,   363,
    -814,   336,  -814,   363,  1301,  -814,   363,  5610,   376,   100,
     378,   386,   388,  5456,  5456,  5456,  -814,  6069,   384,  -814,
     230,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,   391,  -814,  5610,   394,   399,  -814,   135,
    -814,  1450,   401,   412,   413,  -814,  5677,  5376,   411,  5610,
    5610,  5610,   425,   430,  5610,   437,   440,   444,   445,   448,
     449,   452,   459,   470,   473,   479,   415,   421,   480,  -814,
    -814,   484,  -814,  5249,  -814,  -814,  -814,   491,   492,   493,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,   494,  -814,
    -814,  -814,  -814,  -814,  5321,  1599,  -814,  -814,  5677,  -814,
      36,  -814,   198,  -814,  -814,  -814,  -814,   469,  5249,  -814,
    -814,  -814,  -814,  -814,   336,   489,  -814,   495,  -814,  -814,
     113,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  4847,   496,   498,  -814,   501,   503,   499,   490,  5610,
    -814,  -814,  -814,  -814,   507,   508,   509,   511,  -814,   487,
     506,  6209,    53,   604,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,   504,   505,  -814,  -814,   510,  -814,  -814,
     514,   518,  -814,  5677,  -814,   516,   515,   519,  -814,  -814,
     517,  6069,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  5610,  -814,  -814,  -814,  -814,  -814,
     533,  -814,  3685,  -814,    36,  -814,  -814,   650,  -814,  -814,
    -814,   548,  -814,  3983,  -814,  -814,   549,   551,   261,   336,
     548,  5456,  -814,  -814,  1748,  1897,  2046,  5456,  5456,  5456,
    -814,   554,  -814,  -814,  -814,  -814,  -814,  5610,  -814,   561,
    -814,  -814,  -814,  -814,   548,  -814,  -814,  4912,  -814,  -814,
    4912,  4912,   548,   562,   555,   556,  -814,  -814,  -814,   565,
    6069,  -814,  -814,  -814,  6069,  6069,  -814,   566,  6069,  6069,
    6069,  6069,  6069,  6069,  6069,  6069,  6069,  6069,   564,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,   563,    39,  -814,   567,    62,  -814,  -814,
    3983,  -814,  -814,   199,  -814,  -814,   568,   572,    49,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  4847,    45,    76,    84,
    -814,  3983,  -814,   570,   230,  -814,  -814,  -814,  -814,   718,
     319,  -814,  -814,  -814,   571,  -814,  -814,  -814,  -814,   573,
    6069,  -814,   574,  6069,  -814,   575,   578,   579,   580,   582,
     583,   588,   595,   599,   600,  -814,   598,  2344,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
     603,  6069,  -814,  -814,  -814,  -814,   602,  -814,  5456,  -814,
    -814,    36,  -814,  -814,  -814,  -814,  -814,  4408,   569,  -814,
    -814,  3983,  -814,  -814,   605,  -814,   607,  4912,  -814,   605,
     605,   129,  -814,  -814,   612,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,   694,   726,  -814,  -814,  -814,
    3089,  3238,  2940,  3387,  3834,  3536,   548,  -814,  4912,   548,
     608,  3983,   572,  4535,    49,  -814,  -814,   149,  -814,   149,
    -814,  -814,  4639,   -11,  -814,  -814,  -814,   618,  4743,  4878,
     102,   620,  5393,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,    49,  -814,   614,  -814,   617,   621,
     622,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,   625,    62,  -814,   627,  -814,  3983,
    -814,  5017,  5442,  5017,  -814,  -814,   589,   -11,  5577,   -29,
    -814,   635,   636,   149,   -11,  -814,  -814,  -814,  -814,  -814,
    5677,    36,  4132,   199,  -814,  -814,  2493,  -814,  -814,  -814,
    -814,  -814,   332,   129,  -814,  -814,  -814,   220,   233,  -814,
     240,  5031,  5456,  5031,  -814,  -814,  -814,  -814,   637,  -814,
     638,  4132,  -814,  -814,  -814,  -814,  -814,  2195,  2642,  -814,
    -814,  -814,   255,   339,   373,  -814,  -814,  -814,  -814,  -814,
    2791,  -814
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -814,  -296,  -814,  -814,  -814,  -814,  -814,   -33,   -15,  -814,
    -814,  -814,  -316,  -814,  -814,   -81,    54,  -814,  -814,   -10,
    -814,  -814,  -475,  -814,  -814,  -814,  -814,  -128,  -463,   -16,
    -814,  -814,   -14,    -8,  -814,    50,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -426,  -814,  -814,  -814,   679,
     681,  -755,   685,    42,   666,  -814,  -814,  -814,  -232,  -814,
    -814,  -814,  -814,  -814,  -269,  -381,  -814,  -814,  -814,  -814,
     -63,  -814,  -814,   -96,   -93,  -814,  -814,  -814,  -814,  -814,
     -44,    14,  -557,  -814,   -95,  -814,  -814,  -814,  -814,   615,
    -131,  -814,  -814,     6,  -212,   -77,  -108,  -814,   364,  -814,
    -814,  -592,  -814,  -141,  -814,  -814,  -814,  -127,  -118,  -814,
    -814,  -814,  -814,  -111,    68,  -668,  -814,  -814,  -814,  -814,
    -814,  -814,   215,   -13,    37,   692,  -814,    19,   -20,  -361,
     688,  -814,   693,    -2,  -814,    -3,    16,    15,  -814,   -71,
     -21,   194,    -9,  -814,   -84,  -814,   560,    43,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,  -814,
    -814,  -385,  -275,  -248,   -68,  -680,  -561,  -667,  -574,    10,
    -814,    75,  -814,  -813,  -814,  -814,  -814,  -814,  -814,   139,
    -814,  -814,  -814,  -814,  -814,  -120,  -805,  -814,  -710,  -814,
    -814,  -653,  -814
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -316
static const yytype_int16 yytable[] =
{
     115,   114,   158,   130,   132,   135,   159,   175,   212,   127,
     131,   134,   173,   314,   164,   186,   249,   174,   117,   116,
     423,   297,   109,   593,   298,   176,   210,   290,   594,   702,
     537,   686,   512,   382,   348,   775,   265,   266,   267,   512,
     106,   791,    30,   177,   211,   101,   302,   819,   732,   733,
     670,   671,   319,   706,   629,   780,     2,   422,   302,   513,
     432,   433,   916,   595,   349,   351,   513,    30,   767,   783,
     784,   785,  -277,   596,   638,  -277,   512,   723,   897,  -279,
    -278,   562,   256,  -279,  -282,   734,   272,   904,  -283,   345,
     345,   639,   821,   293,   823,   176,   825,   303,   160,   942,
     783,   784,   785,   513,   176,   293,  -172,   288,   783,   784,
     785,   176,   117,   177,   165,   301,   261,  -281,   262,   263,
     948,   273,   177,  -280,   289,  -314,   772,   311,   957,   177,
     512,  -277,   768,   562,   106,   423,   381,   795,  -277,   260,
     302,  -277,  -279,   405,   416,  -279,  -278,   702,   167,  -279,
    -282,   889,   720,   960,  -283,   293,   863,   513,   320,   321,
     322,   130,   132,   135,   176,   331,   864,   333,   334,   335,
     597,   585,   422,    30,   677,   412,   786,   297,   649,   398,
     407,   900,   177,  -281,   496,   328,   213,  -264,  -264,  -280,
    -264,   353,   354,  -264,   399,   400,   401,   402,   214,  -278,
     305,   418,   302,   327,   306,   860,   819,   789,   215,   311,
     657,   914,   161,   162,   163,   790,  -282,   772,   302,   178,
     179,   180,   216,   181,   182,   183,   184,   357,    25,   530,
    -283,  -314,   523,   306,   217,   525,   886,  -172,   819,   514,
     218,   130,   132,   135,   159,   775,   514,   387,   388,   389,
     819,  -122,  -277,  -281,   643,   241,   242,   702,  -278,   288,
     130,   132,   135,   686,  -280,  -278,  -125,   293,  -122,   884,
     548,   301,   887,   219,  -240,  -282,   404,   605,  -204,   220,
     428,   429,  -282,   514,   384,   242,   302,   424,   562,  -283,
     428,   241,   242,   741,   742,  -279,  -283,   745,   746,   747,
     748,   749,   750,   751,   752,   753,   754,   272,   718,   719,
    -251,  -251,  -281,  -251,   221,   772,  -251,  -278,  -277,  -281,
     534,   535,   536,  -280,   287,   176,   222,   602,   781,    16,
    -280,   306,   300,   302,   773,  -282,   223,   514,  -240,   512,
     512,   512,   224,   177,   310,   225,   185,  -283,   226,   531,
     924,   686,   925,  -249,  -249,   311,  -249,   227,  -281,  -249,
     228,  -279,   532,   924,   229,   925,   513,   513,   513,   533,
     924,   614,   925,   861,   862,  -250,  -250,   230,  -250,   615,
     686,  -250,   806,  -278,   630,   924,   231,   925,   344,   344,
     350,  -280,   232,  -254,  -254,   233,  -254,   294,   268,  -254,
     616,  -282,   424,   428,  -315,  -255,  -255,    30,  -255,   308,
     312,  -255,   608,  -283,   315,   329,  -253,  -253,   317,  -253,
     326,   332,  -253,   609,  -281,   355,   310,   379,   358,   380,
     929,   397,   362,   363,   386,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,  -252,
    -252,   411,  -252,  -263,  -263,  -252,  -263,  -280,  -240,  -263,
     350,   323,   324,   325,   949,   950,   413,   951,   631,   924,
     929,   925,  -275,  -275,   911,  -275,   403,  -171,  -275,   234,
     235,   236,   512,   237,   238,   239,   240,   426,   300,   949,
     950,   951,   178,   179,   180,   521,   181,   182,   183,   184,
     350,   511,   632,   924,   403,   925,   529,   531,   511,   513,
      17,   254,    19,    20,    21,   532,   255,   533,   622,   538,
     544,  -276,  -276,   546,  -276,   940,   731,  -276,   547,   731,
     731,   550,   528,  -265,  -265,   641,  -265,  -266,  -266,  -265,
    -266,   551,   552,  -266,   564,   511,   514,   514,   514,  -267,
    -267,   582,  -267,  -268,  -268,  -267,  -268,   583,   568,  -268,
     545,  -269,  -269,   569,  -269,  -270,  -270,  -269,  -270,   176,
     571,  -270,   310,   572,   565,   566,   567,   573,   574,   570,
     907,   575,   576,  -271,  -271,   577,  -271,   177,   705,  -271,
    -272,  -272,   578,  -272,  -273,  -273,  -272,  -273,   350,   511,
    -273,  -274,  -274,   579,  -274,   604,   580,  -274,   708,   931,
     932,   933,   581,   584,   713,   714,   715,   306,   731,   590,
     586,   587,   588,   589,   628,   635,   623,   611,   624,   907,
     739,   625,   627,   350,   626,   562,   630,   631,   632,   636,
      25,   512,   633,   644,   645,   797,   646,   648,   176,   651,
     656,   652,   176,   176,   647,   653,   176,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   177,   669,   513,   695,
     177,   177,   512,   512,   177,   177,   177,   177,   177,   177,
     177,   177,   177,   177,  -183,   512,   731,   716,  -245,   514,
     704,   297,   722,   735,   738,   736,   737,   755,   764,   513,
     513,   854,   744,   766,   777,   778,   792,   801,   869,   802,
     805,   807,   513,   622,   808,   809,   810,   731,   811,   812,
     803,   336,   337,   338,   813,   339,   340,   341,   342,   725,
     726,   814,   815,   816,   817,   637,   827,   297,   176,   856,
     870,   176,  -246,   859,   528,   867,   297,  -313,   888,   909,
     915,   828,   297,   917,   836,   906,   177,   918,   919,   177,
     901,   920,   902,   923,   936,   937,   955,   956,   934,   176,
     782,   840,   837,   841,   793,   708,   257,   839,   258,   842,
     905,   302,   259,   296,   851,   850,   682,   177,   890,   346,
     921,   945,   832,   846,   613,   943,   946,   682,   798,   668,
     274,   292,   852,   116,   947,   291,   849,   385,   511,   511,
     511,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   896,   938,   903,   272,   293,
     853,   899,   879,   765,   935,     0,   608,   824,     0,     0,
     899,   939,   528,     0,     0,     0,   899,   908,   514,   177,
     311,     0,   350,   727,     0,   350,   350,     0,   177,    87,
     241,   242,     0,     0,   177,   336,   337,   338,     0,   339,
     340,   341,   342,   275,   276,     0,     0,     0,   293,   514,
     514,     0,   130,   132,   135,   608,     0,     0,   927,   928,
     930,     0,   514,     0,   682,     0,   908,   336,   337,   338,
       0,   339,   340,   341,   342,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   682,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   952,   953,
     954,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   350,     0,     0,     0,     0,     0,
       0,   511,     0,     0,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   682,     0,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     0,   847,    87,   241,   242,     0,     0,     0,     0,
       0,     0,   350,     0,   682,   682,   682,   682,   682,   682,
       0,     0,     0,     0,     0,   682,   136,   137,   138,     0,
     139,   140,   141,   142,     0,    87,   241,   242,     0,     0,
       0,     0,     0,   350,     0,     0,     0,     0,   403,     0,
       0,     0,     0,     0,     0,     0,     0,   403,     0,     0,
       0,     0,     0,   403,   287,     0,     0,   310,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   682,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   682,     0,     0,     0,
     511,     0,     0,   403,     0,     0,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,   682,     0,     0,     0,     0,
       0,   511,   511,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   511,   390,   391,   392,   431,   393,
     394,   395,   396,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,     0,   451,     0,   452,   453,   454,   455,
     456,   457,   458,     0,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   490,   491,   492,   493,   494,   495,   496,     0,   497,
     498,   499,     0,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   390,   391,   392,   431,   393,   394,
     395,   396,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,     0,
     449,   450,     0,   451,     0,   452,   453,   454,   455,   456,
     457,   458,     0,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     490,   491,   524,   493,   494,   495,   496,     0,   497,   498,
     499,     0,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   390,   391,   392,   431,   393,   394,   395,
     396,   432,   433,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,     0,   451,     0,   452,   453,   454,   455,   456,   457,
     458,     0,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     487,   488,   489,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   490,
     491,   549,   493,   494,   495,   496,     0,   497,   498,   499,
       0,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   510,   390,   391,   392,   431,   393,   394,   395,   396,
     432,   433,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,     0,   449,   450,
       0,   451,     0,   452,   453,   454,   455,   456,   457,   458,
       0,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   487,
     488,   489,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   490,   491,
     591,   493,   494,   495,   496,     0,   497,   498,   499,     0,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     510,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   490,   491,   710,
     493,   494,   495,   496,     0,   497,   498,   499,     0,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     390,   391,   392,   431,   393,   394,   395,   396,   432,   433,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,     0,   449,   450,     0,   451,
       0,   452,   453,   454,   455,   456,   457,   458,     0,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,   488,   489,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   490,   491,     0,   493,
     494,   495,   496,     0,   497,   498,   499,   711,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,   390,
     391,   392,   431,   393,   394,   395,   396,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,     0,   449,   450,     0,   451,     0,
     452,   453,   454,   455,   456,   457,   458,     0,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   487,   488,   489,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   490,   491,     0,   493,   494,
     495,   496,   712,   497,   498,   499,     0,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   510,   390,   391,
     392,   431,   393,   394,   395,   396,   432,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,     0,   451,     0,   452,
     453,   454,   455,   456,   457,   458,     0,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   487,   488,   489,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   490,   491,   958,   493,   494,   495,
     496,     0,   497,   498,   499,     0,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   510,   390,   391,   392,
     431,   393,   394,   395,   396,   432,   433,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,     0,   449,   450,     0,   451,     0,   452,   453,
     454,   455,   456,   457,   458,     0,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   487,   488,   489,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   818,   491,     0,   493,   494,   495,   496,
       0,   497,   498,   499,     0,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   510,   390,   391,   392,   431,
     393,   394,   395,   396,   432,   433,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,     0,   449,   450,     0,   451,     0,   452,   453,   454,
     455,   456,   457,   458,     0,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   487,   488,   489,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   491,     0,   493,   494,   495,   496,   944,
     497,   498,   499,     0,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   510,   390,   391,   392,   431,   393,
     394,   395,   396,   432,   433,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,     0,   451,     0,   452,   453,   454,   455,
     456,   457,   458,     0,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   487,   488,   489,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   959,   491,     0,   493,   494,   495,   496,     0,   497,
     498,   499,     0,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   510,   390,   391,   392,   431,   393,   394,
     395,   396,   432,   433,   434,   435,   436,   437,   438,   439,
     440,   441,   442,   443,   444,   445,   446,   447,   448,     0,
     449,   450,     0,   451,     0,   452,   453,   454,   455,   456,
     457,   458,     0,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   487,   488,   489,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     961,   491,     0,   493,   494,   495,   496,     0,   497,   498,
     499,     0,   500,   501,   502,   503,   504,   505,   506,   507,
     508,   509,   510,   390,   391,   392,     0,   393,   394,   395,
     396,   670,   671,   434,   435,   436,   437,   438,   439,   440,
     441,   442,   443,   444,   445,   446,   447,   448,     0,   449,
     450,     0,   451,     0,   452,   453,   454,   455,   456,   457,
     458,     0,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
       0,   672,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   877,
     673,   878,   674,   871,   872,   677,     0,   698,   699,   680,
       0,   500,   501,   502,   503,   504,   505,   506,   507,   508,
     509,   681,   390,   391,   392,     0,   393,   394,   395,   396,
     670,   671,   434,   435,   436,   437,   438,   439,   440,   441,
     442,   443,   444,   445,   446,   447,   448,     0,   449,   450,
       0,   451,     0,   452,   453,   454,   455,   456,   457,   458,
       0,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,     0,
     672,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   673,
       0,   674,   871,   872,   677,   873,   698,   699,   680,     0,
     500,   501,   502,   503,   504,   505,   506,   507,   508,   509,
     681,   390,   391,   392,     0,   393,   394,   395,   396,   670,
     671,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,     0,   672,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   673,     0,
     674,   871,   872,   677,   876,   698,   699,   680,     0,   500,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   681,
     390,   391,   392,     0,   393,   394,   395,   396,   670,   671,
     434,   435,   436,   437,   438,   439,   440,   441,   442,   443,
     444,   445,   446,   447,   448,     0,   449,   450,     0,   451,
       0,   452,   453,   454,   455,   456,   457,   458,     0,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,     0,   672,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   673,     0,   674,
     871,   872,   677,   881,   698,   699,   680,     0,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   681,   390,
     391,   392,     0,   393,   394,   395,   396,   670,   671,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,     0,   449,   450,     0,   451,     0,
     452,   453,   454,   455,   456,   457,   458,     0,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,     0,   672,     0,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   673,     0,   674,   871,
     872,   677,     0,   698,   699,   680,   883,   500,   501,   502,
     503,   504,   505,   506,   507,   508,   509,   681,   390,   391,
     392,     0,   393,   394,   395,   396,   670,   671,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   444,   445,
     446,   447,   448,     0,   449,   450,     0,   451,     0,   452,
     453,   454,   455,   456,   457,   458,     0,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,     0,   672,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   673,     0,   674,   675,   676,
     677,     0,   678,   679,   680,     0,   500,   501,   502,   503,
     504,   505,   506,   507,   508,   509,   681,   390,   391,   392,
       0,   393,   394,   395,   396,   670,   671,   434,   435,   436,
     437,   438,   439,   440,   441,   442,   443,   444,   445,   446,
     447,   448,     0,   449,   450,     0,   451,     0,   452,   453,
     454,   455,   456,   457,   458,     0,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,     0,   672,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   673,     0,   674,   675,   676,   677,
       0,   678,   882,   680,     0,   500,   501,   502,   503,   504,
     505,   506,   507,   508,   509,   681,   390,   391,   392,     0,
     393,   394,   395,   396,   670,   671,   434,   435,   436,   437,
     438,   439,   440,   441,   442,   443,   444,   445,   446,   447,
     448,     0,   449,   450,     0,   451,     0,   452,   453,   454,
     455,   456,   457,   458,     0,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,     0,   672,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   673,     0,   674,     0,     0,   677,     0,
     698,   699,   680,     0,   500,   501,   502,   503,   504,   505,
     506,   507,   508,   509,   681,   390,   391,   392,     0,   393,
     394,   395,   396,   670,   671,   434,   435,   436,   437,   438,
     439,   440,   441,   442,   443,   444,   445,   446,   447,   448,
       0,   449,   450,     0,   451,     0,   452,   453,   454,   455,
     456,   457,   458,     0,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,     0,   672,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   143,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   390,
     391,   392,     0,   393,   394,   395,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   673,     0,   674,     0,     0,   677,     0,   678,
       0,   680,     0,   500,   501,   502,   503,   504,   505,   506,
     507,   508,   509,   681,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,     0,     0,     0,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,    29,     0,     0,     0,     0,     0,     0,   143,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
     154,   155,   156,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,     0,
      86,     4,     5,     6,     7,     8,     9,    10,    11,     0,
       0,     0,    87,     0,     0,     0,     0,     0,    12,    13,
      14,    15,     0,     0,     0,    16,    17,    18,    19,    20,
      21,   833,   255,    24,    25,     0,    26,    27,     0,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   834,   835,     4,     5,
       6,     0,     8,     9,    10,    11,     0,     0,     0,    87,
       0,     0,     0,     0,     0,   891,   892,   893,   253,     0,
       0,     0,    16,    17,   254,    19,    20,    21,     0,   255,
      24,    25,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,     4,     5,     6,     0,     8,     9,    10,    11,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   250,
     251,   252,   253,     0,     0,     0,    16,    17,   254,    19,
      20,    21,     0,   255,    24,     0,    87,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     4,     5,     6,     0,
       8,     9,    10,    11,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,   270,   271,   253,     0,     0,     0,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      87,    26,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
     187,   188,   189,     0,   190,   191,   192,   193,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   617,   618,   619,     0,     0,     0,     0,     0,     0,
       0,   187,   188,   189,    87,   190,   191,   192,   193,   275,
     276,     0,     0,     0,     0,     0,     0,     0,     0,   187,
     188,   189,     0,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,   277,     0,   336,   337,   338,    30,   339,
     340,   341,   342,   725,   726,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   194,     0,   195,     0,     0,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,     0,     0,    87,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,    87,
       4,     5,     6,     0,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,   187,   188,   189,    87,   190,   191,
     192,   193,     0,     0,     0,     0,     0,   727,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,    30,     8,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     4,
       5,     6,    30,     8,     9,    10,    11,     0,     0,     0,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   924,     0,   925,
       0,     0,     0,    30,     0,     0,     0,     0,    87,     0,
       0,   924,     0,   925,     0,     0,     0,    30,     0,     0,
       0,     0,    87,     0,     0,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,   187,   188,   189,     0,   190,   191,   192,
     193,     0,   125,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,   133,     0,     0,     0,
       0,     0,     0,     0,     0,    24,   295,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   336,   337,   338,     0,   339,   340,   341,   342,
     275,   276,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   187,   188,   189,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   356,   295,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,   188,   189,     0,   190,   191,
     192,   193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   277,   295,     0,     0,
       0,     0,     0,     0,     0,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   187,
     188,   189,     0,   190,   191,   192,   193,     0,     0,     0,
      87,     0,     0,     0,     0,     0,   187,   188,   189,     0,
     190,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,   563,   295,    87,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   910,   295,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,     5,     6,     0,     8,
       9,    10,    11,     0,     0,     0,     0,     0,     0,   187,
     188,   189,    87,   190,   191,   192,   193,     0,     0,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,     0,     0,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    30,     0,     0,     0,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    30,     0,     0,
       0,     0,     0,     0,    87,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   187,   188,   189,     0,   190,   191,   192,
     193,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     187,   188,   189,    87,   190,   191,   192,   193,     0,     0,
       0,     0,     0,     0,     0,     0,   295,    87,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   277,   336,   337,   338,     0,   339,   340,   341,
     342,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,     0,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,    87,   553,
     554,     0,     0,     0,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,     0,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   137,   138,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,     0,     0,     0,    16,    17,   254,    19,    20,    21,
       0,   255,    24,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     555,   556,   557,     0,   558,   559,   560,     0,   500,   501,
     502,   503,   504,   505,   506,   507,   508,   509,    30,     0,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   136,   137,   138,     0,   139,   140,
     141,   142,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   269,   270,   271,   253,     0,     0,     0,    16,    17,
     254,    19,    20,    21,     0,   255,     0,     0,     0,    26,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    30,     0,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,   143,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   136,   137,
     138,   169,   139,   140,   141,   142,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   170,   171,   172,    15,     0,
       0,     0,    16,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    26,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   136,   137,   138,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   269,
     270,   271,   253,     0,     0,     0,    16,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    26,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      30,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   136,   137,   138,     0,
     139,   140,   141,   142,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   269,   270,   271,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,   390,   391,   392,     0,   393,   394,   395,   396,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
       0,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156
};

static const yytype_int16 yycheck[] =
{
       3,     3,    15,    12,    13,    14,    15,    27,    29,    12,
      13,    14,    27,   133,    22,    28,    93,    27,     3,     3,
     289,   117,     3,   408,   117,    27,    29,   111,   409,   603,
     326,   592,   307,   245,   175,   703,    99,   100,   101,   314,
       3,   721,    71,    27,    29,     3,   117,   757,   640,   641,
      11,    12,   160,   610,   529,   708,     0,   289,   129,   307,
      11,    12,   867,    27,   175,   185,   314,    71,     6,    24,
      25,    26,    71,    37,    21,    71,   351,   634,   833,    71,
      71,   356,    97,    71,    71,   642,   106,   842,    71,   173,
     174,    38,   759,   114,   761,    97,   763,   118,     6,   912,
      24,    25,    26,   351,   106,   126,   135,   109,    24,    25,
      26,   113,    97,    97,    13,   117,    97,    71,   129,   130,
     925,   106,   106,    71,   109,   129,   700,   129,   941,   113,
     405,   130,    70,   408,    97,   404,   244,   729,   137,    97,
     211,   137,   130,   263,   285,   137,   137,   721,   137,   137,
     137,   831,   627,   958,   137,   176,    27,   405,   161,   162,
     163,   170,   171,   172,   166,   168,    37,   170,   171,   172,
     134,   383,   404,    71,   135,   283,   131,   273,   563,   256,
     273,   834,   166,   137,   135,   166,   135,   129,   130,   137,
     132,   194,   195,   135,   257,   258,   259,   260,   135,    71,
     129,   285,   273,   166,   133,   797,   916,   131,   135,   211,
     571,   864,    20,    21,    22,   131,    71,   791,   289,     3,
       4,     5,   135,     7,     8,     9,    10,   212,    36,   129,
      71,   129,   313,   133,   135,   316,   828,   135,   948,   307,
     135,   250,   251,   252,   253,   913,   314,   250,   251,   252,
     960,    21,    71,    71,   550,   142,   143,   831,   130,   261,
     269,   270,   271,   824,    71,   137,    36,   288,    38,   826,
     135,   273,   829,   135,   139,   130,   261,   418,   129,   135,
     301,   302,   137,   351,   142,   143,   357,   289,   563,   130,
     311,   142,   143,   654,   655,    71,   137,   658,   659,   660,
     661,   662,   663,   664,   665,   666,   667,   327,   624,   625,
     129,   130,   130,   132,   135,   889,   135,    71,   137,   137,
     323,   324,   325,   130,   109,   327,   135,   129,   709,    27,
     137,   133,   117,   404,   135,    71,   135,   405,   139,   614,
     615,   616,   135,   327,   129,   135,   130,    71,   135,   129,
     130,   912,   132,   129,   130,   357,   132,   135,    71,   135,
     135,   137,   129,   130,   135,   132,   614,   615,   616,   129,
     130,   491,   132,   799,   800,   129,   130,   135,   132,   499,
     941,   135,   743,   137,   129,   130,   135,   132,   173,   174,
     175,    71,   135,   129,   130,   135,   132,   129,   137,   135,
     520,   137,   404,   424,   129,   129,   130,    71,   132,   129,
     129,   135,   425,   137,   129,   138,   129,   130,   130,   132,
     130,   129,   135,   425,   137,   129,   211,    27,   213,   129,
     893,    13,   217,   218,   129,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   129,
     130,   135,   132,   129,   130,   135,   132,   137,   139,   135,
     245,    20,    21,    22,   927,   928,   134,   930,   129,   130,
     933,   132,   129,   130,   855,   132,   261,   135,   135,     3,
       4,     5,   757,     7,     8,     9,    10,   135,   273,   952,
     953,   954,     3,     4,     5,   132,     7,     8,     9,    10,
     285,   307,   129,   130,   289,   132,   130,   129,   314,   757,
      28,    29,    30,    31,    32,   129,    34,   129,   521,   135,
     129,   129,   130,   129,   132,   910,   637,   135,   129,   640,
     641,   130,   317,   129,   130,   543,   132,   129,   130,   135,
     132,   129,   129,   135,   133,   351,   614,   615,   616,   129,
     130,   136,   132,   129,   130,   135,   132,   136,   133,   135,
     345,   129,   130,   133,   132,   129,   130,   135,   132,   571,
     133,   135,   357,   133,   359,   360,   361,   133,   133,   364,
     849,   133,   133,   129,   130,   133,   132,   571,   609,   135,
     129,   130,   133,   132,   129,   130,   135,   132,   383,   405,
     135,   129,   130,   133,   132,   136,   133,   135,   611,    20,
      21,    22,   133,   133,   617,   618,   619,   133,   729,   404,
     129,   129,   129,   129,   134,   138,   130,   132,   130,   898,
     650,   130,   133,   418,   131,   910,   129,   129,   129,   133,
      36,   916,   131,   139,   139,   729,   136,   129,   650,   133,
     133,   136,   654,   655,   140,   136,   658,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   650,   134,   916,    19,
     654,   655,   947,   948,   658,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   136,   960,   797,   133,   139,   757,
     139,   787,   131,   131,   129,   140,   140,   133,   135,   947,
     948,   132,   136,   136,   136,   133,   136,   136,    14,   136,
     136,   136,   960,   716,   136,   136,   136,   828,   136,   136,
     740,     3,     4,     5,   136,     7,     8,     9,    10,    11,
      12,   136,   133,   133,   136,   541,   133,   833,   740,   134,
      14,   743,   140,   136,   529,   133,   842,   129,   140,   129,
     136,   771,   848,   136,   787,   848,   740,   136,   136,   743,
     837,   136,   839,   136,   129,   129,   129,   129,   896,   771,
     716,   787,   787,   787,   724,   778,    97,   787,    97,   787,
     843,   852,    97,   117,   787,   787,   592,   771,   832,   174,
     885,   922,   778,   787,   430,   913,   923,   603,   730,   584,
     108,   113,   787,   787,   924,   112,   787,   247,   614,   615,
     616,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   833,   903,   842,   848,   850,
     787,   833,   822,   694,   897,    -1,   849,   762,    -1,    -1,
     842,   904,   627,    -1,    -1,    -1,   848,   849,   916,   833,
     852,    -1,   637,   135,    -1,   640,   641,    -1,   842,   141,
     142,   143,    -1,    -1,   848,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,   899,   947,
     948,    -1,   891,   892,   893,   898,    -1,    -1,   891,   892,
     893,    -1,   960,    -1,   700,    -1,   898,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   721,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   931,   932,
     933,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   729,    -1,    -1,    -1,    -1,    -1,
      -1,   757,    -1,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   791,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,   787,   141,   142,   143,    -1,    -1,    -1,    -1,
      -1,    -1,   797,    -1,   820,   821,   822,   823,   824,   825,
      -1,    -1,    -1,    -1,    -1,   831,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,   141,   142,   143,    -1,    -1,
      -1,    -1,    -1,   828,    -1,    -1,    -1,    -1,   833,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   842,    -1,    -1,
      -1,    -1,    -1,   848,   849,    -1,    -1,   852,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   889,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   912,    -1,    -1,    -1,
     916,    -1,    -1,   898,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,   941,    -1,    -1,    -1,    -1,
      -1,   947,   948,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   960,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,   132,   133,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,   131,   132,   133,   134,   135,    -1,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,   133,   134,   135,    -1,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
     132,   133,   134,   135,    -1,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,
     134,   135,   136,   137,   138,   139,    -1,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,   133,   134,
     135,    -1,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    -1,
      29,    30,    -1,    32,    -1,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,    -1,   137,   138,
     139,    -1,   141,   142,   143,   144,   145,   146,   147,   148,
     149,   150,   151,     3,     4,     5,    -1,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    -1,    29,
      30,    -1,    32,    -1,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      -1,    71,    -1,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
      -1,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    -1,    29,    30,
      -1,    32,    -1,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    -1,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,
      -1,   132,   133,   134,   135,   136,   137,   138,   139,    -1,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    -1,    71,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,
     132,   133,   134,   135,   136,   137,   138,   139,    -1,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
       3,     4,     5,    -1,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    -1,    29,    30,    -1,    32,
      -1,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    71,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    -1,    29,    30,    -1,    32,    -1,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    -1,    71,    -1,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     3,     4,
       5,    -1,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    -1,    29,    30,    -1,    32,    -1,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    -1,    71,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   130,    -1,   132,   133,   134,
     135,    -1,   137,   138,   139,    -1,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,     3,     4,     5,
      -1,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    29,    30,    -1,    32,    -1,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    -1,    71,    -1,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   130,    -1,   132,   133,   134,   135,
      -1,   137,   138,   139,    -1,   141,   142,   143,   144,   145,
     146,   147,   148,   149,   150,   151,     3,     4,     5,    -1,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    -1,    29,    30,    -1,    32,    -1,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    -1,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   130,    -1,   132,    -1,    -1,   135,    -1,
     137,   138,   139,    -1,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,     3,     4,     5,    -1,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      -1,    29,    30,    -1,    32,    -1,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    -1,    71,    -1,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,   132,    -1,    -1,   135,    -1,   137,
      -1,   139,    -1,   141,   142,   143,   144,   145,   146,   147,
     148,   149,   150,   151,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,    -1,
     129,     3,     4,     5,     6,     7,     8,     9,    10,    -1,
      -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    20,    21,
      22,    23,    -1,    -1,    -1,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    39,    -1,    41,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,
      -1,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,     3,     4,
       5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,   141,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    28,    29,    30,    31,    32,    -1,    34,
      35,    36,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    -1,    34,    35,    -1,   141,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,
      27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     141,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,   141,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    -1,     3,     4,     5,    71,     7,
       8,     9,    10,    11,    12,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    38,    -1,    40,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,   141,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   141,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,   141,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,   135,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    71,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    71,     7,     8,     9,    10,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,    -1,   132,
      -1,    -1,    -1,    71,    -1,    -1,    -1,    -1,   141,    -1,
      -1,   130,    -1,   132,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,   141,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,   130,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   141,    -1,    -1,   130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    35,    36,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    35,    36,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
     141,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,   141,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    35,    36,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,   141,     7,     8,     9,    10,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    71,    -1,    -1,    -1,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    -1,
      -1,    -1,    -1,    -1,   141,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,   141,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,   141,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   141,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,   141,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    -1,    -1,    -1,
      -1,   141,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     133,   134,   135,    -1,   137,   138,   139,    -1,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,    71,    -1,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,    28,
      29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    71,    -1,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,     3,     4,
       5,     6,     7,     8,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    20,    21,    22,    23,    -1,
      -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      71,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    38,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    71,    -1,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   153,     0,   154,     3,     4,     5,     6,     7,     8,
       9,    10,    20,    21,    22,    23,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    38,    39,    40,    41,
      71,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   129,   141,   155,   156,
     157,   159,   160,   171,   177,   181,   184,   185,   201,   202,
     204,   205,   206,   245,   274,   275,   276,   277,   278,   279,
     280,   281,   282,   284,   285,   287,   288,   289,   291,   292,
     293,   294,   295,   299,   248,   130,   285,   287,   288,   289,
     294,   287,   294,   130,   287,   294,     3,     4,     5,     7,
       8,     9,    10,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   173,   275,   294,
       6,    20,    21,    22,   185,    13,   207,   137,   283,     6,
      20,    21,    22,   160,   171,   280,   285,   288,     3,     4,
       5,     7,     8,     9,    10,   130,   275,     3,     4,     5,
       7,     8,     9,    10,    38,    40,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     287,   289,   292,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,   135,   135,   135,   135,   135,   135,
     135,   135,   135,   135,     3,     4,     5,     7,     8,     9,
      10,   142,   143,   247,   250,   251,   296,   297,   298,   247,
      20,    21,    22,    23,    29,    34,   160,   201,   202,   204,
     205,   279,   129,   130,   222,   222,   222,   222,   137,    20,
      21,    22,   280,   289,   277,    11,    12,    35,   210,   212,
     216,   223,   225,   246,   255,   258,   265,   274,   285,   289,
     296,   284,   282,   292,   129,    36,   206,   225,   226,   229,
     274,   285,   291,   292,   287,   129,   133,   347,   129,   162,
     274,   285,   129,   161,   347,   129,   163,   130,   172,   248,
     287,   287,   287,    20,    21,    22,   130,   276,   279,   138,
     186,   287,   129,   287,   287,   287,     3,     4,     5,     7,
       8,     9,    10,   241,   274,   296,   241,   182,   255,   265,
     274,   347,   158,   287,   287,   129,    35,   289,   274,   301,
     304,   305,   274,   274,   309,   274,   274,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,    27,
     129,   248,   246,   252,   142,   298,   129,   287,   287,   287,
       3,     4,     5,     7,     8,     9,    10,    13,   247,   222,
     222,   222,   222,   274,   289,   347,   286,   226,   213,   211,
     217,   135,   248,   134,   242,   243,   255,   263,   296,   266,
     267,   268,   210,   216,   285,   290,   135,   227,   292,   292,
     249,     6,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    29,
      30,    32,    34,    35,    36,    37,    38,    39,    40,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
     129,   130,   131,   132,   133,   134,   135,   137,   138,   139,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   293,   324,   325,   326,   349,   350,   351,   352,   353,
     354,   132,   167,   167,   131,   167,   174,   175,   274,   130,
     129,   129,   129,   129,   287,   287,   287,   153,   135,   187,
     189,   190,   192,   194,   129,   274,   129,   129,   135,   131,
     130,   129,   129,    42,    43,   133,   134,   135,   137,   138,
     139,   323,   324,    35,   133,   274,   274,   274,   133,   133,
     274,   133,   133,   133,   133,   133,   133,   133,   133,   133,
     133,   133,   136,   136,   133,   246,   129,   129,   129,   129,
     274,   131,   333,   323,   217,    27,    37,   134,   218,   220,
     221,   224,   129,   244,   136,   255,   269,   271,   275,   285,
     230,   132,   231,   250,   347,   347,   347,    24,    25,    26,
     168,   169,   287,   130,   130,   130,   131,   133,   134,   174,
     129,   129,   129,   131,   208,   138,   133,   293,    21,    38,
     196,   185,   183,   153,   139,   139,   136,   140,   129,   323,
     300,   133,   136,   136,   306,   308,   133,   281,   312,   314,
     316,   318,   313,   315,   317,   319,   320,   321,   274,   134,
      11,    12,    71,   130,   132,   133,   134,   135,   137,   138,
     139,   151,   293,   324,   325,   326,   328,   335,   336,   337,
     339,   341,   345,   214,   219,    19,   234,   235,   137,   138,
     327,   328,   330,   256,   139,   292,   234,   233,   287,   228,
     131,   140,   136,   287,   287,   287,   133,   164,   164,   164,
     174,   176,   131,   234,   188,    11,    12,   135,   253,   257,
     264,   265,   253,   253,   234,   131,   140,   140,   129,   280,
     302,   281,   281,   310,   136,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   133,   322,   348,   343,   344,
     346,   342,   338,   340,   135,   341,   136,     6,    70,   236,
     238,   239,   330,   135,   260,   267,   270,   136,   133,   232,
     353,   217,   168,    24,    25,    26,   131,   165,   170,   131,
     131,   327,   136,   187,   191,   253,   262,   296,   266,   193,
     195,   136,   136,   280,   307,   136,   281,   136,   136,   136,
     136,   136,   136,   136,   136,   133,   133,   136,   129,   350,
     329,   329,   334,   329,   333,   329,   215,   133,   280,   261,
     272,   273,   233,    33,   128,   129,   159,   160,   166,   171,
     181,   184,   185,   203,   205,   226,   245,   274,   276,   279,
     285,   287,   289,   299,   132,   209,   134,   197,   198,   136,
     253,   197,   197,    27,    37,   259,   303,   133,   311,    14,
      14,   133,   134,   136,   330,   331,   136,   129,   131,   331,
     332,   136,   138,   140,   234,   237,   253,   234,   140,   327,
     232,    20,    21,    22,   178,   179,   185,   203,   279,   285,
     353,   247,   247,   160,   203,   222,   226,   216,   285,   129,
      35,   217,   199,   254,   353,   136,   348,   136,   136,   136,
     136,   236,   240,   136,   130,   132,   180,   287,   287,   180,
     287,    20,    21,    22,   179,   222,   129,   129,   247,   222,
     323,   200,   335,   260,   136,   242,   259,   347,   348,   180,
     180,   180,   287,   287,   287,   129,   129,   335,   131,   129,
     348,   129
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;                /* Cause a token to be read.  */

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
        YYSTACK_RELOCATE (yyss);
        YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
        case 3:
#line 1289 "vtkParse.y"
    {
      startSig();
      clearStorageType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 15:
#line 1309 "vtkParse.y"
    { output_function(); }
    break;

  case 16:
#line 1310 "vtkParse.y"
    { output_function(); }
    break;

  case 17:
#line 1311 "vtkParse.y"
    { output_function(); }
    break;

  case 18:
#line 1312 "vtkParse.y"
    { output_function(); }
    break;

  case 19:
#line 1313 "vtkParse.y"
    { reject_function(); }
    break;

  case 20:
#line 1314 "vtkParse.y"
    { reject_function(); }
    break;

  case 21:
#line 1315 "vtkParse.y"
    { reject_function(); }
    break;

  case 22:
#line 1316 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:
#line 1334 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 28:
#line 1335 "vtkParse.y"
    { popNamespace(); }
    break;

  case 42:
#line 1357 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 43:
#line 1358 "vtkParse.y"
    { end_class(); }
    break;

  case 44:
#line 1359 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 45:
#line 1360 "vtkParse.y"
    { end_class(); }
    break;

  case 47:
#line 1362 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 2); }
    break;

  case 48:
#line 1363 "vtkParse.y"
    { end_class(); }
    break;

  case 51:
#line 1368 "vtkParse.y"
    {
      startSig();
      clearStorageType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 63:
#line 1388 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 64:
#line 1389 "vtkParse.y"
    { output_function(); }
    break;

  case 65:
#line 1390 "vtkParse.y"
    { output_function(); }
    break;

  case 78:
#line 1409 "vtkParse.y"
    {
      vtkParse_AddStringToArray(&currentClass->SuperClasses,
                                &currentClass->NumberOfSuperClasses,
                                vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 79:
#line 1416 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 80:
#line 1417 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 81:
#line 1418 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 82:
#line 1429 "vtkParse.y"
    { start_enum((yyvsp[(2) - (2)].str)); }
    break;

  case 83:
#line 1429 "vtkParse.y"
    { end_enum(); }
    break;

  case 84:
#line 1430 "vtkParse.y"
    { start_enum(NULL); }
    break;

  case 85:
#line 1430 "vtkParse.y"
    { end_enum(); }
    break;

  case 89:
#line 1437 "vtkParse.y"
    { add_enum((yyvsp[(1) - (1)].str), NULL); }
    break;

  case 90:
#line 1438 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 91:
#line 1439 "vtkParse.y"
    { chopSig(); add_enum((yyvsp[(1) - (4)].str), copySig()); }
    break;

  case 101:
#line 1468 "vtkParse.y"
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, (yyvsp[(2) - (4)].integer), (yyvsp[(3) - (4)].integer), getSig());

      if (getVarName())
        {
        item->Name = vtkstrdup(getVarName());
        }

      if (currentClass)
        {
        vtkParse_AddTypedefToClass(currentClass, item);
        }
      else
        {
        vtkParse_AddTypedefToNamespace(currentNamespace, item);
        }
    }
    break;

  case 106:
#line 1496 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 107:
#line 1498 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; postSig(")"); popFunction(); }
    break;

  case 108:
#line 1506 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 109:
#line 1507 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 0); }
    break;

  case 110:
#line 1508 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 111:
#line 1510 "vtkParse.y"
    { add_using(vtkstrcat3((yyvsp[(2) - (5)].str), "operator", (yyvsp[(4) - (5)].str)), 0); }
    break;

  case 112:
#line 1512 "vtkParse.y"
    { add_using(vtkstrcat4("::", (yyvsp[(3) - (6)].str), "operator", (yyvsp[(5) - (6)].str)), 0); }
    break;

  case 113:
#line 1521 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 114:
#line 1523 "vtkParse.y"
    { postSig("template<"); clearTypeId(); startTemplate(); }
    break;

  case 115:
#line 1525 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
    }
    break;

  case 117:
#line 1534 "vtkParse.y"
    { chopSig(); postSig(", "); clearTypeId(); }
    break;

  case 119:
#line 1538 "vtkParse.y"
    { markSig(); }
    break;

  case 120:
#line 1540 "vtkParse.y"
    { add_template_arg((yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 122:
#line 1542 "vtkParse.y"
    { markSig(); }
    break;

  case 123:
#line 1544 "vtkParse.y"
    { add_template_arg(0, (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 125:
#line 1546 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 126:
#line 1548 "vtkParse.y"
    {
      unsigned long i;
      TemplateArgs *newTemplate = currentTemplate;
      popTemplate();
      add_template_arg(0, (yyvsp[(3) - (3)].integer), copySig());
      i = currentTemplate->NumberOfArguments-1;
      currentTemplate->Arguments[i]->Template = newTemplate;
    }
    break;

  case 128:
#line 1559 "vtkParse.y"
    { postSig("class "); }
    break;

  case 129:
#line 1560 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 132:
#line 1566 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 133:
#line 1568 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfArguments-1;
      TemplateArg *arg = currentTemplate->Arguments[i];
      chopSig();
      arg->Value = vtkstrdup(copySig());
    }
    break;

  case 148:
#line 1607 "vtkParse.y"
    { postSig("operator "); }
    break;

  case 149:
#line 1608 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 150:
#line 1612 "vtkParse.y"
    { postSig(")"); }
    break;

  case 151:
#line 1613 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(3) - (9)].integer);
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 152:
#line 1623 "vtkParse.y"
    { postSig(")"); }
    break;

  case 153:
#line 1624 "vtkParse.y"
    {
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 154:
#line 1632 "vtkParse.y"
    { postSig("operator"); }
    break;

  case 155:
#line 1632 "vtkParse.y"
    { postSig((yyvsp[(3) - (3)].str)); }
    break;

  case 156:
#line 1633 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 157:
#line 1638 "vtkParse.y"
    { (yyval.str) = (yyvsp[(3) - (8)].str); }
    break;

  case 158:
#line 1642 "vtkParse.y"
    {
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (2)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 163:
#line 1655 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 164:
#line 1655 "vtkParse.y"
    { chopSig(); }
    break;

  case 165:
#line 1658 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 166:
#line 1662 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 169:
#line 1674 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 170:
#line 1678 "vtkParse.y"
    { postSig(")"); }
    break;

  case 173:
#line 1690 "vtkParse.y"
    { closeSig(); }
    break;

  case 174:
#line 1691 "vtkParse.y"
    { openSig(); }
    break;

  case 175:
#line 1692 "vtkParse.y"
    {
      closeSig();
      if (getStorageType() & VTK_PARSE_VIRTUAL)
        {
        currentFunction->IsVirtual = 1;
        }
      if (getStorageType() & VTK_PARSE_EXPLICIT)
        {
        currentFunction->IsExplicit = 1;
        }
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (5)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 176:
#line 1708 "vtkParse.y"
    { postSig("("); }
    break;

  case 177:
#line 1708 "vtkParse.y"
    { postSig(")"); }
    break;

  case 184:
#line 1724 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 186:
#line 1727 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 187:
#line 1728 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 188:
#line 1729 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 190:
#line 1732 "vtkParse.y"
    { markSig(); }
    break;

  case 191:
#line 1734 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments;
      ValueInfo *arg = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(arg);

      handle_complex_type(arg, (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig());

      if (i < MAX_ARGS)
        {
        currentFunction->ArgTypes[i] = arg->Type;
        currentFunction->ArgClasses[i] = arg->Class;
        currentFunction->ArgCounts[i] = arg->Count;
        }

      if (getVarName())
        {
        arg->Name = vtkstrdup(getVarName());
        }

      vtkParse_AddArgumentToFunction(currentFunction, arg);
    }
    break;

  case 192:
#line 1756 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments-1;
      if (getVarValue())
        {
        currentFunction->Arguments[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 193:
#line 1764 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments;
      ValueInfo *arg = (ValueInfo *)malloc(sizeof(ValueInfo));

      vtkParse_InitValue(arg);

      markSig();
      postSig("void (*");
      postSig((yyvsp[(1) - (1)].str));
      postSig(")(void *) ");

      handle_function_type(arg, (yyvsp[(1) - (1)].str), copySig());

      if (i < MAX_ARGS)
        {
        currentFunction->ArgTypes[i] = arg->Type;
        currentFunction->ArgClasses[i] = arg->Class;
        currentFunction->ArgCounts[i] = arg->Count;
        }

      vtkParse_AddArgumentToFunction(currentFunction, arg);
    }
    break;

  case 196:
#line 1792 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 198:
#line 1796 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 199:
#line 1797 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 203:
#line 1810 "vtkParse.y"
    {
      unsigned int type = getStorageType();
      ValueInfo *var = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(var);
      var->ItemType = VTK_VARIABLE_INFO;
      var->Access = access_level;

      handle_complex_type(var, type, (yyvsp[(1) - (2)].integer), getSig());

      var->Name = vtkstrdup(getVarName());

      if (getVarValue())
        {
        var->Value = vtkstrdup(getVarValue());
        }

      if ((var->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
        {
        var->Type = var->Type;
        }

      /* Is this a constant? */
      if (((type & VTK_PARSE_CONST) != 0) && var->Value != NULL &&
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

  case 207:
#line 1864 "vtkParse.y"
    { postSig(", "); }
    break;

  case 209:
#line 1867 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 211:
#line 1869 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 213:
#line 1873 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 214:
#line 1874 "vtkParse.y"
    { postSig(")"); }
    break;

  case 215:
#line 1876 "vtkParse.y"
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

  case 216:
#line 1893 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 217:
#line 1894 "vtkParse.y"
    { postSig(")"); }
    break;

  case 218:
#line 1896 "vtkParse.y"
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

  case 219:
#line 1912 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 220:
#line 1913 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 221:
#line 1915 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 222:
#line 1919 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 223:
#line 1921 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 225:
#line 1925 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 227:
#line 1928 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 228:
#line 1929 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 229:
#line 1930 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      postSig(")");
      popFunction();
    }
    break;

  case 230:
#line 1935 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 232:
#line 1940 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 234:
#line 1945 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 235:
#line 1948 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 237:
#line 1952 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 238:
#line 1955 "vtkParse.y"
    { clearArray(); }
    break;

  case 240:
#line 1959 "vtkParse.y"
    { clearArray(); }
    break;

  case 242:
#line 1962 "vtkParse.y"
    { postSig("["); }
    break;

  case 243:
#line 1962 "vtkParse.y"
    { postSig("]"); }
    break;

  case 246:
#line 1968 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 247:
#line 1969 "vtkParse.y"
    { markSig(); }
    break;

  case 248:
#line 1969 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 249:
#line 1979 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 250:
#line 1980 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 251:
#line 1981 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 252:
#line 1982 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 253:
#line 1983 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 254:
#line 1984 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 255:
#line 1985 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 256:
#line 1986 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 257:
#line 1987 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 258:
#line 1988 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 259:
#line 1989 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 260:
#line 1990 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 261:
#line 1991 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 262:
#line 1992 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 263:
#line 1993 "vtkParse.y"
    { (yyval.str) = "size_t"; postSig((yyval.str)); }
    break;

  case 264:
#line 1994 "vtkParse.y"
    { (yyval.str) = "ssize_t"; postSig((yyval.str)); }
    break;

  case 265:
#line 1995 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; postSig((yyval.str)); }
    break;

  case 266:
#line 1996 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; postSig((yyval.str)); }
    break;

  case 267:
#line 1997 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; postSig((yyval.str)); }
    break;

  case 268:
#line 1998 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; postSig((yyval.str)); }
    break;

  case 269:
#line 1999 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; postSig((yyval.str)); }
    break;

  case 270:
#line 2000 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; postSig((yyval.str)); }
    break;

  case 271:
#line 2001 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; postSig((yyval.str)); }
    break;

  case 272:
#line 2002 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; postSig((yyval.str)); }
    break;

  case 273:
#line 2003 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; postSig((yyval.str)); }
    break;

  case 274:
#line 2004 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; postSig((yyval.str)); }
    break;

  case 275:
#line 2005 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; postSig((yyval.str)); }
    break;

  case 276:
#line 2006 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; postSig((yyval.str)); }
    break;

  case 284:
#line 2027 "vtkParse.y"
    { setStorageType((yyvsp[(1) - (1)].integer)); }
    break;

  case 285:
#line 2030 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 286:
#line 2031 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 287:
#line 2032 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 288:
#line 2033 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 289:
#line 2034 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 290:
#line 2035 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 291:
#line 2036 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 293:
#line 2040 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 294:
#line 2048 "vtkParse.y"
    { setStorageType((yyval.integer)); }
    break;

  case 295:
#line 2050 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));
    }
    break;

  case 297:
#line 2057 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 299:
#line 2061 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 300:
#line 2062 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 302:
#line 2067 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 303:
#line 2069 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 304:
#line 2070 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 305:
#line 2071 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 306:
#line 2072 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 307:
#line 2073 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 308:
#line 2074 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 309:
#line 2075 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 310:
#line 2078 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 311:
#line 2081 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 312:
#line 2083 "vtkParse.y"
    {
      chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();
    }
    break;

  case 316:
#line 2094 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 317:
#line 2095 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 318:
#line 2096 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 319:
#line 2100 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 320:
#line 2102 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 321:
#line 2104 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 322:
#line 2106 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 323:
#line 2107 "vtkParse.y"
    { postSig("template "); }
    break;

  case 324:
#line 2108 "vtkParse.y"
    { (yyval.str) = vtkstrcat4((yyvsp[(1) - (5)].str), "template ", (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)); }
    break;

  case 325:
#line 2111 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 326:
#line 2114 "vtkParse.y"
    { (yyval.str) = "::"; postSig((yyval.str)); }
    break;

  case 329:
#line 2121 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 330:
#line 2122 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 331:
#line 2123 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 332:
#line 2124 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 333:
#line 2125 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 334:
#line 2126 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 335:
#line 2127 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 336:
#line 2128 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 337:
#line 2129 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 338:
#line 2130 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 339:
#line 2131 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 340:
#line 2132 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 341:
#line 2133 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 342:
#line 2134 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 343:
#line 2135 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 344:
#line 2136 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 345:
#line 2137 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 346:
#line 2138 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 347:
#line 2139 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 348:
#line 2140 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 349:
#line 2141 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 350:
#line 2144 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 351:
#line 2145 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 352:
#line 2146 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 353:
#line 2147 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 354:
#line 2148 "vtkParse.y"
    { typeSig("long double"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 355:
#line 2149 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 356:
#line 2150 "vtkParse.y"
    { typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 357:
#line 2152 "vtkParse.y"
    { typeSig("unsigned char"); (yyval.integer) = VTK_PARSE_UNSIGNED_CHAR; }
    break;

  case 358:
#line 2153 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 359:
#line 2155 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 360:
#line 2156 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 361:
#line 2158 "vtkParse.y"
    { typeSig("unsigned short"); (yyval.integer) = VTK_PARSE_UNSIGNED_SHORT; }
    break;

  case 362:
#line 2159 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 363:
#line 2161 "vtkParse.y"
    { typeSig("unsigned long"); (yyval.integer) = VTK_PARSE_UNSIGNED_LONG; }
    break;

  case 364:
#line 2162 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG; }
    break;

  case 365:
#line 2164 "vtkParse.y"
    {typeSig("unsigned long long");(yyval.integer)=VTK_PARSE_UNSIGNED_LONG_LONG; }
    break;

  case 366:
#line 2165 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 367:
#line 2167 "vtkParse.y"
    { typeSig("unsigned __int64"); (yyval.integer) = VTK_PARSE_UNSIGNED___INT64; }
    break;

  case 368:
#line 2168 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 369:
#line 2169 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT;}
    break;

  case 370:
#line 2189 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 371:
#line 2190 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 374:
#line 2198 "vtkParse.y"
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

  case 375:
#line 2209 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 376:
#line 2210 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 377:
#line 2217 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 378:
#line 2218 "vtkParse.y"
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, (yyvsp[(6) - (7)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 379:
#line 2227 "vtkParse.y"
    {postSig("Get");}
    break;

  case 380:
#line 2228 "vtkParse.y"
    {markSig();}
    break;

  case 381:
#line 2228 "vtkParse.y"
    {swapSig();}
    break;

  case 382:
#line 2229 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(7) - (9)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 383:
#line 2237 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 384:
#line 2238 "vtkParse.y"
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 385:
#line 2247 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 386:
#line 2248 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 387:
#line 2256 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 388:
#line 2256 "vtkParse.y"
    {closeSig();}
    break;

  case 389:
#line 2258 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (10)].str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 390:
#line 2289 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 391:
#line 2290 "vtkParse.y"
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 392:
#line 2299 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 393:
#line 2300 "vtkParse.y"
    {markSig();}
    break;

  case 394:
#line 2300 "vtkParse.y"
    {swapSig();}
    break;

  case 395:
#line 2301 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 396:
#line 2310 "vtkParse.y"
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

  case 397:
#line 2327 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 398:
#line 2328 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 399:
#line 2332 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 400:
#line 2333 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 401:
#line 2337 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 402:
#line 2338 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 403:
#line 2342 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 404:
#line 2343 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 405:
#line 2347 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 406:
#line 2348 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 407:
#line 2352 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 408:
#line 2353 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 409:
#line 2357 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 410:
#line 2358 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 411:
#line 2362 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 412:
#line 2363 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 413:
#line 2367 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 414:
#line 2369 "vtkParse.y"
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
   add_argument(currentFunction, (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer)),
                getTypeId(), (int)strtol((yyvsp[(8) - (9)].str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 415:
#line 2384 "vtkParse.y"
    {startSig();}
    break;

  case 416:
#line 2386 "vtkParse.y"
    {
   chopSig();
   currentFunction->Macro = "vtkGetVectorMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (9)].str));
   postSig(" *");
   postSig(currentFunction->Name);
   postSig("();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer)),
              getTypeId(), (int)strtol((yyvsp[(8) - (9)].str), NULL, 0));
   output_function();
   }
    break;

  case 417:
#line 2399 "vtkParse.y"
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
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
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

  case 418:
#line 2436 "vtkParse.y"
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
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
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

  case 419:
#line 2474 "vtkParse.y"
    {
   int is_concrete = 0;
   unsigned long i;

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = vtkstrdup("GetClassName");
   currentFunction->Signature = vtkstrdup("const char *GetClassName();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = vtkstrdup("IsA");
   currentFunction->Signature = vtkstrdup("int IsA(const char *name);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = vtkstrdup("NewInstance");
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
     currentFunction->Name = vtkstrdup("SafeDownCast");
     currentFunction->Signature =
       vtkstrcat((yyvsp[(3) - (7)].str), " *SafeDownCast(vtkObject* o);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
     set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
                (yyvsp[(3) - (7)].str), 0);
     output_function();
     }
   }
    break;

  case 422:
#line 2533 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 423:
#line 2534 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 424:
#line 2535 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 425:
#line 2536 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 426:
#line 2537 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 427:
#line 2538 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 428:
#line 2539 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 429:
#line 2540 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 431:
#line 2544 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 432:
#line 2545 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 433:
#line 2546 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 434:
#line 2547 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 435:
#line 2548 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 436:
#line 2549 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 437:
#line 2550 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 438:
#line 2551 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 439:
#line 2552 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 440:
#line 2553 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 441:
#line 2554 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 442:
#line 2555 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 443:
#line 2556 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 444:
#line 2557 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 445:
#line 2558 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 446:
#line 2559 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 447:
#line 2560 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 448:
#line 2561 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 449:
#line 2562 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 450:
#line 2563 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 451:
#line 2564 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 452:
#line 2565 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 453:
#line 2566 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 454:
#line 2567 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 455:
#line 2568 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 456:
#line 2569 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 457:
#line 2570 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 458:
#line 2571 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 459:
#line 2572 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 460:
#line 2573 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 461:
#line 2574 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 462:
#line 2575 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 463:
#line 2576 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 464:
#line 2577 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 465:
#line 2580 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 466:
#line 2581 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 467:
#line 2582 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 468:
#line 2583 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 469:
#line 2584 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 470:
#line 2585 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 471:
#line 2586 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 472:
#line 2587 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 473:
#line 2588 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 474:
#line 2589 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 475:
#line 2590 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 476:
#line 2591 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 477:
#line 2592 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 478:
#line 2593 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 479:
#line 2594 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 480:
#line 2595 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 481:
#line 2596 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 482:
#line 2597 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 483:
#line 2598 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 484:
#line 2599 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 485:
#line 2600 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 486:
#line 2601 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 499:
#line 2625 "vtkParse.y"
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
        l = strlen(cp);
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

  case 500:
#line 2655 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 501:
#line 2655 "vtkParse.y"
    { postSig("."); }
    break;

  case 502:
#line 2656 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 503:
#line 2657 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 504:
#line 2658 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 509:
#line 2665 "vtkParse.y"
    { postSig("< "); }
    break;

  case 510:
#line 2666 "vtkParse.y"
    { postSig("> "); }
    break;

  case 512:
#line 2669 "vtkParse.y"
    { postSig("= "); }
    break;

  case 513:
#line 2670 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 515:
#line 2673 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 523:
#line 2687 "vtkParse.y"
    { postSig("= "); }
    break;

  case 524:
#line 2688 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 525:
#line 2692 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 526:
#line 2698 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 527:
#line 2705 "vtkParse.y"
    { postSig("["); }
    break;

  case 528:
#line 2706 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 529:
#line 2709 "vtkParse.y"
    { postSig("("); }
    break;

  case 530:
#line 2710 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 531:
#line 2711 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 532:
#line 2712 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 533:
#line 2713 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 534:
#line 2714 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 535:
#line 2717 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 536:
#line 2717 "vtkParse.y"
    { postSig("} "); }
    break;


/* Line 1267 of yacc.c.  */
#line 7049 "vtkParse.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 2750 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct_or_union)
{
  ClassInfo *outerClass = currentClass;
  pushClass();
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  vtkParse_InitClass(currentClass);
  currentClass->Name = vtkstrdup(classname);
  if (is_struct_or_union == 1)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  if (is_struct_or_union == 2)
    {
    currentClass->ItemType = VTK_UNION_INFO;
    }

  if (classname[strlen(classname)-1] != '>')
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
  currentClass->Name = vtkstrdup(classname);
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
  vtkParse_AddDefaultConstructors(currentClass);

  popClass();
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
    item->Scope = vtkstrdup(name);
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
  static char text[256];
  EnumInfo *item;

  currentEnumName = "int";
  currentEnumValue = NULL;
  if (name)
    {
    strcpy(text, name);
    currentEnumName = text;
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    vtkParse_InitEnum(item);
    item->Name = vtkstrdup(name);
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
    currentEnumValue = text;
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
    }
  else
    {
    strcpy(text, "0");
    currentEnumValue = text;
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
      &preprocessor, valstring);

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
      &preprocessor, valstring, &val, &is_unsigned);

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
  con->Name = vtkstrdup(name);
  con->Value = vtkstrdup(value);
  con->Type = type;
  if (typeclass)
    {
    con->Class = vtkstrdup(typeclass);
    }

  if (flag == 2)
    {
    con->IsEnum = 1;
    }

  if (flag == 1)
    {
    con->Access = VTK_ACCESS_PUBLIC;
    if (con->Type == 0)
      {
      con->Type = guess_constant_type(con->Value);
      }
    vtkParse_AddConstantToNamespace(data.Contents, con);
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

/* add a template argument to the current template */
void add_template_arg(
  unsigned int datatype, unsigned int extra, const char *funcSig)
{
  ValueInfo val;
  TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
  vtkParse_InitTemplateArg(arg);
  vtkParse_InitValue(&val);
  handle_complex_type(&val, datatype, extra, funcSig);
  arg->Type = val.Type;
  arg->Class = val.Class;
  arg->Function = val.Function;
  arg->NumberOfDimensions = val.NumberOfDimensions;
  arg->Dimensions = val.Dimensions;
  if (getVarName())
    {
    arg->Name = vtkstrdup(getVarName());
    }
  vtkParse_AddArgumentToTemplate(currentTemplate, arg);
}

/* add an arg to a function */
void add_argument(FunctionInfo *func, unsigned int type,
                  const char *typeclass, unsigned long count)
{
  unsigned long i = func->NumberOfArguments;
  char text[64];
  ValueInfo *arg = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(arg);

  arg->Type = type;
  if (typeclass)
    {
    arg->Class = vtkstrdup(typeclass);
    }

  if (count)
    {
    arg->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&arg->Dimensions, &arg->NumberOfDimensions,
                              vtkstrdup(text));
    }

  func->ArgTypes[i] = arg->Type;
  func->ArgClasses[i] = arg->Class;
  func->ArgCounts[i] = count;

  vtkParse_AddArgumentToFunction(func, arg);
}

/* set the return type for the current function */
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *val = (ValueInfo *)malloc(sizeof(ValueInfo));

  vtkParse_InitValue(val);
  val->Type = type;
  if (typeclass)
    {
    val->Class = vtkstrdup(typeclass);
    }

  if (count)
    {
    val->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&val->Dimensions, &val->NumberOfDimensions,
                              vtkstrdup(text));
    func->HaveHint = 1;
    }

  func->ReturnValue = val;
  func->ReturnType = val->Type;
  func->ReturnClass = val->Class;
  func->HintSize = count;
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

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
    /* the current type becomes the function return type */
    func = getFunction();
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(func->ReturnValue);
    func->ReturnValue->Type = datatype;
    func->ReturnValue->Class = vtkstrdup(getTypeId());
    func->ReturnType = func->ReturnValue->Type;
    func->ReturnClass = func->ReturnValue->Class;
    if (funcSig) { func->Signature = vtkstrdup(funcSig); }
    val->Function = func;

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
  val->Class = vtkstrdup(getTypeId());

  /* copy contents of all brackets to the ArgDimensions */
  val->NumberOfDimensions = getArrayNDims();
  val->Dimensions = getArray();
  clearArray();

  /* count is the product of the dimensions */
  val->Count = count_from_dimensions(val);
}

/* specifically handle a VAR_FUNCTION argument */
void handle_function_type(
  ValueInfo *arg, const char *name, const char *funcSig)
{
  FunctionInfo *func;
  size_t j;

  arg->Type = VTK_PARSE_FUNCTION;
  arg->Class = vtkstrdup("function");

  if (name && name[0] != '\0')
    {
    arg->Name = vtkstrdup(name);
    }

  func = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(func);
  add_argument(func, VTK_PARSE_VOID_PTR, "void", 0);
  set_return(func, VTK_PARSE_VOID, "void", 0);
  j = strlen(funcSig);
  while (j > 0 && funcSig[j-1] == ' ')
    {
    j--;
    }

  func->Signature = vtkstrndup(funcSig, j);
  arg->Function = func;
}


/* reject the function, do not output it */
void reject_function()
{
  vtkParse_InitFunction(currentFunction);
  startSig();
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
  if (currentFunction->ReturnType & VTK_PARSE_STATIC)
    {
    currentFunction->IsStatic = 1;
    }

  /* virtual */
  if (currentFunction->ReturnType & VTK_PARSE_VIRTUAL)
    {
    currentFunction->IsVirtual = 1;
    }

  /* explicit */
  if (currentFunction->ReturnType & VTK_PARSE_EXPLICIT)
    {
    currentFunction->IsExplicit = 1;
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

  /* a void argument is the same as no arguments */
  if (currentFunction->NumberOfArguments == 1 &&
      (currentFunction->Arguments[0]->Type & VTK_PARSE_UNQUALIFIED_TYPE) ==
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

  /* is it defined in a legacy macro? */
  if (macro && strcmp(macro, "VTK_LEGACY") == 0)
    {
    currentFunction->IsLegacy = 1;
    }

  /* set public, protected */
  if (currentClass)
    {
    currentFunction->Access = access_level;
    /* set legacy flags */
    currentFunction->IsPublic = (access_level == VTK_ACCESS_PUBLIC);
    currentFunction->IsProtected = (access_level == VTK_ACCESS_PROTECTED);
    }
  else
    {
    currentFunction->Access = VTK_ACCESS_PUBLIC;
    /* set legacy flags */
    currentFunction->IsPublic = 1;
    currentFunction->IsProtected = 0;
    }

  /* look for legacy VAR FUNCTIONS */
  if (currentFunction->NumberOfArguments
      && (currentFunction->Arguments[0]->Type == VTK_PARSE_FUNCTION))
    {
    if (currentFunction->NumberOfArguments != 2 ||
        currentFunction->Arguments[1]->Type != VTK_PARSE_VOID_PTR)
      {
      currentFunction->ArrayFailure = 1;
      }
    }

  /* check for too many arguments */
  if (currentFunction->NumberOfArguments > MAX_ARGS)
    {
    currentFunction->ArrayFailure = 1;
    }

  /* also legacy: tell old wrappers that multi-dimensional arrays are bad */
  for (i = 0; i < currentFunction->NumberOfArguments; i++)
    {
    ValueInfo *arg = currentFunction->Arguments[i];
    if ((arg->Type & VTK_PARSE_POINTER_MASK) != 0)
      {
      if (((arg->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION) ||
          ((arg->Type & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT) ||
          ((arg->Type & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_POINTER))
       {
       currentFunction->ArrayFailure = 1;
       }
      }
    }

  if (currentClass)
    {
    /* is it a delete function */
    if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
      {
      currentClass->HasDelete = 1;
      }

    currentFunction->Class = vtkstrdup(currentClass->Name);
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
        if (currentNamespace->Functions[i]->NumberOfArguments ==
            currentFunction->NumberOfArguments)
          {
          for (j = 0; j < currentFunction->NumberOfArguments; j++)
            {
            if (currentNamespace->Functions[i]->Arguments[j]->Type ==
                currentFunction->Arguments[j]->Type)
              {
              if (currentFunction->Arguments[j]->Type == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->Arguments[j]->Class,
                         currentFunction->Arguments[j]->Class) == 0)
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

void outputSetVectorMacro(const char *var, unsigned int argType,
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

  sprintf(ntext, "%li", n);

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
    add_argument(currentFunction, argType, getTypeId(), 0);
    }
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Set", var);
  currentFunction->Signature =
    vtkstrcat7("void ", currentFunction->Name, "(", getTypeId(),
               " a[", ntext, "]);");
  add_argument(currentFunction, (VTK_PARSE_POINTER | argType),
               getTypeId(), n);
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();
}

void outputGetVectorMacro(const char *var, unsigned int argType,
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
  set_return(currentFunction, (VTK_PARSE_POINTER | argType), getTypeId(), n);
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

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, FILE *ifile, FILE *errfile)
{
  unsigned long i, j;
  int lineno;
  int ret;
  FileInfo *file_info;
  char *main_class;
  const char **include_dirs;

  vtkParse_InitFile(&data);

  i = preprocessor.NumberOfIncludeDirectories;
  include_dirs = preprocessor.IncludeDirectories;
  preprocessor.NumberOfIncludeDirectories = 0;
  preprocessor.IncludeDirectories = NULL;
  vtkParsePreprocess_InitPreprocess(&preprocessor);
  vtkParsePreprocess_AddStandardMacros(&preprocessor, VTK_PARSE_NATIVE);
  preprocessor.FileName = vtkstrdup(filename);
  preprocessor.NumberOfIncludeDirectories = i;
  preprocessor.IncludeDirectories = include_dirs;
  /* should explicitly check for vtkConfigure.h, or even explicitly load it */
#ifdef VTK_USE_64BIT_IDS
  vtkParsePreprocess_AddMacro(&preprocessor, "VTK_USE_64BIT_IDS", "1");
#endif

  data.FileName = vtkstrdup(filename);

  clearComment();

  namespaceDepth = 0;
  currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
  vtkParse_InitNamespace(currentNamespace);
  data.Contents = currentNamespace;

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
  strncpy(main_class, &filename[i], j-i);
  main_class[j-i] = '\0';

  /* special treatment of the main class in the file */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->Name, main_class) == 0)
      {
      data.MainClass = currentNamespace->Classes[i];
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

          if (func_info->HaveHint == 0 && func_info->Name &&
              (strcmp(h_func, func_info->Name) == 0) &&
              (type == ((func_info->ReturnType & ~VTK_PARSE_REF) &
                        VTK_PARSE_UNQUALIFIED_TYPE)))
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
              case VTK_PARSE_CHAR_PTR:
                {
                if (func_info->ReturnValue &&
                    func_info->ReturnValue->NumberOfDimensions == 0)
                  {
                  char text[64];
                  func_info->HaveHint = 1;
                  func_info->HintSize = h_value;
                  func_info->ReturnValue->Count = h_value;
                  sprintf(text, "%lu", h_value);
                  vtkParse_AddStringToArray(
                    &func_info->ReturnValue->Dimensions,
                    &func_info->ReturnValue->NumberOfDimensions,
                    vtkstrdup(text));
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
  vtkParse_FreeStrings();
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
     vtkParse_AddStringToArray(&ConcreteClasses,
                               &NumberOfConcreteClasses,
                               vtkstrdup(classname));
     }
}

/** Define a preprocessor macro. Function macros are not supported.  */
void vtkParse_DefineMacro(const char *name, const char *definition)
{
  vtkParsePreprocess_AddMacro(&preprocessor, name, definition);
}

/** Undefine a preprocessor macro.  */
void vtkParse_UndefineMacro(const char *name)
{
  vtkParsePreprocess_RemoveMacro(&preprocessor, name);
}

/** Add an include directory, for use with the "-I" option.  */
void vtkParse_IncludeDirectory(const char *dirname)
{
  vtkParsePreprocess_IncludeDirectory(&preprocessor, dirname);
}

/** Return the full path to a header file.  */
const char *vtkParse_FindIncludeFile(const char *filename)
{
  int val;
  return vtkParsePreprocess_FindIncludeFile(&preprocessor, filename, 0, &val);
}

