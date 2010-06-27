
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
#include "vtkType.h"

static int vtkParseTypeMap[] =
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
ClassInfo *currentClass = NULL;
FunctionInfo *currentFunction = NULL;
TemplateArgs *currentTemplate = NULL;

char *currentEnumName = 0;
char *currentEnumValue = 0;

int parseDebug;
char temps[2048];
parse_access_t access_level = VTK_ACCESS_PUBLIC;
int  is_concrete;
int  HaveComment;
char CommentText[50000];
int CommentState;

/* helper functions */
void start_class(const char *classname, int is_struct);
void reject_class(const char *classname, int is_struct);
void end_class();
void output_function(void);
void reject_function(void);
void start_enum(const char *enumname);
void add_enum(const char *name, const char *value);
void end_enum();
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);
void prepend_scope(char *cp, const char *arg);
int add_indirection(int tval, int ptr);
int handle_complex_type(int datatype, int extra, char *array_sizes[],
                        FunctionInfo **func_ptr, const char *sp);

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n);
void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n);

/* initializer functions */
void InitFile(FileInfo *file_info);
void InitNamespace(NamespaceInfo *namespace_info);
void InitClass(ClassInfo *cls);
void InitFunction(FunctionInfo *func);
void InitConstant(ConstantInfo *con);
void InitEnum(EnumInfo *item);
void InitTemplate(TemplateArgs *arg);

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
int namespaceDepth = 0;

/* enter a namespace */
void pushNamespace(const char *name)
{
  int i;
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
    InitNamespace(currentNamespace);
    currentNamespace->Name = vtkstrdup(name);
    currentNamespace->ItemType = VTK_NAMESPACE_INFO;
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
int templateDepth = 0;

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateArgs *)malloc(sizeof(TemplateArgs));
  InitTemplate(currentTemplate);
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
size_t sigMarkDepth = 0;
unsigned int sigAllocatedLength;

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
int storageType = 0;

/* save the storage type */
void setStorageType(int val)
{
  storageType = val;
}

/* modify the indirection (pointers, refs) in the storage type */
void setStorageTypeIndirection(int ind)
{
  storageType = (storageType & ~VTK_PARSE_INDIRECT);
  ind = (ind & VTK_PARSE_INDIRECT);
  storageType = (storageType | ind);
}

/* retrieve the storage type */
int getStorageType()
{
  return storageType;
}

/*----------------------------------------------------------------
 * Array information
 */

/* "private" variables */
int numberOfDimensions = 0;
char *arrayDimensions[MAX_ARRAY_DIMS];

/* clear the array counter */
void clearArray(void)
{
  numberOfDimensions = 0;
}

/* add another dimension */
void pushArraySize(const char *size)
{
  if (numberOfDimensions < MAX_ARRAY_DIMS)
    {
    arrayDimensions[numberOfDimensions++] = vtkstrdup(size);
    }
}

/* add another dimension to the front */
void pushArrayFront(const char *size)
{
  int i = numberOfDimensions;

  if (i >= MAX_ARRAY_DIMS) { i--; }
  else { numberOfDimensions++; }

  while (i > 0)
    {
    arrayDimensions[i] = arrayDimensions[i-1];
    i--;
    }

  arrayDimensions[0] = vtkstrdup(size);
}

/* get the number of dimensions */
int getArrayNDims()
{
  return numberOfDimensions;
}

