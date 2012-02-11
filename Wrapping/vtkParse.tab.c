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
#define YYLAST   6780

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  154
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  204
/* YYNRULES -- Number of rules.  */
#define YYNRULES  573
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1003

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
     429,   435,   436,   441,   442,   443,   449,   451,   453,   454,
     456,   457,   461,   464,   468,   472,   476,   482,   488,   493,
     498,   505,   512,   515,   519,   521,   523,   526,   529,   532,
     536,   540,   542,   547,   551,   554,   558,   562,   564,   567,
     568,   569,   570,   580,   581,   585,   586,   587,   588,   597,
     598,   602,   603,   604,   609,   610,   614,   617,   621,   623,
     624,   630,   631,   637,   638,   639,   648,   649,   653,   654,
     660,   661,   667,   668,   672,   673,   677,   680,   681,   685,
     686,   687,   695,   696,   697,   700,   702,   704,   705,   710,
     711,   712,   718,   720,   722,   725,   726,   728,   729,   733,
     738,   743,   747,   750,   751,   754,   755,   756,   761,   762,
     765,   766,   770,   773,   774,   780,   783,   784,   790,   792,
     794,   796,   798,   800,   801,   803,   806,   807,   808,   814,
     816,   818,   821,   823,   826,   827,   829,   831,   832,   834,
     835,   838,   839,   845,   846,   848,   849,   850,   853,   855,
     857,   859,   861,   863,   865,   867,   869,   871,   873,   875,
     877,   879,   881,   883,   885,   887,   889,   891,   893,   895,
     897,   899,   901,   903,   905,   907,   909,   911,   914,   916,
     918,   920,   923,   925,   927,   929,   931,   934,   936,   939,
     941,   944,   947,   949,   951,   953,   954,   958,   961,   964,
     967,   970,   972,   973,   979,   981,   983,   985,   989,   993,
     998,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,  1017,
    1019,  1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,
    1039,  1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,
    1059,  1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,
    1079,  1081,  1083,  1085,  1087,  1089,  1092,  1094,  1096,  1099,
    1101,  1104,  1105,  1113,  1114,  1115,  1116,  1126,  1127,  1133,
    1134,  1140,  1141,  1142,  1153,  1154,  1162,  1163,  1164,  1165,
    1175,  1182,  1183,  1191,  1192,  1200,  1201,  1209,  1210,  1218,
    1219,  1227,  1228,  1236,  1237,  1245,  1246,  1254,  1255,  1265,
    1266,  1276,  1281,  1286,  1294,  1295,  1297,  1300,  1303,  1307,
    1311,  1313,  1315,  1317,  1319,  1321,  1323,  1325,  1327,  1329,
    1331,  1333,  1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,
    1351,  1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,
    1371,  1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,
    1391,  1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,
    1411,  1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,
    1431,  1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,
    1451,  1453,  1456,  1458,  1461,  1463,  1465,  1467,  1469,  1471,
    1473,  1475,  1477,  1479,  1481,  1482,  1485,  1487,  1489,  1491,
    1493,  1495,  1497,  1499,  1501,  1502,  1505,  1506,  1509,  1511,
    1513,  1515,  1517,  1519,  1520,  1525,  1526,  1531,  1532,  1537,
    1538,  1543,  1544,  1549,  1550,  1555,  1556,  1559,  1560,  1563,
    1565,  1567,  1569,  1571,  1573,  1575,  1577,  1579,  1581,  1583,
    1585,  1587,  1589,  1591,  1593,  1595,  1597,  1599,  1601,  1605,
    1609,  1613,  1615,  1617
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     155,     0,    -1,    -1,    -1,   155,   156,   157,    -1,   252,
      -1,   173,   254,   131,    -1,   185,    -1,   159,    -1,   158,
      -1,   182,    -1,   162,   254,   131,    -1,   186,   162,   254,
     131,    -1,   161,    -1,   206,   222,    -1,   186,   204,   222,
      -1,   205,   222,    -1,   200,   222,    -1,   201,   222,    -1,
     186,   200,   222,    -1,   301,    -1,   281,   131,    -1,   186,
     293,   132,   350,   133,   233,   222,    -1,   186,   291,    91,
     134,   282,   132,   350,   133,   233,   222,    -1,   131,    -1,
      57,    10,   135,   155,   136,    -1,    -1,    53,   282,   160,
     135,   155,   136,    -1,    53,   135,   350,   136,    -1,     4,
     293,   131,    -1,     3,   293,   131,    -1,    40,   293,   131,
      -1,    46,     4,   293,   131,    -1,    46,     3,   293,   131,
      -1,    46,    40,   293,   131,    -1,   186,     4,   293,   131,
      -1,   186,     3,   293,   131,    -1,   186,    40,   293,   131,
      -1,    46,   186,     4,   293,   131,    -1,    46,   186,     3,
     293,   131,    -1,    46,   186,    40,   293,   131,    -1,    -1,
       4,   293,   163,   169,   135,   166,   136,    -1,    -1,     3,
     293,   164,   169,   135,   166,   136,    -1,     3,   135,   350,
     136,    -1,    -1,    40,   293,   165,   169,   135,   166,   136,
      -1,    40,   135,   350,   136,    -1,    -1,    -1,   166,   167,
     168,    -1,   166,   172,   137,    -1,   252,    -1,   185,    -1,
     182,    -1,   173,   254,   131,    -1,   162,   254,   131,    -1,
     186,   162,   254,   131,    -1,   161,    -1,    46,   180,    -1,
      46,   179,    -1,   206,   222,    -1,    46,   206,   222,    -1,
     186,   206,   222,    -1,   203,   222,    -1,    46,   203,   222,
      -1,   186,   203,   222,    -1,   130,   356,    -1,   301,    -1,
     131,    -1,    -1,   137,   170,    -1,   171,    -1,   171,   138,
     170,    -1,   293,    -1,     6,   293,    -1,     7,   293,    -1,
       5,   293,    -1,     5,    -1,     6,    -1,     7,    -1,    -1,
      39,   282,   174,   135,   176,   136,    -1,    -1,    39,   175,
     135,   176,   136,    -1,    -1,   177,    -1,   177,   138,   176,
      -1,   281,    -1,    -1,   281,   139,   178,   330,    -1,   186,
     180,    -1,     4,   293,   181,    -1,     3,   293,   181,    -1,
       3,   181,    -1,    40,   293,   181,    -1,    40,   181,    -1,
     135,   350,   136,   351,   131,    -1,   137,   351,   131,    -1,
      52,   286,   183,   131,    -1,    52,   162,   248,   131,    -1,
      52,   173,   248,   131,    -1,    52,    58,   131,    -1,   262,
      -1,    -1,   272,   132,   184,   241,   133,   266,    -1,    54,
      53,   293,   131,    -1,    54,    51,   293,   131,    -1,    54,
     293,   131,    -1,    54,   282,    91,    43,   325,   131,    -1,
      54,    91,   282,    91,    43,   325,   131,    -1,    49,   140,
     141,    -1,    -1,    49,   140,   187,   188,   141,    -1,   190,
      -1,    -1,   190,   138,   189,   188,    -1,    -1,    -1,   191,
     295,   260,   192,   197,    -1,    -1,   196,   271,   193,   197,
      -1,    -1,    -1,   194,   186,   271,   195,   197,    -1,     4,
      -1,    51,    -1,    -1,   198,    -1,    -1,   139,   199,   329,
      -1,   283,   217,    -1,   283,   202,   217,    -1,   282,    91,
     236,    -1,   282,    91,   228,    -1,   282,    91,   282,    91,
     236,    -1,   282,    91,   282,    91,   228,    -1,   285,   282,
      91,   236,    -1,   285,   282,    91,   228,    -1,   285,   282,
      91,   282,    91,   236,    -1,   285,   282,    91,   282,    91,
     228,    -1,   282,    91,    -1,   202,   282,    91,    -1,   236,
      -1,   228,    -1,   285,   236,    -1,   285,   228,    -1,   283,
     217,    -1,   282,    91,   207,    -1,   291,    91,   207,    -1,
     207,    -1,   283,   291,    91,   211,    -1,   283,   202,   211,
      -1,   283,   211,    -1,   282,    91,   207,    -1,   283,   202,
     211,    -1,   207,    -1,   283,   211,    -1,    -1,    -1,    -1,
      43,   208,   283,   132,   209,   241,   133,   210,   219,    -1,
      -1,   213,   212,   219,    -1,    -1,    -1,    -1,    43,   214,
     325,   215,   132,   216,   241,   133,    -1,    -1,   223,   218,
     219,    -1,    -1,    -1,    50,   356,   220,   219,    -1,    -1,
      42,   221,   219,    -1,   139,    16,    -1,   135,   350,   136,
      -1,   131,    -1,    -1,   281,   132,   224,   241,   133,    -1,
      -1,   291,   132,   225,   241,   133,    -1,    -1,    -1,   291,
      91,   226,   281,   132,   227,   241,   133,    -1,    -1,   230,
     229,   233,    -1,    -1,   281,   132,   231,   241,   133,    -1,
      -1,   291,   132,   232,   241,   133,    -1,    -1,   137,   235,
     234,    -1,    -1,   138,   235,   234,    -1,   293,   356,    -1,
      -1,   238,   237,   219,    -1,    -1,    -1,   134,   239,   281,
     132,   240,   241,   133,    -1,    -1,    -1,   242,   243,    -1,
      90,    -1,   245,    -1,    -1,   245,   138,   244,   243,    -1,
      -1,    -1,   246,   286,   260,   247,   249,    -1,    58,    -1,
     281,    -1,   298,   281,    -1,    -1,   250,    -1,    -1,   139,
     251,   330,    -1,   283,   253,   255,   131,    -1,    56,    58,
     255,   131,    -1,    58,   255,   131,    -1,   262,   249,    -1,
      -1,   257,   255,    -1,    -1,    -1,   255,   138,   256,   257,
      -1,    -1,   258,   253,    -1,    -1,   298,   259,   253,    -1,
     271,   273,    -1,    -1,   264,   269,   133,   261,   267,    -1,
     272,   273,    -1,    -1,   265,   270,   133,   263,   267,    -1,
     132,    -1,    92,    -1,    93,    -1,    92,    -1,    93,    -1,
      -1,    42,    -1,    50,   356,    -1,    -1,    -1,   132,   268,
     241,   133,   266,    -1,   274,    -1,   260,    -1,   298,   260,
      -1,   262,    -1,   298,   262,    -1,    -1,   272,    -1,   281,
      -1,    -1,   274,    -1,    -1,   275,   276,    -1,    -1,   278,
     142,   277,   279,   143,    -1,    -1,   276,    -1,    -1,    -1,
     280,   330,    -1,    55,    -1,    94,    -1,     9,    -1,    38,
      -1,    37,    -1,    95,    -1,    96,    -1,    36,    -1,    35,
      -1,    99,    -1,   100,    -1,   101,    -1,   102,    -1,   103,
      -1,   104,    -1,   105,    -1,   106,    -1,   107,    -1,   108,
      -1,    97,    -1,    98,    -1,     9,    -1,    94,    -1,    55,
      -1,    38,    -1,    37,    -1,    95,    -1,    96,    -1,   286,
      -1,   285,   286,    -1,    48,    -1,    47,    -1,    57,    -1,
      57,    10,    -1,    61,    -1,    56,    -1,     8,    -1,   284,
      -1,   285,   284,    -1,   287,    -1,   287,   298,    -1,   288,
      -1,   290,   288,    -1,   288,   290,    -1,   295,    -1,   291,
      -1,   294,    -1,    -1,    51,   289,   293,    -1,     4,   296,
      -1,     3,   296,    -1,    40,   296,    -1,    39,   296,    -1,
      42,    -1,    -1,   282,   140,   292,   336,   141,    -1,   281,
      -1,   291,    -1,   294,    -1,   282,    91,   293,    -1,   291,
      91,   293,    -1,    49,   291,    91,   293,    -1,    91,   293,
      -1,   297,    -1,   296,    -1,    95,    -1,    96,    -1,    37,
      -1,    38,    -1,     9,    -1,    55,    -1,    94,    -1,    35,
      -1,    36,    -1,    99,    -1,   100,    -1,   101,    -1,   102,
      -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,   107,
      -1,   108,    -1,    97,    -1,    98,    -1,    33,    -1,    34,
      -1,    17,    -1,    18,    -1,    19,    -1,    30,    -1,    31,
      -1,    32,    -1,    20,    -1,    21,    -1,    22,    -1,    23,
      -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,    28,
      -1,    29,    -1,    45,    -1,    44,    -1,   144,    -1,   299,
     144,    -1,   299,    -1,   300,    -1,   299,   300,    -1,   145,
      -1,   145,    42,    -1,    -1,   109,   132,   281,   138,   302,
     286,   133,    -1,    -1,    -1,    -1,   110,   132,   303,   281,
     138,   304,   286,   305,   133,    -1,    -1,   111,   132,   306,
     281,   133,    -1,    -1,   112,   132,   307,   281,   133,    -1,
      -1,    -1,   113,   132,   281,   138,   308,   287,   309,   138,
     351,   133,    -1,    -1,   114,   132,   281,   138,   310,   287,
     133,    -1,    -1,    -1,    -1,   115,   132,   311,   281,   138,
     312,   287,   313,   133,    -1,   116,   132,   281,   138,   287,
     133,    -1,    -1,   117,   132,   281,   138,   314,   287,   133,
      -1,    -1,   121,   132,   281,   138,   315,   287,   133,    -1,
      -1,   118,   132,   281,   138,   316,   287,   133,    -1,    -1,
     122,   132,   281,   138,   317,   287,   133,    -1,    -1,   119,
     132,   281,   138,   318,   287,   133,    -1,    -1,   123,   132,
     281,   138,   319,   287,   133,    -1,    -1,   120,   132,   281,
     138,   320,   287,   133,    -1,    -1,   124,   132,   281,   138,
     321,   287,   133,    -1,    -1,   125,   132,   281,   138,   322,
     287,   138,    11,   133,    -1,    -1,   126,   132,   281,   138,
     323,   287,   138,    11,   133,    -1,   127,   132,   281,   133,
      -1,   128,   132,   281,   133,    -1,   129,   132,   281,   138,
     281,   324,   133,    -1,    -1,   138,    -1,   132,   133,    -1,
     142,   143,    -1,    59,   142,   143,    -1,    60,   142,   143,
      -1,   140,    -1,   141,    -1,   138,    -1,   139,    -1,   326,
      -1,   146,    -1,   145,    -1,   147,    -1,   148,    -1,   149,
      -1,   150,    -1,   134,    -1,   144,    -1,   151,    -1,   152,
      -1,    59,    -1,    60,    -1,    66,    -1,    67,    -1,    68,
      -1,    69,    -1,    70,    -1,    71,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    72,    -1,    73,
      -1,    79,    -1,    80,    -1,    81,    -1,    82,    -1,    83,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    52,    -1,    51,    -1,     4,    -1,     3,
      -1,    40,    -1,    49,    -1,     5,    -1,     7,    -1,     6,
      -1,    42,    -1,    56,    -1,    47,    -1,     8,    -1,    57,
      -1,    53,    -1,    43,    -1,    39,    -1,    50,    -1,    64,
      -1,    63,    -1,    62,    -1,    65,    -1,    13,    -1,    11,
      -1,    12,    -1,    14,    -1,    15,    -1,    10,    -1,    16,
      -1,   338,    -1,   329,   338,    -1,   333,    -1,   330,   333,
      -1,   342,    -1,   344,    -1,   348,    -1,   326,    -1,   137,
      -1,   153,    -1,    91,    -1,   327,    -1,   328,    -1,   295,
      -1,    -1,   332,   334,    -1,   331,    -1,   140,    -1,   141,
      -1,   333,    -1,   139,    -1,   138,    -1,   334,    -1,   131,
      -1,    -1,   336,   339,    -1,    -1,   337,   335,    -1,   340,
      -1,   331,    -1,   338,    -1,   139,    -1,   138,    -1,    -1,
     140,   341,   336,   141,    -1,    -1,   142,   343,   332,   143,
      -1,    -1,   132,   345,   332,   133,    -1,    -1,    92,   346,
     332,   133,    -1,    -1,    93,   347,   332,   133,    -1,    -1,
     135,   349,   337,   136,    -1,    -1,   350,   352,    -1,    -1,
     351,   353,    -1,   353,    -1,   131,    -1,   354,    -1,   356,
      -1,   355,    -1,    91,    -1,   326,    -1,   137,    -1,   153,
      -1,   140,    -1,   141,    -1,   139,    -1,   138,    -1,   327,
      -1,   328,    -1,   295,    -1,    58,    -1,    90,    -1,    41,
      -1,   135,   350,   136,    -1,   142,   350,   143,    -1,   357,
     350,   133,    -1,   132,    -1,    92,    -1,    93,    -1
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
    1573,  1575,  1584,  1587,  1586,  1597,  1598,  1598,  1605,  1607,
    1605,  1623,  1622,  1633,  1635,  1633,  1650,  1651,  1653,  1654,
    1657,  1657,  1671,  1674,  1675,  1676,  1677,  1678,  1679,  1680,
    1681,  1682,  1685,  1686,  1689,  1690,  1691,  1698,  1705,  1708,
    1709,  1710,  1711,  1712,  1713,  1716,  1717,  1720,  1721,  1724,
    1725,  1729,  1724,  1741,  1741,  1751,  1751,  1752,  1751,  1760,
    1760,  1769,  1770,  1770,  1771,  1771,  1772,  1783,  1784,  1788,
    1787,  1794,  1793,  1799,  1800,  1799,  1809,  1809,  1817,  1817,
    1818,  1818,  1820,  1821,  1823,  1824,  1827,  1830,  1830,  1840,
    1840,  1840,  1847,  1848,  1848,  1851,  1852,  1853,  1853,  1856,
    1858,  1856,  1887,  1912,  1913,  1916,  1917,  1920,  1920,  1928,
    1929,  1930,  1933,  1984,  1985,  1987,  1988,  1988,  1991,  1991,
    1993,  1992,  1997,  1998,  1998,  2017,  2018,  2018,  2035,  2036,
    2038,  2042,  2044,  2047,  2048,  2049,  2051,  2052,  2052,  2058,
    2061,  2062,  2066,  2067,  2071,  2072,  2075,  2078,  2079,  2082,
    2082,  2085,  2085,  2087,  2088,  2091,  2092,  2092,  2099,  2100,
    2101,  2102,  2103,  2104,  2105,  2106,  2107,  2108,  2109,  2110,
    2111,  2112,  2113,  2114,  2115,  2116,  2117,  2118,  2119,  2126,
    2127,  2128,  2129,  2130,  2131,  2132,  2139,  2144,  2151,  2152,
    2153,  2154,  2155,  2156,  2157,  2160,  2161,  2164,  2165,  2168,
    2169,  2170,  2173,  2174,  2176,  2178,  2178,  2180,  2181,  2182,
    2183,  2186,  2189,  2189,  2197,  2198,  2199,  2202,  2207,  2212,
    2217,  2224,  2225,  2228,  2229,  2230,  2231,  2232,  2233,  2234,
    2235,  2236,  2237,  2238,  2239,  2240,  2241,  2242,  2243,  2244,
    2245,  2246,  2247,  2248,  2251,  2252,  2253,  2254,  2255,  2256,
    2257,  2258,  2260,  2261,  2263,  2264,  2266,  2267,  2269,  2270,
    2272,  2273,  2275,  2276,  2296,  2297,  2298,  2303,  2304,  2316,
    2317,  2324,  2324,  2334,  2335,  2335,  2334,  2344,  2344,  2354,
    2354,  2363,  2363,  2363,  2396,  2395,  2406,  2407,  2407,  2406,
    2416,  2434,  2434,  2439,  2439,  2444,  2444,  2449,  2449,  2454,
    2454,  2459,  2459,  2464,  2464,  2469,  2469,  2474,  2474,  2491,
    2491,  2505,  2542,  2580,  2633,  2633,  2640,  2641,  2642,  2643,
    2644,  2645,  2646,  2647,  2648,  2651,  2652,  2653,  2654,  2655,
    2656,  2657,  2658,  2659,  2660,  2661,  2662,  2663,  2664,  2665,
    2666,  2667,  2668,  2669,  2670,  2671,  2672,  2673,  2674,  2675,
    2676,  2677,  2678,  2679,  2680,  2681,  2682,  2683,  2684,  2685,
    2686,  2689,  2690,  2691,  2692,  2693,  2694,  2695,  2696,  2697,
    2698,  2699,  2700,  2701,  2702,  2703,  2704,  2705,  2706,  2707,
    2708,  2709,  2710,  2713,  2714,  2715,  2716,  2717,  2718,  2719,
    2726,  2727,  2730,  2731,  2734,  2735,  2736,  2737,  2768,  2768,
    2769,  2770,  2771,  2772,  2774,  2775,  2777,  2778,  2779,  2781,
    2782,  2783,  2785,  2786,  2788,  2789,  2791,  2792,  2795,  2796,
    2799,  2800,  2801,  2805,  2804,  2818,  2818,  2822,  2822,  2824,
    2824,  2826,  2826,  2830,  2830,  2835,  2836,  2838,  2839,  2842,
    2843,  2846,  2846,  2846,  2847,  2847,  2847,  2847,  2847,  2847,
    2847,  2847,  2848,  2848,  2848,  2848,  2849,  2849,  2852,  2855,
    2858,  2861,  2861,  2861
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
  "@15", "@16", "@17", "class_or_typename", "maybe_template_default",
  "template_default", "@18", "function", "scoped_method", "scope",
  "method", "maybe_templated_operator", "scoped_operator", "operator",
  "typecast_op_func", "@19", "@20", "@21", "op_func", "@22", "op_sig",
  "@23", "@24", "@25", "func", "@26", "func_trailer", "@27", "@28",
  "func_body", "func_sig", "@29", "@30", "@31", "@32", "constructor",
  "@33", "constructor_sig", "@34", "@35", "maybe_initializers",
  "more_initializers", "initializer", "destructor", "@36",
  "destructor_sig", "@37", "@38", "args_list", "@39", "more_args", "@40",
  "arg", "@41", "@42", "maybe_indirect_id", "maybe_var_assign",
  "var_assign", "@43", "var", "var_id_maybe_assign", "maybe_vars",
  "maybe_other_vars", "@44", "other_var", "@45", "@46",
  "maybe_complex_var_id", "@47", "complex_var_id", "@48", "p_or_lp_or_la",
  "lp_or_la", "maybe_func_const", "maybe_array_or_args", "@49",
  "maybe_indirect_maybe_var_id", "maybe_indirect_var_id", "maybe_var_id",
  "var_id", "maybe_var_array", "var_array", "@50", "array", "@51",
  "more_array", "array_size", "@52", "any_id", "class_id", "storage_type",
  "storage_mod", "storage_mods", "type", "type_red", "type_red2", "@53",
  "const_mod", "templated_id", "@54", "maybe_scoped_id", "scoped_id",
  "type_simple", "type_id", "type_primitive", "type_indirection",
  "pointers", "pointer_or_const_pointer", "macro", "@55", "@56", "@57",
  "@58", "@59", "@60", "@61", "@62", "@63", "@64", "@65", "@66", "@67",
  "@68", "@69", "@70", "@71", "@72", "@73", "@74", "@75", "@76",
  "maybe_comma", "op_token", "op_token_no_delim", "keyword", "literal",
  "template_param_value", "param_value", "common_bracket_item",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig", "@77",
  "brackets_sig", "@78", "parens_sig", "@79", "@80", "@81", "braces_sig",
  "@82", "maybe_other", "maybe_other_no_semi", "other_stuff",
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
     190,   193,   190,   194,   195,   190,   196,   196,   197,   197,
     199,   198,   200,   201,   201,   201,   201,   201,   201,   201,
     201,   201,   202,   202,   203,   203,   203,   203,   203,   204,
     204,   204,   204,   204,   204,   205,   205,   206,   206,   208,
     209,   210,   207,   212,   211,   214,   215,   216,   213,   218,
     217,   219,   220,   219,   221,   219,   219,   222,   222,   224,
     223,   225,   223,   226,   227,   223,   229,   228,   231,   230,
     232,   230,   233,   233,   234,   234,   235,   237,   236,   239,
     240,   238,   241,   242,   241,   243,   243,   244,   243,   246,
     247,   245,   245,   248,   248,   249,   249,   251,   250,   252,
     252,   252,   253,   254,   254,   255,   256,   255,   258,   257,
     259,   257,   260,   261,   260,   262,   263,   262,   264,   264,
     264,   265,   265,   266,   266,   266,   267,   268,   267,   267,
     269,   269,   270,   270,   271,   271,   272,   273,   273,   275,
     274,   277,   276,   278,   278,   279,   280,   279,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   282,
     282,   282,   282,   282,   282,   282,   283,   283,   284,   284,
     284,   284,   284,   284,   284,   285,   285,   286,   286,   287,
     287,   287,   288,   288,   288,   289,   288,   288,   288,   288,
     288,   290,   292,   291,   293,   293,   293,   294,   294,   294,
     294,   295,   295,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   298,   298,   298,   299,   299,   300,
     300,   302,   301,   303,   304,   305,   301,   306,   301,   307,
     301,   308,   309,   301,   310,   301,   311,   312,   313,   301,
     301,   314,   301,   315,   301,   316,   301,   317,   301,   318,
     301,   319,   301,   320,   301,   321,   301,   322,   301,   323,
     301,   301,   301,   301,   324,   324,   325,   325,   325,   325,
     325,   325,   325,   325,   325,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   327,   327,   327,   327,   327,   327,   327,
     327,   327,   327,   328,   328,   328,   328,   328,   328,   328,
     329,   329,   330,   330,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   332,   332,   333,   333,   333,   334,
     334,   334,   335,   335,   336,   336,   337,   337,   338,   338,
     339,   339,   339,   341,   340,   343,   342,   345,   344,   346,
     344,   347,   344,   349,   348,   350,   350,   351,   351,   352,
     352,   353,   353,   353,   353,   353,   353,   353,   353,   353,
     353,   353,   353,   353,   353,   353,   353,   353,   354,   355,
     356,   357,   357,   357
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
       5,     0,     4,     0,     0,     5,     1,     1,     0,     1,
       0,     3,     2,     3,     3,     3,     5,     5,     4,     4,
       6,     6,     2,     3,     1,     1,     2,     2,     2,     3,
       3,     1,     4,     3,     2,     3,     3,     1,     2,     0,
       0,     0,     9,     0,     3,     0,     0,     0,     8,     0,
       3,     0,     0,     4,     0,     3,     2,     3,     1,     0,
       5,     0,     5,     0,     0,     8,     0,     3,     0,     5,
       0,     5,     0,     3,     0,     3,     2,     0,     3,     0,
       0,     7,     0,     0,     2,     1,     1,     0,     4,     0,
       0,     5,     1,     1,     2,     0,     1,     0,     3,     4,
       4,     3,     2,     0,     2,     0,     0,     4,     0,     2,
       0,     3,     2,     0,     5,     2,     0,     5,     1,     1,
       1,     1,     1,     0,     1,     2,     0,     0,     5,     1,
       1,     2,     1,     2,     0,     1,     1,     0,     1,     0,
       2,     0,     5,     0,     1,     0,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     2,     1,     1,     1,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     1,     0,     3,     2,     2,     2,
       2,     1,     0,     5,     1,     1,     1,     3,     3,     4,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     1,
       2,     0,     7,     0,     0,     0,     9,     0,     5,     0,
       5,     0,     0,    10,     0,     7,     0,     0,     0,     9,
       6,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     9,     0,
       9,     4,     4,     7,     0,     1,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     0,     4,     0,     4,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,   304,   337,   356,   357,
     358,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   359,   360,   361,   354,   355,   340,   341,   335,   336,
      84,     0,   321,   159,   373,   372,     0,   299,   298,     0,
     315,     0,     0,     0,   338,   303,   300,   225,   302,     0,
     339,   333,   334,   352,   353,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    24,     4,     9,     8,
      13,   228,   228,    10,     7,     0,     0,     0,     0,     0,
     157,     5,     0,     0,     0,   305,     0,   296,   307,   309,
       0,   313,   314,   312,   332,   331,    20,     0,   545,   324,
       0,   325,    43,   326,   318,    41,   317,   337,   340,   341,
     335,   336,   338,   339,   333,   334,   352,   353,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,     0,    82,
     320,   545,    46,   319,     0,     0,     0,     0,     0,     0,
     289,   293,   292,   291,   290,   294,   295,   113,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   545,    26,
     270,   276,   275,   272,   271,     0,     0,   268,     0,   269,
     273,   274,   287,   288,   277,   278,   279,   280,   281,   282,
     283,   284,   285,   286,     0,     0,   225,   301,     0,   330,
       0,   383,   387,   389,     0,     0,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   374,   379,     0,   225,     0,   230,   376,   377,     0,
       0,     0,     0,     0,   303,   300,   228,     0,     0,   151,
       0,     0,     0,   313,     0,   314,   178,   545,    17,    18,
      16,    14,    21,     0,   322,   165,   241,   242,     0,   158,
     163,   132,   169,   225,   215,     0,   257,   256,     0,     0,
       0,     0,     0,     0,   306,   297,   308,   311,   310,     0,
       0,     0,    30,    71,    29,    71,    86,     0,     0,    31,
      71,     0,     0,     0,     0,     0,     0,     0,   112,   118,
       0,   316,    43,    41,    46,   103,   270,   272,   271,   268,
     269,   273,   274,     0,   213,     0,     0,     0,   104,   257,
     256,     0,     0,     0,     0,     0,     0,   109,     0,     2,
     221,   226,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   380,    11,   224,   229,     0,   375,   378,
       6,    43,    41,   337,   335,   336,   338,   339,   333,   334,
      46,   301,     0,    19,    15,     0,     0,   154,     0,     0,
       0,   545,     0,   199,   155,   135,   186,   134,   197,   324,
       0,   325,   327,   524,     0,   156,   133,     0,   171,   171,
       0,   217,   222,   216,   252,     0,     0,   235,   258,   263,
     179,   142,   183,   181,     0,   328,   474,   473,   477,   479,
     478,   483,   498,   494,   495,   493,   496,   497,   499,   487,
     475,   567,   480,   486,   482,   476,   488,   472,   471,   485,
     481,   484,   565,   445,   446,   491,   490,   489,   492,   447,
     448,   449,   450,   451,   452,   458,   459,   453,   454,   455,
     456,   457,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   566,   554,   572,   573,   550,   571,   441,
     545,    45,   556,   561,   560,   558,   559,   545,   442,   436,
     435,   437,   438,   439,   440,   443,   444,   557,   564,   555,
     562,   563,   546,   549,   551,   553,   552,   545,     0,     0,
       0,     0,    87,    89,    86,    48,     0,   160,    33,    32,
      34,     0,     0,     0,   126,   127,     0,   115,     0,     0,
     254,   329,   101,   214,   102,   100,   105,    28,     2,   108,
     107,     0,     0,   220,     3,   228,   381,     0,     0,     0,
     391,   394,     0,     0,   401,   405,   409,   413,   403,   407,
     411,   415,   417,   419,   421,   422,     0,   231,    36,    35,
      37,    12,   149,   153,     0,   183,     0,   150,     0,   177,
       0,   192,   171,   188,     0,   190,     0,   445,   446,     0,
     432,   433,   430,   431,     0,   166,   434,   143,   174,     0,
       0,   164,   170,   219,     0,   236,   253,   260,     0,   203,
       0,   203,   139,   138,     0,     0,     0,     0,     0,     0,
       0,    72,    73,    75,    49,    49,    85,    86,    90,     0,
      49,   203,    39,    38,    40,   114,   116,   254,   254,   121,
     255,   203,     3,     0,     0,    25,   227,     0,   384,   388,
     390,     0,     0,   397,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   424,   152,     0,   192,     0,
       0,   187,   198,   203,   137,   136,   203,   510,   539,   541,
     537,   543,   508,   532,   531,   533,   323,   535,   509,   513,
     507,   511,   512,   529,   530,   525,   528,   504,   505,   506,
       0,     0,   426,   427,     0,   171,   172,   176,   517,   518,
     218,   516,   502,   246,   261,     0,   209,     0,     0,     0,
     568,   569,   570,    78,    76,    77,     0,    50,    50,    88,
       0,    83,    50,     0,   118,   239,   240,   238,   119,   254,
     257,   124,   128,     0,    27,     0,   110,     0,     0,   392,
       0,     0,   400,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   425,     0,   545,     0,   200,   194,     0,
       0,     0,   514,   514,   514,   526,   524,   514,   428,   429,
     167,   175,   171,   503,   247,   237,   249,   266,   180,   212,
     205,   204,   206,     0,   184,   182,   141,   140,    74,    79,
      80,    81,    44,     0,     0,    42,    91,    47,   161,   117,
     128,   250,     0,   254,   232,   128,   130,   122,   129,   243,
     111,   382,   385,     0,   395,   398,   402,   406,   410,   414,
     404,   408,   412,   416,     0,     0,   423,     0,    22,   203,
       0,   193,   196,   189,   191,     0,     0,     0,     0,     0,
       0,   203,   173,   203,     0,     0,   207,   254,   203,     0,
       0,    70,    59,   228,    51,   228,    55,    54,     0,     0,
       0,   145,   144,    53,     0,     0,     0,   313,    69,    52,
     171,   120,   233,   251,   125,     0,   244,     0,   106,     0,
     547,     0,     0,     0,   192,     0,   194,   540,   521,   520,
     519,   515,   542,   538,   523,   544,   522,   527,   534,   536,
       0,     0,   262,   267,   209,   210,     0,     0,     0,     0,
      61,    60,     0,     0,     0,     0,    68,     0,     0,   228,
       0,     0,    65,    62,   148,   147,   146,   162,   246,   131,
     500,   245,   386,     0,   399,   418,   420,     0,   201,   195,
     168,   243,   208,   215,   185,   545,   547,    95,     0,     0,
      97,     0,     0,     0,     0,    92,    66,    63,    57,    56,
       0,    67,    64,   234,   501,   393,   548,    23,   248,   211,
       0,     0,    94,    93,    96,     0,     0,     0,    58,   547,
      99,     0,    98
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    87,    88,    89,   332,    90,    91,   295,
     293,   300,   737,   813,   874,   519,   631,   632,   814,    92,
     297,   148,   521,   522,   740,   930,   931,   967,    93,   327,
     651,    94,    95,   309,   536,   744,   537,   538,   820,   752,
     539,   825,   540,   827,   828,   895,    96,    97,   268,   879,
     248,    98,    99,   100,   154,   641,   890,   269,   408,   270,
     404,   714,   861,   271,   409,   611,   792,   715,   258,   272,
     619,   621,   620,   868,   881,   591,   396,   683,   686,   681,
     851,   778,   882,   592,   398,   590,   849,   725,   726,   801,
     924,   802,   803,   963,   323,   412,   413,   614,   101,   273,
     233,   208,   555,   234,   235,   367,   748,   948,   274,   723,
     749,   275,   898,   795,   863,   822,   415,   750,   276,   417,
     418,   419,   617,   797,   618,   864,   865,   119,   120,   935,
     105,   886,   107,   108,   109,   170,   110,   121,   403,   402,
     123,   113,   114,   115,   236,   237,   238,   116,   657,   343,
     758,   899,   344,   345,   661,   833,   662,   348,   761,   901,
     665,   669,   666,   670,   667,   671,   668,   672,   673,   674,
     774,   605,   700,   701,   702,   949,   720,   721,   855,   910,
     911,   917,   596,   858,   704,   705,   706,   786,   707,   787,
     708,   784,   782,   783,   709,   785,   290,   953,   512,   513,
     514,   515,   516,   517
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -860
static const yytype_int16 yypact[] =
{
    -860,    65,  -860,  4945,  5170,  6346,  -860,   201,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,   435,   442,   375,   387,
    1002,  5191,  -860,  -860,  -860,  -860,   547,  -860,  -860,   373,
    -860,  5722,   346,  5971,   394,    31,    82,  -860,  -860,  6420,
     405,   412,   425,   449,   471,   478,   506,   518,   569,   576,
     583,   590,   603,   610,   619,   -32,   -20,    32,    58,    66,
      78,   112,   114,   136,   151,   177,   247,   261,   270,   272,
     282,   305,   313,   339,   345,   348,  -860,  -860,  -860,  -860,
    -860,   291,   291,  -860,  -860,  5510,   204,   204,   204,   204,
    -860,  -860,    -3,   -19,  6138,  -860,  5616,  -860,   285,   166,
    5934,   216,  -860,  -860,  -860,  -860,  -860,   322,  -860,  -860,
     -18,   216,   351,  -860,  -860,   356,  -860,   -41,  -860,  -860,
     -16,    38,   120,   170,   188,   222,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,   277,  -860,
    -860,  -860,   359,  -860,  5616,  6420,  6420,  6420,   355,   404,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,   364,   357,   417,
    6420,  5170,  6346,  5191,   378,   947,   947,  6450,  -860,  -860,
       7,  -860,  -860,    92,   149,  6420,  6420,   175,  6420,   197,
     209,   227,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,   229,   386,  -860,   385,   142,  -860,
    6554,  -860,  -860,  -860,  6554,  6554,  -860,  6554,  6554,  6554,
    6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,  6554,
    6554,  -860,   479,   397,  -860,  6450,  -860,   319,  -860,   401,
    5170,  6346,  6578,  5191,  -860,   525,   291,   204,   204,  -860,
     254,  6524,  5616,   -24,   406,   409,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  5272,  -860,  -860,  -860,  -860,  6524,  -860,
    -860,  -860,  -860,  -860,   407,   923,   411,   416,   263,    72,
    6578,  6578,  6578,   273,  -860,  -860,  -860,  -860,  -860,  6420,
    1140,  6420,  -860,   418,  -860,   418,  6554,   419,  1291,  -860,
     418,   426,   428,   432,   437,  6420,  6420,  6420,  -860,    81,
    6420,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,   438,  -860,  6554,   440,   445,  -860,   -56,
    -860,  1442,   443,   451,   452,   279,  6212,  -860,   181,  -860,
    -860,  -860,   453,  6554,  6554,  6554,   454,   456,  6554,   459,
     463,   466,   469,   473,   476,   483,   484,   496,   501,   502,
     457,   495,   504,  -860,  -860,   507,  -860,  6450,  -860,  -860,
    -860,   499,   513,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
     520,  -860,   521,  -860,  -860,  6242,   256,  -860,   416,   110,
    5293,  -860,  1593,  -860,  -860,  -860,  -860,  -860,  -860,   522,
     280,   144,  -860,  -860,  6628,  -860,  -860,   281,   -12,   -12,
     196,  -860,  -860,  -860,  -860,   523,  6450,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  5373,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  6008,   526,
     529,   524,   519,   538,  6554,  -860,   530,  -860,  -860,  -860,
    -860,   549,   550,   553,  -860,  -860,   537,   564,  6108,   636,
    6554,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  6316,  6628,  -860,   552,   285,  -860,   567,   577,   579,
    -860,  -860,   571,  5828,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  6554,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,   625,   674,   322,  -860,  1744,  -860,
    6554,   582,   -12,  -860,  5373,  -860,  3858,   591,   597,   611,
    -860,  -860,  -860,  -860,   581,  -860,  -860,  -860,  -860,   -37,
     727,  -860,  -860,  -860,  4160,  -860,  -860,   604,   607,   620,
    6554,   620,  -860,  -860,   284,  1895,  2046,  2197,  6420,  6420,
    6420,  -860,   614,  -860,  -860,  -860,  -860,  6554,  -860,   621,
    -860,   620,  -860,  -860,  -860,  -860,  -860,  5394,  6554,  -860,
    -860,   620,   622,  6628,   634,  -860,  -860,  5828,  -860,  -860,
    -860,  5828,  5828,  -860,   637,  5828,  5828,  5828,  5828,  5828,
    5828,  5828,  5828,  5828,  5828,   631,  -860,   648,   582,   652,
    6420,  -860,  -860,   620,  -860,  -860,   620,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
     645,   647,  -860,  -860,   660,   -12,  -860,  -860,  -860,  -860,
    4160,  -860,  -860,   -54,  -860,   661,    90,   663,   664,  5373,
    -860,  -860,  -860,  -860,  -860,  -860,  6008,    76,   186,  -860,
    4160,  -860,   190,   665,    81,  -860,  -860,  -860,  -860,   354,
     411,  -860,   654,   666,  -860,   669,  -860,   668,  5828,  -860,
     670,  5828,  -860,   672,   673,   675,   676,   677,   678,   680,
     683,   658,   679,  -860,   685,  -860,   204,  -860,   681,   -37,
     690,   691,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,   -12,  -860,  -860,  -860,  -860,   659,  -860,  -860,
    -860,  -860,   687,  5828,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  4462,   689,  -860,  4160,  -860,  -860,  -860,
     654,  -860,   694,  5394,  -860,   654,  -860,  -860,  -860,    27,
    -860,  -860,  -860,   692,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,   796,   818,  -860,  2348,  -860,   620,
    6420,  -860,  -860,  -860,  -860,  3254,  3405,  3556,  3103,  4009,
    3707,   620,  -860,   620,   688,  4160,  -860,  5394,   620,  4591,
     -37,  -860,  -860,   291,  -860,   291,  -860,  -860,  4709,   204,
     204,  -860,  -860,  -860,   522,  6138,  4827,   144,  -860,  -860,
     -12,  -860,  -860,  -860,  -860,  4311,  -860,   -37,  -860,   699,
    -860,   700,   703,   704,   582,   706,   681,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
     709,   710,  -860,  4160,    90,  -860,   711,  5066,  6346,  5066,
    -860,  -860,   490,   204,   204,  6524,  -860,   714,   716,   291,
     204,   204,  -860,  -860,  -860,  -860,  -860,  -860,   -54,  4311,
    -860,  -860,  -860,  2650,  -860,  -860,  -860,   204,  -860,  -860,
    -860,    27,  -860,   407,  -860,  -860,  -860,  -860,   243,   250,
    -860,   481,  5087,  6420,  5087,  -860,  -860,  -860,  -860,  -860,
     717,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    2499,  2801,  -860,  -860,  -860,   492,   641,   642,  -860,  -860,
    -860,  2952,  -860
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -860,  -307,  -860,  -860,  -860,  -860,  -860,    36,   -38,  -860,
    -860,  -860,  -208,  -860,  -860,   138,   115,  -860,  -860,   -31,
    -860,  -860,  -483,  -860,  -860,  -860,   -82,  -495,    39,  -860,
    -860,    41,   -28,  -860,   111,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -355,  -860,  -860,   761,  -860,   606,  -624,
    -860,  -860,  -776,   -69,  -860,  -860,  -860,  -237,  -860,  -860,
    -860,  -860,  -860,  -252,  -860,  -386,  -860,  -860,   -45,  -860,
    -860,  -860,  -860,  -860,  -254,  -860,  -860,  -860,  -860,  -661,
     -48,     9,  -238,  -860,  -860,  -860,  -860,  -577,  -860,   -64,
    -860,  -860,  -860,  -860,   686,  -100,  -860,  -860,    52,  -217,
     -86,  -147,  -860,   312,  -860,  -860,  -706,  -860,  -165,  -860,
    -860,  -860,   -92,   -77,  -860,  -860,  -860,  -489,  -164,   122,
    -699,  -860,  -860,  -860,  -860,  -860,  -860,    -1,    19,     2,
     -95,    77,   -22,  -528,   763,  -860,   765,     1,  -860,    -4,
      25,   141,    16,  -860,   -60,  -860,   638,    63,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,  -860,
    -860,  -482,  -227,  -230,   -27,  -860,  -707,  -581,  -295,  -535,
      20,  -860,    94,  -860,  -859,  -860,  -860,  -860,  -860,  -860,
    -860,  -860,  -860,  -860,  -860,  -860,  -144,  -691,  -860,  -753,
    -860,  -860,  -580,  -860
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -327
static const yytype_int16 yytable[] =
{
     122,   125,   102,   175,   111,   104,   239,   298,   159,   395,
     176,   284,   328,   329,   387,   703,   406,   776,   366,   177,
     124,   126,   103,   612,   796,   397,   249,   152,   112,   716,
     608,   405,   554,   816,   331,   664,   950,   880,   609,   205,
     169,   639,   111,   821,   728,   209,   150,   153,   286,   149,
    -289,   649,   259,   260,   261,   485,   486,   246,   168,   338,
     510,   179,   204,   509,   743,     2,   112,   390,   510,   896,
     654,   509,   263,   291,   753,  -293,   546,   897,   794,   722,
     106,   809,   810,   811,   285,   534,  -259,   365,  -259,   206,
     984,   254,   207,   934,  -289,   488,   253,   251,  -289,  -289,
     210,   510,   941,   277,   509,   279,   780,   111,  -325,   781,
     414,   111,   211,   392,   250,   325,   325,   893,   169,  -293,
     255,   264,   264,   278,  -293,   283,   410,   610,   262,  -292,
    -123,   112,   535,   759,   760,   112,   168,   763,   764,   765,
     766,   767,   768,   769,   770,   771,   772,  -289,   799,   583,
     577,   302,   303,   304,   739,   111,   301,   284,   923,   751,
     382,   925,   510,   422,   212,   509,   311,   312,   313,   314,
     622,   755,   252,  -292,   324,   324,   330,   606,  -292,   112,
     800,   333,   334,  -293,   209,   793,   623,   124,   126,   153,
     213,   809,   810,   811,   394,   809,   810,   811,   214,   852,
     986,   585,   383,   384,   423,   722,   682,   335,    32,   342,
     215,  -291,   812,   346,   347,   416,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     285,   252,  -293,   835,   330,   289,   371,   372,   986,   380,
    -292,   652,   423,   957,   216,   933,   217,   588,   986,   796,
     388,   616,   389,   111,   940,  -291,   124,   126,   150,   153,
    -291,  -290,   399,   511,   401,   160,  -291,   388,   218,   279,
     278,   511,   905,   340,   330,   991,   595,   112,   703,  -294,
     341,   793,   400,   219,   920,   425,   921,   407,  -290,  -292,
     936,   926,  -289,   161,   162,   523,   124,   126,   153,   265,
    -294,   531,   532,   533,   511,  -290,   541,   289,  1001,   220,
    -290,   163,   553,  -295,   703,  -291,   582,   951,  -295,   341,
     336,   587,   815,  -294,   543,   606,   817,   613,  -294,   791,
     722,   160,  -270,  -270,   341,   256,  -270,  -290,  -270,   257,
     684,  -289,   557,   558,   559,   385,   625,   562,   676,  -294,
     164,   165,   166,   626,   421,   160,   685,  -295,   510,   161,
     162,   509,  -295,   316,   424,   511,   330,  -295,   703,   264,
     551,   594,   607,   627,   528,   729,   650,   163,   965,   221,
     966,   529,   160,   161,   162,   965,   425,   966,   793,   181,
     182,   317,   318,   222,   264,   510,   510,   510,   509,   509,
     509,   163,   223,   264,   224,   584,   862,   305,   306,   319,
     161,   162,   296,   264,   225,   330,   164,   165,   166,   264,
     264,   264,  -223,   399,   264,   401,   606,   738,   163,   231,
     232,   508,   742,   520,   970,   231,   232,   226,   526,   508,
     164,   165,   166,   624,   307,   227,   745,   746,   320,   321,
     322,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   368,   232,   891,  -293,   164,   165,   166,
     894,   228,   508,   992,   993,   806,   994,   229,  -292,   970,
     230,   178,   292,   650,   650,  -291,   747,   294,   856,   857,
     299,   807,   860,   972,   973,   167,  -290,   264,   231,   232,
     992,   993,   994,  -294,   947,   308,  -272,  -272,   310,   315,
    -272,   648,  -272,   167,   633,  -293,  -295,   337,  -271,  -271,
     339,   363,  -271,   523,  -271,  -268,  -268,  -292,   364,  -268,
     974,  -268,   370,   508,  -291,   381,  -269,  -269,   391,   330,
    -269,  -326,  -269,  -273,  -273,  -290,   411,  -273,   420,  -273,
     155,   156,  -294,  -259,   524,   518,  -274,  -274,   527,   528,
    -274,   511,  -274,   529,   111,  -295,  -276,  -276,   530,   542,
    -276,   544,  -276,  -275,  -275,   675,   545,  -275,   548,  -275,
    -287,  -287,   549,   550,  -287,   650,  -287,   157,   112,   679,
     574,   556,   560,   399,   561,   401,   158,   563,   511,   511,
     511,   564,  -288,  -288,   565,   677,  -288,   566,  -288,  -277,
    -277,   567,   530,  -277,   568,  -277,   965,   510,   966,   727,
     509,   569,   570,   642,   733,   734,   735,   965,   575,   966,
     578,   847,   945,   944,   571,   757,   523,  -278,  -278,   572,
     573,  -278,   576,  -278,   579,   341,   330,   330,   946,  -279,
    -279,   580,   581,  -279,   593,  -279,   615,   637,   111,   650,
     636,   634,   111,   111,   635,   640,   111,   111,   111,   111,
     111,   111,   111,   111,   111,   111,   779,   638,   645,   647,
     642,   643,   112,   944,   644,   158,   112,   112,   655,   823,
     112,   112,   112,   112,   112,   112,   112,   112,   112,   112,
    -280,  -280,   646,   650,  -280,   658,  -280,  -281,  -281,   663,
     659,  -281,   660,  -281,  -282,  -282,   607,   265,  -282,   680,
    -282,  -283,  -283,   510,   713,  -283,   509,  -283,   399,   508,
     401,   848,   633,   710,  -284,  -284,   832,   699,  -284,   711,
    -284,  -285,  -285,   717,   712,  -285,  -264,  -285,   330,   724,
    -286,  -286,   736,  -202,  -286,   699,  -286,   741,   754,   111,
     510,   510,   111,   509,   509,   756,   508,   508,   508,   773,
     762,   510,   643,   644,   509,   873,   965,   965,   966,   966,
     775,   867,   875,   112,   777,   878,   112,   937,   788,   938,
     789,   284,   790,   826,   798,   804,   844,   805,   818,   829,
     830,   831,  -265,   834,   111,   836,   837,   902,   838,   839,
     840,   841,   884,   842,   887,   885,   843,   845,   846,   850,
     511,   990,   330,   853,   854,   866,   889,   892,   112,   903,
     900,   922,   952,   954,   942,   943,   955,   956,   112,   958,
     939,   932,   960,   961,   964,   978,   779,   979,   998,   872,
     975,   808,   876,   980,   877,   819,   247,   386,   959,   906,
     962,   699,   326,   989,   285,   883,   330,   656,   884,   988,
     887,   983,   824,   288,   287,   369,   888,   884,   916,   887,
     859,   699,     0,     0,   277,   884,   279,   887,   976,   977,
       0,     0,     0,     0,   112,   981,   982,     0,     0,     0,
       0,     0,     0,   112,   168,     0,     0,     0,     0,     0,
       0,   112,   987,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   968,   969,   971,   511,     0,     0,     0,
       0,     0,   316,     0,   388,     0,   279,     0,     0,     0,
       0,     0,     0,   124,   126,   153,     0,     0,     0,     0,
       0,     0,     0,     0,   168,     0,   316,   699,   181,   182,
     317,   318,     0,   511,   511,     0,     0,     0,   995,   996,
     997,     0,     0,     0,   511,     0,     0,     0,   319,     0,
       0,     0,   181,   182,   317,   318,     0,     0,   508,     0,
       0,     0,     0,     0,     0,     0,   699,   699,   699,   699,
     699,   699,   319,     0,     0,     0,   699,     0,     0,     0,
       0,   127,     0,     0,     0,   266,   267,   320,   321,   322,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,   699,   128,   129,   130,
     131,   320,   321,   322,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,   132,     0,     0,
       0,     0,     0,     0,   699,     0,     0,   231,   232,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     699,   231,   232,     0,   508,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   508,   508,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   508,   426,   427,   428,   429,   430,   431,   373,
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
       0,   487,   488,     0,   489,   490,   491,   492,   493,   494,
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
       0,     0,   487,   488,     0,   489,   490,   525,   492,   493,
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
       0,     0,     0,   487,   488,     0,   489,   490,   547,   492,
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
       0,     0,     0,     0,   487,   488,     0,   489,   490,   589,
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
       0,     0,     0,     0,     0,   487,   488,   678,   489,   490,
       0,   492,   493,   494,   495,   496,   497,     0,   498,   499,
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
     490,   730,   492,   493,   494,   495,   496,   497,     0,   498,
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
       0,     0,     0,     0,     0,     0,     0,   487,   488,     0,
     489,   490,     0,   492,   493,   494,   495,   496,   497,   731,
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
     732,   489,   490,     0,   492,   493,   494,   495,   496,   497,
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
     488,   904,   489,   490,     0,   492,   493,   494,   495,   496,
     497,     0,   498,   499,   500,   501,   502,   503,   504,   505,
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
     487,   488,     0,   489,   490,   999,   492,   493,   494,   495,
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
       0,     0,   488,   985,   489,   490,     0,   492,   493,   494,
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
       0,     0,  1000,   488,     0,   489,   490,     0,   492,   493,
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
       0,     0,     0,  1002,   488,     0,   489,   490,     0,   492,
     493,   494,   495,   496,   497,     0,   498,   499,   500,   501,
     502,   503,   504,   505,   506,   507,   426,   427,   428,   429,
     430,   431,   373,   432,   433,   434,   435,   436,   437,   438,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,   128,   129,
     374,   375,   439,   440,     0,   442,   443,    34,    35,     0,
     444,     0,   445,   446,   447,   448,   449,     0,   376,   450,
     451,     0,   453,   454,     0,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   474,   475,   476,   477,   478,   479,
     480,   481,   482,     0,   687,   688,   689,   377,   378,   379,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   914,   690,     0,   489,   691,   915,
     692,   908,   909,   718,   719,   697,     0,   498,   499,   500,
     501,   502,   503,   504,   505,   506,   698,   426,   427,   428,
     429,   430,   431,   373,   432,   433,   434,   435,   436,   437,
     438,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   128,
     129,   374,   375,   439,   440,     0,   442,   443,    34,    35,
       0,   444,     0,   445,   446,   447,   448,   449,     0,   376,
     450,   451,     0,   453,   454,     0,   455,   456,   457,   458,
     459,   460,   461,   462,   463,   464,   465,   466,   467,   468,
     469,   470,   471,   472,   473,   474,   475,   476,   477,   478,
     479,   480,   481,   482,     0,   687,   688,   689,   377,   378,
     379,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   690,   907,   489,   691,
       0,   692,   908,   909,   718,   719,   697,     0,   498,   499,
     500,   501,   502,   503,   504,   505,   506,   698,   426,   427,
     428,   429,   430,   431,   373,   432,   433,   434,   435,   436,
     437,   438,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     128,   129,   374,   375,   439,   440,     0,   442,   443,    34,
      35,     0,   444,     0,   445,   446,   447,   448,   449,     0,
     376,   450,   451,     0,   453,   454,     0,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   466,   467,
     468,   469,   470,   471,   472,   473,   474,   475,   476,   477,
     478,   479,   480,   481,   482,     0,   687,   688,   689,   377,
     378,   379,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   690,   912,   489,
     691,     0,   692,   908,   909,   718,   719,   697,     0,   498,
     499,   500,   501,   502,   503,   504,   505,   506,   698,   426,
     427,   428,   429,   430,   431,   373,   432,   433,   434,   435,
     436,   437,   438,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   128,   129,   374,   375,   439,   440,     0,   442,   443,
      34,    35,     0,   444,     0,   445,   446,   447,   448,   449,
       0,   376,   450,   451,     0,   453,   454,     0,   455,   456,
     457,   458,   459,   460,   461,   462,   463,   464,   465,   466,
     467,   468,   469,   470,   471,   472,   473,   474,   475,   476,
     477,   478,   479,   480,   481,   482,     0,   687,   688,   689,
     377,   378,   379,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   690,   913,
     489,   691,     0,   692,   908,   909,   718,   719,   697,     0,
     498,   499,   500,   501,   502,   503,   504,   505,   506,   698,
     426,   427,   428,   429,   430,   431,   373,   432,   433,   434,
     435,   436,   437,   438,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,   128,   129,   374,   375,   439,   440,     0,   442,
     443,    34,    35,     0,   444,     0,   445,   446,   447,   448,
     449,     0,   376,   450,   451,     0,   453,   454,     0,   455,
     456,   457,   458,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   479,   480,   481,   482,     0,   687,   688,
     689,   377,   378,   379,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   690,
       0,   489,   691,     0,   692,   908,   909,   718,   719,   697,
     919,   498,   499,   500,   501,   502,   503,   504,   505,   506,
     698,   426,   427,   428,   429,   430,   431,   373,   432,   433,
     434,   435,   436,   437,   438,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   128,   129,   374,   375,   439,   440,     0,
     442,   443,    34,    35,     0,   444,     0,   445,   446,   447,
     448,   449,     0,   376,   450,   451,     0,   453,   454,     0,
     455,   456,   457,   458,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,     0,   687,
     688,   689,   377,   378,   379,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     690,     0,   489,   691,     0,   692,   693,   694,   695,   696,
     697,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506,   698,   426,   427,   428,   429,   430,   431,   373,   432,
     433,   434,   435,   436,   437,   438,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,   128,   129,   374,   375,   439,   440,
       0,   442,   443,    34,    35,     0,   444,     0,   445,   446,
     447,   448,   449,     0,   376,   450,   451,     0,   453,   454,
       0,   455,   456,   457,   458,   459,   460,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   472,   473,
     474,   475,   476,   477,   478,   479,   480,   481,   482,     0,
     687,   688,   689,   377,   378,   379,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   690,     0,   489,   691,     0,   692,   693,   694,   695,
     918,   697,     0,   498,   499,   500,   501,   502,   503,   504,
     505,   506,   698,   426,   427,   428,   429,   430,   431,   373,
     432,   433,   434,   435,   436,   437,   438,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,   128,   129,   374,   375,   439,
     440,     0,   442,   443,    34,    35,     0,   444,     0,   445,
     446,   447,   448,   449,     0,   376,   450,   451,     0,   453,
     454,     0,   455,   456,   457,   458,   459,   460,   461,   462,
     463,   464,   465,   466,   467,   468,   469,   470,   471,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
       0,   687,   688,   689,   377,   378,   379,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   690,     0,   489,   691,     0,   692,     0,     0,
     718,   719,   697,     0,   498,   499,   500,   501,   502,   503,
     504,   505,   506,   698,   426,   427,   428,   429,   430,   431,
     373,   432,   433,   434,   435,   436,   437,   438,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,   128,   129,   374,   375,
     439,   440,     0,   442,   443,    34,    35,     0,   444,     0,
     445,   446,   447,   448,   449,     0,   376,   450,   451,     0,
     453,   454,     0,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   481,
     482,     0,   687,   688,   689,   377,   378,   379,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   690,     0,   489,   691,     0,   692,     0,
       0,   695,     0,   697,     0,   498,   499,   500,   501,   502,
     503,   504,   505,   506,   698,     4,     5,     0,     0,     0,
       6,     7,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,     0,    32,    33,    34,    35,   869,    37,
      38,    39,     0,    40,    41,     0,    43,    44,    45,   245,
      47,     0,     0,    48,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,   870,   871,   927,   928,   393,     0,     0,     6,
       7,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     242,   929,     0,    32,    33,    34,    35,     0,    37,    38,
      39,     0,    40,     0,     0,     0,    44,   244,   245,     0,
       0,     0,    48,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   240,   241,     0,     0,     0,     6,     7,     0,
       0,     0,     0,     0,     0,   393,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,   242,   243,
       0,    32,    33,    34,    35,     0,    37,    38,   117,     0,
      40,     0,     0,     0,    44,   244,   245,     0,     0,     0,
      48,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,     0,     0,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     280,   281,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,   393,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,   242,   282,     0,    32,
       0,    34,    35,     0,    37,    38,   117,     0,    40,     0,
       0,     0,    44,   244,   245,     0,     0,     0,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    49,     0,
       0,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     4,     5,
       0,     0,     0,     6,     7,     0,     0,     0,     0,     0,
       0,   393,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,     0,    32,    33,    34,
      35,    36,    37,    38,    39,     0,    40,    41,    42,    43,
      44,    45,    46,    47,     0,     0,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    49,     0,     0,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,     7,    86,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   180,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,    44,   181,   182,   183,   184,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   117,     0,     0,     0,
       0,     0,   187,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,     0,     0,     0,    49,     7,
       0,   189,   190,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,     0,     0,     0,     0,
       7,   965,     0,   966,     0,    26,    27,    28,    29,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,   965,     0,   966,    44,    26,    27,    28,    29,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     117,     0,     0,     0,     0,     0,    44,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,     0,
       0,   180,    49,     0,     0,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
       0,     0,   180,     0,     0,   118,     0,   181,   182,   183,
     184,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,   151,   187,   181,   182,
     183,   184,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,     0,   187,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,   180,     0,    49,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,   316,     0,     0,   393,     0,   181,   182,
     183,   184,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   117,     0,     0,     0,     0,   586,   187,   181,
     182,   317,   318,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   319,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    49,     0,     0,   189,   190,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,     0,     0,     0,     0,   745,   746,   320,   321,
     322,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,   393,     0,     0,
       0,     0,     0,   240,   241,     0,     0,     0,     6,     7,
       0,     0,     0,     0,     0,     0,   747,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   242,
     243,     0,    32,    33,    34,    35,     0,    37,    38,   117,
       0,    40,     0,     0,     0,    44,   244,   245,     0,     0,
       0,    48,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    49,     0,     0,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,   280,
     281,     0,     0,     0,     6,   127,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,   128,   129,   130,   131,   242,   282,     0,    32,     0,
      34,    35,     0,    37,    38,   117,     0,    40,     0,     0,
       0,   132,   244,   245,     0,     0,     0,    48,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   171,   172,     0,     0,     0,
       0,   127,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,   128,   129,   130,
     131,    30,   173,     0,    32,     0,    34,    35,     0,     0,
       0,   117,     0,    40,     0,     0,     0,   132,     0,     0,
     174,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   280,   281,     0,     0,     0,     0,   127,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   128,   129,   130,   131,   242,   282,     0,
      32,     0,    34,    35,     0,     0,     0,   117,     0,    40,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,   133,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   280,   281,     0,
       0,     0,     0,   127,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,   128,
     129,   130,   131,   242,   282,     0,     0,     0,    34,    35,
     180,     0,     0,   117,     0,    40,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   181,   182,   183,   184,
       0,     0,     0,   628,   629,   630,     0,   180,     0,     0,
     117,     0,   185,     0,   186,    49,   187,     0,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   181,   182,   183,   184,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   117,     0,     0,
       0,     0,   188,   187,     0,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    49,
       0,     0,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   373,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,   128,   129,   374,   375,   180,     0,     0,
       0,     0,    34,    35,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   181,   182,   183,   184,     0,     0,     0,
       0,   265,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   187,     0,     0,     0,     0,     0,     0,
       0,     0,   377,   378,   379,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,     0,     0,     0,
       0,   180,     0,     0,     0,     0,     0,     0,     0,     0,
     266,   267,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   181,   182,   183,
     184,   180,     0,     0,     0,   552,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,   187,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   181,   182,   183,
     184,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   117,     0,     0,     0,     0,     0,   187,     0,     0,
       0,     0,     0,    49,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,     0,     0,     0,     0,   180,     0,     0,     0,     0,
       0,     0,     0,    49,     0,     0,   189,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   181,   182,   183,   184,     7,     0,     0,     0,   653,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,   187,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    26,    27,    28,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   117,     0,     0,     0,     0,
       0,    44,     0,     0,     0,     0,     0,    49,     0,     0,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,     0,     0,     0,     0,   180,
       0,     0,     0,     0,     0,     0,     0,    49,     0,     0,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,   181,   182,   183,   184,   316,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   117,
       0,     0,     0,     0,     0,   187,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   181,   182,   317,   318,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   319,     0,     0,     0,     0,
       0,    49,     0,     0,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,     0,
       0,     0,     0,   180,     0,     0,     0,     0,     0,     0,
       0,     0,   266,   267,   320,   321,   322,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   181,
     182,   183,   184,   316,     0,     0,     0,   265,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   187,
       0,     0,     0,     0,     0,     0,     0,   373,     0,   181,
     182,   317,   318,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   319,
       0,     0,     0,   128,   129,   374,   375,     0,   189,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   376,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   320,   321,
     322,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   377,   378,   379,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   597,   598,     0,
       0,     0,     0,     0,   459,   460,   461,   462,   463,   464,
     465,   466,   467,   468,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   480,   481,   482,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     599,     0,   489,     0,     0,     0,   600,   601,   602,   603,
     604,     0,   498,   499,   500,   501,   502,   503,   504,   505,
     506
};

static const yytype_int16 yycheck[] =
{
       4,     5,     3,    41,     3,     3,    92,   151,    36,   263,
      41,   106,   177,   177,   251,   596,   268,   678,   235,    41,
       4,     5,     3,   409,   723,   263,    95,    31,     3,   609,
      42,   268,   339,   740,   178,   563,   895,   813,    50,    43,
      39,   524,    41,   749,   621,    49,    30,    31,   108,    30,
      91,   540,    97,    98,    99,    92,    93,    95,    39,   206,
     290,    42,    43,   290,   641,     0,    41,    91,   298,    42,
     552,   298,    91,    91,   651,    91,   132,    50,   132,   614,
       3,     5,     6,     7,   106,     4,   142,   234,   142,    58,
     949,    95,    10,   869,   135,   132,    95,    95,    91,   140,
     132,   331,   878,   104,   331,   104,   683,   106,   132,   686,
     275,   110,   132,   257,    95,   175,   176,   823,   117,   135,
      95,   140,   140,   104,   140,   106,   273,   139,   131,    91,
      49,   106,    51,   661,   662,   110,   117,   665,   666,   667,
     668,   669,   670,   671,   672,   673,   674,   140,    58,   386,
     367,   155,   156,   157,   637,   154,   154,   252,   865,   648,
     246,   867,   392,    91,   132,   392,   170,   171,   172,   173,
     424,   653,    95,   135,   175,   176,   177,   404,   140,   154,
      90,   185,   186,    91,   188,   720,   424,   171,   172,   173,
     132,     5,     6,     7,   263,     5,     6,     7,   132,   779,
     953,    91,   247,   248,   132,   740,   592,   188,    42,   210,
     132,    91,   136,   214,   215,   275,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,   229,   230,
     252,   154,   140,   761,   235,    91,   240,   241,   991,   243,
      91,   548,   132,   904,   132,   869,   132,   391,  1001,   948,
     251,   416,   251,   252,   878,   135,   240,   241,   242,   243,
     140,    91,   263,   290,   263,     9,    91,   268,   132,   268,
     251,   298,   849,   131,   275,   966,   132,   252,   859,    91,
     138,   816,   263,   132,   861,   289,   863,   268,    91,   140,
     870,   868,    91,    37,    38,   296,   280,   281,   282,    43,
      91,   305,   306,   307,   331,   135,   310,    91,   999,   132,
     140,    55,   131,    91,   895,   140,   385,   897,    91,   138,
      91,   390,   136,   135,   325,   552,   136,   131,   140,   715,
     865,     9,   131,   132,   138,   131,   135,   140,   137,   135,
     594,   140,   343,   344,   345,    91,   490,   348,   585,   140,
      94,    95,    96,   497,    91,     9,   594,   135,   588,    37,
      38,   588,   140,     9,    91,   392,   367,   140,   949,   140,
      91,    91,    91,   517,   131,    91,   540,    55,   135,   132,
     137,   131,     9,    37,    38,   135,   390,   137,   923,    35,
      36,    37,    38,   132,   140,   625,   626,   627,   625,   626,
     627,    55,   132,   140,   132,   386,   792,     3,     4,    55,
      37,    38,   135,   140,   132,   416,    94,    95,    96,   140,
     140,   140,   131,   424,   140,   424,   653,   635,    55,   144,
     145,   290,   640,   295,   929,   144,   145,   132,   300,   298,
      94,    95,    96,   424,    40,   132,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   144,   145,   820,    91,    94,    95,    96,
     825,   132,   331,   968,   969,   729,   971,   132,    91,   974,
     132,   135,   131,   647,   648,    91,   132,   131,   783,   784,
     131,   729,   787,     3,     4,   140,    91,   140,   144,   145,
     995,   996,   997,    91,   890,   141,   131,   132,    91,   131,
     135,   539,   137,   140,   518,   140,    91,   131,   131,   132,
     135,    42,   135,   524,   137,   131,   132,   140,   131,   135,
      40,   137,   131,   392,   140,    10,   131,   132,   132,   540,
     135,   132,   137,   131,   132,   140,   139,   135,   132,   137,
       3,     4,   140,   142,   135,   137,   131,   132,   132,   131,
     135,   588,   137,   131,   563,   140,   131,   132,   131,   131,
     135,   131,   137,   131,   132,   576,   131,   135,   135,   137,
     131,   132,   131,   131,   135,   749,   137,    40,   563,   590,
     133,   138,   138,   594,   138,   594,    49,   138,   625,   626,
     627,   138,   131,   132,   138,   586,   135,   138,   137,   131,
     132,   138,   131,   135,   138,   137,   135,   847,   137,   620,
     847,   138,   138,   131,   628,   629,   630,   135,   133,   137,
     131,   775,   886,   885,   138,   657,   637,   131,   132,   138,
     138,   135,   138,   137,   131,   138,   647,   648,   886,   131,
     132,   131,   131,   135,   132,   137,   133,   138,   657,   823,
     136,   135,   661,   662,   135,   135,   665,   666,   667,   668,
     669,   670,   671,   672,   673,   674,   680,   139,   141,   538,
     131,   131,   657,   935,   131,    49,   661,   662,   136,   749,
     665,   666,   667,   668,   669,   670,   671,   672,   673,   674,
     131,   132,   138,   867,   135,   138,   137,   131,   132,   138,
     133,   135,   133,   137,   131,   132,    91,    43,   135,   137,
     137,   131,   132,   953,   143,   135,   953,   137,   729,   588,
     729,   776,   736,   142,   131,   132,   758,   596,   135,   142,
     137,   131,   132,    16,   133,   135,   142,   137,   749,   142,
     131,   132,   138,   133,   135,   614,   137,   136,   136,   758,
     990,   991,   761,   990,   991,   131,   625,   626,   627,   138,
     133,  1001,   131,   131,  1001,   813,   135,   135,   137,   137,
     132,   803,   813,   758,   132,   813,   761,   873,   143,   875,
     143,   886,   132,   139,   133,   132,   138,   133,   133,   133,
     131,   133,   143,   133,   803,   133,   133,    11,   133,   133,
     133,   133,   813,   133,   813,   813,   133,   138,   133,   138,
     847,   965,   823,   133,   133,   138,   137,   133,   803,    11,
     138,   143,   133,   133,   879,   880,   133,   133,   813,   133,
     878,   869,   133,   133,   133,   131,   850,   131,   131,   813,
     932,   736,   813,   939,   813,   744,    95,   251,   906,   850,
     924,   720,   176,   963,   886,   813,   867,   555,   869,   961,
     869,   948,   750,   110,   109,   237,   813,   878,   858,   878,
     786,   740,    -1,    -1,   885,   886,   885,   886,   933,   934,
      -1,    -1,    -1,    -1,   869,   940,   941,    -1,    -1,    -1,
      -1,    -1,    -1,   878,   885,    -1,    -1,    -1,    -1,    -1,
      -1,   886,   957,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   927,   928,   929,   953,    -1,    -1,    -1,
      -1,    -1,     9,    -1,   935,    -1,   935,    -1,    -1,    -1,
      -1,    -1,    -1,   927,   928,   929,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   935,    -1,     9,   816,    35,    36,
      37,    38,    -1,   990,   991,    -1,    -1,    -1,   972,   973,
     974,    -1,    -1,    -1,  1001,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    35,    36,    37,    38,    -1,    -1,   847,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   855,   856,   857,   858,
     859,   860,    55,    -1,    -1,    -1,   865,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,   895,    35,    36,    37,
      38,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,   923,    -1,    -1,   144,   145,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     949,   144,   145,    -1,   953,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   990,   991,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1001,     3,     4,     5,     6,     7,     8,     9,
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
      -1,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
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
      -1,    -1,    -1,    -1,    -1,   131,   132,   133,   134,   135,
      -1,   137,   138,   139,   140,   141,   142,    -1,   144,   145,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   131,   132,    -1,
     134,   135,    -1,   137,   138,   139,   140,   141,   142,   143,
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
     133,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
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
     132,   133,   134,   135,    -1,   137,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
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
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
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
      -1,    -1,   132,   133,   134,   135,    -1,   137,   138,   139,
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
      -1,    -1,   131,   132,    -1,   134,   135,    -1,   137,   138,
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
      -1,    -1,    -1,   131,   132,    -1,   134,   135,    -1,   137,
     138,   139,   140,   141,   142,    -1,   144,   145,   146,   147,
     148,   149,   150,   151,   152,   153,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      47,    -1,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    -1,    59,    60,    -1,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    -1,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    45,
      -1,    47,    -1,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    -1,    59,    60,    -1,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    -1,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,   135,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   132,   133,   134,
     135,    -1,   137,   138,   139,   140,   141,   142,    -1,   144,
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
      -1,   134,   135,    -1,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,   149,   150,   151,   152,
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
     132,    -1,   134,   135,    -1,   137,   138,   139,   140,   141,
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
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
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
      -1,    -1,   132,    -1,   134,   135,    -1,   137,    -1,    -1,
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
      -1,    -1,    -1,   132,    -1,   134,   135,    -1,   137,    -1,
      -1,   140,    -1,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,     3,     4,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    -1,    54,    55,    56,    57,
      58,    -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,     3,     4,   134,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    55,    56,    57,    -1,
      -1,    -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,   134,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    47,    48,    49,    -1,
      51,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,    -1,
      61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      91,    -1,    -1,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   134,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    44,    45,    -1,    47,    48,    49,    -1,    51,    -1,
      -1,    -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,   134,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    46,    47,    48,    49,    -1,    51,    52,    53,    54,
      55,    56,    57,    58,    -1,    -1,    61,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,     9,   131,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    35,    36,    37,    38,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    91,     9,
      -1,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,
       9,   135,    -1,   137,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,   135,    -1,   137,    55,    35,    36,    37,    38,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,     9,    91,    -1,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,     9,    -1,    -1,   135,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,   135,    55,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,     9,    -1,    91,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,     9,    -1,    -1,   134,    -1,    35,    36,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,    -1,    -1,    -1,    -1,   134,    55,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,    -1,    -1,    -1,    -1,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,   134,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   132,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    45,    -1,    47,    48,    49,
      -1,    51,    -1,    -1,    -1,    55,    56,    57,    -1,    -1,
      -1,    61,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      44,    45,    -1,    47,    48,    49,    -1,    51,    -1,    -1,
      -1,    55,    56,    57,    -1,    -1,    -1,    61,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    44,    45,    -1,    -1,
      -1,    49,    -1,    51,    -1,    -1,    -1,    55,    -1,    -1,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    -1,    44,    45,    -1,    -1,    -1,    49,    -1,    51,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     3,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    -1,    44,    45,
       9,    -1,    -1,    49,    -1,    51,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,
      -1,    -1,    -1,     5,     6,     7,    -1,     9,    -1,    -1,
      49,    -1,    51,    -1,    53,    91,    55,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,
      -1,    -1,    91,    55,    -1,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,     9,    -1,    -1,
      -1,    -1,    44,    45,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    35,    36,    37,    38,    -1,    -1,    -1,
      -1,    43,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    35,    36,    37,
      38,     9,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    37,
      38,    -1,    -1,    -1,    -1,    43,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    91,    -1,    -1,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,    35,    36,    37,    38,     9,    -1,    -1,    -1,    43,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    55,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,    -1,    -1,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,    35,    36,    37,    38,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    35,    36,    37,    38,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    55,    -1,    -1,    -1,    -1,
      -1,    91,    -1,    -1,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,    35,
      36,    37,    38,     9,    -1,    -1,    -1,    43,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     9,    -1,    35,
      36,    37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    55,
      -1,    -1,    -1,    35,    36,    37,    38,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    55,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,    59,    60,    -1,
      -1,    -1,    -1,    -1,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     132,    -1,   134,    -1,    -1,    -1,   138,   139,   140,   141,
     142,    -1,   144,   145,   146,   147,   148,   149,   150,   151,
     152
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
     161,   162,   173,   182,   185,   186,   200,   201,   205,   206,
     207,   252,   281,   282,   283,   284,   285,   286,   287,   288,
     290,   291,   294,   295,   296,   297,   301,    49,   135,   281,
     282,   291,   293,   294,   296,   293,   296,     9,    35,    36,
      37,    38,    55,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   175,   282,
     296,   135,   293,   296,   208,     3,     4,    40,    49,   186,
       9,    37,    38,    55,    94,    95,    96,   140,   282,   291,
     289,     3,     4,    40,    58,   162,   173,   286,   135,   282,
       9,    35,    36,    37,    38,    51,    53,    55,    91,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   282,   293,    58,    10,   255,   293,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   132,   132,   132,   132,   132,   132,   132,   132,   132,
     132,   144,   145,   254,   257,   258,   298,   299,   300,   254,
       3,     4,    39,    40,    56,    57,   162,   200,   204,   207,
     282,   283,   285,   291,   293,   294,   131,   135,   222,   222,
     222,   222,   131,    91,   140,    43,    92,    93,   202,   211,
     213,   217,   223,   253,   262,   265,   272,   281,   282,   291,
       3,     4,    40,   282,   284,   286,   298,   290,   288,    91,
     350,    91,   131,   164,   131,   163,   135,   174,   350,   131,
     165,   283,   293,   293,   293,     3,     4,    40,   141,   187,
      91,   293,   293,   293,   293,   131,     9,    37,    38,    55,
      94,    95,    96,   248,   281,   298,   248,   183,   262,   272,
     281,   350,   160,   293,   293,   282,    91,   131,   255,   135,
     131,   138,   281,   303,   306,   307,   281,   281,   311,   281,
     281,   281,   281,   281,   281,   281,   281,   281,   281,   281,
     281,   281,   281,    42,   131,   255,   253,   259,   144,   300,
     131,   293,   293,     9,    37,    38,    55,    94,    95,    96,
     293,    10,   254,   222,   222,    91,   202,   211,   281,   291,
      91,   132,   350,   134,   207,   228,   230,   236,   238,   281,
     282,   291,   293,   292,   214,   211,   217,   282,   212,   218,
     255,   139,   249,   250,   262,   270,   298,   273,   274,   275,
     132,    91,    91,   132,    91,   293,     3,     4,     5,     6,
       7,     8,    10,    11,    12,    13,    14,    15,    16,    39,
      40,    41,    42,    43,    47,    49,    50,    51,    52,    53,
      56,    57,    58,    59,    60,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,   131,   132,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   144,   145,
     146,   147,   148,   149,   150,   151,   152,   153,   295,   326,
     327,   328,   352,   353,   354,   355,   356,   357,   137,   169,
     169,   176,   177,   281,   135,   136,   169,   132,   131,   131,
     131,   293,   293,   293,     4,    51,   188,   190,   191,   194,
     196,   293,   131,   281,   131,   131,   132,   136,   135,   131,
     131,    91,    43,   131,   155,   256,   138,   281,   281,   281,
     138,   138,   281,   138,   138,   138,   138,   138,   138,   138,
     138,   138,   138,   138,   133,   133,   138,   253,   131,   131,
     131,   131,   207,   211,   282,    91,   134,   207,   350,   136,
     239,   229,   237,   132,    91,   132,   336,    59,    60,   132,
     138,   139,   140,   141,   142,   325,   326,    91,    42,    50,
     139,   219,   219,   131,   251,   133,   262,   276,   278,   224,
     226,   225,   228,   236,   282,   350,   350,   350,     5,     6,
       7,   170,   171,   293,   135,   135,   136,   138,   139,   176,
     135,   209,   131,   131,   131,   141,   138,   295,   186,   271,
     272,   184,   155,    43,   325,   136,   257,   302,   138,   133,
     133,   308,   310,   138,   287,   314,   316,   318,   320,   315,
     317,   319,   321,   322,   323,   281,   211,   282,   133,   281,
     137,   233,   219,   231,   228,   236,   232,    91,    92,    93,
     132,   135,   137,   138,   139,   140,   141,   142,   153,   295,
     326,   327,   328,   331,   338,   339,   340,   342,   344,   348,
     142,   142,   133,   143,   215,   221,   356,    16,   140,   141,
     330,   331,   333,   263,   142,   241,   242,   281,   241,    91,
     136,   143,   133,   293,   293,   293,   138,   166,   166,   176,
     178,   136,   166,   241,   189,    92,    93,   132,   260,   264,
     271,   271,   193,   241,   136,   325,   131,   286,   304,   287,
     287,   312,   133,   287,   287,   287,   287,   287,   287,   287,
     287,   287,   287,   138,   324,   132,   233,   132,   235,   293,
     241,   241,   346,   347,   345,   349,   341,   343,   143,   143,
     132,   219,   220,   333,   132,   267,   274,   277,   133,    58,
      90,   243,   245,   246,   132,   133,   228,   236,   170,     5,
       6,     7,   136,   167,   172,   136,   330,   136,   133,   188,
     192,   260,   269,   298,   273,   195,   139,   197,   198,   133,
     131,   133,   286,   309,   133,   287,   133,   133,   133,   133,
     133,   133,   133,   133,   138,   138,   133,   350,   222,   240,
     138,   234,   356,   133,   133,   332,   332,   332,   337,   336,
     332,   216,   219,   268,   279,   280,   138,   286,   227,    46,
     130,   131,   161,   162,   168,   173,   182,   185,   186,   203,
     206,   228,   236,   252,   281,   283,   285,   291,   301,   137,
     210,   197,   133,   260,   197,   199,    42,    50,   266,   305,
     138,   313,    11,    11,   133,   241,   235,   133,   138,   139,
     333,   334,   133,   133,   131,   136,   334,   335,   141,   143,
     241,   241,   143,   330,   244,   260,   241,     3,     4,    40,
     179,   180,   186,   203,   206,   283,   356,   254,   254,   162,
     203,   206,   222,   222,   217,   228,   236,   219,   261,   329,
     338,   356,   133,   351,   133,   133,   133,   233,   133,   234,
     133,   133,   243,   247,   133,   135,   137,   181,   293,   293,
     181,   293,     3,     4,    40,   180,   222,   222,   131,   131,
     254,   222,   222,   267,   338,   133,   353,   222,   266,   249,
     350,   351,   181,   181,   181,   293,   293,   293,   131,   136,
     131,   351,   131
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
#line 1605 "vtkParse.y"
    { markSig(); }
    break;

  case 119:
#line 1607 "vtkParse.y"
    {
      ValueInfo val;
      TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
      vtkParse_InitTemplateArg(arg);
      vtkParse_InitValue(&val);
      handle_complex_type(&val, (yyvsp[(2) - (3)].integer), (yyvsp[(3) - (3)].integer), copySig());
      arg->Type = val.Type;
      arg->Class = val.Class;
      if (getVarName())
        {
        arg->Name = vtkstrdup(getVarName());
        }
      vtkParse_AddArgumentToTemplate(currentTemplate, arg);
    }
    break;

  case 121:
#line 1623 "vtkParse.y"
    {
      TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
      vtkParse_InitTemplateArg(arg);
      if (getVarName())
        {
        arg->Name = vtkstrdup(getVarName());
        }
      vtkParse_AddArgumentToTemplate(currentTemplate, arg);
    }
    break;

  case 123:
#line 1633 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 124:
#line 1635 "vtkParse.y"
    {
      TemplateArgs *newTemplate = currentTemplate;
      TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
      vtkParse_InitTemplateArg(arg);
      popTemplate();
      arg->Template = newTemplate;
      if (getVarName())
        {
        arg->Name = vtkstrdup(getVarName());
        }
      vtkParse_AddArgumentToTemplate(currentTemplate, arg);
    }
    break;

  case 126:
#line 1650 "vtkParse.y"
    { postSig("class "); }
    break;

  case 127:
#line 1651 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 130:
#line 1657 "vtkParse.y"
    { postSig("="); markSig(); }
    break;

  case 131:
#line 1659 "vtkParse.y"
    {
      unsigned long i = currentTemplate->NumberOfArguments-1;
      TemplateArg *arg = currentTemplate->Arguments[i];
      chopSig();
      arg->Value = vtkstrdup(copySig());
    }
    break;

  case 146:
#line 1692 "vtkParse.y"
    {
      if (((yyvsp[(1) - (2)].integer) & VTK_PARSE_VIRTUAL) != 0)
        {
        currentFunction->IsVirtual = 1;
        }
    }
    break;

  case 147:
#line 1699 "vtkParse.y"
    {
      if (((yyvsp[(1) - (2)].integer) & VTK_PARSE_EXPLICIT) != 0)
        {
        currentFunction->IsExplicit = 1;
        }
    }
    break;

  case 159:
#line 1724 "vtkParse.y"
    { postSig("operator "); }
    break;

  case 160:
#line 1725 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 161:
#line 1729 "vtkParse.y"
    { postSig(")"); }
    break;

  case 162:
#line 1730 "vtkParse.y"
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

  case 163:
#line 1741 "vtkParse.y"
    { postSig(")"); }
    break;

  case 164:
#line 1742 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 165:
#line 1751 "vtkParse.y"
    { postSig("operator"); }
    break;

  case 166:
#line 1751 "vtkParse.y"
    { postSig((yyvsp[(3) - (3)].str)); }
    break;

  case 167:
#line 1752 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 168:
#line 1757 "vtkParse.y"
    { (yyval.str) = (yyvsp[(3) - (8)].str); }
    break;

  case 169:
#line 1760 "vtkParse.y"
    { postSig(")"); }
    break;

  case 170:
#line 1761 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 172:
#line 1770 "vtkParse.y"
    { postSig(" throw ()"); }
    break;

  case 174:
#line 1771 "vtkParse.y"
    { postSig(" const"); currentFunction->IsConst = 1; }
    break;

  case 176:
#line 1773 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 179:
#line 1788 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 180:
#line 1792 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 181:
#line 1794 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 182:
#line 1798 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 183:
#line 1799 "vtkParse.y"
    { markSig(); postSig("::"); }
    break;

  case 184:
#line 1800 "vtkParse.y"
    {
      postSig("(");
      (yyval.str) = vtkstrcat((yyvsp[(1) - (5)].str), copySig());
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
      (yyval.str) = vtkstrcat((yyvsp[(1) - (5)].str), copySig());
    }
    break;

  case 185:
#line 1806 "vtkParse.y"
    { (yyval.str) = (yyvsp[(6) - (8)].str); }
    break;

  case 186:
#line 1809 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 187:
#line 1810 "vtkParse.y"
    {
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 188:
#line 1817 "vtkParse.y"
    { postSig("("); }
    break;

  case 190:
#line 1818 "vtkParse.y"
    { postSig("("); }
    break;

  case 197:
#line 1830 "vtkParse.y"
    { postSig(")"); }
    break;

  case 198:
#line 1831 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 199:
#line 1840 "vtkParse.y"
    { postSig("~"); }
    break;

  case 200:
#line 1840 "vtkParse.y"
    { postSig("("); }
    break;

  case 201:
#line 1841 "vtkParse.y"
    { (yyval.str) = vtkstrcat("~", (yyvsp[(3) - (7)].str)); }
    break;

  case 203:
#line 1848 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 205:
#line 1851 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 206:
#line 1852 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 207:
#line 1853 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 209:
#line 1856 "vtkParse.y"
    { markSig(); }
    break;

  case 210:
#line 1858 "vtkParse.y"
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

  case 211:
#line 1880 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments-1;
      if (getVarValue())
        {
        currentFunction->Arguments[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 212:
#line 1888 "vtkParse.y"
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

  case 215:
#line 1916 "vtkParse.y"
    { clearVarValue(); }
    break;

  case 217:
#line 1920 "vtkParse.y"
    { postSig("="); clearVarValue(); markSig(); }
    break;

  case 218:
#line 1921 "vtkParse.y"
    { chopSig(); setVarValue(copySig()); }
    break;

  case 222:
#line 1934 "vtkParse.y"
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

  case 226:
#line 1988 "vtkParse.y"
    { postSig(", "); }
    break;

  case 228:
#line 1991 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 230:
#line 1993 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 232:
#line 1997 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 233:
#line 1998 "vtkParse.y"
    { postSig(")"); }
    break;

  case 234:
#line 2000 "vtkParse.y"
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

  case 235:
#line 2017 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 236:
#line 2018 "vtkParse.y"
    { postSig(")"); }
    break;

  case 237:
#line 2019 "vtkParse.y"
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
#line 2035 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 239:
#line 2036 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 240:
#line 2038 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 241:
#line 2042 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
         (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 242:
#line 2044 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
         (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 244:
#line 2048 "vtkParse.y"
    { currentFunction->IsConst = 1; }
    break;

  case 246:
#line 2051 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 247:
#line 2052 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 248:
#line 2053 "vtkParse.y"
    {
      (yyval.integer) = VTK_PARSE_FUNCTION;
      postSig(")");
      popFunction();
    }
    break;

  case 249:
#line 2058 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 250:
#line 2061 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 251:
#line 2063 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 252:
#line 2066 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 253:
#line 2068 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer)); }
    break;

  case 254:
#line 2071 "vtkParse.y"
    { clearVarName(); chopSig(); }
    break;

  case 256:
#line 2075 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 257:
#line 2078 "vtkParse.y"
    { clearArray(); }
    break;

  case 259:
#line 2082 "vtkParse.y"
    { clearArray(); }
    break;

  case 261:
#line 2085 "vtkParse.y"
    { postSig("["); }
    break;

  case 262:
#line 2085 "vtkParse.y"
    { postSig("]"); }
    break;

  case 265:
#line 2091 "vtkParse.y"
    { pushArraySize(""); }
    break;

  case 266:
#line 2092 "vtkParse.y"
    { markSig(); }
    break;

  case 267:
#line 2092 "vtkParse.y"
    { chopSig(); pushArraySize(copySig()); }
    break;

  case 268:
#line 2099 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 269:
#line 2100 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 270:
#line 2101 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 271:
#line 2102 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 272:
#line 2103 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 273:
#line 2104 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 274:
#line 2105 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); }
    break;

  case 275:
#line 2106 "vtkParse.y"
    { (yyval.str) = "size_t"; }
    break;

  case 276:
#line 2107 "vtkParse.y"
    { (yyval.str) = "ssize_t"; }
    break;

  case 277:
#line 2108 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt8"; }
    break;

  case 278:
#line 2109 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt8"; }
    break;

  case 279:
#line 2110 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt16"; }
    break;

  case 280:
#line 2111 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt16"; }
    break;

  case 281:
#line 2112 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt32"; }
    break;

  case 282:
#line 2113 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt32"; }
    break;

  case 283:
#line 2114 "vtkParse.y"
    { (yyval.str) = "vtkTypeInt64"; }
    break;

  case 284:
#line 2115 "vtkParse.y"
    { (yyval.str) = "vtkTypeUInt64"; }
    break;

  case 285:
#line 2116 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat32"; }
    break;

  case 286:
#line 2117 "vtkParse.y"
    { (yyval.str) = "vtkTypeFloat64"; }
    break;

  case 287:
#line 2118 "vtkParse.y"
    { (yyval.str) = "vtkIdType"; }
    break;

  case 288:
#line 2119 "vtkParse.y"
    { (yyval.str) = "vtkFloatingPointType"; }
    break;

  case 296:
#line 2140 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(1) - (1)].integer);
      setStorageType((yyval.integer));
    }
    break;

  case 297:
#line 2145 "vtkParse.y"
    {
      (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));
    }
    break;

  case 298:
#line 2151 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 299:
#line 2152 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 300:
#line 2153 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 301:
#line 2154 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 302:
#line 2155 "vtkParse.y"
    { postSig("explicit "); (yyval.integer) = VTK_PARSE_EXPLICIT; }
    break;

  case 303:
#line 2156 "vtkParse.y"
    { postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 304:
#line 2157 "vtkParse.y"
    { postSig("virtual "); (yyval.integer) = VTK_PARSE_VIRTUAL; }
    break;

  case 305:
#line 2160 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 306:
#line 2161 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 307:
#line 2164 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 308:
#line 2165 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 309:
#line 2168 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 310:
#line 2169 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 311:
#line 2170 "vtkParse.y"
    { (yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer)); }
    break;

  case 312:
#line 2173 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 313:
#line 2175 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 314:
#line 2177 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 315:
#line 2178 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 316:
#line 2179 "vtkParse.y"
    { postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 317:
#line 2180 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 318:
#line 2181 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 319:
#line 2182 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 320:
#line 2183 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 321:
#line 2186 "vtkParse.y"
    { postSig("const "); (yyval.integer) = VTK_PARSE_CONST; }
    break;

  case 322:
#line 2189 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<"); }
    break;

  case 323:
#line 2191 "vtkParse.y"
    {
      chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();
    }
    break;

  case 327:
#line 2203 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), "::", (yyvsp[(3) - (3)].str));
      preScopeSig((yyvsp[(1) - (3)].str));
    }
    break;

  case 328:
#line 2208 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), "::", (yyvsp[(3) - (3)].str));
      preScopeSig("");
    }
    break;

  case 329:
#line 2213 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat3((yyvsp[(1) - (4)].str), "::", (yyvsp[(4) - (4)].str));
      preScopeSig("");
    }
    break;

  case 330:
#line 2218 "vtkParse.y"
    {
      (yyval.str) = vtkstrcat("::", (yyvsp[(2) - (2)].str));
      preScopeSig("");
    }
    break;

  case 331:
#line 2224 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 332:
#line 2225 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 333:
#line 2228 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING; }
    break;

  case 334:
#line 2229 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 335:
#line 2230 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 336:
#line 2231 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 337:
#line 2232 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 338:
#line 2233 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 339:
#line 2234 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_QOBJECT; }
    break;

  case 340:
#line 2235 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T; }
    break;

  case 341:
#line 2236 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T; }
    break;

  case 342:
#line 2237 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 343:
#line 2238 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 344:
#line 2239 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 345:
#line 2240 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 346:
#line 2241 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 347:
#line 2242 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 348:
#line 2243 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 349:
#line 2244 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 350:
#line 2245 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 351:
#line 2246 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 352:
#line 2247 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE; }
    break;

  case 353:
#line 2248 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 354:
#line 2251 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 355:
#line 2252 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 356:
#line 2253 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT; }
    break;

  case 357:
#line 2254 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE; }
    break;

  case 358:
#line 2255 "vtkParse.y"
    { typeSig("long double"); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 359:
#line 2256 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR; }
    break;

  case 360:
#line 2257 "vtkParse.y"
    { typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 361:
#line 2259 "vtkParse.y"
    { typeSig("unsigned char"); (yyval.integer) = VTK_PARSE_UNSIGNED_CHAR; }
    break;

  case 362:
#line 2260 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 363:
#line 2262 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 364:
#line 2263 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT; }
    break;

  case 365:
#line 2265 "vtkParse.y"
    { typeSig("unsigned short"); (yyval.integer) = VTK_PARSE_UNSIGNED_SHORT; }
    break;

  case 366:
#line 2266 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG; }
    break;

  case 367:
#line 2268 "vtkParse.y"
    { typeSig("unsigned long"); (yyval.integer) = VTK_PARSE_UNSIGNED_LONG; }
    break;

  case 368:
#line 2269 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG; }
    break;

  case 369:
#line 2271 "vtkParse.y"
    {typeSig("unsigned long long");(yyval.integer)=VTK_PARSE_UNSIGNED_LONG_LONG; }
    break;

  case 370:
#line 2272 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64; }
    break;

  case 371:
#line 2274 "vtkParse.y"
    { typeSig("unsigned __int64"); (yyval.integer) = VTK_PARSE_UNSIGNED___INT64; }
    break;

  case 372:
#line 2275 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 373:
#line 2276 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT;}
    break;

  case 374:
#line 2296 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 375:
#line 2297 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 376:
#line 2298 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 377:
#line 2303 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 378:
#line 2305 "vtkParse.y"
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

  case 379:
#line 2316 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 380:
#line 2317 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 381:
#line 2324 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 382:
#line 2325 "vtkParse.y"
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

  case 383:
#line 2334 "vtkParse.y"
    {postSig("Get");}
    break;

  case 384:
#line 2335 "vtkParse.y"
    {markSig();}
    break;

  case 385:
#line 2335 "vtkParse.y"
    {swapSig();}
    break;

  case 386:
#line 2336 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(7) - (9)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 387:
#line 2344 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 388:
#line 2345 "vtkParse.y"
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

  case 389:
#line 2354 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 390:
#line 2355 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 391:
#line 2363 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 392:
#line 2363 "vtkParse.y"
    {closeSig();}
    break;

  case 393:
#line 2365 "vtkParse.y"
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

  case 394:
#line 2396 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 395:
#line 2397 "vtkParse.y"
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

  case 396:
#line 2406 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 397:
#line 2407 "vtkParse.y"
    {markSig();}
    break;

  case 398:
#line 2407 "vtkParse.y"
    {swapSig();}
    break;

  case 399:
#line 2408 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 400:
#line 2417 "vtkParse.y"
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

  case 401:
#line 2434 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 402:
#line 2435 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 403:
#line 2439 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 404:
#line 2440 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 405:
#line 2444 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 406:
#line 2445 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 407:
#line 2449 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 408:
#line 2450 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 409:
#line 2454 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 410:
#line 2455 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 411:
#line 2459 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 412:
#line 2460 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 413:
#line 2464 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 414:
#line 2465 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 415:
#line 2469 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 416:
#line 2470 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 417:
#line 2474 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 418:
#line 2476 "vtkParse.y"
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

  case 419:
#line 2491 "vtkParse.y"
    {startSig();}
    break;

  case 420:
#line 2493 "vtkParse.y"
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

  case 421:
#line 2506 "vtkParse.y"
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

  case 422:
#line 2543 "vtkParse.y"
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

  case 423:
#line 2581 "vtkParse.y"
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

  case 426:
#line 2640 "vtkParse.y"
    { (yyval.str) = "()"; }
    break;

  case 427:
#line 2641 "vtkParse.y"
    { (yyval.str) = "[]"; }
    break;

  case 428:
#line 2642 "vtkParse.y"
    { (yyval.str) = " new[]"; }
    break;

  case 429:
#line 2643 "vtkParse.y"
    { (yyval.str) = " delete[]"; }
    break;

  case 430:
#line 2644 "vtkParse.y"
    { (yyval.str) = "<"; }
    break;

  case 431:
#line 2645 "vtkParse.y"
    { (yyval.str) = ">"; }
    break;

  case 432:
#line 2646 "vtkParse.y"
    { (yyval.str) = ","; }
    break;

  case 433:
#line 2647 "vtkParse.y"
    { (yyval.str) = "="; }
    break;

  case 435:
#line 2651 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 436:
#line 2652 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 437:
#line 2653 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 438:
#line 2654 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 439:
#line 2655 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 440:
#line 2656 "vtkParse.y"
    { (yyval.str) = "!"; }
    break;

  case 441:
#line 2657 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 442:
#line 2658 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 443:
#line 2659 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 444:
#line 2660 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 445:
#line 2661 "vtkParse.y"
    { (yyval.str) = " new"; }
    break;

  case 446:
#line 2662 "vtkParse.y"
    { (yyval.str) = " delete"; }
    break;

  case 447:
#line 2663 "vtkParse.y"
    { (yyval.str) = "<<="; }
    break;

  case 448:
#line 2664 "vtkParse.y"
    { (yyval.str) = ">>="; }
    break;

  case 449:
#line 2665 "vtkParse.y"
    { (yyval.str) = "<<"; }
    break;

  case 450:
#line 2666 "vtkParse.y"
    { (yyval.str) = ">>"; }
    break;

  case 451:
#line 2667 "vtkParse.y"
    { (yyval.str) = "->*"; }
    break;

  case 452:
#line 2668 "vtkParse.y"
    { (yyval.str) = "->"; }
    break;

  case 453:
#line 2669 "vtkParse.y"
    { (yyval.str) = "+="; }
    break;

  case 454:
#line 2670 "vtkParse.y"
    { (yyval.str) = "-="; }
    break;

  case 455:
#line 2671 "vtkParse.y"
    { (yyval.str) = "*="; }
    break;

  case 456:
#line 2672 "vtkParse.y"
    { (yyval.str) = "/="; }
    break;

  case 457:
#line 2673 "vtkParse.y"
    { (yyval.str) = "%="; }
    break;

  case 458:
#line 2674 "vtkParse.y"
    { (yyval.str) = "++"; }
    break;

  case 459:
#line 2675 "vtkParse.y"
    { (yyval.str) = "--"; }
    break;

  case 460:
#line 2676 "vtkParse.y"
    { (yyval.str) = "&="; }
    break;

  case 461:
#line 2677 "vtkParse.y"
    { (yyval.str) = "|="; }
    break;

  case 462:
#line 2678 "vtkParse.y"
    { (yyval.str) = "^="; }
    break;

  case 463:
#line 2679 "vtkParse.y"
    { (yyval.str) = "&&="; }
    break;

  case 464:
#line 2680 "vtkParse.y"
    { (yyval.str) = "||="; }
    break;

  case 465:
#line 2681 "vtkParse.y"
    { (yyval.str) = "&&"; }
    break;

  case 466:
#line 2682 "vtkParse.y"
    { (yyval.str) = "||"; }
    break;

  case 467:
#line 2683 "vtkParse.y"
    { (yyval.str) = "=="; }
    break;

  case 468:
#line 2684 "vtkParse.y"
    { (yyval.str) = "!="; }
    break;

  case 469:
#line 2685 "vtkParse.y"
    { (yyval.str) = "<="; }
    break;

  case 470:
#line 2686 "vtkParse.y"
    { (yyval.str) = ">="; }
    break;

  case 471:
#line 2689 "vtkParse.y"
    { (yyval.str) = "typedef"; }
    break;

  case 472:
#line 2690 "vtkParse.y"
    { (yyval.str) = "typename"; }
    break;

  case 473:
#line 2691 "vtkParse.y"
    { (yyval.str) = "class"; }
    break;

  case 474:
#line 2692 "vtkParse.y"
    { (yyval.str) = "struct"; }
    break;

  case 475:
#line 2693 "vtkParse.y"
    { (yyval.str) = "union"; }
    break;

  case 476:
#line 2694 "vtkParse.y"
    { (yyval.str) = "template"; }
    break;

  case 477:
#line 2695 "vtkParse.y"
    { (yyval.str) = "public"; }
    break;

  case 478:
#line 2696 "vtkParse.y"
    { (yyval.str) = "protected"; }
    break;

  case 479:
#line 2697 "vtkParse.y"
    { (yyval.str) = "private"; }
    break;

  case 480:
#line 2698 "vtkParse.y"
    { (yyval.str) = "const"; }
    break;

  case 481:
#line 2699 "vtkParse.y"
    { (yyval.str) = "static"; }
    break;

  case 482:
#line 2700 "vtkParse.y"
    { (yyval.str) = "inline"; }
    break;

  case 483:
#line 2701 "vtkParse.y"
    { (yyval.str) = "virtual"; }
    break;

  case 484:
#line 2702 "vtkParse.y"
    { (yyval.str) = "extern"; }
    break;

  case 485:
#line 2703 "vtkParse.y"
    { (yyval.str) = "namespace"; }
    break;

  case 486:
#line 2704 "vtkParse.y"
    { (yyval.str) = "operator"; }
    break;

  case 487:
#line 2705 "vtkParse.y"
    { (yyval.str) = "enum"; }
    break;

  case 488:
#line 2706 "vtkParse.y"
    { (yyval.str) = "throw"; }
    break;

  case 489:
#line 2707 "vtkParse.y"
    { (yyval.str) = "const_cast"; }
    break;

  case 490:
#line 2708 "vtkParse.y"
    { (yyval.str) = "dynamic_cast"; }
    break;

  case 491:
#line 2709 "vtkParse.y"
    { (yyval.str) = "static_cast"; }
    break;

  case 492:
#line 2710 "vtkParse.y"
    { (yyval.str) = "reinterpret_cast"; }
    break;

  case 507:
#line 2738 "vtkParse.y"
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

  case 508:
#line 2768 "vtkParse.y"
    { postSig(":"); postSig(" "); }
    break;

  case 509:
#line 2768 "vtkParse.y"
    { postSig("."); }
    break;

  case 510:
#line 2769 "vtkParse.y"
    { chopSig(); postSig("::"); }
    break;

  case 511:
#line 2770 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" ");}
    break;

  case 512:
#line 2771 "vtkParse.y"
    { postSig((yyvsp[(1) - (1)].str)); postSig(" "); }
    break;

  case 517:
#line 2778 "vtkParse.y"
    { postSig("< "); }
    break;

  case 518:
#line 2779 "vtkParse.y"
    { postSig("> "); }
    break;

  case 520:
#line 2782 "vtkParse.y"
    { postSig("= "); }
    break;

  case 521:
#line 2783 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 523:
#line 2786 "vtkParse.y"
    { chopSig(); postSig(";"); }
    break;

  case 531:
#line 2800 "vtkParse.y"
    { postSig("= "); }
    break;

  case 532:
#line 2801 "vtkParse.y"
    { chopSig(); postSig(", "); }
    break;

  case 533:
#line 2805 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '<') { postSig(" "); }
      postSig("<");
    }
    break;

  case 534:
#line 2811 "vtkParse.y"
    {
      chopSig();
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig("> ");
    }
    break;

  case 535:
#line 2818 "vtkParse.y"
    { postSig("["); }
    break;

  case 536:
#line 2819 "vtkParse.y"
    { chopSig(); postSig("] "); }
    break;

  case 537:
#line 2822 "vtkParse.y"
    { postSig("("); }
    break;

  case 538:
#line 2823 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 539:
#line 2824 "vtkParse.y"
    {postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*"); }
    break;

  case 540:
#line 2825 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 541:
#line 2826 "vtkParse.y"
    {postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&"); }
    break;

  case 542:
#line 2827 "vtkParse.y"
    { chopSig(); postSig(") "); }
    break;

  case 543:
#line 2830 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 544:
#line 2830 "vtkParse.y"
    { postSig("} "); }
    break;


/* Line 1267 of yacc.c.  */
#line 7362 "vtkParse.tab.c"
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


#line 2863 "vtkParse.y"

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
}

void vtkParse_CopyTemplateArg(TemplateArg *arg, const TemplateArg *orig)
{
  arg->Template = NULL;

  if (orig->Template)
    {
    arg->Template = (TemplateArgs *)malloc(sizeof(TemplateArgs));
    vtkParse_CopyTemplateArgs(arg->Template, orig->Template);
    }

  arg->Type = orig->Type;
  arg->Class = orig->Class;
  arg->Name = orig->Name;
  arg->Value = orig->Value;
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
