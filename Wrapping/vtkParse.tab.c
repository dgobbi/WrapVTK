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
     STRUCT = 258,
     CLASS = 259,
     PUBLIC = 260,
     PRIVATE = 261,
     PROTECTED = 262,
     VIRTUAL = 263,
     ID = 264,
     STRING_LITERAL = 265,
     INT_LITERAL = 266,
     HEX_LITERAL = 267,
     OCT_LITERAL = 268,
     FLOAT_LITERAL = 269,
     CHAR_LITERAL = 270,
     ZERO = 271,
     FLOAT = 272,
     DOUBLE = 273,
     LONG_DOUBLE = 274,
     INT = 275,
     UNSIGNED_INT = 276,
     SHORT = 277,
     UNSIGNED_SHORT = 278,
     LONG = 279,
     UNSIGNED_LONG = 280,
     LONG_LONG = 281,
     UNSIGNED_LONG_LONG = 282,
     INT64__ = 283,
     UNSIGNED_INT64__ = 284,
     CHAR = 285,
     SIGNED_CHAR = 286,
     UNSIGNED_CHAR = 287,
     VOID = 288,
     BOOL = 289,
     SSIZE_T = 290,
     SIZE_T = 291,
     OSTREAM = 292,
     ISTREAM = 293,
     ENUM = 294,
     UNION = 295,
     OTHER = 296,
     CONST = 297,
     OPERATOR = 298,
     UNSIGNED = 299,
     SIGNED = 300,
     FRIEND = 301,
     INLINE = 302,
     MUTABLE = 303,
     TEMPLATE = 304,
     THROW = 305,
     TYPENAME = 306,
     TYPEDEF = 307,
     NAMESPACE = 308,
     USING = 309,
     VTK_ID = 310,
     STATIC = 311,
     EXTERN = 312,
     VAR_FUNCTION = 313,
     NEW = 314,
     DELETE = 315,
     EXPLICIT = 316,
     STATIC_CAST = 317,
     DYNAMIC_CAST = 318,
     CONST_CAST = 319,
     REINTERPRET_CAST = 320,
     OP_LSHIFT_EQ = 321,
     OP_RSHIFT_EQ = 322,
     OP_LSHIFT = 323,
     OP_RSHIFT = 324,
     OP_ARROW_POINTER = 325,
     OP_ARROW = 326,
     OP_INCR = 327,
     OP_DECR = 328,
     OP_PLUS_EQ = 329,
     OP_MINUS_EQ = 330,
     OP_TIMES_EQ = 331,
     OP_DIVIDE_EQ = 332,
     OP_REMAINDER_EQ = 333,
     OP_AND_EQ = 334,
     OP_OR_EQ = 335,
     OP_XOR_EQ = 336,
     OP_LOGIC_AND_EQ = 337,
     OP_LOGIC_OR_EQ = 338,
     OP_LOGIC_AND = 339,
     OP_LOGIC_OR = 340,
     OP_LOGIC_EQ = 341,
     OP_LOGIC_NEQ = 342,
     OP_LOGIC_LEQ = 343,
     OP_LOGIC_GEQ = 344,
     ELLIPSIS = 345,
     DOUBLE_COLON = 346,
     LP = 347,
     LA = 348,
     QT_ID = 349,
     StdString = 350,
     UnicodeString = 351,
     IdType = 352,
     FloatType = 353,
     TypeInt8 = 354,
     TypeUInt8 = 355,
     TypeInt16 = 356,
     TypeUInt16 = 357,
     TypeInt32 = 358,
     TypeUInt32 = 359,
     TypeInt64 = 360,
     TypeUInt64 = 361,
     TypeFloat32 = 362,
     TypeFloat64 = 363,
     SetMacro = 364,
     GetMacro = 365,
     SetStringMacro = 366,
     GetStringMacro = 367,
     SetClampMacro = 368,
     SetObjectMacro = 369,
     GetObjectMacro = 370,
     BooleanMacro = 371,
     SetVector2Macro = 372,
     SetVector3Macro = 373,
     SetVector4Macro = 374,
     SetVector6Macro = 375,
     GetVector2Macro = 376,
     GetVector3Macro = 377,
     GetVector4Macro = 378,
     GetVector6Macro = 379,
     SetVectorMacro = 380,
     GetVectorMacro = 381,
     ViewportCoordinateMacro = 382,
     WorldCoordinateMacro = 383,
     TypeMacro = 384,
     VTK_BYTE_SWAP_DECL = 385
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
#include "vtkParseInternal.h"
#include "vtkParsePreprocess.h"
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
void output_function(void);
void reject_function(void);
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count);
void add_argument(FunctionInfo *func, unsigned int type,
                  const char *classname, unsigned long count);
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
 * then, vtkstrfree() can be called.
 */

size_t stringChunkPos = 0;
unsigned long numberOfChunks = 0;
char **stringArray = NULL;

/* allocate a string of n+1 bytes */
static char *vtkstralloc(size_t n)
{
  size_t chunk_size = 8176;
  size_t nextChunkPos;
  char *cp;

  // align next start position on an 8-byte boundary
  nextChunkPos = (((stringChunkPos + n + 8) | 7 ) - 7);

  if (numberOfChunks == 0 || nextChunkPos > chunk_size)
    {
    if (n + 1 > chunk_size)
      {
      chunk_size = n + 1;
      }
    cp = (char *)malloc(chunk_size);
    vtkParse_AddStringToArray((const char ***)&stringArray, &numberOfChunks,
                              cp);
    stringChunkPos = 0;
    nextChunkPos = (((n + 8) | 7) - 7);
    }

  cp = &stringArray[numberOfChunks-1][stringChunkPos];
  cp[0] = '\0';

  stringChunkPos = nextChunkPos;

  return cp;
}

/* free all allocated strings */
void vtkstrfree()
{
  unsigned long i;

  for (i = 0; i < numberOfChunks; i++)
    {
    free(stringArray[i]);
    }
  if (stringArray)
    {
    free(stringArray);
    }

  stringArray = NULL;
  numberOfChunks = 0;
}