/* get the size */
char *getArraySize(int i)
{
  if (i < numberOfDimensions)
    {
    return arrayDimensions[i];
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
  int n;

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
int functionDepth = 0;

void pushFunction()
{
  functionStack[functionDepth] = currentFunction;
  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  InitFunction(currentFunction);
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
  size_t i, m, n, depth;

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
int add_indirection(int type1, int type2)
{
  int ptr1 = (type1 & VTK_PARSE_POINTER_MASK);
  int ptr2 = (type2 & VTK_PARSE_POINTER_MASK);
  int reverse = 0;
  int result;

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
#line 836 "vtkParse.tab.c"

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
     OSTREAM = 283,
     ISTREAM = 284,
     ENUM = 285,
     UNION = 286,
     CLASS_REF = 287,
     OTHER = 288,
     CONST = 289,
     CONST_PTR = 290,
     CONST_EQUAL = 291,
     OPERATOR = 292,
     UNSIGNED = 293,
     SIGNED = 294,
     FRIEND = 295,
     INLINE = 296,
     MUTABLE = 297,
     TEMPLATE = 298,
     TYPENAME = 299,
     TYPEDEF = 300,
     NAMESPACE = 301,
     USING = 302,
     VTK_ID = 303,
     STATIC = 304,
     EXTERN = 305,
     VAR_FUNCTION = 306,
     VTK_LEGACY = 307,
     NEW = 308,
     DELETE = 309,
     OP_LSHIFT_EQ = 310,
     OP_RSHIFT_EQ = 311,
     OP_LSHIFT = 312,
     OP_RSHIFT = 313,
     OP_ARROW_POINTER = 314,
     OP_ARROW = 315,
     OP_INCR = 316,
     OP_DECR = 317,
     OP_PLUS_EQ = 318,
     OP_MINUS_EQ = 319,
     OP_TIMES_EQ = 320,
     OP_DIVIDE_EQ = 321,
     OP_REMAINDER_EQ = 322,
     OP_AND_EQ = 323,
     OP_OR_EQ = 324,
     OP_XOR_EQ = 325,
     OP_LOGIC_AND_EQ = 326,
     OP_LOGIC_OR_EQ = 327,
     OP_LOGIC_AND = 328,
     OP_LOGIC_OR = 329,
     OP_LOGIC_EQ = 330,
     OP_LOGIC_NEQ = 331,
     OP_LOGIC_LEQ = 332,
     OP_LOGIC_GEQ = 333,
     ELLIPSIS = 334,
     DOUBLE_COLON = 335,
     LP = 336,
     LA = 337,
     StdString = 338,
     UnicodeString = 339,
     IdType = 340,
     TypeInt8 = 341,
     TypeUInt8 = 342,
     TypeInt16 = 343,
     TypeUInt16 = 344,
     TypeInt32 = 345,
     TypeUInt32 = 346,
     TypeInt64 = 347,
     TypeUInt64 = 348,
     TypeFloat32 = 349,
     TypeFloat64 = 350,
     SetMacro = 351,
     GetMacro = 352,
     SetStringMacro = 353,
     GetStringMacro = 354,
     SetClampMacro = 355,
     SetObjectMacro = 356,
     GetObjectMacro = 357,
     BooleanMacro = 358,
     SetVector2Macro = 359,
     SetVector3Macro = 360,
     SetVector4Macro = 361,
     SetVector6Macro = 362,
     GetVector2Macro = 363,
     GetVector3Macro = 364,
     GetVector4Macro = 365,
     GetVector6Macro = 366,
     SetVectorMacro = 367,
     GetVectorMacro = 368,
     ViewportCoordinateMacro = 369,
     WorldCoordinateMacro = 370,
     TypeMacro = 371,
     VTK_CONSTANT_DEF = 372,
     VTK_BYTE_SWAP_DECL = 373
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 783 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 1115 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 1127 "vtkParse.tab.c"

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
#define YYLAST   6016

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  199
/* YYNRULES -- Number of rules.  */
#define YYNRULES  557
/* YYNRULES -- Number of states.  */
#define YYNSTATES  985

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   373

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   140,     2,     2,     2,   134,   135,     2,
     120,   121,   132,   130,   127,   129,   141,   133,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   126,   119,
     124,   128,   125,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   138,     2,   139,   137,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   122,   136,   123,   131,     2,     2,     2,
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
     115,   116,   117,   118
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    11,    13,    15,    17,
      19,    21,    23,    25,    27,    29,    31,    34,    36,    39,
      43,    46,    49,    52,    56,    59,    61,    63,    66,    71,
      76,    78,    84,    85,    92,    97,    98,   106,   107,   118,
     119,   127,   128,   139,   140,   141,   145,   148,   150,   152,
     154,   156,   158,   160,   162,   164,   166,   169,   171,   173,
     176,   180,   184,   187,   191,   195,   198,   204,   206,   208,
     210,   211,   214,   216,   220,   222,   225,   228,   231,   233,
     235,   237,   238,   239,   249,   250,   251,   260,   261,   263,
     267,   269,   273,   275,   277,   279,   281,   283,   285,   287,
     289,   291,   293,   294,   298,   299,   304,   305,   310,   312,
     314,   316,   318,   320,   322,   324,   326,   328,   330,   332,
     339,   347,   354,   358,   361,   365,   369,   371,   376,   380,
     386,   395,   404,   412,   420,   430,   440,   443,   446,   449,
     452,   455,   459,   463,   464,   470,   472,   473,   478,   481,
     484,   485,   489,   491,   493,   494,   495,   499,   504,   509,
     512,   516,   521,   527,   531,   536,   543,   551,   557,   564,
     567,   571,   574,   578,   582,   584,   587,   590,   594,   598,
     602,   604,   607,   611,   612,   613,   622,   623,   627,   628,
     629,   637,   638,   642,   643,   646,   649,   651,   653,   657,
     658,   664,   665,   666,   676,   677,   681,   682,   688,   689,
     693,   694,   698,   703,   705,   706,   712,   713,   715,   717,
     719,   720,   725,   729,   731,   732,   733,   736,   738,   740,
     741,   746,   747,   748,   754,   756,   758,   761,   762,   764,
     765,   769,   774,   779,   783,   786,   787,   788,   793,   794,
     797,   798,   802,   805,   806,   812,   815,   816,   822,   824,
     826,   828,   830,   832,   833,   834,   839,   841,   843,   846,
     848,   851,   852,   854,   856,   857,   859,   860,   863,   864,
     870,   871,   873,   874,   876,   878,   880,   882,   884,   886,
     888,   890,   893,   896,   900,   903,   906,   910,   912,   915,
     917,   920,   922,   925,   928,   930,   932,   934,   936,   937,
     941,   942,   948,   949,   955,   957,   958,   963,   965,   967,
     969,   971,   973,   975,   977,   979,   983,   987,   989,   991,
     993,   995,   997,   999,  1001,  1004,  1006,  1008,  1011,  1013,
    1015,  1017,  1020,  1023,  1026,  1029,  1032,  1035,  1037,  1039,
    1041,  1043,  1045,  1047,  1049,  1051,  1053,  1055,  1057,  1059,
    1061,  1063,  1065,  1067,  1069,  1071,  1073,  1075,  1077,  1079,
    1081,  1082,  1086,  1087,  1091,  1093,  1095,  1097,  1099,  1101,
    1103,  1105,  1107,  1109,  1110,  1117,  1118,  1120,  1121,  1122,
    1127,  1129,  1130,  1134,  1135,  1139,  1141,  1142,  1147,  1148,
    1149,  1159,  1161,  1164,  1166,  1168,  1170,  1172,  1174,  1176,
    1178,  1180,  1181,  1189,  1190,  1191,  1192,  1202,  1203,  1209,
    1210,  1216,  1217,  1218,  1229,  1230,  1238,  1239,  1240,  1241,
    1251,  1258,  1259,  1267,  1268,  1276,  1277,  1285,  1286,  1294,
    1295,  1303,  1304,  1312,  1313,  1321,  1322,  1330,  1331,  1341,
    1342,  1352,  1357,  1362,  1369,  1377,  1380,  1383,  1387,  1391,
    1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,
    1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,
    1473,  1475,  1476,  1479,  1480,  1483,  1485,  1487,  1489,  1491,
    1493,  1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,
    1513,  1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,
    1533,  1535,  1537,  1539,  1541,  1543,  1545,  1547,  1549,  1551,
    1553,  1555,  1557,  1559,  1561,  1563,  1565,  1567,  1569,  1571,
    1573,  1575,  1577,  1579,  1583,  1587,  1591,  1595
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     143,     0,    -1,    -1,    -1,   143,   144,   145,    -1,   243,
      -1,   164,    -1,   161,    -1,   179,    -1,   178,    -1,   177,
      -1,   180,    -1,   147,    -1,   146,    -1,   184,    -1,   149,
      -1,   185,   149,    -1,    32,    -1,   201,   213,    -1,   185,
     201,   213,    -1,   200,   213,    -1,   196,   213,    -1,   197,
     213,    -1,   185,   196,   213,    -1,   194,   213,    -1,   308,
      -1,   333,    -1,   284,   119,    -1,     9,   120,   334,   121,
      -1,    48,   120,   334,   121,    -1,   119,    -1,    50,    10,
     122,   143,   123,    -1,    -1,    46,   284,   148,   122,   143,
     123,    -1,    46,   122,   334,   123,    -1,    -1,     4,   269,
     150,   157,   122,   154,   123,    -1,    -1,     4,   269,   124,
     280,   125,   151,   157,   122,   154,   123,    -1,    -1,     3,
     269,   152,   157,   122,   154,   123,    -1,    -1,     3,   269,
     124,   280,   125,   153,   157,   122,   154,   123,    -1,    -1,
      -1,   154,   155,   156,    -1,   160,   126,    -1,   243,    -1,
     164,    -1,   161,    -1,   179,    -1,   178,    -1,   177,    -1,
     180,    -1,   184,    -1,   182,    -1,    40,   182,    -1,   181,
      -1,    32,    -1,   201,   213,    -1,    40,   201,   213,    -1,
     185,   201,   213,    -1,   199,   213,    -1,    40,   199,   213,
      -1,   185,   199,   213,    -1,   195,   213,    -1,   118,   120,
     334,   121,   119,    -1,   308,    -1,   333,    -1,   119,    -1,
      -1,   126,   158,    -1,   159,    -1,   159,   127,   158,    -1,
     282,    -1,     6,   282,    -1,     7,   282,    -1,     5,   282,
      -1,     5,    -1,     6,    -1,     7,    -1,    -1,    -1,    30,
     269,   162,   122,   167,   123,   163,   335,   119,    -1,    -1,
      -1,    30,   165,   122,   167,   123,   166,   335,   119,    -1,
      -1,   168,    -1,   168,   127,   167,    -1,   269,    -1,   269,
     128,   171,    -1,   170,    -1,   269,    -1,   283,    -1,   277,
      -1,    16,    -1,    11,    -1,    13,    -1,    12,    -1,    15,
      -1,   169,    -1,    -1,   175,   172,   171,    -1,    -1,   169,
     176,   173,   171,    -1,    -1,   120,   174,   171,   121,    -1,
     129,    -1,   130,    -1,   131,    -1,   129,    -1,   130,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,   136,    -1,
     137,    -1,     3,   122,   334,   123,   335,   119,    -1,    31,
     269,   122,   334,   123,   335,   119,    -1,    31,   122,   334,
     123,   335,   119,    -1,    47,   335,   119,    -1,   185,   182,
      -1,     4,   269,   183,    -1,     3,   269,   183,    -1,   119,
      -1,   122,   334,   123,   119,    -1,   126,   335,   119,    -1,
      45,   272,   261,   262,   119,    -1,    45,     4,   269,   122,
     334,   123,   239,   119,    -1,    45,     3,   269,   122,   334,
     123,   239,   119,    -1,    45,   272,    82,   239,   121,   262,
     119,    -1,    45,   272,    81,   239,   121,   262,   119,    -1,
      45,   272,    82,   239,   121,   120,   228,   121,   119,    -1,
      45,   272,    81,   239,   121,   120,   228,   121,   119,    -1,
      45,   164,    -1,    45,   161,    -1,    45,   179,    -1,    45,
     178,    -1,    45,   177,    -1,    45,    51,   119,    -1,    43,
     124,   125,    -1,    -1,    43,   124,   186,   187,   125,    -1,
     189,    -1,    -1,   189,   127,   188,   187,    -1,   289,   192,
      -1,   191,   192,    -1,    -1,   190,   185,   192,    -1,     4,
      -1,    44,    -1,    -1,    -1,   269,   193,   240,    -1,    52,
     120,   196,   121,    -1,    52,   120,   199,   121,    -1,   270,
     210,    -1,   270,   198,   210,    -1,   284,    80,   131,   225,
      -1,    41,   284,    80,   131,   225,    -1,   284,    80,   218,
      -1,    41,   284,    80,   218,    -1,   284,    80,   284,    80,
     131,   225,    -1,    41,   284,    80,   284,    80,   131,   225,
      -1,   284,    80,   284,    80,   218,    -1,    41,   284,    80,
     284,    80,   218,    -1,   284,    80,    -1,   198,   284,    80,
      -1,   131,   225,    -1,    41,   131,   225,    -1,     8,   131,
     225,    -1,   218,    -1,    41,   218,    -1,   270,   210,    -1,
       8,   270,   210,    -1,   284,    80,   202,    -1,   270,   198,
     205,    -1,   202,    -1,   270,   205,    -1,     8,   272,   205,
      -1,    -1,    -1,    37,   270,   120,   203,   232,   121,   204,
     212,    -1,    -1,   207,   206,   212,    -1,    -1,    -1,    37,
     331,   208,   120,   209,   232,   121,    -1,    -1,   214,   211,
     212,    -1,    -1,   128,    16,    -1,    36,    16,    -1,    34,
      -1,   119,    -1,   122,   334,   123,    -1,    -1,   269,   120,
     215,   232,   121,    -1,    -1,    -1,   269,   124,   216,   280,
     125,   120,   217,   232,   121,    -1,    -1,   220,   219,   222,
      -1,    -1,   269,   120,   221,   232,   121,    -1,    -1,   126,
     224,   223,    -1,    -1,   127,   224,   223,    -1,   269,   120,
     334,   121,    -1,   226,    -1,    -1,   269,   120,   227,   232,
     121,    -1,    -1,   229,    -1,    79,    -1,   231,    -1,    -1,
     231,   127,   230,   229,    -1,   272,   250,   240,    -1,    51,
      -1,    -1,    -1,   233,   234,    -1,    79,    -1,   236,    -1,
      -1,   236,   127,   235,   234,    -1,    -1,    -1,   237,   272,
     250,   238,   240,    -1,    51,    -1,   269,    -1,   285,   269,
      -1,    -1,   241,    -1,    -1,   128,   242,   295,    -1,   270,
     244,   245,   119,    -1,    49,    51,   245,   119,    -1,    51,
     245,   119,    -1,   252,   240,    -1,    -1,    -1,   245,   127,
     246,   247,    -1,    -1,   248,   244,    -1,    -1,   285,   249,
     244,    -1,   260,   262,    -1,    -1,   254,   258,   121,   251,
     256,    -1,   261,   262,    -1,    -1,   255,   259,   121,   253,
     256,    -1,   120,    -1,    81,    -1,    82,    -1,    81,    -1,
      82,    -1,    -1,    -1,   120,   257,   232,   121,    -1,   263,
      -1,   250,    -1,   285,   250,    -1,   252,    -1,   285,   252,
      -1,    -1,   261,    -1,   269,    -1,    -1,   263,    -1,    -1,
     264,   265,    -1,    -1,   267,   138,   266,   268,   139,    -1,
      -1,   265,    -1,    -1,   171,    -1,    48,    -1,     9,    -1,
      29,    -1,    28,    -1,    83,    -1,    84,    -1,   272,    -1,
      42,   272,    -1,    50,   272,    -1,    50,    10,   272,    -1,
      41,   272,    -1,   271,   272,    -1,    41,   271,   272,    -1,
      49,    -1,    49,    41,    -1,   273,    -1,   273,   285,    -1,
     275,    -1,   274,   275,    -1,   275,   274,    -1,    34,    -1,
     288,    -1,   277,    -1,   283,    -1,    -1,    44,   276,   282,
      -1,    -1,    48,   124,   278,   280,   125,    -1,    -1,     9,
     124,   279,   280,   125,    -1,   272,    -1,    -1,   272,   127,
     281,   280,    -1,    48,    -1,     9,    -1,    29,    -1,    28,
      -1,    83,    -1,    84,    -1,   277,    -1,   283,    -1,   284,
      80,   282,    -1,   277,    80,   282,    -1,     9,    -1,    48,
      -1,    29,    -1,    28,    -1,    83,    -1,    84,    -1,   135,
      -1,   286,   135,    -1,   286,    -1,   287,    -1,   286,   287,
      -1,   132,    -1,    35,    -1,   289,    -1,     4,   290,    -1,
       3,   290,    -1,    31,     9,    -1,    31,    48,    -1,    30,
       9,    -1,    30,    48,    -1,   291,    -1,   290,    -1,    83,
      -1,    84,    -1,    28,    -1,    29,    -1,     9,    -1,    48,
      -1,    24,    -1,    18,    -1,    23,    -1,    27,    -1,    26,
      -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,    90,
      -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,    95,
      -1,    -1,    39,   292,   294,    -1,    -1,    38,   293,   294,
      -1,   294,    -1,    25,    -1,    17,    -1,    19,    -1,    20,
      -1,    85,    -1,    21,    -1,    22,    -1,   300,    -1,    -1,
     122,   296,   295,   298,   297,   123,    -1,    -1,   127,    -1,
      -1,    -1,   298,   127,   299,   295,    -1,   307,    -1,    -1,
     130,   301,   307,    -1,    -1,   129,   302,   307,    -1,   306,
      -1,    -1,   120,   303,   300,   121,    -1,    -1,    -1,     9,
     124,   304,   273,   125,   120,   305,   307,   121,    -1,    10,
      -1,   306,    10,    -1,    16,    -1,    11,    -1,    13,    -1,
      12,    -1,    14,    -1,    15,    -1,     9,    -1,    48,    -1,
      -1,    96,   120,   269,   127,   309,   272,   121,    -1,    -1,
      -1,    -1,    97,   120,   310,   269,   127,   311,   272,   312,
     121,    -1,    -1,    98,   120,   313,   269,   121,    -1,    -1,
      99,   120,   314,   269,   121,    -1,    -1,    -1,   100,   120,
     269,   127,   315,   288,   316,   127,   335,   121,    -1,    -1,
     101,   120,   269,   127,   317,   288,   121,    -1,    -1,    -1,
      -1,   102,   120,   318,   269,   127,   319,   288,   320,   121,
      -1,   103,   120,   269,   127,   288,   121,    -1,    -1,   104,
     120,   269,   127,   321,   288,   121,    -1,    -1,   108,   120,
     269,   127,   322,   288,   121,    -1,    -1,   105,   120,   269,
     127,   323,   288,   121,    -1,    -1,   109,   120,   269,   127,
     324,   288,   121,    -1,    -1,   106,   120,   269,   127,   325,
     288,   121,    -1,    -1,   110,   120,   269,   127,   326,   288,
     121,    -1,    -1,   107,   120,   269,   127,   327,   288,   121,
      -1,    -1,   111,   120,   269,   127,   328,   288,   121,    -1,
      -1,   112,   120,   269,   127,   329,   288,   127,    11,   121,
      -1,    -1,   113,   120,   269,   127,   330,   288,   127,    11,
     121,    -1,   114,   120,   269,   121,    -1,   115,   120,   269,
     121,    -1,   116,   120,   269,   127,   269,   121,    -1,   116,
     120,   269,   127,   269,   127,   121,    -1,   120,   121,    -1,
     138,   139,    -1,    53,   138,   139,    -1,    54,   138,   139,
      -1,   332,    -1,   128,    -1,   132,    -1,   133,    -1,   129,
      -1,   130,    -1,   140,    -1,   131,    -1,   127,    -1,   124,
      -1,   125,    -1,   135,    -1,   136,    -1,   137,    -1,   134,
      -1,    53,    -1,    54,    -1,    55,    -1,    56,    -1,    57,
      -1,    58,    -1,    59,    -1,    60,    -1,    63,    -1,    64,
      -1,    65,    -1,    66,    -1,    67,    -1,    61,    -1,    62,
      -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,    72,
      -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,    77,
      -1,    78,    -1,   117,    -1,    -1,   334,   336,    -1,    -1,
     335,   337,    -1,   119,    -1,   337,    -1,    33,    -1,   338,
      -1,   340,    -1,   339,    -1,    45,    -1,   332,    -1,   126,
      -1,   141,    -1,    80,    -1,     4,    -1,    43,    -1,    29,
      -1,    28,    -1,    83,    -1,    84,    -1,   291,    -1,    13,
      -1,    11,    -1,    12,    -1,    14,    -1,    15,    -1,    10,
      -1,    32,    -1,    34,    -1,    35,    -1,    36,    -1,     3,
      -1,    37,    -1,    49,    -1,    41,    -1,     8,    -1,    30,
      -1,    31,    -1,    44,    -1,    16,    -1,    51,    -1,    79,
      -1,     5,    -1,     7,    -1,     6,    -1,    46,    -1,    47,
      -1,    50,    -1,     9,    -1,    48,    -1,   333,    -1,   122,
     334,   123,    -1,   138,   334,   139,    -1,   120,   334,   121,
      -1,    81,   334,   121,    -1,    82,   334,   121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   918,   918,   919,   918,   923,   924,   925,   926,   927,
     928,   929,   930,   931,   932,   933,   934,   935,   936,   937,
     938,   939,   940,   941,   942,   943,   944,   945,   946,   947,
     948,   954,   960,   960,   962,   968,   968,   970,   970,   972,
     972,   974,   974,   977,   978,   977,   981,   982,   983,   984,
     985,   986,   987,   988,   989,   990,   991,   992,   993,   994,
     995,   997,   998,   999,  1001,  1002,  1003,  1004,  1005,  1006,
    1008,  1008,  1010,  1010,  1012,  1013,  1014,  1015,  1022,  1023,
    1024,  1034,  1035,  1034,  1037,  1038,  1037,  1040,  1040,  1040,
    1042,  1043,  1045,  1046,  1046,  1046,  1048,  1048,  1048,  1048,
    1048,  1050,  1051,  1051,  1056,  1056,  1062,  1062,  1069,  1069,
    1070,  1072,  1072,  1073,  1073,  1074,  1074,  1075,  1075,  1081,
    1083,  1085,  1087,  1089,  1091,  1092,  1094,  1095,  1096,  1098,
    1099,  1100,  1101,  1102,  1103,  1104,  1105,  1106,  1107,  1108,
    1109,  1110,  1116,  1117,  1117,  1121,  1122,  1122,  1125,  1133,
    1139,  1139,  1150,  1151,  1153,  1153,  1153,  1160,  1162,  1168,
    1173,  1174,  1175,  1176,  1177,  1178,  1179,  1180,  1181,  1183,
    1184,  1186,  1187,  1188,  1193,  1194,  1195,  1199,  1208,  1209,
    1212,  1216,  1220,  1231,  1235,  1230,  1250,  1250,  1262,  1263,
    1262,  1270,  1270,  1282,  1283,  1292,  1302,  1308,  1308,  1311,
    1310,  1315,  1316,  1315,  1325,  1325,  1335,  1335,  1337,  1337,
    1339,  1339,  1341,  1343,  1357,  1357,  1363,  1363,  1365,  1366,
    1366,  1366,  1369,  1370,  1373,  1373,  1373,  1376,  1377,  1380,
    1379,  1384,  1386,  1384,  1422,  1453,  1453,  1455,  1455,  1457,
    1457,  1464,  1465,  1466,  1468,  1479,  1480,  1480,  1483,  1483,
    1484,  1484,  1488,  1489,  1489,  1495,  1496,  1496,  1501,  1502,
    1504,  1507,  1509,  1512,  1513,  1513,  1515,  1518,  1519,  1523,
    1524,  1527,  1527,  1529,  1531,  1531,  1533,  1533,  1535,  1535,
    1537,  1537,  1539,  1540,  1546,  1547,  1548,  1549,  1550,  1551,
    1558,  1559,  1560,  1561,  1563,  1564,  1566,  1570,  1571,  1573,
    1574,  1576,  1577,  1578,  1580,  1582,  1583,  1585,  1587,  1587,
    1591,  1591,  1593,  1593,  1596,  1596,  1596,  1598,  1599,  1600,
    1601,  1602,  1603,  1604,  1605,  1607,  1613,  1620,  1620,  1620,
    1620,  1620,  1620,  1636,  1637,  1638,  1643,  1644,  1656,  1657,
    1660,  1661,  1662,  1663,  1664,  1665,  1666,  1669,  1670,  1673,
    1674,  1675,  1676,  1677,  1678,  1681,  1682,  1683,  1684,  1685,
    1686,  1687,  1688,  1689,  1690,  1691,  1692,  1693,  1694,  1695,
    1696,  1696,  1697,  1697,  1699,  1702,  1703,  1704,  1705,  1706,
    1707,  1708,  1714,  1715,  1715,  1724,  1724,  1726,  1727,  1727,
    1735,  1736,  1736,  1737,  1737,  1740,  1741,  1741,  1742,  1743,
    1742,  1751,  1752,  1759,  1760,  1761,  1762,  1763,  1764,  1765,
    1767,  1775,  1775,  1789,  1790,  1790,  1789,  1803,  1803,  1817,
    1817,  1831,  1831,  1831,  1877,  1876,  1892,  1893,  1893,  1892,
    1906,  1932,  1932,  1937,  1937,  1942,  1942,  1947,  1947,  1952,
    1952,  1957,  1957,  1962,  1962,  1967,  1967,  1972,  1972,  1993,
    1993,  2014,  2080,  2150,  2217,  2291,  2292,  2293,  2294,  2295,
    2297,  2298,  2298,  2299,  2299,  2300,  2300,  2301,  2301,  2302,
    2302,  2303,  2303,  2304,  2305,  2306,  2307,  2308,  2309,  2310,
    2311,  2312,  2313,  2314,  2315,  2316,  2317,  2318,  2319,  2320,
    2321,  2322,  2323,  2324,  2325,  2326,  2327,  2328,  2329,  2330,
    2336,  2359,  2359,  2360,  2360,  2362,  2362,  2364,  2364,  2364,
    2364,  2364,  2365,  2365,  2365,  2365,  2365,  2365,  2366,  2366,
    2366,  2366,  2366,  2367,  2367,  2367,  2367,  2367,  2368,  2368,
    2368,  2368,  2368,  2368,  2369,  2369,  2369,  2369,  2369,  2369,
    2369,  2370,  2370,  2370,  2370,  2370,  2370,  2371,  2371,  2371,
    2371,  2371,  2371,  2373,  2374,  2375,  2375,  2375
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
  "VOID", "CHAR", "SIGNED_CHAR", "BOOL", "OSTREAM", "ISTREAM", "ENUM",
  "UNION", "CLASS_REF", "OTHER", "CONST", "CONST_PTR", "CONST_EQUAL",
  "OPERATOR", "UNSIGNED", "SIGNED", "FRIEND", "INLINE", "MUTABLE",
  "TEMPLATE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING", "VTK_ID",
  "STATIC", "EXTERN", "VAR_FUNCTION", "VTK_LEGACY", "NEW", "DELETE",
  "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT", "OP_RSHIFT",
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
  "named_enum", "$@8", "$@9", "anonymous_enum", "$@10", "$@11",
  "enum_list", "enum_item", "integer_value", "integer_literal",
  "integer_expression", "$@12", "$@13", "$@14", "math_unary_op",
  "math_binary_op", "anonymous_struct", "named_union", "anonymous_union",
  "using", "template_internal_class", "internal_class",
  "internal_class_body", "typedef", "template", "$@15", "template_args",
  "$@16", "template_arg", "$@17", "class_or_typename", "maybe_template_id",
  "$@18", "legacy_function", "legacy_method", "function", "scoped_method",
  "scope", "method", "scoped_operator", "operator", "typecast_op_func",
  "$@19", "$@20", "op_func", "$@21", "op_sig", "$@22", "$@23", "func",
  "$@24", "func_trailer", "func_body", "func_sig", "$@25", "$@26", "@27",
  "constructor", "$@28", "constructor_sig", "$@29", "maybe_initializers",
  "more_initializers", "initializer", "destructor", "destructor_sig",
  "$@30", "ignore_args_list", "ignore_more_args", "$@31", "ignore_arg",
  "args_list", "$@32", "more_args", "$@33", "arg", "$@34", "$@35",
  "maybe_indirect_id", "maybe_var_assign", "var_assign", "$@36", "var",
  "var_id_maybe_assign", "maybe_other_vars", "$@37", "other_var", "$@38",
  "$@39", "maybe_complex_var_id", "$@40", "complex_var_id", "$@41",
  "p_or_lp_or_la", "lp_or_la", "maybe_array_or_args", "$@42",
  "maybe_indirect_maybe_var_id", "maybe_indirect_var_id", "maybe_var_id",
  "var_id", "maybe_var_array", "var_array", "$@43", "array", "$@44",
  "more_array", "array_size", "any_id", "storage_type", "static_mod",
  "type", "type_red", "const_mod", "type_red1", "$@45", "templated_id",
  "$@46", "$@47", "types", "$@48", "maybe_scoped_id", "scoped_id",
  "class_id", "type_indirection", "pointers", "pointer_or_const_pointer",
  "type_red2", "type_simple", "type_id", "type_primitive", "$@49", "$@50",
  "type_integer", "value", "$@51", "maybe_comma", "more_values", "$@52",
  "literal", "$@53", "$@54", "$@55", "$@56", "$@57", "string_literal",
  "literal2", "macro", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63",
  "$@64", "$@65", "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72",
  "$@73", "$@74", "$@75", "$@76", "$@77", "$@78", "$@79", "op_token",
  "op_token_no_delim", "vtk_constant_def", "maybe_other",
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
     365,   366,   367,   368,   369,   370,   371,   372,   373,    59,
      40,    41,   123,   125,    60,    62,    58,    44,    61,    45,
      43,   126,    42,    47,    37,    38,   124,    94,    91,    93,
      33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   142,   143,   144,   143,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   146,   148,   147,   147,   150,   149,   151,   149,   152,
     149,   153,   149,   154,   155,   154,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   156,   156,   156,   156,   156,   156,
     157,   157,   158,   158,   159,   159,   159,   159,   160,   160,
     160,   162,   163,   161,   165,   166,   164,   167,   167,   167,
     168,   168,   169,   169,   169,   169,   170,   170,   170,   170,
     170,   171,   172,   171,   173,   171,   174,   171,   175,   175,
     175,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     178,   179,   180,   181,   182,   182,   183,   183,   183,   184,
     184,   184,   184,   184,   184,   184,   184,   184,   184,   184,
     184,   184,   185,   186,   185,   187,   188,   187,   189,   189,
     190,   189,   191,   191,   192,   193,   192,   194,   195,   196,
     197,   197,   197,   197,   197,   197,   197,   197,   197,   198,
     198,   199,   199,   199,   199,   199,   199,   199,   200,   200,
     201,   201,   201,   203,   204,   202,   206,   205,   208,   209,
     207,   211,   210,   212,   212,   212,   212,   213,   213,   215,
     214,   216,   217,   214,   219,   218,   221,   220,   222,   222,
     223,   223,   224,   225,   227,   226,   228,   228,   229,   229,
     230,   229,   231,   231,   232,   233,   232,   234,   234,   235,
     234,   237,   238,   236,   236,   239,   239,   240,   240,   242,
     241,   243,   243,   243,   244,   245,   246,   245,   248,   247,
     249,   247,   250,   251,   250,   252,   253,   252,   254,   254,
     254,   255,   255,   256,   257,   256,   256,   258,   258,   259,
     259,   260,   260,   261,   262,   262,   264,   263,   266,   265,
     267,   267,   268,   268,   269,   269,   269,   269,   269,   269,
     270,   270,   270,   270,   270,   270,   270,   271,   271,   272,
     272,   273,   273,   273,   274,   275,   275,   275,   276,   275,
     278,   277,   279,   277,   280,   281,   280,   282,   282,   282,
     282,   282,   282,   282,   282,   283,   283,   284,   284,   284,
     284,   284,   284,   285,   285,   285,   286,   286,   287,   287,
     288,   288,   288,   288,   288,   288,   288,   289,   289,   290,
     290,   290,   290,   290,   290,   291,   291,   291,   291,   291,
     291,   291,   291,   291,   291,   291,   291,   291,   291,   291,
     292,   291,   293,   291,   291,   294,   294,   294,   294,   294,
     294,   294,   295,   296,   295,   297,   297,   298,   299,   298,
     300,   301,   300,   302,   300,   300,   303,   300,   304,   305,
     300,   306,   306,   307,   307,   307,   307,   307,   307,   307,
     307,   309,   308,   310,   311,   312,   308,   313,   308,   314,
     308,   315,   316,   308,   317,   308,   318,   319,   320,   308,
     308,   321,   308,   322,   308,   323,   308,   324,   308,   325,
     308,   326,   308,   327,   308,   328,   308,   329,   308,   330,
     308,   308,   308,   308,   308,   331,   331,   331,   331,   331,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     333,   334,   334,   335,   335,   336,   336,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   337,   337,   337,   337,   337,   337,   337,
     337,   337,   337,   338,   339,   340,   340,   340
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     3,
       2,     2,     2,     3,     2,     1,     1,     2,     4,     4,
       1,     5,     0,     6,     4,     0,     7,     0,    10,     0,
       7,     0,    10,     0,     0,     3,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     1,     2,
       3,     3,     2,     3,     3,     2,     5,     1,     1,     1,
       0,     2,     1,     3,     1,     2,     2,     2,     1,     1,
       1,     0,     0,     9,     0,     0,     8,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     4,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     6,
       7,     6,     3,     2,     3,     3,     1,     4,     3,     5,
       8,     8,     7,     7,     9,     9,     2,     2,     2,     2,
       2,     3,     3,     0,     5,     1,     0,     4,     2,     2,
       0,     3,     1,     1,     0,     0,     3,     4,     4,     2,
       3,     4,     5,     3,     4,     6,     7,     5,     6,     2,
       3,     2,     3,     3,     1,     2,     2,     3,     3,     3,
       1,     2,     3,     0,     0,     8,     0,     3,     0,     0,
       7,     0,     3,     0,     2,     2,     1,     1,     3,     0,
       5,     0,     0,     9,     0,     3,     0,     5,     0,     3,
       0,     3,     4,     1,     0,     5,     0,     1,     1,     1,
       0,     4,     3,     1,     0,     0,     2,     1,     1,     0,
       4,     0,     0,     5,     1,     1,     2,     0,     1,     0,
       3,     4,     4,     3,     2,     0,     0,     4,     0,     2,
       0,     3,     2,     0,     5,     2,     0,     5,     1,     1,
       1,     1,     1,     0,     0,     4,     1,     1,     2,     1,
       2,     0,     1,     1,     0,     1,     0,     2,     0,     5,
       0,     1,     0,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     3,     2,     2,     3,     1,     2,     1,
       2,     1,     2,     2,     1,     1,     1,     1,     0,     3,
       0,     5,     0,     5,     1,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     6,     0,     1,     0,     0,     4,
       1,     0,     3,     0,     3,     1,     0,     4,     0,     0,
       9,     1,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     7,     0,     0,     0,     9,     0,     5,     0,
       5,     0,     0,    10,     0,     7,     0,     0,     0,     9,
       6,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     9,     0,
       9,     4,     4,     6,     7,     2,     2,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   353,   376,   356,
     377,   378,   380,   381,   357,   355,   375,   359,   358,   351,
     352,    84,     0,    17,   304,     0,   372,   370,     0,     0,
       0,   308,     0,     0,   503,   354,   297,     0,   245,     0,
     349,   350,   379,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   500,    30,     4,    13,    12,    15,
       7,     6,    10,     9,     8,    11,    14,     0,     0,     0,
       0,     0,     0,   180,     5,     0,     0,   290,   299,     0,
     301,   306,   307,     0,   305,   340,   348,   347,   374,    25,
      26,   353,   351,   352,   354,   349,   350,   501,    39,   342,
      35,   341,     0,     0,   353,     0,     0,   354,     0,     0,
     501,   312,   345,   287,   286,   346,   288,   289,     0,    81,
     343,   344,   501,     0,     0,   297,     0,     0,     0,     0,
       0,   294,     0,   291,   143,     0,     0,     0,     0,   137,
     136,   140,   139,   138,     0,   327,   330,   329,   328,   331,
     332,   501,    32,     0,   501,   310,   298,   245,     0,   292,
       0,     0,     0,   413,   417,   419,     0,     0,   426,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,   197,   501,
      24,    21,    22,    20,    18,   285,   287,   286,     0,   284,
     261,   262,   288,   289,     0,   181,   186,   159,   191,   245,
     237,     0,   274,   273,     0,   295,   339,   338,   333,   300,
     335,   336,   302,   303,     0,     0,    27,     0,     0,    70,
       0,    70,   353,   351,   352,   354,   349,   350,   345,   346,
     343,   344,   182,     0,     0,     0,    87,     0,     0,   501,
       0,   183,   373,   371,   296,     0,   142,   150,   318,   320,
     319,   317,   321,   322,   323,   309,   324,     0,     0,   141,
     285,   284,     0,     0,   274,   273,     0,     0,   533,   516,
     544,   546,   545,   537,   550,   528,   524,   525,   523,   526,
     527,   541,   519,   518,   538,   539,   529,   507,   530,   531,
     532,   534,   536,   517,   540,   511,   547,   548,   551,   535,
     549,   542,   474,   475,   476,   477,   478,   479,   480,   481,
     487,   488,   482,   483,   484,   485,   486,   489,   490,   491,
     492,   493,   494,   495,   496,   497,   498,   499,   543,   515,
     501,   501,   520,   521,   122,   501,   501,   468,   469,   513,
     467,   460,   463,   464,   466,   461,   462,   473,   470,   471,
     472,   501,   465,   514,   522,   512,   552,   504,   508,   510,
     509,     0,     0,     0,     2,   293,   243,   246,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    23,    19,     0,     0,   474,   475,     0,     0,   188,
     459,   179,   160,     0,   193,   193,     0,   239,   244,   238,
     269,     0,     0,   255,   275,   280,   199,   201,   169,   334,
     337,   326,   318,   320,   319,   317,   321,   322,     0,   178,
     163,   204,     0,   325,     0,   505,   503,   502,   506,   314,
       0,     0,     0,     0,     0,    28,     0,     0,    88,    90,
      87,   503,     0,   225,     0,   164,     0,   152,   153,     0,
     145,     0,   154,   154,   501,   501,     0,   235,     0,     0,
       0,    34,     2,     0,     0,     0,     0,     0,    29,     0,
     242,     3,   248,   157,   411,     0,     0,     0,   421,   424,
       0,     0,   431,   435,   439,   443,   433,   437,   441,   445,
     447,   449,   451,   452,     0,   198,     0,     0,   455,   456,
       0,   170,   196,     0,     0,   187,   192,   241,     0,   256,
     270,   277,     0,   225,     0,   161,   213,     0,   208,   206,
       0,     0,   315,    41,     0,     0,     0,    71,    72,    74,
      43,    37,    43,   313,    85,    87,     0,     0,     0,   503,
       0,   231,   162,     0,   144,   146,   154,   149,   155,   148,
       0,     0,   274,   236,   274,   129,     3,   556,   557,   555,
     553,   554,   311,    31,   247,     0,   250,     0,   414,   418,
     420,     0,     0,   427,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   457,   458,   189,   195,
     194,   409,   401,   404,   406,   405,   407,   408,   403,   410,
     396,   383,   393,   391,   240,   382,   395,   390,   263,   278,
       0,     0,   214,     0,   205,   225,     0,   167,   119,     0,
      70,    77,    75,    76,     0,    44,    70,    44,   503,    89,
     285,    97,    99,    98,   100,    96,   284,   106,   108,   109,
     110,   101,    92,    91,   102,    93,    95,    94,    82,   121,
       0,   184,   234,   227,   226,   228,     0,     0,   168,   150,
     151,   237,     0,     0,   216,     0,   216,     0,    33,   249,
       0,     0,     0,   422,     0,     0,   430,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   453,     0,   225,
     398,     0,     0,     0,     0,   402,   264,   257,   266,   282,
     200,     0,   225,   210,     0,     0,   165,   316,     0,    73,
      40,     0,     0,    36,     0,     0,   111,   112,   113,   114,
     115,   116,   117,   118,   104,     0,   503,   120,   193,   229,
     271,   166,   147,   156,     0,     0,   223,   218,     0,   217,
     219,   271,   133,     0,   132,   251,   412,   415,     0,   425,
     428,   432,   436,   440,   444,   434,   438,   442,   446,     0,
       0,   454,     0,     0,     0,   387,   409,   394,   392,   225,
     283,     0,   202,     0,     0,   209,   501,   207,    43,     0,
       0,    78,    79,    80,     0,   353,   351,   352,    58,     0,
       0,   354,     0,   349,   350,     0,    69,     0,    45,     0,
      49,    48,    52,    51,    50,    53,    57,    55,    54,     0,
       0,     0,     0,   174,    47,     0,    67,    68,    43,    86,
       0,     0,   103,     0,   185,   231,   259,   260,   258,   232,
     271,   274,   272,   131,   130,     0,   220,   237,     0,     0,
     503,     0,     0,     0,   190,     0,   397,   385,     0,   279,
     225,   215,   210,     0,    44,     0,     0,     0,     0,   290,
       0,    56,     0,     0,     0,     0,   175,     0,   501,   171,
      46,   123,     0,     0,    65,    62,    59,   176,    44,   107,
     105,    83,   230,   237,   267,     0,   271,   252,   135,     0,
     222,   134,   416,     0,   429,   448,   450,     0,   388,     0,
     265,     0,   211,   212,    42,   126,   501,   503,   125,   124,
     173,   177,    63,    60,   172,     0,     0,     0,     0,    64,
      61,    38,   233,   253,   268,   221,   423,   399,     0,   384,
     203,     0,     0,   158,     0,   263,     0,   389,     0,   128,
      66,   254,     0,   127,   400
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    76,    77,    78,   297,    79,   251,   666,
     249,   660,   665,   751,   838,   472,   567,   568,   839,    80,
     267,   766,    81,   138,   668,   477,   478,   681,   682,   683,
     765,   861,   755,   684,   764,    82,    83,    84,    85,   846,
     847,   948,    86,    87,   277,   489,   699,   490,   491,   492,
     587,   701,    88,   850,    89,    90,   224,   851,    91,    92,
      93,   483,   768,   225,   434,   226,   540,   729,   227,   435,
     545,   210,   228,   553,   554,   890,   853,   558,   461,   655,
     654,   815,   743,   555,   556,   742,   778,   779,   929,   780,
     580,   581,   694,   865,   695,   696,   923,   496,   438,   439,
     548,    94,   229,   180,   512,   604,   605,   710,   869,   975,
     230,   648,   870,   231,   737,   809,   925,   441,   871,   232,
     443,   444,   445,   551,   739,   552,   811,   295,   898,    96,
      97,    98,    99,   100,   155,   101,   392,   265,   470,   659,
     463,   102,   129,   498,   240,   241,   104,   105,   106,   107,
     149,   148,   108,   644,   732,   939,   887,   968,   645,   734,
     733,   731,   803,   976,   646,   647,   109,   607,   401,   712,
     879,   402,   403,   611,   788,   612,   406,   715,   881,   615,
     619,   616,   620,   617,   621,   618,   622,   623,   624,   429,
     385,   386,   247,   173,   467,   468,   388,   389,   390
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -764
static const yytype_int16 yypact[] =
{
    -764,    71,  -764,  5048,   236,   402,  5755,     5,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   137,
     148,   481,   252,  -764,  -764,  5258,  -764,  -764,  5444,  5755,
     -41,  -764,  5537,   294,  -764,    15,    46,  5630,  -764,    88,
     155,   163,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   116,   124,   131,   133,   165,   167,   174,
     182,   193,   207,   208,   217,   219,   228,   230,   231,   237,
     239,   240,   243,   244,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  5165,   196,   196,
     196,   196,   196,  -764,  -764,   625,  5755,  -764,    45,  5787,
     332,   162,  -764,   215,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,   267,   281,   414,   454,   520,   563,  -764,   247,  -764,
     248,  -764,   518,   518,    -5,    52,   295,    19,   336,   299,
    -764,  -764,   253,  -764,  -764,   254,  -764,  -764,   259,  -764,
     253,   254,  -764,   263,  5444,   351,  5662,   276,    85,    85,
    5755,  -764,   324,  -764,   283,   600,   236,   402,   287,  -764,
    -764,  -764,  -764,  -764,   583,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  3314,  -764,  -764,  -764,  -764,  4942,  -764,
     -55,  5258,   612,  -764,  -764,  -764,   612,   612,  -764,   612,
     612,   612,   612,   612,   612,   612,   612,   612,   612,   612,
     612,   612,   612,   402,  -764,   196,   196,   385,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   329,   335,   338,  5876,   339,
    -764,  -764,   341,   345,   478,  -764,  -764,  -764,  -764,  -764,
     284,   515,   288,   201,   348,  -764,  -764,  -764,  -764,  -764,
      81,  -764,  -764,  -764,   600,    83,  -764,   951,  5755,   303,
    5755,   303,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,   600,  1090,  5755,   612,   310,  1229,  -764,
    5755,  -764,  -764,  -764,  -764,   121,  -764,   851,    -5,   335,
     338,    19,   341,   345,   162,  -764,  -764,   319,   321,  -764,
    -764,  -764,    80,    80,   288,  -764,  1368,   327,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  1507,  5755,   103,  -764,  -764,  -764,  -764,   331,   612,
     326,   612,   612,   612,   330,   344,   612,   346,   347,   350,
     354,   355,   357,   366,   381,   384,   386,   387,   337,   399,
     394,  -764,  -764,   201,  1646,   328,   390,   401,   320,  -764,
    -764,  -764,  -764,   395,    40,    40,   106,  -764,  -764,  -764,
    -764,   416,   837,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,   152,     2,    13,   159,    82,    99,   612,  -764,
    -764,  -764,   358,  -764,   443,  -764,  -764,  -764,  -764,   408,
     417,   340,   343,   420,   419,  -764,   423,   430,   427,   429,
     612,  -764,  1785,   437,   612,  -764,   479,  -764,  -764,   444,
     441,   531,   612,   612,  -764,  -764,   456,  -764,   612,   460,
     464,  -764,  -764,  1924,  2063,  2202,  2341,  2480,  -764,   450,
    -764,   465,    45,  -764,  -764,   462,   469,   470,  -764,  -764,
     467,  5880,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,   612,  -764,   461,   468,  -764,  -764,
     484,  -764,  -764,   590,   594,  -764,  -764,  -764,   665,  -764,
    -764,   477,   486,   437,  5755,  -764,  -764,   497,   496,  -764,
     209,  3453,  -764,  -764,   600,   600,   600,  -764,   498,  -764,
    -764,  -764,  -764,  -764,  -764,   612,  4874,   509,  3592,  -764,
     505,   122,  -764,   249,  -764,  -764,   612,  -764,  -764,  -764,
    2619,  2758,   -61,  -764,   -50,  -764,   510,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,   837,  -764,  5755,  -764,  -764,
    -764,  5880,  5880,  -764,   517,  5880,  5880,  5880,  5880,  5880,
    5880,  5880,  5880,  5880,  5880,    11,  -764,  -764,  -764,  -764,
    -764,   512,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,   635,  -764,    91,  -764,
     534,   533,  -764,   612,  -764,   437,   612,  -764,  -764,  5755,
     303,  -764,  -764,  -764,   340,   536,   303,   540,  -764,  -764,
      -5,  -764,  -764,  -764,  -764,  -764,    19,  -764,  -764,  -764,
    -764,   796,  -764,  -764,  -764,  -764,   162,  -764,  -764,  -764,
    3731,  -764,  -764,  -764,  -764,   529,  5755,   612,  -764,   851,
    -764,   284,    80,    80,  5351,   549,  5351,   550,  -764,  -764,
     837,   551,  5755,  -764,   567,  5880,  -764,   569,   570,   576,
     579,   580,   582,   593,   596,   543,   584,  -764,   598,   437,
    -764,   714,   665,   296,   296,  -764,  -764,  -764,  -764,  4874,
    -764,   595,   437,   604,   601,   599,  -764,  -764,   614,  -764,
    -764,  4426,   615,  -764,  3870,  4874,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  4874,  -764,  -764,    40,  -764,
     503,  -764,  -764,  -764,   619,   622,  -764,  -764,   623,  -764,
     616,   503,  -764,   627,  -764,  -764,  -764,  -764,   626,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   735,
     739,  -764,   631,  5755,   634,  -764,  -764,  -764,  -764,   437,
    -764,   617,  -764,   637,   612,  -764,  -764,  -764,  -764,   236,
     402,  -764,  -764,  -764,  4731,   152,     2,    13,  -764,  4543,
    4825,   159,   640,    82,    99,   643,  -764,   612,  -764,   638,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  4543,
     196,   196,   196,  -764,  -764,  4566,  -764,  -764,  -764,  -764,
     644,  4874,  -764,  4009,  -764,   122,  -764,  -764,  -764,  -764,
     435,   288,  -764,  -764,  -764,   647,  -764,   284,   648,   649,
    -764,   650,   652,   653,  -764,   654,  -764,   641,   656,  -764,
     437,  -764,   604,  2897,   655,   105,   105,   612,   612,   336,
     402,  -764,   196,   196,   385,   612,  -764,  4637,  -764,  -764,
    -764,  -764,   196,   196,  -764,  -764,  -764,  -764,   657,  -764,
    -764,  -764,  -764,   284,  -764,   660,   503,  -764,  -764,  5351,
    -764,  -764,  -764,  4148,  -764,  -764,  -764,   663,   661,   666,
    -764,   667,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  4731,   669,   612,  3036,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,   665,  -764,
    -764,  3175,  4287,  -764,   672,    91,   296,  -764,   677,  -764,
    -764,  -764,   678,  -764,  -764
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -764,  -337,  -764,  -764,  -764,  -764,  -764,   699,  -764,  -764,
    -764,  -764,  -528,  -764,  -764,  -218,   134,  -764,  -764,   -19,
    -764,  -764,   -18,  -764,  -764,  -424,  -764,  -764,  -764,  -687,
    -764,  -764,  -764,  -764,  -764,   -17,   -12,   -11,    49,  -764,
    -763,   -91,    55,  -445,  -764,   109,  -764,  -764,  -764,  -764,
    -431,  -764,  -764,  -764,    -6,  -764,  -764,  -726,  -764,   -80,
     566,  -764,  -764,  -123,  -764,  -764,  -764,  -764,  -212,  -764,
    -398,   -49,  -764,  -764,  -764,  -764,  -222,  -764,  -764,  -764,
    -764,   -79,     0,  -450,  -764,  -764,   112,  -117,  -764,  -764,
    -508,  -764,   -48,  -764,  -764,  -764,  -764,  -257,  -654,  -764,
    -764,    76,  -538,  -108,  -764,  -764,  -764,  -764,  -716,  -764,
    -176,  -764,  -764,  -764,  -146,  -764,  -764,  -764,  -764,  -154,
    -278,  -610,  -764,  -764,  -764,  -764,  -764,    -4,     3,   -26,
      -2,    27,   736,   738,  -764,  -104,  -764,  -764,  -192,  -764,
    -130,    54,    51,   -95,  -764,   602,  -120,  -248,     4,  -151,
    -764,  -764,   111,  -682,  -764,  -764,  -764,  -764,   107,  -764,
    -764,  -764,  -764,  -764,  -764,  -685,    89,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
    -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,  -764,
     621,     8,  -111,  -442,  -764,  -141,  -764,  -764,  -764
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -387
static const yytype_int16 yytable[] =
{
     118,   120,   150,   239,   128,   262,    95,   206,   119,   121,
     294,   110,   432,   159,   160,   161,   500,   139,   143,   264,
     162,   163,   384,   460,   561,   285,   151,   153,   147,   493,
     164,   268,   387,   474,   582,   179,   499,   546,   738,   578,
     211,   212,   213,   214,   667,   650,   586,   773,   807,   808,
     805,   284,   810,   485,   103,   440,   577,   511,   473,   704,
     296,   258,   589,   391,   396,   877,   901,   709,   860,   393,
     706,     2,   397,   476,   542,  -327,   543,  -276,   862,   152,
     236,   205,  -330,   154,   172,  -327,   911,   176,  -276,   290,
     207,   233,   452,  -329,   235,  -328,   384,   177,   424,  -328,
     259,   431,     8,   902,    10,    11,    12,    13,   133,   134,
      16,   453,   454,   384,   451,   236,   236,   384,   150,   131,
      25,   436,  -287,   912,  -327,   130,   119,   121,   291,   131,
     452,   455,   727,  -286,  -328,   174,   442,   690,   728,   175,
     284,   284,   151,   175,   179,   384,   234,   745,   274,   453,
     454,   669,   287,   288,   924,   700,   421,   422,   482,   284,
     119,   121,  -331,   136,   137,   596,   456,   457,   544,   455,
      42,   284,   785,   692,   920,   398,   395,   237,   400,  -332,
     238,   956,   404,   405,   399,   407,   408,   409,   410,   411,
     412,   413,   414,   415,   416,   417,   418,   419,   420,   118,
     509,   693,  -288,   423,   456,   457,   746,   119,   181,   286,
     964,   736,   237,   237,   458,   238,   449,  -330,   452,  -289,
     423,   802,   510,   930,   945,   547,   754,   946,  -329,  -276,
     397,   947,  -327,   397,   813,  -331,   182,   453,   454,  -328,
     384,   462,   244,  -332,   183,   111,   469,   771,   469,   503,
     504,   184,   484,   185,   505,   506,  -330,   455,   452,   272,
     273,   140,   479,   469,   112,   113,   550,  -329,   395,   962,
     507,   462,  -285,   384,  -331,   433,   131,   453,   454,  -284,
     133,   134,  -332,   175,   114,   186,   977,   187,   497,   497,
     894,   982,   456,   457,   188,   245,   464,   455,   286,   286,
     141,   888,   189,   165,   260,   806,   849,   633,   634,   635,
     636,   637,   638,   190,   705,   208,   707,   286,   209,   115,
     116,   446,   166,   167,   863,   447,   486,   191,   192,   286,
     918,   384,   456,   457,   246,   136,   137,   193,   657,   194,
     656,   569,   168,   261,   639,   564,   565,   566,   195,   278,
     196,   197,   384,   384,   384,   384,   384,   198,   117,   199,
     200,   698,   651,   201,   202,   738,    24,   284,   279,   280,
     864,   248,   250,   218,   142,  -285,  -284,   169,   170,   263,
     697,   266,   941,   590,   591,   269,  -285,   909,   281,  -285,
     469,  -285,   176,  -285,   290,   423,   271,   515,   516,   517,
    -287,   614,   520,  -287,   275,  -287,   289,  -287,   276,  -327,
     384,   111,   437,   133,   134,  -330,   171,   606,  -329,  -328,
     387,  -331,   218,   282,   283,  -332,  -276,   384,   448,   471,
     112,   113,   480,   291,   661,   662,   663,   387,   933,   384,
     384,   494,   748,   495,   290,   774,   775,   950,   752,   502,
     114,   493,   513,   514,   557,   954,   284,   518,   532,   539,
     284,   284,   284,   133,   134,   570,   536,   747,   136,   137,
     236,   519,   686,   521,   522,   541,   479,   523,   559,   284,
     557,   524,   525,   291,   526,   115,   116,   215,   588,   588,
     132,   713,   714,   527,   593,   717,   718,   719,   720,   721,
     722,   723,   724,   725,   726,   972,   216,   217,   528,   133,
     134,   529,   290,   530,   531,   218,   866,   867,   136,   137,
     533,   534,   538,   560,   290,   286,   219,   252,   537,   135,
     625,   133,   134,  -286,   569,   562,  -286,   549,  -286,   384,
    -286,   572,   563,   133,   134,   571,   253,   254,   573,   387,
     236,   291,   469,   574,   575,   868,   462,   576,  -224,   583,
     284,   222,   223,   291,   136,   137,   255,   237,   585,   584,
     238,   479,   685,  -284,    30,   602,  -284,   592,  -284,   462,
    -284,   594,   588,   595,   866,   867,   136,   137,   603,   608,
     609,   610,   290,   927,   613,   790,   220,   221,   136,   137,
     626,   256,   257,   384,   628,   711,   629,   627,   906,   278,
     630,   133,   134,   387,   286,  -281,   872,   652,   286,   286,
     286,   290,   653,   868,   649,   664,   691,   872,   279,   280,
     687,   291,   688,   708,   215,   686,   730,   286,   716,  -288,
     133,   134,  -288,   917,  -288,   735,  -288,   237,   281,   744,
     238,   686,   557,   216,   217,   740,   769,   469,   741,   750,
     291,   686,   218,   753,   292,   293,   136,   137,   782,   784,
     799,   852,   786,   219,   631,   632,   633,   634,   635,   636,
     637,   638,  -289,   282,   283,  -289,   951,  -289,   789,  -289,
     791,   792,   917,   557,   770,   136,   137,   793,   497,   497,
     794,   795,   781,   796,   781,   893,   220,   221,   222,   223,
     787,   800,   384,   639,   797,   812,   872,   798,   286,   801,
     817,   816,   387,   631,   632,   633,   634,   635,   636,   637,
     638,   814,   840,   841,   842,   685,   818,   858,   873,   843,
     844,   874,   384,   876,   875,   917,   882,   462,   878,   903,
     883,   685,   884,   880,   855,   886,   889,   686,   891,   857,
     907,   685,   639,   908,   910,   919,   928,   931,   938,   913,
     932,   934,   872,   935,   936,   926,   262,   940,   944,   937,
     961,   963,   384,   967,  -386,   640,   204,   641,   970,   969,
     973,   980,   387,   687,   642,   643,   983,   958,   749,   984,
     845,   914,   915,   916,   150,   949,   848,   384,   772,   687,
     744,   459,   965,   942,   892,   895,   896,   922,   783,   687,
     384,   384,   899,   119,   121,   462,   462,   854,   151,   981,
     885,   387,   904,   557,   640,   971,   243,   242,   804,   430,
     856,     0,   450,   642,   643,   462,   290,     0,     0,     0,
       0,   233,   904,   952,   953,   487,     0,   685,     0,     0,
     252,     0,     0,   959,   960,   133,   134,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   253,
     254,     0,     0,     0,     0,   291,     0,     0,     0,    26,
      27,     0,     0,   557,   423,   488,   895,     0,     0,   255,
     423,   557,     0,   462,   119,     0,     0,     0,     0,     0,
     957,     0,     0,     0,     0,   687,     0,     0,   220,   221,
     136,   137,     0,     0,     0,   756,   757,   781,   758,   759,
     760,   761,   762,   763,   256,   257,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,   423,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,    26,
      27,     0,   322,     0,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
     465,   365,     0,   366,   466,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
       0,   382,   383,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,    26,    27,
       0,   322,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,   465,
     365,   475,   366,     0,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    26,    27,     0,
     322,     0,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,   465,   365,
       0,   366,   481,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,     0,   382,
     383,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,    26,    27,     0,   322,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,   465,   365,     0,
     366,   501,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,     0,   382,   383,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,    26,    27,     0,   322,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,     0,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,   465,   365,   508,   366,
       0,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,     0,   382,   383,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,    26,    27,     0,   322,     0,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,   465,   365,     0,   366,   535,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,     0,   382,   383,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,    26,    27,     0,   322,     0,   323,   324,
     325,   326,   327,   328,   329,   330,   331,     0,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,   465,   365,     0,   366,   579,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,     0,   382,   383,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,    26,    27,     0,   322,     0,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,   465,   365,   597,   366,     0,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,     0,   382,   383,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,    26,    27,     0,   322,     0,   323,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,   465,   365,   598,   366,     0,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,     0,   382,   383,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
      26,    27,     0,   322,     0,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,   465,   365,   599,   366,     0,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,     0,   382,   383,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,    26,
      27,     0,   322,     0,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
     465,   365,     0,   366,   600,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
       0,   382,   383,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,    26,    27,
       0,   322,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,   465,
     365,     0,   366,     0,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   601,
     382,   383,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    26,    27,     0,
     322,     0,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,   465,   365,
       0,   366,   702,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,     0,   382,
     383,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,    26,    27,     0,   322,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,   465,   365,     0,
     366,   703,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,     0,   382,   383,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,    26,    27,     0,   322,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,     0,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,   465,   365,   943,   366,
       0,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,     0,   382,   383,   298,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,    26,    27,     0,   322,     0,   323,
     324,   325,   326,   327,   328,   329,   330,   331,     0,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    74,     0,   465,   365,   974,   366,     0,
     367,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,     0,   382,   383,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,    26,    27,     0,   322,     0,   323,   324,
     325,   326,   327,   328,   329,   330,   331,     0,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    74,     0,   465,   365,     0,   366,   978,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,     0,   382,   383,   298,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,    26,    27,     0,   322,     0,   323,   324,   325,
     326,   327,   328,   329,   330,   331,     0,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    74,     0,   364,   365,     0,   366,     0,   367,   368,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,     0,   382,   383,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,    26,    27,     0,   322,     0,   323,   324,   325,   326,
     327,   328,   329,   330,   331,     0,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      74,     0,   658,   365,     0,   366,     0,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,     0,   382,   383,   298,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
      26,    27,     0,   322,     0,   323,   324,   325,   326,   327,
     328,   329,   330,   331,     0,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    74,
       0,   689,   365,     0,   366,     0,   367,   368,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,     0,   382,   383,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,    26,
      27,     0,   322,     0,   323,   324,   325,   326,   327,   328,
     329,   330,   331,     0,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    74,     0,
     767,   365,     0,   366,     0,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
       0,   382,   383,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,    26,    27,
       0,   322,     0,   323,   324,   325,   326,   327,   328,   329,
     330,   331,     0,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    74,     0,   859,
     365,     0,   366,     0,   367,   368,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,     0,
     382,   383,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,    26,    27,     0,
     322,     0,   323,   324,   325,   326,   327,   328,   329,   330,
     331,     0,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    74,     0,   921,   365,
       0,   366,     0,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,     0,   382,
     383,   298,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,    26,    27,     0,   322,
       0,   323,   324,   325,   326,   327,   328,   329,   330,   331,
       0,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    74,     0,     0,   365,   966,
     366,     0,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,     0,   382,   383,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,    26,    27,     0,   322,     0,
     323,   324,   325,   326,   327,   328,   329,   330,   331,     0,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    74,     0,   979,   365,     0,   366,
       0,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,     0,   382,   383,   819,
     820,   821,   822,   823,   824,   825,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   826,   827,    21,    22,   828,     0,
      24,     0,     0,    25,    26,    27,   829,   830,    29,    30,
      31,    32,     0,    34,   831,    36,   146,    38,   832,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   833,
     834,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,   835,   836,   900,   820,     0,     0,
       0,   824,   825,     0,     0,     0,     0,   837,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   826,   827,   125,   126,   290,     0,    24,     0,     0,
      25,    26,    27,     0,   830,    29,     0,    31,     0,     0,
       0,   831,   145,   146,   133,   134,     0,     0,     0,     0,
       0,     0,     0,   218,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   291,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   833,   834,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,     0,
     122,   123,     0,     0,     0,   955,   825,   220,   221,   136,
     137,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   826,   827,   125,   126,     0,
       0,    24,     0,     0,   837,    26,    27,     0,   830,    29,
       0,    31,     0,     0,     0,   831,   145,   146,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     833,   834,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,     0,   122,   123,     0,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   125,   126,     0,     0,    24,     0,     0,   837,    26,
      27,     0,   144,    29,     0,    31,     0,     0,     0,   127,
     145,   146,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,     0,   122,   123,
       0,     0,     0,     0,   825,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   826,   827,   125,   126,     0,     0,    24,
       0,     0,   897,    26,    27,     0,     0,     0,     0,    31,
       0,     0,     0,   831,   145,     0,     0,     0,     0,     0,
       0,     0,     0,   670,     0,   671,   672,   673,     0,   674,
     675,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   216,   217,     0,     0,     0,     0,   833,   834,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,   676,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   123,     0,     0,     0,
       0,   124,     0,     0,     0,     0,   905,   222,   223,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   125,   126,     0,     0,    24,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    31,     0,     0,     0,
     127,     0,     0,     0,   677,     0,     0,     0,     0,     0,
       0,     0,     0,   678,   679,   680,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     4,     5,     0,     0,     0,     6,     7,     0,     0,
       0,     0,     0,     0,   394,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,     0,    24,     0,     0,    25,    26,    27,     0,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,     0,    75,   203,     5,
       0,     0,     0,     6,   124,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   125,   126,     0,     0,    24,
       0,     0,    25,    26,    27,     0,   144,    29,     0,    31,
       0,     0,     0,   127,   145,   146,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,   122,   123,     0,     0,     0,     0,   124,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   125,   126,
       0,     0,    24,     0,     0,     0,    26,    27,     0,   144,
      29,     0,    31,     0,     0,     0,   127,   145,   146,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,   122,   123,     0,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   125,   126,     0,     0,    24,     0,     0,     0,    26,
      27,     0,     0,     0,     0,    31,     0,     0,     0,   127,
       0,     0,   776,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     777,     0,     0,     0,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,   122,   123,     0,
       0,     0,     0,   124,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   125,   126,     0,     0,    24,     0,
       0,     0,    26,    27,     0,     0,     0,     0,    31,     0,
       0,     0,   127,   145,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
     156,   157,     0,     0,     0,     0,   124,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,    24,     0,     0,     0,    26,    27,     0,     0,     0,
       0,    31,     0,     0,     0,   127,     0,     0,   158,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   122,   123,     0,     0,     0,     0,   124,
     178,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     125,   126,     0,     0,    24,   122,   123,     0,    26,    27,
       0,   124,   270,     0,    31,     0,     0,     0,   127,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   125,   126,     0,     0,    24,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    31,     0,     0,     0,
     127,     0,     0,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,   122,   123,
       0,     0,     0,     0,   124,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   125,   126,     0,     0,    24,
     122,   123,     0,    26,    27,     0,   124,     0,     0,    31,
       0,     0,     0,   127,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   125,   126,     0,
       0,     0,     0,     0,     0,    26,    27,     0,     0,     0,
       0,    31,     0,     0,     0,   127,     0,     0,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,   122,   123,     0,     0,     0,     0,   252,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   253,   254,
     125,   126,     0,     0,     0,     0,     0,     0,    26,    27,
       0,     0,     0,     0,     0,     0,     0,     0,   255,   425,
     426,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,     0,     0,     0,     0,     0,
       0,     0,     0,   256,   257,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   427,     0,     0,     0,
     367,   368,     0,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   428,     0,   382
};

static const yytype_int16 yycheck[] =
{
       4,     5,    28,    98,     6,   128,     3,    87,     4,     5,
     164,     3,   224,    32,    32,    32,   294,    21,    22,   130,
      32,    32,   173,   245,   466,   155,    28,    29,    25,   277,
      32,   142,   173,   251,   484,    37,   293,   435,   648,   481,
      89,    90,    91,    92,   572,   553,   491,   701,   733,   734,
     732,   155,   739,   275,     3,   231,   480,   394,   250,   120,
     171,     9,   493,   174,   119,   781,   829,   605,   755,   177,
     120,     0,   127,   265,    34,    80,    36,   138,   765,    28,
      35,    87,    80,   124,    33,    80,   849,    41,   138,     9,
      87,    95,     9,    80,    96,    80,   247,    51,   209,    80,
      48,   224,    17,   829,    19,    20,    21,    22,    28,    29,
      25,    28,    29,   264,   244,    35,    35,   268,   144,   124,
      37,   229,   120,   849,   119,   120,   122,   123,    48,   124,
       9,    48,   121,   120,   119,   120,   231,   579,   127,   124,
     244,   245,   144,   124,   146,   296,    95,   655,   150,    28,
      29,   575,   156,   157,   870,   586,   205,   206,   269,   263,
     156,   157,    80,    83,    84,   502,    83,    84,   128,    48,
      85,   275,   710,    51,   861,   181,   178,   132,   182,    80,
     135,   907,   186,   187,   181,   189,   190,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     392,    79,   120,   207,    83,    84,   656,   203,   120,   155,
     926,   120,   132,   132,   131,   135,   135,    80,     9,   120,
     224,   729,   119,   877,   119,   119,   668,   122,    80,   138,
     127,   126,    80,   127,   742,    80,   120,    28,    29,    80,
     391,   245,    80,    80,   120,     9,   248,   697,   250,   360,
     361,   120,   131,   120,   365,   366,   119,    48,     9,   148,
     149,     9,   266,   265,    28,    29,   442,   119,   270,   923,
     381,   275,   120,   424,   119,   224,   124,    28,    29,   120,
      28,    29,   119,   124,    48,   120,   968,   120,   292,   293,
     818,   976,    83,    84,   120,    80,   245,    48,   244,   245,
      48,   809,   120,     9,     9,     9,   751,    11,    12,    13,
      14,    15,    16,   120,   592,   119,   594,   263,   122,    83,
      84,   120,    28,    29,   766,   124,   275,   120,   120,   275,
     858,   482,    83,    84,   119,    83,    84,   120,   560,   120,
     131,   471,    48,    48,    48,     5,     6,     7,   120,     9,
     120,   120,   503,   504,   505,   506,   507,   120,   122,   120,
     120,   583,   554,   120,   120,   975,    34,   471,    28,    29,
     768,   124,   124,    37,   122,   122,   122,    83,    84,    80,
     131,   122,   890,   494,   495,   122,   119,   837,    48,   122,
     392,   124,    41,   126,     9,   399,   120,   401,   402,   403,
     119,   521,   406,   122,    80,   124,   119,   126,   125,    80,
     561,     9,   128,    28,    29,    80,   122,   512,    80,    80,
     561,    80,    37,    83,    84,    80,   138,   578,    80,   126,
      28,    29,   122,    48,   564,   565,   566,   578,   880,   590,
     591,   122,   660,   122,     9,   702,   703,   897,   666,   122,
      48,   699,   121,   127,   458,   905,   560,   127,   121,   139,
     564,   565,   566,    28,    29,   122,   138,   659,    83,    84,
      35,   127,   576,   127,   127,    80,   480,   127,   120,   583,
     484,   127,   127,    48,   127,    83,    84,     9,   492,   493,
       9,   611,   612,   127,   498,   615,   616,   617,   618,   619,
     620,   621,   622,   623,   624,   947,    28,    29,   127,    28,
      29,   127,     9,   127,   127,    37,    81,    82,    83,    84,
     121,   127,   121,    80,     9,   471,    48,     9,   138,    48,
     534,    28,    29,   119,   664,   127,   122,   121,   124,   690,
     126,   122,   125,    28,    29,   125,    28,    29,   125,   690,
      35,    48,   554,   123,   127,   120,   560,   128,   121,    80,
     664,    83,    84,    48,    83,    84,    48,   132,   127,   125,
     135,   575,   576,   119,    43,   125,   122,   121,   124,   583,
     126,   121,   586,   119,    81,    82,    83,    84,   123,   127,
     121,   121,     9,   871,   127,   715,    81,    82,    83,    84,
     139,    83,    84,   754,   120,   607,    16,   139,   830,     9,
      16,    28,    29,   754,   560,   138,   770,   120,   564,   565,
     566,     9,   126,   120,   138,   127,   121,   781,    28,    29,
     576,    48,   123,   123,     9,   739,   124,   583,   121,   119,
      28,    29,   122,   855,   124,    10,   126,   132,    48,   653,
     135,   755,   656,    28,    29,   121,   127,   659,   125,   123,
      48,   765,    37,   123,    81,    82,    83,    84,   119,   119,
     127,   751,   121,    48,     9,    10,    11,    12,    13,    14,
      15,    16,   119,    83,    84,   122,   898,   124,   121,   126,
     121,   121,   904,   697,   696,    83,    84,   121,   702,   703,
     121,   121,   704,   121,   706,   816,    81,    82,    83,    84,
     712,   127,   863,    48,   121,   120,   870,   121,   664,   121,
     121,   120,   863,     9,    10,    11,    12,    13,    14,    15,
      16,   127,   751,   751,   751,   739,   122,   122,   119,   751,
     751,   119,   893,   127,   121,   957,    11,   751,   121,   829,
      11,   755,   121,   127,   751,   121,   139,   861,   121,   751,
     120,   765,    48,   120,   126,   121,   119,   119,   127,   849,
     121,   121,   926,   121,   121,   870,   899,   121,   123,   125,
     123,   121,   933,   120,   123,   120,    87,   122,   121,   123,
     121,   119,   933,   739,   129,   130,   119,   908,   664,   121,
     751,   850,   851,   852,   830,   896,   751,   958,   699,   755,
     814,   245,   929,   892,   814,   819,   820,   865,   706,   765,
     971,   972,   824,   819,   820,   829,   830,   751,   830,   975,
     803,   972,   829,   837,   120,   946,   100,    99,   731,   218,
     751,    -1,   240,   129,   130,   849,     9,    -1,    -1,    -1,
      -1,   855,   849,   902,   903,     4,    -1,   861,    -1,    -1,
       9,    -1,    -1,   912,   913,    28,    29,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    38,
      39,    -1,    -1,   897,   898,    44,   900,    -1,    -1,    48,
     904,   905,    -1,   907,   900,    -1,    -1,    -1,    -1,    -1,
     907,    -1,    -1,    -1,    -1,   861,    -1,    -1,    81,    82,
      83,    84,    -1,    -1,    -1,   129,   130,   929,   132,   133,
     134,   135,   136,   137,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,   957,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
     119,   120,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,   141,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
     120,   121,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,   119,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,   119,   120,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,   119,   120,   121,   122,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   119,   120,   121,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,   120,   121,   122,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
     119,   120,    -1,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,   141,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
     120,    -1,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,   123,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,   119,   120,   121,   122,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   117,    -1,   119,   120,   121,   122,    -1,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140,   141,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    -1,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   117,    -1,   119,   120,    -1,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,    -1,   140,   141,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,    39,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   117,    -1,   119,   120,    -1,   122,    -1,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,    -1,   140,   141,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    -1,    41,    -1,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     117,    -1,   119,   120,    -1,   122,    -1,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,    -1,   140,   141,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      38,    39,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,
      -1,   119,   120,    -1,   122,    -1,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,    -1,   140,   141,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    -1,    41,    -1,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,
     119,   120,    -1,   122,    -1,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140,   141,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    38,    39,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,
     120,    -1,   122,    -1,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,    -1,
     140,   141,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    -1,
      41,    -1,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,
      -1,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
     131,   132,   133,   134,   135,   136,   137,   138,    -1,   140,
     141,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,   121,
     122,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    -1,    41,    -1,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   117,    -1,   119,   120,    -1,   122,
      -1,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,   137,   138,    -1,   140,   141,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    -1,
      34,    -1,    -1,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    -1,    47,    48,    49,    50,    51,    52,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,   131,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,     9,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    41,    42,    -1,    44,    -1,    -1,
      -1,    48,    49,    50,    28,    29,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    -1,
       3,     4,    -1,    -1,    -1,     8,     9,    81,    82,    83,
      84,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    -1,   131,    38,    39,    -1,    41,    42,
      -1,    44,    -1,    -1,    -1,    48,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    -1,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    -1,    -1,   131,    38,
      39,    -1,    41,    42,    -1,    44,    -1,    -1,    -1,    48,
      49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      -1,    -1,   131,    38,    39,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     9,    -1,    11,    12,    13,    -1,    15,
      16,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    28,    29,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,   131,    83,    84,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    -1,    -1,   120,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   129,   130,   131,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,   122,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    -1,    34,    -1,    -1,    37,    38,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,    -1,   119,     3,     4,
      -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      -1,    -1,    37,    38,    39,    -1,    41,    42,    -1,    44,
      -1,    -1,    -1,    48,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,    41,
      42,    -1,    44,    -1,    -1,    -1,    48,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,    38,
      39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    48,
      -1,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,     3,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
       3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     3,     4,    -1,    -1,    -1,    -1,     9,
      10,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,     3,     4,    -1,    38,    39,
      -1,     9,    10,    -1,    44,    -1,    -1,    -1,    48,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
       3,     4,    -1,    38,    39,    -1,     9,    -1,    -1,    44,
      -1,    -1,    -1,    48,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     3,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    -1,    38,    39,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    48,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   120,    -1,    -1,    -1,
     124,   125,    -1,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,    -1,   140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   143,     0,   144,     3,     4,     8,     9,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    34,    37,    38,    39,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   119,   145,   146,   147,   149,
     161,   164,   177,   178,   179,   180,   184,   185,   194,   196,
     197,   200,   201,   202,   243,   270,   271,   272,   273,   274,
     275,   277,   283,   284,   288,   289,   290,   291,   294,   308,
     333,     9,    28,    29,    48,    83,    84,   122,   269,   290,
     269,   290,     3,     4,     9,    30,    31,    48,   272,   284,
     120,   124,     9,    28,    29,    48,    83,    84,   165,   269,
       9,    48,   122,   269,    41,    49,    50,   270,   293,   292,
     271,   272,   284,   272,   124,   276,     3,     4,    51,   161,
     164,   177,   178,   179,   272,     9,    28,    29,    48,    83,
      84,   122,   284,   335,   120,   124,    41,    51,    10,   272,
     245,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,     3,   149,   196,   201,   270,   119,   122,
     213,   213,   213,   213,   213,     9,    28,    29,    37,    48,
      81,    82,    83,    84,   198,   205,   207,   210,   214,   244,
     252,   255,   261,   269,   284,   272,    35,   132,   135,   285,
     286,   287,   275,   274,    80,    80,   119,   334,   124,   152,
     124,   150,     9,    28,    29,    48,    83,    84,     9,    48,
       9,    48,   205,    80,   334,   279,   122,   162,   334,   122,
      10,   120,   294,   294,   272,    80,   125,   186,     9,    28,
      29,    48,    83,    84,   277,   282,   283,   269,   269,   119,
       9,    48,    81,    82,   261,   269,   334,   148,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    41,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,   119,   120,   122,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   138,   140,   141,   291,   332,   333,   337,   338,   339,
     340,   334,   278,   245,   122,   272,   119,   127,   196,   270,
     269,   310,   313,   314,   269,   269,   318,   269,   269,   269,
     269,   269,   269,   269,   269,   269,   269,   269,   269,   269,
     269,   213,   213,   269,   334,    53,    54,   120,   138,   331,
     332,   205,   210,   284,   206,   211,   245,   128,   240,   241,
     252,   259,   285,   262,   263,   264,   120,   124,    80,   135,
     287,   282,     9,    28,    29,    48,    83,    84,   131,   202,
     218,   220,   269,   282,   284,   119,   123,   336,   337,   272,
     280,   126,   157,   280,   157,   121,   280,   167,   168,   269,
     122,   123,   334,   203,   131,   218,   284,     4,    44,   187,
     189,   190,   191,   289,   122,   122,   239,   269,   285,   239,
     262,   123,   122,   334,   334,   334,   334,   334,   121,   280,
     119,   143,   246,   121,   127,   269,   269,   269,   127,   127,
     269,   127,   127,   127,   127,   127,   127,   127,   127,   127,
     127,   127,   121,   121,   127,   123,   138,   138,   121,   139,
     208,    80,    34,    36,   128,   212,   212,   119,   242,   121,
     252,   265,   267,   215,   216,   225,   226,   269,   219,   120,
      80,   335,   127,   125,     5,     6,     7,   158,   159,   282,
     122,   125,   122,   125,   123,   127,   128,   167,   335,   123,
     232,   233,   225,    80,   125,   127,   185,   192,   269,   192,
     334,   334,   121,   269,   121,   119,   143,   121,   121,   121,
     123,   139,   125,   123,   247,   248,   285,   309,   127,   121,
     121,   315,   317,   127,   288,   321,   323,   325,   327,   322,
     324,   326,   328,   329,   330,   269,   139,   139,   120,    16,
      16,     9,    10,    11,    12,    13,    14,    15,    16,    48,
     120,   122,   129,   130,   295,   300,   306,   307,   253,   138,
     232,   280,   120,   126,   222,   221,   131,   218,   119,   281,
     153,   282,   282,   282,   127,   154,   151,   154,   166,   167,
       9,    11,    12,    13,    15,    16,    48,   120,   129,   130,
     131,   169,   170,   171,   175,   269,   277,   283,   123,   119,
     335,   121,    51,    79,   234,   236,   237,   131,   218,   188,
     192,   193,   123,   123,   120,   262,   120,   262,   123,   244,
     249,   272,   311,   288,   288,   319,   121,   288,   288,   288,
     288,   288,   288,   288,   288,   288,   288,   121,   127,   209,
     124,   303,   296,   302,   301,    10,   120,   256,   263,   266,
     121,   125,   227,   224,   269,   232,   225,   280,   157,   158,
     123,   155,   157,   123,   335,   174,   129,   130,   132,   133,
     134,   135,   136,   137,   176,   172,   163,   119,   204,   127,
     272,   225,   187,   240,   239,   239,    51,    79,   228,   229,
     231,   272,   119,   228,   119,   244,   121,   272,   316,   121,
     288,   121,   121,   121,   121,   121,   121,   121,   121,   127,
     127,   121,   232,   304,   300,   295,     9,   307,   307,   257,
     171,   268,   120,   232,   127,   223,   120,   121,   122,     3,
       4,     5,     6,     7,     8,     9,    28,    29,    32,    40,
      41,    48,    52,    83,    84,   118,   119,   131,   156,   160,
     161,   164,   177,   178,   179,   180,   181,   182,   184,   185,
     195,   199,   201,   218,   243,   270,   308,   333,   122,   119,
     171,   173,   171,   335,   212,   235,    81,    82,   120,   250,
     254,   260,   261,   119,   119,   121,   127,   250,   121,   312,
     127,   320,    11,    11,   121,   273,   121,   298,   232,   139,
     217,   121,   224,   334,   154,   269,   269,   131,   270,   272,
       3,   182,   199,   201,   270,   131,   218,   120,   120,   225,
     126,   182,   199,   201,   213,   213,   213,   210,   154,   121,
     171,   119,   234,   238,   250,   258,   285,   262,   119,   230,
     240,   119,   121,   335,   121,   121,   121,   125,   127,   297,
     121,   232,   223,   121,   123,   119,   122,   126,   183,   183,
     225,   210,   213,   213,   225,     8,   199,   270,   334,   213,
     213,   123,   240,   121,   250,   229,   121,   120,   299,   123,
     121,   334,   335,   121,   121,   251,   305,   295,   123,   119,
     119,   256,   307,   119,   121
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
#line 919 "vtkParse.y"
    { startSig(); clearTypeId(); clearTemplate(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 936 "vtkParse.y"
    { output_function(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 937 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 938 "vtkParse.y"
    { reject_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 939 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 940 "vtkParse.y"
    { reject_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 941 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 942 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 961 "vtkParse.y"
    { popNamespace(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 968 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
    { end_class(); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 970 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 971 "vtkParse.y"
    { end_class(); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 973 "vtkParse.y"
    { end_class(); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 974 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 975 "vtkParse.y"
    { end_class(); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 978 "vtkParse.y"
    { startSig(); clearTypeId(); clearTemplate(); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 994 "vtkParse.y"
    { output_function(); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 995 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 997 "vtkParse.y"
    { output_function(); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 998 "vtkParse.y"
    { output_function(); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 999 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 1001 "vtkParse.y"
    { output_function(); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 1002 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 1016 "vtkParse.y"
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 1022 "vtkParse.y"
    {access_level = VTK_ACCESS_PUBLIC;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 1023 "vtkParse.y"
    {access_level = VTK_ACCESS_PROTECTED;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 1024 "vtkParse.y"
    {access_level = VTK_ACCESS_PRIVATE;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 1034 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 1035 "vtkParse.y"
    {end_enum();}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 1037 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 1038 "vtkParse.y"
    {end_enum();}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 1045 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 1050 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 1051 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 1052 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(3) - (3)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 1056 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 1057 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(2) - (4)].str)) +
                                  strlen((yyvsp[(4) - (4)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].str));
       }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    {postSig("(");}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 1063 "vtkParse.y"
    {
         postSig(")");
         (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (4)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(3) - (4)].str));
       }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 1070 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 1072 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 1072 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 1073 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 1073 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 1075 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 1075 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 1116 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 1117 "vtkParse.y"
    { postSig("template<");
          clearTypeId(); startTemplate(); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 1119 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 1122 "vtkParse.y"
    { postSig(", "); clearTypeId(); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 1126 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTypes[i] = (yyvsp[(1) - (2)].integer);
               currentTemplate->ArgClasses[i] = vtkstrdup(getTypeId());
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 1139 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 1140 "vtkParse.y"
    {
               int i;
               TemplateArgs *newTemplate = currentTemplate;
               popTemplate();
               i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTemplates[i] = newTemplate;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 1150 "vtkParse.y"
    {postSig("class ");}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 1151 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 1153 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 1169 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 1186 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 1189 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 1196 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 1200 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 1213 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1217 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1221 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1235 "vtkParse.y"
    { postSig(")"); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
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

  case 186:

/* Line 1455 of yacc.c  */
#line 1250 "vtkParse.y"
    { postSig(")"); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
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

  case 188:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { postSig(")"); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
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

  case 196:

/* Line 1455 of yacc.c  */
#line 1303 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1311 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1314 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1323 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1326 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    { postSig("("); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
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

  case 214:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    { postSig("(");}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1365 "vtkParse.y"
    { postSig("..."); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1366 "vtkParse.y"
    { postSig(", "); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    { postSig("void (*func)(void *) "); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1373 "vtkParse.y"
    {clearTypeId();}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1376 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1378 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1380 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1384 "vtkParse.y"
    { markSig(); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int datatype = (yyvsp[(2) - (3)].integer);
      int extra = (yyvsp[(3) - (3)].integer);
      char *cp;

      datatype = handle_complex_type(
        datatype, extra, currentFunction->ArgDimensions[i],
        &currentFunction->ArgFunctions[i], copySig());

      cp = currentFunction->ArgDimensions[i][0];
      if (cp)
        {
        while (*cp != '\0' && *cp >= '0' && *cp <= '9') { cp++; }
        if (*cp == '\0')
          {
          cp = currentFunction->ArgDimensions[i][0];
          currentFunction->ArgCounts[i] = (int)atol(cp);
          }
        }

      currentFunction->ArgTypes[i] = datatype;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1423 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int j;
      FunctionInfo *func;

      markSig();
      postSig("void (*");
      postSig((yyvsp[(1) - (1)].str));
      postSig(")(void *) ");
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
      if ((yyvsp[(1) - (1)].str)[0] != '\0')
        {
        currentFunction->ArgNames[i] = vtkstrdup((yyvsp[(1) - (1)].str));
        }

      func = (FunctionInfo *)malloc(sizeof(FunctionInfo));
      InitFunction(func);
      func->NumberOfArguments = 1;
      func->ArgTypes[0] = VTK_PARSE_VOID_PTR;
      func->Signature = vtkstrdup(copySig());
      j = strlen(func->Signature);
      while (j > 0 && func->Signature[j-1] == ' ')
        {
        func->Signature[j-1] = '\0';
        }

      currentFunction->ArgFunctions[i] = func;
    }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1455 "vtkParse.y"
    {clearVarValue();}
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1457 "vtkParse.y"
    { postSig("="); clearVarValue();}
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1458 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
    {
       int type = getStorageType();
       if (getVarValue() && ((type & VTK_PARSE_CONST) != 0) &&
           ((type & VTK_PARSE_INDIRECT) == 0) && getArrayNDims() == 0)
         {
         add_constant(getVarName(), getVarValue(),
                       (type & VTK_PARSE_UNQUALIFIED_TYPE), getTypeId(), 0);
         }
     }
    break;

  case 246:

/* Line 1455 of yacc.c  */
#line 1480 "vtkParse.y"
    {postSig(", ");}
    break;

  case 248:

/* Line 1455 of yacc.c  */
#line 1483 "vtkParse.y"
    { setStorageTypeIndirection(0); }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1484 "vtkParse.y"
    { setStorageTypeIndirection((yyvsp[(1) - (1)].integer)); }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1488 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1489 "vtkParse.y"
    { postSig(")"); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1491 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (5)].integer),
                       add_indirection((yyvsp[(2) - (5)].integer), (yyvsp[(5) - (5)].integer))); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1495 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1496 "vtkParse.y"
    { postSig(")"); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1498 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (5)].integer),
                       add_indirection((yyvsp[(2) - (5)].integer), (yyvsp[(5) - (5)].integer))); }
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1501 "vtkParse.y"
    { postSig("("); (yyval.integer) = 0; }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1502 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1504 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1507 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1509 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1512 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1513 "vtkParse.y"
    { pushFunction(); postSig("("); }
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1514 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_FUNCTION; postSig(")"); popFunction(); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1515 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1518 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1520 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1523 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1525 "vtkParse.y"
    { (yyval.integer) = add_indirection((yyvsp[(1) - (2)].integer), (yyvsp[(2) - (2)].integer));}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1527 "vtkParse.y"
    {clearVarName(); chopSig();}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1529 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1531 "vtkParse.y"
    {clearArray();}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1533 "vtkParse.y"
    {clearArray();}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1535 "vtkParse.y"
    {postSig("[");}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1535 "vtkParse.y"
    {postSig("]");}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1539 "vtkParse.y"
    {pushArraySize("");}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1540 "vtkParse.y"
    {pushArraySize((yyvsp[(1) - (1)].str));}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1546 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1547 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1548 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1549 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1550 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1551 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1558 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer); setStorageType((yyval.integer));}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1559 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1560 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1562 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(3) - (3)].integer); setStorageType((yyval.integer));}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1563 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer); setStorageType((yyval.integer));}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1564 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));
      setStorageType((yyval.integer));}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1566 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(2) - (3)].integer) | (yyvsp[(3) - (3)].integer));
      setStorageType((yyval.integer));}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1570 "vtkParse.y"
    {postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1571 "vtkParse.y"
    {postSig("static "); (yyval.integer) = VTK_PARSE_STATIC; }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1573 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1574 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1576 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1577 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1578 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1580 "vtkParse.y"
    {postSig("const ");}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1584 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1586 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1587 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1588 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1591 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1592 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1593 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1594 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1596 "vtkParse.y"
    {postSig(", ");}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1598 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1599 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1600 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1601 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1602 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1603 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1608 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1614 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1636 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1637 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1638 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1643 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    {
       int n;
       n = (((yyvsp[(1) - (2)].integer) << 2) | (yyvsp[(2) - (2)].integer));
       if ((n & VTK_PARSE_INDIRECT) != n)
         {
         n = VTK_PARSE_BAD_INDIRECT;
         }
      (yyval.integer) = n;
    }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1656 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1657 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1660 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1661 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1662 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1663 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1664 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1665 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1666 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1669 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1670 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1673 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1674 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1675 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1676 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1677 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1678 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1681 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1682 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1683 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1684 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1685 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1686 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1687 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1688 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1689 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1690 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1691 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1692 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1693 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1694 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1695 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1696 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1696 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1697 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1698 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1699 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1702 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1703 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1704 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1705 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1706 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1707 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1708 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1714 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1715 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1716 "vtkParse.y"
    {
          char *cp;
          postSig("}");
          cp = (char *)malloc(strlen((yyvsp[(3) - (6)].str)) + strlen((yyvsp[(4) - (6)].str)) + 5);
          sprintf(cp, "{ %s%s }", (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str));
          (yyval.str) = cp;
        }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1726 "vtkParse.y"
    {(yyval.str) = vtkstrdup("");}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1727 "vtkParse.y"
    { postSig(", "); }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1728 "vtkParse.y"
    {
          char *cp;
          cp = (char *)malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(4) - (4)].str)) + 3);
          sprintf(cp, "%s, %s", (yyvsp[(1) - (4)].str), (yyvsp[(4) - (4)].str));
          (yyval.str) = cp;
        }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1735 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1736 "vtkParse.y"
    {postSig("+");}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1736 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1737 "vtkParse.y"
    {postSig("-");}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1737 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1740 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1741 "vtkParse.y"
    {postSig("(");}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1741 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1742 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1743 "vtkParse.y"
    {postSig("<(");}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1744 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1751 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1752 "vtkParse.y"
    {
                int i = strlen((yyvsp[(1) - (2)].str));
                char *cp = (char *)malloc(i + strlen((yyvsp[(2) - (2)].str)) + 1);
                strcpy(cp, (yyvsp[(1) - (2)].str));
                strcpy(&cp[i], (yyvsp[(2) - (2)].str));
                (yyval.str) = cp; }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1759 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1760 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1761 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1762 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1763 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1764 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1765 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1767 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1775 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1776 "vtkParse.y"
    {
   postSig("a);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (7)].integer);
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1789 "vtkParse.y"
    {postSig("Get");}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1790 "vtkParse.y"
    {markSig();}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1790 "vtkParse.y"
    {swapSig();}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1791 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = (yyvsp[(7) - (9)].integer);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1803 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1804 "vtkParse.y"
    {
   postSig("(char *);");
   sprintf(temps,"Set%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_CHAR_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup("char");
   output_function();
   }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1817 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1818 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (5)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_CHAR_PTR;
   currentFunction->ReturnClass = vtkstrdup("char");
   output_function();
   }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1831 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1831 "vtkParse.y"
    {closeSig();}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1833 "vtkParse.y"
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
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (yyvsp[(6) - (10)].integer);
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
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
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
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
   currentFunction->ReturnType = (yyvsp[(6) - (10)].integer);
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   free(local);
   }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1877 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1878 "vtkParse.y"
    {
   postSig("*);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 1;
   output_function();
   }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1892 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1893 "vtkParse.y"
    {markSig();}
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1893 "vtkParse.y"
    {swapSig();}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1894 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1907 "vtkParse.y"
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
   output_function();
   }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1932 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1933 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1937 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1938 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1942 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1943 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1947 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1948 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1952 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1953 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1957 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1958 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1962 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1963 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1967 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1968 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1972 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1974 "vtkParse.y"
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
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer));
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = atol((yyvsp[(8) - (9)].str));
   output_function();
   free(local);
   }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1993 "vtkParse.y"
    {startSig(); markSig();}
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1995 "vtkParse.y"
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
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_POINTER | (yyvsp[(6) - (9)].integer));
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   currentFunction->HaveHint = 1;
   currentFunction->HintSize = atol((yyvsp[(8) - (9)].str));
   output_function();
   free(local);
   }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2015 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
     currentFunction->ReturnClass = "vtkCoordinate";
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
     currentFunction->NumberOfArguments = 2;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[1] = vtkstrdup("double");
     currentFunction->ArgCounts[1] = 0;
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
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 2;
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
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ReturnClass = vtkstrdup("double");
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 2;
     output_function();
   }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2081 "vtkParse.y"
    {
     sprintf(currentFunction->Signature,"vtkCoordinate *Get%sCoordinate();",
             (yyvsp[(3) - (4)].str));

     sprintf(temps,"Get%sCoordinate",(yyvsp[(3) - (4)].str));
     currentFunction->Name = vtkstrdup(temps);
     if (HaveComment)
       {
       currentFunction->Comment = vtkstrdup(CommentText);
       }
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
     currentFunction->ReturnClass = "vtkCoordinate";
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
     currentFunction->NumberOfArguments = 3;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 0;
     currentFunction->ArgTypes[1] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[1] = vtkstrdup("double");
     currentFunction->ArgCounts[1] = 0;
     currentFunction->ArgTypes[2] = VTK_PARSE_DOUBLE;
     currentFunction->ArgClasses[2] = vtkstrdup("double");
     currentFunction->ArgCounts[2] = 0;
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
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ArgClasses[0] = vtkstrdup("double");
     currentFunction->ArgCounts[0] = 3;
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
     currentFunction->NumberOfArguments = 0;
     currentFunction->ReturnType = VTK_PARSE_DOUBLE_PTR;
     currentFunction->ReturnClass = vtkstrdup("double");
     currentFunction->HaveHint = 1;
     currentFunction->HintSize = 3;
     output_function();
   }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2151 "vtkParse.y"
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
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ReturnClass = vtkstrdup("char");
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
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgClasses[0] = vtkstrdup("char");
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
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
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
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
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
     output_function();
     }
   }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2218 "vtkParse.y"
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
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ReturnClass = vtkstrdup("char");
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
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR);
   currentFunction->ArgCounts[0] = 0;
   currentFunction->ReturnType = VTK_PARSE_INT;
   currentFunction->ReturnClass = vtkstrdup("int");
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
   currentFunction->NumberOfArguments = 0;
   currentFunction->ReturnType = VTK_PARSE_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
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
     currentFunction->NumberOfArguments = 1;
     currentFunction->ArgTypes[0] = VTK_PARSE_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC|VTK_PARSE_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
     output_function();
     }
   }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2291 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2292 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2293 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2294 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2297 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2298 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2298 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2299 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2299 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2300 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2300 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2301 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2301 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2302 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2302 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2303 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2303 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2304 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2305 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2306 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2307 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2308 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2309 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2310 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2311 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2312 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2313 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2314 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 484:

