
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
NamespaceInfo *namespaceStack[10];
int namespaceDepth = 0;
NamespaceInfo *currentNamespace = NULL;
ClassInfo *currentClass = NULL;
FunctionInfo *currentFunction = NULL;
TemplateArgs *templateStack[10];
int templateDepth = 0;
TemplateArgs *currentTemplate = NULL;

int parseDebug;
char temps[2048];
parse_access_t access_level = VTK_ACCESS_PUBLIC;
int  is_concrete;
int  HaveComment;
char CommentText[50000];
int CommentState;
int sigClosed;
size_t sigMark[10];
size_t sigMarkDepth = 0;
unsigned int sigAllocatedLength;
char *currentId = 0;
char *currentVarName = 0;
char *currentVarValue = 0;
char *currentEnumName = 0;
char *currentEnumValue = 0;
int numberOfDimensions = 0;
char *arrayDimensions[MAX_ARRAY_DIMS];

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

/* chop the last char from the signature */
void chopSig(void)
{
  if (currentFunction->Signature)
    {
    size_t n = strlen(currentFunction->Signature);
    if (n > 0)
      {
      currentFunction->Signature[n-1] = '\0';
      }
    }
}

/* delete the signature */
void delSig(void)
{
  if (currentFunction->Signature)
    {
    free(currentFunction->Signature);
    currentFunction->Signature = NULL;
    }
}

/* mark this signature as legacy */
void legacySig(void)
{
  currentFunction->IsLegacy = 1;
}

/* clear the array counter */
void clearArray(void)
{
  numberOfDimensions = 0;
}

