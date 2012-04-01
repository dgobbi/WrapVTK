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
     LONG_DOUBLE = 333,
     INT = 334,
     UNSIGNED_INT = 335,
     SHORT = 336,
     UNSIGNED_SHORT = 337,
     LONG = 338,
     UNSIGNED_LONG = 339,
     LONG_LONG = 340,
     UNSIGNED_LONG_LONG = 341,
     INT64__ = 342,
     UNSIGNED_INT64__ = 343,
     CHAR = 344,
     SIGNED_CHAR = 345,
     UNSIGNED_CHAR = 346,
     SIGNED = 347,
     UNSIGNED = 348,
     SSIZE_T = 349,
     SIZE_T = 350,
     IdType = 351,
     FloatType = 352,
     TypeInt8 = 353,
     TypeUInt8 = 354,
     TypeInt16 = 355,
     TypeUInt16 = 356,
     TypeInt32 = 357,
     TypeUInt32 = 358,
     TypeInt64 = 359,
     TypeUInt64 = 360,
     TypeFloat32 = 361,
     TypeFloat64 = 362,
     SetMacro = 363,
     GetMacro = 364,
     SetStringMacro = 365,
     GetStringMacro = 366,
     SetClampMacro = 367,
     SetObjectMacro = 368,
     GetObjectMacro = 369,
     BooleanMacro = 370,
     SetVector2Macro = 371,
     SetVector3Macro = 372,
     SetVector4Macro = 373,
     SetVector6Macro = 374,
     GetVector2Macro = 375,
     GetVector3Macro = 376,
     GetVector4Macro = 377,
     GetVector6Macro = 378,
     SetVectorMacro = 379,
     GetVectorMacro = 380,
     ViewportCoordinateMacro = 381,
     WorldCoordinateMacro = 382,
     TypeMacro = 383,
     VTK_BYTE_SWAP_DECL = 384
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
#line 1458 "vtkParse.tab.c"
        YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1471 "vtkParse.tab.c"

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
#define YYLAST   6230

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  153
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  203
/* YYNRULES -- Number of rules.  */
#define YYNRULES  566
/* YYNRULES -- Number of states.  */
#define YYNSTATES  963

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   384

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   149,     2,     2,     2,   145,   143,     2,
     136,   137,   144,   148,   134,   147,   152,   146,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   133,   130,
     138,   135,   139,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   140,     2,   141,   151,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   131,   150,   132,   142,     2,     2,     2,
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
     125,   126,   127,   128,   129
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
    1381,  1383,  1385,  1387,  1389,  1391,  1393,  1396,  1398,  1400,
    1402,  1404,  1406,  1408,  1410,  1412,  1414,  1416,  1417,  1420,
    1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,  1437,  1440,
    1441,  1444,  1446,  1448,  1450,  1452,  1454,  1455,  1460,  1461,
    1466,  1467,  1472,  1473,  1478,  1479,  1484,  1485,  1490,  1491,
    1494,  1495,  1498,  1500,  1502,  1504,  1506,  1508,  1510,  1512,
    1514,  1516,  1518,  1520,  1522,  1524,  1526,  1528,  1530,  1532,
    1534,  1536,  1540,  1544,  1548,  1550,  1552
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     154,     0,    -1,    -1,    -1,   154,   155,   156,    -1,   160,
      -1,   185,    -1,   158,    -1,   157,    -1,   182,    -1,   246,
      -1,   178,    -1,   172,   248,   130,    -1,   161,   248,   130,
      -1,   186,   161,   248,   130,    -1,   202,   223,    -1,   206,
     223,    -1,   186,   202,   223,    -1,   186,   206,   223,    -1,
     205,   223,    -1,   203,   223,    -1,   186,   205,   223,    -1,
     186,   203,   223,    -1,   300,    -1,   288,   130,    -1,   130,
      -1,    34,    13,   131,   154,   132,    -1,    -1,    40,   276,
     159,   131,   154,   132,    -1,    40,   131,   348,   132,    -1,
      21,   288,   130,    -1,    20,   288,   130,    -1,    22,   288,
     130,    -1,    33,    21,   288,   130,    -1,    33,    20,   288,
     130,    -1,    33,    22,   288,   130,    -1,   186,    21,   288,
     130,    -1,   186,    20,   288,   130,    -1,   186,    22,   288,
     130,    -1,    33,   186,    21,   288,   130,    -1,    33,   186,
      20,   288,   130,    -1,    33,   186,    22,   288,   130,    -1,
      -1,    21,   288,   162,   168,   131,   165,   132,    -1,    -1,
      20,   288,   163,   168,   131,   165,   132,    -1,    20,   131,
     348,   132,    -1,    -1,    22,   288,   164,   168,   131,   165,
     132,    -1,    22,   131,   348,   132,    -1,    -1,    -1,   165,
     166,   167,    -1,   165,   171,   133,    -1,   160,    -1,   185,
      -1,   182,    -1,   246,    -1,   172,   248,   130,    -1,   161,
     248,   130,    -1,   186,   161,   248,   130,    -1,    33,   180,
      -1,    33,   179,    -1,    33,   204,   223,    -1,   204,   223,
      -1,   186,   204,   223,    -1,   300,    -1,   129,   354,    -1,
     288,   130,    -1,   290,    35,   324,   130,    -1,   130,    -1,
      -1,   133,   169,    -1,   170,    -1,   170,   134,   169,    -1,
     288,    -1,    25,   288,    -1,    26,   288,    -1,    24,   288,
      -1,    24,    -1,    25,    -1,    26,    -1,    -1,    23,   276,
     173,   131,   175,   132,    -1,    -1,    23,   174,   131,   175,
     132,    -1,    -1,   176,    -1,   176,   134,   175,    -1,   275,
      -1,    -1,   275,   135,   177,   328,    -1,   186,   280,   290,
     275,   135,   349,   130,    -1,   186,   180,    -1,    21,   288,
     181,    -1,    20,   288,   181,    -1,    20,   181,    -1,    22,
     288,   181,    -1,    22,   181,    -1,   131,   348,   132,   349,
     130,    -1,   133,   349,   130,    -1,    39,   281,   183,   130,
      -1,    39,   161,   242,   130,    -1,    39,   172,   242,   130,
      -1,    39,     6,   130,    -1,   256,    -1,    -1,   266,   136,
     184,   235,   137,   260,    -1,    41,    40,   288,   130,    -1,
      41,    38,   288,   130,    -1,    41,   288,   130,    -1,    41,
     290,    35,   324,   130,    -1,    41,   293,   290,    35,   324,
     130,    -1,    36,   138,   139,    -1,    -1,    36,   138,   187,
     188,   139,    -1,   190,    -1,    -1,   190,   134,   189,   188,
      -1,    -1,    -1,   191,   294,   254,   192,   198,    -1,    -1,
      -1,   193,   197,   254,   194,   198,    -1,    -1,    -1,   195,
     186,   254,   196,   198,    -1,    21,    -1,    38,    -1,    -1,
     199,    -1,    -1,   135,   200,   201,    -1,   336,    -1,   201,
     336,    -1,   280,   217,    -1,   280,   290,   217,    -1,   290,
     227,    -1,   277,   290,   227,    -1,   280,   217,    -1,   206,
      -1,   227,    -1,   277,   227,    -1,   290,   207,    -1,   280,
     290,   211,    -1,   207,    -1,   280,   211,    -1,    -1,    -1,
      -1,    35,   208,   280,   136,   209,   235,   137,   210,   218,
      -1,    -1,   213,   212,   218,    -1,    -1,    -1,    -1,    35,
     214,   324,   215,   136,   216,   235,   137,    -1,   224,   218,
      -1,    -1,   218,   219,    -1,   218,   221,    -1,   218,   222,
      -1,    -1,    37,   220,   342,    -1,    27,    -1,   135,    19,
      -1,   131,   348,   132,    -1,   130,    -1,    -1,   226,   136,
     225,   235,   137,    -1,   275,    -1,   286,    -1,    -1,    -1,
     230,   228,   232,   229,   218,    -1,    -1,   226,   136,   231,
     235,   137,    -1,    -1,   133,   234,   233,    -1,    -1,   134,
     234,   233,    -1,   288,   354,    -1,    -1,    -1,   236,   237,
      -1,    71,    -1,   239,    -1,    -1,   239,   134,   238,   237,
      -1,    -1,    -1,   240,   281,   254,   241,   243,    -1,     6,
      -1,   275,    -1,   297,   275,    -1,    -1,   244,    -1,    -1,
     135,   245,   328,    -1,   280,   247,   249,   130,    -1,    29,
       6,   249,   130,    -1,     6,   249,   130,    -1,   256,   243,
      -1,    -1,   251,   249,    -1,    -1,    -1,   249,   134,   250,
     251,    -1,    -1,   252,   247,    -1,    -1,   297,   253,   247,
      -1,   265,   267,    -1,    -1,   258,   263,   137,   255,   261,
      -1,   266,   267,    -1,    -1,   259,   264,   137,   257,   261,
      -1,   136,    -1,    11,    -1,    12,    -1,    11,    -1,    12,
      -1,    -1,    27,    -1,    37,   354,    -1,    -1,    -1,   136,
     262,   235,   137,   260,    -1,   268,    -1,   254,    -1,   297,
     254,    -1,   256,    -1,   297,   256,    -1,    -1,   266,    -1,
     275,    -1,    -1,   268,    -1,    -1,   269,   270,    -1,    -1,
     272,   140,   271,   273,   141,    -1,    -1,   270,    -1,    -1,
      -1,   274,   328,    -1,     4,    -1,     5,    -1,     3,    -1,
      10,    -1,     9,    -1,     7,    -1,     8,    -1,   142,     4,
      -1,   142,     5,    -1,   142,     3,    -1,   142,    10,    -1,
     142,     9,    -1,   142,     7,    -1,   142,     8,    -1,    95,
      -1,    94,    -1,    98,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,    96,    -1,    97,    -1,     3,    -1,     5,
      -1,     4,    -1,    10,    -1,     9,    -1,     7,    -1,     8,
      -1,   279,    -1,    28,    -1,    32,    -1,    34,    -1,    34,
      13,    -1,    31,    -1,    29,    -1,    30,    -1,   278,    -1,
     279,   278,    -1,   281,    -1,   277,   281,    -1,   282,    -1,
     282,   297,    -1,   283,    -1,   285,   283,    -1,   283,   285,
      -1,   294,    -1,   286,    -1,   289,    -1,    -1,    38,   284,
     288,    -1,    21,   295,    -1,    20,   295,    -1,    22,   295,
      -1,    23,   295,    -1,    27,    -1,    -1,   276,   138,   287,
     334,   139,    -1,   275,    -1,   286,    -1,   289,    -1,   290,
     275,    -1,   290,   286,    -1,   293,   288,    -1,   292,   293,
      -1,   286,   293,    -1,   290,   292,   293,    -1,   290,   286,
     293,    -1,    -1,   290,    36,   291,   286,   293,    -1,   276,
      -1,    72,    -1,   296,    -1,   295,    -1,     7,    -1,     8,
      -1,     9,    -1,    10,    -1,     3,    -1,     4,    -1,     5,
      -1,    94,    -1,    95,    -1,    98,    -1,    99,    -1,   100,
      -1,   101,    -1,   102,    -1,   103,    -1,   104,    -1,   105,
      -1,   106,    -1,   107,    -1,    96,    -1,    97,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    89,
      -1,    90,    -1,    91,    -1,    79,    -1,    80,    -1,    81,
      -1,    82,    -1,    83,    -1,    84,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    92,    -1,    93,    -1,   143,
      -1,   298,   143,    -1,   298,    -1,   299,    -1,   298,   299,
      -1,   144,    -1,   144,    27,    -1,    -1,   108,   136,   275,
     134,   301,   281,   137,    -1,    -1,    -1,    -1,   109,   136,
     302,   275,   134,   303,   281,   304,   137,    -1,    -1,   110,
     136,   305,   275,   137,    -1,    -1,   111,   136,   306,   275,
     137,    -1,    -1,    -1,   112,   136,   275,   134,   307,   282,
     308,   134,   349,   137,    -1,    -1,   113,   136,   275,   134,
     309,   282,   137,    -1,    -1,    -1,    -1,   114,   136,   310,
     275,   134,   311,   282,   312,   137,    -1,   115,   136,   275,
     134,   282,   137,    -1,    -1,   116,   136,   275,   134,   313,
     282,   137,    -1,    -1,   120,   136,   275,   134,   314,   282,
     137,    -1,    -1,   117,   136,   275,   134,   315,   282,   137,
      -1,    -1,   121,   136,   275,   134,   316,   282,   137,    -1,
      -1,   118,   136,   275,   134,   317,   282,   137,    -1,    -1,
     122,   136,   275,   134,   318,   282,   137,    -1,    -1,   119,
     136,   275,   134,   319,   282,   137,    -1,    -1,   123,   136,
     275,   134,   320,   282,   137,    -1,    -1,   124,   136,   275,
     134,   321,   282,   134,    14,   137,    -1,    -1,   125,   136,
     275,   134,   322,   282,   134,    14,   137,    -1,   126,   136,
     275,   137,    -1,   127,   136,   275,   137,    -1,   128,   136,
     275,   134,   275,   323,   137,    -1,    -1,   134,    -1,   136,
     137,    -1,   140,   141,    -1,    42,   140,   141,    -1,    43,
     140,   141,    -1,   138,    -1,   139,    -1,   134,    -1,   135,
      -1,   325,    -1,   145,    -1,   144,    -1,   146,    -1,   147,
      -1,   148,    -1,   149,    -1,   142,    -1,   143,    -1,   150,
      -1,   151,    -1,    42,    -1,    43,    -1,    48,    -1,    49,
      -1,    50,    -1,    51,    -1,    52,    -1,    53,    -1,    54,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    55,    -1,    56,    -1,    62,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    39,    -1,    38,    -1,    21,    -1,    20,
      -1,    22,    -1,    36,    -1,    24,    -1,    26,    -1,    25,
      -1,    27,    -1,    29,    -1,    32,    -1,    30,    -1,    34,
      -1,    40,    -1,    35,    -1,    23,    -1,    37,    -1,    46,
      -1,    45,    -1,    44,    -1,    47,    -1,    16,    -1,    14,
      -1,    15,    -1,    17,    -1,    18,    -1,    13,    -1,    19,
      -1,   331,    -1,   328,   331,    -1,   340,    -1,   342,    -1,
     346,    -1,   325,    -1,   133,    -1,   152,    -1,    72,    -1,
     326,    -1,   327,    -1,   294,    -1,    -1,   330,   332,    -1,
     329,    -1,   138,    -1,   139,    -1,   331,    -1,   135,    -1,
     134,    -1,   332,    -1,   130,    -1,    -1,   334,   337,    -1,
      -1,   335,   333,    -1,   338,    -1,   329,    -1,   336,    -1,
     135,    -1,   134,    -1,    -1,   138,   339,   334,   139,    -1,
      -1,   140,   341,   330,   141,    -1,    -1,   136,   343,   330,
     137,    -1,    -1,    11,   344,   330,   137,    -1,    -1,    12,
     345,   330,   137,    -1,    -1,   131,   347,   335,   132,    -1,
      -1,   348,   350,    -1,    -1,   349,   351,    -1,   351,    -1,
     130,    -1,   352,    -1,   354,    -1,   353,    -1,    72,    -1,
     325,    -1,   133,    -1,   152,    -1,   138,    -1,   139,    -1,
     135,    -1,   134,    -1,   326,    -1,   327,    -1,   294,    -1,
       6,    -1,    71,    -1,    73,    -1,   131,   348,   132,    -1,
     140,   348,   141,    -1,   355,   348,   137,    -1,   136,    -1,
      11,    -1,    12,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1288,  1288,  1290,  1289,  1300,  1301,  1302,  1303,  1304,
    1305,  1306,  1307,  1308,  1309,  1310,  1311,  1312,  1313,  1314,
    1315,  1316,  1317,  1318,  1319,  1320,  1328,  1335,  1335,  1337,
    1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,  1353,
    1354,  1355,  1358,  1358,  1360,  1360,  1362,  1363,  1363,  1365,
    1367,  1369,  1368,  1377,  1380,  1381,  1382,  1383,  1384,  1385,
    1386,  1387,  1388,  1389,  1390,  1391,  1392,  1393,  1394,  1395,
    1396,  1398,  1399,  1402,  1403,  1406,  1407,  1408,  1409,  1417,
    1418,  1419,  1430,  1430,  1431,  1431,  1433,  1434,  1435,  1438,
    1439,  1439,  1447,  1450,  1453,  1454,  1455,  1456,  1457,  1460,
    1461,  1468,  1491,  1492,  1493,  1496,  1497,  1497,  1507,  1508,
    1509,  1510,  1512,  1521,  1524,  1523,  1534,  1535,  1535,  1539,
    1541,  1539,  1543,  1545,  1543,  1547,  1549,  1547,  1560,  1561,
    1563,  1564,  1567,  1567,  1577,  1578,  1586,  1589,  1590,  1591,
    1594,  1595,  1596,  1597,  1600,  1601,  1604,  1605,  1608,  1609,
    1613,  1608,  1624,  1624,  1633,  1633,  1634,  1633,  1642,  1650,
    1651,  1652,  1653,  1656,  1656,  1659,  1662,  1670,  1671,  1675,
    1674,  1682,  1683,  1691,  1692,  1691,  1709,  1709,  1711,  1712,
    1714,  1715,  1718,  1724,  1725,  1725,  1728,  1729,  1730,  1730,
    1733,  1735,  1733,  1764,  1789,  1790,  1793,  1794,  1797,  1797,
    1805,  1806,  1807,  1810,  1861,  1862,  1864,  1865,  1865,  1868,
    1868,  1870,  1869,  1874,  1875,  1875,  1894,  1895,  1895,  1913,
    1914,  1916,  1920,  1922,  1925,  1926,  1927,  1929,  1930,  1930,
    1936,  1939,  1940,  1944,  1945,  1949,  1950,  1953,  1956,  1957,
    1960,  1960,  1963,  1963,  1965,  1966,  1969,  1970,  1970,  1980,
    1981,  1982,  1983,  1984,  1985,  1986,  1987,  1988,  1989,  1990,
    1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,  2000,
    2001,  2002,  2003,  2004,  2005,  2006,  2007,  2014,  2015,  2016,
    2017,  2018,  2019,  2020,  2028,  2031,  2032,  2033,  2034,  2035,
    2036,  2037,  2040,  2041,  2049,  2050,  2057,  2058,  2061,  2062,
    2063,  2066,  2067,  2069,  2071,  2071,  2073,  2074,  2075,  2076,
    2079,  2082,  2082,  2090,  2091,  2092,  2095,  2096,  2097,  2100,
    2102,  2104,  2106,  2108,  2108,  2112,  2115,  2118,  2119,  2122,
    2123,  2124,  2125,  2126,  2127,  2128,  2129,  2130,  2131,  2132,
    2133,  2134,  2135,  2136,  2137,  2138,  2139,  2140,  2141,  2142,
    2145,  2146,  2147,  2148,  2149,  2150,  2151,  2152,  2154,  2155,
    2157,  2158,  2160,  2161,  2163,  2164,  2166,  2167,  2169,  2170,
    2190,  2191,  2192,  2197,  2198,  2210,  2211,  2218,  2218,  2228,
    2229,  2229,  2228,  2238,  2238,  2248,  2248,  2257,  2257,  2257,
    2290,  2289,  2300,  2301,  2301,  2300,  2310,  2328,  2328,  2333,
    2333,  2338,  2338,  2343,  2343,  2348,  2348,  2353,  2353,  2358,
    2358,  2363,  2363,  2368,  2368,  2385,  2385,  2399,  2436,  2474,
    2527,  2527,  2534,  2535,  2536,  2537,  2538,  2539,  2540,  2541,
    2542,  2545,  2546,  2547,  2548,  2549,  2550,  2551,  2552,  2553,
    2554,  2555,  2556,  2557,  2558,  2559,  2560,  2561,  2562,  2563,
    2564,  2565,  2566,  2567,  2568,  2569,  2570,  2571,  2572,  2573,
    2574,  2575,  2576,  2577,  2578,  2579,  2582,  2583,  2584,  2585,
    2586,  2587,  2588,  2589,  2590,  2591,  2592,  2593,  2594,  2595,
    2596,  2597,  2598,  2599,  2600,  2601,  2602,  2603,  2606,  2607,
    2608,  2609,  2610,  2611,  2612,  2619,  2620,  2623,  2624,  2625,
    2626,  2657,  2657,  2658,  2659,  2660,  2661,  2663,  2664,  2666,
    2667,  2668,  2670,  2671,  2672,  2674,  2675,  2677,  2678,  2680,
    2681,  2684,  2685,  2688,  2689,  2690,  2694,  2693,  2707,  2707,
    2711,  2711,  2713,  2713,  2715,  2715,  2719,  2719,  2724,  2725,
    2727,  2728,  2731,  2732,  2735,  2735,  2735,  2736,  2736,  2736,
    2736,  2736,  2736,  2736,  2736,  2737,  2737,  2737,  2737,  2738,
    2738,  2741,  2744,  2747,  2750,  2750,  2750
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
  "OP_RSHIFT", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR",
  "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
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
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
      59,   123,   125,    58,    44,    61,    40,    41,    60,    62,
      91,    93,   126,    38,    42,    37,    47,    45,    43,    33,
     124,    94,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   153,   154,   155,   154,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   157,   159,   158,   158,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     160,   160,   162,   161,   163,   161,   161,   164,   161,   161,
     165,   166,   165,   165,   167,   167,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   167,   167,   167,   167,   167,
     167,   168,   168,   169,   169,   170,   170,   170,   170,   171,
     171,   171,   173,   172,   174,   172,   175,   175,   175,   176,
     177,   176,   178,   179,   180,   180,   180,   180,   180,   181,
     181,   182,   182,   182,   182,   183,   184,   183,   185,   185,
     185,   185,   185,   186,   187,   186,   188,   189,   188,   191,
     192,   190,   193,   194,   190,   195,   196,   190,   197,   197,
     198,   198,   200,   199,   201,   201,   202,   203,   203,   203,
     204,   204,   204,   204,   205,   205,   206,   206,   208,   209,
     210,   207,   212,   211,   214,   215,   216,   213,   217,   218,
     218,   218,   218,   220,   219,   221,   222,   223,   223,   225,
     224,   226,   226,   228,   229,   227,   231,   230,   232,   232,
     233,   233,   234,   235,   236,   235,   237,   237,   238,   237,
     240,   241,   239,   239,   242,   242,   243,   243,   245,   244,
     246,   246,   246,   247,   248,   248,   249,   250,   249,   252,
     251,   253,   251,   254,   255,   254,   256,   257,   256,   258,
     258,   258,   259,   259,   260,   260,   260,   261,   262,   261,
     261,   263,   263,   264,   264,   265,   265,   266,   267,   267,
     269,   268,   271,   270,   272,   272,   273,   274,   273,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   276,   276,   276,
     276,   276,   276,   276,   277,   278,   278,   278,   278,   278,
     278,   278,   279,   279,   280,   280,   281,   281,   282,   282,
     282,   283,   283,   283,   284,   283,   283,   283,   283,   283,
     285,   287,   286,   288,   288,   288,   289,   289,   289,   290,
     290,   290,   290,   291,   290,   292,   293,   294,   294,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     297,   297,   297,   298,   298,   299,   299,   301,   300,   302,
     303,   304,   300,   305,   300,   306,   300,   307,   308,   300,
     309,   300,   310,   311,   312,   300,   300,   313,   300,   314,
     300,   315,   300,   316,   300,   317,   300,   318,   300,   319,
     300,   320,   300,   321,   300,   322,   300,   300,   300,   300,
     323,   323,   324,   324,   324,   324,   324,   324,   324,   324,
     324,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   325,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   327,   327,
     327,   327,   327,   327,   327,   328,   328,   329,   329,   329,
     329,   329,   329,   329,   329,   329,   329,   330,   330,   331,
     331,   331,   332,   332,   332,   333,   333,   334,   334,   335,
     335,   336,   336,   337,   337,   337,   339,   338,   341,   340,
     343,   342,   344,   342,   345,   342,   347,   346,   348,   348,
     349,   349,   350,   350,   351,   351,   351,   351,   351,   351,
     351,   351,   351,   351,   351,   351,   351,   351,   351,   351,
     351,   352,   353,   354,   355,   355,   355
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
       1,     1,     1,     1,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     4,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     3,     3,     3,     1,     1,     1
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
     301,   328,   327,    23,     0,   538,   314,    44,   315,     0,
     307,    42,   306,   538,    47,   308,   333,   334,   335,   329,
     330,   331,   332,   336,   337,   348,   349,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,     0,    82,   309,
     206,     0,     0,     0,     0,   288,     0,   114,     0,     0,
       0,     0,     0,     0,     0,     0,   302,   303,   277,   279,
     278,   282,   283,   281,   280,   538,    27,   251,   249,   250,
     254,   255,   253,   252,     0,     0,   264,   263,   275,   276,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
       0,     0,     0,     0,   379,   383,   385,     0,     0,   392,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   258,   256,   257,   261,   262,   260,
     259,   370,   375,     0,   206,     0,   211,   372,   373,     0,
       0,     0,     0,     0,   290,   287,   209,     0,     0,     0,
       0,     0,   168,   538,    15,    20,    19,    16,   311,     0,
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
      22,    21,    18,   171,     0,     0,   517,   139,     0,   159,
     158,   169,     0,   198,   203,   197,   233,     0,     0,   216,
     239,   244,   145,   137,   172,     0,   176,   178,   322,   321,
     209,   558,   565,   566,   493,   489,   490,   488,   491,   492,
     494,   469,   468,   470,   482,   472,   474,   473,   475,   476,
     478,   477,   479,   481,   471,   483,   467,   466,   480,   441,
     442,   486,   485,   484,   487,   443,   444,   445,   446,   447,
     448,   449,   455,   456,   450,   451,   452,   453,   454,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   559,   547,
     560,   543,   538,    46,   549,   554,   553,   564,   551,   552,
     538,   437,   438,   432,   431,   433,   434,   435,   436,   439,
     440,   550,   557,   548,   555,   556,   539,   542,   544,   546,
     545,   538,     0,     0,     0,    49,     0,     0,    87,    89,
      86,   201,    34,    33,    35,     0,     0,     0,     3,   149,
       0,   116,     0,     0,     0,   102,   195,   103,   101,   106,
      29,     2,   109,   108,   441,   442,   428,   429,     0,   426,
     427,     0,     0,   430,     0,   377,     0,     0,     0,   387,
     390,     0,     0,   397,   401,   405,   409,   399,   403,   407,
     411,   413,   415,   417,   418,     0,   212,    37,    36,    38,
      14,   171,   167,     0,   155,   153,   165,   163,     0,   160,
     161,   162,   184,   200,     0,   217,   234,   241,     0,     0,
       0,   184,     0,   174,   208,     0,     0,     0,     0,     0,
       0,    72,    73,    75,    50,    50,    50,    85,    86,    90,
       0,    40,    39,    41,    26,   184,   115,   117,   235,   128,
     129,   235,   235,   184,     3,     0,     0,   422,   423,   111,
       0,     0,   380,   384,   386,     0,     0,   393,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   420,
     540,   532,   534,   503,   536,   501,   525,   524,   530,   526,
     312,   528,   502,   506,   500,   504,   505,   522,   523,   518,
     521,   497,   498,   499,     0,     0,   166,     0,   190,   510,
     511,   199,   509,   495,   227,   242,   324,     0,   180,     0,
     159,   561,   562,   563,    78,    76,    77,     0,    51,    51,
      51,    88,     0,    83,     0,   119,   220,   221,   219,   120,
     235,   238,   236,   123,   126,     0,    28,   424,   425,   112,
       0,     0,   388,     0,     0,   396,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   421,     0,     0,   507,
     507,   519,   507,   517,   507,   156,   164,   170,   193,   186,
     185,   187,     0,   496,   228,   218,   230,   247,   177,     0,
     179,   182,   175,    74,    79,    80,    81,    45,     0,     0,
      43,    48,    91,   150,   118,   130,   231,     0,   235,   213,
     130,   130,   224,   378,   381,     0,   391,   394,   398,   402,
     406,   410,   400,   404,   408,   412,     0,     0,   419,    92,
     541,     0,     0,     0,     0,     0,     0,   184,   188,   235,
     184,     0,     0,   180,     0,     0,    70,    54,   209,    52,
     209,    56,    55,     0,     0,   141,   142,    57,   171,     0,
       0,   302,     0,     0,    66,    53,   159,   132,   121,   131,
     214,   232,   124,   127,   225,     0,   107,     0,   540,     0,
       0,     0,   514,   513,   533,   512,   508,   535,   516,   537,
     515,   520,   531,   527,   529,     0,   190,   191,     0,   243,
     248,   181,     0,     0,     0,    62,    61,     0,     0,     0,
     302,    67,     0,     0,   209,     0,    64,   143,   140,   172,
      68,     0,   151,     0,   227,   226,   382,     0,   395,   414,
     416,   157,   189,   196,   224,   538,   540,    96,     0,     0,
      98,     0,     0,     0,     0,    93,    63,    59,    58,     0,
      65,     0,   133,   134,   215,   389,   192,   229,     0,     0,
      95,    94,    97,     0,     0,     0,    60,    69,   135,   540,
     100,     0,    99
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    88,    89,    90,   352,    91,    92,   313,
     309,   316,   718,   788,   839,   523,   621,   622,   789,    93,
     318,   157,   527,   528,   722,    94,   895,   896,   927,    95,
     347,   643,    96,    97,   330,   540,   725,   541,   542,   795,
     543,   800,   544,   801,   641,   858,   859,   913,   942,    98,
      99,   844,   100,   845,   102,   166,   635,   856,   278,   409,
     279,   408,   694,   827,   280,   410,   599,   695,   600,   601,
     264,   281,   602,   282,   846,   427,   710,   299,   611,   613,
     780,   708,   697,   698,   770,   886,   771,   772,   923,   343,
     414,   415,   604,   103,   283,   243,   124,   430,   244,   245,
     383,   729,   914,   284,   704,   730,   285,   866,   775,   830,
     797,   417,   731,   286,   419,   420,   421,   607,   777,   608,
     831,   832,   104,   105,   849,   107,   108,   899,   110,   111,
     112,   168,   113,   126,   406,   304,   128,   129,   425,   118,
     119,   120,   121,   122,   246,   247,   248,   123,   651,   359,
     741,   867,   360,   361,   655,   805,   656,   364,   744,   869,
     659,   663,   660,   664,   661,   665,   662,   666,   667,   668,
     757,   562,   684,   685,   686,   701,   702,   821,   875,   876,
     881,   593,   823,   688,   689,   690,   763,   691,   764,   692,
     762,   759,   760,   693,   761,   307,   758,   516,   517,   518,
     519,   520,   521
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -834
static const yytype_int16 yypact[] =
{
    -834,   116,  -834,  4311,   166,   180,   196,  -834,   214,   226,
     297,   309,  5067,  5364,  5116,  4259,  -834,  -834,    88,  -834,
    -834,  -834,   210,   128,  -834,    14,  -834,  5877,    52,  4882,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,   275,   285,   345,   381,   397,   435,   443,   470,   474,
     488,   492,   505,   515,   555,    85,   101,   104,   118,   121,
     137,   139,   170,   176,   201,   217,   218,   224,   227,   229,
     230,   231,   234,   243,   248,   263,  -834,   485,  -834,  -834,
    -834,  -834,   -41,   -41,  -834,  -834,  -834,  5667,    98,    98,
      98,    98,  -834,  -834,  -834,    67,  5982,  -834,   509,  4896,
    -834,   157,   237,  6087,     4,   203,   216,  5172,   332,  5413,
    -834,  -834,  -834,  -834,   -42,  -834,   332,   279,  -834,  5469,
    -834,   283,  -834,  -834,   289,  -834,     0,     9,    11,    15,
     153,   197,   220,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,   298,  -834,  -834,
    -834,  5413,  5413,  5413,   479,   310,  5772,   281,  5413,   314,
    5067,  5364,  5116,  4193,  4193,  5192,   332,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,    -1,    13,    28,
     127,   150,   151,   155,  5413,  5413,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
     316,  5221,  5413,  5519,  -834,  -834,  -834,  5519,  5519,  -834,
    5519,  5519,  5519,  5519,  5519,  5519,  5519,  5519,  5519,  5519,
    5519,  5519,  5519,  5519,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,   421,   319,  -834,  5192,  -834,   198,  -834,   326,
    5067,  5364,  5116,  4273,  -834,   444,   -41,    98,    98,    98,
      98,  5486,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  4273,
    4273,  4273,  -834,  5469,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,   334,  -834,   333,   806,   339,   337,   332,  5245,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,   348,  -834,  -834,
     337,   183,   332,  -834,  -834,  -834,  -834,  1088,  -834,   352,
    -834,   332,  -834,   352,  1238,  -834,   352,  5519,   360,    90,
     383,   386,   388,  5413,  5413,  5413,  -834,  5982,   395,  -834,
      63,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,   402,  -834,  5519,   412,   417,  -834,   -26,
    -834,  1388,   432,   434,   437,  -834,  5587,  5297,   438,  5519,
    5519,  5519,   446,   448,  5519,   450,   451,   452,   453,   458,
     459,   460,   461,   462,   468,   477,   440,   441,   478,  -834,
    -834,   480,  -834,  5192,  -834,  -834,  -834,   483,   490,   496,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,   497,  -834,
    -834,  -834,  -834,  -834,  5245,  1538,  -834,  -834,  5587,  -834,
      69,  -834,   105,  -834,  -834,  -834,  -834,   471,  5192,  -834,
    -834,  -834,  -834,  -834,   332,   499,  -834,   504,  -834,  -834,
     157,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,   934,   498,   513,  -834,   519,   508,   518,   495,
    5519,  -834,  -834,  -834,  -834,   525,   526,   538,   537,  -834,
     531,   539,  6123,    87,   651,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,   549,   550,  -834,  -834,   557,  -834,
    -834,   556,   566,  -834,  5587,  -834,   564,   562,   563,  -834,
    -834,   567,  5982,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  5519,  -834,  -834,  -834,  -834,
    -834,   568,  -834,  3638,  -834,    69,  -834,  -834,   683,  -834,
    -834,  -834,   569,  -834,  3938,  -834,  -834,   565,   570,    67,
     332,   569,  5413,  -834,  -834,  1688,  1838,  1988,  5413,  5413,
    5413,  -834,   573,  -834,  -834,  -834,  -834,  -834,  5519,  -834,
     576,  -834,  -834,  -834,  -834,   569,  -834,  -834,  4948,  -834,
    -834,  4948,  4948,   569,   577,   571,   572,  -834,  -834,  -834,
     581,  5982,  -834,  -834,  -834,  5982,  5982,  -834,   582,  5982,
    5982,  5982,  5982,  5982,  5982,  5982,  5982,  5982,  5982,   584,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,   586,    37,  -834,   583,    61,  -834,
    -834,  3938,  -834,  -834,   130,  -834,  -834,   587,   589,    62,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,   934,    44,    53,
      94,  -834,  3938,  -834,   591,    63,  -834,  -834,  -834,  -834,
     455,   339,  -834,  -834,  -834,   592,  -834,  -834,  -834,  -834,
     593,  5982,  -834,   594,  5982,  -834,   595,   596,   597,   598,
     599,   600,   603,   604,   609,   614,  -834,   612,  2288,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,   617,  5982,  -834,  -834,  -834,  -834,   618,  -834,  5413,
    -834,  -834,    69,  -834,  -834,  -834,  -834,  -834,  4439,   622,
    -834,  -834,  3938,  -834,  -834,   623,  -834,   625,  4948,  -834,
     623,   623,    27,  -834,  -834,   630,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,   751,   752,  -834,  -834,
    -834,  3038,  3188,  2888,  3338,  3788,  3488,   569,  -834,  4948,
     569,   626,  3938,   589,  4567,    62,  -834,  -834,   -41,  -834,
     -41,  -834,  -834,  4672,    98,  -834,  -834,  -834,   638,  4777,
    4896,   200,   639,  5350,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,    62,  -834,   634,  -834,   635,
     637,   640,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,   642,    61,  -834,   645,  -834,
    3938,  -834,  4962,  5364,  4962,  -834,  -834,   524,    98,  5486,
     183,  -834,   653,   654,   -41,    98,  -834,  -834,  -834,  -834,
    -834,  5587,    69,  4088,   130,  -834,  -834,  2438,  -834,  -834,
    -834,  -834,  -834,   333,    27,  -834,  -834,  -834,   146,   184,
    -834,   244,  5011,  5413,  5011,  -834,  -834,  -834,  -834,   657,
    -834,   659,  4088,  -834,  -834,  -834,  -834,  -834,  2138,  2588,
    -834,  -834,  -834,   301,   322,   390,  -834,  -834,  -834,  -834,
    -834,  2738,  -834
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -834,  -295,  -834,  -834,  -834,  -834,  -834,     2,   -15,  -834,
    -834,  -834,  -317,  -834,  -834,  -132,    74,  -834,  -834,   -10,
    -834,  -834,  -480,  -834,  -834,  -834,  -834,  -105,  -457,     6,
    -834,  -834,     7,    -8,  -834,    71,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -452,  -834,  -834,  -834,   700,
     701,  -656,   702,    60,   685,  -834,  -834,  -834,  -250,  -834,
    -834,  -834,  -834,  -834,  -260,  -387,  -834,  -834,  -834,  -834,
     -63,  -834,  -834,   -96,   -93,  -834,  -834,  -834,  -834,  -834,
     -33,    40,  -577,  -834,   -66,  -834,  -834,  -834,  -834,   647,
    -100,  -834,  -834,    36,  -212,   -77,  -108,  -834,   401,  -834,
    -834,  -595,  -834,  -140,  -834,  -834,  -834,   -91,   -89,  -834,
    -834,  -834,  -834,  -155,   103,  -663,  -834,  -834,  -834,  -834,
    -834,  -834,   165,   -13,    42,   728,  -834,    20,   -20,  -449,
     725,  -834,   727,    -2,  -834,    -3,    16,    24,  -834,   -99,
     -21,   100,    -9,  -834,   -83,  -834,   602,    55,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,  -834,
    -834,  -376,    17,   110,   129,  -682,  -542,  -636,  -529,    21,
    -834,    77,  -834,  -833,  -834,  -834,  -834,  -834,  -834,   158,
    -834,  -834,  -834,  -834,  -834,  -120,  -770,  -834,  -716,  -834,
    -834,  -665,  -834
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -316
static const yytype_int16 yytable[] =
{
     115,   114,   158,   130,   132,   135,   159,   175,   212,   127,
     131,   134,   173,   314,   164,   186,   249,   174,   302,   116,
     349,   297,   595,   109,   298,   176,   210,   117,   290,   423,
     302,   538,   594,   382,   707,   348,   265,   266,   267,   422,
     792,   776,   820,   177,   781,   106,   733,   734,   671,   672,
     630,   687,   319,   211,   864,   178,   179,   180,   724,   181,
     182,   183,   184,   101,   865,   351,   735,   768,   784,   785,
     786,  -277,  -277,   432,   433,   703,    30,   784,   785,   786,
     943,  -279,   256,  -278,  -122,  -279,   272,  -282,   305,  -204,
     345,   345,   306,   293,   160,   176,   596,   303,   917,  -125,
    -278,  -122,   241,   242,   176,   293,   597,   288,   639,   958,
     549,   176,   302,   177,  -240,   301,     2,   261,   784,   785,
     786,   117,   177,   658,   822,   640,   824,   311,   826,   177,
     273,  -277,   769,   289,  -314,   796,   381,  -277,  -277,   106,
    -279,   165,  -278,   405,   423,   416,  -282,  -279,   721,  -278,
     890,  -279,   167,  -282,   422,   293,   949,   260,   320,   321,
     322,   130,   132,   135,   176,   331,  -278,   333,   334,   335,
     901,   586,   773,   678,   302,   412,   787,   297,   898,   398,
     407,   524,   177,   185,   526,   790,   328,   905,   650,   961,
     302,   353,   354,   703,   399,   400,   401,   402,   497,  -282,
     915,   820,   418,   861,   598,   268,   742,   743,   327,   311,
     746,   747,   748,   749,   750,   751,   752,   753,   754,   755,
     531,   213,  -283,  -281,   306,  -283,   791,  -280,   262,   263,
     161,   162,   163,   820,   887,   603,   357,   214,  -277,   306,
     215,   130,   132,   135,   159,   820,    25,   387,   388,   389,
     885,   776,  -279,   888,   216,    30,   644,   217,   302,   288,
     130,   132,   135,   773,    16,  -282,   774,   293,  -278,  -281,
    -240,   301,    30,   218,   287,   219,   532,   925,   606,   926,
     428,   429,   300,   687,  -283,   404,  -282,   424,  -283,  -281,
     428,  -283,  -280,  -280,   310,   807,  -251,  -251,  -283,  -251,
     241,   242,  -251,   703,  -277,   302,   220,   272,   719,   720,
    -249,  -249,   221,  -249,   533,   925,  -249,   926,  -279,  -172,
     535,   536,   537,   782,   513,   176,  -250,  -250,  -281,  -250,
    -314,   513,  -250,   294,  -278,  -281,  -172,   222,   344,   344,
     350,   384,   242,   177,  -254,  -254,  -315,  -254,   862,   863,
    -254,  -280,  -282,   223,   224,   311,  -255,  -255,  -280,  -255,
     225,   773,  -255,   226,  -283,   227,   228,   229,   513,  -281,
     230,   687,   615,   563,   534,   925,   310,   926,   358,   231,
     616,  -280,   362,   363,   232,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   233,
     687,   617,   424,   428,    30,  -264,  -264,   512,  -264,   308,
     350,  -264,   609,   312,   512,  -263,  -263,   514,  -263,   315,
     329,  -263,   513,   610,   514,   563,   403,  -253,  -253,   317,
    -253,   631,   925,  -253,   926,  -281,   515,   930,   300,  -252,
    -252,   326,  -252,   515,   332,  -252,   355,  -280,   379,   380,
     350,   512,   632,   925,   403,   926,   386,   397,   336,   337,
     338,   514,   339,   340,   341,   342,   726,   727,   413,   912,
     411,   950,   951,  -171,   952,  -275,  -275,   930,  -275,  -240,
     515,  -275,   529,   732,   426,   522,   732,   732,   234,   235,
     236,   530,   237,   238,   239,   240,   950,   951,   952,   323,
     324,   325,   178,   179,   180,   512,   181,   182,   183,   184,
     546,  -276,  -276,   532,  -276,   514,   533,  -276,   534,   623,
     633,   925,   310,   926,   566,   567,   568,  -265,  -265,   571,
    -265,   539,   545,  -265,   515,   941,   642,    17,   254,    19,
      20,    21,   547,   255,   932,   933,   934,   548,   350,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   551,   552,  -266,  -266,   553,  -266,   591,
     176,  -266,   565,  -267,  -267,   732,  -267,   583,   584,  -267,
     569,   563,   570,   350,   572,   573,   574,   575,   177,   706,
     908,   728,   576,   577,   578,   579,   580,    87,   241,   242,
    -268,  -268,   581,  -268,  -269,  -269,  -268,  -269,   605,   709,
    -269,   582,   585,   587,   306,   714,   715,   716,  -270,  -270,
     588,  -270,  -271,  -271,  -270,  -271,   589,   590,  -271,   624,
     629,   740,   513,   513,   513,  -272,  -272,   612,  -272,   908,
     627,  -272,   638,   732,   625,  -273,  -273,   798,  -273,   176,
     626,  -273,   628,   176,   176,   631,   632,   176,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   177,   633,   634,
     636,   177,   177,   637,   732,   177,   177,   177,   177,   177,
     177,   177,   177,   177,   177,  -274,  -274,    25,  -274,   645,
     646,  -274,   297,   683,   647,   529,   649,   648,   652,   653,
     654,   657,   696,   670,   683,  -245,  -183,   717,   723,   736,
     705,   739,   737,   738,   623,   512,   512,   512,   756,   745,
     767,   804,   765,   779,   778,   514,   514,   514,   793,   802,
     803,   806,   808,   809,   810,   811,   812,   813,   297,   176,
     814,   815,   176,   816,   515,   515,   515,   297,   817,   818,
     669,   828,   829,   297,   302,   855,   907,   177,   857,  -246,
     177,   902,   860,   903,   868,   870,   871,   889,  -313,   910,
     176,   916,   918,   838,   919,   513,   709,   920,   840,   921,
     843,   906,   924,   937,   938,   852,   851,   956,   177,   957,
     837,   783,   935,   529,   841,   842,   794,   257,   258,   259,
     891,   683,   296,   350,   116,   948,   350,   350,   850,   336,
     337,   338,   853,   339,   340,   341,   342,   275,   276,   833,
     922,   346,   683,   946,   847,   944,   897,   939,   904,   272,
     293,   614,   900,   947,   799,   936,   274,   609,   292,   291,
     825,   900,   940,   854,   880,     0,     0,   900,   909,   385,
     177,   311,     0,   766,     0,     0,     0,     0,   512,   177,
       0,     0,     0,     0,     0,   177,     0,     0,   514,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   293,
       0,     0,     0,   130,   132,   135,   609,   515,     0,   928,
     929,   931,   683,     0,     0,   350,     0,   909,     0,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,   683,   683,   683,   683,   683,   683,     0,   563,   953,
     954,   955,   683,     0,   513,     0,     0,   187,   188,   189,
       0,   190,   191,   192,   193,     0,     0,     0,    87,   241,
     242,     0,     0,   848,     0,     0,     0,     0,   618,   619,
     620,     0,     0,   350,     0,   513,   513,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   513,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     683,     0,     0,     0,   350,     0,     0,     0,     0,   403,
       0,     0,     0,     0,     0,     0,    30,     0,   403,     0,
       0,     0,     0,   683,   403,   287,     0,   512,   310,     0,
       0,     0,     0,     0,     0,     0,     0,   514,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   683,     0,     0,     0,   515,     0,   512,   512,
       0,     0,     0,     0,     0,     0,     0,     0,   514,   514,
       0,   512,     0,     0,   403,     0,     0,     0,     0,     0,
       0,   514,     0,     0,     0,     0,    87,   515,   515,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     515,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     525,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     550,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     592,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     711,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
       0,   494,   495,   496,   497,     0,   498,   499,   500,   712,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
       0,   494,   495,   496,   497,   713,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   491,   492,
     959,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   819,   492,
       0,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   492,
       0,   494,   495,   496,   497,   945,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   960,   492,
       0,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,   431,   393,   394,   395,   396,   432,
     433,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,   488,
     489,   490,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   962,   492,
       0,   494,   495,   496,   497,     0,   498,   499,   500,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     511,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   878,   674,
     879,   675,   872,   873,   678,     0,   699,   700,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,   872,   873,   678,   874,   699,   700,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,   872,   873,   678,   877,   699,   700,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,   872,   873,   678,   882,   699,   700,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,   872,   873,   678,     0,   699,   700,   681,   884,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,   676,   677,   678,     0,   679,   680,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,   676,   677,   678,     0,   679,   883,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,     0,     0,   678,     0,   699,   700,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,   390,   391,   392,     0,   393,   394,   395,   396,   671,
     672,   434,   435,   436,   437,   438,   439,   440,   441,   442,
     443,   444,   445,   446,   447,   448,     0,   449,   450,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,     0,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   487,     0,
     673,     0,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   336,   337,   338,     0,
     339,   340,   341,   342,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   674,
       0,   675,     0,     0,   678,     0,   679,     0,   681,     0,
     501,   502,   503,   504,   505,   506,   507,   508,   509,   510,
     682,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   136,   137,   138,     0,   139,   140,   141,   142,
       0,     0,     0,     0,     0,     0,   390,   391,   392,     0,
     393,   394,   395,   396,     0,     0,     0,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     6,     7,     8,     9,
      10,    11,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    12,    13,    14,    15,    87,   241,   242,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,     0,    26,
      27,    28,    29,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156,     0,     0,    30,     0,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
       0,    86,     4,     5,     6,     7,     8,     9,    10,    11,
       0,     0,     0,    87,     0,     0,     0,     0,     0,    12,
      13,    14,    15,     0,     0,     0,    16,    17,    18,    19,
      20,    21,   834,   255,    24,    25,     0,    26,    27,     0,
      29,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    30,     0,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,   835,   836,
       4,     5,     6,     0,     8,     9,    10,    11,     0,     0,
       0,    87,     0,     0,     0,     0,     0,   892,   893,   894,
     253,     0,     0,     0,    16,    17,   254,    19,    20,    21,
       0,   255,    24,    25,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     4,     5,     6,     0,     8,
       9,    10,    11,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   250,   251,   252,   253,     0,     0,     0,    16,
      17,   254,    19,    20,    21,     0,   255,    24,     0,    87,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       4,     5,     6,     0,     8,     9,    10,    11,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,   270,   271,
     253,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    87,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,   187,   188,   189,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,     0,   187,
     188,   189,     0,   190,   191,   192,   193,   275,   276,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    87,
     194,     0,   195,     0,     0,     0,     0,     0,     0,     0,
       0,   277,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   336,   337,   338,    30,   339,   340,   341,   342,   726,
     727,     0,     0,     0,     0,     4,     5,     6,     0,     8,
       9,    10,    11,     0,     0,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   187,   188,   189,     0,   190,   191,
     192,   193,     0,     0,    87,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,     0,     0,    87,     0,
       0,     0,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       4,     5,     6,     0,     8,     9,    10,    11,     0,     0,
       0,     0,     0,    30,   728,     0,     0,     0,     0,     0,
      87,     0,     0,   925,     0,   926,     0,     0,     0,     0,
       0,     0,     0,     0,    87,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     4,
       5,     6,     0,     8,     9,    10,    11,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,     0,   925,     0,   926,     0,     0,     0,     0,     0,
       0,     0,     0,    87,     0,     0,     0,     0,     0,     0,
       0,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,   187,   188,   189,     0,   190,
     191,   192,   193,     0,     0,     0,     0,     0,    30,     0,
       0,     0,     0,     0,     0,   336,   337,   338,   125,   339,
     340,   341,   342,   275,   276,     0,     0,    24,   295,    87,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   187,   188,   189,     0,   190,   191,
     192,   193,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,   187,   188,
     189,     0,   190,   191,   192,   193,   356,   295,    87,     0,
       0,     0,     0,     0,     0,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     277,   295,     0,     0,     0,     0,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     187,   188,   189,     0,   190,   191,   192,   193,     0,     0,
       0,     0,     0,     0,    87,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,     0,
       0,     0,   564,   295,    87,     0,     0,     0,     0,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   187,   188,   189,     0,   190,   191,   192,
     193,     0,     0,    87,     0,     0,     0,     4,     5,     6,
       0,     8,     9,    10,    11,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   911,   295,    87,     0,     0,
       0,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   187,   188,   189,     0,
     190,   191,   192,   193,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    30,     0,     0,    87,
       0,     0,     0,     0,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,   187,   188,   189,     0,   190,   191,   192,   193,
       0,     0,     0,     0,     0,    30,     0,     0,     0,   187,
     188,   189,    87,   190,   191,   192,   193,     0,     0,     0,
       0,     0,     0,     0,     0,   295,    87,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   277,   336,   337,   338,     0,   339,   340,   341,   342,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    87,     0,     0,     0,     0,
       0,     0,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,     0,     0,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    87,     0,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,     0,    87,   554,
     555,     0,     0,     0,     0,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   487,     0,     0,
       0,    87,     0,     0,     0,     0,     0,     0,     0,     0,
     136,   137,   138,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,   251,   252,
     253,     0,     0,     0,    16,    17,   254,    19,    20,    21,
       0,   255,    24,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   556,   557,   558,     0,   559,   560,   561,     0,   501,
     502,   503,   504,   505,   506,   507,   508,   509,   510,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   136,   137,   138,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   270,   271,   253,     0,     0,     0,    16,
      17,   254,    19,    20,    21,     0,   255,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     136,   137,   138,   169,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   170,   171,   172,
      15,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   136,   137,   138,     0,   139,
     140,   141,   142,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   269,   270,   271,   253,     0,     0,     0,    16,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    30,     0,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     136,   137,   138,     0,   139,   140,   141,   142,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   269,   270,   271,
     253,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    26,   390,   391,   392,     0,
     393,   394,   395,   396,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    30,
       0,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,     0,     0,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   143,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   154,   155,
     156
};

static const yytype_int16 yycheck[] =
{
       3,     3,    15,    12,    13,    14,    15,    27,    29,    12,
      13,    14,    27,   133,    22,    28,    93,    27,   117,     3,
     175,   117,   409,     3,   117,    27,    29,     3,   111,   289,
     129,   326,   408,   245,   611,   175,    99,   100,   101,   289,
     722,   704,   758,    27,   709,     3,   641,   642,    11,    12,
     530,   593,   160,    29,    27,     3,     4,     5,   635,     7,
       8,     9,    10,     3,    37,   185,   643,     6,    24,    25,
      26,    72,    72,    11,    12,   604,    72,    24,    25,    26,
     913,    72,    97,    72,    21,    72,   106,    72,   130,   130,
     173,   174,   134,   114,     6,    97,    27,   118,   868,    36,
      72,    38,   143,   144,   106,   126,    37,   109,    21,   942,
     136,   113,   211,    97,   140,   117,     0,    97,    24,    25,
      26,    97,   106,   572,   760,    38,   762,   129,   764,   113,
     106,   131,    71,   109,   130,   730,   244,   138,   138,    97,
     131,    13,   131,   263,   404,   285,   131,   138,   628,   138,
     832,   138,   138,   138,   404,   176,   926,    97,   161,   162,
     163,   170,   171,   172,   166,   168,   138,   170,   171,   172,
     835,   383,   701,   136,   273,   283,   132,   273,   834,   256,
     273,   313,   166,   131,   316,   132,   166,   843,   564,   959,
     289,   194,   195,   722,   257,   258,   259,   260,   136,    72,
     865,   917,   285,   798,   135,   138,   655,   656,   166,   211,
     659,   660,   661,   662,   663,   664,   665,   666,   667,   668,
     130,   136,    72,    72,   134,    72,   132,    72,   130,   131,
      20,    21,    22,   949,   829,   130,   212,   136,    72,   134,
     136,   250,   251,   252,   253,   961,    36,   250,   251,   252,
     827,   914,    72,   830,   136,    72,   551,   136,   357,   261,
     269,   270,   271,   792,    27,   138,   136,   288,    72,    72,
     140,   273,    72,   136,   109,   136,   130,   131,   418,   133,
     301,   302,   117,   825,   131,   261,    72,   289,   138,   138,
     311,   138,    72,   138,   129,   744,   130,   131,    72,   133,
     143,   144,   136,   832,   138,   404,   136,   327,   625,   626,
     130,   131,   136,   133,   130,   131,   136,   133,   138,   136,
     323,   324,   325,   710,   307,   327,   130,   131,   131,   133,
     130,   314,   136,   130,   138,   138,   136,   136,   173,   174,
     175,   143,   144,   327,   130,   131,   130,   133,   800,   801,
     136,   131,   138,   136,   136,   357,   130,   131,   138,   133,
     136,   890,   136,   136,   138,   136,   136,   136,   351,    72,
     136,   913,   492,   356,   130,   131,   211,   133,   213,   136,
     500,    72,   217,   218,   136,   220,   221,   222,   223,   224,
     225,   226,   227,   228,   229,   230,   231,   232,   233,   136,
     942,   521,   404,   424,    72,   130,   131,   307,   133,   130,
     245,   136,   425,   130,   314,   130,   131,   307,   133,   130,
     139,   136,   405,   425,   314,   408,   261,   130,   131,   131,
     133,   130,   131,   136,   133,   138,   307,   894,   273,   130,
     131,   131,   133,   314,   130,   136,   130,   138,    27,   130,
     285,   351,   130,   131,   289,   133,   130,    13,     3,     4,
       5,   351,     7,     8,     9,    10,    11,    12,   135,   856,
     136,   928,   929,   136,   931,   130,   131,   934,   133,   140,
     351,   136,   317,   638,   136,   133,   641,   642,     3,     4,
       5,   131,     7,     8,     9,    10,   953,   954,   955,    20,
      21,    22,     3,     4,     5,   405,     7,     8,     9,    10,
     345,   130,   131,   130,   133,   405,   130,   136,   130,   522,
     130,   131,   357,   133,   359,   360,   361,   130,   131,   364,
     133,   136,   130,   136,   405,   911,   544,    28,    29,    30,
      31,    32,   130,    34,    20,    21,    22,   130,   383,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   131,   130,   130,   131,   130,   133,   404,
     572,   136,   134,   130,   131,   730,   133,   137,   137,   136,
     134,   564,   134,   418,   134,   134,   134,   134,   572,   610,
     850,   136,   134,   134,   134,   134,   134,   142,   143,   144,
     130,   131,   134,   133,   130,   131,   136,   133,   137,   612,
     136,   134,   134,   130,   134,   618,   619,   620,   130,   131,
     130,   133,   130,   131,   136,   133,   130,   130,   136,   131,
     135,   651,   615,   616,   617,   130,   131,   133,   133,   899,
     132,   136,   542,   798,   131,   130,   131,   730,   133,   651,
     131,   136,   134,   655,   656,   130,   130,   659,   660,   661,
     662,   663,   664,   665,   666,   667,   668,   651,   130,   132,
     139,   655,   656,   134,   829,   659,   660,   661,   662,   663,
     664,   665,   666,   667,   668,   130,   131,    36,   133,   140,
     140,   136,   788,   593,   137,   530,   130,   141,   134,   137,
     137,   134,    19,   135,   604,   140,   137,   134,   132,   132,
     140,   130,   141,   141,   717,   615,   616,   617,   134,   137,
     137,   741,   136,   134,   137,   615,   616,   617,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   834,   741,
     137,   137,   744,   134,   615,   616,   617,   843,   134,   137,
     585,   134,   772,   849,   853,   133,   849,   741,   135,   141,
     744,   838,   137,   840,   134,    14,    14,   141,   130,   130,
     772,   137,   137,   788,   137,   758,   779,   137,   788,   137,
     788,   844,   137,   130,   130,   788,   788,   130,   772,   130,
     788,   717,   897,   628,   788,   788,   725,    97,    97,    97,
     833,   701,   117,   638,   788,   925,   641,   642,   788,     3,
       4,     5,   788,     7,     8,     9,    10,    11,    12,   779,
     886,   174,   722,   923,   788,   914,   834,   904,   843,   849,
     851,   430,   834,   924,   731,   898,   108,   850,   113,   112,
     763,   843,   905,   788,   823,    -1,    -1,   849,   850,   247,
     834,   853,    -1,   695,    -1,    -1,    -1,    -1,   758,   843,
      -1,    -1,    -1,    -1,    -1,   849,    -1,    -1,   758,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   900,
      -1,    -1,    -1,   892,   893,   894,   899,   758,    -1,   892,
     893,   894,   792,    -1,    -1,   730,    -1,   899,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   821,   822,   823,   824,   825,   826,    -1,   911,   932,
     933,   934,   832,    -1,   917,    -1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,   142,   143,
     144,    -1,    -1,   788,    -1,    -1,    -1,    -1,    24,    25,
      26,    -1,    -1,   798,    -1,   948,   949,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   961,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     890,    -1,    -1,    -1,   829,    -1,    -1,    -1,    -1,   834,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,   843,    -1,
      -1,    -1,    -1,   913,   849,   850,    -1,   917,   853,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   917,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   942,    -1,    -1,    -1,   917,    -1,   948,   949,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   948,   949,
      -1,   961,    -1,    -1,   899,    -1,    -1,    -1,    -1,    -1,
      -1,   961,    -1,    -1,    -1,    -1,   142,   948,   949,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     961,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,   134,   135,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,    -1,    -1,   136,    -1,   138,   139,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,     3,     4,     5,    -1,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    -1,    29,    30,    -1,
      32,    -1,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    -1,
      72,    -1,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
      -1,   133,    -1,    -1,   136,    -1,   138,    -1,   140,    -1,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    20,    21,    22,    23,   142,   143,   144,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      39,    40,    41,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    -1,    -1,    72,    -1,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
      -1,   130,     3,     4,     5,     6,     7,     8,     9,    10,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    20,
      21,    22,    23,    -1,    -1,    -1,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    -1,    38,    39,    -1,
      41,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    72,    -1,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   130,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    36,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,    35,    -1,   142,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,    -1,     7,     8,     9,    10,    11,    12,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   142,
      38,    -1,    40,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,    72,     7,     8,     9,    10,    11,
      12,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,   142,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    72,   136,    -1,    -1,    -1,    -1,    -1,
     142,    -1,    -1,   131,    -1,   133,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,     3,
       4,     5,    -1,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    -1,   131,    -1,   133,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    72,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,   131,     7,
       8,     9,    10,    11,    12,    -1,    -1,    35,    36,   142,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,     3,     4,     5,    -1,     7,     8,
       9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,     3,     4,
       5,    -1,     7,     8,     9,    10,    35,    36,   142,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
      35,    36,    -1,    -1,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,   142,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,    -1,
      -1,    -1,    35,    36,   142,    -1,    -1,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,     3,     4,     5,    -1,     7,     8,     9,
      10,    -1,    -1,   142,    -1,    -1,    -1,     3,     4,     5,
      -1,     7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,   142,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,   142,
      -1,    -1,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    72,    -1,    -1,    -1,     3,
       4,     5,   142,     7,     8,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    36,   142,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,    35,     3,     4,     5,    -1,     7,     8,     9,    10,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   142,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   142,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,    -1,   142,    42,
      43,    -1,    -1,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    -1,    -1,
      -1,   142,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    28,    29,    30,    31,    32,
      -1,    34,    35,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   134,   135,   136,    -1,   138,   139,   140,    -1,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      28,    29,    30,    31,    32,    -1,    34,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,     6,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    27,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,     3,     4,     5,    -1,     7,
       8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    20,    21,    22,    23,    -1,    -1,    -1,    27,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    72,    -1,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
       3,     4,     5,    -1,     7,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    38,     3,     4,     5,    -1,
       7,     8,     9,    10,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72,
      -1,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,    -1,    -1,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   154,     0,   155,     3,     4,     5,     6,     7,     8,
       9,    10,    20,    21,    22,    23,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    38,    39,    40,    41,
      72,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   130,   142,   156,   157,
     158,   160,   161,   172,   178,   182,   185,   186,   202,   203,
     205,   206,   207,   246,   275,   276,   277,   278,   279,   280,
     281,   282,   283,   285,   286,   288,   289,   290,   292,   293,
     294,   295,   296,   300,   249,   131,   286,   288,   289,   290,
     295,   288,   295,   131,   288,   295,     3,     4,     5,     7,
       8,     9,    10,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   174,   276,   295,
       6,    20,    21,    22,   186,    13,   208,   138,   284,     6,
      20,    21,    22,   161,   172,   281,   286,   289,     3,     4,
       5,     7,     8,     9,    10,   131,   276,     3,     4,     5,
       7,     8,     9,    10,    38,    40,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     288,   290,   293,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,   136,   136,   136,   136,   136,   136,
     136,   136,   136,   136,     3,     4,     5,     7,     8,     9,
      10,   143,   144,   248,   251,   252,   297,   298,   299,   248,
      20,    21,    22,    23,    29,    34,   161,   202,   203,   205,
     206,   280,   130,   131,   223,   223,   223,   223,   138,    20,
      21,    22,   281,   290,   278,    11,    12,    35,   211,   213,
     217,   224,   226,   247,   256,   259,   266,   275,   286,   290,
     297,   285,   283,   293,   130,    36,   207,   226,   227,   230,
     275,   286,   292,   293,   288,   130,   134,   348,   130,   163,
     275,   286,   130,   162,   348,   130,   164,   131,   173,   249,
     288,   288,   288,    20,    21,    22,   131,   277,   280,   139,
     187,   288,   130,   288,   288,   288,     3,     4,     5,     7,
       8,     9,    10,   242,   275,   297,   242,   183,   256,   266,
     275,   348,   159,   288,   288,   130,    35,   290,   275,   302,
     305,   306,   275,   275,   310,   275,   275,   275,   275,   275,
     275,   275,   275,   275,   275,   275,   275,   275,   275,    27,
     130,   249,   247,   253,   143,   299,   130,   288,   288,   288,
       3,     4,     5,     7,     8,     9,    10,    13,   248,   223,
     223,   223,   223,   275,   290,   348,   287,   227,   214,   212,
     218,   136,   249,   135,   243,   244,   256,   264,   297,   267,
     268,   269,   211,   217,   286,   291,   136,   228,   293,   293,
     250,     6,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    29,
      30,    32,    34,    35,    36,    37,    38,    39,    40,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,   130,   131,   132,   133,   134,   135,   136,   138,   139,
     140,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   294,   325,   326,   327,   350,   351,   352,   353,
     354,   355,   133,   168,   168,   132,   168,   175,   176,   275,
     131,   130,   130,   130,   130,   288,   288,   288,   154,   136,
     188,   190,   191,   193,   195,   130,   275,   130,   130,   136,
     132,   131,   130,   130,    42,    43,   134,   135,   136,   138,
     139,   140,   324,   325,    35,   134,   275,   275,   275,   134,
     134,   275,   134,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   137,   137,   134,   247,   130,   130,   130,
     130,   275,   132,   334,   324,   218,    27,    37,   135,   219,
     221,   222,   225,   130,   245,   137,   256,   270,   272,   276,
     286,   231,   133,   232,   251,   348,   348,   348,    24,    25,
      26,   169,   170,   288,   131,   131,   131,   132,   134,   135,
     175,   130,   130,   130,   132,   209,   139,   134,   294,    21,
      38,   197,   186,   184,   154,   140,   140,   137,   141,   130,
     324,   301,   134,   137,   137,   307,   309,   134,   282,   313,
     315,   317,   319,   314,   316,   318,   320,   321,   322,   275,
     135,    11,    12,    72,   131,   133,   134,   135,   136,   138,
     139,   140,   152,   294,   325,   326,   327,   329,   336,   337,
     338,   340,   342,   346,   215,   220,    19,   235,   236,   138,
     139,   328,   329,   331,   257,   140,   293,   235,   234,   288,
     229,   132,   141,   137,   288,   288,   288,   134,   165,   165,
     165,   175,   177,   132,   235,   189,    11,    12,   136,   254,
     258,   265,   266,   254,   254,   235,   132,   141,   141,   130,
     281,   303,   282,   282,   311,   137,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   134,   323,   349,   344,
     345,   347,   343,   339,   341,   136,   342,   137,     6,    71,
     237,   239,   240,   331,   136,   261,   268,   271,   137,   134,
     233,   354,   218,   169,    24,    25,    26,   132,   166,   171,
     132,   132,   328,   137,   188,   192,   254,   263,   297,   267,
     194,   196,   137,   137,   281,   308,   137,   282,   137,   137,
     137,   137,   137,   137,   137,   137,   134,   134,   137,   130,
     351,   330,   330,   335,   330,   334,   330,   216,   134,   281,
     262,   273,   274,   234,    33,   129,   130,   160,   161,   167,
     172,   182,   185,   186,   204,   206,   227,   246,   275,   277,
     280,   286,   288,   290,   300,   133,   210,   135,   198,   199,
     137,   254,   198,   198,    27,    37,   260,   304,   134,   312,
      14,    14,   134,   135,   137,   331,   332,   137,   130,   132,
     332,   333,   137,   139,   141,   235,   238,   254,   235,   141,
     328,   233,    20,    21,    22,   179,   180,   186,   204,   280,
     286,   354,   248,   248,   161,   204,   223,   227,   217,   286,
     130,    35,   218,   200,   255,   354,   137,   349,   137,   137,
     137,   137,   237,   241,   137,   131,   133,   181,   288,   288,
     181,   288,    20,    21,    22,   180,   223,   130,   130,   248,
     223,   324,   201,   336,   261,   137,   243,   260,   348,   349,
     181,   181,   181,   288,   288,   288,   130,   130,   336,   132,
     130,   349,   130
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
#line 1290 "vtkParse.y"
    {
      startSig();
      clearStorageType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 15:
#line 1310 "vtkParse.y"
    { output_function(); }
    break;

  case 16:
#line 1311 "vtkParse.y"
    { output_function(); }
    break;

  case 17:
#line 1312 "vtkParse.y"
    { output_function(); }
    break;

  case 18:
#line 1313 "vtkParse.y"
    { output_function(); }
    break;

  case 19:
#line 1314 "vtkParse.y"
    { reject_function(); }
    break;

  case 20:
#line 1315 "vtkParse.y"
    { reject_function(); }
    break;

  case 21:
#line 1316 "vtkParse.y"
    { reject_function(); }
    break;

  case 22:
#line 1317 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:
#line 1335 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 28:
#line 1336 "vtkParse.y"
    { popNamespace(); }
    break;

  case 42:
#line 1358 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 43:
#line 1359 "vtkParse.y"
    { end_class(); }
    break;

  case 44:
#line 1360 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 45:
#line 1361 "vtkParse.y"
    { end_class(); }
    break;

  case 47:
#line 1363 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 2); }
    break;

  case 48:
#line 1364 "vtkParse.y"
    { end_class(); }
    break;

  case 51:
#line 1369 "vtkParse.y"
    {
      startSig();
      clearStorageType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 63:
#line 1389 "vtkParse.y"
    { output_friend_function(); }
    break;

  case 64:
#line 1390 "vtkParse.y"
    { output_function(); }
    break;

  case 65:
#line 1391 "vtkParse.y"
    { output_function(); }
    break;

  case 78:
#line 1410 "vtkParse.y"
    {
      vtkParse_AddStringToArray(&currentClass->SuperClasses,
                                &currentClass->NumberOfSuperClasses,
                                vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 79:
#line 1417 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 80:
#line 1418 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 81:
#line 1419 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 82:
#line 1430 "vtkParse.y"
    { start_enum((yyvsp[(2) - (2)].str)); }
    break;

  case 83:
#line 1430 "vtkParse.y"
    { end_enum(); }
    break;

  case 84:
#line 1431 "vtkParse.y"
    { start_enum(NULL); }
    break;

  case 85:
#line 1431 "vtkParse.y"
    { end_enum(); }
    break;

  case 89:
#line 1438 "vtkParse.y"
    { add_enum((yyvsp[(1) - (1)].str), NULL); }
    break;

  case 90:
#line 1439 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 91:
#line 1440 "vtkParse.y"
    { chopSig(); add_enum((yyvsp[(1) - (4)].str), copySig()); }
    break;

  case 101:
#line 1469 "vtkParse.y"
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
#line 1497 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 107:
#line 1499 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; postSig(")"); popFunction(); }
    break;

  case 108:
#line 1507 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 109:
#line 1508 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 0); }
    break;

  case 110:
#line 1509 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 111:
#line 1511 "vtkParse.y"
    { add_using(vtkstrcat3((yyvsp[(2) - (5)].str), "operator", (yyvsp[(4) - (5)].str)), 0); }
    break;

  case 112:
#line 1513 "vtkParse.y"
    { add_using(vtkstrcat4("::", (yyvsp[(3) - (6)].str), "operator", (yyvsp[(5) - (6)].str)), 0); }
    break;

  case 113:
#line 1522 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 114:
#line 1524 "vtkParse.y"
    { postSig("template<"); clearTypeId(); startTemplate(); }
    break;

  case 115:
#line 1526 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
    }
    break;

  case 117:
#line 1535 "vtkParse.y"
    { chopSig(); postSig(", "); clearTypeId(); }
    break;

  case 119:
#line 1539 "vtkParse.y"
    { markSig(); }
    break;

  case 120:
#line 1541 "vtkParse.y"
    { add_template_arg((yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 122:
#line 1543 "vtkParse.y"
    { markSig(); }
    break;

  case 123:
#line 1545 "vtkParse.y"
    { add_template_arg(0, (yyvsp[(3) - (3)].integer), copySig()); }
    break;

  case 125:
#line 1547 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 126:
#line 1549 "vtkParse.y"
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
#line 1560 "vtkParse.y"
    { postSig("class "); }
    break;

  case 129:
#line 1561 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 132:
#line 1567 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 133:
#line 1569 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfArguments-1;
      TemplateArg *arg = currentTemplate->Arguments[i];
      chopSig();
      arg->Value = vtkstrdup(copySig());
    }
    break;

  case 148:
#line 1608 "vtkParse.y"
    { postSig("operator "); }
    break;

  case 149:
#line 1609 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 150:
#line 1613 "vtkParse.y"
    { postSig(")"); }
    break;

  case 151:
#line 1614 "vtkParse.y"
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
#line 1624 "vtkParse.y"
    { postSig(")"); }
    break;

  case 153:
#line 1625 "vtkParse.y"
    {
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 154:
#line 1633 "vtkParse.y"
    { postSig("operator"); }
    break;

  case 155:
#line 1633 "vtkParse.y"
    { postSig((yyvsp[(3) - (3)].str)); }
    break;

  case 156:
#line 1634 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 157:
#line 1639 "vtkParse.y"
    { (yyval.str) = (yyvsp[(3) - (8)].str); }
    break;

  case 158:
#line 1643 "vtkParse.y"
    {
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (2)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 163:
#line 1656 "vtkParse.y"
    { postSig(" throw "); }
    break;

  case 164:
#line 1656 "vtkParse.y"
    { chopSig(); }
    break;

  case 165:
#line 1659 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 166:
#line 1663 "vtkParse.y"
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
    break;

  case 169:
#line 1675 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 170:
#line 1679 "vtkParse.y"
    { postSig(")"); }
    break;

  case 173:
#line 1691 "vtkParse.y"
    { closeSig(); }
    break;

  case 174:
#line 1692 "vtkParse.y"
    { openSig(); }
    break;

  case 175:
#line 1693 "vtkParse.y"
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
#line 1709 "vtkParse.y"
    { postSig("("); }
    break;

  case 177:
#line 1709 "vtkParse.y"
    { postSig(")"); }
    break;

  case 184:
#line 1725 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 186:
#line 1728 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 187:
#line 1729 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 188:
#line 1730 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 190:
#line 1733 "vtkParse.y"
    { markSig(); }
    break;

  case 191:
#line 1735 "vtkParse.y"
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
#line 1757 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments-1;
      if (getVarValue())
        {
        currentFunction->Arguments[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 193:
#line 1765 "vtkParse.y"
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
#line 1793 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 198:
#line 1797 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 199:
#line 1798 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 203:
#line 1811 "vtkParse.y"
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
#line 1865 "vtkParse.y"
    { postSig(", "); }
    break;

  case 209:
#line 1868 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 211:
#line 1870 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 213:
#line 1874 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 214:
#line 1875 "vtkParse.y"
    { postSig(")"); }
    break;

  case 215:
#line 1877 "vtkParse.y"
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
#line 1894 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 217:
#line 1895 "vtkParse.y"
    { postSig(")"); }
    break;

  case 218:
#line 1897 "vtkParse.y"
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
#line 1913 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 220:
#line 1914 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 221:
#line 1916 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 222:
#line 1920 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 223:
#line 1922 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 225:
#line 1926 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 227:
#line 1929 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 228:
#line 1930 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 229:
#line 1931 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      postSig(")");
      popFunction();
    }
    break;

  case 230:
#line 1936 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 232:
#line 1941 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 234:
#line 1946 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 235:
#line 1949 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 237:
#line 1953 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 238:
#line 1956 "vtkParse.y"
    { clearArray(); }
    break;

  case 240:
#line 1960 "vtkParse.y"
    { clearArray(); }
    break;

  case 242:
#line 1963 "vtkParse.y"
    { postSig("["); }
    break;

  case 243:
#line 1963 "vtkParse.y"
    { postSig("]"); }
    break;

  case 246:
#line 1969 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 247:
#line 1970 "vtkParse.y"
    { markSig(); }
    break;

  case 248:
#line 1970 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 249:
#line 1980 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 250:
#line 1981 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 251:
#line 1982 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 252:
#line 1983 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 253:
#line 1984 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 254:
#line 1985 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 255:
#line 1986 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 256:
#line 1987 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 257:
#line 1988 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 258:
#line 1989 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 259:
#line 1990 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 260:
#line 1991 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 261:
#line 1992 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 262:
#line 1993 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~",(yyvsp[(2) - (2)].str)); postSig((yyval.str)); }
    break;

  case 263:
#line 1994 "vtkParse.y"
    { (yyval.str) = "size_t"; postSig((yyval.str)); }
    break;

  case 264:
#line 1995 "vtkParse.y"
    { (yyval.str) = "ssize_t"; postSig((yyval.str)); }
    break;

  case 265:
#line 1996 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; postSig((yyval.str)); }
    break;

  case 266:
#line 1997 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; postSig((yyval.str)); }
    break;

  case 267:
#line 1998 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; postSig((yyval.str)); }
    break;

  case 268:
#line 1999 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; postSig((yyval.str)); }
    break;

  case 269:
#line 2000 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; postSig((yyval.str)); }
    break;

  case 270:
#line 2001 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; postSig((yyval.str)); }
    break;

  case 271:
#line 2002 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; postSig((yyval.str)); }
    break;

  case 272:
#line 2003 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; postSig((yyval.str)); }
    break;

  case 273:
#line 2004 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; postSig((yyval.str)); }
    break;

  case 274:
#line 2005 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; postSig((yyval.str)); }
    break;

  case 275:
#line 2006 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; postSig((yyval.str)); }
    break;

  case 276:
#line 2007 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; postSig((yyval.str)); }
    break;

  case 284:
#line 2028 "vtkParse.y"
    { setStorageType((yyvsp[(1) - (1)].integer)); }
    break;

  case 285:
#line 2031 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 286:
#line 2032 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 287:
#line 2033 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 288:
#line 2034 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 289:
#line 2035 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 290:
#line 2036 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 291:
#line 2037 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 293:
#line 2041 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 294:
#line 2049 "vtkParse.y"
    { setStorageType((yyval.integer)); }
    break;

  case 295:
#line 2051 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));
    }
    break;

  case 297:
#line 2058 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 299:
#line 2062 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 300:
#line 2063 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 302:
#line 2068 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 303:
#line 2070 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 304:
#line 2071 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 305:
#line 2072 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 306:
#line 2073 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 307:
#line 2074 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 308:
#line 2075 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 309:
#line 2076 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 310:
#line 2079 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 311:
#line 2082 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 312:
#line 2084 "vtkParse.y"
    {
      chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();
    }
    break;

  case 316:
#line 2095 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 317:
#line 2096 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 318:
#line 2097 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 319:
#line 2101 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 320:
#line 2103 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 321:
#line 2105 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 322:
#line 2107 "vtkParse.y"
    { (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str)); }
    break;

  case 323:
#line 2108 "vtkParse.y"
    { postSig("template "); }
    break;

  case 324:
#line 2109 "vtkParse.y"
    { (yyval.str) = vtkstrcat4((yyvsp[(1) - (5)].str), "template ", (yyvsp[(4) - (5)].str), (yyvsp[(5) - (5)].str)); }
    break;

  case 325:
#line 2112 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 326:
#line 2115 "vtkParse.y"
    { (yyval.str) = "::"; postSig((yyval.str)); }
    break;

  case 329:
#line 2122 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 330:
#line 2123 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 331:
#line 2124 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 332:
#line 2125 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 333:
#line 2126 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 334:
#line 2127 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 335:
#line 2128 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 336:
#line 2129 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 337:
#line 2130 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 338:
#line 2131 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 339:
#line 2132 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 340:
#line 2133 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 341:
#line 2134 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 342:
#line 2135 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 343:
#line 2136 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 344:
#line 2137 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 345:
#line 2138 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 346:
#line 2139 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 347:
#line 2140 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 348:
#line 2141 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 349:
#line 2142 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 350:
#line 2145 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 351:
#line 2146 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 352:
#line 2147 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 353:
#line 2148 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 354:
#line 2149 "vtkParse.y"
    { typeSig("long double"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 355:
#line 2150 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 356:
#line 2151 "vtkParse.y"
    { typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 357:
#line 2153 "vtkParse.y"
    { typeSig("unsigned char"); (yyval.integer) = VTK_PARSE_UNSIGNED_CHAR; }
    break;

  case 358:
#line 2154 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 359:
#line 2156 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 360:
#line 2157 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 361:
#line 2159 "vtkParse.y"
    { typeSig("unsigned short"); (yyval.integer) = VTK_PARSE_UNSIGNED_SHORT; }
    break;

  case 362:
#line 2160 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 363:
#line 2162 "vtkParse.y"
    { typeSig("unsigned long"); (yyval.integer) = VTK_PARSE_UNSIGNED_LONG; }
    break;

  case 364:
#line 2163 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG; }
    break;

  case 365:
#line 2165 "vtkParse.y"
    {typeSig("unsigned long long");(yyval.integer)=VTK_PARSE_UNSIGNED_LONG_LONG; }
    break;

  case 366:
#line 2166 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 367:
#line 2168 "vtkParse.y"
    { typeSig("unsigned __int64"); (yyval.integer) = VTK_PARSE_UNSIGNED___INT64; }
    break;

  case 368:
#line 2169 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 369:
#line 2170 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT;}
    break;

  case 370:
#line 2190 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 371:
#line 2191 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 374:
#line 2199 "vtkParse.y"
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
#line 2210 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 376:
#line 2211 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 377:
#line 2218 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 378:
#line 2219 "vtkParse.y"
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
#line 2228 "vtkParse.y"
    {postSig("Get");}
    break;

  case 380:
#line 2229 "vtkParse.y"
    {markSig();}
    break;

  case 381:
#line 2229 "vtkParse.y"
    {swapSig();}
    break;

  case 382:
#line 2230 "vtkParse.y"
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
#line 2238 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 384:
#line 2239 "vtkParse.y"
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
#line 2248 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 386:
#line 2249 "vtkParse.y"
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
#line 2257 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 388:
#line 2257 "vtkParse.y"
    {closeSig();}
    break;

  case 389:
#line 2259 "vtkParse.y"
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
#line 2290 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 391:
#line 2291 "vtkParse.y"
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
#line 2300 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 393:
#line 2301 "vtkParse.y"
    {markSig();}
    break;

  case 394:
#line 2301 "vtkParse.y"
    {swapSig();}
    break;

  case 395:
#line 2302 "vtkParse.y"
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
#line 2311 "vtkParse.y"
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
#line 2328 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 398:
#line 2329 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 399:
#line 2333 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 400:
#line 2334 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 401:
#line 2338 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 402:
#line 2339 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 403:
#line 2343 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 404:
#line 2344 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 405:
#line 2348 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 406:
#line 2349 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 407:
#line 2353 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 408:
#line 2354 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 409:
#line 2358 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 410:
#line 2359 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 411:
#line 2363 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 412:
#line 2364 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 413:
#line 2368 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 414:
#line 2370 "vtkParse.y"
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
#line 2385 "vtkParse.y"
    {startSig();}
    break;

  case 416:
#line 2387 "vtkParse.y"
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
#line 2400 "vtkParse.y"
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
#line 2437 "vtkParse.y"
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
#line 2475 "vtkParse.y"
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
#line 2534 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 423:
#line 2535 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 424:
#line 2536 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 425:
#line 2537 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 426:
#line 2538 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 427:
#line 2539 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 428:
#line 2540 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 429:
#line 2541 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 431:
#line 2545 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 432:
#line 2546 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 433:
#line 2547 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 434:
#line 2548 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 435:
#line 2549 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 436:
#line 2550 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 437:
#line 2551 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 438:
#line 2552 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 439:
#line 2553 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 440:
#line 2554 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 441:
#line 2555 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 442:
#line 2556 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 443:
#line 2557 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 444:
#line 2558 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 445:
#line 2559 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 446:
#line 2560 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 447:
#line 2561 "vtkParse.y"
    { (yyval.str) = ".*"; }
    break;

  case 448:
#line 2562 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 449:
#line 2563 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 450:
#line 2564 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 451:
#line 2565 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 452:
#line 2566 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 453:
#line 2567 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 454:
#line 2568 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 455:
#line 2569 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 456:
#line 2570 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 457:
#line 2571 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 458:
#line 2572 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 459:
#line 2573 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 460:
#line 2574 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 461:
#line 2575 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 462:
#line 2576 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 463:
#line 2577 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 464:
#line 2578 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 465:
#line 2579 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 466:
#line 2582 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 467:
#line 2583 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 468:
#line 2584 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 469:
#line 2585 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 470:
#line 2586 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 471:
#line 2587 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 472:
#line 2588 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 473:
#line 2589 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 474:
#line 2590 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 475:
#line 2591 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 476:
#line 2592 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 477:
#line 2593 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 478:
#line 2594 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 479:
#line 2595 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 480:
#line 2596 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 481:
#line 2597 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 482:
#line 2598 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 483:
#line 2599 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 484:
#line 2600 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 485:
#line 2601 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 486:
#line 2602 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 487:
#line 2603 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 500:
#line 2627 "vtkParse.y"
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

  case 501:
#line 2657 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 502:
#line 2657 "vtkParse.y"
    { postSig("."); }
    break;

  case 503:
#line 2658 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 504:
#line 2659 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 505:
#line 2660 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 510:
#line 2667 "vtkParse.y"
    { postSig("< "); }
    break;

  case 511:
#line 2668 "vtkParse.y"
    { postSig("> "); }
    break;

  case 513:
#line 2671 "vtkParse.y"
    { postSig("= "); }
    break;

  case 514:
#line 2672 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 516:
#line 2675 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 524:
#line 2689 "vtkParse.y"
    { postSig("= "); }
    break;

  case 525:
#line 2690 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 526:
#line 2694 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 527:
#line 2700 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 528:
#line 2707 "vtkParse.y"
    { postSig("["); }
    break;

  case 529:
#line 2708 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 530:
#line 2711 "vtkParse.y"
    { postSig("("); }
    break;

  case 531:
#line 2712 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 532:
#line 2713 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 533:
#line 2714 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 534:
#line 2715 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 535:
#line 2716 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 536:
#line 2719 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 537:
#line 2719 "vtkParse.y"
    { postSig("} "); }
    break;


/* Line 1267 of yacc.c.  */
#line 7040 "vtkParse.tab.c"
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


#line 2752 "vtkParse.y"

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
  vtkParsePreprocess_AddMacro(&preprocessor, "VTK_USE_64BIT_IDS", NULL);
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
