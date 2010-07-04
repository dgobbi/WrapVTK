
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

NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateArgs  *currentTemplate = NULL;

char          *currentEnumName = 0;
char          *currentEnumValue = 0;

int            parseDebug;
char           temps[2048];
parse_access_t access_level = VTK_ACCESS_PUBLIC;
int            is_concrete;
int            HaveComment;
char           CommentText[50000];
int            CommentState;

/* helper functions */
void start_class(const char *classname, int is_struct);
void reject_class(const char *classname, int is_struct);
void end_class();
void output_function(void);
void reject_function(void);
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count);
void add_argument(FunctionInfo *func, unsigned int type,
                  const char *classname, unsigned long count);
void start_enum(const char *enumname);
void add_enum(const char *name, const char *value);
void end_enum();
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);
void prepend_scope(char *cp, const char *arg);
unsigned int add_indirection(unsigned int tval, unsigned int ptr);
void handle_complex_type(ValueInfo *val, unsigned int datatype,
                         unsigned int extra, const char *funcSig);
void handle_function_type(ValueInfo *arg, const char *name,
                          const char *funcSig);

void outputSetVectorMacro(const char *var, unsigned int argType,
                          const char *typeText, unsigned long n);
void outputGetVectorMacro(const char *var, unsigned int argType,
                          const char *typeText, unsigned long n);

