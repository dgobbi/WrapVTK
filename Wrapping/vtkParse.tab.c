
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

/* mark this signature as legacy */
void legacySig(void)
{
  currentFunction->IsLegacy = 1;
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



/* Line 189 of yacc.c  */
#line 1231 "vtkParse.tab.c"

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
     CLASS_REF = 296,
     OTHER = 297,
     CONST = 298,
     CONST_PTR = 299,
     CONST_EQUAL = 300,
     OPERATOR = 301,
     UNSIGNED = 302,
     SIGNED = 303,
     FRIEND = 304,
     INLINE = 305,
     MUTABLE = 306,
     TEMPLATE = 307,
     TYPENAME = 308,
     TYPEDEF = 309,
     NAMESPACE = 310,
     USING = 311,
     VTK_ID = 312,
     STATIC = 313,
     EXTERN = 314,
     VAR_FUNCTION = 315,
     VTK_LEGACY = 316,
     NEW = 317,
     DELETE = 318,
     EXPLICIT = 319,
     OP_LSHIFT_EQ = 320,
     OP_RSHIFT_EQ = 321,
     OP_LSHIFT = 322,
     OP_RSHIFT = 323,
     OP_ARROW_POINTER = 324,
     OP_ARROW = 325,
     OP_INCR = 326,
     OP_DECR = 327,
     OP_PLUS_EQ = 328,
     OP_MINUS_EQ = 329,
     OP_TIMES_EQ = 330,
     OP_DIVIDE_EQ = 331,
     OP_REMAINDER_EQ = 332,
     OP_AND_EQ = 333,
     OP_OR_EQ = 334,
     OP_XOR_EQ = 335,
     OP_LOGIC_AND_EQ = 336,
     OP_LOGIC_OR_EQ = 337,
     OP_LOGIC_AND = 338,
     OP_LOGIC_OR = 339,
     OP_LOGIC_EQ = 340,
     OP_LOGIC_NEQ = 341,
     OP_LOGIC_LEQ = 342,
     OP_LOGIC_GEQ = 343,
     ELLIPSIS = 344,
     DOUBLE_COLON = 345,
     LP = 346,
     LA = 347,
     QT_ID = 348,
     StdString = 349,
     UnicodeString = 350,
     IdType = 351,
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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 1178 "vtkParse.y"

  const char   *str;
  unsigned int  integer;



/* Line 222 of yacc.c  */
#line 1530 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1542 "vtkParse.tab.c"

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
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   5712

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  152
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  554
/* YYNRULES -- Number of states.  */
#define YYNSTATES  982

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
       2,     2,     2,   150,     2,     2,     2,   144,   145,     2,
     130,   131,   142,   140,   137,   139,   151,   143,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   136,   129,
     134,   138,   135,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   148,     2,   149,   147,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   132,   146,   133,   141,     2,     2,     2,
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
       0,     0,     3,     4,     5,     9,    11,    15,    17,    19,
      21,    23,    27,    32,    34,    37,    41,    44,    47,    50,
      54,    57,    59,    62,    67,    72,    77,    79,    85,    86,
      93,    98,    99,   107,   108,   119,   120,   128,   129,   140,
     145,   146,   154,   155,   166,   171,   172,   173,   177,   181,
     183,   187,   189,   191,   195,   200,   203,   206,   208,   211,
     215,   219,   222,   226,   230,   233,   239,   241,   243,   244,
     247,   249,   253,   255,   258,   261,   264,   266,   268,   270,
     271,   278,   279,   285,   286,   288,   292,   294,   298,   300,
     302,   304,   306,   308,   310,   312,   314,   316,   318,   319,
     323,   324,   329,   330,   335,   337,   339,   341,   343,   345,
     347,   349,   351,   353,   355,   357,   360,   364,   368,   371,
     375,   378,   380,   386,   390,   395,   400,   405,   409,   411,
     416,   421,   425,   429,   430,   436,   438,   439,   444,   447,
     450,   451,   455,   457,   459,   460,   461,   465,   470,   475,
     478,   482,   487,   493,   497,   502,   509,   517,   523,   530,
     533,   537,   540,   544,   548,   550,   553,   556,   559,   563,
     565,   568,   571,   575,   579,   581,   584,   588,   589,   590,
     599,   600,   604,   605,   606,   614,   615,   619,   620,   623,
     626,   628,   630,   634,   635,   641,   642,   643,   653,   654,
     658,   659,   665,   666,   670,   671,   675,   680,   682,   683,
     689,   690,   691,   694,   696,   698,   699,   704,   705,   706,
     712,   714,   716,   719,   720,   722,   723,   727,   732,   737,
     741,   744,   745,   748,   749,   750,   755,   756,   759,   760,
     764,   767,   768,   774,   777,   778,   784,   786,   788,   790,
     792,   794,   795,   796,   801,   803,   805,   808,   810,   813,
     814,   816,   818,   819,   821,   822,   825,   826,   832,   833,
     835,   836,   838,   840,   842,   844,   846,   848,   850,   852,
     854,   857,   860,   864,   867,   870,   874,   876,   879,   881,
     884,   886,   889,   892,   894,   896,   898,   900,   901,   905,
     906,   912,   913,   919,   920,   926,   928,   929,   934,   936,
     938,   940,   942,   944,   946,   948,   950,   952,   956,   960,
     962,   964,   966,   968,   970,   972,   974,   976,   979,   981,
     983,   986,   988,   990,   992,   995,   998,  1001,  1004,  1006,
    1008,  1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,  1026,
    1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,  1046,
    1048,  1050,  1052,  1054,  1056,  1058,  1060,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1080,  1082,  1084,  1086,
    1088,  1090,  1091,  1098,  1099,  1101,  1102,  1103,  1108,  1110,
    1111,  1115,  1116,  1120,  1122,  1123,  1128,  1129,  1130,  1140,
    1142,  1145,  1147,  1149,  1151,  1153,  1155,  1157,  1159,  1161,
    1163,  1164,  1172,  1173,  1174,  1175,  1185,  1186,  1192,  1193,
    1199,  1200,  1201,  1212,  1213,  1221,  1222,  1223,  1224,  1234,
    1241,  1242,  1250,  1251,  1259,  1260,  1268,  1269,  1277,  1278,
    1286,  1287,  1295,  1296,  1304,  1305,  1313,  1314,  1324,  1325,
    1335,  1340,  1345,  1353,  1356,  1359,  1363,  1367,  1369,  1371,
    1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,
    1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1450,
    1453,  1454,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,
    1473,  1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,
    1493,  1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,
    1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,
    1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,  1551,
    1553,  1557,  1561,  1565,  1569
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     153,     0,    -1,    -1,    -1,   153,   154,   155,    -1,   247,
      -1,   173,   249,   129,    -1,   191,    -1,   157,    -1,   156,
      -1,   189,    -1,   159,   249,   129,    -1,   192,   159,   249,
     129,    -1,    41,    -1,   209,   221,    -1,   192,   209,   221,
      -1,   208,   221,    -1,   203,   221,    -1,   204,   221,    -1,
     192,   203,   221,    -1,   201,   221,    -1,   311,    -1,   290,
     129,    -1,     9,   130,   336,   131,    -1,    57,   130,   336,
     131,    -1,    93,   130,   336,   131,    -1,   129,    -1,    59,
      10,   132,   153,   133,    -1,    -1,    55,   290,   158,   132,
     153,   133,    -1,    55,   132,   336,   133,    -1,    -1,     4,
     274,   160,   169,   132,   166,   133,    -1,    -1,     4,   274,
     134,   286,   135,   161,   169,   132,   166,   133,    -1,    -1,
       3,   274,   162,   169,   132,   166,   133,    -1,    -1,     3,
     274,   134,   286,   135,   163,   169,   132,   166,   133,    -1,
       3,   132,   336,   133,    -1,    -1,    40,   274,   164,   169,
     132,   166,   133,    -1,    -1,    40,   274,   134,   286,   135,
     165,   169,   132,   166,   133,    -1,    40,   132,   336,   133,
      -1,    -1,    -1,   166,   167,   168,    -1,   166,   172,   136,
      -1,   247,    -1,   173,   249,   129,    -1,   191,    -1,   189,
      -1,   159,   249,   129,    -1,   192,   159,   249,   129,    -1,
      49,   187,    -1,    49,   186,    -1,    41,    -1,   209,   221,
      -1,    49,   209,   221,    -1,   192,   209,   221,    -1,   206,
     221,    -1,    49,   206,   221,    -1,   192,   206,   221,    -1,
     202,   221,    -1,   128,   130,   336,   131,   129,    -1,   311,
      -1,   129,    -1,    -1,   136,   170,    -1,   171,    -1,   171,
     137,   170,    -1,   288,    -1,     6,   288,    -1,     7,   288,
      -1,     5,   288,    -1,     5,    -1,     6,    -1,     7,    -1,
      -1,    39,   274,   174,   132,   176,   133,    -1,    -1,    39,
     175,   132,   176,   133,    -1,    -1,   177,    -1,   177,   137,
     176,    -1,   274,    -1,   274,   138,   180,    -1,   179,    -1,
     274,    -1,   289,    -1,   282,    -1,    16,    -1,    11,    -1,
      13,    -1,    12,    -1,    15,    -1,   178,    -1,    -1,   184,
     181,   180,    -1,    -1,   178,   185,   182,   180,    -1,    -1,
     130,   183,   180,   131,    -1,   139,    -1,   140,    -1,   141,
      -1,   139,    -1,   140,    -1,   142,    -1,   143,    -1,   144,
      -1,   145,    -1,   146,    -1,   147,    -1,   192,   187,    -1,
       4,   274,   188,    -1,     3,   274,   188,    -1,     3,   188,
      -1,    40,   274,   188,    -1,    40,   188,    -1,   129,    -1,
     132,   336,   133,   337,   129,    -1,   136,   337,   129,    -1,
     190,   277,   257,   129,    -1,   190,   159,   243,   129,    -1,
     190,   173,   243,   129,    -1,   190,    60,   129,    -1,    54,
      -1,    56,    55,   288,   129,    -1,    56,    53,   288,   129,
      -1,    56,   288,   129,    -1,    52,   134,   135,    -1,    -1,
      52,   134,   193,   194,   135,    -1,   196,    -1,    -1,   196,
     137,   195,   194,    -1,   295,   199,    -1,   198,   199,    -1,
      -1,   197,   192,   199,    -1,     4,    -1,    53,    -1,    -1,
      -1,   274,   200,   244,    -1,    61,   130,   203,   131,    -1,
      61,   130,   206,   131,    -1,   275,   218,    -1,   275,   205,
     218,    -1,   290,    90,   141,   233,    -1,    50,   290,    90,
     141,   233,    -1,   290,    90,   226,    -1,    50,   290,    90,
     226,    -1,   290,    90,   290,    90,   141,   233,    -1,    50,
     290,    90,   290,    90,   141,   233,    -1,   290,    90,   290,
      90,   226,    -1,    50,   290,    90,   290,    90,   226,    -1,
     290,    90,    -1,   205,   290,    90,    -1,   141,   233,    -1,
      50,   141,   233,    -1,     8,   141,   233,    -1,   226,    -1,
      50,   226,    -1,   207,   226,    -1,   275,   218,    -1,     8,
     275,   218,    -1,    64,    -1,    50,    64,    -1,    64,    50,
      -1,   290,    90,   210,    -1,   275,   205,   213,    -1,   210,
      -1,   275,   213,    -1,     8,   277,   213,    -1,    -1,    -1,
      46,   275,   130,   211,   236,   131,   212,   220,    -1,    -1,
     215,   214,   220,    -1,    -1,    -1,    46,   334,   216,   130,
     217,   236,   131,    -1,    -1,   222,   219,   220,    -1,    -1,
     138,    16,    -1,    45,    16,    -1,    43,    -1,   129,    -1,
     132,   336,   133,    -1,    -1,   274,   130,   223,   236,   131,
      -1,    -1,    -1,   274,   134,   224,   286,   135,   130,   225,
     236,   131,    -1,    -1,   228,   227,   230,    -1,    -1,   274,
     130,   229,   236,   131,    -1,    -1,   136,   232,   231,    -1,
      -1,   137,   232,   231,    -1,   274,   130,   336,   131,    -1,
     234,    -1,    -1,   274,   130,   235,   236,   131,    -1,    -1,
      -1,   237,   238,    -1,    89,    -1,   240,    -1,    -1,   240,
     137,   239,   238,    -1,    -1,    -1,   241,   277,   255,   242,
     244,    -1,    60,    -1,   274,    -1,   291,   274,    -1,    -1,
     245,    -1,    -1,   138,   246,   298,    -1,   275,   248,   250,
     129,    -1,    58,    60,   250,   129,    -1,    60,   250,   129,
      -1,   257,   244,    -1,    -1,   252,   250,    -1,    -1,    -1,
     250,   137,   251,   252,    -1,    -1,   253,   248,    -1,    -1,
     291,   254,   248,    -1,   265,   267,    -1,    -1,   259,   263,
     131,   256,   261,    -1,   266,   267,    -1,    -1,   260,   264,
     131,   258,   261,    -1,   130,    -1,    91,    -1,    92,    -1,
      91,    -1,    92,    -1,    -1,    -1,   130,   262,   236,   131,
      -1,   268,    -1,   255,    -1,   291,   255,    -1,   257,    -1,
     291,   257,    -1,    -1,   266,    -1,   274,    -1,    -1,   268,
      -1,    -1,   269,   270,    -1,    -1,   272,   148,   271,   273,
     149,    -1,    -1,   270,    -1,    -1,   180,    -1,    57,    -1,
      93,    -1,     9,    -1,    38,    -1,    37,    -1,    94,    -1,
      95,    -1,   277,    -1,    51,   277,    -1,    59,   277,    -1,
      59,    10,   277,    -1,    50,   277,    -1,   276,   277,    -1,
      50,   276,   277,    -1,    58,    -1,    58,    50,    -1,   278,
      -1,   278,   291,    -1,   280,    -1,   279,   280,    -1,   280,
     279,    -1,    43,    -1,   294,    -1,   282,    -1,   289,    -1,
      -1,    53,   281,   288,    -1,    -1,    57,   134,   283,   286,
     135,    -1,    -1,     9,   134,   284,   286,   135,    -1,    -1,
      93,   134,   285,   286,   135,    -1,   277,    -1,    -1,   277,
     137,   287,   286,    -1,    57,    -1,     9,    -1,    93,    -1,
      38,    -1,    37,    -1,    94,    -1,    95,    -1,   282,    -1,
     289,    -1,   290,    90,   288,    -1,   282,    90,   288,    -1,
       9,    -1,    93,    -1,    57,    -1,    38,    -1,    37,    -1,
      94,    -1,    95,    -1,   145,    -1,   292,   145,    -1,   292,
      -1,   293,    -1,   292,   293,    -1,   142,    -1,    44,    -1,
     295,    -1,     4,   296,    -1,     3,   296,    -1,    40,   296,
      -1,    39,   296,    -1,   297,    -1,   296,    -1,    94,    -1,
      95,    -1,    37,    -1,    38,    -1,     9,    -1,    57,    -1,
      93,    -1,    33,    -1,    34,    -1,    35,    -1,    36,    -1,
      97,    -1,    98,    -1,    99,    -1,   100,    -1,   101,    -1,
     102,    -1,   103,    -1,   104,    -1,   105,    -1,   106,    -1,
      96,    -1,    17,    -1,    18,    -1,    19,    -1,    30,    -1,
      31,    -1,    32,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,    26,    -1,    27,    -1,
      28,    -1,    29,    -1,    48,    -1,    47,    -1,   303,    -1,
      -1,   132,   299,   298,   301,   300,   133,    -1,    -1,   137,
      -1,    -1,    -1,   301,   137,   302,   298,    -1,   310,    -1,
      -1,   140,   304,   310,    -1,    -1,   139,   305,   310,    -1,
     309,    -1,    -1,   130,   306,   303,   131,    -1,    -1,    -1,
       9,   134,   307,   278,   135,   130,   308,   310,   131,    -1,
      10,    -1,   309,    10,    -1,    16,    -1,    11,    -1,    13,
      -1,    12,    -1,    14,    -1,    15,    -1,     9,    -1,    57,
      -1,    93,    -1,    -1,   107,   130,   274,   137,   312,   277,
     131,    -1,    -1,    -1,    -1,   108,   130,   313,   274,   137,
     314,   277,   315,   131,    -1,    -1,   109,   130,   316,   274,
     131,    -1,    -1,   110,   130,   317,   274,   131,    -1,    -1,
      -1,   111,   130,   274,   137,   318,   294,   319,   137,   337,
     131,    -1,    -1,   112,   130,   274,   137,   320,   294,   131,
      -1,    -1,    -1,    -1,   113,   130,   321,   274,   137,   322,
     294,   323,   131,    -1,   114,   130,   274,   137,   294,   131,
      -1,    -1,   115,   130,   274,   137,   324,   294,   131,    -1,
      -1,   119,   130,   274,   137,   325,   294,   131,    -1,    -1,
     116,   130,   274,   137,   326,   294,   131,    -1,    -1,   120,
     130,   274,   137,   327,   294,   131,    -1,    -1,   117,   130,
     274,   137,   328,   294,   131,    -1,    -1,   121,   130,   274,
     137,   329,   294,   131,    -1,    -1,   118,   130,   274,   137,
     330,   294,   131,    -1,    -1,   122,   130,   274,   137,   331,
     294,   131,    -1,    -1,   123,   130,   274,   137,   332,   294,
     137,    11,   131,    -1,    -1,   124,   130,   274,   137,   333,
     294,   137,    11,   131,    -1,   125,   130,   274,   131,    -1,
     126,   130,   274,   131,    -1,   127,   130,   274,   137,   274,
     300,   131,    -1,   130,   131,    -1,   148,   149,    -1,    62,
     148,   149,    -1,    63,   148,   149,    -1,   335,    -1,   138,
      -1,   142,    -1,   143,    -1,   139,    -1,   140,    -1,   150,
      -1,   141,    -1,   137,    -1,   134,    -1,   135,    -1,   145,
      -1,   146,    -1,   147,    -1,   144,    -1,    62,    -1,    63,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    70,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    71,    -1,    72,    -1,    78,    -1,    79,
      -1,    80,    -1,    81,    -1,    82,    -1,    83,    -1,    84,
      -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,    -1,
     336,   338,    -1,    -1,   337,   339,    -1,   129,    -1,   339,
      -1,    42,    -1,   340,    -1,   342,    -1,   341,    -1,    54,
      -1,   335,    -1,   136,    -1,   151,    -1,    90,    -1,     4,
      -1,    52,    -1,    38,    -1,    37,    -1,    94,    -1,    95,
      -1,   297,    -1,    13,    -1,    11,    -1,    12,    -1,    14,
      -1,    15,    -1,    10,    -1,    41,    -1,    43,    -1,    44,
      -1,    45,    -1,     3,    -1,    46,    -1,    58,    -1,    50,
      -1,     8,    -1,    39,    -1,    40,    -1,    53,    -1,    16,
      -1,    60,    -1,    89,    -1,     5,    -1,     7,    -1,     6,
      -1,    55,    -1,    56,    -1,    59,    -1,     9,    -1,    57,
      -1,    93,    -1,   132,   336,   133,    -1,   148,   336,   149,
      -1,   130,   336,   131,    -1,    91,   336,   131,    -1,    92,
     336,   131,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,  1323,  1323,  1324,  1323,  1328,  1329,  1330,  1331,  1332,
    1333,  1334,  1335,  1336,  1337,  1338,  1339,  1340,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1348,  1349,  1355,  1361,  1361,
    1363,  1369,  1369,  1371,  1371,  1373,  1373,  1375,  1375,  1377,
    1378,  1378,  1380,  1380,  1382,  1384,  1386,  1385,  1388,  1391,
    1392,  1393,  1394,  1395,  1396,  1397,  1398,  1399,  1400,  1401,
    1403,  1404,  1405,  1407,  1408,  1409,  1410,  1411,  1413,  1413,
    1415,  1415,  1417,  1418,  1419,  1420,  1427,  1428,  1429,  1439,
    1439,  1441,  1441,  1444,  1444,  1444,  1446,  1447,  1449,  1450,
    1451,  1451,  1453,  1453,  1453,  1453,  1453,  1455,  1456,  1456,
    1460,  1460,  1464,  1464,  1469,  1469,  1470,  1472,  1472,  1473,
    1473,  1474,  1474,  1475,  1475,  1481,  1483,  1484,  1485,  1486,
    1487,  1489,  1490,  1491,  1497,  1520,  1521,  1522,  1524,  1531,
    1532,  1533,  1540,  1541,  1541,  1547,  1548,  1548,  1551,  1561,
    1569,  1569,  1581,  1582,  1584,  1584,  1584,  1591,  1593,  1599,
    1601,  1602,  1603,  1604,  1605,  1606,  1607,  1608,  1609,  1611,
    1612,  1614,  1615,  1616,  1621,  1622,  1623,  1630,  1631,  1639,
    1639,  1639,  1641,  1642,  1645,  1646,  1647,  1657,  1661,  1656,
    1673,  1673,  1682,  1683,  1682,  1690,  1690,  1699,  1700,  1709,
    1719,  1725,  1725,  1728,  1727,  1732,  1733,  1732,  1740,  1740,
    1747,  1747,  1749,  1749,  1751,  1751,  1753,  1755,  1764,  1764,
    1770,  1770,  1770,  1773,  1774,  1775,  1775,  1778,  1780,  1778,
    1809,  1833,  1833,  1835,  1835,  1837,  1837,  1844,  1845,  1846,
    1848,  1899,  1900,  1902,  1903,  1903,  1906,  1906,  1907,  1907,
    1911,  1912,  1912,  1926,  1927,  1927,  1940,  1941,  1943,  1946,
    1948,  1951,  1952,  1952,  1954,  1957,  1958,  1962,  1963,  1966,
    1966,  1968,  1970,  1970,  1972,  1972,  1974,  1974,  1976,  1976,
    1978,  1979,  1985,  1986,  1987,  1988,  1989,  1990,  1991,  1998,
    1999,  2000,  2001,  2003,  2004,  2006,  2010,  2011,  2013,  2014,
    2016,  2017,  2018,  2020,  2022,  2023,  2025,  2027,  2027,  2031,
    2031,  2034,  2034,  2037,  2037,  2041,  2041,  2041,  2043,  2044,
    2045,  2046,  2047,  2048,  2049,  2050,  2051,  2053,  2058,  2064,
    2064,  2064,  2064,  2064,  2065,  2065,  2081,  2082,  2083,  2088,
    2089,  2101,  2102,  2105,  2106,  2107,  2108,  2109,  2112,  2113,
    2116,  2117,  2118,  2119,  2120,  2121,  2122,  2125,  2126,  2127,
    2128,  2129,  2130,  2131,  2132,  2133,  2134,  2135,  2136,  2137,
    2138,  2139,  2140,  2141,  2142,  2143,  2144,  2145,  2147,  2148,
    2150,  2151,  2153,  2154,  2156,  2157,  2159,  2160,  2162,  2163,
    2169,  2170,  2170,  2176,  2176,  2178,  2179,  2179,  2184,  2185,
    2185,  2186,  2186,  2190,  2191,  2191,  2192,  2194,  2192,  2214,
    2215,  2218,  2219,  2220,  2221,  2222,  2223,  2224,  2226,  2228,
    2238,  2238,  2247,  2248,  2248,  2247,  2256,  2256,  2265,  2265,
    2273,  2273,  2273,  2303,  2302,  2312,  2313,  2313,  2312,  2321,
    2337,  2337,  2342,  2342,  2347,  2347,  2352,  2352,  2357,  2357,
    2362,  2362,  2367,  2367,  2372,  2372,  2377,  2377,  2393,  2393,
    2406,  2439,  2473,  2526,  2527,  2528,  2529,  2530,  2532,  2533,
    2533,  2534,  2534,  2535,  2535,  2536,  2536,  2537,  2537,  2538,
    2538,  2539,  2540,  2541,  2542,  2543,  2544,  2545,  2546,  2547,
    2548,  2549,  2550,  2551,  2552,  2553,  2554,  2555,  2556,  2557,
    2558,  2559,  2560,  2561,  2562,  2563,  2564,  2565,  2571,  2571,
    2572,  2572,  2574,  2574,  2576,  2576,  2576,  2576,  2576,  2577,
    2577,  2577,  2577,  2577,  2577,  2578,  2578,  2578,  2578,  2578,
    2579,  2579,  2579,  2579,  2579,  2580,  2580,  2580,  2580,  2580,
    2580,  2581,  2581,  2581,  2581,  2581,  2581,  2581,  2582,  2582,
    2582,  2582,  2582,  2582,  2583,  2583,  2583,  2583,  2583,  2583,
    2585,  2586,  2587,  2587,  2587
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
  "OSTREAM", "ISTREAM", "ENUM", "UNION", "CLASS_REF", "OTHER", "CONST",
  "CONST_PTR", "CONST_EQUAL", "OPERATOR", "UNSIGNED", "SIGNED", "FRIEND",
  "INLINE", "MUTABLE", "TEMPLATE", "TYPENAME", "TYPEDEF", "NAMESPACE",
  "USING", "VTK_ID", "STATIC", "EXTERN", "VAR_FUNCTION", "VTK_LEGACY",
  "NEW", "DELETE", "EXPLICIT", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR",
  "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND_EQ", "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR",
  "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ",
  "ELLIPSIS", "DOUBLE_COLON", "LP", "LA", "QT_ID", "StdString",
  "UnicodeString", "IdType", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
  "GetStringMacro", "SetClampMacro", "SetObjectMacro", "GetObjectMacro",
  "BooleanMacro", "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'('", "')'", "'{'", "'}'", "'<'", "'>'",
  "':'", "','", "'='", "'-'", "'+'", "'~'", "'*'", "'/'", "'%'", "'&'",
  "'|'", "'^'", "'['", "']'", "'!'", "'.'", "$accept", "strt", "$@1",
  "file_item", "extern", "namespace", "$@2", "class_def", "$@3", "$@4",
  "$@5", "$@6", "$@7", "$@8", "class_def_body", "$@9", "class_def_item",
  "optional_scope", "scope_list", "scope_list_item", "scope_type",
  "enum_def", "$@10", "$@11", "enum_list", "enum_item", "integer_value",
  "integer_literal", "integer_expression", "$@12", "$@13", "$@14",
  "math_unary_op", "math_binary_op", "template_internal_class",
  "internal_class", "internal_class_body", "type_def", "typedef_start",
  "using", "template", "$@15", "template_args", "$@16", "template_arg",
  "$@17", "class_or_typename", "maybe_template_id", "$@18",
  "legacy_function", "legacy_method", "function", "scoped_method", "scope",
  "method", "explicit_mod", "scoped_operator", "operator",
  "typecast_op_func", "$@19", "$@20", "op_func", "$@21", "op_sig", "$@22",
  "$@23", "func", "$@24", "func_trailer", "func_body", "func_sig", "$@25",
  "$@26", "@27", "constructor", "$@28", "constructor_sig", "$@29",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "destructor_sig", "$@30", "args_list", "$@31", "more_args", "$@32",
  "arg", "$@33", "$@34", "maybe_indirect_id", "maybe_var_assign",
  "var_assign", "$@35", "var", "var_id_maybe_assign", "maybe_vars",
  "maybe_other_vars", "$@36", "other_var", "$@37", "$@38",
  "maybe_complex_var_id", "$@39", "complex_var_id", "$@40",
  "p_or_lp_or_la", "lp_or_la", "maybe_array_or_args", "$@41",
  "maybe_indirect_maybe_var_id", "maybe_indirect_var_id", "maybe_var_id",
  "var_id", "maybe_var_array", "var_array", "$@42", "array", "$@43",
  "more_array", "array_size", "any_id", "storage_type", "static_mod",
  "type", "type_red", "const_mod", "type_red1", "$@44", "templated_id",
  "$@45", "$@46", "$@47", "types", "$@48", "maybe_scoped_id", "scoped_id",
  "class_id", "type_indirection", "pointers", "pointer_or_const_pointer",
  "type_red2", "type_simple", "type_id", "type_primitive", "value", "$@49",
  "maybe_comma", "more_values", "$@50", "literal", "$@51", "$@52", "$@53",
  "$@54", "$@55", "string_literal", "literal2", "macro", "$@56", "$@57",
  "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65", "$@66",
  "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74", "$@75",
  "$@76", "$@77", "op_token", "op_token_no_delim", "maybe_other",
  "maybe_other_no_semi", "other_stuff", "other_stuff_no_semi", "braces",
  "brackets", "parens", 0
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
      40,    41,   123,   125,    60,    62,    58,    44,    61,    45,
      43,   126,    42,    47,    37,    38,   124,    94,    91,    93,
      33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   152,   153,   154,   153,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   155,   155,   155,
     155,   155,   155,   155,   155,   155,   155,   156,   158,   157,
     157,   160,   159,   161,   159,   162,   159,   163,   159,   159,
     164,   159,   165,   159,   159,   166,   167,   166,   166,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   168,   169,   169,
     170,   170,   171,   171,   171,   171,   172,   172,   172,   174,
     173,   175,   173,   176,   176,   176,   177,   177,   178,   178,
     178,   178,   179,   179,   179,   179,   179,   180,   181,   180,
     182,   180,   183,   180,   184,   184,   184,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   187,   187,   187,   187,
     187,   188,   188,   188,   189,   189,   189,   189,   190,   191,
     191,   191,   192,   193,   192,   194,   195,   194,   196,   196,
     197,   196,   198,   198,   199,   200,   199,   201,   202,   203,
     204,   204,   204,   204,   204,   204,   204,   204,   204,   205,
     205,   206,   206,   206,   206,   206,   206,   206,   206,   207,
     207,   207,   208,   208,   209,   209,   209,   211,   212,   210,
     214,   213,   216,   217,   215,   219,   218,   220,   220,   220,
     220,   221,   221,   223,   222,   224,   225,   222,   227,   226,
     229,   228,   230,   230,   231,   231,   232,   233,   235,   234,
     236,   237,   236,   238,   238,   239,   238,   241,   242,   240,
     240,   243,   243,   244,   244,   246,   245,   247,   247,   247,
     248,   249,   249,   250,   251,   250,   253,   252,   254,   252,
     255,   256,   255,   257,   258,   257,   259,   259,   259,   260,
     260,   261,   262,   261,   261,   263,   263,   264,   264,   265,
     265,   266,   267,   267,   269,   268,   271,   270,   272,   272,
     273,   273,   274,   274,   274,   274,   274,   274,   274,   275,
     275,   275,   275,   275,   275,   275,   276,   276,   277,   277,
     278,   278,   278,   279,   280,   280,   280,   281,   280,   283,
     282,   284,   282,   285,   282,   286,   287,   286,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   289,   289,   290,
     290,   290,   290,   290,   290,   290,   291,   291,   291,   292,
     292,   293,   293,   294,   294,   294,   294,   294,   295,   295,
     296,   296,   296,   296,   296,   296,   296,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     297,   297,   297,   297,   297,   297,   297,   297,   297,   297,
     298,   299,   298,   300,   300,   301,   302,   301,   303,   304,
     303,   305,   303,   303,   306,   303,   307,   308,   303,   309,
     309,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     312,   311,   313,   314,   315,   311,   316,   311,   317,   311,
     318,   319,   311,   320,   311,   321,   322,   323,   311,   311,
     324,   311,   325,   311,   326,   311,   327,   311,   328,   311,
     329,   311,   330,   311,   331,   311,   332,   311,   333,   311,
     311,   311,   311,   334,   334,   334,   334,   334,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   336,   336,
     337,   337,   338,   338,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     339,   339,   339,   339,   339,   339,   339,   339,   339,   339,
     340,   341,   342,   342,   342
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     3,     1,     1,     1,
       1,     3,     4,     1,     2,     3,     2,     2,     2,     3,
       2,     1,     2,     4,     4,     4,     1,     5,     0,     6,
       4,     0,     7,     0,    10,     0,     7,     0,    10,     4,
       0,     7,     0,    10,     4,     0,     0,     3,     3,     1,
       3,     1,     1,     3,     4,     2,     2,     1,     2,     3,
       3,     2,     3,     3,     2,     5,     1,     1,     0,     2,
       1,     3,     1,     2,     2,     2,     1,     1,     1,     0,
       6,     0,     5,     0,     1,     3,     1,     3,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     3,
       0,     4,     0,     4,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     3,     3,     2,     3,
       2,     1,     5,     3,     4,     4,     4,     3,     1,     4,
       4,     3,     3,     0,     5,     1,     0,     4,     2,     2,
       0,     3,     1,     1,     0,     0,     3,     4,     4,     2,
       3,     4,     5,     3,     4,     6,     7,     5,     6,     2,
       3,     2,     3,     3,     1,     2,     2,     2,     3,     1,
       2,     2,     3,     3,     1,     2,     3,     0,     0,     8,
       0,     3,     0,     0,     7,     0,     3,     0,     2,     2,
       1,     1,     3,     0,     5,     0,     0,     9,     0,     3,
       0,     5,     0,     3,     0,     3,     4,     1,     0,     5,
       0,     0,     2,     1,     1,     0,     4,     0,     0,     5,
       1,     1,     2,     0,     1,     0,     3,     4,     4,     3,
       2,     0,     2,     0,     0,     4,     0,     2,     0,     3,
       2,     0,     5,     2,     0,     5,     1,     1,     1,     1,
       1,     0,     0,     4,     1,     1,     2,     1,     2,     0,
       1,     1,     0,     1,     0,     2,     0,     5,     0,     1,
       0,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     2,     3,     1,     2,     1,     2,
       1,     2,     2,     1,     1,     1,     1,     0,     3,     0,
       5,     0,     5,     0,     5,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       2,     1,     1,     1,     2,     2,     2,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     6,     0,     1,     0,     0,     4,     1,     0,
       3,     0,     3,     1,     0,     4,     0,     0,     9,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     7,     0,     0,     0,     9,     0,     5,     0,     5,
       0,     0,    10,     0,     7,     0,     0,     0,     9,     6,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     9,     0,     9,
       4,     4,     7,     2,     2,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     0,     2,
       0,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   344,   362,   363,
     364,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   365,   366,   367,   347,   348,   349,   350,   342,   343,
      81,     0,    13,   293,     0,   379,   378,     0,     0,     0,
     297,   128,     0,     0,   345,   286,     0,   233,     0,   346,
     340,   341,   361,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     4,     9,     8,   236,   236,
      10,     0,     7,     0,     0,     0,     0,     0,     0,   174,
       5,     0,     0,   279,   288,     0,   290,   295,   296,     0,
     294,   333,   339,   338,    21,   344,   342,   343,   345,   346,
     340,   341,   498,    35,   335,    31,   334,     0,     0,   344,
       0,     0,   345,   346,     0,     0,   498,   301,     0,    79,
     337,   498,    40,   336,     0,   286,     0,     0,     0,   283,
       0,   280,   133,     0,   319,   323,   322,   321,   320,   324,
     325,   498,    28,   309,   312,   311,     0,     0,   308,   310,
     313,   314,   315,     0,   316,   498,   299,   287,   233,     0,
     281,     0,     0,   498,   303,     0,   412,   416,   418,     0,
       0,   425,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   332,   331,   326,     0,
     233,     0,   238,   328,   329,     0,     0,     0,     0,     0,
     236,     0,     0,     0,   191,   498,    20,    17,    18,    16,
      14,   274,   276,   275,     0,   272,   249,   250,   273,   277,
     278,     0,   175,   180,   149,   185,   233,   223,     0,   262,
     261,     0,   284,   289,   291,   292,     0,     0,    22,     0,
       0,    68,     0,    68,   344,   342,   343,   345,   346,   340,
     341,   176,     0,     0,     0,    83,     0,     0,     0,    68,
       0,   177,   285,     0,   132,   140,   298,     0,     0,     0,
       0,   131,     0,     0,     0,     2,   282,   229,   234,     0,
       0,     0,     0,   274,   276,   275,   272,   273,   277,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    11,   232,   237,   261,     0,   327,   330,     6,   127,
       0,   221,     0,     0,     0,     0,    19,    15,     0,     0,
     472,   473,   474,   475,   476,   477,   478,   479,   485,   486,
     480,   481,   482,   483,   484,   487,   488,   489,   490,   491,
     492,   493,   494,   495,   496,   497,     0,   466,   467,   465,
     458,   461,   462,   464,   459,   460,   471,   468,   469,   470,
       0,   463,   182,   457,   173,   150,     0,   187,   187,     0,
     225,   230,   224,   257,     0,     0,   243,   263,   268,   193,
     195,   159,   318,   309,   312,   311,   308,   310,   313,   314,
       0,   172,   153,   198,     0,   317,     0,   530,   513,   541,
     543,   542,   534,   547,   525,   521,   522,   520,   523,   524,
     538,   516,   515,   535,   536,   526,   504,   527,   528,   529,
     531,   533,   514,   537,   508,   544,   545,   548,   532,   546,
     539,   472,   473,   540,   512,   498,   498,   549,   517,   518,
     502,   498,   498,    39,   510,   498,   511,   519,   509,   499,
     503,   505,   507,   506,   305,     0,     0,     0,     0,     0,
      23,     0,     0,    84,    86,    83,    44,     0,     0,   211,
       0,   154,     0,   142,   143,     0,   135,     0,   144,   144,
      30,     2,   130,   129,    24,     0,   228,     3,   236,   147,
      25,     0,   410,     0,     0,     0,   420,   423,     0,     0,
     430,   434,   438,   442,   432,   436,   440,   444,   446,   448,
     450,   451,     0,   239,   125,   222,   126,   124,    12,   192,
       0,     0,   453,   454,     0,   160,   190,     0,     0,   181,
     186,   227,     0,   244,   258,   265,     0,   211,     0,   151,
     207,     0,   202,   200,     0,     0,     0,     0,     0,     0,
     306,    37,     0,     0,     0,    69,    70,    72,    45,    33,
      45,   302,    82,    83,     0,     0,    42,    45,     0,   217,
     152,     0,   134,   136,   144,   139,   145,   138,     3,   300,
      27,   235,   304,     0,   413,   417,   419,     0,     0,   426,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   383,   455,   456,   183,   189,   188,   407,   399,   402,
     404,   403,   405,   406,   401,   408,   409,   394,   381,   391,
     389,   226,   380,   393,   388,   251,   266,     0,     0,   208,
       0,   199,   211,     0,   157,   553,   554,   552,   550,   551,
       0,    68,    75,    73,    74,     0,    46,    68,    46,    85,
     274,    93,    95,    94,    96,    92,   272,   273,   102,   104,
     105,   106,    97,    88,    87,    98,    89,    91,    90,    80,
      68,    46,   178,   220,   213,   212,   214,     0,     0,   158,
     140,   141,   223,    29,     0,     0,   421,     0,     0,   429,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     384,     0,   211,   396,     0,     0,     0,     0,   400,   252,
     245,   254,   270,   194,     0,   211,   204,     0,     0,   155,
     307,     0,    71,    76,    77,    78,    36,     0,     0,     0,
      32,     0,   107,   108,   109,   110,   111,   112,   113,   114,
     100,     0,     0,    41,   187,   215,   259,   156,   137,   146,
     411,   414,     0,   424,   427,   431,   435,   439,   443,   433,
     437,   441,   445,     0,     0,   452,     0,     0,     0,   385,
     407,   392,   390,   211,   271,     0,   196,     0,     0,   203,
     498,   201,    45,     0,   344,   342,   343,    57,     0,     0,
     345,     0,   169,   346,   340,   341,     0,    67,     0,   236,
      47,   236,    52,    51,     0,     0,     0,     0,     0,   164,
      49,     0,    66,    48,    45,     0,     0,    99,    45,   179,
     217,   247,   248,   246,   218,   259,   262,   260,     0,   500,
       0,     0,     0,   184,     0,   395,   383,     0,   267,   211,
     209,   204,     0,    46,     0,     0,   279,     0,     0,     0,
      56,    55,     0,     0,     0,     0,   170,     0,   165,     0,
     171,   498,   161,     0,     0,   236,     0,     0,    64,    61,
     166,    58,   167,    46,   103,   101,    46,   216,   223,   255,
       0,   259,   240,   415,     0,   428,   447,   449,     0,   386,
       0,   253,     0,   205,   206,    38,   163,   168,   121,   498,
     500,   118,     0,     0,   120,     0,     0,     0,     0,   115,
      62,    59,   162,     0,     0,     0,     0,    53,    50,     0,
      63,    60,    34,    43,   219,   241,   256,   422,   501,   397,
       0,   382,   197,     0,     0,   117,   116,   119,   148,     0,
      54,   251,     0,   387,   500,   123,    65,   242,     0,     0,
     398,   122
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    85,    86,    87,   288,    88,   263,   677,
     261,   671,   279,   700,   676,   757,   830,   487,   585,   586,
     758,    89,   276,   138,   492,   493,   692,   693,   694,   771,
     846,   761,   695,   770,   880,   881,   931,    90,    91,    92,
      93,   285,   505,   710,   506,   507,   508,   605,   712,    94,
     835,    95,    96,   241,   836,   837,    97,    98,    99,   499,
     774,   242,   397,   243,   554,   732,   244,   398,   559,   226,
     245,   567,   568,   869,   839,   572,   423,   662,   661,   809,
     746,   569,   570,   745,   598,   599,   705,   850,   706,   707,
     908,   340,   401,   402,   562,   100,   246,   209,   181,   518,
     210,   211,   335,   854,   971,   247,   655,   855,   248,   740,
     803,   910,   404,   856,   249,   406,   407,   408,   565,   742,
     566,   805,   424,   875,   102,   103,   104,   105,   106,   153,
     107,   293,   274,   302,   485,   670,   425,   108,   135,   212,
     213,   214,   110,   111,   112,   113,   651,   735,   731,   866,
     960,   652,   737,   736,   734,   797,   972,   653,   654,   114,
     613,   311,   715,   858,   312,   313,   617,   782,   618,   316,
     718,   860,   621,   625,   622,   626,   623,   627,   624,   628,
     629,   630,   392,   478,   259,   914,   479,   480,   481,   482,
     483
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -844
static const yytype_int16 yypact[] =
{
    -844,    70,  -844,  4507,   420,   760,  5258,   121,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,    16,   156,
     760,   646,  -844,  -844,  4738,  -844,  -844,  4842,  5258,   -48,
    -844,  -844,   746,   632,   216,    13,  4946,  -844,   -34,   266,
     169,   240,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,   -14,    12,    14,    19,    44,    94,   132,
     143,   153,   167,   181,   186,   198,   212,   223,   228,   252,
     254,   272,   274,   275,  -844,  -844,  -844,  -844,   160,   160,
    -844,  5050,  -844,  4634,   230,   230,   230,   230,   230,  -844,
    -844,   811,  5258,  -844,    21,  5362,    47,   203,  -844,   245,
    -844,  -844,  -844,  -844,  -844,   247,   281,   309,   342,   365,
     399,   463,  -844,   234,  -844,   273,  -844,   858,   858,    -9,
     858,   858,    -3,   113,   366,   336,  -844,  -844,   307,  -844,
    -844,  -844,   293,  -844,  4842,   400,  5154,   314,  5258,  -844,
     362,  -844,   324,  4092,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,    -9,   372,   378,  4092,  4092,    -3,   113,
     379,   382,   203,   332,  -844,  -844,  -844,  -844,  -844,  4391,
    -844,   -44,  4738,  -844,  -844,  4173,  -844,  -844,  -844,  4173,
    4173,  -844,  4173,  4173,  4173,  4173,  4173,  4173,  4173,  4173,
    4173,  4173,  4173,  4173,  4173,  4173,  -844,  -844,  -844,   346,
    -844,   855,  -844,    86,  -844,   350,   351,    67,    67,   855,
     160,   230,   230,  3923,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,   392,   372,   378,  5562,   393,  -844,  -844,   395,   379,
     382,  4048,  -844,  -844,  -844,  -844,  -844,   348,   328,   344,
     122,   403,  -844,  -844,  -844,  -844,  4092,    82,  -844,   957,
    5258,   370,  5258,   370,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  4092,  1106,  5258,  4173,   376,  1255,  5258,   370,
    5258,  -844,  -844,   340,  -844,  5569,  -844,  1404,   377,   369,
     381,  -844,  1553,  5258,   163,  -844,  -844,  -844,  -844,   380,
    4173,  1702,  5258,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
     375,  4173,  4173,  4173,   390,   402,  4173,   404,   408,   411,
     412,   413,   414,   416,   423,   425,   426,   427,   385,   386,
     428,  -844,   438,  -844,  -844,   855,  -844,  -844,  -844,  -844,
     407,  -844,  4173,   448,   450,   454,  -844,  -844,   122,  1851,
     384,   389,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,   388,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
     391,  -844,  -844,  -844,  -844,  -844,   439,    98,    98,   214,
    -844,  -844,  -844,  -844,   453,   855,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,    88,   -15,     2,   115,   237,   136,   173,
    4173,  -844,  -844,  -844,   455,  -844,   501,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,   457,   461,   823,   469,   471,   475,
    -844,   473,   476,   477,   472,  4173,  -844,   481,   480,   486,
    4173,  -844,   528,  -844,  -844,   484,   483,   570,  4173,  4173,
    -844,  -844,  -844,  -844,  -844,   488,  -844,   491,    21,  -844,
    -844,   490,  -844,   497,   496,   505,  -844,  -844,   500,  5466,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  4173,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
     489,   493,  -844,  -844,   510,  -844,  -844,   627,   628,  -844,
    -844,  -844,   558,  -844,  -844,   498,   504,   486,  5258,  -844,
    -844,   515,   517,  -844,   354,  2000,  2149,  2298,  2447,  2596,
    -844,  -844,  4092,  4092,  4092,  -844,   521,  -844,  -844,  -844,
    -844,  -844,  -844,  4173,   509,   527,  -844,  -844,   523,   284,
    -844,   361,  -844,  -844,  4173,  -844,  -844,  -844,   542,  -844,
    -844,  -844,  -844,  5258,  -844,  -844,  -844,  5466,  5466,  -844,
     545,  5466,  5466,  5466,  5466,  5466,  5466,  5466,  5466,  5466,
    5466,   540,  -844,  -844,  -844,  -844,  -844,   546,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,   672,  -844,   100,  -844,   555,   556,  -844,
    4173,  -844,   486,  4173,  -844,  -844,  -844,  -844,  -844,  -844,
    5258,   370,  -844,  -844,  -844,   823,    46,   370,    73,  -844,
      -9,  -844,  -844,  -844,  -844,  -844,    -3,   113,  -844,  -844,
    -844,  -844,   925,  -844,  -844,  -844,  -844,   203,  -844,  -844,
     370,    77,  -844,  -844,  -844,  -844,   557,  5258,  4173,  -844,
    5569,  -844,   348,  -844,   561,  5258,  -844,   562,  5466,  -844,
     564,   565,   569,   574,   575,   576,   577,   580,   579,   581,
    -844,   582,   486,  -844,   652,   558,   617,   617,  -844,  -844,
    -844,  -844,   509,  -844,   571,   486,   583,   584,   588,  -844,
    -844,   590,  -844,  -844,  -844,  -844,  -844,  3639,   592,   597,
    -844,   509,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,   509,   598,  -844,    98,  -844,   806,  -844,  -844,  -844,
    -844,  -844,   587,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,   701,   722,  -844,   603,  5258,   604,  -844,
    -844,  -844,  -844,   486,  -844,   594,  -844,   605,  4173,  -844,
    -844,  -844,  -844,  4141,    88,   -15,     2,  -844,  3766,  4266,
     115,   607,   697,   237,   136,   173,   620,  -844,  4173,   160,
    -844,   160,  -844,  -844,  3891,   230,   230,  4173,   230,  -844,
    -844,  3798,  -844,  -844,  -844,   622,   509,  -844,  -844,  -844,
     284,  -844,  -844,  -844,  -844,   295,   344,  -844,   623,  -844,
     625,   635,   637,  -844,   616,  -844,   626,   639,  -844,   486,
    -844,   583,  2745,    96,  4173,  4173,   366,   371,   760,   371,
    -844,  -844,   238,   230,   230,  3923,  -844,  4173,  -844,  4016,
    -844,  -844,  -844,   630,   642,   160,   230,   230,  -844,  -844,
    -844,  -844,  -844,   102,  -844,  -844,   162,  -844,   348,  -844,
     643,   806,  -844,  -844,  3192,  -844,  -844,  -844,   647,   640,
     648,  -844,   645,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,   331,   331,  -844,   331,   394,  4173,   394,  -844,
    -844,  -844,  -844,  4141,   654,  4173,  2894,  -844,  -844,   650,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
     558,  -844,  -844,  3043,  3341,  -844,  -844,  -844,  -844,   657,
    -844,   100,   617,  -844,  -844,  -844,  -844,  -844,   658,  3490,
    -844,  -844
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -844,  -246,  -844,  -844,  -844,  -844,  -844,   -85,  -844,  -844,
    -844,  -844,  -844,  -844,  -554,  -844,  -844,  -247,   118,  -844,
    -844,   -76,  -844,  -844,  -435,  -844,  -844,  -844,  -673,  -844,
    -844,  -844,  -844,  -844,  -844,   -94,  -658,    33,  -844,    37,
    -478,  -844,    85,  -844,  -844,  -844,  -844,  -420,  -844,  -844,
    -844,   -27,  -844,  -844,  -760,  -844,  -844,   -86,   539,  -844,
    -844,  -124,  -844,  -844,  -844,  -844,  -228,  -844,  -380,   -74,
    -844,  -844,  -844,  -844,  -226,  -844,  -844,  -844,  -844,   -72,
      -8,  -481,  -844,  -844,  -512,  -844,   -49,  -844,  -844,  -844,
    -844,   589,  -670,  -844,  -844,    45,  -155,   -87,   -38,  -844,
     287,  -844,  -844,  -793,  -844,  -171,  -844,  -844,  -844,  -160,
    -844,  -844,  -844,  -844,  -709,   -43,  -635,  -844,  -844,  -844,
    -844,  -844,    -4,     1,   -32,     8,    15,   708,   711,  -844,
     -40,  -844,  -844,  -844,  -234,  -844,    -2,     4,    58,   -95,
    -844,   612,  -304,  -268,     7,   -20,  -696,  -844,   -35,  -844,
    -844,    92,  -844,  -844,  -844,  -844,  -844,  -844,  -703,    76,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,  -844,
    -844,  -844,  -844,   600,  -111,  -690,  -844,  -843,  -844,  -844,
    -844
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -385
static const yytype_int16 yytable[] =
{
     123,   125,   215,   172,   101,   148,   217,   222,   220,   253,
     271,   124,   126,   395,   134,   218,   489,   509,   560,   600,
     741,   227,   228,   229,   230,   273,   139,   142,   488,   604,
     277,   422,   498,   801,   802,   147,   678,   140,   143,   799,
     491,   173,   779,   701,   497,   149,   151,   174,   344,   517,
     287,   753,   754,   755,   180,   657,   333,   501,   883,   515,
     595,   109,   909,   177,   292,   206,   221,   857,   521,   804,
       2,   958,   301,   178,   896,  -323,   303,   403,   753,   754,
     755,  -319,   753,   754,   755,   297,   152,  -321,   845,   607,
      33,   413,  -322,   298,   223,   150,   182,   250,   847,   219,
     162,   753,   754,   755,   304,   305,  -323,   753,   754,   755,
     252,   206,   148,   172,   349,  -276,   185,   394,   956,   414,
     415,   958,   342,   342,   306,   137,   172,   172,    34,   944,
     206,   176,  -275,   345,   124,   126,   958,   140,   143,   416,
     294,   556,   186,   557,   187,  -323,   857,   346,   347,   188,
     748,   286,   149,   405,   180,   299,   282,   174,   679,   251,
     307,   308,   309,   207,   289,   290,   208,   753,   754,   755,
     174,   174,   332,   905,   189,   417,   418,   419,  -319,   756,
     543,   310,   749,   300,   711,   314,   315,   296,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   857,  -320,   206,  -321,   760,   334,   399,   207,
     773,  -319,   208,   341,   341,   334,   172,   172,  -274,   348,
     796,   934,   137,   420,   190,   620,  -324,   777,   207,   925,
     739,   336,   172,   807,   564,   952,   558,   348,   954,   477,
     964,   936,   937,   172,   334,  -272,  -322,   184,  -264,   176,
    -319,   136,   409,   477,   412,   137,   410,   477,   873,  -324,
     174,   174,   191,  -325,   973,   608,  -277,   477,   484,   978,
     484,   494,   477,   192,   965,   966,   174,   967,   938,   834,
     934,   477,   484,   193,   979,  -322,   484,   174,   296,  -231,
     903,   867,   516,   256,   906,   953,   348,   194,  -324,   396,
     298,   484,   207,  -278,   303,   208,  -321,   523,   524,   525,
     484,   195,   528,   716,   717,   426,   196,   720,   721,   722,
     723,   724,   725,   726,   727,   728,   729,  -320,   197,   477,
    -325,   334,   304,   305,   658,   257,   741,   303,   545,   206,
     882,   502,   198,   561,   703,  -321,   175,   892,   664,   413,
     176,   298,   306,   199,   575,   576,  -320,   922,   200,   224,
     577,   578,   225,   413,   579,   304,   305,  -273,   260,  -325,
     413,   184,   206,   704,   258,   709,  -274,   414,   415,  -274,
     115,  -274,   201,  -274,   202,   306,   851,   852,   307,   308,
     309,   414,   415,   926,   849,  -320,   183,   416,   414,   415,
     184,   334,   203,   303,   204,   205,   942,   262,   116,   117,
    -276,   416,   234,  -276,   784,  -276,   571,  -276,   416,   236,
     237,   307,   308,   309,   751,   853,   272,   278,   118,   115,
     759,   304,   305,   417,   418,   419,   750,   207,  -275,   275,
     208,  -275,   509,  -275,   281,  -275,   172,   417,   418,   419,
     177,   306,   283,   772,   417,   418,   419,   116,   117,   284,
     928,   291,  -323,   929,   119,   120,   121,   930,  -322,  -324,
     207,  -272,  -325,   208,  -272,   331,  -272,   118,  -272,   338,
     339,   500,  -319,  -321,   587,  -320,   400,   307,   308,   309,
     174,   494,  -264,   411,  -273,   663,   571,  -273,   512,  -273,
     928,  -273,   708,   929,   606,   606,   486,   930,   495,   511,
     513,   519,   522,   119,   120,   121,   540,   541,   680,   552,
     681,   682,   683,   928,   684,   685,   929,   526,  -277,   555,
     930,  -277,   550,  -277,   172,  -277,   544,   551,   631,   527,
     553,   529,   172,   172,   172,   530,   232,   233,   531,   532,
     533,   534,   122,   535,   697,   477,   477,   477,   477,   477,
     536,   172,   537,   538,   539,   542,   686,   637,   638,   639,
     640,   641,   642,   643,   644,   298,   484,   546,   174,   547,
     672,   673,   674,   548,   563,   573,   174,   174,   174,   494,
     696,   574,  -278,   888,   580,  -278,   581,  -278,   698,  -278,
     606,   588,   687,   239,   240,   174,   589,   590,   591,   592,
     594,   900,   597,   902,   593,   645,   596,  -210,   601,   602,
     603,   714,    39,   609,   610,   612,   800,   615,   639,   640,
     641,   642,   643,   644,   614,   172,   616,   619,   632,   688,
     634,   163,   633,   635,   636,   659,  -269,   927,   689,   690,
     691,   646,   656,   660,   702,   115,   747,   902,   675,   571,
     699,   637,   638,   639,   640,   641,   642,   643,   644,   164,
     165,   838,   829,   587,   645,   713,   719,   730,   484,   174,
     733,   831,   738,   116,   117,   166,   743,   167,   647,   168,
     648,   744,   780,   783,   775,   785,   786,   649,   650,   872,
     787,   806,   697,   118,   571,   788,   789,   790,   791,   645,
     646,   792,   861,   795,   810,   776,   793,   902,   794,   811,
     808,   697,   812,   781,   859,   169,   170,   171,   843,   844,
     848,   697,   884,   862,   863,   865,   870,   889,   696,   119,
     120,   121,   893,   868,   894,   646,   698,   890,   897,   895,
     891,   918,   271,   904,   913,   154,   915,   696,   841,   947,
     911,   898,   899,   919,   901,   698,   916,   696,   917,   115,
     921,   948,   334,  -384,   955,   698,   962,   959,   141,   970,
     946,   961,   647,   155,   156,   968,   976,   148,   939,   980,
     832,   649,   650,   752,   833,   778,   421,   116,   117,   923,
     871,   907,   840,   157,   747,   611,   697,   343,   949,   940,
     941,   977,   864,   912,   255,   303,   254,   118,   963,   885,
     231,   876,   950,   951,   571,   337,   798,   149,   582,   583,
     584,   920,   163,   842,   393,   885,     0,   250,     0,   158,
     159,   160,   696,   304,   305,     0,     0,     0,   232,   233,
     698,   334,   477,   119,   120,   121,     0,   234,     0,     0,
     164,   165,     0,   306,   303,     0,     0,   264,   235,     0,
     571,   348,     0,   932,   933,   935,     0,     0,   161,     0,
     168,   348,     0,   571,   124,   126,   143,     0,     0,     0,
     945,     0,   304,   305,   477,   265,   266,   851,   852,   307,
     308,   309,   236,   237,   238,   239,   240,   334,     0,     0,
       0,     0,   306,     0,     0,   267,   169,   170,   171,     0,
       0,     0,     0,     0,     0,     0,   477,     0,     0,     0,
       0,     0,   932,   933,   935,     0,   853,     0,     0,     0,
       0,   348,     0,   477,   477,     0,   236,   237,   307,   308,
     309,   268,   269,   270,     0,     0,     0,     0,     0,   477,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,    35,    36,     0,   451,     0,   452,
     453,   454,   455,   456,   457,   458,   459,   460,     0,   461,
     462,     0,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   463,   464,   465,   466,
     467,   468,   469,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,   762,   763,     0,   764,   765,   766,
     767,   768,   769,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,   471,     0,   472,
     473,   377,   378,   474,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   475,     0,   391,   476,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,    35,    36,     0,   451,     0,   452,   453,
     454,   455,   456,   457,   458,   459,   460,     0,   461,   462,
       0,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   463,   464,   465,   466,   467,
     468,   469,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,   471,   490,   472,     0,
     377,   378,   474,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   475,     0,   391,   476,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,    35,    36,     0,   451,     0,   452,   453,   454,
     455,   456,   457,   458,   459,   460,     0,   461,   462,     0,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   463,   464,   465,   466,   467,   468,
     469,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,   471,     0,   472,   496,   377,
     378,   474,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   475,     0,   391,   476,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,    35,    36,     0,   451,     0,   452,   453,   454,   455,
     456,   457,   458,   459,   460,     0,   461,   462,     0,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   463,   464,   465,   466,   467,   468,   469,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   471,     0,   472,   510,   377,   378,
     474,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   475,     0,   391,   476,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
      35,    36,     0,   451,     0,   452,   453,   454,   455,   456,
     457,   458,   459,   460,     0,   461,   462,     0,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   463,   464,   465,   466,   467,   468,   469,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,   514,   472,     0,   377,   378,   474,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   475,     0,   391,   476,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,    35,
      36,     0,   451,     0,   452,   453,   454,   455,   456,   457,
     458,   459,   460,     0,   461,   462,     0,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   463,   464,   465,   466,   467,   468,   469,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   470,   471,   520,   472,     0,   377,   378,   474,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     475,     0,   391,   476,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,    35,    36,
       0,   451,     0,   452,   453,   454,   455,   456,   457,   458,
     459,   460,     0,   461,   462,     0,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     463,   464,   465,   466,   467,   468,   469,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     470,   471,     0,   472,   549,   377,   378,   474,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   475,
       0,   391,   476,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,    35,    36,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,   459,
     460,     0,   461,   462,     0,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   463,
     464,   465,   466,   467,   468,   469,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   470,
     471,   665,   472,     0,   377,   378,   474,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   475,     0,
     391,   476,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,    35,    36,     0,   451,
       0,   452,   453,   454,   455,   456,   457,   458,   459,   460,
       0,   461,   462,     0,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   463,   464,
     465,   466,   467,   468,   469,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   470,   471,
     666,   472,     0,   377,   378,   474,   379,   380,   381,   382,
     383,   384,   385,   386,   387,   388,   389,   475,     0,   391,
     476,   427,   428,   429,   430,   431,   432,   433,   434,   435,
     436,   437,   438,   439,   440,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,   441,   442,   443,   444,   445,
     446,   447,   448,   449,   450,    35,    36,     0,   451,     0,
     452,   453,   454,   455,   456,   457,   458,   459,   460,     0,
     461,   462,     0,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   463,   464,   465,
     466,   467,   468,   469,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   470,   471,   667,
     472,     0,   377,   378,   474,   379,   380,   381,   382,   383,
     384,   385,   386,   387,   388,   389,   475,     0,   391,   476,
     427,   428,   429,   430,   431,   432,   433,   434,   435,   436,
     437,   438,   439,   440,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,   441,   442,   443,   444,   445,   446,
     447,   448,   449,   450,    35,    36,     0,   451,     0,   452,
     453,   454,   455,   456,   457,   458,   459,   460,     0,   461,
     462,     0,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   463,   464,   465,   466,
     467,   468,   469,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   470,   471,     0,   472,
     668,   377,   378,   474,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   475,     0,   391,   476,   427,
     428,   429,   430,   431,   432,   433,   434,   435,   436,   437,
     438,   439,   440,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   441,   442,   443,   444,   445,   446,   447,
     448,   449,   450,    35,    36,     0,   451,     0,   452,   453,
     454,   455,   456,   457,   458,   459,   460,     0,   461,   462,
       0,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   463,   464,   465,   466,   467,
     468,   469,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   470,   471,     0,   472,     0,
     377,   378,   474,   379,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   475,   669,   391,   476,   427,   428,
     429,   430,   431,   432,   433,   434,   435,   436,   437,   438,
     439,   440,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,   441,   442,   443,   444,   445,   446,   447,   448,
     449,   450,    35,    36,     0,   451,     0,   452,   453,   454,
     455,   456,   457,   458,   459,   460,     0,   461,   462,     0,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   463,   464,   465,   466,   467,   468,
     469,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   470,   471,   924,   472,     0,   377,
     378,   474,   379,   380,   381,   382,   383,   384,   385,   386,
     387,   388,   389,   475,     0,   391,   476,   427,   428,   429,
     430,   431,   432,   433,   434,   435,   436,   437,   438,   439,
     440,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,   441,   442,   443,   444,   445,   446,   447,   448,   449,
     450,    35,    36,     0,   451,     0,   452,   453,   454,   455,
     456,   457,   458,   459,   460,     0,   461,   462,     0,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   463,   464,   465,   466,   467,   468,   469,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   470,   471,   969,   472,     0,   377,   378,
     474,   379,   380,   381,   382,   383,   384,   385,   386,   387,
     388,   389,   475,     0,   391,   476,   427,   428,   429,   430,
     431,   432,   433,   434,   435,   436,   437,   438,   439,   440,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
     441,   442,   443,   444,   445,   446,   447,   448,   449,   450,
      35,    36,     0,   451,     0,   452,   453,   454,   455,   456,
     457,   458,   459,   460,     0,   461,   462,     0,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   463,   464,   465,   466,   467,   468,   469,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   470,   471,     0,   472,   974,   377,   378,   474,
     379,   380,   381,   382,   383,   384,   385,   386,   387,   388,
     389,   475,     0,   391,   476,   427,   428,   429,   430,   431,
     432,   433,   434,   435,   436,   437,   438,   439,   440,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,    35,
      36,     0,   451,     0,   452,   453,   454,   455,   456,   457,
     458,   459,   460,     0,   461,   462,     0,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   463,   464,   465,   466,   467,   468,   469,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   471,   957,   472,     0,   377,   378,   474,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     475,     0,   391,   476,   427,   428,   429,   430,   431,   432,
     433,   434,   435,   436,   437,   438,   439,   440,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   441,   442,
     443,   444,   445,   446,   447,   448,   449,   450,    35,    36,
       0,   451,     0,   452,   453,   454,   455,   456,   457,   458,
     459,   460,     0,   461,   462,     0,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     463,   464,   465,   466,   467,   468,   469,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     975,   471,     0,   472,     0,   377,   378,   474,   379,   380,
     381,   382,   383,   384,   385,   386,   387,   388,   389,   475,
       0,   391,   476,   427,   428,   429,   430,   431,   432,   433,
     434,   435,   436,   437,   438,   439,   440,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,   441,   442,   443,
     444,   445,   446,   447,   448,   449,   450,    35,    36,     0,
     451,     0,   452,   453,   454,   455,   456,   457,   458,   459,
     460,     0,   461,   462,     0,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   463,
     464,   465,   466,   467,   468,   469,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   981,
     471,     0,   472,     0,   377,   378,   474,   379,   380,   381,
     382,   383,   384,   385,   386,   387,   388,   389,   475,     0,
     391,   476,     4,     5,     0,     0,     0,   813,   814,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   815,   816,    30,    31,
     817,     0,    33,     0,     0,    34,    35,    36,   818,   819,
      38,    39,    40,    41,     0,    43,   820,    45,   146,    47,
     821,     0,     0,   822,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   823,   824,   825,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,   826,   827,   877,
     878,     0,     0,     0,   813,   814,     0,     0,     0,     0,
     828,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   815,   816,   130,   879,   303,     0,    33,
       0,     0,    34,    35,    36,     0,   819,    38,    39,    40,
       0,     0,     0,   820,   145,   146,     0,     0,     0,     0,
     822,     0,     0,     0,     0,   304,   305,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,     0,     0,     0,   823,
     824,   825,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   236,
     237,   307,   308,   309,     4,     5,     0,     0,     0,   813,
     814,     0,     0,     0,     0,     0,     0,   828,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,   815,   816,
     130,    31,   303,     0,    33,     0,     0,    34,    35,    36,
       0,   819,    38,     0,    40,     0,     0,     0,   820,   145,
     146,     0,     0,     0,     0,   822,     0,     0,     0,     0,
     304,   305,     0,     0,     0,     0,     0,     0,     0,   234,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,     0,     0,     0,   823,   824,   825,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   127,
     128,     0,     0,     0,   943,   814,     0,     0,     0,     0,
       0,     0,   828,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   815,   816,   130,   131,   231,     0,    33,
       0,     0,     0,    35,    36,     0,   819,    38,     0,    40,
       0,     0,     0,   820,   145,   146,     0,     0,     0,     0,
     822,     0,     0,     0,     0,   232,   233,     0,     0,     0,
       0,     0,     0,     0,   234,     0,     0,     0,     0,     0,
       0,   163,     0,     0,     0,   235,     0,     0,     0,   823,
     824,   825,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,   164,
     165,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   238,   239,   240,   127,   128,     0,     0,     0,   168,
     129,     0,     0,     0,     0,     0,     0,   828,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     130,   131,   303,     0,    33,   169,   170,   171,    35,    36,
       0,   144,    38,     0,    40,     0,     0,     0,   132,   145,
     146,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,     0,     0,     0,   133,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   308,   309,   127,
     128,     0,     0,     0,     0,   814,     0,     0,     0,     0,
       0,     0,   874,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   815,   816,   130,   131,     0,     0,    33,
       0,     0,     0,    35,    36,     0,     0,     0,     0,    40,
       0,     0,     0,   820,   145,     0,     0,     0,     0,     0,
     886,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   823,
     824,   825,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   127,   128,     0,     0,     0,     0,
     129,     0,     0,     0,     0,     0,     0,   887,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     130,   131,     0,     0,    33,     0,     0,     0,    35,    36,
       0,     0,     0,     0,    40,     0,     0,     0,   132,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   133,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       4,     5,     0,     0,     0,     6,     7,     0,     0,     0,
       0,     0,     0,   295,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,     0,
      33,     0,     0,    34,    35,    36,     0,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,     0,    84,     4,     5,     0,
       0,     0,     6,   129,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   130,    31,     0,     0,    33,     0,     0,
      34,    35,    36,     0,   144,    38,     0,    40,     0,     0,
       0,   132,   145,   146,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,   127,   128,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   130,   131,     0,
       0,    33,     0,     0,     0,    35,    36,     0,   144,    38,
       0,    40,     0,     0,     0,   132,   145,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   127,   128,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   130,   131,     0,     0,    33,     0,     0,     0,    35,
      36,     0,     0,     0,     0,    40,     0,     0,     0,   132,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   127,
     128,     0,     0,     0,     0,   129,   179,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   130,   131,     0,     0,    33,
       0,     0,     0,    35,    36,     0,     0,     0,     0,    40,
       0,     0,     0,   132,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,     4,     5,     0,     0,     0,     0,   129,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,     0,     0,    33,     0,     0,     0,    35,    36,     0,
       0,     0,     0,    40,     0,     0,     0,   132,     0,     0,
     216,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   133,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,   127,   128,     0,
       0,     0,     0,   129,   280,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   130,   131,     0,     0,    33,     0,     0,
       0,    35,    36,     0,     0,     0,     0,    40,     0,     0,
       0,   132,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   133,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,   127,   128,     0,     0,     0,     0,   129,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   130,   131,     0,
       0,    33,     0,     0,     0,    35,    36,     0,     0,     0,
       0,    40,     0,     0,     0,   132,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   133,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,   127,   128,     0,     0,     0,
       0,   129,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   130,   131,     0,     0,     0,     0,     0,     0,    35,
      36,     0,     0,     0,     0,    40,     0,     0,     0,   132,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   133,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,   127,
     128,     0,     0,     0,     0,   264,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,   265,   266,   130,   131,     0,     0,     0,
       0,     0,     0,    35,    36,     0,     0,     0,     0,     0,
       0,     0,     0,   267,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   268,
     269,   270,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,   503,     0,     0,     0,     0,   264,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,   265,   266,     0,     0,
       0,     0,     0,     0,     0,     0,    35,    36,     0,     0,
       0,     0,   504,     0,   350,   351,   267,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   268,   269,   270,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   376,     0,     0,     0,   377,   378,     0,   379,
     380,   381,   382,   383,   384,   385,   386,   387,   388,   389,
     390,     0,   391
};

static const yytype_int16 yycheck[] =
{
       4,     5,    89,    43,     3,    37,    91,    93,    93,   104,
     134,     4,     5,   241,     6,    91,   263,   285,   398,   500,
     655,    95,    96,    97,    98,   136,    30,    31,   262,   507,
     141,   257,   279,   736,   737,    34,   590,    30,    31,   735,
     274,    43,   712,   597,   278,    37,    38,    43,   219,   295,
     161,     5,     6,     7,    46,   567,   211,   283,   818,   293,
     495,     3,   855,    50,   175,    44,    93,   776,   302,   742,
       0,   914,   183,    60,   834,    90,     9,   248,     5,     6,
       7,    90,     5,     6,     7,   129,   134,    90,   761,   509,
      43,     9,    90,   137,    93,    37,   130,   101,   771,    91,
      42,     5,     6,     7,    37,    38,    90,     5,     6,     7,
     102,    44,   144,   153,   225,   130,   130,   241,   911,    37,
      38,   964,   217,   218,    57,   134,   166,   167,    46,   889,
      44,   134,   130,   220,   127,   128,   979,   130,   131,    57,
     178,    43,   130,    45,   130,   129,   855,   221,   222,   130,
     662,   153,   144,   248,   146,   182,   148,   153,   593,   101,
      93,    94,    95,   142,   166,   167,   145,     5,     6,     7,
     166,   167,   210,   846,   130,    93,    94,    95,    90,   133,
     335,   185,   663,   182,   604,   189,   190,   179,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   911,    90,    44,    90,   133,   211,   246,   142,
     133,    90,   145,   217,   218,   219,   256,   257,   130,   223,
     732,   879,   134,   141,   130,   529,    90,   708,   142,   133,
     130,   145,   272,   745,   405,   133,   138,   241,   908,   259,
     930,     3,     4,   283,   248,   130,    90,   134,   148,   134,
     129,   130,   130,   273,   256,   134,   134,   277,   812,    90,
     256,   257,   130,    90,   960,   511,   130,   287,   260,   972,
     262,   275,   292,   130,   932,   933,   272,   935,    40,   757,
     938,   301,   274,   130,   974,   129,   278,   283,   280,   129,
     844,   803,   129,    90,   848,   133,   300,   130,   129,   241,
     137,   293,   142,   130,     9,   145,    90,   311,   312,   313,
     302,   130,   316,   617,   618,   257,   130,   621,   622,   623,
     624,   625,   626,   627,   628,   629,   630,    90,   130,   349,
      90,   335,    37,    38,   568,    90,   971,     9,   342,    44,
     818,   283,   130,   129,    60,   129,   130,   828,   574,     9,
     134,   137,    57,   130,   465,   466,    90,   869,   130,   129,
     471,   472,   132,     9,   475,    37,    38,   130,   134,   129,
       9,   134,    44,    89,   129,   601,   129,    37,    38,   132,
       9,   134,   130,   136,   130,    57,    91,    92,    93,    94,
      95,    37,    38,   874,   774,   129,   130,    57,    37,    38,
     134,   405,   130,     9,   130,   130,   887,   134,    37,    38,
     129,    57,    46,   132,   718,   134,   420,   136,    57,    91,
      92,    93,    94,    95,   671,   130,    90,   134,    57,     9,
     677,    37,    38,    93,    94,    95,   670,   142,   129,   132,
     145,   132,   710,   134,   130,   136,   486,    93,    94,    95,
      50,    57,    90,   700,    93,    94,    95,    37,    38,   135,
     129,   129,    90,   132,    93,    94,    95,   136,    90,    90,
     142,   129,    90,   145,   132,   129,   134,    57,   136,   129,
     129,   141,    90,    90,   486,    90,   138,    93,    94,    95,
     486,   495,   148,    90,   129,   141,   500,   132,   129,   134,
     129,   136,   141,   132,   508,   509,   136,   136,   132,   132,
     129,   131,   137,    93,    94,    95,   131,   131,     9,   131,
      11,    12,    13,   129,    15,    16,   132,   137,   129,    90,
     136,   132,   148,   134,   574,   136,   129,   148,   542,   137,
     149,   137,   582,   583,   584,   137,    37,    38,   137,   137,
     137,   137,   132,   137,   594,   575,   576,   577,   578,   579,
     137,   601,   137,   137,   137,   137,    57,     9,    10,    11,
      12,    13,    14,    15,    16,   137,   568,   129,   574,   129,
     582,   583,   584,   129,   131,   130,   582,   583,   584,   593,
     594,    90,   129,   819,   137,   132,   135,   134,   594,   136,
     604,   132,    93,    94,    95,   601,   135,   132,   135,   133,
     138,   837,   132,   841,   137,    57,   135,   131,    90,   135,
     137,   613,    52,   135,   133,   135,     9,   131,    11,    12,
      13,    14,    15,    16,   137,   675,   131,   137,   149,   130,
     130,     9,   149,    16,    16,   130,   148,   875,   139,   140,
     141,    93,   148,   136,   131,     9,   660,   885,   137,   663,
     133,     9,    10,    11,    12,    13,    14,    15,    16,    37,
      38,   757,   757,   675,    57,   133,   131,   137,   670,   675,
     134,   757,    10,    37,    38,    53,   131,    55,   130,    57,
     132,   135,   131,   131,   137,   131,   131,   139,   140,   810,
     131,   130,   742,    57,   708,   131,   131,   131,   131,    57,
      93,   131,    11,   131,   130,   707,   137,   945,   137,   131,
     137,   761,   132,   715,   137,    93,    94,    95,   136,   132,
     132,   771,   818,    11,   131,   131,   131,   130,   742,    93,
      94,    95,   829,   149,   831,    93,   742,    50,   834,   834,
     130,   135,   876,   131,   131,     9,   131,   761,   757,   129,
     855,   835,   836,   137,   838,   761,   131,   771,   131,     9,
     131,   129,   776,   133,   131,   771,   131,   130,   132,   129,
     891,   133,   130,    37,    38,   131,   129,   819,   882,   131,
     757,   139,   140,   675,   757,   710,   257,    37,    38,   871,
     808,   850,   757,    57,   808,   518,   846,   218,   895,   883,
     884,   971,   797,   856,   106,     9,   105,    57,   929,   818,
       9,   813,   896,   897,   828,   213,   734,   819,     5,     6,
       7,   866,     9,   757,   234,   834,    -1,   841,    -1,    93,
      94,    95,   846,    37,    38,    -1,    -1,    -1,    37,    38,
     846,   855,   872,    93,    94,    95,    -1,    46,    -1,    -1,
      37,    38,    -1,    57,     9,    -1,    -1,     9,    57,    -1,
     874,   875,    -1,   877,   878,   879,    -1,    -1,   132,    -1,
      57,   885,    -1,   887,   877,   878,   879,    -1,    -1,    -1,
     889,    -1,    37,    38,   914,    37,    38,    91,    92,    93,
      94,    95,    91,    92,    93,    94,    95,   911,    -1,    -1,
      -1,    -1,    57,    -1,    -1,    57,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   946,    -1,    -1,    -1,
      -1,    -1,   936,   937,   938,    -1,   130,    -1,    -1,    -1,
      -1,   945,    -1,   963,   964,    -1,    91,    92,    93,    94,
      95,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,   979,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   139,   140,    -1,   142,   143,   144,
     145,   146,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    -1,   150,   151,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,   131,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,    -1,   150,   151,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,    -1,   132,   133,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    -1,   150,   151,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,   131,   132,    -1,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    -1,   150,   151,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   129,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      -1,   150,   151,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,   131,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    -1,
     150,   151,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      -1,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,
     131,   132,    -1,   134,   135,   136,   137,   138,   139,   140,
     141,   142,   143,   144,   145,   146,   147,   148,    -1,   150,
     151,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    -1,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    -1,
      62,    63,    -1,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,   130,   131,
     132,    -1,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,   145,   146,   147,   148,    -1,   150,   151,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    -1,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,
     133,   134,   135,   136,   137,   138,   139,   140,   141,   142,
     143,   144,   145,   146,   147,   148,    -1,   150,   151,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    -1,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    -1,    62,    63,
      -1,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   129,   130,    -1,   132,    -1,
     134,   135,   136,   137,   138,   139,   140,   141,   142,   143,
     144,   145,   146,   147,   148,   149,   150,   151,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    -1,    50,    -1,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    -1,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   129,   130,   131,   132,    -1,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,    -1,   150,   151,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    -1,    62,    63,    -1,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,   132,    -1,   134,   135,
     136,   137,   138,   139,   140,   141,   142,   143,   144,   145,
     146,   147,   148,    -1,   150,   151,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    -1,    50,    -1,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    -1,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   129,   130,    -1,   132,   133,   134,   135,   136,
     137,   138,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,    -1,   150,   151,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    -1,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    -1,    62,    63,    -1,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,   131,   132,    -1,   134,   135,   136,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150,   151,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      -1,    50,    -1,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    -1,    62,    63,    -1,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     129,   130,    -1,   132,    -1,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,   144,   145,   146,   147,   148,
      -1,   150,   151,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    -1,    62,    63,    -1,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   129,
     130,    -1,   132,    -1,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,    -1,
     150,   151,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    -1,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    -1,    56,    57,    58,    59,    60,
      61,    -1,    -1,    64,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
     141,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     9,    -1,    43,
      -1,    -1,    46,    47,    48,    -1,    50,    51,    52,    53,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    57,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    91,
      92,    93,    94,    95,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   141,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     9,    -1,    43,    -1,    -1,    46,    47,    48,
      -1,    50,    51,    -1,    53,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    64,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,     9,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    50,    51,    -1,    53,
      -1,    -1,    -1,    57,    58,    59,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    37,    38,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    57,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    37,
      38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,     3,     4,    -1,    -1,    -1,    57,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   141,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,     9,    -1,    43,    93,    94,    95,    47,    48,
      -1,    50,    51,    -1,    53,    -1,    -1,    -1,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      37,    38,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      57,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   141,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    57,    58,    -1,    -1,    -1,    -1,    -1,
      64,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   141,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,   132,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    -1,    46,    47,    48,    -1,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,    -1,   129,     3,     4,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,
      46,    47,    48,    -1,    50,    51,    -1,    53,    -1,    -1,
      -1,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    50,    51,
      -1,    53,    -1,    -1,    -1,    57,    58,    59,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    43,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,
      58,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     3,
       4,    -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    43,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     3,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    -1,    43,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    53,    -1,    -1,    -1,    57,    -1,    -1,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,     3,     4,    -1,
      -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    -1,    43,    -1,    -1,
      -1,    47,    48,    -1,    -1,    -1,    -1,    53,    -1,    -1,
      -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      -1,    43,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,
      -1,    53,    -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    -1,    -1,    -1,    -1,    -1,    47,
      48,    -1,    -1,    -1,    -1,    53,    -1,    -1,    -1,    57,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,    -1,
      -1,    -1,    53,    -1,    62,    63,    57,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   130,    -1,    -1,    -1,   134,   135,    -1,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,    -1,   150
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   153,     0,   154,     3,     4,     8,     9,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    43,    46,    47,    48,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   129,   155,   156,   157,   159,   173,
     189,   190,   191,   192,   201,   203,   204,   208,   209,   210,
     247,   275,   276,   277,   278,   279,   280,   282,   289,   290,
     294,   295,   296,   297,   311,     9,    37,    38,    57,    93,
      94,    95,   132,   274,   296,   274,   296,     3,     4,     9,
      39,    40,    57,    93,   277,   290,   130,   134,   175,   274,
     296,   132,   274,   296,    50,    58,    59,   275,   276,   277,
     290,   277,   134,   281,     9,    37,    38,    57,    93,    94,
      95,   132,   290,     9,    37,    38,    53,    55,    57,    93,
      94,    95,   282,   288,   289,   130,   134,    50,    60,    10,
     277,   250,   130,   130,   134,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,    44,   142,   145,   249,
     252,   253,   291,   292,   293,   249,    60,   159,   173,   277,
     159,   203,   209,   275,   129,   132,   221,   221,   221,   221,
     221,     9,    37,    38,    46,    57,    91,    92,    93,    94,
      95,   205,   213,   215,   218,   222,   248,   257,   260,   266,
     274,   290,   277,   291,   280,   279,    90,    90,   129,   336,
     134,   162,   134,   160,     9,    37,    38,    57,    93,    94,
      95,   213,    90,   336,   284,   132,   174,   336,   134,   164,
      10,   130,   277,    90,   135,   193,   288,   336,   158,   288,
     288,   129,   336,   283,   250,   132,   277,   129,   137,   203,
     275,   336,   285,     9,    37,    38,    57,    93,    94,    95,
     274,   313,   316,   317,   274,   274,   321,   274,   274,   274,
     274,   274,   274,   274,   274,   274,   274,   274,   274,   274,
     274,   129,   250,   248,   274,   254,   145,   293,   129,   129,
     243,   274,   291,   243,   257,   249,   221,   221,   274,   336,
      62,    63,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,   130,   134,   135,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,   147,
     148,   150,   334,   335,   213,   218,   290,   214,   219,   250,
     138,   244,   245,   257,   264,   291,   267,   268,   269,   130,
     134,    90,   288,     9,    37,    38,    57,    93,    94,    95,
     141,   210,   226,   228,   274,   288,   290,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    50,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    62,    63,    89,    90,    91,    92,    93,    94,    95,
     129,   130,   132,   133,   136,   148,   151,   297,   335,   338,
     339,   340,   341,   342,   277,   286,   136,   169,   286,   169,
     131,   286,   176,   177,   274,   132,   133,   286,   169,   211,
     141,   226,   290,     4,    53,   194,   196,   197,   198,   295,
     133,   132,   129,   129,   131,   286,   129,   153,   251,   131,
     131,   286,   137,   274,   274,   274,   137,   137,   274,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     131,   131,   137,   248,   129,   274,   129,   129,   129,   133,
     148,   148,   131,   149,   216,    90,    43,    45,   138,   220,
     220,   129,   246,   131,   257,   270,   272,   223,   224,   233,
     234,   274,   227,   130,    90,   336,   336,   336,   336,   336,
     137,   135,     5,     6,     7,   170,   171,   288,   132,   135,
     132,   135,   133,   137,   138,   176,   135,   132,   236,   237,
     233,    90,   135,   137,   192,   199,   274,   199,   153,   135,
     133,   252,   135,   312,   137,   131,   131,   318,   320,   137,
     294,   324,   326,   328,   330,   325,   327,   329,   331,   332,
     333,   274,   149,   149,   130,    16,    16,     9,    10,    11,
      12,    13,    14,    15,    16,    57,    93,   130,   132,   139,
     140,   298,   303,   309,   310,   258,   148,   236,   286,   130,
     136,   230,   229,   141,   226,   131,   131,   131,   133,   149,
     287,   163,   288,   288,   288,   137,   166,   161,   166,   176,
       9,    11,    12,    13,    15,    16,    57,    93,   130,   139,
     140,   141,   178,   179,   180,   184,   274,   282,   289,   133,
     165,   166,   131,    60,    89,   238,   240,   241,   141,   226,
     195,   199,   200,   133,   277,   314,   294,   294,   322,   131,
     294,   294,   294,   294,   294,   294,   294,   294,   294,   294,
     137,   300,   217,   134,   306,   299,   305,   304,    10,   130,
     261,   268,   271,   131,   135,   235,   232,   274,   236,   233,
     286,   169,   170,     5,     6,     7,   133,   167,   172,   169,
     133,   183,   139,   140,   142,   143,   144,   145,   146,   147,
     185,   181,   169,   133,   212,   137,   277,   233,   194,   244,
     131,   277,   319,   131,   294,   131,   131,   131,   131,   131,
     131,   131,   131,   137,   137,   131,   236,   307,   303,   298,
       9,   310,   310,   262,   180,   273,   130,   236,   137,   231,
     130,   131,   132,     8,     9,    37,    38,    41,    49,    50,
      57,    61,    64,    93,    94,    95,   128,   129,   141,   159,
     168,   173,   189,   191,   192,   202,   206,   207,   209,   226,
     247,   275,   311,   136,   132,   180,   182,   180,   132,   220,
     239,    91,    92,   130,   255,   259,   265,   266,   315,   137,
     323,    11,    11,   131,   278,   131,   301,   236,   149,   225,
     131,   232,   336,   166,   141,   275,   277,     3,     4,    40,
     186,   187,   192,   206,   209,   275,    64,   141,   226,   130,
      50,   130,   233,   249,   249,   159,   206,   209,   221,   221,
     226,   221,   218,   166,   131,   180,   166,   238,   242,   255,
     263,   291,   267,   131,   337,   131,   131,   131,   135,   137,
     300,   131,   236,   231,   131,   133,   233,   218,   129,   132,
     136,   188,   274,   274,   188,   274,     3,     4,    40,   187,
     221,   221,   233,     8,   206,   275,   336,   129,   129,   249,
     221,   221,   133,   133,   244,   131,   255,   131,   339,   130,
     302,   133,   131,   336,   337,   188,   188,   188,   131,   131,
     129,   256,   308,   298,   133,   129,   129,   261,   310,   337,
     131,   129
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
        case 3:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    { startSig(); clearTypeId(); clearTemplate(); closeComment(); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 1337 "vtkParse.y"
    { output_function(); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 1338 "vtkParse.y"
    { output_function(); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 1339 "vtkParse.y"
    { reject_function(); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    { output_function(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    { reject_function(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 1361 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 1362 "vtkParse.y"
    { popNamespace(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 1369 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    { end_class(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 1372 "vtkParse.y"
    { end_class(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 1373 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 1374 "vtkParse.y"
    { end_class(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 1375 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 1376 "vtkParse.y"
    { end_class(); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 1378 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 2); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 1379 "vtkParse.y"
    { end_class(); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 1380 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 2); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 1381 "vtkParse.y"
    { end_class(); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
    { startSig(); clearTypeId(); clearTemplate();  closeComment(); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { output_function(); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; reject_function(); currentClass = tmpc; }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 1403 "vtkParse.y"
    { output_function(); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    { output_function(); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; reject_function(); currentClass = tmpc; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    { output_function(); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1421 "vtkParse.y"
    {
      vtkParse_AddStringToArray(&currentClass->SuperClasses,
                                &currentClass->NumberOfSuperClasses,
                                vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    {access_level = VTK_ACCESS_PUBLIC;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    {access_level = VTK_ACCESS_PROTECTED;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    {access_level = VTK_ACCESS_PRIVATE;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1439 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1440 "vtkParse.y"
    {end_enum();}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1441 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1442 "vtkParse.y"
    {end_enum();}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 1446 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 1447 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 1449 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 1450 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1455 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1456 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1457 "vtkParse.y"
    {
         (yyval.str) = vtkstrcat((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1460 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1461 "vtkParse.y"
    {
         (yyval.str) = vtkstrcat5((yyvsp[(1) - (4)].str), " ", (yyvsp[(2) - (4)].str), " ", (yyvsp[(4) - (4)].str));
       }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1464 "vtkParse.y"
    {postSig("(");}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1465 "vtkParse.y"
    {
         (yyval.str) = vtkstrcat3("(", (yyvsp[(3) - (4)].str), ")");
       }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1470 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1472 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1472 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1473 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1473 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1474 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1474 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1475 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1475 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 1498 "vtkParse.y"
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

  case 125:

/* Line 1455 of yacc.c  */
#line 1520 "vtkParse.y"
    { }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 1521 "vtkParse.y"
    { }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1522 "vtkParse.y"
    { }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1524 "vtkParse.y"
    { }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1531 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 1); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 1532 "vtkParse.y"
    { add_using((yyvsp[(3) - (4)].str), 0); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1533 "vtkParse.y"
    { add_using((yyvsp[(2) - (3)].str), 0); }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 1540 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1541 "vtkParse.y"
    { postSig("template<");
          clearTypeId(); startTemplate(); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1543 "vtkParse.y"
    { chopSig();
            if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
            postSig("> "); clearTypeId(); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1548 "vtkParse.y"
    { chopSig(); postSig(", "); clearTypeId(); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1552 "vtkParse.y"
    {
               TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
               vtkParse_InitTemplateArg(arg);
               arg->Type = (yyvsp[(1) - (2)].integer);
               arg->Class = vtkstrdup(getTypeId());
               arg->Name = vtkstrdup(getVarName());
               arg->Value = vtkstrdup(getVarValue());
               vtkParse_AddArgumentToTemplate(currentTemplate, arg);
               }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 1562 "vtkParse.y"
    {
               TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
               vtkParse_InitTemplateArg(arg);
               arg->Name = vtkstrdup(getVarName());
               arg->Value = vtkstrdup(getVarValue());
               vtkParse_AddArgumentToTemplate(currentTemplate, arg);
               }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1569 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 1570 "vtkParse.y"
    {
               TemplateArgs *newTemplate = currentTemplate;
               TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
               vtkParse_InitTemplateArg(arg);
               popTemplate();
               arg->Template = newTemplate;
               arg->Name = vtkstrdup(getVarName());
               arg->Value = vtkstrdup(getVarValue());
               vtkParse_AddArgumentToTemplate(currentTemplate, arg);
               }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1581 "vtkParse.y"
    {postSig("class ");}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1582 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 1584 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); }
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 1614 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1615 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 1617 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 1624 "vtkParse.y"
    {
         openSig();
         preSig("explicit ");
         closeSig();
         currentFunction->IsExplicit = 1;
         }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1632 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1648 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1657 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 1661 "vtkParse.y"
    { postSig(")"); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1662 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(2) - (8)].integer);
      postSig(";");
      preSig("operator ");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1673 "vtkParse.y"
    { postSig(")"); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1674 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1682 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1683 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1688 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1690 "vtkParse.y"
    { postSig(")"); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1691 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1701 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1710 "vtkParse.y"
    {
      postSig(" const = 0");
      currentFunction->IsConst = 1;
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1720 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1728 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1731 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1732 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1733 "vtkParse.y"
    {
      if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
      (yyval.str) = vtkstrcat((yyvsp[(1) - (6)].str), copySig());
    }
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1738 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1740 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1741 "vtkParse.y"
    {
      currentFunction->Name = vtkstrdup((yyvsp[(1) - (3)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1747 "vtkParse.y"
    { postSig("("); }
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1756 "vtkParse.y"
    {
      postSig(");");
      closeSig();
      currentFunction->Name = vtkstrcat("~", (yyvsp[(1) - (1)].str));
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1764 "vtkParse.y"
    { postSig("(");}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1770 "vtkParse.y"
    {clearTypeId();}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1773 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1774 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1775 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1778 "vtkParse.y"
    { markSig(); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1780 "vtkParse.y"
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

  case 219:

/* Line 1455 of yacc.c  */
#line 1802 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments-1;
      if (getVarValue())
        {
        currentFunction->Arguments[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1810 "vtkParse.y"
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

  case 223:

/* Line 1455 of yacc.c  */
#line 1835 "vtkParse.y"
    {clearVarValue();}
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1837 "vtkParse.y"
    { postSig("="); clearVarValue();}
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1838 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1849 "vtkParse.y"
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

  case 234:

/* Line 1455 of yacc.c  */
#line 1903 "vtkParse.y"
    {postSig(", ");}
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1906 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1907 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1911 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1912 "vtkParse.y"
    { postSig(")"); }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1914 "vtkParse.y"
    {
         const char *scope = getScope();
         unsigned int parens = add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer));
         if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_FUNCTION) {
           if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
           getFunction()->Class = scope;
           (yyval.integer) = (parens | VTK_PARSE_FUNCTION); }
         else if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_ARRAY) {
           (yyval.integer) = add_indirection_to_array(parens); }
       }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1926 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1927 "vtkParse.y"
    { postSig(")"); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1929 "vtkParse.y"
    {
         const char *scope = getScope();
         unsigned int parens = add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer));
         if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_FUNCTION) {
           if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
           getFunction()->Class = scope;
           (yyval.integer) = (parens | VTK_PARSE_FUNCTION); }
         else if ((yyvsp[(5) - (5)].integer) == VTK_PARSE_ARRAY) {
           (yyval.integer) = add_indirection_to_array(parens); }
       }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1940 "vtkParse.y"
    { postSig("("); scopeSig(""); (yyval.integer) = 0; }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1941 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1943 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1946 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1948 "vtkParse.y"
    { postSig("("); scopeSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1951 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1952 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1953 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; postSig(")"); popFunction(); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1954 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_ARRAY; }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1957 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1959 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1962 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1964 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1966 "vtkParse.y"
    {clearVarName(); chopSig();}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1968 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1970 "vtkParse.y"
    {clearArray();}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1972 "vtkParse.y"
    {clearArray();}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1974 "vtkParse.y"
    {postSig("[");}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1974 "vtkParse.y"
    {postSig("]");}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1978 "vtkParse.y"
    {pushArraySize("");}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1979 "vtkParse.y"
    {pushArraySize((yyvsp[(1) - (1)].str));}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1985 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1986 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1987 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1988 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1989 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1990 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1991 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1998 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); setStorageType((yyval.integer));}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1999 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 2000 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 2002 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer); setStorageType((yyval.integer));}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 2003 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 2004 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 2006 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(2) - (3)].integer) | (yyvsp[(3) - (3)].integer));
      setStorageType((yyval.integer));}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 2010 "vtkParse.y"
    {postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 2011 "vtkParse.y"
    {postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 2013 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 2014 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 2016 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 2017 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 2018 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 2020 "vtkParse.y"
    {postSig("const ");}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 2024 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 2026 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 2027 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 2028 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 2031 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 2032 "vtkParse.y"
    {chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 2034 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 2035 "vtkParse.y"
    {chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 2037 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 2038 "vtkParse.y"
    {chopSig(); if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
      postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 2041 "vtkParse.y"
    {postSig(", ");}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 2043 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 2044 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 2045 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 2046 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 2047 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 2048 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 2049 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 2054 "vtkParse.y"
    {
             (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), "::", (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 2059 "vtkParse.y"
    {
             (yyval.str) = vtkstrcat3((yyvsp[(1) - (3)].str), "::", (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 2081 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 2082 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 2083 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 2088 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 2090 "vtkParse.y"
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

  case 331:

/* Line 1455 of yacc.c  */
#line 2101 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 2102 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 2105 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 2106 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 2107 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 2108 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 2109 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 2112 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 2113 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 2116 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 2117 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 2118 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 2119 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 2120 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 2121 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 2122 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 2125 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 2126 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 2127 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 2128 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 2129 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 2130 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 2131 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 2132 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 2133 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 2134 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 2135 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 2136 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 2137 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 2138 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 2139 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 2140 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 2141 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 2142 "vtkParse.y"
    { typeSig("long double"); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 2143 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 2144 "vtkParse.y"
    { typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 2146 "vtkParse.y"
    { typeSig("unsigned char"); (yyval.integer) = VTK_PARSE_UNSIGNED_CHAR;}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 2147 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 2149 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT;}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 2150 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 2152 "vtkParse.y"
    { typeSig("unsigned short"); (yyval.integer) = VTK_PARSE_UNSIGNED_SHORT;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 2153 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 2155 "vtkParse.y"
    { typeSig("unsigned long"); (yyval.integer) = VTK_PARSE_UNSIGNED_LONG;}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 2156 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 2158 "vtkParse.y"
    {typeSig("unsigned long long");(yyval.integer)=VTK_PARSE_UNSIGNED_LONG_LONG;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 2159 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 2161 "vtkParse.y"
    { typeSig("unsigned __int64"); (yyval.integer) = VTK_PARSE_UNSIGNED___INT64;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 2162 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT; }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 2163 "vtkParse.y"
    { typeSig("unsigned int"); (yyval.integer) = VTK_PARSE_UNSIGNED_INT; }
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 2169 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 2170 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 2171 "vtkParse.y"
    {
          postSig("}");
          (yyval.str) = vtkstrcat4("{ ", (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str), " }");
        }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 2178 "vtkParse.y"
    {(yyval.str) = "";}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 2179 "vtkParse.y"
    { postSig(", "); }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 2180 "vtkParse.y"
    {
          (yyval.str) = vtkstrcat3((yyvsp[(1) - (4)].str), ", ", (yyvsp[(4) - (4)].str));
        }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 2184 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 2185 "vtkParse.y"
    {postSig("+");}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 2185 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 2186 "vtkParse.y"
    {postSig("-");}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 2187 "vtkParse.y"
    {
             (yyval.str) = vtkstrcat("-", (yyvsp[(3) - (3)].str));
             }
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 2190 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 2191 "vtkParse.y"
    {postSig("(");}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 2191 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 2192 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 2194 "vtkParse.y"
    {
             chopSig();
             if (getSig()[strlen(getSig())-1] == '>') { postSig(" "); }
             postSig(">(");
             }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 2200 "vtkParse.y"
    {
             postSig(")");
             if (getTypeId()[strlen(getTypeId())-1] == '>')
               {
               (yyval.str) = vtkstrcat6(
                 (yyvsp[(1) - (9)].str), "<", getTypeId(), " >(", (yyvsp[(8) - (9)].str), ")");
               }
             else
               {
               (yyval.str) = vtkstrcat6(
                 (yyvsp[(1) - (9)].str), "<", getTypeId(), ">(", (yyvsp[(8) - (9)].str), ")");
               }
             }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 2214 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 2216 "vtkParse.y"
    { (yyval.str) = vtkstrcat((yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str)); }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 2218 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 2219 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 2220 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 2221 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 2222 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 2223 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 2224 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 2226 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 2228 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 2238 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 2239 "vtkParse.y"
    {
   postSig("a);");
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, (yyvsp[(6) - (7)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 2247 "vtkParse.y"
    {postSig("Get");}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 2248 "vtkParse.y"
    {markSig();}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 2248 "vtkParse.y"
    {swapSig();}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 2249 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(7) - (9)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 2256 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 2257 "vtkParse.y"
    {
   postSig("(char *);");
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 2265 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 2266 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (5)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 2273 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 2273 "vtkParse.y"
    {closeSig();}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 2275 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (10)].str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();

   currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (10)].str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 2303 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 2304 "vtkParse.y"
    {
   postSig("*);");
   currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (7)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 2312 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 2313 "vtkParse.y"
    {markSig();}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 2313 "vtkParse.y"
    {swapSig();}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 2314 "vtkParse.y"
    {
   postSig("();");
   currentFunction->Name = vtkstrcat("Get", (yyvsp[(4) - (9)].str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 2322 "vtkParse.y"
    {
   currentFunction->Name = vtkstrcat((yyvsp[(3) - (6)].str), "On");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Name = vtkstrcat((yyvsp[(3) - (6)].str), "Off");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 2337 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 2338 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 2342 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 2343 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 2347 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 2348 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 2352 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 2353 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 2357 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2358 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 2362 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 2363 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 2367 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2368 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2372 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2373 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2377 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2379 "vtkParse.y"
    {
   const char *typeText;
   chopSig();
   typeText = copySig();
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

  case 448:

/* Line 1455 of yacc.c  */
#line 2393 "vtkParse.y"
    {startSig();}
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2395 "vtkParse.y"
    {
   chopSig();
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

  case 450:

/* Line 1455 of yacc.c  */
#line 2407 "vtkParse.y"
    {
     currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (4)].str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2440 "vtkParse.y"
    {
     currentFunction->Name = vtkstrcat3("Get", (yyvsp[(3) - (4)].str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Name = vtkstrcat("Set", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_argument(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Name = vtkstrcat("Get", (yyvsp[(3) - (4)].str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2474 "vtkParse.y"
    {
   int is_concrete = 0;
   unsigned long i;

   currentFunction->Name = vtkstrdup("GetClassName");
   currentFunction->Signature = vtkstrdup("const char *GetClassName();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Name = vtkstrdup("IsA");
   currentFunction->Signature = vtkstrdup("int IsA(const char *name);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_argument(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

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

  case 453:

/* Line 1455 of yacc.c  */
#line 2526 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2527 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2528 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2529 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2532 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2533 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2533 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2534 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2534 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2535 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2535 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2536 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2536 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2537 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2537 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2538 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2538 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2539 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2540 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2541 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2542 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2543 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2544 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2545 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2546 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2547 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2548 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2549 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2550 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2551 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2552 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2553 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2554 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2555 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2556 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2557 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2558 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2559 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2560 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2561 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2562 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2563 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2564 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2565 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 7724 "vtkParse.tab.c"
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
#line 2589 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void vtkParse_InitTemplateArgs(TemplateArgs *args)
{
  args->NumberOfArguments = 0;
}

void vtkParse_InitTemplateArg(TemplateArg *arg)
{
  arg->Template = NULL;
  arg->Type = 0;
  arg->Class = NULL;
  arg->Name = NULL;
  arg->Value = NULL;
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
  func->IsStatic = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsOperator = 0;
  func->IsVariadic = 0;
  func->IsConst = 0;
  func->IsExplicit = 0;
  func->ReturnType = VTK_PARSE_VOID;

  /* everything below here is legacy information, *
   * maintained only for backwards compatibility  */
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
  val->NumberOfDimensions = 0;
  val->Function = NULL;
  val->IsStatic = 0;
  val->IsEnum = 0;
}

/* initialize the structure */
void vtkParse_InitEnum(EnumInfo *item)
{
  item->ItemType = VTK_ENUM_INFO;
  item->Access = VTK_ACCESS_PUBLIC;
  item->Name = NULL;
  item->Comment = NULL;
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

void vtkParse_FreeTemplate(TemplateArgs *template_info)
{
  unsigned long j, m;

  m = template_info->NumberOfArguments;
  for (j = 0; j < m; j++)
    {
    if (template_info->Arguments[j]->Template)
      {
      vtkParse_FreeTemplate(template_info->Arguments[j]->Template);
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
    vtkParse_FreeTemplate(function_info->Template);
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

  if (class_info->Template) { vtkParse_FreeTemplate(class_info->Template); }

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

  if (outerClass)
    {
    vtkParse_AddClassToClass(outerClass, currentClass);
    }
  else
    {
    vtkParse_AddClassToNamespace(currentNamespace, currentClass);
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

  if (valstring == NULL || valstring[0] == '\0')
    {
    valtype = 0;
    }
  else if (strcmp(valstring, "true") == 0 || strcmp(valstring, "false") == 0)
    {
    valtype = VTK_PARSE_BOOL;
    }
  else if (valstring[0] == '_' ||
           (valstring[0] >= 'a' && valstring[0] <= 'z') ||
           (valstring[0] >= 'A' && valstring[0] <= 'Z'))
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
        valtype = scope->Constants[i]->Type;
        }
      }
    }
  else if (valstring[0] == '\"')
    {
    valtype = VTK_PARSE_CHAR_PTR;
    }
  else if (valstring[0] == '\'')
    {
    valtype = VTK_PARSE_CHAR;
    }
  else if (valstring[0] == '-' || valstring[0] == '+' ||
           (valstring[0] >= '0' && valstring[0] <= '9'))
    {
    k = 0;
    if (valstring[0] == '-' || valstring[0] == '+')
      {
      k++;
      while (valstring[k] == ' ' || valstring[k] == '\t') { k++; }
      }
    if (valstring[k] >= '0' && valstring[k] <= '9')
      {
     /* guess "int" first */
      valtype = VTK_PARSE_INT;

      if (valstring[k+1] == 'x' || valstring[k+1] == 'X')
        {
        k += 2;
        while ((valstring[k] >= '0' && valstring[k] <= '9') ||
               (valstring[k] >= 'a' && valstring[k] <= 'f') ||
               (valstring[k] >= 'A' && valstring[k] <= 'F'))
          {
          k++;
          }
        }
      else
        {
        while ((valstring[k] >= '0' && valstring[k] <= '9') ||
               valstring[k] == '.' ||
               valstring[k] == 'e' || valstring[k] == 'E' ||
               valstring[k] == '-' || valstring[k] == '+')
          {
          if (valstring[k] == '.' ||
              valstring[k] == 'e' || valstring[k] == 'E')
            {
            valtype = VTK_PARSE_DOUBLE;
            }
          k++;
          }
        }

      /* look for type suffixes */
      if (valtype == VTK_PARSE_DOUBLE)
        {
        if (valstring[k] == 'f')
          {
          valtype = VTK_PARSE_FLOAT;
          }
        }
      else
        {
        while (valstring[k] != '\0')
          {
          if (valstring[k] == 'u' || valstring[k] == 'U')
            {
            valtype = (valtype | VTK_PARSE_UNSIGNED);
            }
          else if (valstring[k] == 'l' || valstring[k] == 'L')
            {
            if (valstring[k+1] == 'l' || valstring[k+1] == 'L')
              {
              k++;
              valtype = ((valtype & ~VTK_PARSE_UNSIGNED) | VTK_PARSE_LONG_LONG);
              }
            else
              {
              valtype = ((valtype & ~VTK_PARSE_UNSIGNED) | VTK_PARSE_LONG);
              }
            }
          else if (valstring[k] == 'i' && valstring[k+1] == '6' &&
                   valstring[k+2] == '4')
            {
            k += 2;
            valtype = ((valtype & ~VTK_PARSE_UNSIGNED) | VTK_PARSE___INT64);
            }
          k++;
          }
        }
      }
    }

  return valtype;
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

/* deal with types that include function pointers or arrays */
void handle_complex_type(
  ValueInfo *val, unsigned int datatype, unsigned int extra,
  const char *funcSig)
{
  FunctionInfo *func = 0;
  unsigned long i, n;
  const char *cp;

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
  val->Count = 0;
  if (val->NumberOfDimensions)
    {
    val->Count = 1;
    for (i = 0; i < val->NumberOfDimensions; i++)
      {
      n = 0;
      cp = val->Dimensions[i];
      if (cp[0] != '\0')
        {
        while (*cp != '\0' && *cp >= '0' && *cp <= '9') { cp++; }
        if (*cp == '\0')
          {
          n = (int)strtol(val->Dimensions[i], NULL, 0);
          }
        }
      val->Count *= n;
      }
    }
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
    if (currentFunction->NumberOfArguments == 2)
      {
      currentFunction->NumberOfArguments = 1;
      }
    else
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
  unsigned long i;
  char ntext[32];

  sprintf(ntext, "%lu", n);

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

  vtkParse_InitFile(&data);

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