/* add another dimension */
void pushArray(const char *size)
{
  if (numberOfDimensions < MAX_ARRAY_DIMS)
    {
    arrayDimensions[numberOfDimensions++] = vtkstrdup(size);
    }
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

/* expand a type by one pointer */
int add_pointer_to_type(int tval, int ptr)
{
  int mask = (VTK_PARSE_INDIRECT & ~VTK_PARSE_REF);
  int tmp = (tval & mask);
  tval = (tval & ~mask);

  tmp = ((tmp << 2) | ptr);
  if ((tmp & mask) != tmp)
    {
    tmp = VTK_PARSE_BAD_INDIRECT;
    }

  return (tval | tmp);
}




/* Line 189 of yacc.c  */
#line 652 "vtkParse.tab.c"

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
#line 593 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 931 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 943 "vtkParse.tab.c"

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
#define YYLAST   6231

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  142
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  190
/* YYNRULES -- Number of rules.  */
#define YYNRULES  540
/* YYNRULES -- Number of states.  */
#define YYNSTATES  967

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
       0,     0,     3,     4,     5,     9,    11,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    34,    37,    39,
      42,    46,    50,    54,    59,    62,    66,    70,    73,    77,
      81,    86,    89,    93,    97,   101,   106,   109,   111,   113,
     116,   121,   126,   128,   129,   137,   138,   149,   150,   158,
     159,   170,   171,   172,   176,   179,   181,   184,   186,   188,
     190,   192,   194,   196,   198,   200,   203,   205,   207,   210,
     214,   218,   222,   227,   230,   234,   238,   242,   247,   250,
     256,   258,   260,   261,   262,   272,   273,   274,   283,   284,
     286,   290,   292,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   314,   316,   317,   321,   322,   327,   328,   333,
     335,   337,   339,   341,   343,   345,   347,   349,   351,   353,
     355,   362,   370,   377,   381,   382,   389,   394,   400,   403,
     407,   411,   413,   418,   422,   427,   436,   445,   453,   461,
     471,   481,   484,   487,   490,   493,   496,   500,   504,   505,
     511,   513,   514,   519,   522,   525,   526,   530,   532,   534,
     535,   536,   540,   545,   550,   553,   557,   562,   566,   569,
     573,   576,   580,   582,   585,   589,   593,   597,   599,   602,
     606,   607,   608,   617,   618,   622,   623,   624,   632,   633,
     637,   638,   641,   644,   646,   647,   653,   654,   655,   665,
     666,   670,   671,   677,   678,   682,   683,   687,   692,   694,
     695,   701,   703,   705,   708,   710,   712,   714,   716,   718,
     720,   722,   726,   727,   729,   731,   735,   736,   737,   740,
     742,   744,   745,   750,   751,   752,   753,   761,   763,   764,
     771,   773,   775,   776,   777,   782,   784,   786,   789,   790,
     792,   793,   797,   799,   800,   807,   808,   810,   811,   812,
     817,   818,   824,   829,   833,   835,   840,   841,   845,   847,
     850,   851,   855,   856,   858,   859,   863,   864,   866,   867,
     873,   874,   876,   878,   881,   883,   886,   888,   891,   894,
     896,   898,   900,   901,   905,   906,   912,   913,   919,   921,
     922,   927,   929,   931,   933,   935,   939,   943,   945,   947,
     949,   951,   953,   955,   957,   960,   962,   964,   967,   969,
     971,   973,   976,   979,   982,   985,   988,   991,   993,   995,
     997,   999,  1001,  1003,  1005,  1007,  1009,  1011,  1013,  1015,
    1017,  1019,  1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,
    1037,  1038,  1042,  1043,  1047,  1049,  1051,  1053,  1055,  1057,
    1059,  1061,  1063,  1064,  1067,  1069,  1073,  1075,  1078,  1081,
    1084,  1086,  1088,  1090,  1092,  1093,  1097,  1098,  1102,  1104,
    1105,  1110,  1111,  1112,  1122,  1124,  1127,  1129,  1131,  1133,
    1135,  1137,  1139,  1141,  1143,  1144,  1152,  1153,  1154,  1155,
    1165,  1166,  1172,  1173,  1179,  1180,  1181,  1192,  1193,  1201,
    1202,  1203,  1204,  1214,  1221,  1222,  1230,  1231,  1239,  1240,
    1248,  1249,  1257,  1258,  1266,  1267,  1275,  1276,  1284,  1285,
    1293,  1294,  1304,  1305,  1315,  1320,  1325,  1332,  1340,  1343,
    1346,  1350,  1354,  1356,  1358,  1360,  1362,  1364,  1366,  1368,
    1370,  1372,  1374,  1376,  1378,  1380,  1382,  1384,  1386,  1388,
    1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,  1406,  1408,
    1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,  1426,  1428,
    1430,  1432,  1434,  1436,  1438,  1439,  1442,  1443,  1446,  1448,
    1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,  1466,  1468,
    1470,  1472,  1474,  1476,  1478,  1480,  1482,  1484,  1486,  1488,
    1490,  1492,  1494,  1496,  1498,  1500,  1502,  1504,  1506,  1508,
    1510,  1512,  1514,  1516,  1518,  1520,  1522,  1524,  1526,  1528,
    1530,  1532,  1534,  1536,  1538,  1540,  1542,  1546,  1550,  1554,
    1558
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     143,     0,    -1,    -1,    -1,   143,   144,   145,    -1,   250,
      -1,    50,   250,    -1,   157,    -1,   154,    -1,   172,    -1,
     171,    -1,   170,    -1,   173,    -1,   174,    -1,   176,    -1,
     180,    -1,   146,    -1,   181,   146,    -1,    32,    -1,   197,
     226,    -1,    41,   197,   226,    -1,    50,   197,   226,    -1,
     181,   197,   226,    -1,   181,    41,   197,   226,    -1,   196,
     226,    -1,    41,   196,   226,    -1,    50,   196,   226,    -1,
     192,   226,    -1,    41,   192,   226,    -1,    50,   192,   226,
      -1,    50,    10,   192,   226,    -1,   193,   226,    -1,    41,
     193,   226,    -1,    50,   193,   226,    -1,   181,   192,   226,
      -1,   181,    41,   192,   226,    -1,   190,   226,    -1,   299,
      -1,   324,    -1,   276,   119,    -1,     9,   120,   325,   121,
      -1,    48,   120,   325,   121,    -1,   119,    -1,    -1,     4,
     225,   147,   287,   122,   151,   123,    -1,    -1,     4,   225,
     124,   272,   125,   148,   287,   122,   151,   123,    -1,    -1,
       3,   225,   149,   287,   122,   151,   123,    -1,    -1,     3,
     225,   124,   272,   125,   150,   287,   122,   151,   123,    -1,
      -1,    -1,   151,   152,   153,    -1,   290,   126,    -1,   250,
      -1,    42,   250,    -1,   157,    -1,   154,    -1,   172,    -1,
     171,    -1,   170,    -1,   173,    -1,   180,    -1,   178,    -1,
      40,   178,    -1,   177,    -1,    32,    -1,   197,   226,    -1,
      40,   197,   226,    -1,    41,   197,   226,    -1,   181,   197,
     226,    -1,   181,    41,   197,   226,    -1,   195,   226,    -1,
      40,   195,   226,    -1,    41,   195,   226,    -1,   181,   195,
     226,    -1,   181,    41,   195,   226,    -1,   191,   226,    -1,
     118,   120,   325,   121,   119,    -1,   299,    -1,   119,    -1,
      -1,    -1,    30,   225,   155,   122,   160,   123,   156,   326,
     119,    -1,    -1,    -1,    30,   158,   122,   160,   123,   159,
     326,   119,    -1,    -1,   161,    -1,   161,   127,   160,    -1,
     225,    -1,   225,   128,   164,    -1,   163,    -1,   225,    -1,
     275,    -1,   269,    -1,    16,    -1,    11,    -1,    13,    -1,
      12,    -1,    15,    -1,   162,    -1,    -1,   168,   165,   164,
      -1,    -1,   162,   169,   166,   164,    -1,    -1,   120,   167,
     164,   121,    -1,   129,    -1,   130,    -1,   131,    -1,   129,
      -1,   130,    -1,   132,    -1,   133,    -1,   134,    -1,   135,
      -1,   136,    -1,   137,    -1,     3,   122,   325,   123,   326,
     119,    -1,    31,   225,   122,   325,   123,   326,   119,    -1,
      31,   122,   325,   123,   326,   119,    -1,    47,   326,   119,
      -1,    -1,    46,   276,   175,   122,   143,   123,    -1,    46,
     122,   325,   123,    -1,    50,    10,   122,   143,   123,    -1,
     181,   178,    -1,     4,   225,   179,    -1,     3,   225,   179,
      -1,   119,    -1,   122,   325,   123,   119,    -1,   126,   326,
     119,    -1,    45,   265,   258,   119,    -1,    45,     4,   225,
     122,   325,   123,   241,   119,    -1,    45,     3,   225,   122,
     325,   123,   241,   119,    -1,    45,   265,    82,   241,   121,
     260,   119,    -1,    45,   265,    81,   241,   121,   260,   119,
      -1,    45,   265,    82,   241,   121,   120,   227,   121,   119,
      -1,    45,   265,    81,   241,   121,   120,   227,   121,   119,
      -1,    45,   157,    -1,    45,   154,    -1,    45,   172,    -1,
      45,   171,    -1,    45,   170,    -1,    45,    51,   119,    -1,
      43,   124,   125,    -1,    -1,    43,   124,   182,   183,   125,
      -1,   185,    -1,    -1,   185,   127,   184,   183,    -1,   281,
     188,    -1,   187,   188,    -1,    -1,   186,   181,   188,    -1,
       4,    -1,    44,    -1,    -1,    -1,   225,   189,   242,    -1,
      52,   120,   192,   121,    -1,    52,   120,   195,   121,    -1,
     264,   206,    -1,   264,   194,   206,    -1,   276,    80,   131,
     220,    -1,   276,    80,   213,    -1,   276,    80,    -1,   194,
     276,    80,    -1,   131,   220,    -1,     8,   131,   220,    -1,
     213,    -1,   264,   206,    -1,     8,   265,   206,    -1,   276,
      80,   198,    -1,   264,   194,   201,    -1,   198,    -1,   264,
     201,    -1,     8,   265,   201,    -1,    -1,    -1,    37,   264,
     120,   199,   229,   121,   200,   208,    -1,    -1,   203,   202,
     208,    -1,    -1,    -1,    37,   322,   204,   120,   205,   229,
     121,    -1,    -1,   209,   207,   208,    -1,    -1,   128,    16,
      -1,    36,    16,    -1,    34,    -1,    -1,   225,   120,   210,
     229,   121,    -1,    -1,    -1,   225,   124,   211,   272,   125,
     120,   212,   229,   121,    -1,    -1,   215,   214,   217,    -1,
      -1,   225,   120,   216,   229,   121,    -1,    -1,   126,   219,
     218,    -1,    -1,   127,   219,   218,    -1,   225,   120,   325,
     121,    -1,   221,    -1,    -1,   225,   120,   222,   229,   121,
      -1,    34,    -1,    49,    -1,    49,    41,    -1,    48,    -1,
       9,    -1,    29,    -1,    28,    -1,    83,    -1,    84,    -1,
     119,    -1,   122,   325,   123,    -1,    -1,   228,    -1,   233,
      -1,   233,   127,   228,    -1,    -1,    -1,   230,   231,    -1,
      79,    -1,   233,    -1,    -1,   233,   127,   232,   231,    -1,
      -1,    -1,    -1,   265,   234,   257,   235,   260,   236,   242,
      -1,    51,    -1,    -1,   265,   238,   237,   257,   121,   239,
      -1,    81,    -1,    82,    -1,    -1,    -1,   120,   240,   227,
     121,    -1,   261,    -1,   225,    -1,   277,   225,    -1,    -1,
     243,    -1,    -1,   128,   244,   245,    -1,   291,    -1,    -1,
     122,   246,   291,   248,   247,   123,    -1,    -1,   127,    -1,
      -1,    -1,   248,   127,   249,   291,    -1,    -1,   264,   252,
     251,   253,   119,    -1,    49,    51,   253,   119,    -1,    51,
     253,   119,    -1,   255,    -1,   238,   241,   121,   239,    -1,
      -1,   253,   127,   254,    -1,   252,    -1,   277,   252,    -1,
      -1,   258,   256,   242,    -1,    -1,   225,    -1,    -1,   225,
     259,   260,    -1,    -1,   261,    -1,    -1,   260,   138,   262,
     263,   139,    -1,    -1,   164,    -1,   265,    -1,   224,   265,
      -1,   266,    -1,   266,   277,    -1,   267,    -1,   223,   267,
      -1,   267,   223,    -1,   280,    -1,   269,    -1,   275,    -1,
      -1,    44,   268,   274,    -1,    -1,    48,   124,   270,   272,
     125,    -1,    -1,     9,   124,   271,   272,   125,    -1,   265,
      -1,    -1,   265,   127,   273,   272,    -1,     9,    -1,    48,
      -1,   269,    -1,   275,    -1,   276,    80,   274,    -1,   269,
      80,   274,    -1,     9,    -1,    48,    -1,    29,    -1,    28,
      -1,    83,    -1,    84,    -1,   135,    -1,   278,   135,    -1,
     278,    -1,   279,    -1,   278,   279,    -1,   132,    -1,    35,
      -1,   281,    -1,     4,   282,    -1,     3,   282,    -1,    31,
       9,    -1,    31,    48,    -1,    30,     9,    -1,    30,    48,
      -1,   283,    -1,   282,    -1,    83,    -1,    84,    -1,    28,
      -1,    29,    -1,     9,    -1,    48,    -1,    24,    -1,    18,
      -1,    23,    -1,    27,    -1,    26,    -1,    86,    -1,    87,
      -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,    92,
      -1,    93,    -1,    94,    -1,    95,    -1,    -1,    39,   284,
     286,    -1,    -1,    38,   285,   286,    -1,   286,    -1,    25,
      -1,    17,    -1,    19,    -1,    20,    -1,    85,    -1,    21,
      -1,    22,    -1,    -1,   126,   288,    -1,   289,    -1,   289,
     127,   288,    -1,   274,    -1,     6,   274,    -1,     7,   274,
      -1,     5,   274,    -1,     5,    -1,     6,    -1,     7,    -1,
     298,    -1,    -1,   130,   292,   298,    -1,    -1,   129,   293,
     298,    -1,   297,    -1,    -1,   120,   294,   291,   121,    -1,
      -1,    -1,     9,   124,   295,   266,   125,   120,   296,   298,
     121,    -1,    10,    -1,   297,    10,    -1,    16,    -1,    11,
      -1,    13,    -1,    12,    -1,    14,    -1,    15,    -1,     9,
      -1,    48,    -1,    -1,    96,   120,   225,   127,   300,   265,
     121,    -1,    -1,    -1,    -1,    97,   120,   301,   225,   127,
     302,   265,   303,   121,    -1,    -1,    98,   120,   304,   225,
     121,    -1,    -1,    99,   120,   305,   225,   121,    -1,    -1,
      -1,   100,   120,   225,   127,   306,   280,   307,   127,   326,
     121,    -1,    -1,   101,   120,   225,   127,   308,   280,   121,
      -1,    -1,    -1,    -1,   102,   120,   309,   225,   127,   310,
     280,   311,   121,    -1,   103,   120,   225,   127,   280,   121,
      -1,    -1,   104,   120,   225,   127,   312,   280,   121,    -1,
      -1,   108,   120,   225,   127,   313,   280,   121,    -1,    -1,
     105,   120,   225,   127,   314,   280,   121,    -1,    -1,   109,
     120,   225,   127,   315,   280,   121,    -1,    -1,   106,   120,
     225,   127,   316,   280,   121,    -1,    -1,   110,   120,   225,
     127,   317,   280,   121,    -1,    -1,   107,   120,   225,   127,
     318,   280,   121,    -1,    -1,   111,   120,   225,   127,   319,
     280,   121,    -1,    -1,   112,   120,   225,   127,   320,   280,
     127,    11,   121,    -1,    -1,   113,   120,   225,   127,   321,
     280,   127,    11,   121,    -1,   114,   120,   225,   121,    -1,
     115,   120,   225,   121,    -1,   116,   120,   225,   127,   225,
     121,    -1,   116,   120,   225,   127,   225,   127,   121,    -1,
     120,   121,    -1,   138,   139,    -1,    53,   138,   139,    -1,
      54,   138,   139,    -1,   323,    -1,   128,    -1,   132,    -1,
     133,    -1,   129,    -1,   130,    -1,   140,    -1,   131,    -1,
     127,    -1,   124,    -1,   125,    -1,   135,    -1,   136,    -1,
     137,    -1,   134,    -1,    53,    -1,    54,    -1,    55,    -1,
      56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,
      63,    -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,
      61,    -1,    62,    -1,    68,    -1,    69,    -1,    70,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,
      76,    -1,    77,    -1,    78,    -1,   117,    -1,    -1,   325,
     327,    -1,    -1,   326,   328,    -1,   119,    -1,   328,    -1,
      33,    -1,   329,    -1,   331,    -1,   330,    -1,    45,    -1,
     323,    -1,   126,    -1,   141,    -1,    80,    -1,     4,    -1,
      43,    -1,    29,    -1,    28,    -1,    83,    -1,    84,    -1,
     283,    -1,    13,    -1,    11,    -1,    12,    -1,    14,    -1,
      15,    -1,    10,    -1,    32,    -1,    34,    -1,    35,    -1,
      36,    -1,     3,    -1,    37,    -1,    49,    -1,    41,    -1,
       8,    -1,    30,    -1,    31,    -1,    44,    -1,    16,    -1,
      51,    -1,    79,    -1,     5,    -1,     7,    -1,     6,    -1,
      46,    -1,    47,    -1,    50,    -1,     9,    -1,    48,    -1,
     324,    -1,   122,   325,   123,    -1,   138,   325,   139,    -1,
     120,   325,   121,    -1,    81,   325,   121,    -1,    82,   325,
     121,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   726,   726,   726,   726,   729,   730,   731,   732,   733,
     734,   735,   736,   737,   738,   739,   740,   741,   742,   743,
     744,   745,   746,   747,   748,   749,   750,   751,   752,   753,
     754,   755,   756,   757,   758,   759,   760,   761,   762,   763,
     764,   765,   766,   768,   768,   770,   770,   772,   772,   774,
     774,   777,   777,   777,   780,   781,   782,   783,   784,   785,
     786,   787,   788,   789,   790,   791,   792,   793,   794,   795,
     797,   798,   799,   800,   801,   803,   804,   805,   806,   807,
     808,   809,   817,   818,   817,   820,   821,   820,   823,   823,
     823,   825,   826,   831,   832,   832,   832,   834,   834,   834,
     834,   834,   836,   837,   837,   842,   842,   848,   848,   855,
     855,   856,   858,   858,   859,   859,   860,   860,   861,   861,
     863,   865,   867,   869,   871,   871,   873,   875,   877,   879,
     880,   882,   883,   884,   886,   887,   888,   889,   890,   891,
     892,   893,   894,   895,   896,   897,   898,   900,   901,   901,
     905,   906,   906,   910,   918,   924,   924,   935,   936,   938,
     938,   938,   941,   943,   945,   950,   951,   952,   954,   955,
     957,   958,   963,   964,   968,   977,   978,   981,   985,   989,
    1000,  1004,   999,  1019,  1019,  1031,  1032,  1031,  1039,  1039,
    1051,  1052,  1061,  1071,  1078,  1077,  1082,  1083,  1082,  1092,
    1092,  1102,  1102,  1104,  1104,  1106,  1106,  1108,  1110,  1124,
    1124,  1126,  1128,  1129,  1131,  1132,  1133,  1134,  1135,  1136,
    1138,  1138,  1140,  1140,  1142,  1142,  1144,  1144,  1144,  1146,
    1147,  1150,  1149,  1153,  1153,  1154,  1153,  1197,  1204,  1204,
    1219,  1221,  1224,  1225,  1225,  1230,  1235,  1235,  1237,  1237,
    1239,  1239,  1241,  1242,  1242,  1251,  1251,  1253,  1254,  1254,
    1263,  1262,  1273,  1274,  1276,  1277,  1279,  1279,  1281,  1281,
    1283,  1283,  1285,  1285,  1287,  1287,  1289,  1289,  1291,  1291,
    1293,  1294,  1296,  1297,  1299,  1300,  1302,  1303,  1304,  1306,
    1307,  1309,  1311,  1311,  1315,  1315,  1317,  1317,  1320,  1320,
    1320,  1322,  1323,  1324,  1325,  1327,  1333,  1340,  1341,  1342,
    1343,  1344,  1345,  1360,  1361,  1362,  1367,  1368,  1380,  1381,
    1384,  1385,  1386,  1387,  1388,  1389,  1390,  1393,  1394,  1397,
    1398,  1399,  1400,  1401,  1402,  1405,  1406,  1407,  1408,  1409,
    1410,  1411,  1412,  1413,  1414,  1415,  1416,  1417,  1418,  1419,
    1420,  1420,  1421,  1421,  1423,  1426,  1427,  1428,  1429,  1430,
    1431,  1432,  1434,  1434,  1436,  1436,  1438,  1439,  1440,  1441,
    1448,  1449,  1450,  1452,  1453,  1453,  1454,  1454,  1457,  1458,
    1458,  1459,  1460,  1459,  1468,  1469,  1476,  1477,  1478,  1479,
    1480,  1481,  1482,  1484,  1488,  1488,  1502,  1503,  1503,  1502,
    1516,  1516,  1530,  1530,  1544,  1544,  1544,  1590,  1589,  1605,
    1606,  1606,  1605,  1619,  1645,  1645,  1650,  1650,  1655,  1655,
    1660,  1660,  1665,  1665,  1670,  1670,  1675,  1675,  1680,  1680,
    1685,  1685,  1706,  1706,  1727,  1793,  1863,  1930,  2004,  2005,
    2006,  2007,  2008,  2010,  2011,  2011,  2012,  2012,  2013,  2013,
    2014,  2014,  2015,  2015,  2016,  2016,  2017,  2018,  2019,  2020,
    2021,  2022,  2023,  2024,  2025,  2026,  2027,  2028,  2029,  2030,
    2031,  2032,  2033,  2034,  2035,  2036,  2037,  2038,  2039,  2040,
    2041,  2042,  2043,  2049,  2072,  2072,  2073,  2073,  2075,  2075,
    2077,  2077,  2077,  2077,  2077,  2078,  2078,  2078,  2078,  2078,
    2078,  2079,  2079,  2079,  2079,  2079,  2080,  2080,  2080,  2080,
    2080,  2081,  2081,  2081,  2081,  2081,  2081,  2082,  2082,  2082,
    2082,  2082,  2082,  2082,  2083,  2083,  2083,  2083,  2083,  2083,
    2084,  2084,  2084,  2084,  2084,  2084,  2086,  2087,  2088,  2088,
    2088
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
  "strt", "$@1", "file_item", "class_def", "$@2", "$@3", "$@4", "$@5",
  "class_def_body", "$@6", "class_def_item", "named_enum", "$@7", "$@8",
  "anonymous_enum", "$@9", "$@10", "enum_list", "enum_item",
  "integer_value", "integer_literal", "integer_expression", "$@11", "$@12",
  "$@13", "math_unary_op", "math_binary_op", "anonymous_struct",
  "named_union", "anonymous_union", "using", "namespace", "$@14", "extern",
  "template_internal_class", "internal_class", "internal_class_body",
  "typedef", "template", "$@15", "template_args", "$@16", "template_arg",
  "$@17", "class_or_typename", "maybe_template_id", "$@18",
  "legacy_function", "legacy_method", "function", "scoped_method", "scope",
  "method", "scoped_operator", "operator", "typecast_op_func", "$@19",
  "$@20", "op_func", "$@21", "op_sig", "$@22", "$@23", "func", "$@24",
  "func_trailer", "func_sig", "$@25", "$@26", "@27", "constructor", "$@28",
  "constructor_sig", "$@29", "maybe_initializers", "more_initializers",
  "initializer", "destructor", "destructor_sig", "$@30", "const_mod",
  "static_mod", "any_id", "func_body", "ignore_args_list",
  "ignore_more_args", "args_list", "$@31", "more_args", "$@32", "arg",
  "$@33", "$@34", "$@35", "$@36", "lp_or_la", "maybe_array_or_args",
  "$@37", "maybe_indirect_id", "maybe_var_assign", "var_assign", "$@38",
  "var_value", "$@39", "maybe_comma", "more_literals", "$@40", "var",
  "$@41", "complex_var_id", "maybe_indirect_var_ids",
  "maybe_indirect_var_id", "var_id_maybe_assign", "$@42", "maybe_var_id",
  "var_id", "$@43", "maybe_var_array", "var_array", "$@44", "array_size",
  "maybe_static_type", "type", "type_red", "type_red1", "$@45",
  "templated_id", "$@46", "$@47", "types", "$@48", "maybe_scoped_id",
  "scoped_id", "class_id", "type_indirection", "pointers",
  "pointer_or_const_pointer", "type_red2", "type_simple", "type_id",
  "type_primitive", "$@49", "$@50", "type_integer", "optional_scope",
  "scope_list", "scope_list_item", "scope_type", "literal", "$@51", "$@52",
  "$@53", "$@54", "$@55", "string_literal", "literal2", "macro", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "$@76", "$@77", "op_token", "op_token_no_delim",
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
     145,   145,   145,   145,   145,   145,   145,   145,   145,   145,
     145,   145,   145,   147,   146,   148,   146,   149,   146,   150,
     146,   151,   152,   151,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   153,   153,   153,   153,   153,   153,   153,   153,
     153,   153,   155,   156,   154,   158,   159,   157,   160,   160,
     160,   161,   161,   162,   162,   162,   162,   163,   163,   163,
     163,   163,   164,   165,   164,   166,   164,   167,   164,   168,
     168,   168,   169,   169,   169,   169,   169,   169,   169,   169,
     170,   171,   172,   173,   175,   174,   174,   176,   177,   178,
     178,   179,   179,   179,   180,   180,   180,   180,   180,   180,
     180,   180,   180,   180,   180,   180,   180,   181,   182,   181,
     183,   184,   183,   185,   185,   186,   185,   187,   187,   188,
     189,   188,   190,   191,   192,   193,   193,   193,   194,   194,
     195,   195,   195,   195,   195,   196,   196,   197,   197,   197,
     199,   200,   198,   202,   201,   204,   205,   203,   207,   206,
     208,   208,   208,   208,   210,   209,   211,   212,   209,   214,
     213,   216,   215,   217,   217,   218,   218,   219,   220,   222,
     221,   223,   224,   224,   225,   225,   225,   225,   225,   225,
     226,   226,   227,   227,   228,   228,   229,   230,   229,   231,
     231,   232,   231,   234,   235,   236,   233,   233,   237,   233,
     238,   238,   239,   240,   239,   239,   241,   241,   242,   242,
     244,   243,   245,   246,   245,   247,   247,   248,   249,   248,
     251,   250,   250,   250,   252,   252,   253,   253,   254,   254,
     256,   255,   257,   257,   259,   258,   260,   260,   262,   261,
     263,   263,   264,   264,   265,   265,   266,   266,   266,   267,
     267,   267,   268,   267,   270,   269,   271,   269,   272,   273,
     272,   274,   274,   274,   274,   275,   275,   276,   276,   276,
     276,   276,   276,   277,   277,   277,   278,   278,   279,   279,
     280,   280,   280,   280,   280,   280,   280,   281,   281,   282,
     282,   282,   282,   282,   282,   283,   283,   283,   283,   283,
     283,   283,   283,   283,   283,   283,   283,   283,   283,   283,
     284,   283,   285,   283,   283,   286,   286,   286,   286,   286,
     286,   286,   287,   287,   288,   288,   289,   289,   289,   289,
     290,   290,   290,   291,   292,   291,   293,   291,   291,   294,
     291,   295,   296,   291,   297,   297,   298,   298,   298,   298,
     298,   298,   298,   298,   300,   299,   301,   302,   303,   299,
     304,   299,   305,   299,   306,   307,   299,   308,   299,   309,
     310,   311,   299,   299,   312,   299,   313,   299,   314,   299,
     315,   299,   316,   299,   317,   299,   318,   299,   319,   299,
     320,   299,   321,   299,   299,   299,   299,   299,   322,   322,
     322,   322,   322,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   323,   323,   323,   323,   323,   323,   323,
     323,   323,   323,   324,   325,   325,   326,   326,   327,   327,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   328,   328,   328,   328,
     328,   328,   328,   328,   328,   328,   329,   330,   331,   331,
     331
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     2,
       3,     3,     3,     4,     2,     3,     3,     2,     3,     3,
       4,     2,     3,     3,     3,     4,     2,     1,     1,     2,
       4,     4,     1,     0,     7,     0,    10,     0,     7,     0,
      10,     0,     0,     3,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     1,     2,     3,
       3,     3,     4,     2,     3,     3,     3,     4,     2,     5,
       1,     1,     0,     0,     9,     0,     0,     8,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     4,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       6,     7,     6,     3,     0,     6,     4,     5,     2,     3,
       3,     1,     4,     3,     4,     8,     8,     7,     7,     9,
       9,     2,     2,     2,     2,     2,     3,     3,     0,     5,
       1,     0,     4,     2,     2,     0,     3,     1,     1,     0,
       0,     3,     4,     4,     2,     3,     4,     3,     2,     3,
       2,     3,     1,     2,     3,     3,     3,     1,     2,     3,
       0,     0,     8,     0,     3,     0,     0,     7,     0,     3,
       0,     2,     2,     1,     0,     5,     0,     0,     9,     0,
       3,     0,     5,     0,     3,     0,     3,     4,     1,     0,
       5,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     1,     3,     0,     0,     2,     1,
       1,     0,     4,     0,     0,     0,     7,     1,     0,     6,
       1,     1,     0,     0,     4,     1,     1,     2,     0,     1,
       0,     3,     1,     0,     6,     0,     1,     0,     0,     4,
       0,     5,     4,     3,     1,     4,     0,     3,     1,     2,
       0,     3,     0,     1,     0,     3,     0,     1,     0,     5,
       0,     1,     1,     2,     1,     2,     1,     2,     2,     1,
       1,     1,     0,     3,     0,     5,     0,     5,     1,     0,
       4,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     2,     1,     1,
       1,     2,     2,     2,     2,     2,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     1,     3,     1,     2,     2,     2,
       1,     1,     1,     1,     0,     3,     0,     3,     1,     0,
       4,     0,     0,     9,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     7,     0,     0,     0,     9,
       0,     5,     0,     5,     0,     0,    10,     0,     7,     0,
       0,     0,     9,     6,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     9,     0,     9,     4,     4,     6,     7,     2,     2,
       3,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   333,   356,   336,
     357,   358,   360,   361,   337,   335,   355,   339,   338,   331,
     332,    85,     0,    18,   211,     0,   352,   350,     0,     0,
     292,     0,     0,   486,   334,   212,     0,   266,     0,   329,
     330,   359,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   483,    42,     4,    16,     8,     7,    11,
      10,     9,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,   177,     0,     0,     5,     0,   282,   284,   286,
     290,   291,     0,   289,   320,   328,   327,   354,    37,    38,
     333,   331,   332,   334,   329,   330,   484,    47,   322,    43,
     321,     0,     0,   333,     0,     0,   334,     0,     0,   484,
     296,   325,   217,   216,   326,   218,   219,     0,    82,   323,
     324,   484,     0,   212,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   148,     0,     0,     0,     0,   142,   141,
     145,   144,   143,     0,   307,   310,   309,   308,   311,   312,
     484,   124,     0,   484,   294,   213,   266,     0,     0,     0,
       0,     0,     6,     0,     0,     0,   396,   400,   402,     0,
       0,   409,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,   220,   484,    36,    27,    31,    24,    19,   287,
     283,   215,   217,   216,     0,   214,   240,   241,   218,   219,
       0,   178,   183,   164,   188,   274,     0,   260,   264,   270,
       0,   319,   318,   313,   285,   315,   316,   288,     0,     0,
      39,     0,     0,   362,     0,   362,   333,   331,   332,   334,
     329,   330,   325,   326,   323,   324,   179,     0,     0,     0,
      88,     0,     0,   484,   180,   353,   351,    28,    32,    25,
      20,     0,   147,   155,   301,   302,   303,   293,   304,     0,
       0,   146,   215,   214,     0,     0,   274,     0,     0,     0,
     516,   499,   527,   529,   528,   520,   533,   511,   507,   508,
     506,   509,   510,   524,   502,   501,   521,   522,   512,   490,
     513,   514,   515,   517,   519,   500,   523,   494,   530,   531,
     534,   518,   532,   525,   457,   458,   459,   460,   461,   462,
     463,   464,   470,   471,   465,   466,   467,   468,   469,   472,
     473,   474,   475,   476,   477,   478,   479,   480,   481,   482,
     526,   498,   484,   484,   503,   504,   123,   484,   484,   451,
     452,   496,   450,   443,   446,   447,   449,   444,   445,   456,
     453,   454,   455,   484,   448,   497,   505,   495,   535,   487,
     491,   493,   492,     0,     0,     0,     2,     0,     0,    29,
      33,    26,    21,   263,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    34,
      22,     0,   457,   458,     0,     0,   185,   442,   176,   165,
       0,   190,   190,   194,   196,   276,   246,     0,     0,   266,
     248,   168,   314,   317,   306,   301,   302,     0,   175,   167,
     199,     0,   305,   488,   486,   485,   489,   298,     0,     0,
       0,     0,     0,    40,     0,     0,    89,    91,    88,   486,
       0,   227,   157,   158,     0,   150,     0,   159,   159,   484,
     484,     0,     0,   134,   126,     2,     0,     0,     0,     0,
       0,    41,     0,   262,     3,    30,   268,   267,     0,   162,
     394,     0,     0,     0,   404,   407,     0,     0,   414,   418,
     422,   426,   416,   420,   424,   428,   430,   432,   434,   435,
       0,    35,    23,   221,     0,     0,   438,   439,     0,   169,
     193,     0,     0,   184,   189,   227,     0,   275,   277,   242,
     247,     0,   250,   271,   249,   166,   208,     0,   203,   201,
       0,   299,    49,     0,     0,     0,   366,   363,   364,    51,
      45,    51,   297,    86,    88,     0,     0,     0,   486,     0,
       0,   149,   151,   159,   154,   160,   153,     0,     0,   276,
     276,     3,   539,   540,   538,   536,   537,   295,   127,   269,
       0,   397,   401,   403,     0,     0,   410,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   440,
     441,   186,   192,   191,     0,     0,   278,   243,   265,     0,
     245,   261,     0,   209,     0,   200,   227,   120,     0,   362,
     369,   367,   368,     0,    52,   362,    52,   486,    90,   215,
      98,   100,    99,   101,    97,   214,   107,   109,   110,   111,
     102,    93,    92,   103,    94,    96,    95,    83,   122,     0,
     181,   237,   229,   228,   230,   233,   155,   156,   248,     0,
       0,   222,     0,   222,     0,   125,     0,     0,   405,     0,
       0,   413,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   436,     0,   227,   195,     0,   280,   222,   392,
     384,   387,   389,   388,   390,   391,   386,   393,   379,   253,
     376,   374,   251,   252,   378,   373,   227,   205,     0,     0,
     300,     0,   365,    48,     0,     0,    44,     0,     0,   112,
     113,   114,   115,   116,   117,   118,   119,   105,     0,   486,
     121,   190,   231,   272,   238,   152,   161,     0,     0,     0,
     223,   224,   138,     0,   137,   395,   398,     0,   408,   411,
     415,   419,   423,   427,   417,   421,   425,   429,     0,     0,
     437,     0,   197,   281,     0,     0,   381,     0,     0,     0,
       0,   385,     0,     0,   204,   484,   202,    51,     0,     0,
     370,   371,   372,     0,   333,   331,   332,    67,     0,     0,
       0,   334,     0,   329,   330,     0,    81,     0,    53,    58,
      57,    61,    60,    59,    62,    66,    64,    63,     0,     0,
       0,     0,   172,    55,     0,     0,    80,    51,    87,     0,
       0,   104,     0,   182,     0,   273,   234,   272,   136,   135,
       0,     0,     0,     0,   486,     0,     0,     0,   187,   227,
     279,   244,     0,     0,   257,   392,   377,   375,   210,   205,
       0,    52,     0,     0,     0,     0,     0,    65,     0,     0,
       0,     0,     0,    56,     0,     0,   484,   170,     0,   128,
       0,     0,    78,    73,    68,   173,    54,    52,   108,   106,
      84,   232,   276,     0,   140,   225,   139,   399,     0,   412,
     431,   433,     0,     0,   380,   255,   206,   207,    50,   131,
     484,   486,   130,   129,   171,   174,    74,    69,    75,    70,
       0,     0,     0,     0,     0,     0,    76,    71,    46,   235,
     242,   406,   198,     0,   258,     0,     0,     0,     0,   163,
       0,    77,    72,   248,   239,   382,     0,   254,     0,   133,
      79,   236,     0,   259,   132,     0,   383
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    75,    76,   255,   645,   253,   639,   644,
     734,   818,    77,   271,   749,    78,   137,   647,   475,   476,
     660,   661,   662,   748,   840,   738,   663,   747,    79,    80,
      81,    82,    83,   299,    84,   825,   826,   922,    85,    86,
     283,   484,   676,   485,   486,   487,   584,   678,    87,   829,
      88,    89,   230,   830,    90,    91,    92,   481,   751,   231,
     441,   232,   538,   704,   233,   442,   543,   234,   545,   546,
     859,   832,   558,   460,   636,   635,   794,   727,   555,   556,
     726,    93,    94,   281,   214,   759,   760,   579,   580,   673,
     844,   761,   753,   902,   953,   847,   236,   628,   708,   447,
     553,   554,   632,   722,   788,   945,   915,   956,    95,   449,
     237,   183,   507,   238,   450,   846,   239,   445,   629,   548,
     707,   784,   880,    97,    98,    99,   154,   100,   394,   269,
     468,   638,   462,   101,   128,   448,   245,   246,   103,   104,
     105,   106,   146,   145,   107,   470,   567,   568,   835,   723,
     790,   789,   787,   862,   962,   724,   725,   108,   600,   407,
     687,   853,   408,   409,   604,   767,   605,   412,   690,   855,
     608,   612,   609,   613,   610,   614,   611,   615,   616,   617,
     436,   387,   388,   251,   172,   465,   466,   390,   391,   392
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -757
static const yytype_int16 yypact[] =
{
    -757,    93,  -757,  5030,   104,   503,  5891,   172,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   -11,
       5,   691,   231,  -757,  -757,  5612,  -757,  -757,  5333,   -10,
    -757,  5705,   328,  -757,   201,   130,  5147,  -757,    31,   161,
     165,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,    50,   107,   119,   149,   168,   173,   174,   197,
     198,   202,   204,   206,   213,   219,   220,   227,   228,   230,
     234,   235,   240,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  5240,   216,   216,   216,
     216,   216,  -757,  5923,  5891,  -757,   521,  -757,    23,   122,
     169,  -757,   167,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
     210,   280,   329,   345,   366,   387,  -757,   171,  -757,   250,
    -757,   705,   705,   -17,    80,   175,    25,   217,   271,  -757,
    -757,   253,  -757,  -757,   255,  -757,  -757,   256,  -757,   253,
     255,  -757,   257,   339,   266,   483,   483,   216,   216,   216,
     216,   106,   307,   264,   719,   104,   503,   272,  -757,  -757,
    -757,  -757,  -757,   547,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  3285,  -757,  -757,  -757,  -757,  4924,   216,   216,
     216,   216,  -757,   -29,  5612,   736,  -757,  -757,  -757,   736,
     736,  -757,   736,   736,   736,   736,   736,   736,   736,   736,
     736,   736,   736,   736,   736,   736,   503,  5333,  -757,   216,
     216,   641,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,   320,   321,   323,  6091,   337,  -757,  -757,   346,   358,
     106,  -757,  -757,  -757,  -757,   187,   229,  -757,  -757,  -757,
     359,  -757,  -757,  -757,  -757,    40,  -757,  -757,   719,   261,
    -757,   922,  5891,   293,  5891,   293,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,   719,  1061,  5891,
     736,   303,  1200,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,   187,  -757,  6048,   -17,    25,   169,  -757,  -757,   322,
     334,  -757,  -757,  -757,   229,   229,  -757,   324,  1339,   338,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  1478,  5891,   134,  -757,   216,   736,  -757,
    -757,  -757,  -757,  -757,   314,   340,   341,   736,   736,   736,
     343,   354,   736,   355,   356,   362,   368,   369,   374,   380,
     383,   389,   391,   392,   344,   400,   396,   216,   216,  -757,
    -757,  1617,   395,   397,   406,   404,  -757,  -757,  -757,  -757,
     454,    32,    32,  -757,  -757,  -757,  -757,   424,   736,  -757,
     411,  -757,  -757,  -757,  -757,   -20,    58,   736,  -757,  -757,
    -757,   426,  -757,  -757,  -757,  -757,  -757,   428,   432,   469,
     437,   435,   440,  -757,   441,   442,   443,   449,   736,  -757,
    1756,   450,  -757,  -757,   453,   455,   542,   736,   736,  -757,
    -757,   467,   470,  -757,  -757,  -757,  1895,  2034,  2173,  2312,
    2451,  -757,   465,  -757,   475,  -757,  -757,  -757,   564,  -757,
    -757,   472,   479,   480,  -757,  -757,   482,  6016,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
     736,  -757,  -757,  -757,   468,   474,  -757,  -757,   486,  -757,
    -757,   595,   598,  -757,  -757,   450,  5891,   485,  -757,    54,
    -757,   146,  -757,  -757,  -757,  -757,  -757,   501,   498,  -757,
    3424,  -757,  -757,   719,   719,   719,  -757,  -757,   499,  -757,
    -757,  -757,  -757,  -757,   736,   513,   504,  3563,  -757,   514,
    5426,  -757,  -757,   736,  -757,  -757,  -757,  2590,  2729,   516,
     517,   511,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    5891,  -757,  -757,  -757,  6016,  6016,  -757,   518,  6016,  6016,
    6016,  6016,  6016,  6016,  6016,  6016,  6016,  6016,   129,  -757,
    -757,  -757,  -757,  -757,   520,   526,  -757,  -757,  -757,   485,
     500,  -757,   357,  -757,   736,  -757,   450,  -757,  5891,   293,
    -757,  -757,  -757,   469,   529,   293,   538,  -757,  -757,   -17,
    -757,  -757,  -757,  -757,  -757,    25,  -757,  -757,  -757,  -757,
     561,  -757,  -757,  -757,  -757,   169,  -757,  -757,  -757,  3702,
    -757,  -757,  -757,  -757,   536,   -26,  6048,  -757,   411,   229,
     229,  5798,   -52,  5798,    47,  -757,   541,  5891,  -757,   543,
    6016,  -757,   544,   545,   546,   550,   552,   553,   555,   558,
     556,   557,  -757,   559,   450,  -757,   548,   513,  5798,   563,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,   672,  -757,   450,   574,   568,   583,
    -757,   586,  -757,  -757,  4397,   594,  -757,  3841,   513,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   513,  -757,
    -757,    32,  -757,   736,  -757,  -757,  -757,   602,   604,   584,
    -757,   599,  -757,   608,  -757,  -757,  -757,   603,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   720,   721,
    -757,   614,  -757,  -757,   597,   616,  -757,   418,   418,   644,
     644,  -757,   620,   736,  -757,  -757,  -757,  -757,   104,   503,
    -757,  -757,  -757,  4892,   -20,   -28,     7,  -757,  4609,  4704,
    5519,    58,   622,    39,   142,   623,  -757,   736,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  4514,   216,
     216,   216,  -757,  -757,   535,   624,  -757,  -757,  -757,   625,
     513,  -757,  3980,  -757,  5426,  -757,  -757,   736,  -757,  -757,
     630,  5798,   633,   635,  -757,   636,   637,   642,  -757,   450,
    -757,  -757,  5891,   645,  -757,  -757,  -757,  -757,  -757,   574,
    2868,   646,   180,   180,   736,   641,   503,  -757,   216,   216,
     641,   216,   216,  -757,   564,  4798,  -757,  -757,  4704,  -757,
     216,   216,  -757,  -757,  -757,  -757,  -757,   647,  -757,  -757,
    -757,  -757,  -757,   651,  -757,  -757,  -757,  -757,  4119,  -757,
    -757,  -757,   652,   643,  -757,   649,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    4892,   657,   736,  3007,   216,   216,  -757,  -757,  -757,   485,
      54,  -757,  -757,   660,   662,   663,  3146,  4258,   736,  -757,
     664,  -757,  -757,   411,  -757,  -757,   418,  -757,   668,  -757,
    -757,  -757,   644,  -757,  -757,   670,  -757
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -757,  -349,  -757,  -757,   706,  -757,  -757,  -757,  -757,  -529,
    -757,  -757,   -25,  -757,  -757,   -24,  -757,  -757,  -427,  -757,
    -757,  -757,  -654,  -757,  -757,  -757,  -757,  -757,   -23,   -19,
     -16,    60,  -757,  -757,  -757,  -757,  -737,   -78,    62,  -449,
    -757,   124,  -757,  -757,  -757,  -757,  -438,  -757,  -757,  -757,
      36,   246,  -757,  -712,   247,   -27,   549,  -757,  -757,  -124,
    -757,  -757,  -757,  -757,  -226,  -757,  -424,  -757,  -757,  -757,
    -757,   562,  -757,  -757,  -757,  -757,   -63,    24,  -756,  -757,
    -757,   717,  -757,     6,   -69,  -607,   -22,  -507,  -757,   -18,
    -757,  -539,  -757,  -757,  -757,  -757,   150,  -113,  -757,  -259,
    -649,  -757,  -757,  -757,  -757,  -757,  -757,  -757,   -31,  -757,
    -358,  -146,  -757,  -757,  -757,   -14,   665,  -757,  -422,  -532,
    -757,  -757,    37,    -6,   -32,   742,  -757,  -128,  -757,  -757,
    -215,  -757,  -106,  -123,    67,   -74,  -757,   591,  -380,  -267,
       9,  -115,  -757,  -757,    48,  -223,   194,  -757,  -757,  -705,
    -757,  -757,  -757,  -757,  -757,  -757,  -746,   105,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,  -757,
    -757,   617,   839,   -96,  -430,  -757,  -170,  -757,  -757,  -757
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -313
static const yytype_int16 yytable[] =
{
     127,   150,   389,   266,   439,   182,   158,   159,   160,   181,
     117,   119,   161,   118,   120,   162,   488,   630,   544,   215,
     216,   217,   218,   547,   244,   163,   286,   138,   142,   756,
     395,   288,   472,   268,   560,   491,   492,   583,   624,   471,
      96,   674,   646,   866,   867,   272,   506,   504,   287,   577,
     586,   576,  -310,   783,   474,   226,   227,   386,   241,   210,
    -307,   887,   144,  -307,   147,   151,   540,   762,   541,  -310,
     102,   877,   178,    96,   298,   241,   763,   393,   277,   278,
     279,   280,   863,   864,   839,  -309,   626,  -309,   220,   262,
     403,   889,  -217,     2,   841,   152,   878,   881,   404,   171,
    -215,   785,   235,   152,   130,  -308,   438,   130,  -310,   399,
     400,   401,   402,   110,   153,   221,   890,   431,   924,  -311,
     286,   286,   209,   211,  -309,   288,   288,  -216,   263,   729,
     118,   120,   111,   112,   222,   223,   386,   607,  -308,   286,
     429,   430,   454,   224,   288,   677,   591,   648,   669,   174,
     599,   184,   113,   386,   225,   242,    24,   386,   243,  -218,
     542,   289,   290,   240,   118,   120,   764,   682,   684,   296,
     185,   175,   242,   931,   627,   452,   934,   480,  -214,   502,
     428,   176,   174,   386,   264,   626,   899,   114,   115,   228,
     229,   406,  -276,   275,   276,   410,   411,   781,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   117,   397,   398,   118,   965,   737,   240,   792,
     405,   398,  -312,   265,   688,   689,   116,   186,   692,   693,
     694,   695,   696,   697,   698,   699,   700,   701,   292,   187,
     139,  -311,   446,   427,   211,  -312,   467,   249,   467,   248,
     702,   963,  -307,   503,   224,   461,   703,   132,   133,   132,
     133,   404,  -219,   467,   241,   631,   496,   497,   871,   188,
     455,   498,   499,   404,   148,   149,   477,   293,   386,   140,
    -311,  -308,   179,   180,  -312,   828,   250,   500,   189,   222,
     223,  -307,   129,   190,   191,   252,   130,   440,    25,   919,
     446,   446,   920,   551,   961,   674,   921,   443,   897,   456,
     769,   444,   135,   136,   135,   136,   386,   192,   193,   842,
    -308,   173,   194,   292,   195,   174,   196,   843,   505,  -215,
     508,   625,  -215,   197,  -215,   212,  -215,   164,   213,   198,
     199,   286,   132,   133,   228,   229,   288,   200,   201,   241,
     202,   267,   912,   141,   203,   204,   165,   166,   531,   532,
     205,   242,   293,   566,   243,   386,   709,   710,   711,   712,
     713,   714,   715,   716,   254,  -215,   167,  -214,   270,   273,
     175,   386,   386,   386,   386,   386,   274,   249,   467,   282,
     389,   291,   457,   587,   588,   226,   227,   135,   136,  -217,
    -307,  -310,  -217,  -309,  -217,   717,  -217,   389,   630,   488,
     296,   168,   169,   511,   512,   513,   731,  -308,   516,   469,
     757,   758,   735,   730,   908,   478,  -311,   709,   710,   711,
     712,   713,   714,   715,   716,   286,   286,   286,  -312,   451,
     288,   288,   288,   493,   489,   386,   242,   665,  -216,   243,
     170,  -216,   666,  -216,   550,  -216,   490,   640,   641,   642,
     495,   509,   386,   557,  -214,   528,   717,  -214,   510,  -214,
     514,  -214,   386,   386,   563,   564,   565,   718,   284,   719,
     939,   515,   517,   518,   477,  -218,   720,   721,  -218,   519,
    -218,   947,  -218,   585,   585,   520,   521,   165,   166,   389,
       8,   522,    10,    11,    12,    13,  -219,   523,    16,  -219,
     524,  -219,   110,  -219,   296,   286,   525,   285,   526,   527,
     288,   529,   649,   530,   650,   651,   652,   536,   653,   654,
     221,   111,   112,   534,   539,   535,   618,   566,   718,   552,
     467,   222,   223,   537,   292,   549,   559,   720,   721,   222,
     223,   113,   168,   169,   386,   561,   292,   562,   224,   569,
     570,   655,   571,   132,   133,   573,   572,   389,    41,   225,
     574,  -226,   224,   292,   675,   132,   133,   575,   581,   665,
     477,   664,   582,   293,   666,    29,   114,   115,   589,   585,
     597,   590,   132,   133,   686,   293,   228,   229,   598,   601,
     602,   603,   226,   227,   228,   229,   621,   619,   895,   606,
     665,   622,   293,   620,   623,   666,   226,   227,   135,   136,
     665,   633,   386,   626,   634,   666,   643,   667,   294,   295,
     135,   136,   467,   656,   685,   670,   681,   683,  -277,   691,
     728,   705,   657,   658,   659,   226,   227,   135,   136,   925,
     292,   706,   733,   865,   895,   711,   712,   713,   714,   715,
     716,   736,   765,   752,   768,   770,   771,   772,   782,   132,
     133,   773,   389,   774,   775,   675,   776,   675,   224,   777,
     780,   766,   791,   778,   779,   446,   446,   786,   795,   293,
     739,   740,   717,   741,   742,   743,   744,   745,   746,   870,
     131,   793,   675,   833,   796,   850,   895,   831,   797,   819,
     820,   821,   665,   664,   256,   822,   837,   666,   823,   132,
     133,   848,   925,   849,   135,   136,   851,   386,   284,   852,
     854,   856,   857,   257,   258,   858,   860,   861,   389,   134,
     461,   868,   885,   886,   664,   292,   898,   165,   166,   904,
     896,   266,   906,   259,   664,   386,   907,   909,   910,   845,
     892,   893,   894,   911,   132,   133,   914,   285,   943,   918,
     938,   834,   940,   942,   135,   136,   944,   389,   949,   883,
     955,   879,   882,   960,   293,  -256,   957,   964,   260,   261,
     933,   966,   208,   386,   824,   923,   827,   875,   458,   728,
     755,   891,   168,   169,   872,   873,   916,   118,   120,   926,
     927,   459,   928,   929,   461,   461,   247,   869,   386,   135,
     136,   936,   937,   557,   946,   754,   901,   954,   297,   905,
     913,   386,   386,   903,   461,   219,   453,   732,   675,   836,
     235,   437,   109,     0,     0,   675,   664,   884,     0,     0,
       0,     0,     0,   845,     0,     0,     0,     0,     0,     0,
       0,   935,     0,     0,     0,   951,   952,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     557,     0,   872,     0,     0,   118,     0,     0,     0,     0,
     296,   461,     0,     0,   461,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   932,     0,   948,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      26,    27,     0,   324,     0,   325,   326,   327,   328,   329,
     330,   331,   332,   333,     0,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,   463,   367,     0,   368,   464,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,     0,   384,   385,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    26,
      27,     0,   324,     0,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     463,   367,   473,   368,     0,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       0,   384,   385,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    26,    27,
       0,   324,     0,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,   463,
     367,     0,   368,   479,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,     0,
     384,   385,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    26,    27,     0,
     324,     0,   325,   326,   327,   328,   329,   330,   331,   332,
     333,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   463,   367,
       0,   368,   494,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,     0,   384,
     385,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    26,    27,     0,   324,
       0,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,   463,   367,   501,
     368,     0,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,     0,   384,   385,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,    26,    27,     0,   324,     0,
     325,   326,   327,   328,   329,   330,   331,   332,   333,     0,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   463,   367,     0,   368,
     533,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,     0,   384,   385,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,    26,    27,     0,   324,     0,   325,
     326,   327,   328,   329,   330,   331,   332,   333,     0,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,   463,   367,     0,   368,   578,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,     0,   384,   385,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,    26,    27,     0,   324,     0,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   463,   367,   592,   368,     0,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,     0,   384,   385,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,    26,    27,     0,   324,     0,   325,   326,   327,
     328,   329,   330,   331,   332,   333,     0,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,   463,   367,   593,   368,     0,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,     0,   384,   385,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,    26,    27,     0,   324,     0,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   463,   367,   594,   368,     0,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,     0,   384,   385,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      26,    27,     0,   324,     0,   325,   326,   327,   328,   329,
     330,   331,   332,   333,     0,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,   463,   367,     0,   368,   595,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,     0,   384,   385,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    26,
      27,     0,   324,     0,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     463,   367,     0,   368,     0,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
     596,   384,   385,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    26,    27,
       0,   324,     0,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,   463,
     367,     0,   368,   679,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,     0,
     384,   385,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    26,    27,     0,
     324,     0,   325,   326,   327,   328,   329,   330,   331,   332,
     333,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   463,   367,
       0,   368,   680,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,     0,   384,
     385,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    26,    27,     0,   324,
       0,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,   463,   367,   917,
     368,     0,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,     0,   384,   385,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,    26,    27,     0,   324,     0,
     325,   326,   327,   328,   329,   330,   331,   332,   333,     0,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   463,   367,   950,   368,
       0,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   380,   381,   382,   383,     0,   384,   385,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,    26,    27,     0,   324,     0,   325,
     326,   327,   328,   329,   330,   331,   332,   333,     0,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    73,     0,   463,   367,     0,   368,   958,
     369,   370,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   383,     0,   384,   385,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,    26,    27,     0,   324,     0,   325,   326,
     327,   328,   329,   330,   331,   332,   333,     0,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   366,   367,     0,   368,     0,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
     380,   381,   382,   383,     0,   384,   385,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,    26,    27,     0,   324,     0,   325,   326,   327,
     328,   329,   330,   331,   332,   333,     0,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,   353,   354,   355,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    73,     0,   637,   367,     0,   368,     0,   369,   370,
     371,   372,   373,   374,   375,   376,   377,   378,   379,   380,
     381,   382,   383,     0,   384,   385,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,    26,    27,     0,   324,     0,   325,   326,   327,   328,
     329,   330,   331,   332,   333,     0,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   668,   367,     0,   368,     0,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   380,   381,
     382,   383,     0,   384,   385,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      26,    27,     0,   324,     0,   325,   326,   327,   328,   329,
     330,   331,   332,   333,     0,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,   353,   354,   355,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    73,
       0,   750,   367,     0,   368,     0,   369,   370,   371,   372,
     373,   374,   375,   376,   377,   378,   379,   380,   381,   382,
     383,     0,   384,   385,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,    26,
      27,     0,   324,     0,   325,   326,   327,   328,   329,   330,
     331,   332,   333,     0,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     838,   367,     0,   368,     0,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   383,
       0,   384,   385,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    26,    27,
       0,   324,     0,   325,   326,   327,   328,   329,   330,   331,
     332,   333,     0,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,   353,   354,   355,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    73,     0,   900,
     367,     0,   368,     0,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,     0,
     384,   385,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    26,    27,     0,
     324,     0,   325,   326,   327,   328,   329,   330,   331,   332,
     333,     0,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,     0,   367,
     941,   368,     0,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,   380,   381,   382,   383,     0,   384,
     385,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    26,    27,     0,   324,
       0,   325,   326,   327,   328,   329,   330,   331,   332,   333,
       0,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    73,     0,   959,   367,     0,
     368,     0,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   379,   380,   381,   382,   383,     0,   384,   385,
     798,   799,   800,   801,   802,   803,   804,     0,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,   805,   806,    21,    22,   807,
       0,    24,     0,     0,    25,    26,    27,   808,   809,   810,
      29,    30,    31,     0,    33,   811,    35,     0,    37,   812,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     813,   814,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,   815,   816,   876,   799,     0,
       0,     0,   803,   804,     0,     0,     0,     0,   817,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   805,   806,   124,   125,     0,     0,    24,     0,
       0,    25,    26,    27,     0,   888,     0,     0,    30,     0,
       0,     0,   811,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   813,   814,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,   876,   799,     0,     0,     0,   803,   804,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,   805,   806,   124,
     125,     0,     0,    24,     0,   817,    25,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   811,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   813,   814,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,   121,   122,     0,
       0,     0,   803,   804,     0,     0,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   805,   806,   124,   125,     0,     0,    24,     0,
     817,    25,    26,    27,     0,     0,     0,     0,    30,     0,
       0,     0,   811,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   813,   814,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,   121,   122,     0,     0,     0,   930,   804,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   805,   806,   124,   125,
       0,     0,    24,     0,     0,   817,    26,    27,     0,     0,
       0,     0,    30,     0,     0,     0,   811,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   813,   814,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,   121,   122,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   124,   125,     0,     0,    24,   121,   122,   817,
      26,    27,     0,   123,     0,     0,    30,     0,     0,     0,
     126,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   124,   125,     0,     0,    24,     0,
       0,     0,    26,    27,     0,     0,     0,     0,    30,     0,
       0,     0,   126,   143,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
       0,     0,     0,   874,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     5,     0,     0,     0,     6,     7,
       0,     0,     0,     0,     0,     0,   396,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,     0,    24,     0,     0,    25,    26,    27,
       0,    28,     0,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
     121,   122,     0,     0,     0,     6,   123,   177,     0,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   124,   125,     0,
       0,    24,     0,     0,    25,    26,    27,     0,     0,     0,
       0,    30,     0,     0,     0,   126,    35,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   206,     5,     0,     0,     0,     6,   123,
       0,     0,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     124,   125,     0,     0,    24,     0,     0,    25,    26,    27,
       0,   207,     0,     0,    30,     0,     0,     0,   126,   143,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   121,   122,     0,     0,
       0,     6,   123,     0,     0,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   124,   125,     0,     0,    24,     0,     0,
      25,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   126,   143,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   121,
     122,     0,     0,     0,     0,   123,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   124,   125,     0,     0,
      24,     0,     0,     0,    26,    27,     0,     0,     0,     0,
      30,     0,     0,     0,   126,     0,     0,   671,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   672,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   121,   122,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   124,
     125,     0,     0,    24,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   126,    35,     0,
      37,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   121,   122,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   124,   125,     0,     0,    24,     0,     0,     0,
      26,    27,     0,     0,     0,     0,    30,     0,     0,     0,
     126,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   155,   156,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,     0,    24,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   126,     0,     0,   157,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   121,   122,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   124,   125,
       0,     0,    24,     0,     0,     0,    26,    27,     0,     0,
       0,     0,    30,     0,     0,     0,   126,     0,     0,   671,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   121,   122,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   124,   125,     0,     0,    24,   121,   122,     0,    26,
      27,     0,   123,     0,     0,    30,     0,     0,     0,   126,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   124,   125,     0,     0,     0,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   126,     0,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   121,
     122,     0,     0,     0,     0,   256,     0,     0,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   257,   258,   124,   125,     0,     0,
       0,     0,   482,     0,    26,    27,     0,   256,     0,     0,
       0,     0,     0,     0,   259,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   257,   258,     0,     0,
       0,     0,     0,     0,     0,     0,    26,    27,     0,     0,
       0,     0,   483,     0,     0,     0,   259,     0,     0,   260,
     261,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   260,   261,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   432,   433,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   434,     0,     0,     0,   369,   370,     0,   372,   373,
     374,   375,   376,   377,   378,   379,   380,   381,   382,   435,
       0,   384
};

static const yytype_int16 yycheck[] =
{
       6,    28,   172,   127,   230,    36,    31,    31,    31,    36,
       4,     5,    31,     4,     5,    31,   283,   549,   442,    88,
      89,    90,    91,   445,    98,    31,   154,    21,    22,   678,
     176,   154,   255,   129,   464,   294,   295,   486,   545,   254,
       3,   580,   571,   789,   790,   141,   404,   396,   154,   479,
     488,   478,    80,   707,   269,    81,    82,   172,    35,    86,
      80,   817,    25,    80,    28,    28,    34,   119,    36,    80,
       3,   808,    36,    36,   170,    35,   683,   173,   147,   148,
     149,   150,   787,   788,   738,    80,   138,    80,    94,     9,
     119,   828,   120,     0,   748,    28,   808,   809,   127,    32,
     120,   708,    96,    36,   124,    80,   230,   124,   119,   178,
     179,   180,   181,     9,   124,     9,   828,   213,   874,    80,
     248,   249,    86,    86,   119,   248,   249,   120,    48,   636,
     121,   122,    28,    29,    28,    29,   251,   517,    80,   267,
     209,   210,   248,    37,   267,   583,   495,   574,   578,   124,
     508,   120,    48,   268,    48,   132,    34,   272,   135,   120,
     128,   155,   156,    96,   155,   156,   119,   589,   590,   163,
     120,    41,   132,   885,   120,   135,   888,   273,   120,   394,
     207,    51,   124,   298,     9,   138,   840,    83,    84,    83,
      84,   185,   138,   145,   146,   189,   190,   704,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   177,   177,   206,   962,   647,   151,   726,
     184,   184,    80,    48,   604,   605,   122,   120,   608,   609,
     610,   611,   612,   613,   614,   615,   616,   617,     9,   120,
       9,    80,   236,   207,   207,    80,   252,    80,   254,    80,
     121,   956,    80,   119,    37,   249,   127,    28,    29,    28,
      29,   127,   120,   269,    35,   119,   362,   363,   797,   120,
       9,   367,   368,   127,    28,    28,   270,    48,   393,    48,
     119,    80,    36,    36,   119,   734,   119,   383,   120,    28,
      29,   119,   120,   120,   120,   124,   124,   230,    37,   119,
     294,   295,   122,   449,   953,   844,   126,   120,   837,    48,
     690,   124,    83,    84,    83,    84,   431,   120,   120,   749,
     119,   120,   120,     9,   120,   124,   120,   751,   397,   119,
     404,   546,   122,   120,   124,   119,   126,     9,   122,   120,
     120,   469,    28,    29,    83,    84,   469,   120,   120,    35,
     120,    80,   859,   122,   120,   120,    28,    29,   427,   428,
     120,   132,    48,   469,   135,   480,     9,    10,    11,    12,
      13,    14,    15,    16,   124,   122,    48,   122,   122,   122,
      41,   496,   497,   498,   499,   500,   120,    80,   394,   125,
     560,   119,   131,   489,   490,    81,    82,    83,    84,   119,
      80,    80,   122,    80,   124,    48,   126,   577,   940,   676,
     404,    83,    84,   407,   408,   409,   639,    80,   412,   126,
     679,   680,   645,   638,   854,   122,    80,     9,    10,    11,
      12,    13,    14,    15,    16,   563,   564,   565,    80,    80,
     563,   564,   565,   119,   122,   560,   132,   575,   119,   135,
     122,   122,   575,   124,   448,   126,   122,   563,   564,   565,
     122,   121,   577,   457,   119,   121,    48,   122,   127,   124,
     127,   126,   587,   588,     5,     6,     7,   120,     9,   122,
     902,   127,   127,   127,   478,   119,   129,   130,   122,   127,
     124,   921,   126,   487,   488,   127,   127,    28,    29,   669,
      17,   127,    19,    20,    21,    22,   119,   127,    25,   122,
     127,   124,     9,   126,   508,   643,   127,    48,   127,   127,
     643,   121,     9,   127,    11,    12,    13,   121,    15,    16,
       9,    28,    29,   138,    80,   138,   530,   643,   120,   128,
     546,    28,    29,   139,     9,   121,   120,   129,   130,    28,
      29,    48,    83,    84,   669,   127,     9,   125,    37,   122,
     125,    48,   122,    28,    29,   123,   125,   737,    85,    48,
     127,   121,    37,     9,   580,    28,    29,   128,   125,   707,
     574,   575,   127,    48,   707,    43,    83,    84,   121,   583,
     125,   121,    28,    29,   600,    48,    83,    84,   123,   127,
     121,   121,    81,    82,    83,    84,   120,   139,   834,   127,
     738,    16,    48,   139,    16,   738,    81,    82,    83,    84,
     748,   120,   737,   138,   126,   748,   127,   123,    81,    82,
      83,    84,   638,   120,   123,   121,   120,   120,   138,   121,
     634,   121,   129,   130,   131,    81,    82,    83,    84,   875,
       9,   125,   123,     9,   880,    11,    12,    13,    14,    15,
      16,   123,   121,   127,   121,   121,   121,   121,   120,    28,
      29,   121,   842,   121,   121,   681,   121,   683,    37,   121,
     121,   687,    10,   127,   127,   679,   680,   124,   120,    48,
     129,   130,    48,   132,   133,   134,   135,   136,   137,   795,
       9,   127,   708,   734,   121,   121,   932,   734,   122,   734,
     734,   734,   840,   707,     9,   734,   122,   840,   734,    28,
      29,   119,   948,   119,    83,    84,   127,   842,     9,   121,
     127,    11,    11,    28,    29,   121,   139,   121,   908,    48,
     734,   121,   120,   120,   738,     9,   121,    28,    29,   119,
     126,   875,   119,    48,   748,   870,   121,   121,   121,   753,
     829,   830,   831,   121,    28,    29,   121,    48,   125,   123,
     123,   734,   121,   121,    83,    84,   127,   947,   121,   810,
     120,   808,   809,   119,    48,   123,   123,   119,    83,    84,
     886,   121,    86,   908,   734,   873,   734,   803,   249,   793,
     676,   828,    83,    84,   798,   799,   869,   798,   799,   878,
     879,   249,   881,   882,   808,   809,    99,   793,   933,    83,
      84,   890,   891,   817,   920,   675,   844,   940,   163,   851,
     862,   946,   947,   847,   828,    93,   245,   643,   844,   734,
     834,   224,     3,    -1,    -1,   851,   840,   810,    -1,    -1,
      -1,    -1,    -1,   847,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   888,    -1,    -1,    -1,   934,   935,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     874,    -1,   876,    -1,    -1,   876,    -1,    -1,    -1,    -1,
     884,   885,    -1,    -1,   888,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   885,    -1,   930,     3,     4,     5,     6,     7,
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
      -1,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
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
     119,   120,   121,   122,    -1,   124,   125,   126,   127,   128,
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
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
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
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,   121,
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
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
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
      -1,    -1,   117,    -1,   119,   120,   121,   122,    -1,   124,
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
      -1,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
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
     139,   140,   141,     3,     4,     5,     6,     7,     8,     9,
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
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
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
      -1,    -1,    -1,    -1,    -1,   117,    -1,   119,   120,   121,
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
      -1,    -1,   117,    -1,   119,   120,    -1,   122,    -1,   124,
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
      -1,    -1,    -1,    -1,    -1,    -1,   117,    -1,    -1,   120,
     121,   122,    -1,   124,   125,   126,   127,   128,   129,   130,
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
     122,    -1,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,    -1,   140,   141,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    34,    -1,    -1,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    -1,    47,    48,    49,    -1,    51,    52,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,    -1,   118,   119,     3,     4,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,   131,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    37,    38,    39,    -1,    41,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,   131,    37,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    -1,    -1,     3,     4,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
     131,    37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,     3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,   131,    38,    39,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    -1,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,     3,     4,   131,
      38,    39,    -1,     9,    -1,    -1,    44,    -1,    -1,    -1,
      48,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    -1,    -1,    34,    -1,
      -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,
      -1,    -1,    48,    49,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      -1,    -1,    -1,   131,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   122,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    -1,    34,    -1,    -1,    37,    38,    39,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,    -1,   119,
       3,     4,    -1,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    -1,
      -1,    34,    -1,    -1,    37,    38,    39,    -1,    -1,    -1,
      -1,    44,    -1,    -1,    -1,    48,    49,    -1,    51,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    -1,    -1,    34,    -1,    -1,    37,    38,    39,
      -1,    41,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,
      37,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      34,    -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,
      44,    -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    79,    -1,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    48,    49,    -1,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    -1,    -1,    34,    -1,    -1,    -1,
      38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,
      48,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    95,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    -1,    -1,    34,
      -1,    -1,    -1,    38,    39,    -1,    -1,    -1,    -1,    44,
      -1,    -1,    -1,    48,    -1,    -1,    51,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      -1,    -1,    34,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    -1,    -1,    34,     3,     4,    -1,    38,
      39,    -1,     9,    -1,    -1,    44,    -1,    -1,    -1,    48,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    -1,    -1,    -1,    -1,    -1,
      -1,    38,    39,    -1,    -1,    -1,    -1,    44,    -1,    -1,
      -1,    48,    -1,    -1,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    -1,    -1,
      -1,    -1,     4,    -1,    38,    39,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    48,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    38,    39,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   120,    -1,    -1,    -1,   124,   125,    -1,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
      -1,   140
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   143,     0,   144,     3,     4,     8,     9,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    34,    37,    38,    39,    41,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   119,   145,   146,   154,   157,   170,
     171,   172,   173,   174,   176,   180,   181,   190,   192,   193,
     196,   197,   198,   223,   224,   250,   264,   265,   266,   267,
     269,   275,   276,   280,   281,   282,   283,   286,   299,   324,
       9,    28,    29,    48,    83,    84,   122,   225,   282,   225,
     282,     3,     4,     9,    30,    31,    48,   265,   276,   120,
     124,     9,    28,    29,    48,    83,    84,   158,   225,     9,
      48,   122,   225,    49,   264,   285,   284,   192,   193,   196,
     197,   264,   276,   124,   268,     3,     4,    51,   154,   157,
     170,   171,   172,   265,     9,    28,    29,    48,    83,    84,
     122,   276,   326,   120,   124,    41,    51,    10,   192,   193,
     196,   197,   250,   253,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,   120,   120,   120,   120,
     120,   120,   120,   120,   120,   120,     3,    41,   146,   192,
     197,   264,   119,   122,   226,   226,   226,   226,   226,   267,
     265,     9,    28,    29,    37,    48,    81,    82,    83,    84,
     194,   201,   203,   206,   209,   225,   238,   252,   255,   258,
     276,    35,   132,   135,   277,   278,   279,   223,    80,    80,
     119,   325,   124,   149,   124,   147,     9,    28,    29,    48,
      83,    84,     9,    48,     9,    48,   201,    80,   325,   271,
     122,   155,   325,   122,   120,   286,   286,   226,   226,   226,
     226,   225,   125,   182,     9,    48,   269,   274,   275,   225,
     225,   119,     9,    48,    81,    82,   225,   258,   325,   175,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    41,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,   119,   120,   122,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   140,   141,   283,   323,   324,   328,
     329,   330,   331,   325,   270,   253,   122,   192,   264,   226,
     226,   226,   226,   119,   127,   192,   225,   301,   304,   305,
     225,   225,   309,   225,   225,   225,   225,   225,   225,   225,
     225,   225,   225,   225,   225,   225,   225,   192,   197,   226,
     226,   325,    53,    54,   120,   138,   322,   323,   201,   206,
     276,   202,   207,   120,   124,   259,   225,   241,   277,   251,
     256,    80,   135,   279,   274,     9,    48,   131,   198,   213,
     215,   225,   274,   119,   123,   327,   328,   265,   272,   126,
     287,   272,   287,   121,   272,   160,   161,   225,   122,   123,
     325,   199,     4,    44,   183,   185,   186,   187,   281,   122,
     122,   241,   241,   119,   123,   122,   325,   325,   325,   325,
     325,   121,   272,   119,   143,   226,   252,   254,   277,   121,
     127,   225,   225,   225,   127,   127,   225,   127,   127,   127,
     127,   127,   127,   127,   127,   127,   127,   127,   121,   121,
     127,   226,   226,   123,   138,   138,   121,   139,   204,    80,
      34,    36,   128,   208,   208,   210,   211,   260,   261,   121,
     225,   253,   128,   242,   243,   220,   221,   225,   214,   120,
     326,   127,   125,     5,     6,     7,   274,   288,   289,   122,
     125,   122,   125,   123,   127,   128,   160,   326,   123,   229,
     230,   125,   127,   181,   188,   225,   188,   325,   325,   121,
     121,   143,   121,   121,   121,   123,   139,   125,   123,   252,
     300,   127,   121,   121,   306,   308,   127,   280,   312,   314,
     316,   318,   313,   315,   317,   319,   320,   321,   225,   139,
     139,   120,    16,    16,   229,   272,   138,   120,   239,   260,
     261,   119,   244,   120,   126,   217,   216,   119,   273,   150,
     274,   274,   274,   127,   151,   148,   151,   159,   160,     9,
      11,    12,    13,    15,    16,    48,   120,   129,   130,   131,
     162,   163,   164,   168,   225,   269,   275,   123,   119,   326,
     121,    51,    79,   231,   233,   265,   184,   188,   189,   123,
     123,   120,   260,   120,   260,   123,   265,   302,   280,   280,
     310,   121,   280,   280,   280,   280,   280,   280,   280,   280,
     280,   280,   121,   127,   205,   121,   125,   262,   240,     9,
      10,    11,    12,    13,    14,    15,    16,    48,   120,   122,
     129,   130,   245,   291,   297,   298,   222,   219,   225,   229,
     272,   287,   288,   123,   152,   287,   123,   326,   167,   129,
     130,   132,   133,   134,   135,   136,   137,   169,   165,   156,
     119,   200,   127,   234,   238,   183,   242,   241,   241,   227,
     228,   233,   119,   227,   119,   121,   265,   307,   121,   280,
     121,   121,   121,   121,   121,   121,   121,   121,   127,   127,
     121,   229,   120,   164,   263,   227,   124,   294,   246,   293,
     292,    10,   229,   127,   218,   120,   121,   122,     3,     4,
       5,     6,     7,     8,     9,    28,    29,    32,    40,    41,
      42,    48,    52,    83,    84,   118,   119,   131,   153,   154,
     157,   170,   171,   172,   173,   177,   178,   180,   181,   191,
     195,   197,   213,   250,   264,   290,   299,   122,   119,   164,
     166,   164,   326,   208,   232,   225,   257,   237,   119,   119,
     121,   127,   121,   303,   127,   311,    11,    11,   121,   212,
     139,   121,   295,   291,   291,     9,   298,   298,   121,   219,
     325,   151,   225,   225,   131,   265,     3,   178,   195,   197,
     264,   195,   197,   250,   264,   120,   120,   220,    41,   178,
     195,   197,   226,   226,   226,   206,   126,   151,   121,   164,
     119,   231,   235,   257,   119,   228,   119,   121,   326,   121,
     121,   121,   229,   266,   121,   248,   218,   121,   123,   119,
     122,   126,   179,   179,   220,   206,   226,   226,   226,   226,
       8,   195,   264,   325,   195,   197,   226,   226,   123,   260,
     121,   121,   121,   125,   127,   247,   325,   326,   265,   121,
     121,   226,   226,   236,   239,   120,   249,   123,   123,   119,
     119,   242,   296,   291,   119,   298,   121
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
#line 726 "vtkParse.y"
    { delSig(); clearTypeId(); clearTemplate(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 744 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 753 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 755 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { reject_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 760 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 769 "vtkParse.y"
    { end_class(); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { end_class(); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 774 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 775 "vtkParse.y"
    { end_class(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 777 "vtkParse.y"
    { delSig(); clearTypeId(); clearTemplate(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 794 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 795 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 797 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 798 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    { output_function(); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 800 "vtkParse.y"
    { output_function(); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 801 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    { output_function(); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    { output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 805 "vtkParse.y"
    { output_function(); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 806 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 817 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 818 "vtkParse.y"
    {end_enum();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 820 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 821 "vtkParse.y"
    {end_enum();}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 826 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 831 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 836 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 837 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 838 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(3) - (3)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 842 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 843 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(2) - (4)].str)) +
                                  strlen((yyvsp[(4) - (4)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (4)].str), (yyvsp[(2) - (4)].str), (yyvsp[(4) - (4)].str));
       }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 848 "vtkParse.y"
    {postSig("(");}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 849 "vtkParse.y"
    {
         postSig(")");
         (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (4)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(3) - (4)].str));
       }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 855 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 855 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 858 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 858 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 871 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 872 "vtkParse.y"
    { popNamespace(); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 900 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 901 "vtkParse.y"
    { postSig("template<");
          clearTypeId(); clearVarName(); clearVarValue(); startTemplate(); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 903 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 906 "vtkParse.y"
    { postSig(", ");
                 clearTypeId(); clearVarName(); clearVarValue(); }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 911 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTypes[i] = (yyvsp[(1) - (2)].integer);
               currentTemplate->ArgClasses[i] = vtkstrdup(getTypeId());
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 924 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 925 "vtkParse.y"
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

  case 157:

/* Line 1455 of yacc.c  */
#line 935 "vtkParse.y"
    {postSig("class ");}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 936 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 938 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); clearVarValue(); }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 946 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 959 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 965 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 982 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 986 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
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
#line 1000 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 1004 "vtkParse.y"
    { postSig(")"); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 1005 "vtkParse.y"
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

  case 183:

/* Line 1455 of yacc.c  */
#line 1019 "vtkParse.y"
    { postSig(")"); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 1020 "vtkParse.y"
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

  case 185:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 1032 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1037 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
    { postSig(")"); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1040 "vtkParse.y"
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

  case 191:

/* Line 1455 of yacc.c  */
#line 1053 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
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

  case 193:

/* Line 1455 of yacc.c  */
#line 1072 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1081 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1090 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1092 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1093 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
    { postSig("("); }
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1111 "vtkParse.y"
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

  case 209:

/* Line 1455 of yacc.c  */
#line 1124 "vtkParse.y"
    { postSig("(");}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1126 "vtkParse.y"
    {postSig("const ");}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1128 "vtkParse.y"
    {postSig("static ");}
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1129 "vtkParse.y"
    {postSig("static ");}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1131 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1132 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1133 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1135 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1136 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1144 "vtkParse.y"
    {clearTypeId();}
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1146 "vtkParse.y"
    { currentFunction->IsVariadic = 1; postSig("..."); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1150 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1153 "vtkParse.y"
    { clearVarName(); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1153 "vtkParse.y"
    { clearArray(); }
    break;

  case 235:

/* Line 1455 of yacc.c  */
#line 1154 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int datatype = (yyvsp[(1) - (5)].integer);
      char *cp;
      int j, n;

      if (getArrayNDims() == 1)
        {
        datatype = add_pointer_to_type(datatype, VTK_PARSE_POINTER);
        cp = getArraySize(0);
        while (*cp != '\0' && *cp >= '0' && *cp <= '9') { cp++; }
        if (*cp == '\0')
          {
          currentFunction->ArgCounts[0] = (int)atol(getArraySize(0));
          }
        }
      else if (getArrayNDims() > 1)
        {
        datatype = add_pointer_to_type(datatype, VTK_PARSE_ARRAY_MULTI);
        currentFunction->ArrayFailure = 1;
        }

      n = getArrayNDims();
      for (j = 0; j < n; j++)
        {
        currentFunction->ArgDimensions[i][j] = getArraySize(j);
        }
      numberOfDimensions = 0;

      currentFunction->ArgTypes[i] = datatype;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
      clearVarValue();
    }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1198 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1204 "vtkParse.y"
    { clearVarName(); }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1205 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("unknown");
      currentFunction->ArrayFailure = 1;
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
     }
    break;

  case 240:

/* Line 1455 of yacc.c  */
#line 1219 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("*");
               (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 241:

/* Line 1455 of yacc.c  */
#line 1221 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(1) - (1)].str)); postSig("&");
               (yyval.integer) = VTK_PARSE_REF; }
    break;

  case 242:

/* Line 1455 of yacc.c  */
#line 1224 "vtkParse.y"
    { (yyval.integer) = 0; }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1225 "vtkParse.y"
    { postSig(")("); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1226 "vtkParse.y"
    {
         postSig(")");
         (yyval.integer) = VTK_PARSE_FUNCTION;
       }
    break;

  case 245:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    {
         (yyval.integer) = VTK_PARSE_ARRAY_MULTI;
       }
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    { postSig("="); }
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1242 "vtkParse.y"
    { postSig("{ "); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1243 "vtkParse.y"
    {
          char *cp;
          postSig("}");
          cp = (char *)malloc(strlen((yyvsp[(3) - (6)].str)) + strlen((yyvsp[(4) - (6)].str)) + 5);
          sprintf(cp, "{ %s%s }", (yyvsp[(3) - (6)].str), (yyvsp[(4) - (6)].str));
          (yyval.str) = cp;
        }
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
    { postSig(", "); }
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    {(yyval.str) = vtkstrdup("");}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    { postSig(", "); }
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    {
          char *cp;
          cp = (char *)malloc(strlen((yyvsp[(1) - (4)].str)) + strlen((yyvsp[(4) - (4)].str)) + 3);
          sprintf(cp, "%s, %s", (yyvsp[(1) - (4)].str), (yyvsp[(4) - (4)].str));
          (yyval.str) = cp;
        }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    {
        int type = (yyvsp[(1) - (2)].integer);
        if (getVarValue() && ((type & VTK_PARSE_CONST) != 0) &&
            ((type & VTK_PARSE_INDIRECT) == 0) && getArrayNDims() == 0)
          {
          add_constant(getVarName(), getVarValue(),
                       (type & VTK_PARSE_UNQUALIFIED_TYPE), getTypeId(), 0);
          }
        }
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    {clearVarValue();}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str)); clearArray();}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    {postSig("[");}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    {postSig("]");}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    {pushArray("");}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    {pushArray((yyvsp[(1) - (1)].str));}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1297 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1299 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1300 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1303 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1304 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1308 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1310 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1311 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1317 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1318 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1320 "vtkParse.y"
    {postSig(", ");}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1322 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1323 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1340 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1345 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1360 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1361 "vtkParse.y"
    { postSig("&"); (yyval.integer) = ((yyvsp[(1) - (2)].integer) | VTK_PARSE_REF);}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1362 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1367 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer); }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1369 "vtkParse.y"
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

  case 318:

/* Line 1455 of yacc.c  */
#line 1380 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1381 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1384 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1385 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1387 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1388 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1389 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1393 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1394 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1398 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1400 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1402 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1409 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1410 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1411 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1412 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1413 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1414 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1419 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1420 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1420 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1421 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1422 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1423 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1426 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1427 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1428 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1430 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1431 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1432 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1442 "vtkParse.y"
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1448 "vtkParse.y"
    {access_level = VTK_ACCESS_PUBLIC;}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1449 "vtkParse.y"
    {access_level = VTK_ACCESS_PROTECTED;}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1450 "vtkParse.y"
    {access_level = VTK_ACCESS_PRIVATE;}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1452 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1453 "vtkParse.y"
    {postSig("+");}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1453 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1454 "vtkParse.y"
    {postSig("-");}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1454 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1457 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1458 "vtkParse.y"
    {postSig("(");}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1458 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1459 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1460 "vtkParse.y"
    {postSig("<(");}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1461 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1468 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1469 "vtkParse.y"
    {
                int i = strlen((yyvsp[(1) - (2)].str));
                char *cp = (char *)malloc(i + strlen((yyvsp[(2) - (2)].str)) + 1);
                strcpy(cp, (yyvsp[(1) - (2)].str));
                strcpy(&cp[i], (yyvsp[(2) - (2)].str));
                (yyval.str) = cp; }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1476 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1477 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1478 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1479 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1480 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1481 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1482 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1484 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1488 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1489 "vtkParse.y"
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

  case 396:

/* Line 1455 of yacc.c  */
#line 1502 "vtkParse.y"
    {postSig("Get");}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1503 "vtkParse.y"
    {markSig();}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1503 "vtkParse.y"
    {swapSig();}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1504 "vtkParse.y"
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

  case 400:

/* Line 1455 of yacc.c  */
#line 1516 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1517 "vtkParse.y"
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

  case 402:

/* Line 1455 of yacc.c  */
#line 1530 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1531 "vtkParse.y"
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

  case 404:

/* Line 1455 of yacc.c  */
#line 1544 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1544 "vtkParse.y"
    {closeSig();}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1546 "vtkParse.y"
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

  case 407:

/* Line 1455 of yacc.c  */
#line 1590 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1591 "vtkParse.y"
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

  case 409:

/* Line 1455 of yacc.c  */
#line 1605 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1606 "vtkParse.y"
    {markSig();}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1606 "vtkParse.y"
    {swapSig();}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1607 "vtkParse.y"
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

  case 413:

/* Line 1455 of yacc.c  */
#line 1620 "vtkParse.y"
    {
   sprintf(temps,"%sOn",(yyvsp[(3) - (6)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   delSig();
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
   delSig();
   postSig("void ");
   postSig(temps);
   postSig("();");
   output_function();
   }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1645 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1646 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1651 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1655 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1656 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1660 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1661 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1665 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1666 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1670 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1671 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1675 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1676 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1680 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1681 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1685 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1687 "vtkParse.y"
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

  case 432:

/* Line 1455 of yacc.c  */
#line 1706 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1708 "vtkParse.y"
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

  case 434:

/* Line 1455 of yacc.c  */
#line 1728 "vtkParse.y"
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

  case 435:

/* Line 1455 of yacc.c  */
#line 1794 "vtkParse.y"
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

  case 436:

/* Line 1455 of yacc.c  */
#line 1864 "vtkParse.y"
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

  case 437:

/* Line 1455 of yacc.c  */
#line 1931 "vtkParse.y"
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

  case 438:

/* Line 1455 of yacc.c  */
#line 2004 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 2005 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 2006 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 2007 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 2010 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 2011 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 2011 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 2012 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 2012 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 2013 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 2013 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 2014 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 2014 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 2015 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 2015 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 2016 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 2016 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 2017 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 2018 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 2019 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 2020 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 2021 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 2022 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 2023 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 2024 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 2025 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 2026 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 2027 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 2028 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 2029 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 2030 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 2031 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 2032 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 2033 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 473:

/* Line 1455 of yacc.c  */
#line 2034 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 474:

/* Line 1455 of yacc.c  */
#line 2035 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 475:

/* Line 1455 of yacc.c  */
#line 2036 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 476:

/* Line 1455 of yacc.c  */
#line 2037 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 477:

/* Line 1455 of yacc.c  */
#line 2038 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 478:

/* Line 1455 of yacc.c  */
#line 2039 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 479:

/* Line 1455 of yacc.c  */
#line 2040 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 480:

/* Line 1455 of yacc.c  */
#line 2041 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 481:

/* Line 1455 of yacc.c  */
#line 2042 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 482:

/* Line 1455 of yacc.c  */
#line 2043 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 483:

/* Line 1455 of yacc.c  */
#line 2050 "vtkParse.y"
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
#line 7276 "vtkParse.tab.c"
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
#line 2090 "vtkParse.y"

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

  sigAllocatedLength = 0;
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;

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
  currentEnumName = NULL;
  currentEnumValue = NULL;
  if (name)
    {
    currentEnumName = text;
    strcpy(currentEnumName, name);
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

  /* look for VAR FUNCTIONS */
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

  /* reject multi-dimensional arrays from wrappers */
  for (i = 0; i < currentFunction->NumberOfArguments; i++)
    {
    switch (currentFunction->ArgTypes[i] & VTK_PARSE_INDIRECT)
      {
      case VTK_PARSE_ARRAY_MULTI:
      case VTK_PARSE_BAD_INDIRECT:
        currentFunction->ArrayFailure = 1;
        break;
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
  unsigned int  h_type;
  int  h_value;
  FunctionInfo *func_info;
  ClassInfo *class_info;
  NamespaceInfo *contents;
  int i, j;

  contents = file_info->Contents;

  /* read each hint line in succession */
  while (fscanf(hfile,"%s %s %x %i", h_cls, h_func, &h_type, &h_value) != EOF)
    {
    /* erase "ref" from hint type */
    h_type = (h_type & ~VTK_PARSE_REF);

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
              ((int)h_type == (func_info->ReturnType & ~VTK_PARSE_REF)))
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

