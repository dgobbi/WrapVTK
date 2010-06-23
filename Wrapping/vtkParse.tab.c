
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

/* Define the division between type and array count */
#define VTK_PARSE_COUNT_START 0x10000

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo data;
FileInfo *namespaceStack[10];
int namespaceDepth = 0;
FileInfo *currentNamespace = NULL;
ClassInfo *currentClass = NULL;
FunctionInfo *currentFunction = NULL;

int parseDebug;
char temps[2048];
int  in_public;
int  in_protected;
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

void start_class(const char *classname, int is_struct);
void end_class();
void output_function(void);
void reject_function(void);
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int global);

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n);
void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n);

/* initializer functions */
void InitFile(FileInfo *file_info);
void InitClass(ClassInfo *cls);
void InitFunction(FunctionInfo *func);
void InitConstant(ConstantInfo *con);

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
  FileInfo *oldNamespace = currentNamespace;

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
    currentNamespace = (FileInfo *)malloc(sizeof(FileInfo));
    InitFile(currentNamespace);
    currentNamespace->Name = vtkstrdup(name);
    oldNamespace->Namespaces[oldNamespace->NumberOfNamespaces++] =
      currentNamespace;
    }

  namespaceStack[namespaceDepth++] = oldNamespace;
}

/* leave the namespace */
void popNamespace()
{
  currentNamespace = namespaceStack[--namespaceDepth];
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
    size_t i, m, n, depth;
    char *cp;
    checkSigSize(arg);
    cp = currentFunction->Signature;
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



/* Line 189 of yacc.c  */
#line 559 "vtkParse.tab.c"

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
     FLOAT_LITERAL = 268,
     CHAR_LITERAL = 269,
     INT = 270,
     FLOAT = 271,
     SHORT = 272,
     LONG = 273,
     LONG_LONG = 274,
     INT64__ = 275,
     DOUBLE = 276,
     VOID = 277,
     CHAR = 278,
     SIGNED_CHAR = 279,
     BOOL = 280,
     OSTREAM = 281,
     ISTREAM = 282,
     ENUM = 283,
     UNION = 284,
     CLASS_REF = 285,
     OTHER = 286,
     CONST = 287,
     CONST_PTR = 288,
     CONST_EQUAL = 289,
     OPERATOR = 290,
     UNSIGNED = 291,
     SIGNED = 292,
     FRIEND = 293,
     INLINE = 294,
     MUTABLE = 295,
     TEMPLATE = 296,
     TYPENAME = 297,
     TYPEDEF = 298,
     NAMESPACE = 299,
     USING = 300,
     VTK_ID = 301,
     STATIC = 302,
     EXTERN = 303,
     VAR_FUNCTION = 304,
     ARRAY_NUM = 305,
     VTK_LEGACY = 306,
     NEW = 307,
     DELETE = 308,
     LPAREN_POINTER = 309,
     LPAREN_AMPERSAND = 310,
     OP_LSHIFT_EQ = 311,
     OP_RSHIFT_EQ = 312,
     OP_LSHIFT = 313,
     OP_RSHIFT = 314,
     OP_ARROW_POINTER = 315,
     OP_ARROW = 316,
     OP_INCR = 317,
     OP_DECR = 318,
     OP_PLUS_EQ = 319,
     OP_MINUS_EQ = 320,
     OP_TIMES_EQ = 321,
     OP_DIVIDE_EQ = 322,
     OP_REMAINDER_EQ = 323,
     OP_AND_EQ = 324,
     OP_OR_EQ = 325,
     OP_XOR_EQ = 326,
     OP_LOGIC_AND_EQ = 327,
     OP_LOGIC_OR_EQ = 328,
     OP_LOGIC_AND = 329,
     OP_LOGIC_OR = 330,
     OP_LOGIC_EQ = 331,
     OP_LOGIC_NEQ = 332,
     OP_LOGIC_LEQ = 333,
     OP_LOGIC_GEQ = 334,
     ELLIPSIS = 335,
     DOUBLE_COLON = 336,
     StdString = 337,
     UnicodeString = 338,
     IdType = 339,
     TypeInt8 = 340,
     TypeUInt8 = 341,
     TypeInt16 = 342,
     TypeUInt16 = 343,
     TypeInt32 = 344,
     TypeUInt32 = 345,
     TypeInt64 = 346,
     TypeUInt64 = 347,
     TypeFloat32 = 348,
     TypeFloat64 = 349,
     SetMacro = 350,
     GetMacro = 351,
     SetStringMacro = 352,
     GetStringMacro = 353,
     SetClampMacro = 354,
     SetObjectMacro = 355,
     GetObjectMacro = 356,
     BooleanMacro = 357,
     SetVector2Macro = 358,
     SetVector3Macro = 359,
     SetVector4Macro = 360,
     SetVector6Macro = 361,
     GetVector2Macro = 362,
     GetVector3Macro = 363,
     GetVector4Macro = 364,
     GetVector6Macro = 365,
     SetVectorMacro = 366,
     GetVectorMacro = 367,
     ViewportCoordinateMacro = 368,
     WorldCoordinateMacro = 369,
     TypeMacro = 370,
     VTK_CONSTANT_DEF = 371,
     VTK_BYTE_SWAP_DECL = 372
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 500 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 836 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 848 "vtkParse.tab.c"

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
#define YYLAST   6317

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  167
/* YYNRULES -- Number of rules.  */
#define YYNRULES  519
/* YYNRULES -- Number of states.  */
#define YYNSTATES  954

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   372

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   139,     2,     2,     2,   133,   134,     2,
     119,   120,   131,   129,   126,   128,   140,   132,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   125,   118,
     123,   127,   124,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   137,     2,   138,   136,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   121,   135,   122,   130,     2,     2,     2,
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
     115,   116,   117
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
     214,   218,   221,   225,   228,   232,   236,   239,   243,   246,
     252,   254,   256,   264,   271,   272,   274,   278,   280,   284,
     286,   288,   290,   292,   294,   296,   298,   300,   303,   307,
     311,   313,   315,   317,   319,   321,   323,   325,   327,   329,
     331,   333,   340,   348,   355,   359,   360,   367,   373,   376,
     380,   384,   386,   391,   395,   400,   409,   418,   428,   438,
     441,   444,   447,   450,   453,   457,   460,   463,   467,   468,
     474,   476,   477,   482,   485,   488,   490,   492,   494,   499,
     504,   507,   511,   516,   520,   523,   527,   530,   534,   536,
     539,   543,   547,   551,   553,   556,   560,   561,   562,   571,
     572,   576,   579,   580,   581,   589,   590,   594,   597,   600,
     603,   604,   606,   607,   613,   614,   615,   625,   626,   630,
     631,   637,   638,   642,   643,   647,   652,   654,   655,   661,
     663,   665,   668,   670,   672,   674,   676,   678,   680,   682,
     686,   687,   689,   691,   695,   696,   697,   700,   702,   704,
     705,   710,   711,   712,   718,   719,   720,   726,   728,   729,
     735,   736,   737,   747,   748,   750,   752,   755,   756,   758,
     761,   765,   768,   772,   778,   784,   791,   800,   809,   811,
     815,   817,   821,   824,   829,   830,   834,   835,   837,   840,
     841,   843,   844,   848,   853,   855,   858,   860,   863,   865,
     868,   871,   873,   875,   877,   878,   882,   883,   889,   890,
     896,   898,   899,   904,   906,   908,   910,   912,   916,   920,
     922,   924,   926,   928,   930,   932,   934,   936,   938,   941,
     944,   947,   950,   953,   954,   959,   960,   965,   966,   971,
     973,   975,   977,   979,   981,   983,   985,   988,   991,   994,
     997,  1000,  1003,  1006,  1009,  1011,  1013,  1015,  1017,  1019,
    1021,  1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,  1039,
    1040,  1044,  1045,  1049,  1051,  1053,  1055,  1057,  1059,  1061,
    1063,  1065,  1066,  1069,  1071,  1075,  1077,  1080,  1083,  1086,
    1088,  1090,  1092,  1094,  1097,  1100,  1102,  1106,  1114,  1116,
    1118,  1120,  1122,  1124,  1126,  1127,  1135,  1136,  1137,  1138,
    1148,  1149,  1155,  1156,  1162,  1163,  1164,  1175,  1176,  1184,
    1185,  1186,  1187,  1197,  1204,  1205,  1213,  1214,  1222,  1223,
    1231,  1232,  1240,  1241,  1249,  1250,  1258,  1259,  1267,  1268,
    1276,  1277,  1287,  1288,  1298,  1303,  1308,  1315,  1323,  1326,
    1329,  1333,  1337,  1339,  1341,  1343,  1345,  1347,  1349,  1351,
    1353,  1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,  1371,
    1373,  1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,
    1393,  1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,
    1413,  1415,  1417,  1419,  1421,  1422,  1425,  1426,  1429,  1431,
    1433,  1435,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,
    1453,  1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,
    1473,  1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,
    1493,  1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,
    1513,  1515,  1517,  1519,  1521,  1523,  1527,  1531,  1535,  1539
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,    -1,    -1,   142,   143,   144,    -1,   237,
      -1,    48,   237,    -1,   154,    -1,   153,    -1,   164,    -1,
     163,    -1,   162,    -1,   165,    -1,   166,    -1,   168,    -1,
     172,    -1,   145,    -1,   175,   145,    -1,    30,    -1,   188,
     218,    -1,    39,   188,   218,    -1,    48,   188,   218,    -1,
     175,   188,   218,    -1,   175,    39,   188,   218,    -1,   187,
     218,    -1,    39,   187,   218,    -1,    48,   187,   218,    -1,
     183,   218,    -1,    39,   183,   218,    -1,    48,   183,   218,
      -1,    48,    10,   183,   218,    -1,   184,   218,    -1,    39,
     184,   218,    -1,    48,   184,   218,    -1,   175,   183,   218,
      -1,   175,    39,   183,   218,    -1,   181,   218,    -1,   275,
      -1,   300,    -1,   259,   118,    -1,     9,   119,   301,   120,
      -1,    46,   119,   301,   120,    -1,   118,    -1,    -1,     4,
     217,   146,   269,   121,   150,   122,    -1,    -1,     4,   217,
     123,   255,   124,   147,   269,   121,   150,   122,    -1,    -1,
       3,   217,   148,   269,   121,   150,   122,    -1,    -1,     3,
     217,   123,   255,   124,   149,   269,   121,   150,   122,    -1,
      -1,    -1,   150,   151,   152,    -1,   272,   125,    -1,   237,
      -1,    40,   237,    -1,   154,    -1,   153,    -1,   164,    -1,
     163,    -1,   162,    -1,   165,    -1,   172,    -1,   170,    -1,
      38,   170,    -1,   169,    -1,    30,    -1,   188,   218,    -1,
      38,   188,   218,    -1,    39,   188,   218,    -1,   174,   218,
      -1,    39,   174,   218,    -1,   186,   218,    -1,    38,   186,
     218,    -1,    39,   186,   218,    -1,   173,   218,    -1,    39,
     173,   218,    -1,   182,   218,    -1,   117,   119,   301,   120,
     118,    -1,   275,    -1,   118,    -1,    28,   217,   121,   155,
     122,   302,   118,    -1,    28,   121,   155,   122,   302,   118,
      -1,    -1,   156,    -1,   156,   126,   155,    -1,   217,    -1,
     217,   127,   159,    -1,   158,    -1,   217,    -1,   258,    -1,
     252,    -1,    11,    -1,    12,    -1,    14,    -1,   157,    -1,
     160,   159,    -1,   157,   161,   159,    -1,   119,   159,   120,
      -1,   128,    -1,   129,    -1,   130,    -1,   128,    -1,   129,
      -1,   131,    -1,   132,    -1,   133,    -1,   134,    -1,   135,
      -1,   136,    -1,     3,   121,   301,   122,   302,   118,    -1,
      29,   217,   121,   301,   122,   302,   118,    -1,    29,   121,
     301,   122,   302,   118,    -1,    45,   302,   118,    -1,    -1,
      44,   259,   167,   121,   142,   122,    -1,    48,    10,   121,
     142,   122,    -1,   175,   170,    -1,     4,   217,   171,    -1,
       3,   217,   171,    -1,   118,    -1,   121,   301,   122,   118,
      -1,   125,   302,   118,    -1,    43,   248,   243,   118,    -1,
      43,     4,   217,   121,   301,   122,   234,   118,    -1,    43,
       3,   217,   121,   301,   122,   234,   118,    -1,    43,   248,
      54,   234,   120,   119,   219,   120,   118,    -1,    43,   248,
      55,   234,   120,   119,   219,   120,   118,    -1,    43,   154,
      -1,    43,   153,    -1,    43,   164,    -1,    43,   163,    -1,
      43,   162,    -1,    43,    49,   118,    -1,   175,   186,    -1,
     175,   188,    -1,    41,   123,   124,    -1,    -1,    41,   123,
     176,   177,   124,    -1,   179,    -1,    -1,   179,   126,   178,
     177,    -1,   180,   233,    -1,   175,   233,    -1,    42,    -1,
       4,    -1,    15,    -1,    51,   119,   183,   120,    -1,    51,
     119,   186,   120,    -1,   247,   197,    -1,   247,   185,   197,
      -1,   259,    81,   130,   212,    -1,   259,    81,   205,    -1,
     259,    81,    -1,   185,   259,    81,    -1,   130,   212,    -1,
       8,   130,   212,    -1,   205,    -1,   247,   197,    -1,     8,
     248,   197,    -1,   259,    81,   189,    -1,   247,   185,   192,
      -1,   189,    -1,   247,   192,    -1,     8,   248,   192,    -1,
      -1,    -1,    35,   247,   119,   190,   221,   120,   191,   200,
      -1,    -1,   194,   193,   200,    -1,   194,   199,    -1,    -1,
      -1,    35,   298,   195,   119,   196,   221,   120,    -1,    -1,
     201,   198,   200,    -1,   201,   199,    -1,   127,    11,    -1,
      34,    11,    -1,    -1,    32,    -1,    -1,   217,   119,   202,
     221,   120,    -1,    -1,    -1,   217,   123,   203,   255,   124,
     119,   204,   221,   120,    -1,    -1,   207,   206,   209,    -1,
      -1,   217,   119,   208,   221,   120,    -1,    -1,   125,   211,
     210,    -1,    -1,   126,   211,   210,    -1,   217,   119,   301,
     120,    -1,   213,    -1,    -1,   217,   119,   214,   221,   120,
      -1,    32,    -1,    47,    -1,    47,    39,    -1,    46,    -1,
       9,    -1,    27,    -1,    26,    -1,    82,    -1,    83,    -1,
     118,    -1,   121,   301,   122,    -1,    -1,   220,    -1,   225,
      -1,   225,   126,   220,    -1,    -1,    -1,   222,   223,    -1,
      80,    -1,   225,    -1,    -1,   225,   126,   224,   223,    -1,
      -1,    -1,   248,   226,   244,   227,   235,    -1,    -1,    -1,
     248,   228,   243,   229,   235,    -1,    49,    -1,    -1,   248,
      55,   230,   242,   120,    -1,    -1,    -1,   248,    54,   231,
     242,   120,   119,   232,   219,   120,    -1,    -1,   217,    -1,
     217,    -1,   260,   217,    -1,    -1,   236,    -1,   127,   273,
      -1,   247,   238,   118,    -1,    49,   118,    -1,    47,    49,
     118,    -1,   247,    55,   217,   120,   118,    -1,   247,    54,
     234,   120,   118,    -1,   247,    54,   234,   120,    50,   118,
      -1,   247,    54,   234,   120,   137,   301,   138,   118,    -1,
     247,    54,   234,   120,   119,   219,   120,   118,    -1,   240,
      -1,   240,   126,   239,    -1,   240,    -1,   240,   126,   239,
      -1,   260,   240,    -1,   260,   240,   126,   239,    -1,    -1,
     243,   241,   235,    -1,    -1,   217,    -1,   217,   244,    -1,
      -1,   245,    -1,    -1,    50,   246,   244,    -1,   137,   302,
     138,   244,    -1,   248,    -1,   216,   248,    -1,   249,    -1,
     249,   260,    -1,   250,    -1,   215,   250,    -1,   250,   215,
      -1,   264,    -1,   252,    -1,   258,    -1,    -1,    42,   251,
     258,    -1,    -1,    46,   123,   253,   255,   124,    -1,    -1,
       9,   123,   254,   255,   124,    -1,   248,    -1,    -1,   248,
     126,   256,   255,    -1,     9,    -1,    46,    -1,   252,    -1,
     258,    -1,   259,    81,   257,    -1,   252,    81,   257,    -1,
       9,    -1,    46,    -1,    27,    -1,    26,    -1,    82,    -1,
      83,    -1,   134,    -1,   131,    -1,    33,    -1,   131,   134,
      -1,   131,   131,    -1,    33,   134,    -1,    33,   131,    -1,
      33,    33,    -1,    -1,   131,   131,   261,   260,    -1,    -1,
      33,   131,   262,   260,    -1,    -1,    33,    33,   263,   260,
      -1,   265,    -1,    82,    -1,    83,    -1,    26,    -1,    27,
      -1,     9,    -1,    46,    -1,     4,     9,    -1,     4,    46,
      -1,     3,     9,    -1,     3,    46,    -1,    29,     9,    -1,
      29,    46,    -1,    28,     9,    -1,    28,    46,    -1,    22,
      -1,    16,    -1,    21,    -1,    25,    -1,    24,    -1,    85,
      -1,    86,    -1,    87,    -1,    88,    -1,    89,    -1,    90,
      -1,    91,    -1,    92,    -1,    93,    -1,    94,    -1,    -1,
      37,   266,   268,    -1,    -1,    36,   267,   268,    -1,   268,
      -1,    23,    -1,    15,    -1,    17,    -1,    18,    -1,    84,
      -1,    19,    -1,    20,    -1,    -1,   125,   270,    -1,   271,
      -1,   271,   126,   270,    -1,   257,    -1,     6,   257,    -1,
       7,   257,    -1,     5,   257,    -1,     5,    -1,     6,    -1,
       7,    -1,   274,    -1,   129,   274,    -1,   128,   274,    -1,
      10,    -1,   119,   273,   120,    -1,     9,   123,   249,   124,
     119,   274,   120,    -1,    11,    -1,    12,    -1,    13,    -1,
      14,    -1,     9,    -1,    46,    -1,    -1,    95,   119,   217,
     126,   276,   248,   120,    -1,    -1,    -1,    -1,    96,   119,
     277,   217,   126,   278,   248,   279,   120,    -1,    -1,    97,
     119,   280,   217,   120,    -1,    -1,    98,   119,   281,   217,
     120,    -1,    -1,    -1,    99,   119,   217,   126,   282,   264,
     283,   126,   302,   120,    -1,    -1,   100,   119,   217,   126,
     284,   264,   120,    -1,    -1,    -1,    -1,   101,   119,   285,
     217,   126,   286,   264,   287,   120,    -1,   102,   119,   217,
     126,   264,   120,    -1,    -1,   103,   119,   217,   126,   288,
     264,   120,    -1,    -1,   107,   119,   217,   126,   289,   264,
     120,    -1,    -1,   104,   119,   217,   126,   290,   264,   120,
      -1,    -1,   108,   119,   217,   126,   291,   264,   120,    -1,
      -1,   105,   119,   217,   126,   292,   264,   120,    -1,    -1,
     109,   119,   217,   126,   293,   264,   120,    -1,    -1,   106,
     119,   217,   126,   294,   264,   120,    -1,    -1,   110,   119,
     217,   126,   295,   264,   120,    -1,    -1,   111,   119,   217,
     126,   296,   264,   126,    11,   120,    -1,    -1,   112,   119,
     217,   126,   297,   264,   126,    11,   120,    -1,   113,   119,
     217,   120,    -1,   114,   119,   217,   120,    -1,   115,   119,
     217,   126,   217,   120,    -1,   115,   119,   217,   126,   217,
     126,   120,    -1,   119,   120,    -1,   137,   138,    -1,    52,
     137,   138,    -1,    53,   137,   138,    -1,   299,    -1,   127,
      -1,   131,    -1,   132,    -1,   128,    -1,   129,    -1,   139,
      -1,   130,    -1,   126,    -1,   123,    -1,   124,    -1,   134,
      -1,   135,    -1,   136,    -1,   133,    -1,    52,    -1,    53,
      -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,
      -1,    61,    -1,    64,    -1,    65,    -1,    66,    -1,    67,
      -1,    68,    -1,    62,    -1,    63,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,    79,    -1,   116,
      -1,    -1,   301,   303,    -1,    -1,   302,   304,    -1,   118,
      -1,   304,    -1,    31,    -1,   305,    -1,   306,    -1,   307,
      -1,    43,    -1,   299,    -1,   125,    -1,   140,    -1,    81,
      -1,     4,    -1,    41,    -1,    27,    -1,    26,    -1,    82,
      -1,    83,    -1,   265,    -1,     9,    -1,    46,    -1,    11,
      -1,    12,    -1,    13,    -1,    14,    -1,    10,    -1,    30,
      -1,    32,    -1,    33,    -1,    34,    -1,     3,    -1,    35,
      -1,    47,    -1,    39,    -1,     8,    -1,    28,    -1,    29,
      -1,    42,    -1,    50,    -1,    49,    -1,    80,    -1,     5,
      -1,     7,    -1,     6,    -1,    44,    -1,    45,    -1,    48,
      -1,   300,    -1,   121,   301,   122,    -1,   119,   301,   120,
      -1,    54,   301,   120,    -1,    55,   301,   120,    -1,   137,
     301,   138,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   632,   632,   632,   632,   635,   636,   637,   638,   639,
     640,   641,   642,   643,   644,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   674,   674,   676,   676,   678,   678,   680,
     680,   683,   683,   683,   685,   686,   687,   688,   689,   690,
     691,   692,   693,   694,   695,   696,   697,   698,   699,   700,
     702,   703,   704,   705,   706,   708,   709,   710,   711,   712,
     713,   714,   722,   724,   726,   726,   726,   728,   728,   732,
     732,   732,   732,   734,   734,   734,   736,   737,   742,   748,
     754,   754,   755,   757,   757,   758,   758,   759,   759,   760,
     760,   762,   764,   766,   768,   770,   770,   773,   775,   777,
     778,   780,   781,   782,   784,   785,   786,   787,   789,   791,
     792,   793,   794,   795,   796,   798,   800,   802,   803,   803,
     806,   807,   807,   809,   809,   811,   812,   813,   815,   817,
     819,   824,   825,   826,   828,   829,   831,   832,   837,   838,
     842,   851,   852,   855,   859,   863,   874,   878,   873,   893,
     893,   904,   921,   922,   921,   929,   929,   940,   957,   958,
     960,   960,   963,   962,   967,   968,   967,   977,   977,   987,
     987,   989,   989,   991,   991,   993,   995,  1009,  1009,  1011,
    1013,  1014,  1016,  1017,  1018,  1019,  1020,  1021,  1023,  1023,
    1025,  1025,  1027,  1027,  1029,  1029,  1029,  1031,  1032,  1035,
    1034,  1038,  1039,  1038,  1057,  1058,  1057,  1076,  1084,  1084,
    1097,  1099,  1097,  1112,  1112,  1114,  1114,  1116,  1116,  1118,
    1121,  1122,  1123,  1124,  1125,  1126,  1127,  1129,  1132,  1133,
    1135,  1136,  1137,  1138,  1141,  1141,  1143,  1143,  1145,  1154,
    1154,  1157,  1157,  1163,  1168,  1169,  1171,  1172,  1174,  1175,
    1176,  1178,  1179,  1181,  1183,  1183,  1187,  1187,  1189,  1189,
    1192,  1192,  1192,  1194,  1195,  1196,  1197,  1199,  1205,  1212,
    1213,  1214,  1215,  1216,  1217,  1230,  1231,  1232,  1233,  1234,
    1235,  1237,  1239,  1241,  1241,  1243,  1243,  1245,  1245,  1248,
    1249,  1250,  1251,  1252,  1253,  1254,  1255,  1256,  1257,  1258,
    1259,  1260,  1261,  1262,  1265,  1266,  1267,  1268,  1269,  1270,
    1271,  1272,  1273,  1274,  1275,  1276,  1277,  1278,  1279,  1280,
    1280,  1281,  1281,  1283,  1286,  1287,  1288,  1289,  1290,  1291,
    1292,  1294,  1294,  1296,  1296,  1298,  1299,  1300,  1301,  1307,
    1308,  1309,  1311,  1312,  1313,  1315,  1316,  1317,  1324,  1325,
    1326,  1327,  1328,  1329,  1331,  1331,  1346,  1347,  1347,  1346,
    1360,  1360,  1375,  1375,  1389,  1389,  1389,  1436,  1435,  1451,
    1452,  1452,  1451,  1465,  1491,  1491,  1496,  1496,  1501,  1501,
    1506,  1506,  1511,  1511,  1516,  1516,  1521,  1521,  1526,  1526,
    1531,  1531,  1552,  1552,  1573,  1639,  1709,  1776,  1850,  1851,
    1852,  1853,  1854,  1856,  1857,  1857,  1858,  1858,  1859,  1859,
    1860,  1860,  1861,  1861,  1862,  1862,  1863,  1864,  1865,  1866,
    1867,  1868,  1869,  1870,  1871,  1872,  1873,  1874,  1875,  1876,
    1877,  1878,  1879,  1880,  1881,  1882,  1883,  1884,  1885,  1886,
    1887,  1888,  1889,  1895,  1918,  1918,  1919,  1919,  1921,  1921,
    1923,  1923,  1923,  1923,  1923,  1924,  1924,  1924,  1924,  1924,
    1924,  1925,  1925,  1925,  1925,  1925,  1926,  1926,  1926,  1926,
    1926,  1926,  1927,  1927,  1927,  1927,  1927,  1927,  1928,  1928,
    1928,  1928,  1928,  1928,  1928,  1929,  1929,  1929,  1929,  1929,
    1929,  1930,  1930,  1930,  1930,  1932,  1933,  1934,  1935,  1936
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "STRUCT", "CLASS", "PUBLIC", "PRIVATE",
  "PROTECTED", "VIRTUAL", "ID", "STRING_LITERAL", "INT_LITERAL",
  "HEX_LITERAL", "FLOAT_LITERAL", "CHAR_LITERAL", "INT", "FLOAT", "SHORT",
  "LONG", "LONG_LONG", "INT64__", "DOUBLE", "VOID", "CHAR", "SIGNED_CHAR",
  "BOOL", "OSTREAM", "ISTREAM", "ENUM", "UNION", "CLASS_REF", "OTHER",
  "CONST", "CONST_PTR", "CONST_EQUAL", "OPERATOR", "UNSIGNED", "SIGNED",
  "FRIEND", "INLINE", "MUTABLE", "TEMPLATE", "TYPENAME", "TYPEDEF",
  "NAMESPACE", "USING", "VTK_ID", "STATIC", "EXTERN", "VAR_FUNCTION",
  "ARRAY_NUM", "VTK_LEGACY", "NEW", "DELETE", "LPAREN_POINTER",
  "LPAREN_AMPERSAND", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT", "OP_ARROW_POINTER", "OP_ARROW", "OP_INCR", "OP_DECR",
  "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ", "OP_DIVIDE_EQ",
  "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND_EQ", "OP_LOGIC_OR_EQ", "OP_LOGIC_AND", "OP_LOGIC_OR",
  "OP_LOGIC_EQ", "OP_LOGIC_NEQ", "OP_LOGIC_LEQ", "OP_LOGIC_GEQ",
  "ELLIPSIS", "DOUBLE_COLON", "StdString", "UnicodeString", "IdType",
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
  "class_def_body", "$@6", "class_def_item", "named_enum",
  "anonymous_enum", "enum_list", "enum_item", "enum_value", "enum_literal",
  "enum_math", "math_unary_op", "math_binary_op", "anonymous_struct",
  "named_union", "anonymous_union", "using", "namespace", "$@7", "extern",
  "template_internal_class", "internal_class", "internal_class_body",
  "typedef", "template_method", "template_operator", "template", "$@8",
  "template_args", "$@9", "template_arg", "template_type",
  "legacy_function", "legacy_method", "function", "scoped_method", "scope",
  "method", "scoped_operator", "operator", "typecast_op_func", "$@10",
  "$@11", "op_func", "$@12", "op_sig", "$@13", "$@14", "func", "$@15",
  "pure_virtual", "maybe_const", "func_sig", "$@16", "$@17", "@18",
  "constructor", "$@19", "constructor_sig", "$@20", "maybe_initializers",
  "more_initializers", "initializer", "destructor", "destructor_sig",
  "$@21", "const_mod", "static_mod", "any_id", "func_body",
  "ignore_args_list", "ignore_more_args", "args_list", "$@22", "more_args",
  "$@23", "arg", "$@24", "$@25", "$@26", "$@27", "$@28", "$@29", "$@30",
  "maybe_id", "maybe_indirect_id", "maybe_var_assign", "var_assign", "var",
  "var_ids", "maybe_indirect_var_ids", "var_id_maybe_assign", "$@31",
  "maybe_var_id", "var_id", "maybe_var_array", "var_array", "$@32",
  "maybe_static_type", "type", "type_red", "type_red1", "$@33",
  "templated_id", "$@34", "$@35", "types", "$@36", "maybe_scoped_id",
  "scoped_id", "class_id", "type_indirection", "$@37", "$@38", "$@39",
  "type_red2", "type_primitive", "$@40", "$@41", "type_integer",
  "optional_scope", "scope_list", "scope_list_item", "scope_type",
  "literal", "literal2", "macro", "$@42", "$@43", "$@44", "$@45", "$@46",
  "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55",
  "$@56", "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63",
  "op_token", "op_token_no_delim", "vtk_constant_def", "maybe_other",
  "maybe_other_no_semi", "other_stuff", "other_stuff_no_semi", "braces",
  "parens", "brackets", 0
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
     365,   366,   367,   368,   369,   370,   371,   372,    59,    40,
      41,   123,   125,    60,    62,    58,    44,    61,    45,    43,
     126,    42,    47,    37,    38,   124,    94,    91,    93,    33,
      46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   141,   142,   143,   142,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   144,   144,   144,   144,   144,   144,   144,
     144,   144,   144,   146,   145,   147,   145,   148,   145,   149,
     145,   150,   151,   150,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   152,   152,   152,   152,   152,   152,   152,   152,
     152,   152,   153,   154,   155,   155,   155,   156,   156,   157,
     157,   157,   157,   158,   158,   158,   159,   159,   159,   159,
     160,   160,   160,   161,   161,   161,   161,   161,   161,   161,
     161,   162,   163,   164,   165,   167,   166,   168,   169,   170,
     170,   171,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   172,   173,   174,   175,   176,   175,
     177,   178,   177,   179,   179,   180,   180,   180,   181,   182,
     183,   184,   184,   184,   185,   185,   186,   186,   186,   186,
     186,   187,   187,   188,   188,   188,   190,   191,   189,   193,
     192,   192,   195,   196,   194,   198,   197,   197,   199,   199,
     200,   200,   202,   201,   203,   204,   201,   206,   205,   208,
     207,   209,   209,   210,   210,   211,   212,   214,   213,   215,
     216,   216,   217,   217,   217,   217,   217,   217,   218,   218,
     219,   219,   220,   220,   221,   222,   221,   223,   223,   224,
     223,   226,   227,   225,   228,   229,   225,   225,   230,   225,
     231,   232,   225,   233,   233,   234,   234,   235,   235,   236,
     237,   237,   237,   237,   237,   237,   237,   237,   238,   238,
     239,   239,   239,   239,   241,   240,   242,   242,   243,   244,
     244,   246,   245,   245,   247,   247,   248,   248,   249,   249,
     249,   250,   250,   250,   251,   250,   253,   252,   254,   252,
     255,   256,   255,   257,   257,   257,   257,   258,   258,   259,
     259,   259,   259,   259,   259,   260,   260,   260,   260,   260,
     260,   260,   260,   261,   260,   262,   260,   263,   260,   264,
     264,   264,   264,   264,   264,   264,   264,   264,   264,   264,
     264,   264,   264,   264,   265,   265,   265,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   266,
     265,   267,   265,   265,   268,   268,   268,   268,   268,   268,
     268,   269,   269,   270,   270,   271,   271,   271,   271,   272,
     272,   272,   273,   273,   273,   273,   273,   273,   274,   274,
     274,   274,   274,   274,   276,   275,   277,   278,   279,   275,
     280,   275,   281,   275,   282,   283,   275,   284,   275,   285,
     286,   287,   275,   275,   288,   275,   289,   275,   290,   275,
     291,   275,   292,   275,   293,   275,   294,   275,   295,   275,
     296,   275,   297,   275,   275,   275,   275,   275,   298,   298,
     298,   298,   298,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   299,   299,   299,   299,   299,   299,   299,
     299,   299,   299,   300,   301,   301,   302,   302,   303,   303,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   304,   304,   304,   304,   304,
     304,   304,   304,   304,   304,   305,   306,   306,   306,   307
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
       3,     2,     3,     2,     3,     3,     2,     3,     2,     5,
       1,     1,     7,     6,     0,     1,     3,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     6,     7,     6,     3,     0,     6,     5,     2,     3,
       3,     1,     4,     3,     4,     8,     8,     9,     9,     2,
       2,     2,     2,     2,     3,     2,     2,     3,     0,     5,
       1,     0,     4,     2,     2,     1,     1,     1,     4,     4,
       2,     3,     4,     3,     2,     3,     2,     3,     1,     2,
       3,     3,     3,     1,     2,     3,     0,     0,     8,     0,
       3,     2,     0,     0,     7,     0,     3,     2,     2,     2,
       0,     1,     0,     5,     0,     0,     9,     0,     3,     0,
       5,     0,     3,     0,     3,     4,     1,     0,     5,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     0,     0,     2,     1,     1,     0,
       4,     0,     0,     5,     0,     0,     5,     1,     0,     5,
       0,     0,     9,     0,     1,     1,     2,     0,     1,     2,
       3,     2,     3,     5,     5,     6,     8,     8,     1,     3,
       1,     3,     2,     4,     0,     3,     0,     1,     2,     0,
       1,     0,     3,     4,     1,     2,     1,     2,     1,     2,
       2,     1,     1,     1,     0,     3,     0,     5,     0,     5,
       1,     0,     4,     1,     1,     1,     1,     3,     3,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     2,     2,
       2,     2,     2,     0,     4,     0,     4,     0,     4,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     3,     1,     2,     2,     2,     1,
       1,     1,     1,     2,     2,     1,     3,     7,     1,     1,
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
       1,     1,     1,     1,     1,     3,     3,     3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   314,   345,   325,
     346,   347,   349,   350,   326,   324,   344,   328,   327,   312,
     313,     0,     0,    18,   199,     0,   341,   339,     0,     0,
     274,     0,     0,   466,   315,   200,     0,     0,     0,   310,
     311,   348,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   463,    42,     4,    16,     8,     7,    11,
      10,     9,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,   163,     0,     0,     5,     0,   264,   266,   268,
     272,   273,     0,   271,   309,   343,    37,    38,   318,   205,
     204,   319,   206,   207,   464,    47,   316,   317,    43,     0,
       0,   314,     0,     0,   315,     0,     0,   464,   278,   322,
     323,    84,     0,   320,   321,   464,     0,   200,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   138,     0,     0,
       0,     0,   130,   129,   133,   132,   131,     0,   289,   292,
     291,   290,   293,   294,   115,     0,   464,   276,   201,     0,
       0,     0,     0,     0,     0,     6,   241,     0,     0,   376,
     380,   382,     0,     0,   389,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,   208,   464,    36,    27,    31,
      24,    19,   269,   265,   203,   205,   204,     0,   202,     0,
       0,   206,   207,     0,   164,   169,   150,   175,   259,     0,
     248,   254,     0,   297,   296,   295,   267,   270,     0,     0,
      39,     0,     0,   351,     0,   351,   318,   319,   316,   317,
     322,   323,   320,   321,   165,     0,     0,     0,   203,   202,
       0,    85,    87,    84,     0,   464,   166,   342,   340,    28,
      32,    25,    20,     0,   137,     0,   289,   290,     0,   275,
       0,     0,   134,     0,     0,   259,     0,     0,   497,   479,
     508,   510,   509,   501,   486,   492,   488,   489,   490,   491,
     482,   481,   502,   503,   493,   470,   494,   495,   496,   498,
     500,   480,   504,   474,   511,   512,   487,   499,   513,   506,
     505,   437,   438,   464,   464,   439,   440,   441,   442,   443,
     444,   450,   451,   445,   446,   447,   448,   449,   452,   453,
     454,   455,   456,   457,   458,   459,   460,   461,   462,   507,
     478,   483,   484,   114,   464,   464,   431,   432,   476,   430,
     423,   426,   427,   429,   424,   425,   436,   433,   434,   435,
     464,   428,   477,   485,   475,   514,   467,   471,   472,   473,
       0,     0,   242,     2,     0,     0,    29,    33,    26,    21,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    22,     0,   437,   438,     0,
       0,   172,   422,   235,     0,     0,     0,   162,   151,     0,
       0,     0,   180,   171,   180,   177,   261,   182,   184,   466,
     258,   260,   240,     0,   237,   154,   302,   301,   300,   299,
     298,   283,   284,   285,   288,   286,   283,   284,     0,   161,
     153,   187,     0,   287,   468,   466,   465,   469,   280,     0,
       0,     0,     0,     0,    40,     0,   466,    84,     0,     0,
     466,     0,   215,   146,   147,   145,   233,     0,   140,   233,
     464,   464,     0,     0,   124,     2,     0,     0,     0,     0,
       0,    41,     0,     3,    30,   148,   374,     0,     0,     0,
     384,   387,     0,     0,   394,   398,   402,   406,   396,   400,
     404,   408,   410,   412,   414,   415,     0,    35,    23,   209,
       0,     0,   418,   419,     0,     0,   236,     0,   155,   179,
     178,   181,   170,   176,   259,   215,     0,     0,   249,   250,
       0,     0,   255,   238,     0,     0,     0,   152,   196,     0,
     191,   189,     0,   281,    49,     0,     0,     0,   355,   352,
     353,    51,    45,    51,   279,     0,    86,   203,    93,    94,
      95,   202,     0,   100,   101,   102,    96,    89,    88,     0,
      90,    92,    91,   466,     0,   466,     0,     0,   234,   144,
     139,   141,   143,     0,     0,     0,     0,     3,   517,   518,
     516,   515,   519,   277,   117,     0,   377,   381,   383,     0,
       0,   390,   314,   312,   313,   315,   310,   311,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     420,   421,   173,     0,   244,   210,   464,   243,   262,     0,
       0,   259,     0,   252,   372,   365,   368,   369,   370,   371,
     373,     0,     0,     0,   239,   362,   308,   306,   304,   197,
       0,   188,   215,   111,     0,   351,   358,   356,   357,     0,
      52,   351,    52,    83,     0,   103,   104,   105,   106,   107,
     108,   109,   110,     0,    97,     0,   113,     0,   167,   227,
     217,   216,   218,   224,     0,     0,     0,   210,   210,   116,
       0,     0,   385,     0,     0,   393,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   416,     0,   215,   245,
       0,   211,   212,     0,   183,     0,   263,   251,     0,     0,
       0,   372,   364,   363,   215,   193,     0,     0,   282,     0,
     354,    48,     0,     0,    44,    99,    98,    82,   112,   180,
     219,   230,   228,   259,     0,   142,     0,     0,     0,     0,
     375,   378,     0,   388,   391,   395,   399,   403,   407,   397,
     401,   405,   409,     0,     0,   417,     0,     0,     0,     0,
     185,   253,     0,   366,     0,     0,   192,   464,   190,    51,
       0,     0,   359,   360,   361,     0,   314,   312,   313,    67,
       0,     0,     0,   315,     0,   310,   311,     0,    81,     0,
      53,    58,    57,    61,    60,    59,    62,    66,    64,    63,
       0,     0,     0,     0,     0,     0,   158,    55,     0,     0,
      80,    51,   168,     0,   256,   256,   222,   225,   126,   125,
       0,     0,     0,   466,     0,     0,     0,   174,   247,   213,
     246,   215,     0,   198,   193,     0,    52,     0,     0,     0,
       0,     0,    65,     0,     0,     0,     0,     0,     0,     0,
       0,    56,     0,     0,   464,   156,    76,    71,   118,   135,
     136,    78,    73,    68,   159,    54,    52,   220,   257,     0,
       0,   237,   237,   127,   128,   379,     0,   392,   411,   413,
       0,     0,   194,   195,    50,   121,   464,   466,   120,   119,
     157,   160,    74,    69,    77,    72,    75,    70,     0,     0,
       0,     0,    46,     0,   229,   223,   226,   386,   186,     0,
       0,     0,     0,   149,     0,   231,   367,     0,   123,    79,
     210,   122,     0,   232
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    75,    76,   245,   681,   243,   675,   680,
     752,   820,    77,    78,   260,   261,   586,   587,   588,   589,
     693,    79,    80,    81,    82,    83,   287,    84,   827,   828,
     918,    85,   830,   831,   486,   275,   487,   704,   488,   489,
      87,   833,    88,    89,   223,   889,    90,   890,    92,   482,
     759,   224,   432,   225,   534,   728,   226,   434,   433,   542,
     227,   545,   546,   861,   836,   560,   461,   672,   671,   796,
     745,   557,   558,   744,    93,    94,   273,   207,   730,   731,
     596,   597,   701,   843,   732,   763,   901,   764,   902,   845,
     844,   950,   599,   424,   552,   553,    95,   229,   548,   230,
     444,   899,   231,   440,   441,   544,   875,    97,    98,    99,
     148,   100,   381,   257,   469,   674,   463,   101,   126,   425,
     556,   555,   554,   103,   104,   140,   139,   105,   471,   569,
     570,   839,   664,   665,   106,   615,   392,   711,   852,   393,
     394,   619,   772,   620,   397,   714,   854,   629,   633,   630,
     634,   631,   635,   632,   636,   637,   638,   421,   374,   375,
     241,   165,   466,   467,   377,   378,   379
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -807
static const yytype_int16 yypact[] =
{
    -807,    64,  -807,  5213,   307,   652,  6008,   114,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,   -14,
       6,   322,   347,  -807,  -807,  5789,  -807,  -807,  5513,   -43,
    -807,  5881,   660,  -807,   164,    42,  5329,     2,    31,    67,
     190,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,    45,    50,    55,    59,    75,    80,    81,   111,
     121,   125,   129,   141,   150,   161,   173,   175,   180,   183,
     186,   195,   206,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  5421,   107,   107,   107,
     107,   107,  -807,  6100,  6008,  -807,   504,  -807,    24,    89,
      16,  -807,   191,  -807,  -807,  -807,  -807,  -807,   258,  -807,
    -807,   301,  -807,  -807,  -807,   203,   258,   301,   221,   306,
     314,    -5,   315,   319,    65,   320,   269,  -807,  -807,   236,
     237,   664,   249,   236,   237,  -807,   250,   333,   259,   118,
     118,   107,   107,   107,   107,   567,   296,   256,   686,   307,
     652,   264,  -807,  -807,  -807,  -807,  -807,   570,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  3288,  -807,  -807,  -807,   273,
    5106,   107,   107,   107,   107,  -807,  -807,  5789,   664,  -807,
    -807,  -807,   664,   664,  -807,   664,   664,   664,   664,   664,
     664,   664,   664,   664,   664,   664,   664,   664,   664,   739,
    5513,  -807,   107,   107,   637,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,   311,   325,   326,  6178,   327,   144,
     664,   328,   330,   567,  -807,    35,  -807,    35,    60,   300,
     295,  -807,   344,    25,   169,  -807,  -807,  -807,   770,    99,
    -807,   942,  6008,   316,  6008,   316,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,   770,  1080,  6008,  -807,  -807,
     323,   318,   337,   664,  1218,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,   -25,  -807,   297,   324,   331,    16,  -807,
     332,   346,  -807,   144,   144,    10,   351,   354,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    1356,  6008,  -807,  -807,   107,   664,  -807,  -807,  -807,  -807,
     345,   357,   664,   664,   664,   358,   359,   664,   360,   361,
     362,   363,   364,   367,   368,   369,   370,   371,   373,   382,
     383,   378,   107,   107,  -807,  -807,  1494,   340,   343,   388,
     372,  -807,  -807,  -807,   391,   664,   394,  -807,  -807,   424,
     515,   516,   496,  -807,   496,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,   144,   402,  -807,    26,    32,  -807,    53,
    -807,    -5,    65,    16,  -807,  -807,     4,   165,   664,  -807,
    -807,  -807,   413,  -807,  -807,  -807,  -807,  -807,   407,   412,
     452,   416,   414,   420,  -807,   418,  -807,   664,   284,   425,
    -807,  1632,   428,  -807,  -807,  -807,   664,   427,   429,   664,
    -807,  -807,   433,   434,  -807,  -807,  1770,  1908,  2046,  2184,
    2322,  -807,   432,   441,  -807,  -807,  -807,   438,   445,   447,
    -807,  -807,   443,  6135,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,   664,  -807,  -807,  -807,
     436,   437,  -807,  -807,   453,   139,  -807,   459,  -807,  -807,
    -807,  -807,  -807,  -807,    10,   428,  6008,  3426,  -807,   454,
     664,   308,  -807,  -807,    24,    24,    24,  -807,  -807,   463,
     446,  -807,  3564,  -807,  -807,   770,   770,   770,  -807,  -807,
     458,  -807,  -807,  -807,  -807,  3702,  -807,    -5,  -807,  -807,
    -807,    65,   284,  -807,  -807,  -807,   502,  -807,  -807,   284,
    -807,    16,  -807,  -807,  3840,  -807,   468,  5605,  -807,  -807,
    -807,  -807,  -807,  2460,  2598,   473,   476,   456,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  6008,  -807,  -807,  -807,  6135,
    6135,  -807,  -807,  -807,  -807,  -807,  -807,  -807,   478,  6135,
    6135,  6135,  6135,  6135,  6135,  6135,  6135,  6135,  6135,   -58,
    -807,  -807,  -807,   481,  -807,  5973,  -807,  -807,  -807,   480,
     479,    10,   144,   482,   483,  -807,  -807,  -807,  -807,  -807,
    -807,   308,   385,   385,  -807,  -807,  -807,  -807,  -807,  -807,
     664,  -807,   428,  -807,  6008,   316,  -807,  -807,  -807,   452,
     485,   316,   488,  -807,   484,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,   284,  -807,  3978,  -807,  4116,  -807,  -807,
    -807,  -807,   489,   209,   297,   144,   144,  5973,  5973,  -807,
     499,  6008,  -807,   500,  6135,  -807,   506,   507,   512,   520,
     521,   522,   523,   524,   519,   525,  -807,   527,   428,  -807,
     538,  -807,   533,  2736,  -807,   503,  -807,  -807,   144,  6008,
     542,  -807,  -807,  -807,   428,   539,   547,   550,  -807,   546,
    -807,  -807,  4530,   553,  -807,  -807,  -807,  -807,  -807,   496,
    -807,  -807,  -807,    10,   664,  -807,   558,   559,   551,   560,
    -807,  -807,   555,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,   671,   677,  -807,   569,   574,  5973,   576,
    -807,  -807,   572,  -807,   577,   664,  -807,  -807,  -807,  -807,
     307,   652,  -807,  -807,  -807,  5014,     4,    11,   158,  -807,
    4738,  4646,  5697,   165,   580,   166,   172,   581,  -807,   664,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
     107,   107,  4738,   107,   107,   107,  -807,  -807,   535,   578,
    -807,  -807,  -807,  5605,   664,   664,  -807,  -807,  -807,  -807,
     586,   589,   591,  -807,   594,   597,   601,  -807,  -807,  -807,
    -807,   428,   590,  -807,   539,  2874,   600,   131,   131,   664,
     637,   739,  -807,   107,   107,   637,   107,   107,  4830,   107,
     107,  -807,   602,  4922,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,   614,  -807,  -807,   603,
     604,   402,   402,  -807,  -807,  -807,  4254,  -807,  -807,  -807,
     617,   385,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  5014,   618,
     664,  3012,  -807,   620,  -807,  -807,  -807,  -807,  -807,   621,
    3150,  4392,   664,  -807,   622,  -807,  -807,   626,  -807,  -807,
    5973,  -807,   625,  -807
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -807,  -334,  -807,  -807,   663,  -807,  -807,  -807,  -807,  -544,
    -807,  -807,   -27,   -26,  -227,  -807,  -807,  -807,  -528,  -807,
    -807,   -22,   -21,   -19,    -1,  -807,  -807,  -807,  -807,  -717,
    -111,    15,   -53,   -41,     0,  -807,    68,  -807,  -807,  -807,
    -807,  -807,    54,    71,  -807,  -697,   168,     3,   532,  -807,
    -807,  -114,  -807,  -807,  -807,  -807,  -215,  -807,   549,  -412,
    -807,  -807,  -807,  -807,   534,  -807,  -807,  -807,  -807,   -90,
     -18,  -753,  -807,  -807,   681,  -807,    23,   -71,  -660,    -7,
    -521,  -807,   -60,  -807,  -564,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,   299,  -232,  -806,  -807,   -34,  -807,  -596,  -411,
    -807,   -61,  -150,  -502,  -807,  -807,    -2,    -6,    51,   693,
    -807,  -133,  -807,  -807,  -214,  -807,  -203,  -127,    47,   -84,
    -807,  -807,  -807,  -113,  -112,  -807,  -807,   134,  -229,   112,
    -807,  -807,   132,  -622,    40,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,
    -807,  -807,  -807,  -807,  -807,  -807,  -807,  -807,   583,   795,
     -89,  -402,  -807,  -152,  -807,  -807,  -807
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -308
static const yytype_int16 yytable[] =
{
     125,    96,   175,    86,   152,   153,    91,   286,   428,   154,
     155,   254,   156,   376,   236,   278,   473,   208,   209,   210,
     211,   279,   543,   138,   649,   157,   145,   115,   118,   682,
     472,   144,   549,   702,    96,   454,   479,   547,   256,   174,
     742,   743,   648,   475,   132,   136,   264,   768,   769,   503,
     102,   492,   493,   373,   684,   834,   737,   233,   446,  -307,
     436,   694,   726,   562,     2,  -305,   885,  -292,   727,   430,
     269,   270,   271,   272,   575,   146,  -289,   380,   594,   164,
     147,   168,   141,   146,   204,  -289,  -303,  -291,   213,   203,
     171,   169,  -292,   872,   437,   935,   936,   238,   438,   142,
     386,   387,   388,   389,  -292,   453,   453,   172,   456,   427,
     436,   455,   455,   873,   879,   888,   920,   416,   128,   228,
     176,    24,   453,  -203,  -291,   215,   216,   128,   455,   373,
    -205,   414,   415,     8,    25,    10,    11,    12,    13,   653,
     202,    16,   791,   232,   373,   457,  -290,   439,  -293,   736,
     177,   747,   373,   258,   262,   234,   447,  -307,   235,   448,
    -307,   607,   431,  -305,   178,   756,  -305,   502,   385,   179,
     109,   110,   280,   281,   180,   385,   481,   233,   181,   437,
     285,   221,   222,   438,  -303,  -293,   929,  -303,   167,   643,
     259,   695,   232,   697,   182,  -289,   143,   439,   204,   183,
     184,   391,    41,   413,   173,   395,   396,   786,   398,   399,
     400,   401,   402,   403,   404,   405,   406,   407,   408,   409,
     410,   411,   115,   794,   384,   205,   112,   113,   206,   458,
     185,   390,  -289,   127,   496,   497,   468,   128,   468,  -291,
     186,   549,   423,   426,   187,  -290,  -290,  -293,   188,   915,
     576,   468,   916,  -294,   412,   866,   917,   644,   645,  -221,
     189,   846,   462,   761,   762,   498,   499,   568,   373,   190,
     429,  -294,   239,   267,   268,   234,   646,  -204,   235,   702,
     191,   500,  -290,   166,  -202,  -206,   262,   167,   167,   939,
     952,  -207,   192,   577,   193,   578,   579,   896,   580,   194,
     449,   483,   195,   450,   373,   196,   423,   423,  -294,   240,
     215,   216,   484,   504,   197,   246,   108,   654,   655,   656,
     657,   658,   659,   248,   250,   198,   242,   549,   252,  -221,
     581,   129,   650,   109,   110,  -221,  -221,   453,    29,   485,
     910,   527,   528,   455,   244,   591,  -221,   842,   109,   110,
     255,   592,   247,   111,   660,   217,   133,  -203,  -202,   550,
     249,   251,   676,   677,   678,   253,   221,   222,   130,   373,
     263,   265,   168,   109,   110,   468,  -203,   239,   266,  -203,
     274,  -203,   282,  -203,   373,   373,   373,   373,   373,   112,
     113,   382,  -289,   134,   741,   376,   656,   657,   658,   659,
     628,   603,   604,   582,   112,   113,  -292,  -291,  -290,  -293,
     376,  -294,   583,   584,   585,   507,   508,   509,   442,  -202,
     512,   443,  -202,   376,  -202,   445,  -202,   661,   114,   112,
     113,   660,   453,   453,   453,   373,   662,   663,   455,   455,
     455,   470,   376,   131,   477,   476,   749,   128,   536,   591,
     373,   906,   753,   490,   167,   592,   591,   565,   566,   567,
     748,   451,   592,   373,   478,   505,   285,   491,   135,   494,
     666,   667,   668,   766,   767,   495,   568,   530,   159,   160,
     531,   559,   373,   506,   510,   511,   513,   514,   515,   516,
     517,   373,   373,   518,   519,   520,   521,   522,   452,   523,
     262,   590,   524,   525,   526,   538,   712,   713,   532,   598,
     533,   535,   598,   214,   537,   941,   716,   717,   718,   719,
     720,   721,   722,   723,   724,   725,   539,   540,   541,   551,
     215,   216,   561,   563,   162,   163,   564,   571,   572,   217,
     468,   573,   574,   376,   258,   376,   453,   593,  -214,   639,
     218,   600,   455,   605,   606,   601,   613,   733,   219,   220,
     591,   109,   110,   614,   616,   617,   592,   618,   550,   621,
     217,   670,   642,   285,   640,   641,   214,   647,   709,   258,
     652,   259,   669,   373,   679,   373,   221,   222,   698,   219,
     220,   703,   707,   215,   216,   708,   109,   110,   715,   729,
     734,   774,   217,   735,   755,   590,   739,   751,   738,   710,
     754,   258,   590,   218,   847,   760,   259,   112,   113,   770,
     773,   373,   790,   894,   283,   284,   775,   776,   109,   110,
     685,   686,   777,   687,   688,   689,   690,   691,   692,   703,
     778,   779,   780,   781,   782,   783,   258,   785,   259,   221,
     222,   784,   112,   113,   550,   921,   219,   220,   787,   788,
     894,   116,   793,   109,   110,   795,   797,   799,   468,   158,
     798,   850,   217,   258,   841,   285,   848,   849,   109,   110,
     851,   853,   855,   259,   112,   113,   159,   160,   856,   857,
     109,   110,   858,   746,   860,   276,   862,   863,   117,   883,
     884,   703,   703,   895,   903,   771,   161,   904,   865,   911,
     259,   905,   159,   160,   907,   894,   590,   908,   837,   112,
     113,   909,   914,   933,   934,   821,   822,   921,   423,   423,
     823,   824,   277,   825,   112,   113,   932,   938,   943,   945,
     949,   946,   162,   163,   951,   953,   112,   113,   108,   201,
     838,   826,   832,   373,   376,   835,   254,   919,   876,   886,
     887,   285,   891,   892,   893,   109,   110,   829,   162,   163,
     877,   459,   765,   460,   912,   462,   435,   864,   881,   451,
     237,   859,   703,   897,   900,   111,   212,   285,   602,   376,
     792,   750,   840,   740,   373,   931,   159,   160,   107,   870,
     422,     0,   922,   923,     0,   924,   925,     0,   926,   927,
     882,   878,     0,   874,   880,     0,   452,     0,   746,   373,
       0,   112,   113,   867,   868,     0,     0,   940,   373,   373,
       0,     0,     0,   462,   462,     0,     0,   703,     0,     0,
       0,     0,   559,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   162,   163,     0,   462,     0,     0,     0,     0,
       0,   228,     0,     0,     0,     0,     0,   898,   898,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   930,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   559,     0,   867,     0,     0,     0,     0,     0,
       0,   462,     0,     0,     0,   285,   462,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   942,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   703,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    26,    27,
       0,   310,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     464,   354,     0,   355,   465,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
       0,   371,   372,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    26,    27,     0,   310,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   464,   354,
     474,   355,     0,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,     0,   371,
     372,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    26,    27,     0,   310,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   464,   354,     0,   355,
     480,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,     0,   371,   372,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    26,    27,     0,   310,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   464,   354,   501,   355,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,     0,   371,   372,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      26,    27,     0,   310,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   464,   354,     0,   355,   529,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,     0,   371,   372,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    26,    27,
       0,   310,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     464,   354,     0,   355,   595,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
       0,   371,   372,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    26,    27,     0,   310,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   464,   354,
     608,   355,     0,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,     0,   371,
     372,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    26,    27,     0,   310,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   464,   354,   609,   355,
       0,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,     0,   371,   372,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    26,    27,     0,   310,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   464,   354,   610,   355,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,     0,   371,   372,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      26,    27,     0,   310,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   464,   354,     0,   355,   611,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,     0,   371,   372,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    26,    27,
       0,   310,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     464,   354,     0,   355,     0,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
     612,   371,   372,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    26,    27,     0,   310,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   464,   354,
       0,   355,   705,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,     0,   371,
     372,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    26,    27,     0,   310,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   464,   354,     0,   355,
     706,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,     0,   371,   372,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    26,    27,     0,   310,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   464,   354,     0,   355,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   789,   371,   372,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      26,    27,     0,   310,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   464,   354,   913,   355,     0,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,     0,   371,   372,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    26,    27,
       0,   310,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     464,   354,   944,   355,     0,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
       0,   371,   372,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    26,    27,     0,   310,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   464,   354,
       0,   355,   947,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,     0,   371,
     372,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    26,    27,     0,   310,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   353,   354,     0,   355,
       0,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,     0,   371,   372,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    26,    27,     0,   310,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,     0,   354,     0,   355,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,   651,   371,   372,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      26,    27,     0,   310,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   673,   354,     0,   355,     0,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,     0,   371,   372,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    26,    27,
       0,   310,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     683,   354,     0,   355,     0,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
       0,   371,   372,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   300,   301,   302,   303,
     304,   305,   306,   307,   308,   309,    26,    27,     0,   310,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,     0,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,   333,   334,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,   351,   352,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   696,   354,
       0,   355,     0,   356,   357,   358,   359,   360,   361,   362,
     363,   364,   365,   366,   367,   368,   369,   370,     0,   371,
     372,   288,   289,   290,   291,   292,   293,   294,   295,   296,
     297,   298,   299,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,    26,    27,     0,   310,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,     0,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   350,
     351,   352,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   757,   354,     0,   355,
       0,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,     0,   371,   372,   288,
     289,   290,   291,   292,   293,   294,   295,   296,   297,   298,
     299,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   300,   301,   302,   303,   304,   305,   306,   307,
     308,   309,    26,    27,     0,   310,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,     0,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,   332,
     333,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   758,   354,     0,   355,     0,   356,
     357,   358,   359,   360,   361,   362,   363,   364,   365,   366,
     367,   368,   369,   370,     0,   371,   372,   288,   289,   290,
     291,   292,   293,   294,   295,   296,   297,   298,   299,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
      26,    27,     0,   310,     0,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,     0,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,   354,   937,   355,     0,   356,   357,   358,
     359,   360,   361,   362,   363,   364,   365,   366,   367,   368,
     369,   370,     0,   371,   372,   288,   289,   290,   291,   292,
     293,   294,   295,   296,   297,   298,   299,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   300,   301,
     302,   303,   304,   305,   306,   307,   308,   309,    26,    27,
       0,   310,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,     0,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,   350,   351,   352,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     948,   354,     0,   355,     0,   356,   357,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   369,   370,
       0,   371,   372,   800,   801,   802,   803,   804,   805,   806,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   807,   808,    21,    22,
     809,     0,    24,     0,     0,    25,    26,    27,   810,   811,
     812,    29,    30,    31,     0,    33,   813,    35,     0,    37,
       0,   814,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   815,   816,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,     0,   817,   818,   119,
     120,     0,     0,     0,   805,   806,     0,     0,     0,     0,
     819,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   807,   808,   122,   123,     0,     0,    24,     0,
       0,    25,    26,    27,     0,     0,     0,    29,    30,     0,
       0,     0,   813,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   815,   816,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   871,   801,     0,     0,     0,   805,   806,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   807,   808,   122,   123,     0,     0,
      24,     0,     0,    25,    26,    27,   819,     0,     0,     0,
      30,     0,     0,     0,   813,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     815,   816,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   119,   120,     0,     0,     0,   805,   806,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   807,   808,   122,   123,
       0,     0,    24,     0,     0,    25,    26,    27,   819,     0,
       0,     0,    30,     0,     0,     0,   813,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   815,   816,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   119,   120,     0,     0,     0,
     928,   806,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   807,   808,
     122,   123,     0,     0,    24,     0,     0,     0,    26,    27,
     819,     0,     0,     0,    30,     0,     0,     0,   813,   137,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   815,   816,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   119,   120,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   122,   123,     0,     0,    24,     0,     0,     0,
      26,    27,   819,     0,     0,     0,    30,     0,     0,     0,
     124,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   119,
     120,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   122,   123,     0,     0,    24,     0,
       0,     0,    26,    27,   869,     0,     0,     0,    30,     0,
       0,     0,   124,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     4,     5,     0,     0,
       0,     6,     7,     0,     0,     0,     0,   383,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,     0,    24,     0,     0,    25,    26,
      27,     0,    28,     0,    29,    30,    31,    32,    33,    34,
      35,    36,    37,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
       0,    74,   119,   120,     0,     0,     0,     6,   121,   170,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   122,   123,     0,
       0,    24,     0,     0,    25,    26,    27,     0,     0,     0,
       0,    30,     0,     0,     0,   124,    35,     0,    37,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   199,     5,     0,     0,     0,     6,
     121,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   122,
     123,     0,     0,    24,     0,     0,    25,    26,    27,     0,
     200,     0,     0,    30,     0,     0,     0,   124,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   119,   120,     0,     0,
       0,     6,   121,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   122,   123,     0,     0,    24,     0,     0,    25,    26,
      27,     0,     0,     0,     0,    30,     0,     0,     0,   124,
     137,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   119,   120,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   122,   123,     0,     0,    24,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   124,     0,     0,   699,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   700,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     119,   120,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   122,   123,     0,     0,    24,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   124,    35,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   119,   120,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   122,   123,     0,
       0,    24,     0,     0,     0,    26,    27,     0,     0,     0,
       0,    30,     0,     0,     0,   124,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   149,   150,     0,     0,     0,     0,
     121,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,     0,     0,    24,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   124,     0,     0,
     151,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   119,   120,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   122,   123,     0,     0,    24,     0,     0,     0,    26,
      27,   119,   120,     0,     0,    30,     0,   121,     0,   124,
       0,     0,   699,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   122,   123,     0,     0,
      24,     0,     0,     0,    26,    27,     0,     0,     0,     0,
      30,     0,     0,     0,   124,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   119,   120,     0,     0,     0,     0,   121,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,   122,   123,
       0,     0,     0,     0,     0,     0,    26,    27,   119,   120,
       0,     0,    30,     0,   622,     0,   124,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,   623,   624,   122,   123,     0,     0,     0,     0,     0,
       0,    26,    27,     0,     0,     0,     0,     0,     0,     0,
       0,   625,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   626,   627,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     417,   418,     0,     0,   325,   326,   327,   328,   329,   330,
     331,   332,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   419,     0,     0,
       0,   356,   357,     0,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   420,     0,   371
};

static const yytype_int16 yycheck[] =
{
       6,     3,    36,     3,    31,    31,     3,   157,   223,    31,
      31,   125,    31,   165,    98,   148,   245,    88,    89,    90,
      91,   148,   434,    25,   545,    31,    28,     4,     5,   573,
     244,    28,   443,   597,    36,   238,   263,   439,   127,    36,
     662,   663,   544,   257,    21,    22,   135,   707,   708,   383,
       3,   283,   284,   165,   582,   752,   652,    33,    33,    33,
      50,   589,   120,   465,     0,    33,   819,    81,   126,    34,
     141,   142,   143,   144,   476,    28,    81,   166,   480,    32,
     123,    39,    28,    36,    86,    81,    33,    81,    94,    86,
      36,    49,    81,   810,   119,   901,   902,    81,   123,    28,
     171,   172,   173,   174,   118,   238,   239,    36,     9,   223,
      50,   238,   239,   810,   811,   832,   869,   206,   123,    96,
     118,    32,   255,   119,   118,    26,    27,   123,   255,   241,
     119,   202,   203,    15,    35,    17,    18,    19,    20,   550,
      86,    23,   738,    96,   256,    46,    81,   137,    81,   651,
     119,   672,   264,     9,   131,   131,   131,   131,   134,   134,
     134,   495,   127,   131,   119,   693,   134,   381,   170,   119,
      26,    27,   149,   150,   119,   177,   265,    33,   119,   119,
     157,    82,    83,   123,   131,   118,   883,   134,   123,    50,
      46,   593,   145,   595,   119,    81,    28,   137,   200,   119,
     119,   178,    84,   200,    36,   182,   183,   728,   185,   186,
     187,   188,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   744,   170,   118,    82,    83,   121,   130,
     119,   177,   118,   119,   323,   324,   242,   123,   244,    81,
     119,   652,   219,   220,   119,    81,    81,    81,   119,   118,
     477,   257,   121,    81,   200,   799,   125,   118,   119,    50,
     119,   763,   239,    54,    55,   354,   355,   470,   380,   119,
     223,    81,    81,   139,   140,   131,   137,   119,   134,   843,
     119,   370,   118,   119,   119,   119,   263,   123,   123,   911,
     950,   119,   119,     9,   119,    11,    12,   841,    14,   119,
     131,     4,   119,   134,   416,   119,   283,   284,   118,   118,
      26,    27,    15,   384,   119,     9,     9,     9,    10,    11,
      12,    13,    14,     9,     9,   119,   123,   738,     9,   120,
      46,     9,   546,    26,    27,   126,   127,   470,    41,    42,
     861,   412,   413,   470,   123,   478,   137,   759,    26,    27,
      81,   478,    46,    46,    46,    35,     9,   121,   121,   443,
      46,    46,   565,   566,   567,    46,    82,    83,    46,   481,
     121,   121,    39,    26,    27,   381,   118,    81,   119,   121,
     124,   123,   118,   125,   496,   497,   498,   499,   500,    82,
      83,   118,    81,    46,     9,   547,    11,    12,    13,    14,
     513,   490,   491,   119,    82,    83,    81,    81,    81,    81,
     562,    81,   128,   129,   130,   392,   393,   394,   118,   118,
     397,   126,   121,   575,   123,    81,   125,   119,   121,    82,
      83,    46,   565,   566,   567,   547,   128,   129,   565,   566,
     567,   125,   594,   121,   126,   122,   675,   123,   425,   582,
     562,   853,   681,   121,   123,   582,   589,     5,     6,     7,
     674,     9,   589,   575,   127,   120,   443,   121,   121,   118,
     554,   555,   556,   705,   706,   121,   679,   137,    26,    27,
     137,   458,   594,   126,   126,   126,   126,   126,   126,   126,
     126,   603,   604,   126,   126,   126,   126,   126,    46,   126,
     477,   478,   120,   120,   126,    81,   619,   620,   120,   486,
     138,   120,   489,     9,   120,   917,   629,   630,   631,   632,
     633,   634,   635,   636,   637,   638,    11,    11,    32,   127,
      26,    27,   119,   126,    82,    83,   124,   121,   124,    35,
     546,   121,   124,   695,     9,   697,   679,   122,   120,   526,
      46,   124,   679,   120,   120,   126,   124,   646,    54,    55,
     693,    26,    27,   122,   126,   120,   693,   120,   652,   126,
      35,   125,   119,   550,   138,   138,     9,   118,   122,     9,
     126,    46,   119,   695,   126,   697,    82,    83,   120,    54,
      55,   597,   119,    26,    27,   119,    26,    27,   120,   118,
     120,   714,    35,   124,   120,   582,   123,   122,   126,   615,
     122,     9,   589,    46,   764,   126,    46,    82,    83,   120,
     120,   733,   119,   838,    54,    55,   120,   120,    26,    27,
     128,   129,   120,   131,   132,   133,   134,   135,   136,   645,
     120,   120,   120,   120,   120,   126,     9,   120,    46,    82,
      83,   126,    82,    83,   738,   870,    54,    55,   120,   126,
     875,     9,   120,    26,    27,   126,   119,   121,   674,     9,
     120,   120,    35,     9,   121,   652,   118,   118,    26,    27,
     120,   126,    11,    46,    82,    83,    26,    27,    11,   120,
      26,    27,   118,   670,   118,     9,   124,   120,    46,   119,
     119,   707,   708,   125,   118,   711,    46,   118,   797,   119,
      46,   120,    26,    27,   120,   930,   693,   120,   752,    82,
      83,   120,   122,   120,   120,   752,   752,   942,   705,   706,
     752,   752,    46,   752,    82,    83,   122,   120,   120,   119,
     118,   120,    82,    83,   118,   120,    82,    83,     9,    86,
     752,   752,   752,   865,   906,   752,   870,   868,   811,   830,
     831,   738,   833,   834,   835,    26,    27,   752,    82,    83,
     811,   239,   704,   239,   864,   752,   227,   795,   812,     9,
      99,   788,   788,   843,   845,    46,    93,   764,   489,   941,
     739,   679,   752,   661,   906,   884,    26,    27,     3,   805,
     217,    -1,   873,   874,    -1,   876,   877,    -1,   879,   880,
     812,   811,    -1,   810,   811,    -1,    46,    -1,   795,   931,
      -1,    82,    83,   800,   801,    -1,    -1,   916,   940,   941,
      -1,    -1,    -1,   810,   811,    -1,    -1,   843,    -1,    -1,
      -1,    -1,   819,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    -1,   832,    -1,    -1,    -1,    -1,
      -1,   838,    -1,    -1,    -1,    -1,    -1,   844,   845,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   883,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   869,    -1,   871,    -1,    -1,    -1,    -1,    -1,
      -1,   878,    -1,    -1,    -1,   882,   883,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   928,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   950,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
     120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,   120,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
     120,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,   120,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,   120,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,    -1,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     138,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,    -1,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,   138,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    37,    -1,    39,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    -1,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,   118,   119,
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,    -1,   139,
     140,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    -1,    39,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    -1,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   116,    -1,   118,   119,    -1,   121,
      -1,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139,   140,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    -1,    39,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    -1,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   116,    -1,   118,   119,    -1,   121,    -1,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,   137,    -1,   139,   140,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    37,    -1,    39,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    -1,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     116,    -1,    -1,   119,   120,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,    -1,   139,   140,     3,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    37,
      -1,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    -1,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   116,    -1,
     118,   119,    -1,   121,    -1,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
      -1,   139,   140,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    -1,    32,    -1,    -1,    35,    36,    37,    38,    39,
      40,    41,    42,    43,    -1,    45,    46,    47,    -1,    49,
      -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,    -1,   117,   118,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
     130,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    37,    -1,    -1,    -1,    41,    42,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     3,     4,    -1,    -1,    -1,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    35,    36,    37,   130,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     3,     4,    -1,    -1,    -1,     8,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    32,    -1,    -1,    35,    36,    37,   130,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,     3,     4,    -1,    -1,    -1,
       8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,
     130,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     3,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    37,   130,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    37,   130,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,   121,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    -1,    32,    -1,    -1,    35,    36,
      37,    -1,    39,    -1,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,   115,   116,
      -1,   118,     3,     4,    -1,    -1,    -1,     8,     9,    10,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    37,    -1,
      39,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     3,     4,    -1,    -1,
      -1,     8,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    -1,    -1,    35,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    80,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,     3,     4,    -1,    -1,    42,    -1,     9,    -1,    46,
      -1,    -1,    49,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      32,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      42,    -1,    -1,    -1,    46,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,     3,     4,    -1,    -1,    -1,    -1,     9,
      -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,     3,     4,
      -1,    -1,    42,    -1,     9,    -1,    46,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    -1,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    46,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      52,    53,    -1,    -1,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   119,    -1,    -1,
      -1,   123,   124,    -1,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,    -1,   139
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   142,     0,   143,     3,     4,     8,     9,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    32,    35,    36,    37,    39,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    51,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   118,   144,   145,   153,   154,   162,
     163,   164,   165,   166,   168,   172,   175,   181,   183,   184,
     187,   188,   189,   215,   216,   237,   247,   248,   249,   250,
     252,   258,   259,   264,   265,   268,   275,   300,     9,    26,
      27,    46,    82,    83,   121,   217,     9,    46,   217,     3,
       4,     9,    28,    29,    46,   248,   259,   119,   123,     9,
      46,   121,   217,     9,    46,   121,   217,    47,   247,   267,
     266,   183,   184,   187,   188,   247,   259,   123,   251,     3,
       4,    49,   153,   154,   162,   163,   164,   248,     9,    26,
      27,    46,    82,    83,   259,   302,   119,   123,    39,    49,
      10,   183,   184,   187,   188,   237,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,     3,
      39,   145,   183,   188,   247,   118,   121,   218,   218,   218,
     218,   218,   250,   248,     9,    26,    27,    35,    46,    54,
      55,    82,    83,   185,   192,   194,   197,   201,   217,   238,
     240,   243,   259,    33,   131,   134,   260,   215,    81,    81,
     118,   301,   123,   148,   123,   146,     9,    46,     9,    46,
       9,    46,     9,    46,   192,    81,   301,   254,     9,    46,
     155,   156,   217,   121,   301,   121,   119,   268,   268,   218,
     218,   218,   218,   217,   124,   176,     9,    46,   252,   258,
     217,   217,   118,    54,    55,   217,   243,   167,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      39,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,   118,   119,   121,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   139,   140,   265,   299,   300,   304,   305,   306,   307,
     301,   253,   118,   121,   183,   247,   218,   218,   218,   218,
     183,   217,   277,   280,   281,   217,   217,   285,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   217,   183,   188,   218,   218,   301,    52,    53,   119,
     137,   298,   299,   217,   234,   260,   217,   192,   197,   259,
      34,   127,   193,   199,   198,   199,    50,   119,   123,   137,
     244,   245,   118,   126,   241,    81,    33,   131,   134,   131,
     134,     9,    46,   252,   257,   258,     9,    46,   130,   189,
     205,   207,   217,   257,   118,   122,   303,   304,   248,   255,
     125,   269,   255,   269,   120,   255,   122,   126,   127,   155,
     122,   301,   190,     4,    15,    42,   175,   177,   179,   180,
     121,   121,   234,   234,   118,   121,   301,   301,   301,   301,
     301,   120,   255,   142,   218,   120,   126,   217,   217,   217,
     126,   126,   217,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   120,   120,   126,   218,   218,   122,
     137,   137,   120,   138,   195,   120,   217,   120,    81,    11,
      11,    32,   200,   200,   246,   202,   203,   302,   239,   240,
     260,   127,   235,   236,   263,   262,   261,   212,   213,   217,
     206,   119,   302,   126,   124,     5,     6,     7,   257,   270,
     271,   121,   124,   121,   124,   302,   155,     9,    11,    12,
      14,    46,   119,   128,   129,   130,   157,   158,   159,   160,
     217,   252,   258,   122,   302,   122,   221,   222,   217,   233,
     124,   126,   233,   301,   301,   120,   120,   142,   120,   120,
     120,   122,   138,   124,   122,   276,   126,   120,   120,   282,
     284,   126,     9,    26,    27,    46,    82,    83,   264,   288,
     290,   292,   294,   289,   291,   293,   295,   296,   297,   217,
     138,   138,   119,    50,   118,   119,   137,   118,   244,   221,
     255,   138,   126,   240,     9,    10,    11,    12,    13,    14,
      46,   119,   128,   129,   273,   274,   260,   260,   260,   119,
     125,   209,   208,   118,   256,   149,   257,   257,   257,   126,
     150,   147,   150,   118,   159,   128,   129,   131,   132,   133,
     134,   135,   136,   161,   159,   302,   118,   302,   120,    49,
      80,   223,   225,   248,   178,   122,   122,   119,   119,   122,
     248,   278,   264,   264,   286,   120,   264,   264,   264,   264,
     264,   264,   264,   264,   264,   264,   120,   126,   196,   118,
     219,   220,   225,   301,   120,   124,   244,   239,   126,   123,
     273,     9,   274,   274,   214,   211,   217,   221,   255,   269,
     270,   122,   151,   269,   122,   120,   159,   118,   118,   191,
     126,    54,    55,   226,   228,   177,   234,   234,   219,   219,
     120,   248,   283,   120,   264,   120,   120,   120,   120,   120,
     120,   120,   120,   126,   126,   120,   221,   120,   126,   138,
     119,   239,   249,   120,   221,   126,   210,   119,   120,   121,
       3,     4,     5,     6,     7,     8,     9,    26,    27,    30,
      38,    39,    40,    46,    51,    82,    83,   117,   118,   130,
     152,   153,   154,   162,   163,   164,   165,   169,   170,   172,
     173,   174,   175,   182,   186,   188,   205,   237,   247,   272,
     275,   121,   200,   224,   231,   230,   244,   243,   118,   118,
     120,   120,   279,   126,   287,    11,    11,   120,   118,   220,
     118,   204,   124,   120,   211,   301,   150,   217,   217,   130,
     248,     3,   170,   186,   188,   247,   173,   174,   175,   186,
     188,   237,   247,   119,   119,   212,   218,   218,   170,   186,
     188,   218,   218,   218,   197,   125,   150,   223,   217,   242,
     242,   227,   229,   118,   118,   120,   302,   120,   120,   120,
     221,   119,   210,   120,   122,   118,   121,   125,   171,   171,
     212,   197,   218,   218,   218,   218,   218,   218,     8,   186,
     247,   301,   122,   120,   120,   235,   235,   120,   120,   274,
     301,   302,   248,   120,   120,   119,   120,   122,   118,   118,
     232,   118,   219,   120
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
#line 632 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 654 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 662 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    { reject_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 664 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    { end_class(); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 676 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 677 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 678 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 679 "vtkParse.y"
    { end_class(); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 680 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 681 "vtkParse.y"
    { end_class(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 683 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { output_function(); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { output_function(); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    { output_function(); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { output_function(); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 736 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 738 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 754 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 755 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 759 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 760 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 760 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { popNamespace(); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 802 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 803 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    { postSig(", "); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 812 "vtkParse.y"
    { postSig("class "); }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 813 "vtkParse.y"
    { postSig("int "); }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 820 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 831 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 833 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 839 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 843 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 856 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 864 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 874 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 878 "vtkParse.y"
    { postSig(")"); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 879 "vtkParse.y"
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

  case 169:

/* Line 1455 of yacc.c  */
#line 893 "vtkParse.y"
    { postSig(")"); }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 894 "vtkParse.y"
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

  case 171:

/* Line 1455 of yacc.c  */
#line 905 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed operator", currentFunction->Name);
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 921 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 922 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 927 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 929 "vtkParse.y"
    { postSig(")"); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 930 "vtkParse.y"
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

  case 177:

/* Line 1455 of yacc.c  */
#line 941 "vtkParse.y"
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (yyvsp[(1) - (2)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 958 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    {postSig(" const");}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 963 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 966 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 967 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 968 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 975 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 977 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 978 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 987 "vtkParse.y"
    { postSig("("); }
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 996 "vtkParse.y"
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

  case 197:

/* Line 1455 of yacc.c  */
#line 1009 "vtkParse.y"
    { postSig("(");}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1011 "vtkParse.y"
    {postSig("const ");}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1013 "vtkParse.y"
    {postSig("static ");}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1014 "vtkParse.y"
    {postSig("static ");}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1016 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1017 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1018 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1019 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1020 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1021 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1029 "vtkParse.y"
    {clearTypeId();}
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    { postSig("...");}
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1035 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1038 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(3) - (3)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(3) - (3)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (3)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1050 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1057 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1058 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(3) - (3)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(3) - (3)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (3)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1077 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1084 "vtkParse.y"
    { postSig("(&"); clearVarName(); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1086 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ((yyvsp[(1) - (5)].integer) | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1097 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*");
      clearVarName(); }
    break;

  case 231:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    { postSig(")("); }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1100 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
      if (getVarName())
        {
        currentFunction->ArgNames[i] = vtkstrdup(getVarName());
        }
    }
    break;

  case 239:

/* Line 1455 of yacc.c  */
#line 1118 "vtkParse.y"
    {
       postSig("="); postSig((yyvsp[(2) - (2)].str)); setVarValue((yyvsp[(2) - (2)].str)); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1141 "vtkParse.y"
    {clearVarValue();}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1143 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1145 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(2) - (2)].integer); setVarName((yyvsp[(1) - (2)].str));}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1154 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1154 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1159 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1164 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1168 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1169 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1171 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1172 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1174 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1175 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1176 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1180 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1182 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1183 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1184 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1188 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1189 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1192 "vtkParse.y"
    {postSig(", ");}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1194 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1195 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1196 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1197 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1200 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1206 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1213 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1214 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1215 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1216 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1217 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1230 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1232 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1233 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1234 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1238 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
    { postSig("**"); }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1242 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1243 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1244 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1245 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1246 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1248 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1249 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1250 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1256 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1257 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1258 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1259 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1269 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1278 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1292 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    {
      currentClass->SuperClasses[currentClass->NumberOfSuperClasses++] =
        vtkstrdup((yyvsp[(2) - (2)].str));
    }
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1307 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1308 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1309 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1311 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1313 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1318 "vtkParse.y"
    {
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (7)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(6) - (7)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (7)].str), getTypeId(), (yyvsp[(6) - (7)].str));
            }
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1326 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1327 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1329 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1331 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1332 "vtkParse.y"
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
   currentFunction->ArgCounts[0] = 0;
   output_function();
   }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1346 "vtkParse.y"
    {postSig("Get");}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1347 "vtkParse.y"
    {markSig();}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1347 "vtkParse.y"
    {swapSig();}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1348 "vtkParse.y"
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

  case 380:

/* Line 1455 of yacc.c  */
#line 1360 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1361 "vtkParse.y"
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
   currentFunction->ArgCounts[0] = 0;
   output_function();
   }
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1375 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1376 "vtkParse.y"
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

  case 384:

/* Line 1455 of yacc.c  */
#line 1389 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1389 "vtkParse.y"
    {closeSig();}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1391 "vtkParse.y"
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
   currentFunction->ArgCounts[0] = 0;
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

  case 387:

/* Line 1455 of yacc.c  */
#line 1436 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1437 "vtkParse.y"
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

  case 389:

/* Line 1455 of yacc.c  */
#line 1451 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1452 "vtkParse.y"
    {markSig();}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1452 "vtkParse.y"
    {swapSig();}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1453 "vtkParse.y"
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

  case 393:

/* Line 1455 of yacc.c  */
#line 1466 "vtkParse.y"
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

  case 394:

/* Line 1455 of yacc.c  */
#line 1491 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1492 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1496 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1497 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1501 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1502 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1506 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1507 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1511 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1512 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1516 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1517 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1521 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1522 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1526 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1527 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1531 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1533 "vtkParse.y"
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

  case 412:

/* Line 1455 of yacc.c  */
#line 1552 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1554 "vtkParse.y"
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

  case 414:

/* Line 1455 of yacc.c  */
#line 1574 "vtkParse.y"
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

  case 415:

/* Line 1455 of yacc.c  */
#line 1640 "vtkParse.y"
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

  case 416:

/* Line 1455 of yacc.c  */
#line 1710 "vtkParse.y"
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

  case 417:

/* Line 1455 of yacc.c  */
#line 1777 "vtkParse.y"
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

  case 418:

/* Line 1455 of yacc.c  */
#line 1850 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1851 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1852 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1853 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1856 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1857 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1857 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1858 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1858 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1859 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1859 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1860 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1860 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1861 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1861 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1862 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1862 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1863 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1864 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1865 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1866 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1867 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1868 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1869 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1870 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1871 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1872 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1873 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1874 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1875 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1876 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1877 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1878 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1879 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1880 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1881 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1882 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1883 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1884 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1885 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1886 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1887 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1888 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1889 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1896 "vtkParse.y"
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
#line 6970 "vtkParse.tab.c"
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
#line 1938 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i;

  func->Name = NULL;
  func->NumberOfArguments = 0;
  func->ArrayFailure = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsPublic = 0;
  func->IsOperator = 0;
  func->HaveHint = 0;
  func->HintSize = 0;
  func->ReturnType = VTK_PARSE_VOID;
  func->ReturnClass = NULL;
  func->Comment = NULL;
  func->Signature = NULL;
  func->IsLegacy = 0;
  sigAllocatedLength = 0;
  sigClosed = 0;
  sigMarkDepth = 0;
  sigMark[0] = 0;

  for (i = 0; i < MAX_ARGS; i++)
    {
    func->ArgTypes[i] = 0;
    func->ArgClasses[i] = 0;
    func->ArgCounts[i] = 0;
    func->ArgNames[i] = 0;
    func->ArgValues[i] = 0;
    }
}

/* initialize the structure */
void InitConstant(ConstantInfo *con)
{
  con->Name = NULL;
  con->Value = NULL;
  con->Type = 0;
  con->TypeClass = NULL;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->ClassName = NULL;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfConstants = 0;
}

/* initialize the structure */
void InitFile(FileInfo *file_info)
{
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;

  /* namespace info */
  file_info->Name = NULL;
  file_info->NumberOfClasses = 0;
  file_info->NumberOfFunctions = 0;
  file_info->NumberOfConstants = 0;
  file_info->NumberOfNamespaces = 0;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->ClassName = vtkstrdup(classname);
  currentNamespace->Classes[currentNamespace->NumberOfClasses++] =
      currentClass;

  in_public = 0;
  in_protected = 0;
  if (is_struct)
    {
    in_public = 1;
    }

  InitFunction(currentFunction);
}

/* reached the end of a class definition */
void end_class()
{
  currentClass = NULL;
}

/* add a constant to the current class or namespace */
void add_constant(const char *name, const char *value,
                  int type, const char *typeclass, int global)
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

  if (global)
    {
    data.Constants[data.NumberOfConstants++] = con;
    }
  else if (currentClass)
    {
    currentClass->Constants[currentClass->NumberOfConstants++] = con;
    }
  else
    {
    currentNamespace->Constants[currentNamespace->NumberOfConstants++] = con;
    }
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
  currentFunction->IsPublic = in_public;
  currentFunction->IsProtected = in_protected;

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
      case VTK_PARSE_ARRAY_2D:
      case VTK_PARSE_ARRAY_3D:
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

    currentClass->Functions[currentClass->NumberOfFunctions++]
      = currentFunction;

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
      currentNamespace->Functions[currentNamespace->NumberOfFunctions++] =
        currentFunction;

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
  currentNamespace = &data;
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
  strncpy(main_class, &currentNamespace->FileName[i], j-i);
  main_class[j-i] = '\0';

  /* move the main class to the first position */
  for (i = 0; i < currentNamespace->NumberOfClasses; i++)
    {
    if (strcmp(currentNamespace->Classes[i]->ClassName, main_class) == 0)
      {
      ClassInfo *temp = currentNamespace->Classes[i];
      for (j = i; j > 0; j--)
        {
        currentNamespace->Classes[j] = currentNamespace->Classes[j-1];
        }
      currentNamespace->Classes[0] = temp;
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      currentNamespace->Classes[0]->IsAbstract = !is_concrete;
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
  int i, j;

  /* read each hint line in succession */
  while (fscanf(hfile,"%s %s %x %i", h_cls, h_func, &h_type, &h_value) != EOF)
    {
    /* find the matching class */
    for (i = 0; i < file_info->NumberOfClasses; i++)
      {
      class_info = file_info->Classes[i];

      if (strcmp(h_cls, class_info->ClassName) == 0)
        {
        /* find the matching function */
        for (j = 0; j < class_info->NumberOfFunctions; j++)
          {
          func_info = class_info->Functions[j];

          if (func_info->HaveHint == 0 && func_info->Name &&
              (strcmp(h_func, func_info->Name) == 0) &&
              ((int)h_type == func_info->ReturnType))
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
  /* big memory leak here, strings aren't freed */
  int i, j, n, m;
  ClassInfo *class_info;
  FunctionInfo *func_info;

  n = file_info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_info = file_info->Classes[i];
    m = class_info->NumberOfFunctions;
    for (j = 0; j < m; j++)
      {
      func_info = class_info->Functions[j];
      free(func_info);
      }
    free(class_info);
    }

  m = file_info->NumberOfFunctions;
  for (j = 0; j < m; j++)
    {
    func_info = file_info->Functions[j];
    free(func_info);
    }

  m = file_info->NumberOfNamespaces;
  for (i = 0; i < m; i++)
    {
    vtkParse_Free(file_info->Namespaces[i]);
    }

  free(file_info);
}