/* duplicate a string */
char *vtkstrdup(const char *in)
{
  char *res = NULL;
  if (in)
    {
    res = (char *)malloc(strlen(in)+1);
    strcpy(res,in);
    }
  return res;
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
    vtkParse_AddItemMacro(oldNamespace, Namespaces, currentNamespace);
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
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
int sigClosed;
size_t sigMark[10];
size_t sigAllocatedLength;
unsigned long sigMarkDepth = 0;

/* start a new signature */
void startSig()
{
  if (currentFunction->Signature)
    {
    free(currentFunction->Signature);
    currentFunction->Signature = NULL;
    }

  sigAllocatedLength = 0;
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;
}

/* reallocate Signature if "arg" cannot be appended */
void checkSigSize(const char *arg)
{
  if (strlen(currentFunction->Signature) + strlen(arg) + 5 >
      sigAllocatedLength)
    {
    currentFunction->Signature = (char *)
      realloc(currentFunction->Signature, sigAllocatedLength*2);
    sigAllocatedLength = sigAllocatedLength*2;
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
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t m, n;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
    m = strlen(cp);
    n = strlen(arg);
    memmove(&cp[n], cp, m+1);
    strncpy(cp, arg, n);
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    size_t m, n;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
    m = strlen(cp);
    n = strlen(arg);
    strncpy(&cp[m], arg, n+1);
    }
}

/* prepend a scope:: to the ID at the end of the signature */
void preScopeSig(const char *arg)
{
  if (!currentFunction->Signature)
    {
    currentFunction->Signature = (char*)malloc(2048);
    sigAllocatedLength = 2048;
    strcpy(currentFunction->Signature, arg);
    }
  else if (!sigClosed)
    {
    checkSigSize(arg);
    prepend_scope(currentFunction->Signature, arg);
    }
}

/* set a mark in the signature for later operations */
void markSig()
{
  sigMark[sigMarkDepth] = 0;
  if (currentFunction->Signature)
    {
    sigMark[sigMarkDepth] = strlen(currentFunction->Signature);
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
  if (currentFunction->Signature)
    {
    cp = &currentFunction->Signature[sigMark[sigMarkDepth]];
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
  if (currentFunction->Signature && sigMark[sigMarkDepth] > 0)
    {
    size_t i, m, n, nn;
    char c;
    char *cp;
    cp = currentFunction->Signature;
    n = strlen(cp);
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
  if (currentFunction->Signature)
    {
    size_t n = strlen(currentFunction->Signature);
    if (n > 0 && currentFunction->Signature[n-1] == ' ')
      {
      currentFunction->Signature[n-1] = '\0';
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
char **arrayDimensions;

/* clear the array counter */
void clearArray(void)
{
  numberOfDimensions = 0;
}

/* add another dimension */
void pushArraySize(const char *size)
{
  vtkParse_AddPointerToArray(&arrayDimensions, &numberOfDimensions,
                             vtkstrdup(size));
}

/* add another dimension to the front */
void pushArrayFront(const char *size)
{
  unsigned long i;

  vtkParse_AddPointerToArray(&arrayDimensions, &numberOfDimensions, 0);

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
char **getArray()
{
  return arrayDimensions;
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
 * Function stack
 *
 * operates on: currentFunction
 */

/* "private" variables */
FunctionInfo *functionStack[10] = { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 };
char *functionVarNameStack[10];
char *functionTypeIdStack[10];
unsigned long functionDepth = 0;

void pushFunction()
{
  functionStack[functionDepth] = currentFunction;
  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(currentFunction);
  if (functionStack[functionDepth])
    {
    currentFunction->Signature = functionStack[functionDepth]->Signature;
    }
  else
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
  if (currentFunction)
    {
    currentFunction->Signature = newFunction->Signature;
    }
  newFunction->Signature = NULL;
  clearVarName();
  if (functionVarNameStack[functionDepth])
    {
    setVarName(functionVarNameStack[functionDepth]);
    free(functionVarNameStack[functionDepth]);
    }
  clearTypeId();
  if (functionTypeIdStack[functionDepth])
    {
    setTypeId(functionTypeIdStack[functionDepth]);
    free(functionTypeIdStack[functionDepth]);
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
  size_t i, m, n;
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

  memmove(&cp[i+n+2], &cp[i], m+1);
  strncpy(&cp[i], arg, n);
  strncpy(&cp[i+n], "::", 2);
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



/* Line 189 of yacc.c  */
#line 826 "vtkParse.tab.c"

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
     INT = 272,
     FLOAT = 273,
     SHORT = 274,
     LONG = 275,
     LONG_LONG = 276,
     INT64__ = 277,
     DOUBLE = 278,
     VOID = 279,
     CHAR = 280,
     SIGNED_CHAR = 281,
     BOOL = 282,
     SSIZE_T = 283,
     SIZE_T = 284,
     OSTREAM = 285,
     ISTREAM = 286,
     ENUM = 287,
     UNION = 288,
     CLASS_REF = 289,
     OTHER = 290,
     CONST = 291,
     CONST_PTR = 292,
     CONST_EQUAL = 293,
     OPERATOR = 294,
     UNSIGNED = 295,
     SIGNED = 296,
     FRIEND = 297,
     INLINE = 298,
     MUTABLE = 299,
     TEMPLATE = 300,
     TYPENAME = 301,
     TYPEDEF = 302,
     NAMESPACE = 303,
     USING = 304,
     VTK_ID = 305,
     STATIC = 306,
     EXTERN = 307,
     VAR_FUNCTION = 308,
     VTK_LEGACY = 309,
     NEW = 310,
     DELETE = 311,
     OP_LSHIFT_EQ = 312,
     OP_RSHIFT_EQ = 313,
     OP_LSHIFT = 314,
     OP_RSHIFT = 315,
     OP_ARROW_POINTER = 316,
     OP_ARROW = 317,
     OP_INCR = 318,
     OP_DECR = 319,
     OP_PLUS_EQ = 320,
     OP_MINUS_EQ = 321,
     OP_TIMES_EQ = 322,
     OP_DIVIDE_EQ = 323,
     OP_REMAINDER_EQ = 324,
     OP_AND_EQ = 325,
     OP_OR_EQ = 326,
     OP_XOR_EQ = 327,
     OP_LOGIC_AND_EQ = 328,
     OP_LOGIC_OR_EQ = 329,
     OP_LOGIC_AND = 330,
     OP_LOGIC_OR = 331,
     OP_LOGIC_EQ = 332,
     OP_LOGIC_NEQ = 333,
     OP_LOGIC_LEQ = 334,
     OP_LOGIC_GEQ = 335,
     ELLIPSIS = 336,
     DOUBLE_COLON = 337,
     LP = 338,
     LA = 339,
     StdString = 340,
     UnicodeString = 341,
     IdType = 342,
     TypeInt8 = 343,
     TypeUInt8 = 344,
     TypeInt16 = 345,
     TypeUInt16 = 346,
     TypeInt32 = 347,
     TypeUInt32 = 348,
     TypeInt64 = 349,
     TypeUInt64 = 350,
     TypeFloat32 = 351,
     TypeFloat64 = 352,
     SetMacro = 353,
     GetMacro = 354,
     SetStringMacro = 355,
     GetStringMacro = 356,
     SetClampMacro = 357,
     SetObjectMacro = 358,
     GetObjectMacro = 359,
     BooleanMacro = 360,
     SetVector2Macro = 361,
     SetVector3Macro = 362,
     SetVector4Macro = 363,
     SetVector6Macro = 364,
     GetVector2Macro = 365,
     GetVector3Macro = 366,
     GetVector4Macro = 367,
     GetVector6Macro = 368,
     SetVectorMacro = 369,
     GetVectorMacro = 370,
     ViewportCoordinateMacro = 371,
     WorldCoordinateMacro = 372,
     TypeMacro = 373,
     VTK_CONSTANT_DEF = 374,
     VTK_BYTE_SWAP_DECL = 375
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 773 "vtkParse.y"

  char         *str;
  unsigned int  integer;



/* Line 222 of yacc.c  */
#line 1109 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1121 "vtkParse.tab.c"

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
#define YYLAST   5172

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  144
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  191
/* YYNRULES -- Number of rules.  */
#define YYNRULES  538
/* YYNRULES -- Number of states.  */
#define YYNSTATES  944

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
       2,     2,     2,   142,     2,     2,     2,   136,   137,     2,
     122,   123,   134,   132,   129,   131,   143,   135,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   128,   121,
     126,   130,   127,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   140,     2,   141,   139,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   124,   138,   125,   133,     2,     2,     2,
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
       0,     0,     3,     4,     5,     9,    11,    15,    19,    21,
      23,    25,    27,    31,    36,    38,    41,    45,    48,    51,
      54,    58,    61,    63,    65,    68,    73,    78,    80,    86,
      87,    94,    99,   100,   108,   109,   120,   121,   129,   130,
     141,   146,   147,   148,   152,   155,   157,   161,   165,   167,
     169,   171,   174,   176,   178,   181,   185,   189,   192,   196,
     200,   203,   209,   211,   213,   215,   216,   219,   221,   225,
     227,   230,   233,   236,   238,   240,   242,   243,   250,   251,
     257,   258,   260,   264,   266,   270,   272,   274,   276,   278,
     280,   282,   284,   286,   288,   290,   291,   295,   296,   301,
     302,   307,   309,   311,   313,   315,   317,   319,   321,   323,
     325,   327,   329,   335,   340,   344,   347,   351,   355,   358,
     360,   366,   370,   375,   380,   385,   390,   394,   398,   399,
     405,   407,   408,   413,   416,   419,   420,   424,   426,   428,
     429,   430,   434,   439,   444,   447,   451,   456,   462,   466,
     471,   478,   486,   492,   499,   502,   506,   509,   513,   517,
     519,   522,   525,   529,   533,   537,   539,   542,   546,   547,
     548,   557,   558,   562,   563,   564,   572,   573,   577,   578,
     581,   584,   586,   588,   592,   593,   599,   600,   601,   611,
     612,   616,   617,   623,   624,   628,   629,   633,   638,   640,
     641,   647,   648,   649,   652,   654,   656,   657,   662,   663,
     664,   670,   672,   674,   677,   678,   680,   681,   685,   690,
     695,   699,   702,   703,   706,   707,   708,   713,   714,   717,
     718,   722,   725,   726,   732,   735,   736,   742,   744,   746,
     748,   750,   752,   753,   754,   759,   761,   763,   766,   768,
     771,   772,   774,   776,   777,   779,   780,   783,   784,   790,
     791,   793,   794,   796,   798,   800,   802,   804,   806,   808,
     810,   813,   816,   820,   823,   826,   830,   832,   835,   837,
     840,   842,   845,   848,   850,   852,   854,   856,   857,   861,
     862,   868,   869,   875,   877,   878,   883,   885,   887,   889,
     891,   893,   895,   897,   899,   903,   907,   909,   911,   913,
     915,   917,   919,   921,   924,   926,   928,   931,   933,   935,
     937,   940,   943,   946,   949,   952,   955,   957,   959,   961,
     963,   965,   967,   969,   971,   973,   975,   977,   979,   981,
     983,   985,   987,   989,   991,   993,   995,   997,   999,  1001,
    1003,  1005,  1006,  1010,  1011,  1015,  1017,  1019,  1021,  1023,
    1025,  1027,  1029,  1031,  1033,  1034,  1041,  1042,  1044,  1045,
    1046,  1051,  1053,  1054,  1058,  1059,  1063,  1065,  1066,  1071,
    1072,  1073,  1083,  1085,  1088,  1090,  1092,  1094,  1096,  1098,
    1100,  1102,  1104,  1105,  1113,  1114,  1115,  1116,  1126,  1127,
    1133,  1134,  1140,  1141,  1142,  1153,  1154,  1162,  1163,  1164,
    1165,  1175,  1182,  1183,  1191,  1192,  1200,  1201,  1209,  1210,
    1218,  1219,  1227,  1228,  1236,  1237,  1245,  1246,  1254,  1255,
    1265,  1266,  1276,  1281,  1286,  1293,  1301,  1304,  1307,  1311,
    1315,  1317,  1319,  1321,  1323,  1325,  1327,  1329,  1331,  1333,
    1335,  1337,  1339,  1341,  1343,  1345,  1347,  1349,  1351,  1353,
    1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,
    1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,
    1395,  1397,  1399,  1400,  1403,  1404,  1407,  1409,  1411,  1413,
    1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,  1433,
    1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,
    1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,
    1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,
    1495,  1497,  1499,  1501,  1503,  1507,  1511,  1515,  1519
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     145,     0,    -1,    -1,    -1,   145,   146,   147,    -1,   236,
      -1,   163,   238,   121,    -1,   176,   238,   121,    -1,   177,
      -1,   149,    -1,   148,    -1,   181,    -1,   151,   238,   121,
      -1,   182,   151,   238,   121,    -1,    34,    -1,   198,   210,
      -1,   182,   198,   210,    -1,   197,   210,    -1,   193,   210,
      -1,   194,   210,    -1,   182,   193,   210,    -1,   191,   210,
      -1,   302,    -1,   327,    -1,   278,   121,    -1,     9,   122,
     328,   123,    -1,    50,   122,   328,   123,    -1,   121,    -1,
      52,    10,   124,   145,   125,    -1,    -1,    48,   278,   150,
     124,   145,   125,    -1,    48,   124,   328,   125,    -1,    -1,
       4,   263,   152,   159,   124,   156,   125,    -1,    -1,     4,
     263,   126,   274,   127,   153,   159,   124,   156,   125,    -1,
      -1,     3,   263,   154,   159,   124,   156,   125,    -1,    -1,
       3,   263,   126,   274,   127,   155,   159,   124,   156,   125,
      -1,     3,   124,   328,   125,    -1,    -1,    -1,   156,   157,
     158,    -1,   162,   128,    -1,   236,    -1,   163,   238,   121,
      -1,   176,   238,   121,    -1,   177,    -1,   181,    -1,   179,
      -1,    42,   179,    -1,   178,    -1,    34,    -1,   198,   210,
      -1,    42,   198,   210,    -1,   182,   198,   210,    -1,   196,
     210,    -1,    42,   196,   210,    -1,   182,   196,   210,    -1,
     192,   210,    -1,   120,   122,   328,   123,   121,    -1,   302,
      -1,   327,    -1,   121,    -1,    -1,   128,   160,    -1,   161,
      -1,   161,   129,   160,    -1,   276,    -1,     6,   276,    -1,
       7,   276,    -1,     5,   276,    -1,     5,    -1,     6,    -1,
       7,    -1,    -1,    32,   263,   164,   124,   166,   125,    -1,
      -1,    32,   165,   124,   166,   125,    -1,    -1,   167,    -1,
     167,   129,   166,    -1,   263,    -1,   263,   130,   170,    -1,
     169,    -1,   263,    -1,   277,    -1,   271,    -1,    16,    -1,
      11,    -1,    13,    -1,    12,    -1,    15,    -1,   168,    -1,
      -1,   174,   171,   170,    -1,    -1,   168,   175,   172,   170,
      -1,    -1,   122,   173,   170,   123,    -1,   131,    -1,   132,
      -1,   133,    -1,   131,    -1,   132,    -1,   134,    -1,   135,
      -1,   136,    -1,   137,    -1,   138,    -1,   139,    -1,    33,
     263,   124,   328,   125,    -1,    33,   124,   328,   125,    -1,
      49,   329,   121,    -1,   182,   179,    -1,     4,   263,   180,
      -1,     3,   263,   180,    -1,     3,   180,    -1,   121,    -1,
     124,   328,   125,   329,   121,    -1,   128,   329,   121,    -1,
      47,   266,   246,   121,    -1,    47,   151,   232,   121,    -1,
      47,   163,   232,   121,    -1,    47,   176,   232,   121,    -1,
      47,    53,   121,    -1,    45,   126,   127,    -1,    -1,    45,
     126,   183,   184,   127,    -1,   186,    -1,    -1,   186,   129,
     185,   184,    -1,   283,   189,    -1,   188,   189,    -1,    -1,
     187,   182,   189,    -1,     4,    -1,    46,    -1,    -1,    -1,
     263,   190,   233,    -1,    54,   122,   193,   123,    -1,    54,
     122,   196,   123,    -1,   264,   207,    -1,   264,   195,   207,
      -1,   278,    82,   133,   222,    -1,    43,   278,    82,   133,
     222,    -1,   278,    82,   215,    -1,    43,   278,    82,   215,
      -1,   278,    82,   278,    82,   133,   222,    -1,    43,   278,
      82,   278,    82,   133,   222,    -1,   278,    82,   278,    82,
     215,    -1,    43,   278,    82,   278,    82,   215,    -1,   278,
      82,    -1,   195,   278,    82,    -1,   133,   222,    -1,    43,
     133,   222,    -1,     8,   133,   222,    -1,   215,    -1,    43,
     215,    -1,   264,   207,    -1,     8,   264,   207,    -1,   278,
      82,   199,    -1,   264,   195,   202,    -1,   199,    -1,   264,
     202,    -1,     8,   266,   202,    -1,    -1,    -1,    39,   264,
     122,   200,   225,   123,   201,   209,    -1,    -1,   204,   203,
     209,    -1,    -1,    -1,    39,   325,   205,   122,   206,   225,
     123,    -1,    -1,   211,   208,   209,    -1,    -1,   130,    16,
      -1,    38,    16,    -1,    36,    -1,   121,    -1,   124,   328,
     125,    -1,    -1,   263,   122,   212,   225,   123,    -1,    -1,
      -1,   263,   126,   213,   274,   127,   122,   214,   225,   123,
      -1,    -1,   217,   216,   219,    -1,    -1,   263,   122,   218,
     225,   123,    -1,    -1,   128,   221,   220,    -1,    -1,   129,
     221,   220,    -1,   263,   122,   328,   123,    -1,   223,    -1,
      -1,   263,   122,   224,   225,   123,    -1,    -1,    -1,   226,
     227,    -1,    81,    -1,   229,    -1,    -1,   229,   129,   228,
     227,    -1,    -1,    -1,   230,   266,   244,   231,   233,    -1,
      53,    -1,   263,    -1,   279,   263,    -1,    -1,   234,    -1,
      -1,   130,   235,   289,    -1,   264,   237,   239,   121,    -1,
      51,    53,   239,   121,    -1,    53,   239,   121,    -1,   246,
     233,    -1,    -1,   241,   239,    -1,    -1,    -1,   239,   129,
     240,   241,    -1,    -1,   242,   237,    -1,    -1,   279,   243,
     237,    -1,   254,   256,    -1,    -1,   248,   252,   123,   245,
     250,    -1,   255,   256,    -1,    -1,   249,   253,   123,   247,
     250,    -1,   122,    -1,    83,    -1,    84,    -1,    83,    -1,
      84,    -1,    -1,    -1,   122,   251,   225,   123,    -1,   257,
      -1,   244,    -1,   279,   244,    -1,   246,    -1,   279,   246,
      -1,    -1,   255,    -1,   263,    -1,    -1,   257,    -1,    -1,
     258,   259,    -1,    -1,   261,   140,   260,   262,   141,    -1,
      -1,   259,    -1,    -1,   170,    -1,    50,    -1,     9,    -1,
      31,    -1,    30,    -1,    85,    -1,    86,    -1,   266,    -1,
      44,   266,    -1,    52,   266,    -1,    52,    10,   266,    -1,
      43,   266,    -1,   265,   266,    -1,    43,   265,   266,    -1,
      51,    -1,    51,    43,    -1,   267,    -1,   267,   279,    -1,
     269,    -1,   268,   269,    -1,   269,   268,    -1,    36,    -1,
     282,    -1,   271,    -1,   277,    -1,    -1,    46,   270,   276,
      -1,    -1,    50,   126,   272,   274,   127,    -1,    -1,     9,
     126,   273,   274,   127,    -1,   266,    -1,    -1,   266,   129,
     275,   274,    -1,    50,    -1,     9,    -1,    31,    -1,    30,
      -1,    85,    -1,    86,    -1,   271,    -1,   277,    -1,   278,
      82,   276,    -1,   271,    82,   276,    -1,     9,    -1,    50,
      -1,    31,    -1,    30,    -1,    85,    -1,    86,    -1,   137,
      -1,   280,   137,    -1,   280,    -1,   281,    -1,   280,   281,
      -1,   134,    -1,    37,    -1,   283,    -1,     4,   284,    -1,
       3,   284,    -1,    33,     9,    -1,    33,    50,    -1,    32,
       9,    -1,    32,    50,    -1,   285,    -1,   284,    -1,    85,
      -1,    86,    -1,    30,    -1,    31,    -1,     9,    -1,    50,
      -1,    24,    -1,    18,    -1,    23,    -1,    27,    -1,    28,
      -1,    29,    -1,    26,    -1,    88,    -1,    89,    -1,    90,
      -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,
      -1,    96,    -1,    97,    -1,    -1,    41,   286,   288,    -1,
      -1,    40,   287,   288,    -1,   288,    -1,    25,    -1,    17,
      -1,    19,    -1,    20,    -1,    87,    -1,    21,    -1,    22,
      -1,   294,    -1,    -1,   124,   290,   289,   292,   291,   125,
      -1,    -1,   129,    -1,    -1,    -1,   292,   129,   293,   289,
      -1,   301,    -1,    -1,   132,   295,   301,    -1,    -1,   131,
     296,   301,    -1,   300,    -1,    -1,   122,   297,   294,   123,
      -1,    -1,    -1,     9,   126,   298,   267,   127,   122,   299,
     301,   123,    -1,    10,    -1,   300,    10,    -1,    16,    -1,
      11,    -1,    13,    -1,    12,    -1,    14,    -1,    15,    -1,
       9,    -1,    50,    -1,    -1,    98,   122,   263,   129,   303,
     266,   123,    -1,    -1,    -1,    -1,    99,   122,   304,   263,
     129,   305,   266,   306,   123,    -1,    -1,   100,   122,   307,
     263,   123,    -1,    -1,   101,   122,   308,   263,   123,    -1,
      -1,    -1,   102,   122,   263,   129,   309,   282,   310,   129,
     329,   123,    -1,    -1,   103,   122,   263,   129,   311,   282,
     123,    -1,    -1,    -1,    -1,   104,   122,   312,   263,   129,
     313,   282,   314,   123,    -1,   105,   122,   263,   129,   282,
     123,    -1,    -1,   106,   122,   263,   129,   315,   282,   123,
      -1,    -1,   110,   122,   263,   129,   316,   282,   123,    -1,
      -1,   107,   122,   263,   129,   317,   282,   123,    -1,    -1,
     111,   122,   263,   129,   318,   282,   123,    -1,    -1,   108,
     122,   263,   129,   319,   282,   123,    -1,    -1,   112,   122,
     263,   129,   320,   282,   123,    -1,    -1,   109,   122,   263,
     129,   321,   282,   123,    -1,    -1,   113,   122,   263,   129,
     322,   282,   123,    -1,    -1,   114,   122,   263,   129,   323,
     282,   129,    11,   123,    -1,    -1,   115,   122,   263,   129,
     324,   282,   129,    11,   123,    -1,   116,   122,   263,   123,
      -1,   117,   122,   263,   123,    -1,   118,   122,   263,   129,
     263,   123,    -1,   118,   122,   263,   129,   263,   129,   123,
      -1,   122,   123,    -1,   140,   141,    -1,    55,   140,   141,
      -1,    56,   140,   141,    -1,   326,    -1,   130,    -1,   134,
      -1,   135,    -1,   131,    -1,   132,    -1,   142,    -1,   133,
      -1,   129,    -1,   126,    -1,   127,    -1,   137,    -1,   138,
      -1,   139,    -1,   136,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    61,    -1,    62,
      -1,    65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,
      -1,    63,    -1,    64,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,    79,    -1,    80,    -1,   119,    -1,    -1,
     328,   330,    -1,    -1,   329,   331,    -1,   121,    -1,   331,
      -1,    35,    -1,   332,    -1,   334,    -1,   333,    -1,    47,
      -1,   326,    -1,   128,    -1,   143,    -1,    82,    -1,     4,
      -1,    45,    -1,    31,    -1,    30,    -1,    85,    -1,    86,
      -1,   285,    -1,    13,    -1,    11,    -1,    12,    -1,    14,
      -1,    15,    -1,    10,    -1,    34,    -1,    36,    -1,    37,
      -1,    38,    -1,     3,    -1,    39,    -1,    51,    -1,    43,
      -1,     8,    -1,    32,    -1,    33,    -1,    46,    -1,    16,
      -1,    53,    -1,    81,    -1,     5,    -1,     7,    -1,     6,
      -1,    48,    -1,    49,    -1,    52,    -1,     9,    -1,    50,
      -1,   327,    -1,   124,   328,   125,    -1,   140,   328,   141,
      -1,   122,   328,   123,    -1,    83,   328,   123,    -1,    84,
     328,   123,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   910,   910,   911,   910,   915,   916,   917,   918,   919,
     920,   921,   922,   923,   924,   925,   926,   927,   928,   929,
     930,   931,   932,   933,   934,   935,   936,   937,   943,   949,
     949,   951,   957,   957,   959,   959,   961,   961,   963,   963,
     965,   968,   969,   968,   972,   973,   974,   975,   976,   977,
     978,   979,   980,   981,   982,   983,   985,   986,   987,   989,
     990,   991,   992,   993,   994,   996,   996,   998,   998,  1000,
    1001,  1002,  1003,  1010,  1011,  1012,  1022,  1022,  1024,  1024,
    1027,  1027,  1027,  1029,  1030,  1032,  1033,  1033,  1033,  1035,
    1035,  1035,  1035,  1035,  1037,  1038,  1038,  1043,  1043,  1049,
    1049,  1056,  1056,  1057,  1059,  1059,  1060,  1060,  1061,  1061,
    1062,  1062,  1068,  1069,  1071,  1073,  1075,  1076,  1077,  1079,
    1080,  1081,  1083,  1084,  1085,  1086,  1087,  1093,  1094,  1094,
    1098,  1099,  1099,  1102,  1112,  1120,  1120,  1132,  1133,  1135,
    1135,  1135,  1142,  1144,  1150,  1152,  1153,  1154,  1155,  1156,
    1157,  1158,  1159,  1160,  1162,  1163,  1165,  1166,  1167,  1172,
    1173,  1174,  1175,  1183,  1184,  1187,  1188,  1189,  1199,  1203,
    1198,  1218,  1218,  1230,  1231,  1230,  1238,  1238,  1250,  1251,
    1260,  1270,  1276,  1276,  1279,  1278,  1283,  1284,  1283,  1293,
    1293,  1303,  1303,  1305,  1305,  1307,  1307,  1309,  1311,  1325,
    1325,  1331,  1331,  1331,  1334,  1335,  1336,  1336,  1339,  1341,
    1339,  1370,  1394,  1394,  1396,  1396,  1398,  1398,  1405,  1406,
    1407,  1409,  1420,  1421,  1423,  1424,  1424,  1427,  1427,  1428,
    1428,  1432,  1433,  1433,  1439,  1440,  1440,  1445,  1446,  1448,
    1451,  1453,  1456,  1457,  1457,  1459,  1462,  1463,  1467,  1468,
    1471,  1471,  1473,  1475,  1475,  1477,  1477,  1479,  1479,  1481,
    1481,  1483,  1484,  1490,  1491,  1492,  1493,  1494,  1495,  1502,
    1503,  1504,  1505,  1507,  1508,  1510,  1514,  1515,  1517,  1518,
    1520,  1521,  1522,  1524,  1526,  1527,  1529,  1531,  1531,  1535,
    1535,  1537,  1537,  1540,  1540,  1540,  1542,  1543,  1544,  1545,
    1546,  1547,  1548,  1549,  1551,  1557,  1564,  1564,  1564,  1564,
    1564,  1564,  1580,  1581,  1582,  1587,  1588,  1600,  1601,  1604,
    1605,  1606,  1607,  1608,  1609,  1610,  1613,  1614,  1617,  1618,
    1619,  1620,  1621,  1622,  1625,  1626,  1627,  1628,  1629,  1630,
    1631,  1632,  1633,  1634,  1635,  1636,  1637,  1638,  1639,  1640,
    1641,  1642,  1642,  1643,  1643,  1645,  1648,  1649,  1650,  1651,
    1652,  1653,  1654,  1660,  1661,  1661,  1670,  1670,  1672,  1673,
    1673,  1681,  1682,  1682,  1683,  1683,  1686,  1687,  1687,  1688,
    1689,  1688,  1697,  1698,  1705,  1706,  1707,  1708,  1709,  1710,
    1711,  1713,  1723,  1723,  1736,  1737,  1737,  1736,  1749,  1749,
    1762,  1762,  1774,  1774,  1774,  1817,  1816,  1830,  1831,  1831,
    1830,  1843,  1871,  1871,  1876,  1876,  1881,  1881,  1886,  1886,
    1891,  1891,  1896,  1896,  1901,  1901,  1906,  1906,  1911,  1911,
    1931,  1931,  1949,  2003,  2059,  2118,  2184,  2185,  2186,  2187,
    2188,  2190,  2191,  2191,  2192,  2192,  2193,  2193,  2194,  2194,
    2195,  2195,  2196,  2196,  2197,  2198,  2199,  2200,  2201,  2202,
    2203,  2204,  2205,  2206,  2207,  2208,  2209,  2210,  2211,  2212,
    2213,  2214,  2215,  2216,  2217,  2218,  2219,  2220,  2221,  2222,
    2223,  2229,  2252,  2252,  2253,  2253,  2255,  2255,  2257,  2257,
    2257,  2257,  2257,  2258,  2258,  2258,  2258,  2258,  2258,  2259,
    2259,  2259,  2259,  2259,  2260,  2260,  2260,  2260,  2260,  2261,
    2261,  2261,  2261,  2261,  2261,  2262,  2262,  2262,  2262,  2262,
    2262,  2262,  2263,  2263,  2263,  2263,  2263,  2263,  2264,  2264,
    2264,  2264,  2264,  2264,  2266,  2267,  2268,  2268,  2268
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
  "INT", "FLOAT", "SHORT", "LONG", "LONG_LONG", "INT64__", "DOUBLE",
  "VOID", "CHAR", "SIGNED_CHAR", "BOOL", "SSIZE_T", "SIZE_T", "OSTREAM",
  "ISTREAM", "ENUM", "UNION", "CLASS_REF", "OTHER", "CONST", "CONST_PTR",
  "CONST_EQUAL", "OPERATOR", "UNSIGNED", "SIGNED", "FRIEND", "INLINE",
  "MUTABLE", "TEMPLATE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING",
  "VTK_ID", "STATIC", "EXTERN", "VAR_FUNCTION", "VTK_LEGACY", "NEW",
  "DELETE", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT",
  "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR", "OP_PLUS_EQ",
  "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ", "OP_REMAINDER_EQ",
  "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ", "OP_LOGIC_AND_EQ",
  "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ",
  "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS",
  "DOUBLE_COLON", "LP", "LA", "StdString", "UnicodeString", "IdType",
  "TypeInt8", "TypeUInt8", "TypeInt16", "TypeUInt16", "TypeInt32",
  "TypeUInt32", "TypeInt64", "TypeUInt64", "TypeFloat32", "TypeFloat64",
  "SetMacro", "GetMacro", "SetStringMacro", "GetStringMacro",
  "SetClampMacro", "SetObjectMacro", "GetObjectMacro", "BooleanMacro",
  "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_CONSTANT_DEF", "VTK_BYTE_SWAP_DECL", "';'", "'('", "')'", "'{'",
  "'}'", "'<'", "'>'", "':'", "','", "'='", "'-'", "'+'", "'~'", "'*'",
  "'/'", "'%'", "'&'", "'|'", "'^'", "'['", "']'", "'!'", "'.'", "$accept",
  "strt", "$@1", "file_item", "extern", "namespace", "$@2", "class_def",
  "$@3", "$@4", "$@5", "$@6", "class_def_body", "$@7", "class_def_item",
  "optional_scope", "scope_list", "scope_list_item", "scope_type",
  "enum_def", "$@8", "$@9", "enum_list", "enum_item", "integer_value",
  "integer_literal", "integer_expression", "$@10", "$@11", "$@12",
  "math_unary_op", "math_binary_op", "union_def", "using",
  "template_internal_class", "internal_class", "internal_class_body",
  "typedef", "template", "$@13", "template_args", "$@14", "template_arg",
  "$@15", "class_or_typename", "maybe_template_id", "$@16",
  "legacy_function", "legacy_method", "function", "scoped_method", "scope",
  "method", "scoped_operator", "operator", "typecast_op_func", "$@17",
  "$@18", "op_func", "$@19", "op_sig", "$@20", "$@21", "func", "$@22",
  "func_trailer", "func_body", "func_sig", "$@23", "$@24", "@25",
  "constructor", "$@26", "constructor_sig", "$@27", "maybe_initializers",
  "more_initializers", "initializer", "destructor", "destructor_sig",
  "$@28", "args_list", "$@29", "more_args", "$@30", "arg", "$@31", "$@32",
  "maybe_indirect_id", "maybe_var_assign", "var_assign", "$@33", "var",
  "var_id_maybe_assign", "maybe_vars", "maybe_other_vars", "$@34",
  "other_var", "$@35", "$@36", "maybe_complex_var_id", "$@37",
  "complex_var_id", "$@38", "p_or_lp_or_la", "lp_or_la",
  "maybe_array_or_args", "$@39", "maybe_indirect_maybe_var_id",
  "maybe_indirect_var_id", "maybe_var_id", "var_id", "maybe_var_array",
  "var_array", "$@40", "array", "$@41", "more_array", "array_size",
  "any_id", "storage_type", "static_mod", "type", "type_red", "const_mod",
  "type_red1", "$@42", "templated_id", "$@43", "$@44", "types", "$@45",
  "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "pointers", "pointer_or_const_pointer", "type_red2", "type_simple",
  "type_id", "type_primitive", "$@46", "$@47", "type_integer", "value",
  "$@48", "maybe_comma", "more_values", "$@49", "literal", "$@50", "$@51",
  "$@52", "$@53", "$@54", "string_literal", "literal2", "macro", "$@55",
  "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64",
  "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73",
  "$@74", "$@75", "$@76", "op_token", "op_token_no_delim",
  "vtk_constant_def", "maybe_other", "maybe_other_no_semi", "other_stuff",
  "other_stuff_no_semi", "braces", "brackets", "parens", 0
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
     375,    59,    40,    41,   123,   125,    60,    62,    58,    44,
      61,    45,    43,   126,    42,    47,    37,    38,   124,    94,
      91,    93,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   144,   145,   146,   145,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   147,   147,
     147,   147,   147,   147,   147,   147,   147,   147,   148,   150,
     149,   149,   152,   151,   153,   151,   154,   151,   155,   151,
     151,   156,   157,   156,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   158,   158,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   159,   160,   160,   161,
     161,   161,   161,   162,   162,   162,   164,   163,   165,   163,
     166,   166,   166,   167,   167,   168,   168,   168,   168,   169,
     169,   169,   169,   169,   170,   171,   170,   172,   170,   173,
     170,   174,   174,   174,   175,   175,   175,   175,   175,   175,
     175,   175,   176,   176,   177,   178,   179,   179,   179,   180,
     180,   180,   181,   181,   181,   181,   181,   182,   183,   182,
     184,   185,   184,   186,   186,   187,   186,   188,   188,   189,
     190,   189,   191,   192,   193,   194,   194,   194,   194,   194,
     194,   194,   194,   194,   195,   195,   196,   196,   196,   196,
     196,   196,   196,   197,   197,   198,   198,   198,   200,   201,
     199,   203,   202,   205,   206,   204,   208,   207,   209,   209,
     209,   209,   210,   210,   212,   211,   213,   214,   211,   216,
     215,   218,   217,   219,   219,   220,   220,   221,   222,   224,
     223,   225,   226,   225,   227,   227,   228,   227,   230,   231,
     229,   229,   232,   232,   233,   233,   235,   234,   236,   236,
     236,   237,   238,   238,   239,   240,   239,   242,   241,   243,
     241,   244,   245,   244,   246,   247,   246,   248,   248,   248,
     249,   249,   250,   251,   250,   250,   252,   252,   253,   253,
     254,   254,   255,   256,   256,   258,   257,   260,   259,   261,
     261,   262,   262,   263,   263,   263,   263,   263,   263,   264,
     264,   264,   264,   264,   264,   264,   265,   265,   266,   266,
     267,   267,   267,   268,   269,   269,   269,   270,   269,   272,
     271,   273,   271,   274,   275,   274,   276,   276,   276,   276,
     276,   276,   276,   276,   277,   277,   278,   278,   278,   278,
     278,   278,   279,   279,   279,   280,   280,   281,   281,   282,
     282,   282,   282,   282,   282,   282,   283,   283,   284,   284,
     284,   284,   284,   284,   285,   285,   285,   285,   285,   285,
     285,   285,   285,   285,   285,   285,   285,   285,   285,   285,
     285,   286,   285,   287,   285,   285,   288,   288,   288,   288,
     288,   288,   288,   289,   290,   289,   291,   291,   292,   293,
     292,   294,   295,   294,   296,   294,   294,   297,   294,   298,
     299,   294,   300,   300,   301,   301,   301,   301,   301,   301,
     301,   301,   303,   302,   304,   305,   306,   302,   307,   302,
     308,   302,   309,   310,   302,   311,   302,   312,   313,   314,
     302,   302,   315,   302,   316,   302,   317,   302,   318,   302,
     319,   302,   320,   302,   321,   302,   322,   302,   323,   302,
     324,   302,   302,   302,   302,   302,   325,   325,   325,   325,
     325,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   326,   326,   326,   326,   326,   326,   326,   326,   326,
     326,   327,   328,   328,   329,   329,   330,   330,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   331,   331,   331,   331,   331,   331,
     331,   331,   331,   331,   332,   333,   334,   334,   334
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     3,     3,     1,     1,
       1,     1,     3,     4,     1,     2,     3,     2,     2,     2,
       3,     2,     1,     1,     2,     4,     4,     1,     5,     0,
       6,     4,     0,     7,     0,    10,     0,     7,     0,    10,
       4,     0,     0,     3,     2,     1,     3,     3,     1,     1,
       1,     2,     1,     1,     2,     3,     3,     2,     3,     3,
       2,     5,     1,     1,     1,     0,     2,     1,     3,     1,
       2,     2,     2,     1,     1,     1,     0,     6,     0,     5,
       0,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     3,     0,     4,     0,
       4,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     5,     4,     3,     2,     3,     3,     2,     1,
       5,     3,     4,     4,     4,     4,     3,     3,     0,     5,
       1,     0,     4,     2,     2,     0,     3,     1,     1,     0,
       0,     3,     4,     4,     2,     3,     4,     5,     3,     4,
       6,     7,     5,     6,     2,     3,     2,     3,     3,     1,
       2,     2,     3,     3,     3,     1,     2,     3,     0,     0,
       8,     0,     3,     0,     0,     7,     0,     3,     0,     2,
       2,     1,     1,     3,     0,     5,     0,     0,     9,     0,
       3,     0,     5,     0,     3,     0,     3,     4,     1,     0,
       5,     0,     0,     2,     1,     1,     0,     4,     0,     0,
       5,     1,     1,     2,     0,     1,     0,     3,     4,     4,
       3,     2,     0,     2,     0,     0,     4,     0,     2,     0,
       3,     2,     0,     5,     2,     0,     5,     1,     1,     1,
       1,     1,     0,     0,     4,     1,     1,     2,     1,     2,
       0,     1,     1,     0,     1,     0,     2,     0,     5,     0,
       1,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     2,     3,     2,     2,     3,     1,     2,     1,     2,
       1,     2,     2,     1,     1,     1,     1,     0,     3,     0,
       5,     0,     5,     1,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     1,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     2,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     3,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     6,     0,     1,     0,     0,
       4,     1,     0,     3,     0,     3,     1,     0,     4,     0,
       0,     9,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     0,     0,     9,     0,     5,
       0,     5,     0,     0,    10,     0,     7,     0,     0,     0,
       9,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     9,
       0,     9,     4,     4,     6,     7,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   332,   357,   335,
     358,   359,   361,   362,   336,   334,   356,   340,   337,   338,
     339,   330,   331,    78,     0,    14,   283,     0,   353,   351,
       0,     0,     0,   287,     0,     0,   484,   333,   276,     0,
     224,     0,   328,   329,   360,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   481,    27,     4,    10,
       9,   227,   227,   227,     8,    11,     0,     0,     0,     0,
       0,     0,   165,     5,     0,     0,   269,   278,     0,   280,
     285,   286,     0,   284,   319,   327,   326,   355,    22,    23,
     332,   330,   331,   333,   328,   329,   482,    36,   321,    32,
     320,     0,     0,   332,     0,     0,   333,     0,     0,   482,
     291,   324,   266,   265,   325,   267,   268,     0,    76,   322,
     323,   482,     0,     0,   276,     0,     0,     0,     0,     0,
     273,     0,   270,   128,     0,     0,     0,     0,     0,     0,
     306,   309,   308,   307,   310,   311,   482,    29,     0,   482,
     289,   277,   224,     0,   271,     0,     0,     0,   394,   398,
     400,     0,     0,   407,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   318,   317,
     312,     0,   224,     0,   229,   314,   315,     0,     0,   227,
       0,     0,     0,   182,   482,    21,    18,    19,    17,    15,
     264,   266,   265,     0,   263,   240,   241,   267,   268,     0,
     166,   171,   144,   176,   224,   214,     0,   253,   252,     0,
     274,   279,   281,   282,     0,     0,    24,     0,     0,    65,
       0,    65,   332,   330,   331,   333,   328,   329,   324,   325,
     322,   323,   167,     0,     0,     0,    80,     0,     0,   482,
       0,   168,   354,   352,   275,     0,   127,   135,   297,   299,
     298,   296,   300,   301,   302,   288,   303,   126,   264,   263,
       0,   212,     0,     0,     0,     0,   252,     0,     0,   514,
     497,   525,   527,   526,   518,   531,   509,   505,   506,   504,
     507,   508,   522,   500,   499,   519,   520,   510,   488,   511,
     512,   513,   515,   517,   498,   521,   492,   528,   529,   532,
     516,   530,   523,   455,   456,   457,   458,   459,   460,   461,
     462,   468,   469,   463,   464,   465,   466,   467,   470,   471,
     472,   473,   474,   475,   476,   477,   478,   479,   480,   524,
     496,   482,   482,   501,   502,   114,   482,   482,   449,   450,
     494,   448,   441,   444,   445,   447,   442,   443,   454,   451,
     452,   453,   482,   446,   495,   503,   493,   533,   485,   489,
     491,   490,     0,     0,     0,     2,   272,   220,   225,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    12,   223,   228,     0,   313,   316,     6,     7,
       0,    20,    16,     0,     0,   455,   456,     0,     0,   173,
     440,   164,   145,     0,   178,   178,     0,   216,   221,   215,
     248,     0,     0,   234,   254,   259,   184,   186,   154,   305,
     297,   299,   298,   296,   300,   301,     0,   163,   148,   189,
       0,   304,     0,   486,    40,   483,   487,   293,     0,     0,
       0,     0,     0,    25,     0,     0,    81,    83,    80,   113,
       0,   202,     0,   149,     0,   137,   138,     0,   130,     0,
     139,   139,   123,   213,   124,   125,   122,    31,     2,     0,
       0,     0,     0,     0,    26,     0,   219,     3,   227,   142,
     392,     0,     0,     0,   402,   405,     0,     0,   412,   416,
     420,   424,   414,   418,   422,   426,   428,   430,   432,   433,
       0,   230,    13,   183,     0,     0,   436,   437,     0,   155,
     181,     0,     0,   172,   177,   218,     0,   235,   249,   256,
       0,   202,     0,   146,   198,     0,   193,   191,     0,   294,
      38,     0,     0,     0,    66,    67,    69,    41,    34,    41,
     292,    79,    80,     0,     0,   112,     0,   208,   147,     0,
     129,   131,   139,   134,   140,   133,     3,   537,   538,   536,
     534,   535,   290,    28,   226,     0,   395,   399,   401,     0,
       0,   408,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   438,   439,   174,   180,   179,   390,
     382,   385,   387,   386,   388,   389,   384,   391,   377,   364,
     374,   372,   217,   363,   376,   371,   242,   257,     0,     0,
     199,     0,   190,   202,     0,   152,     0,    65,    72,    70,
      71,     0,    42,    65,    42,    82,   264,    90,    92,    91,
      93,    89,   263,    99,   101,   102,   103,    94,    85,    84,
      95,    86,    88,    87,    77,   169,   211,   204,   203,   205,
       0,     0,   153,   135,   136,   214,    30,     0,     0,   403,
       0,     0,   411,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   434,     0,   202,   379,     0,     0,     0,
       0,   383,   243,   236,   245,   261,   185,     0,   202,   195,
       0,     0,   150,   295,     0,    68,    37,     0,     0,    33,
       0,   104,   105,   106,   107,   108,   109,   110,   111,    97,
       0,   178,   206,   250,   151,   132,   141,   393,   396,     0,
     406,   409,   413,   417,   421,   425,   415,   419,   423,   427,
       0,     0,   435,     0,     0,     0,   368,   390,   375,   373,
     202,   262,     0,   187,     0,     0,   194,   482,   192,    41,
       0,     0,    73,    74,    75,     0,   332,   330,   331,    53,
       0,     0,   333,     0,   328,   329,     0,    64,     0,    43,
       0,   227,   227,    48,    52,    50,    49,     0,     0,     0,
       0,   159,    45,     0,    62,    63,    41,     0,     0,    96,
     170,   208,   238,   239,   237,   209,   250,   253,   251,     0,
     484,     0,     0,     0,   175,     0,   378,   366,     0,   258,
     202,   200,   195,     0,    42,   119,   482,   484,   118,     0,
       0,     0,     0,   269,    51,     0,     0,     0,     0,   160,
       0,   482,   156,    44,     0,     0,   115,     0,     0,    60,
      57,    54,   161,    42,   100,    98,   207,   214,   246,     0,
     250,   231,   397,     0,   410,   429,   431,     0,   369,     0,
     244,     0,   196,   197,    39,     0,     0,   117,   116,   158,
     162,    58,    55,   157,     0,     0,     0,     0,    46,    47,
      59,    56,    35,   210,   232,   247,   404,   380,     0,   365,
     188,   484,   121,   143,     0,   242,     0,   370,     0,    61,
     233,     0,   120,   381
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    78,    79,    80,   298,    81,   251,   663,
     249,   657,   662,   737,   809,   480,   574,   575,   810,    82,
     267,   137,   485,   486,   677,   678,   679,   750,   828,   740,
     680,   749,    83,    84,   814,   815,   858,    85,    86,   277,
     497,   693,   498,   499,   500,   593,   695,    87,   818,    88,
      89,   229,   819,    90,    91,    92,   491,   751,   230,   444,
     231,   548,   715,   232,   445,   553,   215,   233,   561,   562,
     850,   821,   566,   469,   653,   652,   786,   729,   563,   564,
     728,   586,   587,   688,   831,   689,   690,   887,   290,   448,
     449,   556,    93,   234,   201,   175,   518,   202,   203,   425,
     835,   935,   235,   646,   836,   236,   723,   780,   889,   451,
     837,   237,   453,   454,   455,   559,   725,   560,   782,   470,
     862,    95,    96,    97,    98,    99,   154,   100,   393,   265,
     478,   656,   471,   101,   128,   204,   205,   206,   103,   104,
     105,   106,   148,   147,   107,   642,   718,   899,   847,   928,
     643,   720,   719,   717,   774,   936,   644,   645,   108,   605,
     402,   698,   839,   403,   404,   609,   759,   610,   407,   701,
     841,   613,   617,   614,   618,   615,   619,   616,   620,   621,
     622,   439,   386,   387,   247,   168,   475,   476,   389,   390,
     391
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -784
static const yytype_int16 yypact[] =
{
    -784,    87,  -784,  4196,   287,   608,  4824,   121,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,   115,   159,   615,   461,  -784,  -784,  4410,  -784,  -784,
    4505,  4824,   -62,  -784,  4600,   476,  -784,   138,    77,  4695,
    -784,    -5,   226,   229,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,    -1,    41,   106,   122,   129,
     134,   190,   204,   206,   212,   243,   249,   252,   257,   264,
     266,   267,   268,   270,   271,   273,  -784,  -784,  -784,  -784,
    -784,   101,   101,   101,  -784,  -784,  4315,    43,    43,    43,
      43,    43,  -784,  -784,   584,  4824,  -784,    31,  4858,    97,
     141,  -784,   241,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     214,   259,   407,   416,   516,   578,  -784,   232,  -784,   275,
    -784,   648,   648,   -21,    53,    54,     3,   363,   322,  -784,
    -784,   284,  -784,  -784,   288,  -784,  -784,   294,  -784,   284,
     288,  -784,   295,  4505,   364,  4729,   293,   499,   499,  4824,
    -784,   344,  -784,   300,   748,   307,   244,   244,   244,   200,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  3025,  -784,
    -784,  -784,  -784,  4088,  -784,   100,  4410,   753,  -784,  -784,
    -784,   753,   753,  -784,   753,   753,   753,   753,   753,   753,
     753,   753,   753,   753,   753,   753,   753,   753,  -784,  -784,
    -784,   308,  -784,   200,  -784,    61,  -784,   309,   312,   101,
      43,    43,   622,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     352,   353,   354,  5030,   361,  -784,  -784,   362,   365,   766,
    -784,  -784,  -784,  -784,  -784,   316,   283,   319,   -26,   367,
    -784,  -784,  -784,  -784,   748,   375,  -784,   910,  4824,   328,
    4824,   328,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,   748,  1051,  4824,   753,   339,  1192,  -784,
    4824,  -784,  -784,  -784,  -784,   119,  -784,  4987,   -21,   353,
     354,     3,   362,   365,   141,  -784,  -784,  -784,  -784,  -784,
     343,  -784,   753,   345,   368,   369,  -784,  1333,   349,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  1474,  4824,   128,  -784,  -784,  -784,  -784,   351,
     753,   346,   753,   753,   753,   366,   380,   753,   381,   383,
     385,   386,   393,   394,   396,   398,   400,   403,   409,   418,
     422,   421,  -784,   423,  -784,   200,  -784,  -784,  -784,  -784,
     433,  -784,  -784,   -26,  1615,   413,   415,   435,   424,  -784,
    -784,  -784,  -784,   474,    16,    16,   149,  -784,  -784,  -784,
    -784,   436,   200,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     173,   -13,     9,   179,   151,   197,   753,  -784,  -784,  -784,
     452,  -784,   493,  -784,  -784,  -784,  -784,   447,   450,   599,
     456,   454,   459,  -784,   457,   462,   466,   460,   753,  -784,
    1756,   478,   753,  -784,   515,  -784,  -784,   475,   481,   568,
     753,   753,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  1897,
    2038,  2179,  2320,  2461,  -784,   491,  -784,   508,    31,  -784,
    -784,   487,   512,   513,  -784,  -784,   514,  4953,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     753,  -784,  -784,  -784,   507,   519,  -784,  -784,   533,  -784,
    -784,   650,   657,  -784,  -784,  -784,   467,  -784,  -784,   534,
     535,   478,  4824,  -784,  -784,   554,   549,  -784,   401,  -784,
    -784,   748,   748,   748,  -784,   551,  -784,  -784,  -784,  -784,
    -784,  -784,   753,   291,   556,  -784,   560,    35,  -784,   463,
    -784,  -784,   753,  -784,  -784,  -784,   561,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  4824,  -784,  -784,  -784,  4953,
    4953,  -784,   566,  4953,  4953,  4953,  4953,  4953,  4953,  4953,
    4953,  4953,  4953,   202,  -784,  -784,  -784,  -784,  -784,   564,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,   681,  -784,   -38,  -784,   580,   582,
    -784,   753,  -784,   478,   753,  -784,  4824,   328,  -784,  -784,
    -784,   599,   586,   328,   588,  -784,   -21,  -784,  -784,  -784,
    -784,  -784,     3,  -784,  -784,  -784,  -784,   432,  -784,  -784,
    -784,  -784,   141,  -784,  -784,  -784,  -784,  -784,  -784,   590,
    4824,   753,  -784,  4987,  -784,   316,  -784,   597,  4824,  -784,
     601,  4953,  -784,   617,   618,   627,   628,   635,   637,   640,
     642,   602,   609,  -784,   643,   478,  -784,   489,   467,   714,
     714,  -784,  -784,  -784,  -784,   291,  -784,   645,   478,   639,
     647,   649,  -784,  -784,   646,  -784,  -784,  3589,   658,  -784,
     291,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     291,    16,  -784,   542,  -784,  -784,  -784,  -784,  -784,   656,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
     760,   763,  -784,   665,  4824,   671,  -784,  -784,  -784,  -784,
     478,  -784,   654,  -784,   683,   753,  -784,  -784,  -784,  -784,
      51,   608,  -784,  -784,  -784,  3898,   173,   -13,     9,  -784,
    3708,  3993,   179,   685,   151,   197,   686,  -784,   753,  -784,
     682,   101,   101,  -784,  -784,  -784,  -784,  3708,    43,    43,
      43,  -784,  -784,   632,  -784,  -784,  -784,   688,   291,  -784,
    -784,    35,  -784,  -784,  -784,  -784,   260,   319,  -784,   689,
    -784,   690,   691,   692,  -784,   693,  -784,   680,   695,  -784,
     478,  -784,   639,  2602,   696,  -784,  -784,  -784,  -784,   236,
     236,   753,   753,   363,  -784,    43,    43,   622,   753,  -784,
    3803,  -784,  -784,  -784,   701,   702,  -784,    43,    43,  -784,
    -784,  -784,  -784,   700,  -784,  -784,  -784,   316,  -784,   703,
     542,  -784,  -784,  3166,  -784,  -784,  -784,   705,   704,   706,
    -784,   707,  -784,  -784,  -784,  2743,  3307,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  3898,   712,   753,  2884,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,   467,  -784,
    -784,  -784,  -784,  -784,   715,   -38,   714,  -784,  3448,  -784,
    -784,   717,  -784,  -784
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -784,  -348,  -784,  -784,  -784,  -784,  -784,    11,  -784,  -784,
    -784,  -784,  -544,  -784,  -784,  -218,   167,  -784,  -784,   -25,
    -784,  -784,  -423,  -784,  -784,  -784,  -667,  -784,  -784,  -784,
    -784,  -784,   -23,   104,  -784,  -705,  -659,   105,  -460,  -784,
     144,  -784,  -784,  -784,  -784,  -444,  -784,  -784,  -784,    -6,
    -784,  -784,  -745,  -784,   -78,   598,  -784,  -784,  -111,  -784,
    -784,  -784,  -784,  -211,  -784,  -415,   -76,  -784,  -784,  -784,
    -784,  -219,  -784,  -784,  -784,  -784,    -8,    60,  -452,  -784,
    -784,  -491,  -784,    15,  -784,  -784,  -784,  -784,    69,  -647,
    -784,  -784,   110,  -160,   -58,  -123,  -784,   330,  -784,  -784,
    -783,  -784,  -128,  -784,  -784,  -784,   -86,  -784,  -784,  -784,
    -784,  -694,    13,  -608,  -784,  -784,  -784,  -784,  -784,    -4,
       0,   -28,    -2,    79,   755,   757,  -784,  -131,  -784,  -784,
    -199,  -784,  -104,  -118,    64,   -80,  -784,   651,  -403,  -255,
       1,  -158,  -784,  -784,   168,  -674,  -784,  -784,  -784,  -784,
     142,  -784,  -784,  -784,  -784,  -784,  -784,  -678,   123,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,  -784,
    -784,  -784,   638,    18,   -95,  -765,  -784,  -161,  -784,  -784,
    -784
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -368
static const yytype_int16 yytable[] =
{
     117,   119,   149,    94,   127,   118,   120,   388,   211,   157,
     385,   158,   216,   217,   218,   219,   262,   241,   442,   138,
     142,   109,   501,   284,   207,   208,   468,   146,   150,   152,
     554,   295,   159,   482,   264,   664,   286,   174,   724,   592,
     588,   778,   779,   424,   776,   156,   268,   517,   756,   394,
     285,   481,   550,   888,   551,   865,   493,   595,   781,   838,
     110,  -306,   258,   260,   153,   584,   484,   102,   198,  -309,
     648,   297,   877,   827,   392,   893,   292,   292,   292,   423,
     210,   111,   112,   829,   722,  -307,   212,     2,   686,   385,
     238,  -308,   906,   240,   151,   864,   456,   209,   198,   167,
     457,   113,  -255,   259,   261,   130,   385,   925,   450,  -266,
     385,   446,   876,   284,   284,   149,   687,   176,   441,   434,
     171,   177,   118,   120,   612,   915,   286,   286,   460,   170,
     172,  -265,   284,    26,   431,   432,   114,   115,   198,   385,
     459,   150,   838,   174,   284,   286,   552,   274,   694,   461,
     462,   430,   291,   291,   291,   296,   452,   286,   239,   665,
     596,   885,   731,   178,   213,   199,   938,   214,   200,   463,
     399,   396,   855,   401,   490,   856,   400,   405,   406,   857,
     408,   409,   410,   411,   412,   413,   414,   415,   416,   417,
     418,   419,   420,   421,   515,   199,   838,  -309,   426,   296,
     907,   908,   732,  -306,   464,   465,   699,   700,   433,   288,
     703,   704,   705,   706,   707,   708,   709,   710,   711,   712,
    -307,   397,  -222,   244,   773,   433,   293,   294,   179,   398,
     132,   133,   296,  -310,   385,   199,  -309,   784,   200,   754,
     923,  -308,  -306,   129,   180,   854,   477,   130,   477,   516,
     289,   181,   492,   288,   937,  -306,   182,   398,   941,  -307,
     169,  -307,   487,   477,   170,   541,   509,   510,   396,   288,
     555,   511,   512,  -267,   132,   133,   385,   817,   398,  -311,
    -308,   198,   883,   225,   226,   135,   136,   513,   503,   848,
     132,   133,   288,   443,   289,  -264,   110,   198,   761,   130,
     666,  -263,   667,   668,   669,   170,   670,   671,  -310,   472,
     289,  -311,   183,   132,   133,   272,   273,   111,   112,  -268,
     198,   221,   222,   245,   558,   713,   184,   724,   185,   135,
     136,   714,   385,   289,   186,  -264,   830,   113,  -264,   494,
    -264,   672,  -264,   832,   833,   135,   136,  -310,   284,   655,
    -311,   385,   385,   385,   385,   385,   872,   855,   248,   901,
     856,   286,   246,   649,   857,   187,   225,   226,   135,   136,
     692,   188,   114,   115,   189,   576,   227,   228,   199,   190,
    -266,   200,   834,  -266,   460,  -266,   191,  -266,   192,   193,
     194,   477,   195,   196,   199,   197,   433,   200,   521,   522,
     523,   250,   223,   526,   263,   461,   462,   171,  -264,   909,
     460,   116,  -263,   673,    27,   271,   913,   199,   266,   269,
     200,   296,   674,   675,   676,   463,   275,   276,   287,   422,
     428,   461,   462,   429,  -306,  -309,  -308,   284,   501,   734,
     284,   284,   284,  -307,  -310,   738,   447,  -311,   296,   458,
     286,   463,   682,   286,   286,   286,   479,   733,   284,  -255,
     464,   465,   565,   488,   502,   683,   504,   658,   659,   660,
     139,   286,   460,   508,   519,   520,   629,   630,   631,   632,
     633,   634,   635,   636,   487,   160,   464,   465,   565,   505,
     506,   132,   133,   461,   462,   524,   594,   594,   629,   630,
     631,   632,   633,   634,   635,   636,   161,   162,   466,   525,
     527,   140,   528,   463,   529,   530,     8,   637,    10,    11,
      12,    13,   531,   532,    16,   533,   163,   534,  -265,   535,
     284,  -265,   536,  -265,   654,  -265,   623,  -263,   537,   637,
    -263,   538,  -263,   286,  -263,   539,   135,   136,   464,   465,
     540,   288,   398,   544,   542,   545,   549,   576,   546,   557,
     477,   164,   165,   741,   742,   547,   743,   744,   745,   746,
     747,   748,   132,   133,   567,   568,   569,   570,   487,   681,
     577,   578,   869,   579,   580,   141,    44,   581,   594,   638,
     583,   639,   289,   220,   682,   582,   691,   589,   640,   641,
     166,  -201,   590,   697,   571,   572,   573,   683,   278,   682,
     591,   638,   882,    32,   221,   222,   606,   110,   602,   682,
     640,   641,   683,   223,   131,   832,   833,   135,   136,   279,
     280,   288,   683,   603,   224,   607,   608,  -267,   111,   112,
    -267,   288,  -267,   611,  -267,   132,   133,   730,   624,   281,
     565,   910,   132,   133,   477,   626,   882,   252,   113,   820,
     625,   223,   132,   133,   834,   134,   627,   225,   226,   227,
     228,   223,   289,   628,  -260,   647,   650,   651,   253,   254,
     661,   684,   289,   685,   282,   283,   696,   565,   753,   702,
     716,   721,   853,   114,   115,   385,   758,   682,   255,  -268,
     135,   136,  -268,   726,  -268,   882,  -268,   135,   136,   727,
     683,   736,   811,   739,   812,   225,   226,   135,   136,   752,
     757,   681,   866,   777,   760,   631,   632,   633,   634,   635,
     636,   770,   388,   256,   257,   385,   681,   823,   771,   878,
     762,   763,   879,   880,   881,   388,   681,   385,   385,   296,
     764,   765,   262,   874,   875,   825,   890,   278,   766,   385,
     767,   905,   288,   768,   637,   769,   772,   783,   785,   787,
     789,   842,   788,   149,   843,   220,   917,   388,   279,   280,
     385,   730,   826,   132,   133,   840,   859,   860,   844,   911,
     912,   118,   120,   863,   846,   849,   221,   222,   281,   150,
     867,   920,   921,   289,   565,   223,   851,   870,   871,   898,
     873,   884,   892,   894,   895,   896,   224,   867,   900,   238,
     897,   904,   918,   919,   681,   922,   924,   927,   735,  -367,
     930,   929,   296,   282,   283,   933,   939,   755,   135,   136,
     943,   813,   816,   467,   902,   852,   886,   822,   604,   940,
     891,   227,   228,   845,   243,   242,   427,   565,   433,   775,
     824,   440,     0,   433,   565,     0,     0,     0,     0,     0,
     916,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   296,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   433,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
      28,    29,     0,   323,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,     0,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,   473,   366,     0,   367,   474,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,     0,   383,   384,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,    28,    29,     0,   323,     0,   324,   325,   326,   327,
     328,   329,   330,   331,   332,     0,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,   473,   366,   483,   367,     0,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,     0,   383,   384,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,    28,    29,     0,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     0,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,   473,   366,     0,   367,   489,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,     0,   383,   384,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    28,    29,     0,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,     0,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,   473,   366,     0,   367,   507,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,     0,   383,   384,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    28,    29,     0,   323,     0,   324,
     325,   326,   327,   328,   329,   330,   331,   332,     0,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   473,   366,   514,   367,     0,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,     0,   383,   384,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,    28,    29,     0,   323,     0,
     324,   325,   326,   327,   328,   329,   330,   331,   332,     0,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,   473,   366,     0,   367,
     543,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,     0,   383,   384,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    28,    29,     0,   323,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,   473,   366,     0,
     367,   585,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,     0,   383,   384,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,    28,    29,     0,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,     0,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,   473,   366,
     597,   367,     0,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,     0,   383,
     384,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    28,    29,
       0,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,     0,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,   473,
     366,   598,   367,     0,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,     0,
     383,   384,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,    28,
      29,     0,   323,     0,   324,   325,   326,   327,   328,   329,
     330,   331,   332,     0,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    76,     0,
     473,   366,   599,   367,     0,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
       0,   383,   384,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
      28,    29,     0,   323,     0,   324,   325,   326,   327,   328,
     329,   330,   331,   332,     0,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    76,
       0,   473,   366,     0,   367,   600,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,     0,   383,   384,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,    28,    29,     0,   323,     0,   324,   325,   326,   327,
     328,   329,   330,   331,   332,     0,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      76,     0,   473,   366,     0,   367,     0,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   601,   383,   384,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,    28,    29,     0,   323,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,     0,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    76,     0,   473,   366,   903,   367,     0,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,     0,   383,   384,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    28,    29,     0,   323,     0,   324,   325,
     326,   327,   328,   329,   330,   331,   332,     0,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    76,     0,   473,   366,     0,   367,   931,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,     0,   383,   384,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,    28,    29,     0,   323,     0,   324,
     325,   326,   327,   328,   329,   330,   331,   332,     0,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    76,     0,   473,   366,   934,   367,     0,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,     0,   383,   384,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,    28,    29,     0,   323,     0,
     324,   325,   326,   327,   328,   329,   330,   331,   332,     0,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    76,     0,   365,   366,     0,   367,
       0,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,     0,   383,   384,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    28,    29,     0,   323,
       0,   324,   325,   326,   327,   328,   329,   330,   331,   332,
       0,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    76,     0,     0,   366,   926,
     367,     0,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,     0,   383,   384,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,    28,    29,     0,
     323,     0,   324,   325,   326,   327,   328,   329,   330,   331,
     332,     0,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    76,     0,   932,   366,
       0,   367,     0,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,     0,   383,
     384,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    28,    29,
       0,   323,     0,   324,   325,   326,   327,   328,   329,   330,
     331,   332,     0,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    76,     0,   942,
     366,     0,   367,     0,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,     0,
     383,   384,   790,   791,   792,   793,   794,   795,   796,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   797,
     798,    23,    24,   799,     0,    26,     0,     0,    27,    28,
      29,   800,   801,    31,    32,    33,    34,     0,    36,   802,
      38,   145,    40,   803,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   804,   805,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,   806,
     807,   790,   791,     0,     0,     0,   795,   796,     0,     0,
       0,     0,   808,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   797,   798,
     124,   125,     0,     0,    26,     0,     0,    27,    28,    29,
       0,   801,    31,     0,    33,     0,     0,     0,   802,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   804,   805,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   121,   122,     0,     0,
       0,   914,   796,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   797,   798,   124,   125,     0,     0,    26,
       0,   808,     0,    28,    29,     0,   801,    31,     0,    33,
       0,     0,     0,   802,   144,   145,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   804,   805,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   121,   122,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     124,   125,     0,     0,    26,     0,   808,     0,    28,    29,
       0,   143,    31,     0,    33,     0,     0,     0,   126,   144,
     145,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   121,   122,     0,     0,
       0,     0,   796,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   797,   798,   124,   125,     0,     0,    26,
       0,   861,     0,    28,    29,     0,     0,     0,     0,    33,
       0,     0,     0,   802,   144,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   804,   805,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,   121,   122,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     124,   125,     0,     0,    26,     0,   868,     0,    28,    29,
       0,     0,     0,     0,    33,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     4,
       5,     0,     0,     0,     6,     7,     0,     0,     0,     0,
       0,     0,   395,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,     0,    26,     0,     0,    27,    28,    29,     0,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,     0,    77,     4,     5,
       0,     0,     0,     6,   123,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   124,   125,     0,
       0,    26,     0,     0,    27,    28,    29,     0,   143,    31,
       0,    33,     0,     0,     0,   126,   144,   145,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,   121,   122,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,   124,   125,     0,     0,    26,     0,     0,     0,
      28,    29,     0,   143,    31,     0,    33,     0,     0,     0,
     126,   144,   145,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   121,   122,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   124,   125,     0,
       0,    26,     0,     0,     0,    28,    29,     0,     0,     0,
       0,    33,     0,     0,     0,   126,   144,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     4,     5,     0,     0,     0,     0,   123,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,     0,     0,    26,     0,     0,     0,
      28,    29,     0,     0,     0,     0,    33,     0,     0,     0,
     126,     0,     0,   155,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,   121,   122,
       0,     0,     0,     0,   123,   173,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,   124,   125,     0,
       0,    26,   121,   122,     0,    28,    29,     0,   123,   270,
       0,    33,     0,     0,     0,   126,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,   124,   125,     0,     0,    26,     0,     0,     0,    28,
      29,     0,     0,     0,     0,    33,     0,     0,     0,   126,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   121,   122,     0,
       0,     0,     0,   123,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,   124,   125,     0,     0,
      26,   121,   122,     0,    28,    29,     0,   123,     0,     0,
      33,     0,     0,     0,   126,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
     124,   125,     0,     0,     0,     0,     0,     0,    28,    29,
       0,     0,     0,     0,    33,     0,     0,     0,   126,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,   121,   122,     0,     0,
       0,     0,   252,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   253,   254,   124,   125,     0,     0,     0,
       0,   495,     0,    28,    29,     0,   252,     0,     0,     0,
       0,     0,     0,   255,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   253,   254,     0,
       0,     0,     0,     0,     0,     0,     0,    28,    29,     0,
       0,     0,     0,   496,     0,     0,     0,   255,   256,   257,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   256,   257,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,   435,   436,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   437,     0,     0,     0,   368,   369,     0,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     438,     0,   383
};

static const yytype_int16 yycheck[] =
{
       4,     5,    30,     3,     6,     4,     5,   168,    86,    34,
     168,    34,    88,    89,    90,    91,   127,    97,   229,    23,
      24,     3,   277,   154,    82,    83,   245,    27,    30,    31,
     445,   159,    34,   251,   129,   579,   154,    39,   646,   499,
     492,   719,   720,   203,   718,    34,   141,   395,   695,   172,
     154,   250,    36,   836,    38,   800,   275,   501,   725,   753,
       9,    82,     9,     9,   126,   488,   265,     3,    37,    82,
     561,   166,   817,   740,   169,   840,   156,   157,   158,   202,
      86,    30,    31,   750,   122,    82,    86,     0,    53,   247,
      94,    82,   857,    95,    30,   800,   122,    86,    37,    35,
     126,    50,   140,    50,    50,   126,   264,   890,   236,   122,
     268,   234,   817,   244,   245,   143,    81,   122,   229,   214,
      43,   122,   121,   122,   527,   870,   244,   245,     9,   126,
      53,   122,   263,    36,   210,   211,    85,    86,    37,   297,
     244,   143,   836,   145,   275,   263,   130,   149,   592,    30,
      31,   209,   156,   157,   158,   159,   236,   275,    94,   582,
     508,   828,   653,   122,   121,   134,   931,   124,   137,    50,
     176,   173,   121,   177,   269,   124,   176,   181,   182,   128,
     184,   185,   186,   187,   188,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   393,   134,   890,    82,   137,   203,
     859,   860,   654,    82,    85,    86,   609,   610,   212,     9,
     613,   614,   615,   616,   617,   618,   619,   620,   621,   622,
      82,   121,   121,    82,   715,   229,   157,   158,   122,   129,
      30,    31,   236,    82,   392,   134,   121,   728,   137,   691,
     887,    82,   121,   122,   122,   789,   248,   126,   250,   121,
      50,   122,   133,     9,   928,    82,   122,   129,   936,   121,
     122,    82,   266,   265,   126,   425,   361,   362,   270,     9,
     121,   366,   367,   122,    30,    31,   434,   737,   129,    82,
     121,    37,   826,    83,    84,    85,    86,   382,   292,   780,
      30,    31,     9,   229,    50,   122,     9,    37,   701,   126,
       9,   122,    11,    12,    13,   126,    15,    16,    82,   245,
      50,    82,   122,    30,    31,   147,   148,    30,    31,   122,
      37,    30,    31,    82,   452,   123,   122,   935,   122,    85,
      86,   129,   490,    50,   122,   121,   751,    50,   124,   275,
     126,    50,   128,    83,    84,    85,    86,   121,   479,   568,
     121,   509,   510,   511,   512,   513,   808,   121,   126,   850,
     124,   479,   121,   562,   128,   122,    83,    84,    85,    86,
     589,   122,    85,    86,   122,   479,    85,    86,   134,   122,
     121,   137,   122,   124,     9,   126,   122,   128,   122,   122,
     122,   393,   122,   122,   134,   122,   400,   137,   402,   403,
     404,   126,    39,   407,    82,    30,    31,    43,   124,   861,
       9,   124,   124,   122,    39,   122,   868,   134,   124,   124,
     137,   425,   131,   132,   133,    50,    82,   127,   121,   121,
     121,    30,    31,   121,    82,    82,    82,   568,   693,   657,
     571,   572,   573,    82,    82,   663,   130,    82,   452,    82,
     568,    50,   583,   571,   572,   573,   128,   656,   589,   140,
      85,    86,   466,   124,   121,   583,   121,   571,   572,   573,
       9,   589,     9,   124,   123,   129,     9,    10,    11,    12,
      13,    14,    15,    16,   488,     9,    85,    86,   492,   121,
     121,    30,    31,    30,    31,   129,   500,   501,     9,    10,
      11,    12,    13,    14,    15,    16,    30,    31,   133,   129,
     129,    50,   129,    50,   129,   129,    17,    50,    19,    20,
      21,    22,   129,   129,    25,   129,    50,   129,   121,   129,
     661,   124,   129,   126,   133,   128,   540,   121,   129,    50,
     124,   123,   126,   661,   128,   123,    85,    86,    85,    86,
     129,     9,   129,   140,   121,   140,    82,   661,   123,   123,
     562,    85,    86,   131,   132,   141,   134,   135,   136,   137,
     138,   139,    30,    31,   122,    82,   129,   127,   582,   583,
     124,   127,   801,   124,   127,   124,    87,   125,   592,   122,
     130,   124,    50,     9,   725,   129,   133,    82,   131,   132,
     124,   123,   127,   605,     5,     6,     7,   725,     9,   740,
     129,   122,   823,    45,    30,    31,   129,     9,   127,   750,
     131,   132,   740,    39,     9,    83,    84,    85,    86,    30,
      31,     9,   750,   125,    50,   123,   123,   121,    30,    31,
     124,     9,   126,   129,   128,    30,    31,   651,   141,    50,
     654,   862,    30,    31,   656,   122,   867,     9,    50,   737,
     141,    39,    30,    31,   122,    50,    16,    83,    84,    85,
      86,    39,    50,    16,   140,   140,   122,   128,    30,    31,
     129,   125,    50,   123,    85,    86,   125,   691,   690,   123,
     126,    10,   787,    85,    86,   853,   698,   828,    50,   121,
      85,    86,   124,   123,   126,   916,   128,    85,    86,   127,
     828,   125,   737,   125,   737,    83,    84,    85,    86,   129,
     123,   725,   800,     9,   123,    11,    12,    13,    14,    15,
      16,   129,   893,    85,    86,   893,   740,   737,   129,   817,
     123,   123,   818,   819,   820,   906,   750,   905,   906,   753,
     123,   123,   863,   811,   812,   737,   836,     9,   123,   917,
     123,   856,     9,   123,    50,   123,   123,   122,   129,   122,
     124,    11,   123,   801,    11,     9,   871,   938,    30,    31,
     938,   785,   124,    30,    31,   129,   790,   791,   123,   865,
     866,   790,   791,   795,   123,   141,    30,    31,    50,   801,
     800,   877,   878,    50,   808,    39,   123,   122,   122,   129,
     128,   123,   123,   123,   123,   123,    50,   817,   123,   823,
     127,   125,   121,   121,   828,   125,   123,   122,   661,   125,
     123,   125,   836,    85,    86,   123,   121,   693,    85,    86,
     123,   737,   737,   245,   852,   785,   831,   737,   518,   935,
     837,    85,    86,   774,    99,    98,   205,   861,   862,   717,
     737,   223,    -1,   867,   868,    -1,    -1,    -1,    -1,    -1,
     870,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   890,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   916,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,   121,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,   143,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,   121,   122,   123,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,    -1,   142,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   121,   122,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,   143,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,   121,   122,    -1,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,   121,   122,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,   143,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,   122,
     123,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,
     122,   123,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    -1,    43,    -1,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    -1,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,
     121,   122,   123,   124,    -1,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,   139,   140,
      -1,   142,   143,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    -1,    43,    -1,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    -1,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,
      -1,   121,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142,   143,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    -1,    43,    -1,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    -1,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,   121,   122,    -1,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   141,   142,   143,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    -1,    43,    -1,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    -1,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   119,    -1,   121,   122,   123,   124,    -1,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,    -1,   142,   143,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    -1,    43,    -1,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   119,    -1,   121,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   139,   140,    -1,   142,   143,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    -1,    43,    -1,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   119,    -1,   121,   122,   123,   124,    -1,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,    -1,   142,   143,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    -1,    43,    -1,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    -1,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,   121,   122,    -1,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,    -1,   142,   143,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    -1,    43,
      -1,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      -1,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,   122,   123,
     124,    -1,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,    -1,   142,   143,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    -1,
      43,    -1,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,   122,
      -1,   124,    -1,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,   139,   140,    -1,   142,
     143,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      -1,    43,    -1,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    -1,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,   121,
     122,    -1,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,    -1,
     142,   143,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    -1,    36,    -1,    -1,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    -1,    49,    50,
      51,    52,    53,    54,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,   116,   117,   118,   119,   120,
     121,     3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,   133,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    -1,    -1,    39,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      -1,   133,    -1,    40,    41,    -1,    43,    44,    -1,    46,
      -1,    -1,    -1,    50,    51,    52,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    -1,   133,    -1,    40,    41,
      -1,    43,    44,    -1,    46,    -1,    -1,    -1,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    36,
      -1,   133,    -1,    40,    41,    -1,    -1,    -1,    -1,    46,
      -1,    -1,    -1,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    36,    -1,   133,    -1,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,   124,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    -1,    36,    -1,    -1,    39,    40,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,    -1,   121,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    39,    40,    41,    -1,    43,    44,
      -1,    46,    -1,    -1,    -1,    50,    51,    52,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     3,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    41,    -1,    43,    44,    -1,    46,    -1,    -1,    -1,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,    -1,    -1,    -1,    40,    41,    -1,    -1,    -1,
      -1,    46,    -1,    -1,    -1,    50,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,     3,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,
      40,    41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,
      50,    -1,    -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,     3,     4,
      -1,    -1,    -1,    -1,     9,    10,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
      -1,    36,     3,     4,    -1,    40,    41,    -1,     9,    10,
      -1,    46,    -1,    -1,    -1,    50,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    -1,    36,    -1,    -1,    -1,    40,
      41,    -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,     3,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    -1,    -1,
      36,     3,     4,    -1,    40,    41,    -1,     9,    -1,    -1,
      46,    -1,    -1,    -1,    50,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,
      -1,    -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    -1,    -1,
      -1,     4,    -1,    40,    41,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    50,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    40,    41,    -1,
      -1,    -1,    -1,    46,    -1,    -1,    -1,    50,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   122,    -1,    -1,    -1,   126,   127,    -1,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,    -1,   142
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   145,     0,   146,     3,     4,     8,     9,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    36,    39,    40,    41,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   121,   147,   148,
     149,   151,   163,   176,   177,   181,   182,   191,   193,   194,
     197,   198,   199,   236,   264,   265,   266,   267,   268,   269,
     271,   277,   278,   282,   283,   284,   285,   288,   302,   327,
       9,    30,    31,    50,    85,    86,   124,   263,   284,   263,
     284,     3,     4,     9,    32,    33,    50,   266,   278,   122,
     126,     9,    30,    31,    50,    85,    86,   165,   263,     9,
      50,   124,   263,    43,    51,    52,   264,   287,   286,   265,
     266,   278,   266,   126,   270,    53,   151,   163,   176,   266,
       9,    30,    31,    50,    85,    86,   124,   278,   329,   122,
     126,    43,    53,    10,   266,   239,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,   122,   122,
     122,   122,   122,   122,   122,   122,   122,   122,    37,   134,
     137,   238,   241,   242,   279,   280,   281,   238,   238,   151,
     193,   198,   264,   121,   124,   210,   210,   210,   210,   210,
       9,    30,    31,    39,    50,    83,    84,    85,    86,   195,
     202,   204,   207,   211,   237,   246,   249,   255,   263,   278,
     266,   279,   269,   268,    82,    82,   121,   328,   126,   154,
     126,   152,     9,    30,    31,    50,    85,    86,     9,    50,
       9,    50,   202,    82,   328,   273,   124,   164,   328,   124,
      10,   122,   288,   288,   266,    82,   127,   183,     9,    30,
      31,    50,    85,    86,   271,   276,   277,   121,     9,    50,
     232,   263,   279,   232,   232,   246,   263,   328,   150,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    43,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,   121,   122,   124,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,   142,   143,   285,   326,   327,   331,   332,
     333,   334,   328,   272,   239,   124,   266,   121,   129,   193,
     264,   263,   304,   307,   308,   263,   263,   312,   263,   263,
     263,   263,   263,   263,   263,   263,   263,   263,   263,   263,
     263,   263,   121,   239,   237,   243,   137,   281,   121,   121,
     238,   210,   210,   263,   328,    55,    56,   122,   140,   325,
     326,   202,   207,   278,   203,   208,   239,   130,   233,   234,
     246,   253,   279,   256,   257,   258,   122,   126,    82,   276,
       9,    30,    31,    50,    85,    86,   133,   199,   215,   217,
     263,   276,   278,   121,   125,   330,   331,   266,   274,   128,
     159,   274,   159,   123,   274,   166,   167,   263,   124,   125,
     328,   200,   133,   215,   278,     4,    46,   184,   186,   187,
     188,   283,   121,   263,   121,   121,   121,   125,   124,   328,
     328,   328,   328,   328,   123,   274,   121,   145,   240,   123,
     129,   263,   263,   263,   129,   129,   263,   129,   129,   129,
     129,   129,   129,   129,   129,   129,   129,   129,   123,   123,
     129,   237,   121,   125,   140,   140,   123,   141,   205,    82,
      36,    38,   130,   209,   209,   121,   235,   123,   246,   259,
     261,   212,   213,   222,   223,   263,   216,   122,    82,   129,
     127,     5,     6,     7,   160,   161,   276,   124,   127,   124,
     127,   125,   129,   130,   166,   125,   225,   226,   222,    82,
     127,   129,   182,   189,   263,   189,   145,   123,   123,   123,
     125,   141,   127,   125,   241,   303,   129,   123,   123,   309,
     311,   129,   282,   315,   317,   319,   321,   316,   318,   320,
     322,   323,   324,   263,   141,   141,   122,    16,    16,     9,
      10,    11,    12,    13,    14,    15,    16,    50,   122,   124,
     131,   132,   289,   294,   300,   301,   247,   140,   225,   274,
     122,   128,   219,   218,   133,   215,   275,   155,   276,   276,
     276,   129,   156,   153,   156,   166,     9,    11,    12,    13,
      15,    16,    50,   122,   131,   132,   133,   168,   169,   170,
     174,   263,   271,   277,   125,   123,    53,    81,   227,   229,
     230,   133,   215,   185,   189,   190,   125,   266,   305,   282,
     282,   313,   123,   282,   282,   282,   282,   282,   282,   282,
     282,   282,   282,   123,   129,   206,   126,   297,   290,   296,
     295,    10,   122,   250,   257,   260,   123,   127,   224,   221,
     263,   225,   222,   274,   159,   160,   125,   157,   159,   125,
     173,   131,   132,   134,   135,   136,   137,   138,   139,   175,
     171,   201,   129,   266,   222,   184,   233,   123,   266,   310,
     123,   282,   123,   123,   123,   123,   123,   123,   123,   123,
     129,   129,   123,   225,   298,   294,   289,     9,   301,   301,
     251,   170,   262,   122,   225,   129,   220,   122,   123,   124,
       3,     4,     5,     6,     7,     8,     9,    30,    31,    34,
      42,    43,    50,    54,    85,    86,   120,   121,   133,   158,
     162,   163,   176,   177,   178,   179,   181,   182,   192,   196,
     198,   215,   236,   264,   302,   327,   124,   170,   172,   170,
     209,   228,    83,    84,   122,   244,   248,   254,   255,   306,
     129,   314,    11,    11,   123,   267,   123,   292,   225,   141,
     214,   123,   221,   328,   156,   121,   124,   128,   180,   263,
     263,   133,   264,   266,   179,   196,   198,   264,   133,   215,
     122,   122,   222,   128,   238,   238,   179,   196,   198,   210,
     210,   210,   207,   156,   123,   170,   227,   231,   244,   252,
     279,   256,   123,   329,   123,   123,   123,   127,   129,   291,
     123,   225,   220,   123,   125,   328,   329,   180,   180,   222,
     207,   210,   210,   222,     8,   196,   264,   328,   121,   121,
     210,   210,   125,   233,   123,   244,   123,   122,   293,   125,
     123,   125,   121,   123,   123,   245,   299,   289,   329,   121,
     250,   301,   121,   123
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
#line 911 "vtkParse.y"
    { startSig(); clearTypeId(); clearTemplate(); }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 925 "vtkParse.y"
    { output_function(); }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 926 "vtkParse.y"
    { output_function(); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 927 "vtkParse.y"
    { reject_function(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 928 "vtkParse.y"
    { output_function(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 929 "vtkParse.y"
    { reject_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 930 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 931 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 949 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 950 "vtkParse.y"
    { popNamespace(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 958 "vtkParse.y"
    { end_class(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 959 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    { end_class(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 961 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    { end_class(); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 963 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 964 "vtkParse.y"
    { end_class(); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
    { startSig(); clearTypeId(); clearTemplate(); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 982 "vtkParse.y"
    { output_function(); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 983 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 985 "vtkParse.y"
    { output_function(); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 986 "vtkParse.y"
    { output_function(); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 989 "vtkParse.y"
    { output_function(); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 1004 "vtkParse.y"
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 1010 "vtkParse.y"
    {access_level = VTK_ACCESS_PUBLIC;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 1011 "vtkParse.y"
    {access_level = VTK_ACCESS_PROTECTED;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 1012 "vtkParse.y"
    {access_level = VTK_ACCESS_PRIVATE;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 1022 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1023 "vtkParse.y"
    {end_enum();}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1024 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1025 "vtkParse.y"
    {end_enum();}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 1029 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1030 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1032 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 1037 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 1038 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(3) - (3)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 1044 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(2) - (4)].str)) +
                                  strlen((yyvsp[(4) - (4)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].str));
       }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 1049 "vtkParse.y"
    {postSig("(");}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 1050 "vtkParse.y"
    {
         postSig(")");
         (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (4)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(3) - (4)].str));
       }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1056 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1056 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1057 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1059 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1059 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1060 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1060 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 1093 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 1094 "vtkParse.y"
    { postSig("template<");
          clearTypeId(); startTemplate(); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 1096 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    { postSig(", "); clearTypeId(); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
    {
               TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
               vtkParse_InitTemplateArg(arg);
               arg->Type = (yyvsp[(1) - (2)].integer);
               arg->Class = vtkstrdup(getTypeId());
               arg->Name = vtkstrdup(getVarName());
               arg->Value = vtkstrdup(getVarValue());
               vtkParse_AddItemMacro2(currentTemplate, Arguments, arg);
               }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 1113 "vtkParse.y"
    {
               TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
               vtkParse_InitTemplateArg(arg);
               arg->Name = vtkstrdup(getVarName());
               arg->Value = vtkstrdup(getVarValue());
               vtkParse_AddItemMacro2(currentTemplate, Arguments, arg);
               }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 1120 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 1121 "vtkParse.y"
    {
               TemplateArgs *newTemplate = currentTemplate;
               TemplateArg *arg = (TemplateArg *)malloc(sizeof(TemplateArg));
               vtkParse_InitTemplateArg(arg);
               popTemplate();
               arg->Template = newTemplate;
               arg->Name = vtkstrdup(getVarName());
               arg->Value = vtkstrdup(getVarValue());
               vtkParse_AddItemMacro2(currentTemplate, Arguments, arg);
               }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 1132 "vtkParse.y"
    {postSig("class ");}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 1133 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 1135 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 1165 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 1166 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 1168 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 1176 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 1199 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 1203 "vtkParse.y"
    { postSig(")"); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 1204 "vtkParse.y"
    {
      (yyval.integer) = (yyvsp[(2) - (8)].integer);
      postSig(";");
      preSig("operator ");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", "operator typecast");
    }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1218 "vtkParse.y"
    { postSig(")"); }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1219 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1230 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1238 "vtkParse.y"
    { postSig(")"); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
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

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
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

  case 181:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    {
      postSig("(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
    }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      set_return(currentFunction, getStorageType(), getTypeId(), 0);
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1303 "vtkParse.y"
    { postSig("("); }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    {
      postSig(");");
      closeSig();
      currentFunction->Name = (char *)malloc(strlen((yyvsp[(1) - (1)].str)) + 2);
      currentFunction->Name[0] = '~';
      strcpy(&currentFunction->Name[1], (yyvsp[(1) - (1)].str));
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    { postSig("(");}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1331 "vtkParse.y"
    {clearTypeId();}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    { clearTypeId(); }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1336 "vtkParse.y"
    { clearTypeId(); postSig(", "); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1339 "vtkParse.y"
    { markSig(); }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
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

      vtkParse_AddItemMacro2(currentFunction, Arguments, arg);
    }
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1363 "vtkParse.y"
    {
      unsigned long i = currentFunction->NumberOfArguments-1;
      if (getVarValue())
        {
        currentFunction->Arguments[i]->Value = vtkstrdup(getVarValue());
        }
    }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
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

      vtkParse_AddItemMacro2(currentFunction, Arguments, arg);
    }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1396 "vtkParse.y"
    {clearVarValue();}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    { postSig("="); clearVarValue();}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1410 "vtkParse.y"
    {
       unsigned int type = getStorageType();
       if (getVarValue() && ((type & VTK_PARSE_CONST) != 0) &&
           ((type & VTK_PARSE_INDIRECT) == 0) && getArrayNDims() == 0)
         {
         add_constant(getVarName(), getVarValue(),
                       (type & VTK_PARSE_UNQUALIFIED_TYPE), getTypeId(), 0);
         }
     }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1424 "vtkParse.y"
    {postSig(", ");}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1432 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1433 "vtkParse.y"
    { postSig(")"); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1435 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(5) - (5)].integer),
                       add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer))); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1439 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1440 "vtkParse.y"
    { postSig(")"); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1442 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(5) - (5)].integer),
                       add_indirection((yyvsp[(1) - (5)].integer), (yyvsp[(2) - (5)].integer))); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1445 "vtkParse.y"
    { postSig("("); (yyval.integer) = 0; }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1446 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1448 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1451 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1453 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1456 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1457 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1458 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; postSig(")"); popFunction(); }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1459 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1462 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 247:

/* Line 1455 of yacc.c  */
#line 1464 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1467 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1471 "vtkParse.y"
    {clearVarName(); chopSig();}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1473 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1475 "vtkParse.y"
    {clearArray();}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1477 "vtkParse.y"
    {clearArray();}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1479 "vtkParse.y"
    {postSig("[");}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1479 "vtkParse.y"
    {postSig("]");}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1483 "vtkParse.y"
    {pushArraySize("");}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1484 "vtkParse.y"
    {pushArraySize((yyvsp[(1) - (1)].str));}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1490 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1491 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1492 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1493 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1494 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1495 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1502 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); setStorageType((yyval.integer));}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1503 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1504 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1506 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer); setStorageType((yyval.integer));}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1507 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1508 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1510 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(2) - (3)].integer) | (yyvsp[(3) - (3)].integer));
      setStorageType((yyval.integer));}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1514 "vtkParse.y"
    {postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1515 "vtkParse.y"
    {postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1517 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1518 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1520 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1521 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1522 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1524 "vtkParse.y"
    {postSig("const ");}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1528 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1530 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1531 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1532 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1535 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1536 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1537 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1538 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1540 "vtkParse.y"
    {postSig(", ");}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1542 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1543 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1544 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1545 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1546 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1547 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1552 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1558 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1580 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1581 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1582 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1587 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1589 "vtkParse.y"
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

  case 317:

/* Line 1455 of yacc.c  */
#line 1600 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1601 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1604 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1605 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1606 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1607 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1608 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1609 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1610 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1613 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1614 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1617 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1618 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1619 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1620 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1621 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1622 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1625 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1626 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1627 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1628 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1629 "vtkParse.y"
    { typeSig("ssize_t"); (yyval.integer) = VTK_PARSE_SSIZE_T;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1630 "vtkParse.y"
    { typeSig("size_t"); (yyval.integer) = VTK_PARSE_SIZE_T;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1631 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1632 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1633 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1634 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1635 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1636 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1637 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1638 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1639 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1640 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1641 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1642 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1642 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1643 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1644 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1648 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1649 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1651 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1652 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1653 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1654 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1660 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1661 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1662 "vtkParse.y"
    {
          char *cp;
          postSig("}");
          cp = (char *)malloc(strlen((yyvsp[(3) - (6)].str)) + strlen((yyvsp[(4) - (6)].str)) + 5);
          sprintf(cp, "{ %s%s }", (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str));
          (yyval.str) = cp;
        }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1672 "vtkParse.y"
    {(yyval.str) = vtkstrdup("");}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1673 "vtkParse.y"
    { postSig(", "); }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1674 "vtkParse.y"
    {
          char *cp;
          cp = (char *)malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(4) - (4)].str)) + 3);
          sprintf(cp, "%s, %s", (yyvsp[(1) - (4)].str), (yyvsp[(4) - (4)].str));
          (yyval.str) = cp;
        }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1681 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1682 "vtkParse.y"
    {postSig("+");}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1682 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1683 "vtkParse.y"
    {postSig("-");}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1683 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1686 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1687 "vtkParse.y"
    {postSig("(");}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1687 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1688 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1689 "vtkParse.y"
    {postSig("<(");}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1690 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1697 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1698 "vtkParse.y"
    {
                size_t i = strlen((yyvsp[(1) - (2)].str));
                char *cp = (char *)malloc(i + strlen((yyvsp[(2) - (2)].str)) + 1);
                strcpy(cp, (yyvsp[(1) - (2)].str));
                strcpy(&cp[i], (yyvsp[(2) - (2)].str));
                (yyval.str) = cp; }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1705 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1706 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1707 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1708 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1709 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1710 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1711 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1713 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1723 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1724 "vtkParse.y"
    {
   postSig("a);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, (yyvsp[(6) - (7)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1736 "vtkParse.y"
    {postSig("Get");}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1737 "vtkParse.y"
    {markSig();}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1737 "vtkParse.y"
    {swapSig();}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1738 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, (yyvsp[(7) - (9)].integer), getTypeId(), 0);
   output_function();
   }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1749 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1750 "vtkParse.y"
    {
   postSig("(char *);");
   sprintf(temps,"Set%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1762 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1763 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1774 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1774 "vtkParse.y"
    {closeSig();}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1776 "vtkParse.y"
    {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"void Set%s(%s);",(yyvsp[(3) - (10)].str),local);
   sprintf(temps,"Set%s",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%sGet%sMinValue();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMinValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,"%sGet%sMaxValue();",local,(yyvsp[(3) - (10)].str));
   sprintf(temps,"Get%sMaxValue",(yyvsp[(3) - (10)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, (yyvsp[(6) - (10)].integer), getTypeId(), 0);
   output_function();
   free(local);
   }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1817 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1818 "vtkParse.y"
    {
   postSig("*);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1830 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1831 "vtkParse.y"
    {markSig();}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1831 "vtkParse.y"
    {swapSig();}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1832 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1844 "vtkParse.y"
    {
   sprintf(temps,"%sOn",(yyvsp[(3) - (6)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   startSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   sprintf(temps,"%sOff",(yyvsp[(3) - (6)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   startSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1871 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1872 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1876 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1877 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1881 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1882 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1886 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1887 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1891 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1892 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1896 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1897 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1901 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1902 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1906 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1907 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1911 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1913 "vtkParse.y"
    {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"void Set%s(%s a[%s]);",
           (yyvsp[(3) - (9)].str), local, (yyvsp[(8) - (9)].str));
   sprintf(temps,"Set%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer)),
                getTypeId(), strtoul((yyvsp[(8) - (9)].str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   free(local);
   }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1931 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1933 "vtkParse.y"
    {
   char *local;
   chopSig();
   local = vtkstrdup(copySig());
   sprintf(currentFunction->Signature,"%s *Get%s();", local, (yyvsp[(3) - (9)].str));
   sprintf(temps,"Get%s",(yyvsp[(3) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer)),
              getTypeId(), strtoul((yyvsp[(8) - (9)].str), NULL, 0));
   output_function();
   free(local);
   }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1950 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double, double);",
             (yyvsp[(3) - (4)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double a[2]);",
             (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     add_argument(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 2004 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,
             "void Set%s(double, double, double);",
             (yyvsp[(3) - (4)].str));
     sprintf(temps,"Set%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_argument(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"void Set%s(double a[3]);",
             (yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     add_argument(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature,"double *Get%s();", (yyvsp[(3) - (4)].str));
     sprintf(temps,"Get%s",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 2060 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();", (yyvsp[(3) - (6)].str));
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (yyvsp[(3) - (6)].str), 0);
   output_function();

   if ( is_concrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
             (yyvsp[(3) - (6)].str));
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     add_argument(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
     set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
                (yyvsp[(3) - (6)].str), 0);
     output_function();
     }
   }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 2119 "vtkParse.y"
    {
   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "const char *GetClassName();");
   sprintf(temps,"GetClassName");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature,
           "int IsA(const char *name);");
   sprintf(temps,"IsA");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   add_argument(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Signature = (char *)malloc(2048);
   sigAllocatedLength = 2048;
   sprintf(currentFunction->Signature, "%s *NewInstance();", (yyvsp[(3) - (7)].str));
   sprintf(temps,"NewInstance");
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (yyvsp[(3) - (7)].str), 0);
   output_function();

   if ( is_concrete )
     {
     currentFunction->Signature = (char *)malloc(2048);
     sigAllocatedLength = 2048;
     sprintf(currentFunction->Signature, "%s *SafeDownCast(vtkObject* o);",
             (yyvsp[(3) - (7)].str));
     sprintf(temps,"SafeDownCast");
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     add_argument(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
     set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
                (yyvsp[(3) - (7)].str), 0);
     output_function();
     }
   }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 2184 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 2185 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 2186 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2187 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 2190 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 2191 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2191 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2192 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2192 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2193 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2193 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2194 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2194 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2195 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2195 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2196 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2196 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2197 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2198 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2199 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2200 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2201 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2202 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2203 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2204 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2205 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2206 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2207 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2208 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2209 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2210 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2211 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2212 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2213 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2214 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2215 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2216 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2217 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2218 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2219 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2220 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2221 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2222 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2223 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2230 "vtkParse.y"
    {
  static char name[256];
  static char value[256];
  size_t i = 0;
  char *cp = (yyvsp[(1) - (1)].str);
  while ((*cp >= 'a' && *cp <= 'z') ||
         (*cp >= 'A' && *cp <= 'Z') ||
         (*cp >= '0' && *cp <= '9') ||
         *cp == '_') { name[i++] = *cp++; }
  name[i] = '\0';
  while (*cp == ' ' || *cp == '\t') { cp++; }
  strcpy(value, cp);
  i = strlen(value);
  while (i > 0 && (value[i-1] == '\n' || value[i-1] == '\r' ||
                   value[i-1] == '\t' || value[i-1] == ' ')) { i--; }
  value[i] = '\0';
  add_constant(name, value, 0, NULL, 1);
  }
    break;



/* Line 1455 of yacc.c  */
#line 7152 "vtkParse.tab.c"
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
#line 2270 "vtkParse.y"

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
void vtkParse_InitClass(ClassInfo *cls)
{
  cls->ItemType = VTK_CLASS_INFO;
  cls->Access = VTK_ACCESS_PUBLIC;
  cls->Name = NULL;
  cls->Comment = NULL;
  cls->Template = NULL;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfItems = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfEnums = 0;
  cls->NumberOfConstants = 0;
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
  name_info->NumberOfEnums = 0;
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

void FreeNamespace(NamespaceInfo *namespace_info)
{
  /* big memory leak here, strings aren't freed */
  ClassInfo *class_info;
  FunctionInfo *func_info;
  ValueInfo *const_info;
  EnumInfo *enum_info;

  unsigned long i, j, n, m;

  n = namespace_info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_info = namespace_info->Classes[i];

    m = class_info->NumberOfSuperClasses;
    if (m > 0)
      {
      free(class_info->SuperClasses);
      }

    m = class_info->NumberOfFunctions;
    for (j = 0; j < m; j++)
      {
      func_info = class_info->Functions[j];
      free(func_info);
      }
    if (m > 0)
      {
      free(class_info->Functions);
      }

    m = class_info->NumberOfConstants;
    for (j = 0; j < m; j++)
      {
      const_info = class_info->Constants[j];
      free(const_info);
      }
    if (m > 0)
      {
      free(class_info->Constants);
      }

    m = class_info->NumberOfEnums;
    for (j = 0; j < m; j++)
      {
      enum_info = class_info->Enums[j];
      free(enum_info);
      }
    if (m > 0)
      {
      free(class_info->Enums);
      }

    if (class_info->NumberOfItems > 0)
      {
      free(class_info->Items);
      }

    free(class_info);
    }

  m = namespace_info->NumberOfFunctions;
  for (j = 0; j < m; j++)
    {
    func_info = namespace_info->Functions[j];
    free(func_info);
    }
  if (m > 0)
    {
    free(namespace_info->Functions);
    }

  m = namespace_info->NumberOfConstants;
  for (j = 0; j < m; j++)
    {
    const_info = namespace_info->Constants[j];
    free(const_info);
    }
  if (m > 0)
    {
    free(namespace_info->Constants);
    }

  m = namespace_info->NumberOfEnums;
  for (j = 0; j < m; j++)
    {
    enum_info = namespace_info->Enums[j];
    free(enum_info);
    }
  if (m > 0)
    {
    free(namespace_info->Enums);
    }

  m = namespace_info->NumberOfNamespaces;
  for (i = 0; i < m; i++)
    {
    FreeNamespace(namespace_info->Namespaces[i]);
    }

  if (namespace_info->NumberOfItems > 0)
    {
    free(namespace_info->Items);
    }

  free(namespace_info);
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  vtkParse_InitClass(currentClass);
  currentClass->Name = vtkstrdup(classname);
  if (is_struct)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  vtkParse_AddItemMacro(currentNamespace, Classes, currentClass);

  /* template information */
  if (currentTemplate)
    {
    currentClass->Template = currentTemplate;
    currentTemplate = NULL;
    }

  access_level = VTK_ACCESS_PRIVATE;
  if (is_struct)
    {
    access_level = VTK_ACCESS_PUBLIC;
    }

  vtkParse_InitFunction(currentFunction);
}

/* reject the class */
void reject_class(const char *classname, int is_struct)
{
  static ClassInfo static_class;

  currentClass = &static_class;
  currentClass->Name = vtkstrdup(classname);
  vtkParse_InitClass(currentClass);

  access_level = VTK_ACCESS_PRIVATE;
  if (is_struct)
    {
    access_level = VTK_ACCESS_PUBLIC;
    }

  vtkParse_InitFunction(currentFunction);
}

/* reached the end of a class definition */
void end_class()
{
  currentClass = NULL;
  access_level = VTK_ACCESS_PUBLIC;
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
    currentEnumName = text;
    strcpy(currentEnumName, name);
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    vtkParse_InitEnum(item);
    item->Name = vtkstrdup(name);
    item->Access = access_level;
    if (currentClass)
      {
      vtkParse_AddItemMacro(currentClass, Enums, item);
      }
    else
      {
      vtkParse_AddItemMacro(currentNamespace, Enums, item);
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
  static char text[256];
  unsigned long i;
  long j;

  if (value)
    {
    currentEnumValue = text;
    strcpy(currentEnumValue, value);
    }
  else if (currentEnumValue)
    {
    i = strlen(currentEnumValue);
    while (i > 0 && currentEnumValue[i-1] >= '0' &&
           currentEnumValue[i-1] <= '9') { i--; }

    if (i == 0 || currentEnumValue[i-1] == ' ' ||
        (i > 1 && currentEnumValue[i-2] == ' ' &&
         (currentEnumValue[i-1] == '-' || currentEnumValue[i-1] == '+')))
      {
      if (i > 0 && currentEnumValue[i-1] != ' ')
        {
        i--;
        }
      j = strtol(&currentEnumValue[i], NULL, 10);
      sprintf(&currentEnumValue[i], "%li", j+1);
      }
    else
      {
      i = strlen(currentEnumValue);
      strcpy(&currentEnumValue[i], " + 1");
      }
    }
  else
    {
    currentEnumValue = text;
    strcpy(currentEnumValue, "0");
    }

  add_constant(name, currentEnumValue, VTK_PARSE_INT, currentEnumName, 2);
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
    vtkParse_AddItemMacro(data.Contents, Constants, con);
    }
  else if (currentClass)
    {
    con->Access = access_level;
    vtkParse_AddItemMacro(currentClass, Constants, con);
    }
  else
    {
    con->Access = VTK_ACCESS_PUBLIC;
    vtkParse_AddItemMacro(currentNamespace, Constants, con);
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
    vtkParse_AddItemMacro2(arg, Dimensions, vtkstrdup(text));
    }

  func->ArgTypes[i] = arg->Type;
  func->ArgClasses[i] = arg->Class;
  func->ArgCounts[i] = count;

  vtkParse_AddItemMacro2(func, Arguments, arg);
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
    vtkParse_AddItemMacro2(val, Dimensions, vtkstrdup(text));
    func->HaveHint = 1;
    }

  func->ReturnValue = val;
  func->ReturnType = val->Type;
  func->ReturnClass = val->Class;
  func->HintSize = count;
}

/* deal with types that include function pointers or arrays */
void handle_complex_type(
  ValueInfo *val, unsigned int datatype, unsigned int extra, const char *funcSig)
{
  FunctionInfo *func = 0;
  unsigned long i, n;
  char *cp;

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
    func->Signature = vtkstrdup(funcSig);
    val->Function = func;

    /* the val type is whatever was inside the parentheses */
    clearTypeId();
    setTypeId("function");
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
      if (getArrayNDims() == 1)
        {
        datatype = add_indirection(datatype, VTK_PARSE_POINTER);
        }
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
          n = strtoul(val->Dimensions[i], NULL, 0);
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
  func->Signature = vtkstrdup(funcSig);
  j = strlen(func->Signature);
  while (j > 0 && func->Signature[j-1] == ' ')
    {
    func->Signature[j-1] = '\0';
    }

  arg->Function = func;
}


/* reject the function, do not output it */
void reject_function()
{
  vtkParse_InitFunction(currentFunction);
}

/* a simple routine that updates a few variables */
void output_function()
{
  unsigned long i, j;
  int match;

  /* reject template specializations */
  if (currentFunction->Name[strlen(currentFunction->Name)-1] == '>')
    {
    reject_function();
    return;
    }

  /* static */
  if (currentFunction->ReturnType & VTK_PARSE_STATIC)
    {
    currentFunction->IsStatic = 1;
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

    vtkParse_AddItemMacro(currentClass, Functions, currentFunction);

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
      vtkParse_AddItemMacro(currentNamespace, Functions, currentFunction);

      currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      }
    }

  vtkParse_InitFunction(currentFunction);
}

void outputSetVectorMacro(const char *var, unsigned int argType,
                          const char *typeText, unsigned long n)
{
  char *local = vtkstrdup(typeText);
  char *name;
  unsigned long i;

  sprintf(temps,"Set%s", var);
  name = vtkstrdup(temps);

  sprintf(currentFunction->Signature, "void Set%s(%s", var, local);
  for (i = 1; i < n; i++)
    {
    postSig(", ");
    postSig(local);
    }
  postSig(");");
  currentFunction->Name = name;
  for (i = 0; i < n; i++)
    {
    add_argument(currentFunction, argType, getTypeId(), 0);
    }
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();

  currentFunction->Signature = (char *)malloc(2048);
  sigAllocatedLength = 2048;
  sprintf(currentFunction->Signature, "void Set%s(%s a[%lu]);",
          var, local, (unsigned long)n);
  currentFunction->Name = name;
  add_argument(currentFunction, (VTK_PARSE_POINTER | argType),
               getTypeId(), n);
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();

  free(local);
}

void outputGetVectorMacro(const char *var, unsigned int argType,
                          const char *typeText, unsigned long n)
{
  char *local = vtkstrdup(typeText);

  sprintf(currentFunction->Signature, "%s *Get%s();", local, var);
  sprintf(temps, "Get%s", var);
  currentFunction->Name = vtkstrdup(temps);
  set_return(currentFunction, (VTK_PARSE_POINTER | argType), getTypeId(), n);
  output_function();

  free(local);
}

/* Parse a header file and return a FileInfo struct */
void vtkParse_AddPointerToArray(
  void *valueArray, unsigned long *count, void *value)
{
  void **values = *(void ***)valueArray;
  unsigned long n = *count;

  /* if empty, alloc for the first time */
  if (n == 0)
    {
    values = (void **)malloc(1*sizeof(void*));
    }
  /* if count is power of two, reallocate with double size */
  else if ((n & (n-1)) == 0)
    {
    values = (void **)realloc(values, (n << 1)*sizeof(void*));
    }

  values[n++] = value;
  *count = n;
  *(void ***)valueArray = values;
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, int concrete, FILE *ifile, FILE *errfile)
{
  unsigned long i, j;
  int lineno;
  int ret;
  FileInfo *file_info;
  char *main_class;

  vtkParse_InitFile(&data);

  data.FileName = vtkstrdup(filename);
  is_concrete = concrete;

  CommentState = 0;

  namespaceDepth = 0;
  currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
  vtkParse_InitNamespace(currentNamespace);
  data.Contents = currentNamespace;

  templateDepth = 0;
  currentTemplate = NULL;

  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  vtkParse_InitFunction(currentFunction);

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
  unsigned int h_type;
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
    h_type = ((h_type & VTK_PARSE_BASE_TYPE) |
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
              (h_type == ((func_info->ReturnType & ~VTK_PARSE_REF) &
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
                  vtkParse_AddItemMacro2(func_info->ReturnValue,
                                         Dimensions, vtkstrdup(text));
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
  FreeNamespace(file_info->Contents);
  file_info->Contents = NULL;
}