/* duplicate the first n bytes of a string and terminate */
static const char *vtkstrndup(const char *in, size_t n)
{
  char *res = NULL;

  res = vtkstralloc(n);
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
  cp = vtkstralloc(m);
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

static const char *vtkstrcat6(const char *str1, const char *str2,
                              const char *str3, const char *str4,
                              const char *str5, const char *str6)
{
  const char *cp[6];

  cp[0] = str1;
  cp[1] = str2;
  cp[2] = str3;
  cp[3] = str4;
  cp[4] = str5;
  cp[5] = str6;
  return vtkstrncat(6, cp);
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
    sigAllocatedLength = 80 + n;
    signature = vtkstralloc(sigAllocatedLength);
    signature[0] = '\0';
    }
  else if (sigLength + n > sigAllocatedLength)
    {
    sigAllocatedLength += sigLength + n;
    ccp = signature;
    signature = vtkstralloc(sigAllocatedLength);
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
  size_t n;

  n = strlen(arg);

  if (!signature)
    {
    checkSigSize(n);
    strncpy(signature, arg, n);
    signature[n] = '\0';
    sigLength = n;
    }
  else if (!sigClosed && n > 0)
    {
    checkSigSize(n);
    memmove(&signature[n], signature, sigLength);
    strncpy(signature, arg, n);
    sigLength += n;
    signature[sigLength] = '\0';
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  size_t n;

  n = strlen(arg);

  if (!signature)
    {
    checkSigSize(n);
    strncpy(signature, arg, n);
    signature[n] = '\0';
    sigLength = n;
    }
  else if (!sigClosed)
    {
    checkSigSize(n);
    strncpy(&signature[sigLength], arg, n);
    sigLength += n;
    signature[sigLength] = '\0';
    }
}

/* prepend a scope:: to the ID at the end of the signature */
void preScopeSig(const char *arg)
{
  size_t n;

  n = strlen(arg);

  if (!signature)
    {
    checkSigSize(n);
    strncpy(signature, arg, n);
    signature[n] = '\0';
    sigLength = n;
    }
  else if (!sigClosed)
    {
    checkSigSize(n+2);
    prepend_scope(signature, arg);
    sigLength = strlen(signature);
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
#line 1196 "vtkParse.y"
{
  const char   *str;
  unsigned int  integer;
}
/* Line 193 of yacc.c.  */
#line 1536 "vtkParse.tab.c"
        YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 1549 "vtkParse.tab.c"

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
#define YYLAST   6849

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  205
/* YYNRULES -- Number of rules.  */
#define YYNRULES  574
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1004

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   385

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   150,     2,     2,     2,   146,   144,     2,
     132,   133,   145,   149,   138,   148,   153,   147,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   137,   131,
     140,   139,   141,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   142,     2,   143,   152,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   135,   151,   136,   134,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    11,    15,    17,    19,
      21,    23,    27,    32,    34,    37,    41,    44,    47,    50,
      54,    56,    59,    67,    78,    80,    86,    87,    94,    99,
     103,   107,   111,   116,   121,   126,   131,   136,   141,   147,
     153,   159,   160,   168,   169,   177,   182,   183,   191,   196,
     197,   198,   202,   206,   208,   210,   212,   216,   220,   225,
     227,   230,   233,   236,   240,   244,   247,   251,   255,   258,
     260,   262,   263,   266,   268,   272,   274,   277,   280,   283,
     285,   287,   289,   290,   297,   298,   304,   305,   307,   311,
     313,   314,   319,   322,   326,   330,   333,   337,   340,   346,
     350,   355,   360,   365,   369,   371,   372,   379,   384,   389,
     393,   400,   408,   412,   413,   419,   421,   422,   427,   428,
     429,   435,   436,   437,   443,   444,   445,   451,   453,   455,
     456,   458,   459,   463,   466,   470,   474,   478,   484,   490,
     495,   500,   507,   514,   517,   521,   523,   525,   528,   531,
     534,   538,   542,   544,   549,   553,   556,   560,   564,   566,
     569,   570,   571,   572,   582,   583,   587,   588,   589,   590,
     599,   600,   604,   605,   606,   611,   612,   616,   619,   623,
     625,   626,   632,   633,   639,   640,   641,   650,   651,   655,
     656,   662,   663,   669,   670,   674,   675,   679,   682,   683,
     687,   688,   689,   697,   698,   699,   702,   704,   706,   707,
     712,   713,   714,   720,   722,   724,   727,   728,   730,   731,
     735,   740,   745,   749,   752,   753,   756,   757,   758,   763,
     764,   767,   768,   772,   775,   776,   782,   785,   786,   792,
     794,   796,   798,   800,   802,   803,   805,   808,   809,   810,
     816,   818,   820,   823,   825,   828,   829,   831,   833,   834,
     836,   837,   840,   841,   847,   848,   850,   851,   852,   855,
     857,   859,   861,   863,   865,   867,   869,   871,   873,   875,
     877,   879,   881,   883,   885,   887,   889,   891,   893,   895,
     897,   899,   901,   903,   905,   907,   909,   911,   913,   916,
     918,   920,   922,   925,   927,   929,   931,   933,   936,   938,
     941,   943,   946,   949,   951,   953,   955,   956,   960,   963,
     966,   969,   972,   974,   975,   981,   983,   985,   987,   991,
     995,  1000,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1017,
    1019,  1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,
    1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,
    1079,  1081,  1083,  1085,  1087,  1089,  1091,  1094,  1096,  1098,
    1101,  1103,  1106,  1107,  1115,  1116,  1117,  1118,  1128,  1129,
    1135,  1136,  1142,  1143,  1144,  1155,  1156,  1164,  1165,  1166,
    1167,  1177,  1184,  1185,  1193,  1194,  1202,  1203,  1211,  1212,
    1220,  1221,  1229,  1230,  1238,  1239,  1247,  1248,  1256,  1257,
    1267,  1268,  1278,  1283,  1288,  1296,  1297,  1299,  1302,  1305,
    1309,  1313,  1315,  1317,  1319,  1321,  1323,  1325,  1327,  1329,
    1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,
    1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,
    1371,  1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,
    1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,
    1411,  1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,
    1431,  1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,
    1451,  1453,  1455,  1458,  1460,  1463,  1465,  1467,  1469,  1471,
    1473,  1475,  1477,  1479,  1481,  1483,  1484,  1487,  1489,  1491,
    1493,  1495,  1497,  1499,  1501,  1503,  1504,  1507,  1508,  1511,
    1513,  1515,  1517,  1519,  1521,  1522,  1527,  1528,  1533,  1534,
    1539,  1540,  1545,  1546,  1551,  1552,  1557,  1558,  1561,  1562,
    1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,  1581,  1583,
    1585,  1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,  1603,
    1607,  1611,  1615,  1617,  1619
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,    -1,    -1,   155,   156,   157,    -1,   253,
      -1,   173,   255,   131,    -1,   185,    -1,   159,    -1,   158,
      -1,   182,    -1,   162,   255,   131,    -1,   186,   162,   255,
     131,    -1,   161,    -1,   207,   223,    -1,   186,   205,   223,
      -1,   206,   223,    -1,   201,   223,    -1,   202,   223,    -1,
     186,   201,   223,    -1,   302,    -1,   282,   131,    -1,   186,
     294,   132,   351,   133,   234,   223,    -1,   186,   292,    91,
     134,   283,   132,   351,   133,   234,   223,    -1,   131,    -1,
      57,    10,   135,   155,   136,    -1,    -1,    53,   283,   160,
     135,   155,   136,    -1,    53,   135,   351,   136,    -1,     4,
     294,   131,    -1,     3,   294,   131,    -1,    40,   294,   131,
      -1,    46,     4,   294,   131,    -1,    46,     3,   294,   131,
      -1,    46,    40,   294,   131,    -1,   186,     4,   294,   131,
      -1,   186,     3,   294,   131,    -1,   186,    40,   294,   131,
      -1,    46,   186,     4,   294,   131,    -1,    46,   186,     3,
     294,   131,    -1,    46,   186,    40,   294,   131,    -1,    -1,
       4,   294,   163,   169,   135,   166,   136,    -1,    -1,     3,
     294,   164,   169,   135,   166,   136,    -1,     3,   135,   351,
     136,    -1,    -1,    40,   294,   165,   169,   135,   166,   136,
      -1,    40,   135,   351,   136,    -1,    -1,    -1,   166,   167,
     168,    -1,   166,   172,   137,    -1,   253,    -1,   185,    -1,
     182,    -1,   173,   255,   131,    -1,   162,   255,   131,    -1,
     186,   162,   255,   131,    -1,   161,    -1,    46,   180,    -1,
      46,   179,    -1,   207,   223,    -1,    46,   207,   223,    -1,
     186,   207,   223,    -1,   204,   223,    -1,    46,   204,   223,
      -1,   186,   204,   223,    -1,   130,   357,    -1,   302,    -1,
     131,    -1,    -1,   137,   170,    -1,   171,    -1,   171,   138,
     170,    -1,   294,    -1,     6,   294,    -1,     7,   294,    -1,
       5,   294,    -1,     5,    -1,     6,    -1,     7,    -1,    -1,
      39,   283,   174,   135,   176,   136,    -1,    -1,    39,   175,
     135,   176,   136,    -1,    -1,   177,    -1,   177,   138,   176,
      -1,   282,    -1,    -1,   282,   139,   178,   331,    -1,   186,
     180,    -1,     4,   294,   181,    -1,     3,   294,   181,    -1,
       3,   181,    -1,    40,   294,   181,    -1,    40,   181,    -1,
     135,   351,   136,   352,   131,    -1,   137,   352,   131,    -1,
      52,   287,   183,   131,    -1,    52,   162,   249,   131,    -1,
      52,   173,   249,   131,    -1,    52,    58,   131,    -1,   263,
      -1,    -1,   273,   132,   184,   242,   133,   267,    -1,    54,
      53,   294,   131,    -1,    54,    51,   294,   131,    -1,    54,
     294,   131,    -1,    54,   283,    91,    43,   326,   131,    -1,
      54,    91,   283,    91,    43,   326,   131,    -1,    49,   140,
     141,    -1,    -1,    49,   140,   187,   188,   141,    -1,   190,
      -1,    -1,   190,   138,   189,   188,    -1,    -1,    -1,   191,
     296,   261,   192,   198,    -1,    -1,    -1,   193,   197,   261,
     194,   198,    -1,    -1,    -1,   195,   186,   261,   196,   198,
      -1,     4,    -1,    51,    -1,    -1,   199,    -1,    -1,   139,
     200,   330,    -1,   284,   218,    -1,   284,   203,   218,    -1,
     283,    91,   237,    -1,   283,    91,   229,    -1,   283,    91,
     283,    91,   237,    -1,   283,    91,   283,    91,   229,    -1,
     286,   283,    91,   237,    -1,   286,   283,    91,   229,    -1,
     286,   283,    91,   283,    91,   237,    -1,   286,   283,    91,
     283,    91,   229,    -1,   283,    91,    -1,   203,   283,    91,
      -1,   237,    -1,   229,    -1,   286,   237,    -1,   286,   229,
      -1,   284,   218,    -1,   283,    91,   208,    -1,   292,    91,
     208,    -1,   208,    -1,   284,   292,    91,   212,    -1,   284,
     203,   212,    -1,   284,   212,    -1,   283,    91,   208,    -1,
     284,   203,   212,    -1,   208,    -1,   284,   212,    -1,    -1,
      -1,    -1,    43,   209,   284,   132,   210,   242,   133,   211,
     220,    -1,    -1,   214,   213,   220,    -1,    -1,    -1,    -1,
      43,   215,   326,   216,   132,   217,   242,   133,    -1,    -1,
     224,   219,   220,    -1,    -1,    -1,    50,   357,   221,   220,
      -1,    -1,    42,   222,   220,    -1,   139,    16,    -1,   135,
     351,   136,    -1,   131,    -1,    -1,   282,   132,   225,   242,
     133,    -1,    -1,   292,   132,   226,   242,   133,    -1,    -1,
      -1,   292,    91,   227,   282,   132,   228,   242,   133,    -1,
      -1,   231,   230,   234,    -1,    -1,   282,   132,   232,   242,
     133,    -1,    -1,   292,   132,   233,   242,   133,    -1,    -1,
     137,   236,   235,    -1,    -1,   138,   236,   235,    -1,   294,
     357,    -1,    -1,   239,   238,   220,    -1,    -1,    -1,   134,
     240,   282,   132,   241,   242,   133,    -1,    -1,    -1,   243,
     244,    -1,    90,    -1,   246,    -1,    -1,   246,   138,   245,
     244,    -1,    -1,    -1,   247,   287,   261,   248,   250,    -1,
      58,    -1,   282,    -1,   299,   282,    -1,    -1,   251,    -1,
      -1,   139,   252,   331,    -1,   284,   254,   256,   131,    -1,
      56,    58,   256,   131,    -1,    58,   256,   131,    -1,   263,
     250,    -1,    -1,   258,   256,    -1,    -1,    -1,   256,   138,
     257,   258,    -1,    -1,   259,   254,    -1,    -1,   299,   260,
     254,    -1,   272,   274,    -1,    -1,   265,   270,   133,   262,
     268,    -1,   273,   274,    -1,    -1,   266,   271,   133,   264,
     268,    -1,   132,    -1,    92,    -1,    93,    -1,    92,    -1,
      93,    -1,    -1,    42,    -1,    50,   357,    -1,    -1,    -1,
     132,   269,   242,   133,   267,    -1,   275,    -1,   261,    -1,
     299,   261,    -1,   263,    -1,   299,   263,    -1,    -1,   273,
      -1,   282,    -1,    -1,   275,    -1,    -1,   276,   277,    -1,
      -1,   279,   142,   278,   280,   143,    -1,    -1,   277,    -1,
      -1,    -1,   281,   331,    -1,    55,    -1,    94,    -1,     9,
      -1,    38,    -1,    37,    -1,    95,    -1,    96,    -1,    36,
      -1,    35,    -1,    99,    -1,   100,    -1,   101,    -1,   102,
      -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,   107,
      -1,   108,    -1,    97,    -1,    98,    -1,     9,    -1,    94,
      -1,    55,    -1,    38,    -1,    37,    -1,    95,    -1,    96,
      -1,   287,    -1,   286,   287,    -1,    48,    -1,    47,    -1,
      57,    -1,    57,    10,    -1,    61,    -1,    56,    -1,     8,
      -1,   285,    -1,   286,   285,    -1,   288,    -1,   288,   299,
      -1,   289,    -1,   291,   289,    -1,   289,   291,    -1,   296,
      -1,   292,    -1,   295,    -1,    -1,    51,   290,   294,    -1,
       4,   297,    -1,     3,   297,    -1,    40,   297,    -1,    39,
     297,    -1,    42,    -1,    -1,   283,   140,   293,   337,   141,
      -1,   282,    -1,   292,    -1,   295,    -1,   283,    91,   294,
      -1,   292,    91,   294,    -1,    49,   292,    91,   294,    -1,
      91,   294,    -1,   298,    -1,   297,    -1,    95,    -1,    96,
      -1,    37,    -1,    38,    -1,     9,    -1,    55,    -1,    94,
      -1,    35,    -1,    36,    -1,    99,    -1,   100,    -1,   101,
      -1,   102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,
      -1,   107,    -1,   108,    -1,    97,    -1,    98,    -1,    33,
      -1,    34,    -1,    17,    -1,    18,    -1,    19,    -1,    30,
      -1,    31,    -1,    32,    -1,    20,    -1,    21,    -1,    22,
      -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,
      -1,    28,    -1,    29,    -1,    45,    -1,    44,    -1,   144,
      -1,   300,   144,    -1,   300,    -1,   301,    -1,   300,   301,
      -1,   145,    -1,   145,    42,    -1,    -1,   109,   132,   282,
     138,   303,   287,   133,    -1,    -1,    -1,    -1,   110,   132,
     304,   282,   138,   305,   287,   306,   133,    -1,    -1,   111,
     132,   307,   282,   133,    -1,    -1,   112,   132,   308,   282,
     133,    -1,    -1,    -1,   113,   132,   282,   138,   309,   288,
     310,   138,   352,   133,    -1,    -1,   114,   132,   282,   138,
     311,   288,   133,    -1,    -1,    -1,    -1,   115,   132,   312,
     282,   138,   313,   288,   314,   133,    -1,   116,   132,   282,
     138,   288,   133,    -1,    -1,   117,   132,   282,   138,   315,
     288,   133,    -1,    -1,   121,   132,   282,   138,   316,   288,
     133,    -1,    -1,   118,   132,   282,   138,   317,   288,   133,
      -1,    -1,   122,   132,   282,   138,   318,   288,   133,    -1,
      -1,   119,   132,   282,   138,   319,   288,   133,    -1,    -1,
     123,   132,   282,   138,   320,   288,   133,    -1,    -1,   120,
     132,   282,   138,   321,   288,   133,    -1,    -1,   124,   132,
     282,   138,   322,   288,   133,    -1,    -1,   125,   132,   282,
     138,   323,   288,   138,    11,   133,    -1,    -1,   126,   132,
     282,   138,   324,   288,   138,    11,   133,    -1,   127,   132,
     282,   133,    -1,   128,   132,   282,   133,    -1,   129,   132,
     282,   138,   282,   325,   133,    -1,    -1,   138,    -1,   132,
     133,    -1,   142,   143,    -1,    59,   142,   143,    -1,    60,
     142,   143,    -1,   140,    -1,   141,    -1,   138,    -1,   139,
      -1,   327,    -1,   146,    -1,   145,    -1,   147,    -1,   148,
      -1,   149,    -1,   150,    -1,   134,    -1,   144,    -1,   151,
      -1,   152,    -1,    59,    -1,    60,    -1,    66,    -1,    67,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,    74,
      -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,    72,
      -1,    73,    -1,    79,    -1,    80,    -1,    81,    -1,    82,
      -1,    83,    -1,    84,    -1,    85,    -1,    86,    -1,    87,
      -1,    88,    -1,    89,    -1,    52,    -1,    51,    -1,     4,
      -1,     3,    -1,    40,    -1,    49,    -1,     5,    -1,     7,
      -1,     6,    -1,    42,    -1,    56,    -1,    47,    -1,     8,
      -1,    57,    -1,    53,    -1,    43,    -1,    39,    -1,    50,
      -1,    64,    -1,    63,    -1,    62,    -1,    65,    -1,    13,
      -1,    11,    -1,    12,    -1,    14,    -1,    15,    -1,    10,
      -1,    16,    -1,   339,    -1,   330,   339,    -1,   334,    -1,
     331,   334,    -1,   343,    -1,   345,    -1,   349,    -1,   327,
      -1,   137,    -1,   153,    -1,    91,    -1,   328,    -1,   329,
      -1,   296,    -1,    -1,   333,   335,    -1,   332,    -1,   140,
      -1,   141,    -1,   334,    -1,   139,    -1,   138,    -1,   335,
      -1,   131,    -1,    -1,   337,   340,    -1,    -1,   338,   336,
      -1,   341,    -1,   332,    -1,   339,    -1,   139,    -1,   138,
      -1,    -1,   140,   342,   337,   141,    -1,    -1,   142,   344,
     333,   143,    -1,    -1,   132,   346,   333,   133,    -1,    -1,
      92,   347,   333,   133,    -1,    -1,    93,   348,   333,   133,
      -1,    -1,   135,   350,   338,   136,    -1,    -1,   351,   353,
      -1,    -1,   352,   354,    -1,   354,    -1,   131,    -1,   355,
      -1,   357,    -1,   356,    -1,    91,    -1,   327,    -1,   137,
      -1,   153,    -1,   140,    -1,   141,    -1,   139,    -1,   138,
      -1,   328,    -1,   329,    -1,   296,    -1,    58,    -1,    90,
      -1,    41,    -1,   135,   351,   136,    -1,   142,   351,   143,
      -1,   358,   351,   133,    -1,   132,    -1,    92,    -1,    93,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1343,  1343,  1345,  1344,  1354,  1355,  1356,  1357,  1358,
    1359,  1360,  1361,  1362,  1363,  1364,  1365,  1366,  1367,  1368,
    1369,  1370,  1371,  1373,  1375,  1383,  1390,  1390,  1392,  1399,
    1400,  1401,  1402,  1403,  1404,  1405,  1406,  1407,  1408,  1409,
    1410,  1413,  1413,  1415,  1415,  1417,  1418,  1418,  1420,  1422,
    1424,  1423,  1431,  1434,  1435,  1436,  1437,  1438,  1439,  1440,
    1441,  1442,  1443,  1444,  1451,  1452,  1453,  1460,  1461,  1462,
    1463,  1465,  1466,  1469,  1470,  1472,  1473,  1474,  1475,  1483,
    1484,  1485,  1496,  1496,  1497,  1497,  1499,  1500,  1501,  1504,
    1505,  1505,  1513,  1516,  1517,  1518,  1519,  1520,  1523,  1524,
    1531,  1554,  1555,  1556,  1559,  1560,  1560,  1570,  1571,  1572,
    1573,  1575,  1584,  1587,  1586,  1597,  1598,  1598,  1602,  1604,
    1602,  1622,  1624,  1622,  1642,  1644,  1642,  1667,  1668,  1670,
    1671,  1674,  1674,  1688,  1691,  1692,  1693,  1694,  1695,  1696,
    1697,  1698,  1699,  1702,  1703,  1706,  1707,  1708,  1715,  1722,
    1725,  1726,  1727,  1728,  1729,  1730,  1733,  1734,  1737,  1738,
    1741,  1742,  1746,  1741,  1758,  1758,  1768,  1768,  1769,  1768,
    1777,  1777,  1786,  1787,  1787,  1788,  1788,  1789,  1800,  1801,
    1805,  1804,  1811,  1810,  1816,  1817,  1816,  1826,  1826,  1834,
    1834,  1835,  1835,  1837,  1838,  1840,  1841,  1844,  1847,  1847,
    1857,  1857,  1857,  1864,  1865,  1865,  1868,  1869,  1870,  1870,
    1873,  1875,  1873,  1904,  1929,  1930,  1933,  1934,  1937,  1937,
    1945,  1946,  1947,  1950,  2001,  2002,  2004,  2005,  2005,  2008,
    2008,  2010,  2009,  2014,  2015,  2015,  2034,  2035,  2035,  2052,
    2053,  2055,  2059,  2061,  2064,  2065,  2066,  2068,  2069,  2069,
    2075,  2078,  2079,  2083,  2084,  2088,  2089,  2092,  2095,  2096,
    2099,  2099,  2102,  2102,  2104,  2105,  2108,  2109,  2109,  2116,
    2117,  2118,  2119,  2120,  2121,  2122,  2123,  2124,  2125,  2126,
    2127,  2128,  2129,  2130,  2131,  2132,  2133,  2134,  2135,  2136,
    2143,  2144,  2145,  2146,  2147,  2148,  2149,  2156,  2161,  2168,
    2169,  2170,  2171,  2172,  2173,  2174,  2177,  2178,  2181,  2182,
    2185,  2186,  2187,  2190,  2191,  2193,  2195,  2195,  2197,  2198,
    2199,  2200,  2203,  2206,  2206,  2214,  2215,  2216,  2219,  2224,
    2229,  2234,  2241,  2242,  2245,  2246,  2247,  2248,  2249,  2250,
    2251,  2252,  2253,  2254,  2255,  2256,  2257,  2258,  2259,  2260,
    2261,  2262,  2263,  2264,  2265,  2268,  2269,  2270,  2271,  2272,
    2273,  2274,  2275,  2277,  2278,  2280,  2281,  2283,  2284,  2286,
    2287,  2289,  2290,  2292,  2293,  2313,  2314,  2315,  2320,  2321,
    2333,  2334,  2341,  2341,  2351,  2352,  2352,  2351,  2361,  2361,
    2371,  2371,  2380,  2380,  2380,  2413,  2412,  2423,  2424,  2424,
    2423,  2433,  2451,  2451,  2456,  2456,  2461,  2461,  2466,  2466,
    2471,  2471,  2476,  2476,  2481,  2481,  2486,  2486,  2491,  2491,
    2508,  2508,  2522,  2559,  2597,  2650,  2650,  2657,  2658,  2659,
    2660,  2661,  2662,  2663,  2664,  2665,  2668,  2669,  2670,  2671,
    2672,  2673,  2674,  2675,  2676,  2677,  2678,  2679,  2680,  2681,
    2682,  2683,  2684,  2685,  2686,  2687,  2688,  2689,  2690,  2691,
    2692,  2693,  2694,  2695,  2696,  2697,  2698,  2699,  2700,  2701,
    2702,  2703,  2706,  2707,  2708,  2709,  2710,  2711,  2712,  2713,
    2714,  2715,  2716,  2717,  2718,  2719,  2720,  2721,  2722,  2723,
    2724,  2725,  2726,  2727,  2730,  2731,  2732,  2733,  2734,  2735,
    2736,  2743,  2744,  2747,  2748,  2751,  2752,  2753,  2754,  2785,
    2785,  2786,  2787,  2788,  2789,  2791,  2792,  2794,  2795,  2796,
    2798,  2799,  2800,  2802,  2803,  2805,  2806,  2808,  2809,  2812,
    2813,  2816,  2817,  2818,  2822,  2821,  2835,  2835,  2839,  2839,
    2841,  2841,  2843,  2843,  2847,  2847,  2852,  2853,  2855,  2856,
    2859,  2860,  2863,  2863,  2863,  2864,  2864,  2864,  2864,  2864,
    2864,  2864,  2864,  2865,  2865,  2865,  2865,  2866,  2866,  2869,
    2872,  2875,  2878,  2878,  2878
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT", "CLASS", "PUBLIC", "PRIVATE",
  "PROTECTED", "VIRTUAL", "ID", "STRING_LITERAL", "INT_LITERAL",
  "HEX_LITERAL", "OCT_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "ZERO",
  "FLOAT", "DOUBLE", "LONG_DOUBLE", "INT", "UNSIGNED_INT", "SHORT",
  "UNSIGNED_SHORT", "LONG", "UNSIGNED_LONG", "LONG_LONG",
  "UNSIGNED_LONG_LONG", "INT64__", "UNSIGNED_INT64__", "CHAR",
  "SIGNED_CHAR", "UNSIGNED_CHAR", "VOID", "BOOL", "SSIZE_T", "SIZE_T",
  "OSTREAM", "ISTREAM", "ENUM", "UNION", "OTHER", "CONST", "OPERATOR",
  "UNSIGNED", "SIGNED", "FRIEND", "INLINE", "MUTABLE", "TEMPLATE", "THROW",
  "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "VTK_ID", "STATIC",
  "EXTERN", "VAR_FUNCTION", "NEW", "DELETE", "EXPLICIT", "STATIC_CAST",
  "DYNAMIC_CAST", "CONST_CAST", "REINTERPRET_CAST", "OP_LSHIFT_EQ",
  "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW",
  "OP_INCR", "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ",
  "OP_DIVIDE_EQ", "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND_EQ", "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR",
  "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ",
  "ELLIPSIS", "DOUBLE_COLON", "LP", "LA", "QT_ID", "StdString",
  "UnicodeString", "IdType", "FloatType", "TypeInt8", "TypeUInt8",
  "TypeInt16", "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64",
  "TypeUInt64", "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro",
  "SetStringMacro", "GetStringMacro", "SetClampMacro", "SetObjectMacro",
  "GetObjectMacro", "BooleanMacro", "SetVector2Macro", "SetVector3Macro",
  "SetVector4Macro", "SetVector6Macro", "GetVector2Macro",
  "GetVector3Macro", "GetVector4Macro", "GetVector6Macro",
  "SetVectorMacro", "GetVectorMacro", "ViewportCoordinateMacro",
  "WorldCoordinateMacro", "TypeMacro", "VTK_BYTE_SWAP_DECL", "';'", "'('",
  "')'", "'~'", "'{'", "'}'", "':'", "','", "'='", "'<'", "'>'", "'['",
  "']'", "'&'", "'*'", "'%'", "'/'", "'-'", "'+'", "'!'", "'|'", "'^'",
  "'.'", "$accept", "strt", "@1", "file_item", "extern", "namespace", "@2",
  "class_forward_decl", "class_def", "@3", "@4", "@5", "class_def_body",
  "@6", "class_def_item", "optional_scope", "scope_list",
  "scope_list_item", "scope_type", "enum_def", "@7", "@8", "enum_list",
  "enum_item", "@9", "template_internal_class", "internal_class",
  "internal_class_body", "type_def", "complex_typedef_id", "@10", "using",
  "template", "@11", "template_args", "@12", "template_arg", "@13", "@14",
  "@15", "@16", "@17", "@18", "class_or_typename",
  "maybe_template_default", "template_default", "@19", "function",
  "scoped_method", "scope", "method", "maybe_templated_operator",
  "scoped_operator", "operator", "typecast_op_func", "@20", "@21", "@22",
  "op_func", "@23", "op_sig", "@24", "@25", "@26", "func", "@27",
  "func_trailer", "@28", "@29", "func_body", "func_sig", "@30", "@31",
  "@32", "@33", "constructor", "@34", "constructor_sig", "@35", "@36",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "@37", "destructor_sig", "@38", "@39", "args_list", "@40", "more_args",
  "@41", "arg", "@42", "@43", "maybe_indirect_id", "maybe_var_assign",
  "var_assign", "@44", "var", "var_id_maybe_assign", "maybe_vars",
  "maybe_other_vars", "@45", "other_var", "@46", "@47",
  "maybe_complex_var_id", "@48", "complex_var_id", "@49", "p_or_lp_or_la",
  "lp_or_la", "maybe_func_const", "maybe_array_or_args", "@50",
  "maybe_indirect_maybe_var_id", "maybe_indirect_var_id", "maybe_var_id",
  "var_id", "maybe_var_array", "var_array", "@51", "array", "@52",
  "more_array", "array_size", "@53", "any_id", "class_id", "storage_type",
  "storage_mod", "storage_mods", "type", "type_red", "type_red2", "@54",
  "const_mod", "templated_id", "@55", "maybe_scoped_id", "scoped_id",
  "type_simple", "type_id", "type_primitive", "type_indirection",
  "pointers", "pointer_or_const_pointer", "macro", "@56", "@57", "@58",
  "@59", "@60", "@61", "@62", "@63", "@64", "@65", "@66", "@67", "@68",
  "@69", "@70", "@71", "@72", "@73", "@74", "@75", "@76", "@77",
  "maybe_comma", "op_token", "op_token_no_delim", "keyword", "literal",
  "template_param_value", "param_value", "common_bracket_item",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig", "@78",
  "brackets_sig", "@79", "parens_sig", "@80", "@81", "@82", "braces_sig",
  "@83", "maybe_other", "maybe_other_no_semi", "other_stuff",
  "other_stuff_no_semi", "braces", "brackets", "parens", "lparen", 0
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
     385,    59,    40,    41,   126,   123,   125,    58,    44,    61,
      60,    62,    91,    93,    38,    42,    37,    47,    45,    43,
      33,   124,    94,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   154,   155,   156,   155,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   157,   157,   157,   157,   157,
     157,   157,   157,   157,   157,   158,   160,   159,   159,   161,
     161,   161,   161,   161,   161,   161,   161,   161,   161,   161,
     161,   163,   162,   164,   162,   162,   165,   162,   162,   166,
     167,   166,   166,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   169,   169,   170,   170,   171,   171,   171,   171,   172,
     172,   172,   174,   173,   175,   173,   176,   176,   176,   177,
     178,   177,   179,   180,   180,   180,   180,   180,   181,   181,
     182,   182,   182,   182,   183,   184,   183,   185,   185,   185,
     185,   185,   186,   187,   186,   188,   189,   188,   191,   192,
     190,   193,   194,   190,   195,   196,   190,   197,   197,   198,
     198,   200,   199,   201,   202,   202,   202,   202,   202,   202,
     202,   202,   202,   203,   203,   204,   204,   204,   204,   204,
     205,   205,   205,   205,   205,   205,   206,   206,   207,   207,
     209,   210,   211,   208,   213,   212,   215,   216,   217,   214,
     219,   218,   220,   221,   220,   222,   220,   220,   223,   223,
     225,   224,   226,   224,   227,   228,   224,   230,   229,   232,
     231,   233,   231,   234,   234,   235,   235,   236,   238,   237,
     240,   241,   239,   242,   243,   242,   244,   244,   245,   244,
     247,   248,   246,   246,   249,   249,   250,   250,   252,   251,
     253,   253,   253,   254,   255,   255,   256,   257,   256,   259,
     258,   260,   258,   261,   262,   261,   263,   264,   263,   265,
     265,   265,   266,   266,   267,   267,   267,   268,   269,   268,
     268,   270,   270,   271,   271,   272,   272,   273,   274,   274,
     276,   275,   278,   277,   279,   279,   280,   281,   280,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     283,   283,   283,   283,   283,   283,   283,   284,   284,   285,
     285,   285,   285,   285,   285,   285,   286,   286,   287,   287,
     288,   288,   288,   289,   289,   289,   290,   289,   289,   289,
     289,   289,   291,   293,   292,   294,   294,   294,   295,   295,
     295,   295,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   298,   298,   298,   298,   298,
     298,   298,   298,   298,   298,   299,   299,   299,   300,   300,
     301,   301,   303,   302,   304,   305,   306,   302,   307,   302,
     308,   302,   309,   310,   302,   311,   302,   312,   313,   314,
     302,   302,   315,   302,   316,   302,   317,   302,   318,   302,
     319,   302,   320,   302,   321,   302,   322,   302,   323,   302,
     324,   302,   302,   302,   302,   325,   325,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   329,   329,   329,   329,   329,   329,
     329,   330,   330,   331,   331,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   333,   333,   334,   334,   334,
     335,   335,   335,   336,   336,   337,   337,   338,   338,   339,
     339,   340,   340,   340,   342,   341,   344,   343,   346,   345,
     347,   345,   348,   345,   350,   349,   351,   351,   352,   352,
     353,   353,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   355,
     356,   357,   358,   358,   358
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     3,     1,     1,     1,
       1,     3,     4,     1,     2,     3,     2,     2,     2,     3,
       1,     2,     7,    10,     1,     5,     0,     6,     4,     3,
       3,     3,     4,     4,     4,     4,     4,     4,     5,     5,
       5,     0,     7,     0,     7,     4,     0,     7,     4,     0,
       0,     3,     3,     1,     1,     1,     3,     3,     4,     1,
       2,     2,     2,     3,     3,     2,     3,     3,     2,     1,
       1,     0,     2,     1,     3,     1,     2,     2,     2,     1,
       1,     1,     0,     6,     0,     5,     0,     1,     3,     1,
       0,     4,     2,     3,     3,     2,     3,     2,     5,     3,
       4,     4,     4,     3,     1,     0,     6,     4,     4,     3,
       6,     7,     3,     0,     5,     1,     0,     4,     0,     0,
       5,     0,     0,     5,     0,     0,     5,     1,     1,     0,
       1,     0,     3,     2,     3,     3,     3,     5,     5,     4,
       4,     6,     6,     2,     3,     1,     1,     2,     2,     2,
       3,     3,     1,     4,     3,     2,     3,     3,     1,     2,
       0,     0,     0,     9,     0,     3,     0,     0,     0,     8,
       0,     3,     0,     0,     4,     0,     3,     2,     3,     1,
       0,     5,     0,     5,     0,     0,     8,     0,     3,     0,
       5,     0,     5,     0,     3,     0,     3,     2,     0,     3,
       0,     0,     7,     0,     0,     2,     1,     1,     0,     4,
       0,     0,     5,     1,     1,     2,     0,     1,     0,     3,
       4,     4,     3,     2,     0,     2,     0,     0,     4,     0,
       2,     0,     3,     2,     0,     5,     2,     0,     5,     1,
       1,     1,     1,     1,     0,     1,     2,     0,     0,     5,
       1,     1,     2,     1,     2,     0,     1,     1,     0,     1,
       0,     2,     0,     5,     0,     1,     0,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     2,     1,     1,     1,     1,     2,     1,     2,
       1,     2,     2,     1,     1,     1,     0,     3,     2,     2,
       2,     2,     1,     0,     5,     1,     1,     1,     3,     3,
       4,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       1,     2,     0,     7,     0,     0,     0,     9,     0,     5,
       0,     5,     0,     0,    10,     0,     7,     0,     0,     0,
       9,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     9,
       0,     9,     4,     4,     7,     0,     1,     2,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     4,     0,     4,     0,     2,     0,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,   305,   338,   357,   358,
     359,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   360,   361,   362,   355,   356,   341,   342,   336,   337,
      84,     0,   322,   160,   374,   373,     0,   300,   299,     0,
     316,     0,     0,     0,   339,   304,   301,   226,   303,     0,
     340,   334,   335,   353,   354,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     4,     9,     8,
      13,   229,   229,    10,     7,     0,     0,     0,     0,     0,
     158,     5,     0,     0,     0,   306,     0,   297,   308,   310,
       0,   314,   315,   313,   333,   332,    20,     0,   546,   325,
       0,   326,    43,   327,   319,    41,   318,   338,   341,   342,
     336,   337,   339,   340,   334,   335,   353,   354,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,     0,    82,
     321,   546,    46,   320,     0,     0,     0,     0,     0,     0,
     290,   294,   293,   292,   291,   295,   296,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   546,    26,
     271,   277,   276,   273,   272,     0,     0,   269,     0,   270,
     274,   275,   288,   289,   278,   279,   280,   281,   282,   283,
     284,   285,   286,   287,     0,     0,   226,   302,     0,   331,
       0,   384,   388,   390,     0,     0,   397,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   375,   380,     0,   226,     0,   231,   377,   378,     0,
       0,     0,     0,     0,   304,   301,   229,     0,     0,   152,
       0,     0,     0,   314,     0,   315,   179,   546,    17,    18,
      16,    14,    21,     0,   323,   166,   242,   243,     0,   159,
     164,   133,   170,   226,   216,     0,   258,   257,     0,     0,
       0,     0,     0,     0,   307,   298,   309,   312,   311,     0,
       0,     0,    30,    71,    29,    71,    86,     0,     0,    31,
      71,     0,     0,     0,     0,     0,     0,     0,   112,   118,
       0,   317,    43,    41,    46,   103,   271,   273,   272,   269,
     270,   274,   275,     0,   214,     0,     0,     0,   104,   258,
     257,     0,     0,     0,     0,     0,     0,   109,     0,     2,
     222,   227,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   381,    11,   225,   230,     0,   376,   379,
       6,    43,    41,   338,   336,   337,   339,   340,   334,   335,
      46,   302,     0,    19,    15,     0,     0,   155,     0,     0,
       0,   546,     0,   200,   156,   136,   187,   135,   198,   325,
       0,   326,   328,   525,     0,   157,   134,     0,   172,   172,
       0,   218,   223,   217,   253,     0,     0,   236,   259,   264,
     180,   143,   184,   182,     0,   329,   475,   474,   478,   480,
     479,   484,   499,   495,   496,   494,   497,   498,   500,   488,
     476,   568,   481,   487,   483,   477,   489,   473,   472,   486,
     482,   485,   566,   446,   447,   492,   491,   490,   493,   448,
     449,   450,   451,   452,   453,   459,   460,   454,   455,   456,
     457,   458,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   567,   555,   573,   574,   551,   572,   442,
     546,    45,   557,   562,   561,   559,   560,   546,   443,   437,
     436,   438,   439,   440,   441,   444,   445,   558,   565,   556,
     563,   564,   547,   550,   552,   554,   553,   546,     0,     0,
       0,     0,    87,    89,    86,    48,     0,   161,    33,    32,
      34,     0,     0,     0,     0,   115,     0,     0,     0,   330,
     101,   215,   102,   100,   105,    28,     2,   108,   107,     0,
       0,   221,     3,   229,   382,     0,     0,     0,   392,   395,
       0,     0,   402,   406,   410,   414,   404,   408,   412,   416,
     418,   420,   422,   423,     0,   232,    36,    35,    37,    12,
     150,   154,     0,   184,     0,   151,     0,   178,     0,   193,
     172,   189,     0,   191,     0,   446,   447,     0,   433,   434,
     431,   432,     0,   167,   435,   144,   175,     0,     0,   165,
     171,   220,     0,   237,   254,   261,     0,   204,     0,   204,
     140,   139,     0,     0,     0,     0,     0,     0,     0,    72,
      73,    75,    49,    49,    85,    86,    90,     0,    49,   204,
      39,    38,    40,   114,   116,   255,   127,   128,   255,   255,
     204,     3,     0,     0,    25,   228,     0,   385,   389,   391,
       0,     0,   398,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   425,   153,     0,   193,     0,     0,
     188,   199,   204,   138,   137,   204,   511,   540,   542,   538,
     544,   509,   533,   532,   534,   324,   536,   510,   514,   508,
     512,   513,   530,   531,   526,   529,   505,   506,   507,     0,
       0,   427,   428,     0,   172,   173,   177,   518,   519,   219,
     517,   503,   247,   262,     0,   210,     0,     0,     0,   569,
     570,   571,    78,    76,    77,     0,    50,    50,    88,     0,
      83,    50,     0,   118,   240,   241,   239,   119,   255,   258,
     256,   122,   125,     0,    27,     0,   110,     0,     0,   393,
       0,     0,   401,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   426,     0,   546,     0,   201,   195,     0,
       0,     0,   515,   515,   515,   527,   525,   515,   429,   430,
     168,   176,   172,   504,   248,   238,   250,   267,   181,   213,
     206,   205,   207,     0,   185,   183,   142,   141,    74,    79,
      80,    81,    44,     0,     0,    42,    91,    47,   162,   117,
     129,   251,     0,   255,   233,   129,   129,   244,   111,   383,
     386,     0,   396,   399,   403,   407,   411,   415,   405,   409,
     413,   417,     0,     0,   424,     0,    22,   204,     0,   194,
     197,   190,   192,     0,     0,     0,     0,     0,     0,   204,
     174,   204,     0,     0,   208,   255,   204,     0,     0,    70,
      59,   229,    51,   229,    55,    54,     0,     0,     0,   146,
     145,    53,     0,     0,     0,   314,    69,    52,   172,   131,
     120,   130,   234,   252,   123,   126,   245,     0,   106,     0,
     548,     0,     0,     0,   193,     0,   195,   541,   522,   521,
     520,   516,   543,   539,   524,   545,   523,   528,   535,   537,
       0,     0,   263,   268,   210,   211,     0,     0,     0,     0,
      61,    60,     0,     0,     0,     0,    68,     0,     0,   229,
       0,     0,    65,    62,   149,   148,   147,   163,     0,   247,
     246,   387,     0,   400,   419,   421,     0,   202,   196,   169,
     244,   209,   216,   186,   546,   548,    95,     0,     0,    97,
       0,     0,     0,     0,    92,    66,    63,    57,    56,     0,
      67,    64,   132,   501,   235,   394,   549,    23,   249,   212,
       0,     0,    94,    93,    96,     0,     0,     0,    58,   502,
     548,    99,     0,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    87,    88,    89,   332,    90,    91,   295,
     293,   300,   736,   813,   872,   519,   629,   630,   814,    92,
     297,   148,   521,   522,   739,   930,   931,   966,    93,   327,
     650,    94,    95,   309,   534,   743,   535,   536,   820,   537,
     825,   538,   826,   648,   890,   891,   948,    96,    97,   268,
     877,   248,    98,    99,   100,   154,   639,   888,   269,   408,
     270,   404,   713,   859,   271,   409,   609,   792,   714,   258,
     272,   617,   619,   618,   866,   879,   589,   396,   682,   685,
     680,   849,   778,   880,   590,   398,   588,   847,   724,   725,
     801,   924,   802,   803,   962,   323,   412,   413,   612,   101,
     273,   233,   208,   553,   234,   235,   367,   747,   949,   274,
     722,   748,   275,   898,   795,   861,   822,   415,   749,   276,
     417,   418,   419,   615,   797,   616,   862,   863,   119,   120,
     935,   105,   884,   107,   108,   109,   170,   110,   121,   403,
     402,   123,   113,   114,   115,   236,   237,   238,   116,   656,
     343,   758,   899,   344,   345,   660,   831,   661,   348,   761,
     901,   664,   668,   665,   669,   666,   670,   667,   671,   672,
     673,   774,   603,   699,   700,   701,   982,   719,   720,   853,
     910,   911,   917,   594,   856,   703,   704,   705,   786,   706,
     787,   707,   784,   782,   783,   708,   785,   290,   952,   512,
     513,   514,   515,   516,   517
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -915
static const yytype_int16 yypact[] =
{
    -915,    93,  -915,  5006,  5148,  6385,  -915,    10,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,   310,   367,   296,   395,
    6593,  5231,  -915,  -915,  -915,  -915,   397,  -915,  -915,   299,
    -915,  5761,   313,  6010,   421,    79,   167,  -915,  -915,  6459,
     428,   473,   501,   376,   435,   443,   463,   484,   494,   508,
     545,   568,   576,   585,   602,    48,    64,    80,   101,   136,
     156,   162,   206,   214,   230,   239,   241,   243,   256,   270,
     272,   274,   281,   286,   292,   294,  -915,  -915,  -915,  -915,
    -915,    17,    17,  -915,  -915,  5549,   -25,   -25,   -25,   -25,
    -915,  -915,   322,   -57,  6177,  -915,  5655,  -915,   184,   388,
    5973,   353,  -915,  -915,  -915,  -915,  -915,   326,  -915,  -915,
     -50,   353,   325,  -915,  -915,   341,  -915,   -38,  -915,  -915,
     -14,   103,   140,   144,   164,   170,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   347,  -915,
    -915,  -915,   352,  -915,  5655,  6459,  6459,  6459,   336,   345,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,   348,   360,   401,
    6459,  5148,  6385,  5231,   370,  4394,  4394,  6489,  -915,  -915,
     -27,  -915,  -915,     3,    53,  6459,  6459,    63,  6459,   109,
     160,   174,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,   175,   372,  -915,   385,    77,  -915,
    6617,  -915,  -915,  -915,  6617,  6617,  -915,  6617,  6617,  6617,
    6617,  6617,  6617,  6617,  6617,  6617,  6617,  6617,  6617,  6617,
    6617,  -915,   479,   420,  -915,  6489,  -915,   212,  -915,   423,
    5148,  6385,  6647,  5231,  -915,   547,    17,   -25,   -25,  -915,
     190,  6563,  5655,   -37,   396,   437,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  5252,  -915,  -915,  -915,  -915,  6563,  -915,
    -915,  -915,  -915,  -915,   432,   953,   434,   449,   192,    28,
    6647,  6647,  6647,   199,  -915,  -915,  -915,  -915,  -915,  6459,
    1142,  6459,  -915,   445,  -915,   445,  6617,   448,  1293,  -915,
     445,   453,   457,   458,   459,  6459,  6459,  6459,  -915,    83,
    6459,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,   465,  -915,  6617,   466,   470,  -915,   177,
    -915,  1444,   467,   475,   476,   201,  6251,  -915,   155,  -915,
    -915,  -915,   471,  6617,  6617,  6617,   482,   490,  6617,   497,
     499,   504,   516,   522,   525,   526,   546,   549,   550,   564,
     478,   481,   566,  -915,  -915,   571,  -915,  6489,  -915,  -915,
    -915,   515,   552,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
     579,  -915,   581,  -915,  -915,  6281,   374,  -915,   449,    38,
    5332,  -915,  1595,  -915,  -915,  -915,  -915,  -915,  -915,   524,
     221,   110,  -915,  -915,  6697,  -915,  -915,   225,    67,    67,
     196,  -915,  -915,  -915,  -915,   582,  6489,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  5353,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  6047,   583,
     586,   587,   597,   599,  6617,  -915,   589,  -915,  -915,  -915,
    -915,   609,   610,   611,   605,   612,  6147,    88,   694,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  6355,
    6697,  -915,   613,   184,  -915,   614,   615,   618,  -915,  -915,
     617,  5867,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  6617,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,   662,   718,   326,  -915,  1746,  -915,  6617,   631,
      67,  -915,  5353,  -915,  3860,   628,   629,   639,  -915,  -915,
    -915,  -915,   630,  -915,  -915,  -915,  -915,   179,   758,  -915,
    -915,  -915,  4162,  -915,  -915,   634,   636,   646,  6617,   646,
    -915,  -915,   234,  1897,  2048,  2199,  6459,  6459,  6459,  -915,
     642,  -915,  -915,  -915,  -915,  6617,  -915,   651,  -915,   646,
    -915,  -915,  -915,  -915,  -915,  5433,  -915,  -915,  5433,  5433,
     646,   653,  6697,   659,  -915,  -915,  5867,  -915,  -915,  -915,
    5867,  5867,  -915,   658,  5867,  5867,  5867,  5867,  5867,  5867,
    5867,  5867,  5867,  5867,   654,  -915,   661,   631,   663,  6459,
    -915,  -915,   646,  -915,  -915,   646,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,   655,
     656,  -915,  -915,   664,    67,  -915,  -915,  -915,  -915,  4162,
    -915,  -915,   191,  -915,   667,    26,   665,   668,  5353,  -915,
    -915,  -915,  -915,  -915,  -915,  6047,    62,    69,  -915,  4162,
    -915,    75,   669,    83,  -915,  -915,  -915,  -915,   878,   434,
    -915,  -915,  -915,   670,  -915,   675,  -915,   674,  5867,  -915,
     676,  5867,  -915,   677,   678,   680,   685,   687,   688,   690,
     691,   689,   692,  -915,   693,  -915,   -25,  -915,   695,   179,
     696,   698,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,    67,  -915,  -915,  -915,  -915,   682,  -915,  -915,
    -915,  -915,   697,  5867,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  4523,   657,  -915,  4162,  -915,  -915,  -915,
     702,  -915,   699,  5433,  -915,   702,   702,   198,  -915,  -915,
    -915,   704,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,   797,   823,  -915,  2350,  -915,   646,  6459,  -915,
    -915,  -915,  -915,  3256,  3407,  3558,  3105,  4011,  3709,   646,
    -915,   646,   700,  4162,  -915,  5433,   646,  4652,   179,  -915,
    -915,    17,  -915,    17,  -915,  -915,  4770,   -25,   -25,  -915,
    -915,  -915,   524,  6177,  4888,   110,  -915,  -915,    67,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,   179,  -915,   703,
    -915,   712,   713,   714,   631,   715,   695,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
     716,   719,  -915,  4162,    26,  -915,   720,   442,  6385,   442,
    -915,  -915,   431,   -25,   -25,  6563,  -915,   706,   723,    17,
     -25,   -25,  -915,  -915,  -915,  -915,  -915,  -915,  4313,   191,
    -915,  -915,  2652,  -915,  -915,  -915,   -25,  -915,  -915,  -915,
     198,  -915,   432,  -915,  -915,  -915,  -915,   245,   279,  -915,
     387,  5127,  6459,  5127,  -915,  -915,  -915,  -915,  -915,   724,
    -915,  -915,  4313,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    2501,  2803,  -915,  -915,  -915,   394,   518,   595,  -915,  -915,
    -915,  -915,  2954,  -915
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -915,  -314,  -915,  -915,  -915,  -915,  -915,    43,   -36,  -915,
    -915,  -915,  -307,  -915,  -915,    89,   116,  -915,  -915,   -32,
    -915,  -915,  -505,  -915,  -915,  -915,   -75,  -480,    46,  -915,
    -915,    47,   -28,  -915,   115,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -351,  -915,  -915,   767,  -915,   616,
    -672,  -915,  -915,  -743,   -72,  -915,  -915,  -915,  -213,  -915,
    -915,  -915,  -915,  -915,  -256,  -915,  -393,  -915,  -915,   -62,
    -915,  -915,  -915,  -915,  -915,  -234,  -915,  -915,  -915,  -915,
    -660,   -43,    21,  -232,  -915,  -915,  -915,  -915,  -409,  -915,
     -59,  -915,  -915,  -915,  -915,   717,   -92,  -915,  -915,    60,
    -203,   -89,  -146,  -915,   321,  -915,  -915,  -576,  -915,  -153,
    -915,  -915,  -915,   -84,   -69,  -915,  -915,  -915,  -915,  -164,
     139,  -704,  -915,  -915,  -915,  -915,  -915,  -915,    -1,    19,
       4,   -96,    45,     2,  -206,   779,  -915,   781,     1,  -915,
      -4,    25,   142,    16,  -915,   -97,  -915,   660,    78,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,  -915,
    -915,  -915,  -524,  -233,  -246,  -227,  -915,  -725,  -579,  -278,
    -556,    39,  -915,   112,  -915,  -833,  -915,  -915,  -915,  -915,
    -915,  -915,  -915,  -915,  -915,  -915,  -915,  -145,  -914,  -915,
    -902,  -915,  -915,  -577,  -915
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -328
static const yytype_int16 yytable[] =
{
     122,   125,   102,   239,   111,   175,   298,   104,   159,   176,
     284,   286,   406,   329,   816,   702,   610,   776,   796,   637,
     124,   126,   103,   249,   328,   552,   653,   152,   112,   395,
     715,   397,   366,   331,   263,   259,   260,   261,   387,   205,
     169,   291,   111,   177,   510,   209,   150,   153,   106,   149,
     986,   991,   510,  -290,   390,   405,   721,   509,   168,   246,
     338,   179,   204,   511,  -290,   509,   112,   809,   810,   811,
     878,   511,   751,   752,   809,   810,   811,  -294,   325,   325,
     809,   810,   811,   264,   799,   510,  1002,  -121,   365,   986,
     264,   254,   646,     2,  -294,  -326,   253,  -290,   509,   251,
     986,  -290,  -290,   277,   511,   279,   256,   111,   285,   606,
     257,   111,   392,  -290,   250,   983,   800,   607,   169,   422,
     255,  -294,   414,   278,   934,   283,  -294,   410,   755,   583,
     738,   112,  -124,   941,  -121,   112,   168,   206,   923,   647,
     252,  -271,  -271,  -294,  -293,  -271,   510,  -271,  -224,   999,
    -290,   302,   303,   304,  -292,   111,   284,   382,   301,   509,
     423,   231,   232,   793,   575,   511,   311,   312,   313,   314,
     423,   604,   821,   581,   324,   324,   330,   207,   416,   112,
     210,   333,   334,   721,   209,   383,   384,   124,   126,   153,
     620,   394,   621,  -293,  -293,   933,   211,   681,   812,   252,
    -291,   289,   850,  -292,   940,   815,   608,   335,   340,   342,
     727,   817,   212,   346,   347,   341,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     742,  -292,   651,   213,   330,  -291,   371,   372,  -293,   380,
     896,   753,   593,  -293,   956,   796,   586,   893,   897,  -291,
     388,  -295,   389,   111,   285,  -295,   124,   126,   150,   153,
     793,  -296,   399,   614,   401,  -296,   336,   388,   214,   279,
     278,   485,   486,   780,   330,  -292,   781,   112,   702,  -291,
    -292,   385,   400,   421,  -291,   425,   551,   407,   215,   925,
     424,   936,   549,   341,   216,   523,   124,   126,   153,  -295,
    -295,   531,   532,   533,  -295,  -296,   539,   721,   160,   544,
    -296,   488,   592,   580,  -296,   264,   605,   604,   585,  -260,
     950,   791,   160,   794,   541,   728,   737,   611,   231,   232,
     264,   741,   264,  -260,   341,   160,   161,   162,   217,   264,
     510,   264,   555,   556,   557,   623,   218,   560,   305,   306,
     161,   162,   624,   509,   163,   663,   368,   232,   683,   511,
     684,   264,   219,   161,   162,   264,   330,   793,   163,   702,
     675,   220,   625,   221,   264,   222,   528,   510,   510,   510,
     964,   163,   965,   160,   520,   307,   425,  -294,   223,   526,
     509,   509,   509,   164,   165,   166,   511,   511,   511,   860,
     155,   156,   224,   702,   225,   582,   226,   164,   165,   166,
     529,   161,   162,   227,   964,   330,   965,   265,   228,   604,
     164,   165,   166,   399,   229,   401,   230,  -273,  -273,   163,
      32,  -273,   508,  -273,   971,   972,  -294,   157,   905,   167,
     508,  -277,  -277,   622,   289,  -277,   158,  -277,   178,   969,
     920,     7,   921,   262,   759,   760,   292,   926,   763,   764,
     765,   766,   767,   768,   769,   770,   771,   772,   164,   165,
     166,   973,   294,   508,   894,   895,   167,    26,    27,    28,
      29,   750,   296,   299,   750,   750,  -293,   992,   993,   308,
     994,   117,   310,   969,   806,   947,   807,    44,  -276,  -276,
     264,   315,  -276,   337,  -276,   854,   855,  -288,  -288,   858,
     649,  -288,  -292,  -288,   631,   992,   993,   994,   530,  -291,
     339,   363,   964,   523,   965,   640,  -272,  -272,   391,   964,
    -272,   965,  -272,    49,   508,  -293,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,   364,  -269,  -269,   370,   833,  -269,   381,  -269,  -270,
    -270,  -292,   111,  -270,  -295,  -270,  -289,  -289,  -291,  -327,
    -289,   411,  -289,   674,  -278,  -278,  -260,   964,  -278,   965,
    -278,   420,   518,   524,   750,   527,   112,   678,   528,   529,
     530,   399,  -296,   401,  -279,  -279,   540,   542,  -279,   510,
    -279,   543,   546,   676,  -274,  -274,   547,   548,  -274,   554,
    -274,   572,   509,  -295,   573,  -280,  -280,   726,   511,  -280,
     558,  -280,   732,   733,   734,  -281,  -281,   944,   559,  -281,
     845,  -281,  -275,  -275,   523,   561,  -275,   562,  -275,  -282,
    -282,  -296,   563,  -282,   330,  -282,   576,   330,   330,   641,
     945,   823,   946,   964,   564,   965,   591,   111,   757,   750,
     565,   111,   111,   566,   567,   111,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   779,  -283,  -283,   645,   944,
    -283,   112,  -283,   577,   568,   112,   112,   569,   570,   112,
     112,   112,   112,   112,   112,   112,   112,   112,   112,  -284,
    -284,   750,   571,  -284,   574,  -284,   510,  -285,  -285,   341,
     578,  -285,   579,  -285,   846,   613,  -286,  -286,   632,   509,
    -286,   633,  -286,   634,   638,   511,   642,   399,   508,   401,
     964,   631,   965,  -287,  -287,   635,   698,  -287,   636,  -287,
     640,   641,   642,   158,   510,   510,   643,   330,   658,   654,
     644,   659,   657,   605,   698,   662,   510,   509,   509,   111,
     830,   265,   111,   511,   511,   508,   508,   508,   679,   509,
     709,   710,   711,   712,   716,   511,  -265,   871,   723,  -203,
     735,   873,   937,   112,   938,   876,   112,   740,   284,   754,
     756,   762,   773,   775,   887,   777,   790,   804,   788,   789,
     798,   805,   818,   827,   111,   865,   828,   829,   902,   832,
     834,   835,   882,   836,   885,   942,   943,   883,   837,   990,
     838,   839,   330,   840,   841,  -266,   844,   842,   112,   851,
     843,   852,   892,   848,   903,   864,   951,   977,   112,   932,
     939,   889,   900,   922,   779,   953,   954,   955,   957,   959,
     979,   808,   960,   963,   978,   998,   870,   974,   819,   874,
     875,   698,   247,   958,   330,   961,   882,   386,   885,   906,
     989,   975,   976,   881,   655,   882,   988,   885,   980,   981,
     984,   698,   277,   882,   279,   885,   285,   316,   824,   288,
     287,   886,   112,   326,   987,   916,     0,   369,   857,     0,
       0,   112,   168,     0,     0,     0,     0,     0,     0,   112,
       0,     0,     0,   181,   182,   317,   318,     0,     0,     0,
       0,     0,     0,   967,   968,   970,     0,     0,     0,     0,
       0,     0,     0,   319,   388,     0,   279,     0,     0,     0,
       0,     0,     0,   124,   126,   153,     0,     0,     0,     0,
       0,     0,     0,     0,   168,     0,     0,     0,   698,     0,
       0,     0,   316,     0,     0,     0,     0,   995,   996,   997,
     744,   745,   320,   321,   322,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   508,   181,   182,
     317,   318,     0,     0,     0,   698,   698,   698,   698,   698,
     698,     0,     0,     0,     0,   698,     0,     0,   319,     0,
     746,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   231,   232,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   266,   267,   320,   321,   322,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,   698,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     698,     0,     0,     0,   508,     0,     0,   231,   232,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   698,     0,     0,     0,     0,     0,
       0,     0,   508,   508,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   508,   426,   427,   428,   429,   430,
     431,   373,   432,   433,   434,   435,   436,   437,   438,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   128,   129,   374,
     375,   439,   440,   441,   442,   443,    34,    35,     0,   444,
       0,   445,   446,   447,   448,   449,     0,   376,   450,   451,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   377,   378,   379,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   487,   488,     0,   489,   490,   491,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   426,   427,   428,   429,
     430,   431,   373,   432,   433,   434,   435,   436,   437,   438,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   128,   129,
     374,   375,   439,   440,   441,   442,   443,    34,    35,     0,
     444,     0,   445,   446,   447,   448,   449,     0,   376,   450,
     451,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   377,   378,   379,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   487,   488,     0,   489,   490,   525,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   426,   427,   428,
     429,   430,   431,   373,   432,   433,   434,   435,   436,   437,
     438,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   128,
     129,   374,   375,   439,   440,   441,   442,   443,    34,    35,
       0,   444,     0,   445,   446,   447,   448,   449,     0,   376,
     450,   451,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   377,   378,
     379,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   487,   488,     0,   489,   490,
     545,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   426,   427,
     428,   429,   430,   431,   373,   432,   433,   434,   435,   436,
     437,   438,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     128,   129,   374,   375,   439,   440,   441,   442,   443,    34,
      35,     0,   444,     0,   445,   446,   447,   448,   449,     0,
     376,   450,   451,   452,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,   483,   484,   485,   486,   377,
     378,   379,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   487,   488,     0,   489,
     490,   587,   492,   493,   494,   495,   496,   497,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   507,   426,
     427,   428,   429,   430,   431,   373,   432,   433,   434,   435,
     436,   437,   438,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   128,   129,   374,   375,   439,   440,   441,   442,   443,
      34,    35,     0,   444,     0,   445,   446,   447,   448,   449,
       0,   376,   450,   451,   452,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,   483,   484,   485,   486,
     377,   378,   379,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   487,   488,   677,
     489,   490,     0,   492,   493,   494,   495,   496,   497,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   507,
     426,   427,   428,   429,   430,   431,   373,   432,   433,   434,
     435,   436,   437,   438,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   128,   129,   374,   375,   439,   440,   441,   442,
     443,    34,    35,     0,   444,     0,   445,   446,   447,   448,
     449,     0,   376,   450,   451,   452,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,   483,   484,   485,
     486,   377,   378,   379,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   487,   488,
       0,   489,   490,   729,   492,   493,   494,   495,   496,   497,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     507,   426,   427,   428,   429,   430,   431,   373,   432,   433,
     434,   435,   436,   437,   438,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   128,   129,   374,   375,   439,   440,   441,
     442,   443,    34,    35,     0,   444,     0,   445,   446,   447,
     448,   449,     0,   376,   450,   451,   452,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,   483,   484,
     485,   486,   377,   378,   379,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   487,
     488,     0,   489,   490,     0,   492,   493,   494,   495,   496,
     497,   730,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   507,   426,   427,   428,   429,   430,   431,   373,   432,
     433,   434,   435,   436,   437,   438,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   128,   129,   374,   375,   439,   440,
     441,   442,   443,    34,    35,     0,   444,     0,   445,   446,
     447,   448,   449,     0,   376,   450,   451,   452,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,   483,
     484,   485,   486,   377,   378,   379,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     487,   488,   731,   489,   490,     0,   492,   493,   494,   495,
     496,   497,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   507,   426,   427,   428,   429,   430,   431,   373,
     432,   433,   434,   435,   436,   437,   438,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   128,   129,   374,   375,   439,
     440,   441,   442,   443,    34,    35,     0,   444,     0,   445,
     446,   447,   448,   449,     0,   376,   450,   451,   452,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     483,   484,   485,   486,   377,   378,   379,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   487,   488,   904,   489,   490,     0,   492,   493,   494,
     495,   496,   497,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   507,   426,   427,   428,   429,   430,   431,
     373,   432,   433,   434,   435,   436,   437,   438,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   128,   129,   374,   375,
     439,   440,   441,   442,   443,    34,    35,     0,   444,     0,
     445,   446,   447,   448,   449,     0,   376,   450,   451,   452,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,   483,   484,   485,   486,   377,   378,   379,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   487,   488,     0,   489,   490,  1000,   492,   493,
     494,   495,   496,   497,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   507,   426,   427,   428,   429,   430,
     431,   373,   432,   433,   434,   435,   436,   437,   438,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   128,   129,   374,
     375,   439,   440,   441,   442,   443,    34,    35,     0,   444,
       0,   445,   446,   447,   448,   449,     0,   376,   450,   451,
     452,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,   483,   484,   485,   486,   377,   378,   379,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   488,   985,   489,   490,     0,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   426,   427,   428,   429,
     430,   431,   373,   432,   433,   434,   435,   436,   437,   438,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   128,   129,
     374,   375,   439,   440,   441,   442,   443,    34,    35,     0,
     444,     0,   445,   446,   447,   448,   449,     0,   376,   450,
     451,   452,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   483,   484,   485,   486,   377,   378,   379,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  1001,   488,     0,   489,   490,     0,
     492,   493,   494,   495,   496,   497,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   507,   426,   427,   428,
     429,   430,   431,   373,   432,   433,   434,   435,   436,   437,
     438,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   128,
     129,   374,   375,   439,   440,   441,   442,   443,    34,    35,
       0,   444,     0,   445,   446,   447,   448,   449,     0,   376,
     450,   451,   452,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,   483,   484,   485,   486,   377,   378,
     379,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1003,   488,     0,   489,   490,
       0,   492,   493,   494,   495,   496,   497,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   507,   426,   427,
     428,   429,   430,   431,   373,   432,   433,   434,   435,   436,
     437,   438,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     128,   129,   374,   375,   439,   440,     0,   442,   443,    34,
      35,     0,   444,     0,   445,   446,   447,   448,   449,     0,
     376,   450,   451,     0,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,     0,   686,   687,   688,   377,
     378,   379,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   914,   689,     0,   489,
     690,   915,   691,   908,   909,   717,   718,   696,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   697,   426,
     427,   428,   429,   430,   431,   373,   432,   433,   434,   435,
     436,   437,   438,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   128,   129,   374,   375,   439,   440,     0,   442,   443,
      34,    35,     0,   444,     0,   445,   446,   447,   448,   449,
       0,   376,   450,   451,     0,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,     0,   686,   687,   688,
     377,   378,   379,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   689,   907,
     489,   690,     0,   691,   908,   909,   717,   718,   696,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   697,
     426,   427,   428,   429,   430,   431,   373,   432,   433,   434,
     435,   436,   437,   438,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   128,   129,   374,   375,   439,   440,     0,   442,
     443,    34,    35,     0,   444,     0,   445,   446,   447,   448,
     449,     0,   376,   450,   451,     0,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,     0,   686,   687,
     688,   377,   378,   379,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   689,
     912,   489,   690,     0,   691,   908,   909,   717,   718,   696,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     697,   426,   427,   428,   429,   430,   431,   373,   432,   433,
     434,   435,   436,   437,   438,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   128,   129,   374,   375,   439,   440,     0,
     442,   443,    34,    35,     0,   444,     0,   445,   446,   447,
     448,   449,     0,   376,   450,   451,     0,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,     0,   686,
     687,   688,   377,   378,   379,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     689,   913,   489,   690,     0,   691,   908,   909,   717,   718,
     696,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   697,   426,   427,   428,   429,   430,   431,   373,   432,
     433,   434,   435,   436,   437,   438,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   128,   129,   374,   375,   439,   440,
       0,   442,   443,    34,    35,     0,   444,     0,   445,   446,
     447,   448,   449,     0,   376,   450,   451,     0,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,     0,
     686,   687,   688,   377,   378,   379,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   689,     0,   489,   690,     0,   691,   908,   909,   717,
     718,   696,   919,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   697,   426,   427,   428,   429,   430,   431,   373,
     432,   433,   434,   435,   436,   437,   438,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   128,   129,   374,   375,   439,
     440,     0,   442,   443,    34,    35,     0,   444,     0,   445,
     446,   447,   448,   449,     0,   376,   450,   451,     0,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
       0,   686,   687,   688,   377,   378,   379,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   689,     0,   489,   690,     0,   691,   692,   693,
     694,   695,   696,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   697,   426,   427,   428,   429,   430,   431,
     373,   432,   433,   434,   435,   436,   437,   438,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   128,   129,   374,   375,
     439,   440,     0,   442,   443,    34,    35,     0,   444,     0,
     445,   446,   447,   448,   449,     0,   376,   450,   451,     0,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,     0,   686,   687,   688,   377,   378,   379,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   689,     0,   489,   690,     0,   691,   692,
     693,   694,   918,   696,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   697,   426,   427,   428,   429,   430,
     431,   373,   432,   433,   434,   435,   436,   437,   438,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   128,   129,   374,
     375,   439,   440,     0,   442,   443,    34,    35,     0,   444,
       0,   445,   446,   447,   448,   449,     0,   376,   450,   451,
       0,   453,   454,     0,   455,   456,   457,   458,   459,   460,
     461,   462,   463,   464,   465,   466,   467,   468,   469,   470,
     471,   472,   473,   474,   475,   476,   477,   478,   479,   480,
     481,   482,     0,   686,   687,   688,   377,   378,   379,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   689,     0,   489,   690,     0,   691,
       0,     0,   717,   718,   696,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   697,   426,   427,   428,   429,
     430,   431,   373,   432,   433,   434,   435,   436,   437,   438,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   128,   129,
     374,   375,   439,   440,     0,   442,   443,    34,    35,     0,
     444,     0,   445,   446,   447,   448,   449,     0,   376,   450,
     451,     0,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,   316,   686,   687,   688,   377,   378,   379,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,   181,
     182,   317,   318,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   689,     0,   489,   690,   319,
     691,     0,     0,   694,     0,   696,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   697,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,   321,
     322,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     0,     0,
       0,     6,     7,     0,     0,     0,     0,     0,   231,   232,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,     0,    32,    33,    34,    35,   867,
      37,    38,    39,     0,    40,    41,     0,    43,    44,    45,
     245,    47,     0,     0,    48,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,   868,   869,   927,   928,   393,     0,     0,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   242,   929,     0,    32,    33,    34,    35,     0,    37,
      38,    39,     0,    40,     0,     0,     0,    44,   244,   245,
       0,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   240,   241,     0,     0,     0,     6,     7,
       0,     0,     0,     0,     0,     0,   393,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   242,
     243,     0,    32,    33,    34,    35,     0,    37,    38,   117,
       0,    40,     0,     0,     0,    44,   244,   245,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   280,   281,     0,     0,     0,     6,     7,     0,     0,
       0,     0,     0,     0,   393,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   242,   282,     0,
      32,     0,    34,    35,     0,    37,    38,   117,     0,    40,
       0,     0,     0,    44,   244,   245,     0,     0,     0,    48,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     0,   393,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,     0,    32,    33,
      34,    35,    36,    37,    38,    39,     0,    40,    41,    42,
      43,    44,    45,    46,    47,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,   180,    86,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     7,     0,     0,
       0,     0,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,   187,    26,    27,    28,    29,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,     0,    44,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,    49,
       7,     0,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,     0,     0,     0,
       0,   180,   964,     0,   965,     0,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,   118,     0,     0,    44,   181,   182,   183,
     184,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,   180,     0,    49,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,   180,     0,     0,     0,   151,   181,   182,   183,
     184,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   393,   187,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,   316,     0,    49,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,   584,     0,   181,   182,
     317,   318,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   393,   319,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   744,   745,   320,   321,   322,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,   241,     0,     0,     0,     6,     7,     0,
       0,     0,     0,     0,     0,   746,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   242,   243,
       0,    32,    33,    34,    35,     0,    37,    38,   117,     0,
      40,     0,     0,     0,    44,   244,   245,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,   280,   281,
       0,     0,     0,     6,   127,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     128,   129,   130,   131,   242,   282,     0,    32,     0,    34,
      35,     0,    37,    38,   117,     0,    40,     0,     0,     0,
     132,   244,   245,     0,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,   133,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   171,   172,     0,     0,     0,     0,
     127,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   128,   129,   130,   131,
      30,   173,     0,    32,     0,    34,    35,     0,     0,     0,
     117,     0,    40,     0,     0,     0,   132,     0,     0,   174,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,   133,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     280,   281,     0,     0,     0,     0,   127,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   128,   129,   130,   131,   242,   282,     0,    32,
       0,    34,    35,     0,     0,     0,   117,     0,    40,     0,
       0,     0,   132,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   280,   281,     0,     0,
       0,     0,   127,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   128,   129,
     130,   131,   242,   282,     0,     0,     0,    34,    35,   180,
       0,     0,   117,     0,    40,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,   183,   184,     0,
       0,     0,   626,   627,   628,     0,   180,     0,     0,   117,
       0,   185,     0,   186,    49,   187,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,   188,   187,     0,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   373,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   128,   129,   374,   375,   180,     0,     0,     0,
       0,    34,    35,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   181,   182,   183,   184,     0,     0,     0,     0,
     265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
       0,   377,   378,   379,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,     0,     0,
     180,     0,     0,     0,     0,     0,     0,     0,     0,   266,
     267,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   181,   182,   183,   184,
     180,     0,     0,     0,   550,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,   187,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,   184,
       0,     0,     0,     0,    33,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,   187,     0,     0,     0,
       0,     0,    49,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,   180,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     181,   182,   183,   184,     7,     0,     0,     0,   652,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
     187,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,    28,    29,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   117,     0,     0,     0,     0,     0,
      44,     0,     0,     0,     0,     0,    49,     0,     0,   189,
     190,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,     0,     0,     0,     0,   180,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,   181,   182,   183,   184,   316,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   117,     0,
       0,     0,     0,     0,   187,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   181,   182,   317,   318,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   319,     0,     0,     0,     0,     0,
      49,     0,     0,   189,   190,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,     0,     0,
       0,     0,   180,     0,     0,     0,     0,     0,     0,     0,
       0,   266,   267,   320,   321,   322,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   181,   182,
     183,   184,   127,     0,     0,     0,   265,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,   316,     0,   128,   129,
     130,   131,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,     0,
       0,     0,   181,   182,   317,   318,   373,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   319,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,   129,   374,   375,     0,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   376,     0,     0,     0,     0,     0,     0,     0,
       0,   320,   321,   322,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   377,   378,   379,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   595,   596,     0,     0,
       0,     0,     0,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   597,
       0,   489,     0,     0,     0,   598,   599,   600,   601,   602,
       0,   498,   499,   500,   501,   502,   503,   504,   505,   506
};

static const yytype_int16 yycheck[] =
{
       4,     5,     3,    92,     3,    41,   151,     3,    36,    41,
     106,   108,   268,   177,   739,   594,   409,   677,   722,   524,
       4,     5,     3,    95,   177,   339,   550,    31,     3,   263,
     607,   263,   235,   178,    91,    97,    98,    99,   251,    43,
      39,    91,    41,    41,   290,    49,    30,    31,     3,    30,
     952,   965,   298,    91,    91,   268,   612,   290,    39,    95,
     206,    42,    43,   290,    91,   298,    41,     5,     6,     7,
     813,   298,   648,   649,     5,     6,     7,    91,   175,   176,
       5,     6,     7,   140,    58,   331,  1000,     4,   234,   991,
     140,    95,     4,     0,    91,   132,    95,   135,   331,    95,
    1002,    91,   140,   104,   331,   104,   131,   106,   106,    42,
     135,   110,   257,   140,    95,   948,    90,    50,   117,    91,
      95,   135,   275,   104,   867,   106,   140,   273,   652,    91,
     635,   106,    49,   876,    51,   110,   117,    58,   863,    51,
      95,   131,   132,   140,    91,   135,   392,   137,   131,   982,
     140,   155,   156,   157,    91,   154,   252,   246,   154,   392,
     132,   144,   145,   719,   367,   392,   170,   171,   172,   173,
     132,   404,   748,   386,   175,   176,   177,    10,   275,   154,
     132,   185,   186,   739,   188,   247,   248,   171,   172,   173,
     424,   263,   424,   140,    91,   867,   132,   590,   136,   154,
      91,    91,   779,   140,   876,   136,   139,   188,   131,   210,
     619,   136,   132,   214,   215,   138,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     639,    91,   546,   132,   235,    91,   240,   241,   135,   243,
      42,   650,   132,   140,   904,   949,   391,   823,    50,   140,
     251,    91,   251,   252,   252,    91,   240,   241,   242,   243,
     816,    91,   263,   416,   263,    91,    91,   268,   132,   268,
     251,    92,    93,   682,   275,   135,   685,   252,   857,   135,
     140,    91,   263,    91,   140,   289,   131,   268,   132,   865,
      91,   868,    91,   138,   132,   296,   280,   281,   282,   135,
     140,   305,   306,   307,   140,   135,   310,   863,     9,   132,
     140,   132,    91,   385,   140,   140,    91,   550,   390,   142,
     897,   714,     9,   132,   325,    91,   633,   131,   144,   145,
     140,   638,   140,   142,   138,     9,    37,    38,   132,   140,
     586,   140,   343,   344,   345,   490,   132,   348,     3,     4,
      37,    38,   497,   586,    55,   561,   144,   145,   592,   586,
     592,   140,   132,    37,    38,   140,   367,   923,    55,   948,
     583,   132,   517,   132,   140,   132,   131,   623,   624,   625,
     135,    55,   137,     9,   295,    40,   390,    91,   132,   300,
     623,   624,   625,    94,    95,    96,   623,   624,   625,   792,
       3,     4,   132,   982,   132,   386,   132,    94,    95,    96,
     131,    37,    38,   132,   135,   416,   137,    43,   132,   652,
      94,    95,    96,   424,   132,   424,   132,   131,   132,    55,
      42,   135,   290,   137,     3,     4,   140,    40,   847,   140,
     298,   131,   132,   424,    91,   135,    49,   137,   135,   929,
     859,     9,   861,   131,   660,   661,   131,   866,   664,   665,
     666,   667,   668,   669,   670,   671,   672,   673,    94,    95,
      96,    40,   131,   331,   825,   826,   140,    35,    36,    37,
      38,   645,   135,   131,   648,   649,    91,   967,   968,   141,
     970,    49,    91,   973,   728,   888,   728,    55,   131,   132,
     140,   131,   135,   131,   137,   783,   784,   131,   132,   787,
     538,   135,    91,   137,   518,   995,   996,   997,   131,    91,
     135,    42,   135,   524,   137,   131,   131,   132,   132,   135,
     135,   137,   137,    91,   392,   140,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   131,   131,   132,   131,   761,   135,    10,   137,   131,
     132,   140,   561,   135,    91,   137,   131,   132,   140,   132,
     135,   139,   137,   574,   131,   132,   142,   135,   135,   137,
     137,   132,   137,   135,   748,   132,   561,   588,   131,   131,
     131,   592,    91,   592,   131,   132,   131,   131,   135,   845,
     137,   131,   135,   584,   131,   132,   131,   131,   135,   138,
     137,   133,   845,   140,   133,   131,   132,   618,   845,   135,
     138,   137,   626,   627,   628,   131,   132,   883,   138,   135,
     775,   137,   131,   132,   635,   138,   135,   138,   137,   131,
     132,   140,   138,   135,   645,   137,   131,   648,   649,   131,
     884,   748,   884,   135,   138,   137,   132,   656,   656,   823,
     138,   660,   661,   138,   138,   664,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   679,   131,   132,   536,   935,
     135,   656,   137,   131,   138,   660,   661,   138,   138,   664,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   131,
     132,   865,   138,   135,   138,   137,   952,   131,   132,   138,
     131,   135,   131,   137,   776,   133,   131,   132,   135,   952,
     135,   135,   137,   136,   135,   952,   131,   728,   586,   728,
     135,   735,   137,   131,   132,   138,   594,   135,   139,   137,
     131,   131,   131,    49,   990,   991,   141,   748,   133,   136,
     138,   133,   138,    91,   612,   138,  1002,   990,   991,   758,
     758,    43,   761,   990,   991,   623,   624,   625,   137,  1002,
     142,   142,   133,   143,    16,  1002,   142,   813,   142,   133,
     138,   813,   871,   758,   873,   813,   761,   136,   884,   136,
     131,   133,   138,   132,   137,   132,   132,   132,   143,   143,
     133,   133,   133,   133,   803,   803,   131,   133,    11,   133,
     133,   133,   813,   133,   813,   877,   878,   813,   133,   964,
     133,   133,   823,   133,   133,   143,   133,   138,   803,   133,
     138,   133,   133,   138,    11,   138,   133,   131,   813,   867,
     876,   139,   138,   143,   848,   133,   133,   133,   133,   133,
     939,   735,   133,   133,   131,   131,   813,   932,   743,   813,
     813,   719,    95,   906,   865,   924,   867,   251,   867,   848,
     962,   933,   934,   813,   553,   876,   960,   876,   940,   941,
     949,   739,   883,   884,   883,   884,   884,     9,   749,   110,
     109,   813,   867,   176,   956,   856,    -1,   237,   786,    -1,
      -1,   876,   883,    -1,    -1,    -1,    -1,    -1,    -1,   884,
      -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,   927,   928,   929,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,   935,    -1,   935,    -1,    -1,    -1,
      -1,    -1,    -1,   927,   928,   929,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   935,    -1,    -1,    -1,   816,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,   971,   972,   973,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   845,    35,    36,
      37,    38,    -1,    -1,    -1,   853,   854,   855,   856,   857,
     858,    -1,    -1,    -1,    -1,   863,    -1,    -1,    55,    -1,
     132,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   144,   145,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,   923,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     948,    -1,    -1,    -1,   952,    -1,    -1,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   982,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   990,   991,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1002,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    -1,    47,    -1,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,
      -1,   134,   135,   136,   137,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    -1,    47,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,
     132,    -1,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    -1,    47,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     131,   132,   133,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    -1,    47,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   131,   132,   133,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    -1,    47,    -1,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   131,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,   133,   134,   135,    -1,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    -1,
      47,    -1,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,    -1,
     137,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      -1,    47,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,
      -1,   137,   138,   139,   140,   141,   142,    -1,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    47,    -1,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    -1,    59,    60,    -1,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    -1,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    -1,    47,    -1,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    -1,    59,    60,    -1,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    -1,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,    -1,
     144,   145,   146,   147,   148,   149,   150,   151,   152,   153,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    47,    -1,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    -1,    59,    60,    -1,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    45,    -1,    47,    -1,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    -1,    59,    60,    -1,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,   133,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152,   153,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    47,    -1,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    -1,    59,    60,
      -1,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    -1,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   132,    -1,   134,   135,    -1,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    47,    -1,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    -1,    59,
      60,    -1,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      -1,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   132,    -1,   134,   135,    -1,   137,   138,   139,
     140,   141,   142,    -1,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    47,    -1,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    -1,
      59,    60,    -1,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    -1,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    47,
      -1,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      -1,    59,    60,    -1,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    -1,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,
      -1,    -1,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      47,    -1,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,     9,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    -1,   134,   135,    55,
     137,    -1,    -1,   140,    -1,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,   144,   145,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    -1,    54,    55,    56,
      57,    58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
     117,   118,   119,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,     3,     4,   134,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    -1,    47,
      48,    49,    -1,    51,    -1,    -1,    -1,    55,    56,    57,
      -1,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   134,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   134,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    -1,    44,    45,    -1,    47,    48,    49,    -1,    51,
      -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,    61,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   134,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,     9,   131,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    91,
       9,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,     9,   135,    -1,   137,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,   135,    -1,    -1,    55,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,     9,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,     9,    -1,    -1,    -1,   135,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,   134,    55,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,     9,    -1,    91,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,   134,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   134,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   132,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    44,
      45,    -1,    47,    48,    49,    -1,    51,    -1,    -1,    -1,
      55,    56,    57,    -1,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    44,    45,    -1,    -1,    -1,
      49,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,    58,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
       3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    44,    45,    -1,    -1,    -1,    49,    -1,    51,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    -1,    -1,    44,    45,     9,
      -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,     5,     6,     7,    -1,     9,    -1,    -1,    49,
      -1,    51,    -1,    53,    91,    55,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    91,    55,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,     9,    -1,    -1,    -1,
      -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    35,    36,    37,    38,
       9,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      35,    36,    37,    38,     9,    -1,    -1,    -1,    43,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      55,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,    35,    36,    37,    38,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    35,    36,
      37,    38,     9,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    35,    36,    37,    38,     9,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    59,    60,    -1,    -1,
      -1,    -1,    -1,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,
      -1,   134,    -1,    -1,    -1,   138,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   155,     0,   156,     3,     4,     8,     9,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    42,    43,    44,    45,    46,    47,    48,    49,
      51,    52,    53,    54,    55,    56,    57,    58,    61,    91,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   131,   157,   158,   159,
     161,   162,   173,   182,   185,   186,   201,   202,   206,   207,
     208,   253,   282,   283,   284,   285,   286,   287,   288,   289,
     291,   292,   295,   296,   297,   298,   302,    49,   135,   282,
     283,   292,   294,   295,   297,   294,   297,     9,    35,    36,
      37,    38,    55,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   175,   283,
     297,   135,   294,   297,   209,     3,     4,    40,    49,   186,
       9,    37,    38,    55,    94,    95,    96,   140,   283,   292,
     290,     3,     4,    40,    58,   162,   173,   287,   135,   283,
       9,    35,    36,    37,    38,    51,    53,    55,    91,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   283,   294,    58,    10,   256,   294,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   144,   145,   255,   258,   259,   299,   300,   301,   255,
       3,     4,    39,    40,    56,    57,   162,   201,   205,   208,
     283,   284,   286,   292,   294,   295,   131,   135,   223,   223,
     223,   223,   131,    91,   140,    43,    92,    93,   203,   212,
     214,   218,   224,   254,   263,   266,   273,   282,   283,   292,
       3,     4,    40,   283,   285,   287,   299,   291,   289,    91,
     351,    91,   131,   164,   131,   163,   135,   174,   351,   131,
     165,   284,   294,   294,   294,     3,     4,    40,   141,   187,
      91,   294,   294,   294,   294,   131,     9,    37,    38,    55,
      94,    95,    96,   249,   282,   299,   249,   183,   263,   273,
     282,   351,   160,   294,   294,   283,    91,   131,   256,   135,
     131,   138,   282,   304,   307,   308,   282,   282,   312,   282,
     282,   282,   282,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,    42,   131,   256,   254,   260,   144,   301,
     131,   294,   294,     9,    37,    38,    55,    94,    95,    96,
     294,    10,   255,   223,   223,    91,   203,   212,   282,   292,
      91,   132,   351,   134,   208,   229,   231,   237,   239,   282,
     283,   292,   294,   293,   215,   212,   218,   283,   213,   219,
     256,   139,   250,   251,   263,   271,   299,   274,   275,   276,
     132,    91,    91,   132,    91,   294,     3,     4,     5,     6,
       7,     8,    10,    11,    12,    13,    14,    15,    16,    39,
      40,    41,    42,    43,    47,    49,    50,    51,    52,    53,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   131,   132,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   296,   327,
     328,   329,   353,   354,   355,   356,   357,   358,   137,   169,
     169,   176,   177,   282,   135,   136,   169,   132,   131,   131,
     131,   294,   294,   294,   188,   190,   191,   193,   195,   294,
     131,   282,   131,   131,   132,   136,   135,   131,   131,    91,
      43,   131,   155,   257,   138,   282,   282,   282,   138,   138,
     282,   138,   138,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   133,   133,   138,   254,   131,   131,   131,   131,
     208,   212,   283,    91,   134,   208,   351,   136,   240,   230,
     238,   132,    91,   132,   337,    59,    60,   132,   138,   139,
     140,   141,   142,   326,   327,    91,    42,    50,   139,   220,
     220,   131,   252,   133,   263,   277,   279,   225,   227,   226,
     229,   237,   283,   351,   351,   351,     5,     6,     7,   170,
     171,   294,   135,   135,   136,   138,   139,   176,   135,   210,
     131,   131,   131,   141,   138,   296,     4,    51,   197,   186,
     184,   155,    43,   326,   136,   258,   303,   138,   133,   133,
     309,   311,   138,   288,   315,   317,   319,   321,   316,   318,
     320,   322,   323,   324,   282,   212,   283,   133,   282,   137,
     234,   220,   232,   229,   237,   233,    91,    92,    93,   132,
     135,   137,   138,   139,   140,   141,   142,   153,   296,   327,
     328,   329,   332,   339,   340,   341,   343,   345,   349,   142,
     142,   133,   143,   216,   222,   357,    16,   140,   141,   331,
     332,   334,   264,   142,   242,   243,   282,   242,    91,   136,
     143,   133,   294,   294,   294,   138,   166,   166,   176,   178,
     136,   166,   242,   189,    92,    93,   132,   261,   265,   272,
     273,   261,   261,   242,   136,   326,   131,   287,   305,   288,
     288,   313,   133,   288,   288,   288,   288,   288,   288,   288,
     288,   288,   288,   138,   325,   132,   234,   132,   236,   294,
     242,   242,   347,   348,   346,   350,   342,   344,   143,   143,
     132,   220,   221,   334,   132,   268,   275,   278,   133,    58,
      90,   244,   246,   247,   132,   133,   229,   237,   170,     5,
       6,     7,   136,   167,   172,   136,   331,   136,   133,   188,
     192,   261,   270,   299,   274,   194,   196,   133,   131,   133,
     287,   310,   133,   288,   133,   133,   133,   133,   133,   133,
     133,   133,   138,   138,   133,   351,   223,   241,   138,   235,
     357,   133,   133,   333,   333,   333,   338,   337,   333,   217,
     220,   269,   280,   281,   138,   287,   228,    46,   130,   131,
     161,   162,   168,   173,   182,   185,   186,   204,   207,   229,
     237,   253,   282,   284,   286,   292,   302,   137,   211,   139,
     198,   199,   133,   261,   198,   198,    42,    50,   267,   306,
     138,   314,    11,    11,   133,   242,   236,   133,   138,   139,
     334,   335,   133,   133,   131,   136,   335,   336,   141,   143,
     242,   242,   143,   331,   245,   261,   242,     3,     4,    40,
     179,   180,   186,   204,   207,   284,   357,   255,   255,   162,
     204,   207,   223,   223,   218,   229,   237,   220,   200,   262,
     357,   133,   352,   133,   133,   133,   234,   133,   235,   133,
     133,   244,   248,   133,   135,   137,   181,   294,   294,   181,
     294,     3,     4,    40,   180,   223,   223,   131,   131,   255,
     223,   223,   330,   339,   268,   133,   354,   223,   267,   250,
     351,   352,   181,   181,   181,   294,   294,   294,   131,   339,
     136,   131,   352,   131
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
#line 1345 "vtkParse.y"
    {
      startSig();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 14:
#line 1363 "vtkParse.y"
    { output_function(); }
    break;

  case 15:
#line 1364 "vtkParse.y"
    { output_function(); }
    break;

  case 16:
#line 1365 "vtkParse.y"
    { reject_function(); }
    break;

  case 17:
#line 1366 "vtkParse.y"
    { output_function(); }
    break;

  case 18:
#line 1367 "vtkParse.y"
    { reject_function(); }
    break;

  case 19:
#line 1368 "vtkParse.y"
    { output_function(); }
    break;

  case 22:
#line 1372 "vtkParse.y"
    { reject_function(); }
    break;

  case 23:
#line 1374 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:
#line 1390 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 27:
#line 1391 "vtkParse.y"
    { popNamespace(); }
    break;

  case 41:
#line 1413 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 42:
#line 1414 "vtkParse.y"
    { end_class(); }
    break;

  case 43:
#line 1415 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 44:
#line 1416 "vtkParse.y"
    { end_class(); }
    break;

  case 46:
#line 1418 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 2); }
    break;

  case 47:
#line 1419 "vtkParse.y"
    { end_class(); }
    break;

  case 50:
#line 1424 "vtkParse.y"
    {
      startSig();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
    break;

  case 62:
#line 1443 "vtkParse.y"
    { output_function(); }
    break;

  case 63:
#line 1445 "vtkParse.y"
    {
      ClassInfo *tmpc = currentClass;
      currentClass = NULL;
      output_function();
      currentClass = tmpc;
    }
    break;

  case 64:
#line 1451 "vtkParse.y"
    { output_function(); }
    break;

  case 65:
#line 1452 "vtkParse.y"
    { output_function(); }
    break;

  case 66:
#line 1454 "vtkParse.y"
    {
      ClassInfo *tmpc = currentClass;
      currentClass = NULL;
      output_function();
      currentClass = tmpc;
    }
    break;

  case 67:
#line 1460 "vtkParse.y"
    { output_function(); }
    break;

  case 78:
#line 1476 "vtkParse.y"
    {
      vtkParse_AddStringToArray(&currentClass->SuperClasses,
                                &currentClass->NumberOfSuperClasses,
                                vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 79:
#line 1483 "vtkParse.y"
    { access_level = VTK_ACCESS_PUBLIC; }
    break;

  case 80:
#line 1484 "vtkParse.y"
    { access_level = VTK_ACCESS_PRIVATE; }
    break;

  case 81:
#line 1485 "vtkParse.y"
    { access_level = VTK_ACCESS_PROTECTED; }
    break;

  case 82:
#line 1496 "vtkParse.y"
    { start_enum((yyvsp[(2) - (2)].str)); }
    break;

  case 83:
#line 1496 "vtkParse.y"
    { end_enum(); }
    break;

  case 84:
#line 1497 "vtkParse.y"
    { start_enum(NULL); }
    break;

  case 85:
#line 1497 "vtkParse.y"
    { end_enum(); }
    break;

  case 89:
#line 1504 "vtkParse.y"
    { add_enum((yyvsp[(1) - (1)].str), NULL); }
    break;

  case 90:
#line 1505 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 91:
#line 1506 "vtkParse.y"
    { chopSig(); add_enum((yyvsp[(1) - (4)].str), copySig()); }
    break;

  case 100:
#line 1532 "vtkParse.y"
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

  case 105:
#line 1560 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 106:
#line 1562 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; postSig(")"); popFunction(); }
    break;

  case 107:
#line 1570 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 108:
#line 1571 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 0); }
    break;

  case 109:
#line 1572 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 110:
#line 1574 "vtkParse.y"
    { add_using(vtkstrcat3((yyvsp[(2) - (6)].str), "operator", (yyvsp[(5) - (6)].str)), 0); }
    break;

  case 111:
#line 1576 "vtkParse.y"
    { add_using(vtkstrcat4("::", (yyvsp[(3) - (7)].str), "operator", (yyvsp[(6) - (7)].str)), 0); }
    break;

  case 112:
#line 1585 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 113:
#line 1587 "vtkParse.y"
    { postSig("template<"); clearTypeId(); startTemplate(); }
    break;

  case 114:
#line 1589 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
    }
    break;

  case 116:
#line 1598 "vtkParse.y"
    { chopSig(); postSig(", "); clearTypeId(); }
    break;

  case 118:
#line 1602 "vtkParse.y"
    { markSig(); }
    break;

  case 119:
#line 1604 "vtkParse.y"
    {
      ValueInfo val;
      TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
      vtkParse_InitTemplateArg(arg);
      vtkParse_InitValue(&val);
      handle_complex_type(&val, (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig());
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
    break;

  case 121:
#line 1622 "vtkParse.y"
    { markSig(); }
    break;

  case 122:
#line 1624 "vtkParse.y"
    {
      ValueInfo val;
      TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
      vtkParse_InitTemplateArg(arg);
      vtkParse_InitValue(&val);
      handle_complex_type(&val, 0, (yyvsp[(3) - (3)].integer), copySig());
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
    break;

  case 124:
#line 1642 "vtkParse.y"
    { pushTemplate(); markSig(); }
    break;

  case 125:
#line 1644 "vtkParse.y"
    {
      ValueInfo val;
      TemplateArgs *newTemplate = currentTemplate;
      TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
      vtkParse_InitTemplateArg(arg);
      popTemplate();
      arg->Template = newTemplate;
      vtkParse_InitValue(&val);
      handle_complex_type(&val, 0, (yyvsp[(3) - (3)].integer), copySig());
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
    break;

  case 127:
#line 1667 "vtkParse.y"
    { postSig("class "); }
    break;

  case 128:
#line 1668 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 131:
#line 1674 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 132:
#line 1676 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfArguments-1;
      TemplateArg *arg = currentTemplate->Arguments[i];
      chopSig();
      arg->Value = vtkstrdup(copySig());
    }
    break;

  case 147:
#line 1709 "vtkParse.y"
    {
      if (((yyvsp[(1) - (2)].integer) & VTK_PARSE_VIRTUAL) != 0)
        {
        currentFunction->IsVirtual = 1;
        }
    }
    break;

  case 148:
#line 1716 "vtkParse.y"
    {
      if (((yyvsp[(1) - (2)].integer) & VTK_PARSE_EXPLICIT) != 0)
        {
        currentFunction->IsExplicit = 1;
        }
    }
    break;

  case 160:
#line 1741 "vtkParse.y"
    { postSig("operator "); }
    break;

  case 161:
#line 1742 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 162:
#line 1746 "vtkParse.y"
    { postSig(")"); }
    break;

  case 163:
#line 1747 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(3) - (9)].integer);
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 164:
#line 1758 "vtkParse.y"
    { postSig(")"); }
    break;

  case 165:
#line 1759 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 166:
#line 1768 "vtkParse.y"
    { postSig("operator"); }
    break;

  case 167:
#line 1768 "vtkParse.y"
    { postSig((yyvsp[(3) - (3)].str)); }
    break;

  case 168:
#line 1769 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 169:
#line 1774 "vtkParse.y"
    { (yyval.str) = (yyvsp[(3) - (8)].str); }
    break;

  case 170:
#line 1777 "vtkParse.y"
    { postSig(")"); }
    break;

  case 171:
#line 1778 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 173:
#line 1787 "vtkParse.y"
    { postSig(" throw ()"); }
    break;

  case 175:
#line 1788 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 177:
#line 1790 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 180:
#line 1805 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 181:
#line 1809 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 182:
#line 1811 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 183:
#line 1815 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 184:
#line 1816 "vtkParse.y"
    { markSig(); postSig("::"); }
    break;

  case 185:
#line 1817 "vtkParse.y"
    {
      postSig("(");
      (yyval.str) = vtkstrcat((yyvsp[(1) - (5)].str), copySig());
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
      (yyval.str) = vtkstrcat((yyvsp[(1) - (5)].str), copySig());
    }
    break;

  case 186:
#line 1823 "vtkParse.y"
    { (yyval.str) = (yyvsp[(6) - (8)].str); }
    break;

  case 187:
#line 1826 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 188:
#line 1827 "vtkParse.y"
    {
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 189:
#line 1834 "vtkParse.y"
    { postSig("("); }
    break;

  case 191:
#line 1835 "vtkParse.y"
    { postSig("("); }
    break;

  case 198:
#line 1847 "vtkParse.y"
    { postSig(")"); }
    break;

  case 199:
#line 1848 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 200:
#line 1857 "vtkParse.y"
    { postSig("~"); }
    break;

  case 201:
#line 1857 "vtkParse.y"
    { postSig("("); }
    break;

  case 202:
#line 1858 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~", (yyvsp[(3) - (7)].str)); }
    break;

  case 204:
#line 1865 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 206:
#line 1868 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 207:
#line 1869 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 208:
#line 1870 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 210:
#line 1873 "vtkParse.y"
    { markSig(); }
    break;

  case 211:
#line 1875 "vtkParse.y"
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

  case 212:
#line 1897 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments-1;
      if (getVarValue())
        {
        currentFunction->Arguments[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 213:
#line 1905 "vtkParse.y"
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

  case 216:
#line 1933 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 218:
#line 1937 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 219:
#line 1938 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 223:
#line 1951 "vtkParse.y"
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

  case 227:
#line 2005 "vtkParse.y"
    { postSig(", "); }
    break;

  case 229:
#line 2008 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 231:
#line 2010 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 233:
#line 2014 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 234:
#line 2015 "vtkParse.y"
    { postSig(")"); }
    break;

  case 235:
#line 2017 "vtkParse.y"
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
#line 2034 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 237:
#line 2035 "vtkParse.y"
    { postSig(")"); }
    break;

  case 238:
#line 2036 "vtkParse.y"
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
#line 2052 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 240:
#line 2053 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 241:
#line 2055 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 242:
#line 2059 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 243:
#line 2061 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 245:
#line 2065 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 247:
#line 2068 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 248:
#line 2069 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 249:
#line 2070 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      postSig(")");
      popFunction();
    }
    break;

  case 250:
#line 2075 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 251:
#line 2078 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 252:
#line 2080 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 253:
#line 2083 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 254:
#line 2085 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 255:
#line 2088 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 257:
#line 2092 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 258:
#line 2095 "vtkParse.y"
    { clearArray(); }
    break;

  case 260:
#line 2099 "vtkParse.y"
    { clearArray(); }
    break;

  case 262:
#line 2102 "vtkParse.y"
    { postSig("["); }
    break;

  case 263:
#line 2102 "vtkParse.y"
    { postSig("]"); }
    break;

  case 266:
#line 2108 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 267:
#line 2109 "vtkParse.y"
    { markSig(); }
    break;

  case 268:
#line 2109 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 269:
#line 2116 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 270:
#line 2117 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 271:
#line 2118 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 272:
#line 2119 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 273:
#line 2120 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 274:
#line 2121 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 275:
#line 2122 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 276:
#line 2123 "vtkParse.y"
    { (yyval.str) = "size_t"; }
    break;

  case 277:
#line 2124 "vtkParse.y"
    { (yyval.str) = "ssize_t"; }
    break;

  case 278:
#line 2125 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; }
    break;

  case 279:
#line 2126 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; }
    break;

  case 280:
#line 2127 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; }
    break;

  case 281:
#line 2128 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; }
    break;

  case 282:
#line 2129 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; }
    break;

  case 283:
#line 2130 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; }
    break;

  case 284:
#line 2131 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; }
    break;

  case 285:
#line 2132 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; }
    break;

  case 286:
#line 2133 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; }
    break;

  case 287:
#line 2134 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; }
    break;

  case 288:
#line 2135 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; }
    break;

  case 289:
#line 2136 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; }
    break;

  case 297:
#line 2157 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(1) - (1)].integer);
      setStorageType((yyval.integer));
    }
    break;

  case 298:
#line 2162 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));
    }
    break;

  case 299:
#line 2168 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 300:
#line 2169 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 301:
#line 2170 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 302:
#line 2171 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 303:
#line 2172 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 304:
#line 2173 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 305:
#line 2174 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 306:
#line 2177 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 307:
#line 2178 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 308:
#line 2181 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 309:
#line 2182 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 310:
#line 2185 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 311:
#line 2186 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 312:
#line 2187 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 313:
#line 2190 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 314:
#line 2192 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 315:
#line 2194 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 316:
#line 2195 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 317:
#line 2196 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 318:
#line 2197 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 319:
#line 2198 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 320:
#line 2199 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 321:
#line 2200 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 322:
#line 2203 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 323:
#line 2206 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 324:
#line 2208 "vtkParse.y"
    {
      chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();
    }
    break;

  case 328:
#line 2220 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), "::", (yyvsp[(3) - (3)].str));
      preScopeSig((yyvsp[(1) - (3)].str));
    }
    break;

  case 329:
#line 2225 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), "::", (yyvsp[(3) - (3)].str));
      preScopeSig("");
    }
    break;

  case 330:
#line 2230 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat3((yyvsp[(1) - (4)].str), "::", (yyvsp[(4) - (4)].str));
      preScopeSig("");
    }
    break;

  case 331:
#line 2235 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat("::", (yyvsp[(2) - (2)].str));
      preScopeSig("");
    }
    break;

  case 332:
#line 2241 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 333:
#line 2242 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 334:
#line 2245 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 335:
#line 2246 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 336:
#line 2247 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 337:
#line 2248 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 338:
#line 2249 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 339:
#line 2250 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 340:
#line 2251 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 341:
#line 2252 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 342:
#line 2253 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 343:
#line 2254 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 344:
#line 2255 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 345:
#line 2256 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 346:
#line 2257 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 347:
#line 2258 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 348:
#line 2259 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 349:
#line 2260 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 350:
#line 2261 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 351:
#line 2262 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 352:
#line 2263 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 353:
#line 2264 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 354:
#line 2265 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 355:
#line 2268 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 356:
#line 2269 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 357:
#line 2270 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 358:
#line 2271 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 359:
#line 2272 "vtkParse.y"
    { typeSig("long double"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 360:
#line 2273 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 361:
#line 2274 "vtkParse.y"
    { typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 362:
#line 2276 "vtkParse.y"
    { typeSig("unsigned char"); (yyval.integer) = VTK_PARSE_UNSIGNED_CHAR; }
    break;

  case 363:
#line 2277 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 364:
#line 2279 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 365:
#line 2280 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 366:
#line 2282 "vtkParse.y"
    { typeSig("unsigned short"); (yyval.integer) = VTK_PARSE_UNSIGNED_SHORT; }
    break;

  case 367:
#line 2283 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 368:
#line 2285 "vtkParse.y"
    { typeSig("unsigned long"); (yyval.integer) = VTK_PARSE_UNSIGNED_LONG; }
    break;

  case 369:
#line 2286 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG; }
    break;

  case 370:
#line 2288 "vtkParse.y"
    {typeSig("unsigned long long");(yyval.integer)=VTK_PARSE_UNSIGNED_LONG_LONG; }
    break;

  case 371:
#line 2289 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 372:
#line 2291 "vtkParse.y"
    { typeSig("unsigned __int64"); (yyval.integer) = VTK_PARSE_UNSIGNED___INT64; }
    break;

  case 373:
#line 2292 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 374:
#line 2293 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT;}
    break;

  case 375:
#line 2313 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 376:
#line 2314 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 377:
#line 2315 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 378:
#line 2320 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 379:
#line 2322 "vtkParse.y"
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

  case 380:
#line 2333 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 381:
#line 2334 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 382:
#line 2341 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 383:
#line 2342 "vtkParse.y"
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

  case 384:
#line 2351 "vtkParse.y"
    {postSig("Get");}
    break;

  case 385:
#line 2352 "vtkParse.y"
    {markSig();}
    break;

  case 386:
#line 2352 "vtkParse.y"
    {swapSig();}
    break;

  case 387:
#line 2353 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(7) - (9)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 388:
#line 2361 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 389:
#line 2362 "vtkParse.y"
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

  case 390:
#line 2371 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 391:
#line 2372 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 392:
#line 2380 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 393:
#line 2380 "vtkParse.y"
    {closeSig();}
    break;

  case 394:
#line 2382 "vtkParse.y"
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

  case 395:
#line 2413 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 396:
#line 2414 "vtkParse.y"
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

  case 397:
#line 2423 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 398:
#line 2424 "vtkParse.y"
    {markSig();}
    break;

  case 399:
#line 2424 "vtkParse.y"
    {swapSig();}
    break;

  case 400:
#line 2425 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 401:
#line 2434 "vtkParse.y"
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

  case 402:
#line 2451 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 403:
#line 2452 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 404:
#line 2456 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 405:
#line 2457 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 406:
#line 2461 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 407:
#line 2462 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 408:
#line 2466 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 409:
#line 2467 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 410:
#line 2471 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 411:
#line 2472 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 412:
#line 2476 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 413:
#line 2477 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 414:
#line 2481 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 415:
#line 2482 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 416:
#line 2486 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 417:
#line 2487 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 418:
#line 2491 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 419:
#line 2493 "vtkParse.y"
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

  case 420:
#line 2508 "vtkParse.y"
    {startSig();}
    break;

  case 421:
#line 2510 "vtkParse.y"
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

  case 422:
#line 2523 "vtkParse.y"
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

  case 423:
#line 2560 "vtkParse.y"
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

  case 424:
#line 2598 "vtkParse.y"
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

  case 427:
#line 2657 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 428:
#line 2658 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 429:
#line 2659 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 430:
#line 2660 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 431:
#line 2661 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 432:
#line 2662 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 433:
#line 2663 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 434:
#line 2664 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 436:
#line 2668 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 437:
#line 2669 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 438:
#line 2670 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 439:
#line 2671 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 440:
#line 2672 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 441:
#line 2673 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 442:
#line 2674 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 443:
#line 2675 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 444:
#line 2676 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 445:
#line 2677 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 446:
#line 2678 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 447:
#line 2679 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 448:
#line 2680 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 449:
#line 2681 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 450:
#line 2682 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 451:
#line 2683 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 452:
#line 2684 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 453:
#line 2685 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 454:
#line 2686 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 455:
#line 2687 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 456:
#line 2688 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 457:
#line 2689 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 458:
#line 2690 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 459:
#line 2691 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 460:
#line 2692 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 461:
#line 2693 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 462:
#line 2694 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 463:
#line 2695 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 464:
#line 2696 "vtkParse.y"
    { (yyval.str) = "&&="; }
    break;

  case 465:
#line 2697 "vtkParse.y"
    { (yyval.str) = "||="; }
    break;

  case 466:
#line 2698 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 467:
#line 2699 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 468:
#line 2700 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 469:
#line 2701 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 470:
#line 2702 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 471:
#line 2703 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 472:
#line 2706 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 473:
#line 2707 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 474:
#line 2708 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 475:
#line 2709 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 476:
#line 2710 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 477:
#line 2711 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 478:
#line 2712 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 479:
#line 2713 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 480:
#line 2714 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 481:
#line 2715 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 482:
#line 2716 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 483:
#line 2717 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 484:
#line 2718 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 485:
#line 2719 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 486:
#line 2720 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 487:
#line 2721 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 488:
#line 2722 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 489:
#line 2723 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 490:
#line 2724 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 491:
#line 2725 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 492:
#line 2726 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 493:
#line 2727 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 508:
#line 2755 "vtkParse.y"
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

  case 509:
#line 2785 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 510:
#line 2785 "vtkParse.y"
    { postSig("."); }
    break;

  case 511:
#line 2786 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 512:
#line 2787 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" ");}
    break;

  case 513:
#line 2788 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 518:
#line 2795 "vtkParse.y"
    { postSig("< "); }
    break;

  case 519:
#line 2796 "vtkParse.y"
    { postSig("> "); }
    break;

  case 521:
#line 2799 "vtkParse.y"
    { postSig("= "); }
    break;

  case 522:
#line 2800 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 524:
#line 2803 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 532:
#line 2817 "vtkParse.y"
    { postSig("= "); }
    break;

  case 533:
#line 2818 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 534:
#line 2822 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 535:
#line 2828 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 536:
#line 2835 "vtkParse.y"
    { postSig("["); }
    break;

  case 537:
#line 2836 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 538:
#line 2839 "vtkParse.y"
    { postSig("("); }
    break;

  case 539:
#line 2840 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 540:
#line 2841 "vtkParse.y"
    {postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 541:
#line 2842 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 542:
#line 2843 "vtkParse.y"
    {postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 543:
#line 2844 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 544:
#line 2847 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 545:
#line 2847 "vtkParse.y"
    { postSig("} "); }
    break;


/* Line 1267 of yacc.c.  */
#line 7399 "vtkParse.tab.c"
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


#line 2880 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void vtkParse_InitTemplateArgs(TemplateArgs *args)
{
  args->NumberOfArguments = 0;
}

void vtkParse_CopyTemplateArgs(TemplateArgs *args, const TemplateArgs *orig)
{
  unsigned long i, n;

  n = orig->NumberOfArguments;
  args->NumberOfArguments = n;
  args->Arguments = (TemplateArg **)malloc(n*sizeof(TemplateArg *));

  for (i = 0; i < n; i++)
    {
    args->Arguments[i] = (TemplateArg *)malloc(sizeof(TemplateArg));
    vtkParse_CopyTemplateArg(args->Arguments[i], orig->Arguments[i]);
    }
}

void vtkParse_InitTemplateArg(TemplateArg *arg)
{
  arg->Template = NULL;
  arg->Type = 0;
  arg->Class = NULL;
  arg->Name = NULL;
  arg->Value = NULL;
  arg->NumberOfDimensions = 0;
  arg->Function = NULL;
}

void vtkParse_CopyTemplateArg(TemplateArg *arg, const TemplateArg *orig)
{
  unsigned long i, n;

  arg->Type = orig->Type;
  arg->Class = orig->Class;
  arg->Name = orig->Name;
  arg->Value = orig->Value;
  arg->Template = NULL;

  if (orig->Template)
    {
    arg->Template = (TemplateArgs *)malloc(sizeof(TemplateArgs));
    vtkParse_CopyTemplateArgs(arg->Template, orig->Template);
    }

  n = orig->NumberOfDimensions;
  arg->NumberOfDimensions = n;
  if (n)
    {
    arg->Dimensions = (const char **)malloc(n*sizeof(char *));
    for (i = 0; i < n; i++)
      {
      arg->Dimensions[i] = orig->Dimensions[i];
      }
    }

  arg->Function = NULL;
  if (orig->Function)
    {
    arg->Function = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    vtkParse_CopyFunction(arg->Function, orig->Function);
    }
}

/* initialize the structure */
void vtkParse_InitFunction(FunctionInfo *func)
{
  unsigned long i;

  func->ItemType = VTK_FUNCTION_INFO;
  func->Access = VTK_ACCESS_PUBLIC;
  func->Name = NULL;
  func->Comment = NULL;
  func->Class = NULL;
  func->Signature = NULL;
  func->Template = NULL;
  func->NumberOfArguments = 0;
  func->ReturnValue = NULL;
  func->Macro = NULL;
  func->SizeHint = NULL;
  func->IsStatic = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsOperator = 0;
  func->IsVariadic = 0;
  func->IsConst = 0;
  func->IsExplicit = 0;

  /* everything below here is legacy information, *
   * maintained only for backwards compatibility  */
  func->ReturnType = VTK_PARSE_VOID;
  func->ReturnClass = NULL;
  func->HaveHint = 0;
  func->HintSize = 0;
  func->IsLegacy = 0;
  func->ArrayFailure = 0;
  func->IsPublic = 0;
  func->IsProtected = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    func->ArgTypes[i] = 0;
    func->ArgClasses[i] = 0;
    func->ArgCounts[i] = 0;
    }
}

void vtkParse_CopyFunction(FunctionInfo *func, const FunctionInfo *orig)
{
  unsigned long i, n;

  func->ItemType = orig->ItemType;
  func->Access = orig->Access;
  func->Name = orig->Name;
  func->Comment = orig->Comment;
  func->Class = orig->Class;
  func->Signature = orig->Signature;
  func->Template = NULL;

  if (orig->Template)
    {
    func->Template = (TemplateArgs *)malloc(sizeof(TemplateArgs));
    vtkParse_CopyTemplateArgs(func->Template, orig->Template);
    }

  n = orig->NumberOfArguments;
  func->NumberOfArguments = n;
  if (n)
    {
    func->Arguments = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      func->Arguments[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(func->Arguments[i], orig->Arguments[i]);
      }
    }

  func->ReturnValue = NULL;
  if (orig->ReturnValue)
    {
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_CopyValue(func->ReturnValue, orig->ReturnValue);
    }

  func->Macro = orig->Macro;
  func->SizeHint = orig->SizeHint;
  func->IsStatic = orig->IsStatic;
  func->IsVirtual = orig->IsVirtual;
  func->IsPureVirtual = orig->IsPureVirtual;
  func->IsOperator = orig->IsOperator;
  func->IsVariadic = orig->IsVariadic;
  func->IsConst = orig->IsConst;
  func->IsExplicit = orig->IsExplicit;

  /* everything below here is legacy information, *
   * maintained only for backwards compatibility  */
  func->ReturnType = orig->ReturnType;
  func->ReturnClass = orig->ReturnClass;
  func->HaveHint = orig->HaveHint;
  func->HintSize = orig->HintSize;
  func->IsLegacy = orig->IsLegacy;
  func->ArrayFailure = orig->ArrayFailure;
  func->IsPublic = orig->IsPublic;
  func->IsProtected = orig->IsProtected;

  for (i = 0; i < MAX_ARGS; i++)
    {
    func->ArgTypes[i] = orig->ArgTypes[i];
    func->ArgClasses[i] = orig->ArgClasses[i];
    func->ArgCounts[i] = orig->ArgCounts[i];
    }
}

/* initialize the structure */
void vtkParse_InitValue(ValueInfo *val)
{
  val->ItemType = VTK_VARIABLE_INFO;
  val->Access = VTK_ACCESS_PUBLIC;
  val->Name = NULL;
  val->Comment = NULL;
  val->Value = NULL;
  val->Type = 0;
  val->Class = NULL;
  val->Count = 0;
  val->CountHint = NULL;
  val->NumberOfDimensions = 0;
  val->Function = NULL;
  val->IsStatic = 0;
  val->IsEnum = 0;
}

void vtkParse_CopyValue(ValueInfo *val, const ValueInfo *orig)
{
  unsigned long i, n;

  val->ItemType = orig->ItemType;
  val->Access = orig->Access;
  val->Name = orig->Name;
  val->Comment = orig->Comment;
  val->Value = orig->Value;
  val->Type = orig->Type;
  val->Class = orig->Class;
  val->Count = orig->Count;
  val->CountHint = orig->CountHint;

  n = orig->NumberOfDimensions;
  val->NumberOfDimensions = n;
  if (n)
    {
    val->Dimensions = (const char **)malloc(n*sizeof(char *));
    for (i = 0; i < n; i++)
      {
      val->Dimensions[i] = orig->Dimensions[i];
      }
    }

  val->Function = NULL;
  if (orig->Function)
    {
    val->Function = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    vtkParse_CopyFunction(val->Function, orig->Function);
    }

  val->IsStatic = orig->IsStatic;
  val->IsEnum = orig->IsEnum;
}

/* initialize the structure */
void vtkParse_InitEnum(EnumInfo *item)
{
  item->ItemType = VTK_ENUM_INFO;
  item->Access = VTK_ACCESS_PUBLIC;
  item->Name = NULL;
  item->Comment = NULL;
}

void vtkParse_CopyEnum(EnumInfo *item, const EnumInfo *orig)
{
  item->ItemType = orig->ItemType;
  item->Access = orig->Access;
  item->Name = orig->Name;
  item->Comment = orig->Comment;
}

/* initialize the structure */
void vtkParse_InitUsing(UsingInfo *item)
{
  item->ItemType = VTK_USING_INFO;
  item->Access = VTK_ACCESS_PUBLIC;
  item->Name = NULL;
  item->Comment = NULL;
  item->Scope = NULL;
}

void vtkParse_CopyUsing(UsingInfo *item, const UsingInfo *orig)
{
  item->ItemType = orig->ItemType;
  item->Access = orig->Access;
  item->Name = orig->Name;
  item->Comment = orig->Comment;
  item->Scope = orig->Scope;
}

/* initialize the structure */
void vtkParse_InitClass(ClassInfo *cls)
{
  cls->ItemType = VTK_CLASS_INFO;
  cls->Access = VTK_ACCESS_PUBLIC;
  cls->Name = NULL;
  cls->Comment = NULL;
  cls->Template = NULL;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfItems = 0;
  cls->NumberOfClasses = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfConstants = 0;
  cls->NumberOfVariables = 0;
  cls->NumberOfEnums = 0;
  cls->NumberOfTypedefs = 0;
  cls->NumberOfUsings = 0;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
}

void vtkParse_CopyClass(ClassInfo *cls, const ClassInfo *orig)
{
  unsigned long i, n;

  cls->ItemType = orig->ItemType;
  cls->Access = orig->Access;
  cls->Name = orig->Name;
  cls->Comment = orig->Comment;
  cls->Template = NULL;

  if (orig->Template)
    {
    cls->Template = (TemplateArgs *)malloc(sizeof(TemplateArgs));
    vtkParse_CopyTemplateArgs(cls->Template, orig->Template);
    }

  n = orig->NumberOfSuperClasses;
  cls->NumberOfSuperClasses = n;
  if (n)
    {
    cls->SuperClasses = (const char **)malloc(n*sizeof(char *));
    for (i = 0; i < n; i++)
      {
      cls->SuperClasses[i] = orig->SuperClasses[i];
      }
    }

  n = orig->NumberOfItems;
  cls->NumberOfItems = n;
  if (n)
    {
    cls->Items = (ItemInfo *)malloc(n*sizeof(ItemInfo));
    for (i = 0; i < n; i++)
      {
      cls->Items[i].Type = orig->Items[i].Type;
      cls->Items[i].Index = orig->Items[i].Index;
      }
    }

  n = orig->NumberOfClasses;
  cls->NumberOfClasses = n;
  if (n)
    {
    cls->Classes = (ClassInfo **)malloc(n*sizeof(ClassInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Classes[i] = (ClassInfo *)malloc(sizeof(ClassInfo));
      vtkParse_CopyClass(cls->Classes[i], orig->Classes[i]);
      }
    }

  n = orig->NumberOfFunctions;
  cls->NumberOfFunctions = n;
  if (n)
    {
    cls->Functions = (FunctionInfo **)malloc(n*sizeof(FunctionInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Functions[i] = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      vtkParse_CopyFunction(cls->Functions[i], orig->Functions[i]);
      }
    }

  n = orig->NumberOfConstants;
  cls->NumberOfConstants = n;
  if (n)
    {
    cls->Constants = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Constants[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(cls->Constants[i], orig->Constants[i]);
      }
    }

  n = orig->NumberOfVariables;
  cls->NumberOfVariables = n;
  if (n)
    {
    cls->Variables = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Variables[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(cls->Variables[i], orig->Variables[i]);
      }
    }

  n = orig->NumberOfEnums;
  cls->NumberOfEnums = n;
  if (n)
    {
    cls->Enums = (EnumInfo **)malloc(n*sizeof(EnumInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Enums[i] = (EnumInfo *)malloc(sizeof(EnumInfo));
      vtkParse_CopyEnum(cls->Enums[i], orig->Enums[i]);
      }
    }

  n = orig->NumberOfTypedefs;
  cls->NumberOfTypedefs = n;
  if (n)
    {
    cls->Typedefs = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Typedefs[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(cls->Typedefs[i], orig->Typedefs[i]);
      }
    }

  n = orig->NumberOfUsings;
  cls->NumberOfUsings = n;
  if (n)
    {
    cls->Usings = (UsingInfo **)malloc(n*sizeof(UsingInfo *));
    for (i = 0; i < n; i++)
      {
      cls->Usings[i] = (UsingInfo *)malloc(sizeof(UsingInfo));
      vtkParse_CopyUsing(cls->Usings[i], orig->Usings[i]);
      }
    }

  cls->IsAbstract = orig->IsAbstract;
  cls->HasDelete = orig->HasDelete;
}


/* initialize the structure */
void vtkParse_InitNamespace(NamespaceInfo *name_info)
{
  /* namespace info */
  name_info->ItemType = VTK_NAMESPACE_INFO;
  name_info->Access = VTK_ACCESS_PUBLIC;
  name_info->Name = NULL;
  name_info->Comment = NULL;
  name_info->NumberOfItems = 0;
  name_info->NumberOfClasses = 0;
  name_info->NumberOfFunctions = 0;
  name_info->NumberOfConstants = 0;
  name_info->NumberOfVariables = 0;
  name_info->NumberOfEnums = 0;
  name_info->NumberOfTypedefs = 0;
  name_info->NumberOfUsings = 0;
  name_info->NumberOfNamespaces = 0;
}

void vtkParse_CopyNamespace(NamespaceInfo *ninfo, const NamespaceInfo *orig)
{
  unsigned long i, n;

  /* namespace info */
  ninfo->ItemType = orig->ItemType;
  ninfo->Access = orig->Access;
  ninfo->Name = orig->Name;
  ninfo->Comment = orig->Comment;

  n = orig->NumberOfItems;
  ninfo->NumberOfItems = n;
  if (n)
    {
    ninfo->Items = (ItemInfo *)malloc(n*sizeof(ItemInfo));
    for (i = 0; i < n; i++)
      {
      ninfo->Items[i].Type = orig->Items[i].Type;
      ninfo->Items[i].Index = orig->Items[i].Index;
      }
    }

  n = orig->NumberOfClasses;
  ninfo->NumberOfClasses = n;
  if (n)
    {
    ninfo->Classes = (ClassInfo **)malloc(n*sizeof(ClassInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Classes[i] = (ClassInfo *)malloc(sizeof(ClassInfo));
      vtkParse_CopyClass(ninfo->Classes[i], orig->Classes[i]);
      }
    }

  n = orig->NumberOfFunctions;
  ninfo->NumberOfFunctions = n;
  if (n)
    {
    ninfo->Functions = (FunctionInfo **)malloc(n*sizeof(FunctionInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Functions[i] = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      vtkParse_CopyFunction(ninfo->Functions[i], orig->Functions[i]);
      }
    }

  n = orig->NumberOfConstants;
  ninfo->NumberOfConstants = n;
  if (n)
    {
    ninfo->Constants = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Constants[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(ninfo->Constants[i], orig->Constants[i]);
      }
    }

  n = orig->NumberOfVariables;
  ninfo->NumberOfVariables = n;
  if (n)
    {
    ninfo->Variables = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Variables[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(ninfo->Variables[i], orig->Variables[i]);
      }
    }

  n = orig->NumberOfEnums;
  ninfo->NumberOfEnums = n;
  if (n)
    {
    ninfo->Enums = (EnumInfo **)malloc(n*sizeof(EnumInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Enums[i] = (EnumInfo *)malloc(sizeof(EnumInfo));
      vtkParse_CopyEnum(ninfo->Enums[i], orig->Enums[i]);
      }
    }

  n = orig->NumberOfTypedefs;
  ninfo->NumberOfTypedefs = n;
  if (n)
    {
    ninfo->Typedefs = (ValueInfo **)malloc(n*sizeof(ValueInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Typedefs[i] = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_CopyValue(ninfo->Typedefs[i], orig->Typedefs[i]);
      }
    }

  n = orig->NumberOfUsings;
  ninfo->NumberOfUsings = n;
  if (n)
    {
    ninfo->Usings = (UsingInfo **)malloc(n*sizeof(UsingInfo *));
    for (i = 0; i < n; i++)
      {
      ninfo->Usings[i] = (UsingInfo *)malloc(sizeof(UsingInfo));
      vtkParse_CopyUsing(ninfo->Usings[i], orig->Usings[i]);
      }
    }
}



void vtkParse_InitFile(FileInfo *file_info)
{
  /* file info */
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;

  file_info->MainClass = NULL;
  file_info->Contents = NULL;
}

void vtkParse_FreeTemplateArgs(TemplateArgs *template_info)
{
  unsigned long j, m;

  m = template_info->NumberOfArguments;
  for (j = 0; j < m; j++)
    {
    if (template_info->Arguments[j]->NumberOfDimensions)
      {
      free((char **)template_info->Arguments[j]->Dimensions);
      }
    if (template_info->Arguments[j]->Function)
      {
      vtkParse_FreeFunction(template_info->Arguments[j]->Function);
      }
    if (template_info->Arguments[j]->Template)
      {
      vtkParse_FreeTemplateArgs(template_info->Arguments[j]->Template);
      }
    free(template_info->Arguments[j]);
    }

  free(template_info);
}

void vtkParse_FreeFunction(FunctionInfo *function_info);

void vtkParse_FreeValue(ValueInfo *value_info)
{
  if (value_info->NumberOfDimensions)
    {
    free((char **)value_info->Dimensions);
    }
  if (value_info->Function)
    {
    vtkParse_FreeFunction(value_info->Function);
    }

  free(value_info);
}

void vtkParse_FreeEnum(EnumInfo *enum_info)
{
  free(enum_info);
}

void vtkParse_FreeUsing(UsingInfo *using_info)
{
  free(using_info);
}

void vtkParse_FreeFunction(FunctionInfo *function_info)
{
  unsigned long j, m;

  if (function_info->Template)
    {
    vtkParse_FreeTemplateArgs(function_info->Template);
    }

  m = function_info->NumberOfArguments;
  for (j = 0; j < m; j++) { vtkParse_FreeValue(function_info->Arguments[j]); }
  if (m > 0) { free(function_info->Arguments); }

  if (function_info->ReturnValue)
    {
    vtkParse_FreeValue(function_info->ReturnValue);
    }

  free(function_info);
}

void vtkParse_FreeClass(ClassInfo *class_info)
{
  unsigned long j, m;

  if (class_info->Template) { vtkParse_FreeTemplateArgs(class_info->Template); }

  m = class_info->NumberOfSuperClasses;
  if (m > 0) { free((char **)class_info->SuperClasses); }

  m = class_info->NumberOfClasses;
  for (j = 0; j < m; j++) { vtkParse_FreeClass(class_info->Classes[j]); }
  if (m > 0) { free(class_info->Classes); }

  m = class_info->NumberOfFunctions;
  for (j = 0; j < m; j++) { vtkParse_FreeFunction(class_info->Functions[j]); }
  if (m > 0) { free(class_info->Functions); }

  m = class_info->NumberOfConstants;
  for (j = 0; j < m; j++) { vtkParse_FreeValue(class_info->Constants[j]); }
  if (m > 0) { free(class_info->Constants); }

  m = class_info->NumberOfVariables;
  for (j = 0; j < m; j++) { vtkParse_FreeValue(class_info->Variables[j]); }
  if (m > 0) { free(class_info->Variables); }

  m = class_info->NumberOfEnums;
  for (j = 0; j < m; j++) { vtkParse_FreeEnum(class_info->Enums[j]); }
  if (m > 0) { free(class_info->Enums); }

  m = class_info->NumberOfTypedefs;
  for (j = 0; j < m; j++) { vtkParse_FreeValue(class_info->Typedefs[j]); }
  if (m > 0) { free(class_info->Typedefs); }

  m = class_info->NumberOfUsings;
  for (j = 0; j < m; j++) { vtkParse_FreeUsing(class_info->Usings[j]); }
  if (m > 0) { free(class_info->Usings); }

  if (class_info->NumberOfItems > 0) { free(class_info->Items); }

  free(class_info);
}

void vtkParse_FreeNamespace(NamespaceInfo *namespace_info)
{
  unsigned long j, m;

  m = namespace_info->NumberOfClasses;
  for (j = 0; j < m; j++) { vtkParse_FreeClass(namespace_info->Classes[j]); }
  if (m > 0) { free(namespace_info->Classes); }

  m = namespace_info->NumberOfFunctions;
  for (j=0; j<m; j++) { vtkParse_FreeFunction(namespace_info->Functions[j]); }
  if (m > 0) { free(namespace_info->Functions); }

  m = namespace_info->NumberOfConstants;
  for (j=0; j<m; j++) { vtkParse_FreeValue(namespace_info->Constants[j]); }
  if (m > 0) { free(namespace_info->Constants); }

  m = namespace_info->NumberOfVariables;
  for (j=0; j<m; j++) { vtkParse_FreeValue(namespace_info->Variables[j]); }
  if (m > 0) { free(namespace_info->Variables); }

  m = namespace_info->NumberOfEnums;
  for (j = 0; j < m; j++) { vtkParse_FreeEnum(namespace_info->Enums[j]); }
  if (m > 0) { free(namespace_info->Enums); }

  m = namespace_info->NumberOfTypedefs;
  for (j = 0; j < m; j++) { vtkParse_FreeValue(namespace_info->Typedefs[j]); }
  if (m > 0) { free(namespace_info->Typedefs); }

  m = namespace_info->NumberOfUsings;
  for (j = 0; j < m; j++) { vtkParse_FreeUsing(namespace_info->Usings[j]); }
  if (m > 0) { free(namespace_info->Usings); }

  m = namespace_info->NumberOfNamespaces;
  for (j=0; j<m; j++) {vtkParse_FreeNamespace(namespace_info->Namespaces[j]);}
  if (m > 0) { free(namespace_info->Namespaces); }

  free(namespace_info);
}

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

/* This method is used for extending dynamic arrays in a progression of
 * powers of two.  If "n" reaches a power of two, then the array size is
 * doubled so that "n" can be safely incremented. */
static void *array_size_check(
  void *arraymem, size_t size, unsigned long n)
{
  /* if empty, alloc for the first time */
  if (n == 0)
    {
    return malloc(size);
    }
  /* if count is power of two, reallocate with double size */
  else if ((n & (n-1)) == 0)
    {
    return realloc(arraymem, (n << 1)*size);
    }

  /* no reallocation, just return the original array */
  return arraymem;
}

/* Utility method to add a pointer to an array */
void vtkParse_AddPointerToArray(
  void *valueArray, unsigned long *count, const void *value)
{
  void **values = *(void ***)valueArray;
  unsigned long n = *count;

  values = (void **)array_size_check(values, sizeof(void *), n);

  values[n++] = (void *)value;
  *count = n;
  *(void ***)valueArray = values;
}

/*
 * There is a lot of repetition here, but all the code is written
 * out explicitly to avoid the use of macros or typecasts.  The
 * use of macros for generic programming makes code harder to debug,
 * and the use of C typecasts for anything but void* and char* breaks
 * the C99 standard.
 */

/* Utility method to add an item to an array */
void vtkParse_AddItemToArray(
  ItemInfo **valueArray, unsigned long *count,
  parse_item_t type, unsigned long idx)
{
  size_t n = *count;
  ItemInfo *values = *valueArray;

  values = (ItemInfo *)array_size_check(values, sizeof(ItemInfo), n);

  values[n].Type = type;
  values[n].Index = idx;
  *count = n+1;
  *valueArray = values;
}

/* Add a ClassInfo to a ClassInfo */
void vtkParse_AddClassToClass(ClassInfo *info, ClassInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfClasses);
  info->Classes = (ClassInfo **)array_size_check(
    info->Classes, sizeof(ClassInfo *), info->NumberOfClasses);
  info->Classes[info->NumberOfClasses++] = item;
}

/* Add a FunctionInfo to a ClassInfo */
void vtkParse_AddFunctionToClass(ClassInfo *info, FunctionInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfFunctions);
  info->Functions = (FunctionInfo **)array_size_check(
    info->Functions, sizeof(FunctionInfo *), info->NumberOfFunctions);
  info->Functions[info->NumberOfFunctions++] = item;
}

/* Add a EnumInfo to a ClassInfo */
void vtkParse_AddEnumToClass(ClassInfo *info, EnumInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfEnums);
  info->Enums = (EnumInfo **)array_size_check(
    info->Enums, sizeof(EnumInfo *), info->NumberOfEnums);
  info->Enums[info->NumberOfEnums++] = item;
}

/* Add a Constant ValueInfo to a ClassInfo */
void vtkParse_AddConstantToClass(ClassInfo *info, ValueInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfConstants);
  info->Constants = (ValueInfo **)array_size_check(
    info->Constants, sizeof(ValueInfo *), info->NumberOfConstants);
  info->Constants[info->NumberOfConstants++] = item;
}

/* Add a Variable ValueInfo to a ClassInfo */
void vtkParse_AddVariableToClass(ClassInfo *info, ValueInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfVariables);
  info->Variables = (ValueInfo **)array_size_check(
    info->Variables, sizeof(ValueInfo *), info->NumberOfVariables);
  info->Variables[info->NumberOfVariables++] = item;
}

/* Add a Typedef ValueInfo to a ClassInfo */
void vtkParse_AddTypedefToClass(ClassInfo *info, ValueInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfTypedefs);
  info->Typedefs = (ValueInfo **)array_size_check(
    info->Typedefs, sizeof(ValueInfo *), info->NumberOfTypedefs);
  info->Typedefs[info->NumberOfTypedefs++] = item;
}

/* Add a UsingInfo to a ClassInfo */
void vtkParse_AddUsingToClass(ClassInfo *info, UsingInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfUsings);
  info->Usings = (UsingInfo **)array_size_check(
    info->Usings, sizeof(UsingInfo *), info->NumberOfUsings);
  info->Usings[info->NumberOfUsings++] = item;
}


/* Add a NamespaceInfo to a NamespaceInfo */
void vtkParse_AddNamespaceToNamespace(NamespaceInfo *info, NamespaceInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfNamespaces);
  info->Namespaces = (NamespaceInfo **)array_size_check(
    info->Namespaces, sizeof(NamespaceInfo *), info->NumberOfNamespaces);
  info->Namespaces[info->NumberOfNamespaces++] = item;
}

/* Add a ClassInfo to a NamespaceInfo */
void vtkParse_AddClassToNamespace(NamespaceInfo *info, ClassInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfClasses);
  info->Classes = (ClassInfo **)array_size_check(
    info->Classes, sizeof(ClassInfo *), info->NumberOfClasses);
  info->Classes[info->NumberOfClasses++] = item;
}

/* Add a FunctionInfo to a NamespaceInfo */
void vtkParse_AddFunctionToNamespace(NamespaceInfo *info, FunctionInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfFunctions);
  info->Functions = (FunctionInfo **)array_size_check(
    info->Functions, sizeof(FunctionInfo *), info->NumberOfFunctions);
  info->Functions[info->NumberOfFunctions++] = item;
}

/* Add a EnumInfo to a NamespaceInfo */
void vtkParse_AddEnumToNamespace(NamespaceInfo *info, EnumInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfEnums);
  info->Enums = (EnumInfo **)array_size_check(
    info->Enums, sizeof(EnumInfo *), info->NumberOfEnums);
  info->Enums[info->NumberOfEnums++] = item;
}

/* Add a Constant ValueInfo to a NamespaceInfo */
void vtkParse_AddConstantToNamespace(NamespaceInfo *info, ValueInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfConstants);
  info->Constants = (ValueInfo **)array_size_check(
    info->Constants, sizeof(ValueInfo *), info->NumberOfConstants);
  info->Constants[info->NumberOfConstants++] = item;
}

/* Add a Variable ValueInfo to a NamespaceInfo */
void vtkParse_AddVariableToNamespace(NamespaceInfo *info, ValueInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfVariables);
  info->Variables = (ValueInfo **)array_size_check(
    info->Variables, sizeof(ValueInfo *), info->NumberOfVariables);
  info->Variables[info->NumberOfVariables++] = item;
}

/* Add a Typedef ValueInfo to a NamespaceInfo */
void vtkParse_AddTypedefToNamespace(NamespaceInfo *info, ValueInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfTypedefs);
  info->Typedefs = (ValueInfo **)array_size_check(
    info->Typedefs, sizeof(ValueInfo *), info->NumberOfTypedefs);
  info->Typedefs[info->NumberOfTypedefs++] = item;
}

/* Add a UsingInfo to a NamespaceInfo */
void vtkParse_AddUsingToNamespace(NamespaceInfo *info, UsingInfo *item)
{
  vtkParse_AddItemToArray(&info->Items, &info->NumberOfItems,
    item->ItemType, info->NumberOfUsings);
  info->Usings = (UsingInfo **)array_size_check(
    info->Usings, sizeof(UsingInfo *), info->NumberOfUsings);
  info->Usings[info->NumberOfUsings++] = item;
}


/* Add a Argument ValueInfo to a FunctionInfo */
void vtkParse_AddArgumentToFunction(FunctionInfo *info, ValueInfo *item)
{
  info->Arguments = (ValueInfo **)array_size_check(
    info->Arguments, sizeof(ValueInfo *), info->NumberOfArguments);
  info->Arguments[info->NumberOfArguments++] = item;
}


/* Add a TemplateArg to a TemplateArgs */
void vtkParse_AddArgumentToTemplate(TemplateArgs *info, TemplateArg *item)
{
  info->Arguments = (TemplateArg **)array_size_check(
    info->Arguments, sizeof(TemplateArg *), info->NumberOfArguments);
  info->Arguments[info->NumberOfArguments++] = item;
}


/* Utility method to add a const char pointer to an array */
void vtkParse_AddStringToArray(
  const char ***valueArray, unsigned long *count, const char *value)
{
  *valueArray = (const char **)array_size_check(
    (char **)*valueArray, sizeof(const char *), *count);

  (*valueArray)[(*count)++] = value;
}

/* duplicate the first n bytes of a string and terminate */
const char *vtkParse_DuplicateString(const char *cp, size_t n)
{
  char *res = NULL;

  res = vtkstralloc(n);
  strncpy(res, cp, n);
  res[n] = '\0';

  return res;
}

/* Add default constructors if they do not already exist */
void vtkParse_AddDefaultConstructors(ClassInfo *cls)
{
  FunctionInfo *func;
  ValueInfo *arg;
  size_t k;
  int i, n;
  int default_constructor = 1;
  int copy_constructor = 1;
  char *tname;
  const char *ccname;

  if (cls == NULL || cls->Name == NULL)
    {
    return;
    }

  n = cls->NumberOfFunctions;
  for (i = 0; i < n; i++)
    {
    func = cls->Functions[i];
    if (func->Name && strcmp(func->Name, cls->Name) == 0)
      {
      default_constructor = 0;

      if (func->NumberOfArguments == 1)
        {
        arg = func->Arguments[0];
        if (arg->Class &&
            strcmp(arg->Class, cls->Name) == 0 &&
            (arg->Type & VTK_PARSE_POINTER_MASK) == 0)
          {
          copy_constructor = 0;
          }
        }
      }
    }

  if (default_constructor)
    {
    func = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    vtkParse_InitFunction(func);
    func->Class = vtkstrdup(cls->Name);
    func->Name = vtkstrdup(cls->Name);
    func->Signature = vtkstrcat(cls->Name, "()");
    vtkParse_AddFunctionToClass(cls, func);
    }

  if (copy_constructor)
    {
    if (cls->Template)
      {
      /* specialize the name */
      n = cls->Template->NumberOfArguments;

      k = strlen(cls->Name) + 2;
      for (i = 0; i < n; i++)
        {
        if (cls->Template->Arguments[i]->Name)
          {
          k += strlen(cls->Template->Arguments[i]->Name) + 2;
          }
        }
      tname = vtkstralloc(k);
      strcpy(tname, cls->Name);
      k = strlen(tname);
      tname[k++] = '<';
      for (i = 0; i < n; i++)
        {
        if (cls->Template->Arguments[i]->Name)
          {
          strcpy(&tname[k], cls->Template->Arguments[i]->Name);
          k += strlen(cls->Template->Arguments[i]->Name);
          }
        if (i+1 < n)
          {
          tname[k++] = ',';
          tname[k++] = ' ';
          }
        }
      tname[k++] = '>';
      tname[k] = '\0';
      ccname = tname;
      }
    else
      {
      ccname = vtkstrdup(cls->Name);
      }

    func = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    vtkParse_InitFunction(func);
    func->Class = vtkstrdup(cls->Name);
    func->Name = vtkstrdup(cls->Name);
    func->Signature = vtkstrcat4(cls->Name, "(const &", ccname, ")");
    arg = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(arg);
    arg->Type = (VTK_PARSE_OBJECT_REF | VTK_PARSE_CONST);
    arg->Class = ccname;
    vtkParse_AddArgumentToFunction(func, arg);
    vtkParse_AddFunctionToClass(cls, func);
    }
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
  vtkParse_FreeNamespace(file_info->Contents);
  file_info->Contents = NULL;
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

/** Simple utility for mapping VTK types to VTK_PARSE types */
unsigned int vtkParse_MapType(int vtktype)
{
  if (vtktype > 0 && vtktype <= VTK_UNICODE_STRING)
    {
    return vtkParseTypeMap[vtktype];
    }
  return 0;
}