/* Line 1455 of yacc.c  */
#line 2315 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 485:

/* Line 1455 of yacc.c  */
#line 2316 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 486:

/* Line 1455 of yacc.c  */
#line 2317 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 487:

/* Line 1455 of yacc.c  */
#line 2318 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 488:

/* Line 1455 of yacc.c  */
#line 2319 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 489:

/* Line 1455 of yacc.c  */
#line 2320 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 490:

/* Line 1455 of yacc.c  */
#line 2321 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 491:

/* Line 1455 of yacc.c  */
#line 2322 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 492:

/* Line 1455 of yacc.c  */
#line 2323 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 493:

/* Line 1455 of yacc.c  */
#line 2324 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 494:

/* Line 1455 of yacc.c  */
#line 2325 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 495:

/* Line 1455 of yacc.c  */
#line 2326 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 496:

/* Line 1455 of yacc.c  */
#line 2327 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 497:

/* Line 1455 of yacc.c  */
#line 2328 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 498:

/* Line 1455 of yacc.c  */
#line 2329 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 499:

/* Line 1455 of yacc.c  */
#line 2330 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 500:

/* Line 1455 of yacc.c  */
#line 2337 "vtkParse.y"
    {
  static char name[256];
  static char value[256];
  int i = 0;
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
#line 7464 "vtkParse.tab.c"
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
#line 2377 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitTemplate(TemplateArgs *args)
{
  int i;

  args->NumberOfArguments = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    args->ArgTemplates[i] = NULL;
    args->ArgTypes[i] = 0;
    args->ArgClasses[i] = NULL;
    args->ArgNames[i] = NULL;
    args->ArgValues[i] = NULL;
    }
}

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i, j;

  func->ItemType = VTK_FUNCTION_INFO;
  func->Access = VTK_ACCESS_PUBLIC;
  func->Name = NULL;
  func->Comment = NULL;
  func->Signature = NULL;
  func->Template = NULL;
  func->NumberOfArguments = 0;
  func->ReturnType = VTK_PARSE_VOID;
  func->ReturnClass = NULL;
  func->HaveHint = 0;
  func->HintSize = 0;
  func->IsStatic = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsPublic = 0;
  func->IsOperator = 0;
  func->IsVariadic = 0;
  func->IsConst = 0;
  func->IsLegacy = 0;
  func->ArrayFailure = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    func->ArgTypes[i] = 0;
    func->ArgClasses[i] = 0;
    func->ArgCounts[i] = 0;
    func->ArgNames[i] = 0;
    for (j = 0; j < MAX_ARRAY_DIMS; j++)
      {
      func->ArgDimensions[i][j] = NULL;
      }
    func->ArgValues[i] = 0;
    func->ArgFunctions[i] = NULL;
    }
}

/* initialize the structure */
void InitConstant(ConstantInfo *con)
{
  con->ItemType = VTK_CONSTANT_INFO;
  con->Access = VTK_ACCESS_PUBLIC;
  con->Name = NULL;
  con->Comment = NULL;
  con->Value = NULL;
  con->Type = 0;
  con->TypeClass = NULL;
  con->IsEnum = 0;
}

/* initialize the structure */
void InitEnum(EnumInfo *item)
{
  item->ItemType = VTK_ENUM_INFO;
  item->Access = VTK_ACCESS_PUBLIC;
  item->Name = NULL;
  item->Comment = NULL;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
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
void InitNamespace(NamespaceInfo *name_info)
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

void InitFile(FileInfo *file_info)
{
  /* file info */
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;

  file_info->Contents = NULL;
}

void FreeNamespace(NamespaceInfo *namespace_info)
{
  /* big memory leak here, strings aren't freed */
  ClassInfo *class_info;
  FunctionInfo *func_info;
  ConstantInfo *const_info;
  EnumInfo *enum_info;

  int i, j, n, m;

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
  InitClass(currentClass);
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

  InitFunction(currentFunction);
}

/* reject the class */
void reject_class(const char *classname, int is_struct)
{
  static ClassInfo static_class;

  currentClass = &static_class;
  currentClass->Name = vtkstrdup(classname);
  InitClass(currentClass);

  access_level = VTK_ACCESS_PRIVATE;
  if (is_struct)
    {
    access_level = VTK_ACCESS_PUBLIC;
    }

  InitFunction(currentFunction);
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

  currentEnumName = NULL;
  currentEnumValue = NULL;
  if (name)
    {
    currentEnumName = text;
    strcpy(currentEnumName, name);
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    InitEnum(item);
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
  int i, j;

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
      j = atol(&currentEnumValue[i]);
      sprintf(&currentEnumValue[i], "%i", j+1);
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
                  int type, const char *typeclass, int flag)
{
  ConstantInfo *con = (ConstantInfo *)malloc(sizeof(ConstantInfo));
  InitConstant(con);
  con->Name = vtkstrdup(name);
  con->Value = vtkstrdup(value);
  con->Type = type;
  if (typeclass)
    {
    con->TypeClass = vtkstrdup(typeclass);
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
  int i, j;
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

/* deal with types that include function pointers or arrays */
int handle_complex_type(
  int datatype, int extra, char *array_info[],
  FunctionInfo **func_ptr, const char *func_sig)
{
  FunctionInfo *argFunction = 0;
  int j, n;

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
    /* the current type becomes the function return type */
    argFunction = getFunction();
    argFunction->ReturnType = datatype;
    argFunction->ReturnClass = vtkstrdup(getTypeId());
    argFunction->Signature = vtkstrdup(func_sig);
    *func_ptr = argFunction;

    /* the arg type is whatever was inside the parentheses */
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

  /* copy contents of all brackets to the ArgDimensions */
  n = getArrayNDims();
  for (j = 0; j < n; j++)
    {
    array_info[j] = getArraySize(j);
    }
  clearArray();

  return datatype;
}

/* reject the function, do not output it */
void reject_function()
{
  InitFunction(currentFunction);
}

/* a simple routine that updates a few variables */
void output_function()
{
  int i, j, match;

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

  /* a void argument is the same as no arguements */
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
      && (currentFunction->ArgTypes[0] == VTK_PARSE_FUNCTION))
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

  /* also legacy: tell old wrappers that multi-dimensional arrays are bad */
  for (i = 0; i < currentFunction->NumberOfArguments; i++)
    {
    if ((currentFunction->ArgTypes[i] & VTK_PARSE_POINTER_MASK) != 0)
      {
      if (((currentFunction->ArgTypes[i] & VTK_PARSE_BASE_TYPE) ==
           VTK_PARSE_FUNCTION) ||
          ((currentFunction->ArgTypes[i] & VTK_PARSE_INDIRECT) ==
           VTK_PARSE_BAD_INDIRECT) ||
          ((currentFunction->ArgTypes[i] & VTK_PARSE_POINTER_LOWMASK) !=
           VTK_PARSE_POINTER))
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
            if (currentNamespace->Functions[i]->ArgTypes[j] ==
                currentFunction->ArgTypes[j])
              {
              if (currentFunction->ArgTypes[j] == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->ArgClasses[j],
                         currentFunction->ArgClasses[j]) == 0)
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

  InitFunction(currentFunction);
}

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n)
{
  char *argClass = vtkstrdup(getTypeId());
  char *local = vtkstrdup(typeText);
  char *name;
  int i;

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
  currentFunction->NumberOfArguments = n;
  for (i = 0; i < n; i++)
    {
    currentFunction->ArgTypes[i] = argType;
    currentFunction->ArgClasses[i] = argClass;
    currentFunction->ArgCounts[i] = 0;
    }
  output_function();

  currentFunction->Signature = (char *)malloc(2048);
  sigAllocatedLength = 2048;
  sprintf(currentFunction->Signature, "void Set%s(%s a[%i]);",
          var, local, n);
  currentFunction->Name = name;
  currentFunction->NumberOfArguments = 1;
  currentFunction->ArgTypes[0] = (VTK_PARSE_POINTER | argType);
  currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
  currentFunction->ArgCounts[0] = n;
  output_function();

  free(local);
}

void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n)
{
  char *local = vtkstrdup(typeText);

  sprintf(currentFunction->Signature, "%s *Get%s();", local, var);
  sprintf(temps, "Get%s", var);
  currentFunction->Name = vtkstrdup(temps);
  currentFunction->NumberOfArguments = 0;
  currentFunction->ReturnType = (VTK_PARSE_POINTER | argType);
  currentFunction->ReturnClass = vtkstrdup(getTypeId());
  currentFunction->HaveHint = 1;
  currentFunction->HintSize = n;
  output_function();

  free(local);
}

/* Parse a header file and return a FileInfo struct */
void vtkParse_AddPointerToArray(void *valueArray, int *count, void *value)
{
  void **newvalues = 0;
  void **values = *(void ***)valueArray;
  int n = *count;
  int i;

  /* if empty, alloc for the first time */
  if (n == 0)
    {
    values = (void **)malloc(1*sizeof(void*));
    }
  /* if count is power of two, reallocate with double size */
  else if ((n & (n-1)) == 0)
    {
    newvalues = (void **)malloc((n << 1)*sizeof(void*));

    for (i = 0; i < n; i++)
      {
      newvalues[i] = values[i];
      }

    free(values);
    values = newvalues;
    }

  values[n++] = value;
  *count = n;
  *(void ***)valueArray = values;
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, int concrete, FILE *ifile, FILE *errfile)
{
  int i, j, lineno;
  int ret;
  FileInfo *file_info;
  char *main_class;

  InitFile(&data);

  data.FileName = vtkstrdup(filename);
  is_concrete = concrete;

  CommentState = 0;

  namespaceDepth = 0;
  currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
  InitNamespace(currentNamespace);
  data.Contents = currentNamespace;

  templateDepth = 0;
  currentTemplate = NULL;

  currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
  InitFunction(currentFunction);

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
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      currentNamespace->Classes[i]->IsAbstract = !is_concrete;
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
  char h_cls[80];
  char h_func[80];
  unsigned int h_type;
  int  h_value;
  FunctionInfo *func_info;
  ClassInfo *class_info;
  NamespaceInfo *contents;
  int i, j;

  contents = file_info->Contents;

  /* read each hint line in succession */
  while (fscanf(hfile,"%s %s %x %i", h_cls, h_func, &h_type, &h_value) != EOF)
    {
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
              ((int)h_type == ((func_info->ReturnType & ~VTK_PARSE_REF) &
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
                func_info->HaveHint = 1;
                func_info->HintSize = h_value;
                break;
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

