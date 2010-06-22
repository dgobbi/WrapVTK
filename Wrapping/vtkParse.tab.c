
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
  - remove the #defined constants that appear right after the enums

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

/* Map from the type enumeration in vtkType.h to the VTK wrapping type
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
char *currentNamespace = 0;

void start_class(const char *classname);
void end_class();
void output_function(void);
void reject_function(void);

void outputSetVectorMacro(
  const char *var, int argType, const char *typeText, int n);
void outputGetVectorMacro(
  const char *var, int argType, const char *typeText, int n);

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
  char *cp = currentNamespace;
  if (cp)
    {
    currentNamespace = (char *)malloc(strlen(cp) + strlen(name) + 3);
    sprintf(currentNamespace, "%s::%s", cp, name);
    free(cp);
    }
  else
    {
    currentNamespace = (char *)malloc(strlen(name) + 1);
    strcpy(currentNamespace, name);
    }
}

/* leave the namespace */
void popNamespace()
{
  char *cp = currentNamespace;
  int i = strlen(cp);
  while (i > 0 && cp[i-1] != ':') { i--; }
  while (i > 0 && cp[i-1] == ':') { i--; }
  cp[i] = '\0';

  if (i == 0)
    {
    free(cp);
    currentNamespace = 0;
    }
}

/* get the namespace */
const char *getNamespace()
{
  return currentNamespace;
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
#line 554 "vtkParse.tab.c"

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
     CLASS = 258,
     PUBLIC = 259,
     PRIVATE = 260,
     PROTECTED = 261,
     VIRTUAL = 262,
     ID = 263,
     STRING_LITERAL = 264,
     INT_LITERAL = 265,
     HEX_LITERAL = 266,
     FLOAT_LITERAL = 267,
     CHAR_LITERAL = 268,
     INT = 269,
     FLOAT = 270,
     SHORT = 271,
     LONG = 272,
     LONG_LONG = 273,
     INT64__ = 274,
     DOUBLE = 275,
     VOID = 276,
     CHAR = 277,
     SIGNED_CHAR = 278,
     BOOL = 279,
     OSTREAM = 280,
     ISTREAM = 281,
     ENUM = 282,
     UNION = 283,
     CLASS_REF = 284,
     OTHER = 285,
     CONST = 286,
     CONST_PTR = 287,
     CONST_EQUAL = 288,
     OPERATOR = 289,
     UNSIGNED = 290,
     SIGNED = 291,
     FRIEND = 292,
     INLINE = 293,
     MUTABLE = 294,
     TEMPLATE = 295,
     TYPENAME = 296,
     TYPEDEF = 297,
     NAMESPACE = 298,
     USING = 299,
     VTK_ID = 300,
     STATIC = 301,
     EXTERN = 302,
     VAR_FUNCTION = 303,
     ARRAY_NUM = 304,
     VTK_LEGACY = 305,
     NEW = 306,
     DELETE = 307,
     LPAREN_POINTER = 308,
     LPAREN_AMPERSAND = 309,
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
     StdString = 336,
     UnicodeString = 337,
     IdType = 338,
     TypeInt8 = 339,
     TypeUInt8 = 340,
     TypeInt16 = 341,
     TypeUInt16 = 342,
     TypeInt32 = 343,
     TypeUInt32 = 344,
     TypeInt64 = 345,
     TypeUInt64 = 346,
     TypeFloat32 = 347,
     TypeFloat64 = 348,
     SetMacro = 349,
     GetMacro = 350,
     SetStringMacro = 351,
     GetStringMacro = 352,
     SetClampMacro = 353,
     SetObjectMacro = 354,
     GetObjectMacro = 355,
     BooleanMacro = 356,
     SetVector2Macro = 357,
     SetVector3Macro = 358,
     SetVector4Macro = 359,
     SetVector6Macro = 360,
     GetVector2Macro = 361,
     GetVector3Macro = 362,
     GetVector4Macro = 363,
     GetVector6Macro = 364,
     SetVectorMacro = 365,
     GetVectorMacro = 366,
     ViewportCoordinateMacro = 367,
     WorldCoordinateMacro = 368,
     TypeMacro = 369,
     VTK_CONSTANT_DEF = 370,
     VTK_BYTE_SWAP_DECL = 371
   };
#endif




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 222 of yacc.c  */
#line 495 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 829 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 841 "vtkParse.tab.c"

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
#define YYLAST   5889

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  168
/* YYNRULES -- Number of rules.  */
#define YYNRULES  507
/* YYNRULES -- Number of states.  */
#define YYNSTATES  932

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   371

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   138,     2,     2,     2,   132,   133,     2,
     118,   119,   130,   128,   125,   127,   139,   131,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   124,   117,
     122,   126,   123,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   136,     2,   137,   135,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   120,   134,   121,   129,     2,     2,     2,
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
     115,   116
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     5,     9,    11,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    32,    35,    37,    40,
      44,    48,    52,    57,    60,    64,    68,    71,    75,    79,
      84,    87,    91,    95,    99,   104,   107,   109,   111,   114,
     119,   124,   126,   127,   135,   136,   147,   148,   149,   153,
     156,   158,   161,   163,   165,   167,   169,   171,   173,   175,
     178,   180,   182,   185,   189,   193,   196,   200,   203,   207,
     211,   214,   218,   221,   227,   229,   231,   239,   246,   247,
     249,   253,   255,   259,   261,   263,   265,   267,   269,   271,
     273,   275,   278,   282,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   308,   316,   323,   327,   328,
     335,   341,   344,   348,   350,   355,   359,   364,   370,   379,
     387,   397,   407,   410,   413,   416,   419,   423,   426,   429,
     433,   434,   440,   442,   443,   448,   451,   454,   456,   458,
     460,   465,   470,   473,   477,   482,   486,   489,   493,   496,
     500,   502,   505,   509,   513,   517,   519,   522,   526,   527,
     528,   537,   538,   542,   545,   546,   547,   555,   556,   560,
     563,   566,   569,   570,   572,   573,   579,   580,   581,   591,
     592,   596,   597,   603,   604,   608,   609,   613,   618,   620,
     621,   627,   629,   631,   634,   636,   638,   640,   642,   644,
     646,   648,   652,   653,   655,   657,   661,   662,   663,   666,
     668,   670,   671,   676,   677,   678,   684,   685,   686,   692,
     694,   695,   701,   702,   703,   713,   714,   716,   718,   721,
     722,   724,   727,   732,   738,   743,   749,   754,   760,   764,
     767,   771,   777,   783,   790,   799,   808,   810,   814,   816,
     820,   823,   828,   829,   833,   834,   836,   839,   840,   842,
     843,   847,   852,   854,   857,   859,   862,   864,   867,   870,
     872,   874,   876,   877,   881,   882,   888,   889,   895,   897,
     898,   903,   905,   907,   909,   911,   915,   919,   921,   923,
     925,   927,   929,   931,   933,   935,   937,   940,   943,   946,
     949,   952,   953,   958,   959,   964,   965,   970,   972,   974,
     976,   978,   980,   982,   984,   986,   988,   990,   992,   994,
     996,   998,  1000,  1002,  1004,  1006,  1008,  1010,  1012,  1014,
    1015,  1019,  1020,  1024,  1026,  1028,  1030,  1032,  1034,  1036,
    1038,  1040,  1041,  1044,  1046,  1050,  1053,  1054,  1056,  1058,
    1060,  1062,  1065,  1068,  1070,  1074,  1082,  1084,  1086,  1088,
    1090,  1092,  1094,  1095,  1103,  1104,  1105,  1106,  1116,  1117,
    1123,  1124,  1130,  1131,  1132,  1143,  1144,  1152,  1153,  1154,
    1155,  1165,  1172,  1173,  1181,  1182,  1190,  1191,  1199,  1200,
    1208,  1209,  1217,  1218,  1226,  1227,  1235,  1236,  1244,  1245,
    1255,  1256,  1266,  1271,  1276,  1283,  1291,  1294,  1297,  1301,
    1305,  1307,  1309,  1311,  1313,  1315,  1317,  1319,  1321,  1323,
    1325,  1327,  1329,  1331,  1333,  1335,  1337,  1339,  1341,  1343,
    1345,  1347,  1349,  1351,  1353,  1355,  1357,  1359,  1361,  1363,
    1365,  1367,  1369,  1371,  1373,  1375,  1377,  1379,  1381,  1383,
    1385,  1387,  1389,  1390,  1393,  1394,  1397,  1398,  1401,  1403,
    1405,  1407,  1409,  1411,  1413,  1415,  1417,  1419,  1421,  1423,
    1425,  1427,  1429,  1431,  1433,  1435,  1437,  1439,  1441,  1443,
    1445,  1447,  1449,  1451,  1453,  1455,  1457,  1459,  1461,  1463,
    1465,  1467,  1469,  1471,  1473,  1475,  1477,  1479,  1481,  1483,
    1487,  1491,  1495,  1499,  1503,  1507,  1508,  1511
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     141,     0,    -1,    -1,    -1,   141,   142,   143,    -1,   233,
      -1,    47,   233,    -1,   151,    -1,   150,    -1,   160,    -1,
     159,    -1,   161,    -1,   162,    -1,   164,    -1,   168,    -1,
     144,    -1,   171,   144,    -1,    29,    -1,   184,   214,    -1,
      38,   184,   214,    -1,    47,   184,   214,    -1,   171,   184,
     214,    -1,   171,    38,   184,   214,    -1,   183,   214,    -1,
      38,   183,   214,    -1,    47,   183,   214,    -1,   179,   214,
      -1,    38,   179,   214,    -1,    47,   179,   214,    -1,    47,
       9,   179,   214,    -1,   180,   214,    -1,    38,   180,   214,
      -1,    47,   180,   214,    -1,   171,   179,   214,    -1,   171,
      38,   179,   214,    -1,   177,   214,    -1,   271,    -1,   296,
      -1,   255,   117,    -1,     8,   118,   297,   119,    -1,    45,
     118,   297,   119,    -1,   117,    -1,    -1,     3,   213,   145,
     265,   120,   147,   121,    -1,    -1,     3,   213,   122,   251,
     123,   146,   265,   120,   147,   121,    -1,    -1,    -1,   147,
     148,   149,    -1,   268,   124,    -1,   233,    -1,    39,   233,
      -1,   151,    -1,   150,    -1,   160,    -1,   159,    -1,   161,
      -1,   168,    -1,   166,    -1,    37,   166,    -1,   165,    -1,
      29,    -1,   184,   214,    -1,    37,   184,   214,    -1,    38,
     184,   214,    -1,   170,   214,    -1,    38,   170,   214,    -1,
     182,   214,    -1,    37,   182,   214,    -1,    38,   182,   214,
      -1,   169,   214,    -1,    38,   169,   214,    -1,   178,   214,
      -1,   116,   118,   297,   119,   117,    -1,   271,    -1,   117,
      -1,    27,   213,   120,   152,   121,   298,   117,    -1,    27,
     120,   152,   121,   298,   117,    -1,    -1,   153,    -1,   153,
     125,   152,    -1,   213,    -1,   213,   126,   156,    -1,   155,
      -1,   213,    -1,   254,    -1,   248,    -1,    10,    -1,    11,
      -1,    13,    -1,   154,    -1,   157,   156,    -1,   154,   158,
     156,    -1,   118,   156,   119,    -1,   127,    -1,   128,    -1,
     129,    -1,   127,    -1,   128,    -1,   130,    -1,   131,    -1,
     132,    -1,   133,    -1,   134,    -1,   135,    -1,    28,   213,
     120,   297,   121,   298,   117,    -1,    28,   120,   297,   121,
     298,   117,    -1,    44,   298,   117,    -1,    -1,    43,   255,
     163,   120,   141,   121,    -1,    47,     9,   120,   141,   121,
      -1,   171,   166,    -1,     3,   213,   167,    -1,   117,    -1,
     120,   297,   121,   117,    -1,   124,   298,   117,    -1,    42,
     244,   239,   117,    -1,    42,     3,   213,   230,   117,    -1,
      42,     3,   213,   120,   297,   121,   230,   117,    -1,    42,
       3,   120,   297,   121,   230,   117,    -1,    42,   244,    53,
     230,   119,   118,   215,   119,   117,    -1,    42,   244,    54,
     230,   119,   118,   215,   119,   117,    -1,    42,   151,    -1,
      42,   150,    -1,    42,   160,    -1,    42,   159,    -1,    42,
      48,   117,    -1,   171,   182,    -1,   171,   184,    -1,    40,
     122,   123,    -1,    -1,    40,   122,   172,   173,   123,    -1,
     175,    -1,    -1,   175,   125,   174,   173,    -1,   176,   229,
      -1,   171,   229,    -1,    41,    -1,     3,    -1,    14,    -1,
      50,   118,   179,   119,    -1,    50,   118,   182,   119,    -1,
     243,   193,    -1,   243,   181,   193,    -1,   255,    80,   129,
     208,    -1,   255,    80,   201,    -1,   255,    80,    -1,   181,
     255,    80,    -1,   129,   208,    -1,     7,   129,   208,    -1,
     201,    -1,   243,   193,    -1,     7,   244,   193,    -1,   255,
      80,   185,    -1,   243,   181,   188,    -1,   185,    -1,   243,
     188,    -1,     7,   244,   188,    -1,    -1,    -1,    34,   243,
     118,   186,   217,   119,   187,   196,    -1,    -1,   190,   189,
     196,    -1,   190,   195,    -1,    -1,    -1,    34,   294,   191,
     118,   192,   217,   119,    -1,    -1,   197,   194,   196,    -1,
     197,   195,    -1,   126,    10,    -1,    33,    10,    -1,    -1,
      31,    -1,    -1,   213,   118,   198,   217,   119,    -1,    -1,
      -1,   213,   122,   199,   251,   123,   118,   200,   217,   119,
      -1,    -1,   203,   202,   205,    -1,    -1,   213,   118,   204,
     217,   119,    -1,    -1,   124,   207,   206,    -1,    -1,   125,
     207,   206,    -1,   213,   118,   297,   119,    -1,   209,    -1,
      -1,   213,   118,   210,   217,   119,    -1,    31,    -1,    46,
      -1,    46,    38,    -1,    45,    -1,     8,    -1,    26,    -1,
      25,    -1,    81,    -1,    82,    -1,   117,    -1,   120,   297,
     121,    -1,    -1,   216,    -1,   221,    -1,   221,   125,   216,
      -1,    -1,    -1,   218,   219,    -1,    79,    -1,   221,    -1,
      -1,   221,   125,   220,   219,    -1,    -1,    -1,   244,   222,
     240,   223,   231,    -1,    -1,    -1,   244,   224,   239,   225,
     231,    -1,    48,    -1,    -1,   244,    54,   226,   238,   119,
      -1,    -1,    -1,   244,    53,   227,   238,   119,   118,   228,
     215,   119,    -1,    -1,   213,    -1,   213,    -1,   256,   213,
      -1,    -1,   232,    -1,   126,   269,    -1,     3,   213,   234,
     117,    -1,     3,   213,   256,   234,   117,    -1,    27,   213,
     234,   117,    -1,    27,   213,   256,   234,   117,    -1,    28,
     213,   234,   117,    -1,    28,   213,   256,   234,   117,    -1,
     243,   234,   117,    -1,    48,   117,    -1,    46,    48,   117,
      -1,   243,    54,   213,   119,   117,    -1,   243,    53,   230,
     119,   117,    -1,   243,    53,   230,   119,    49,   117,    -1,
     243,    53,   230,   119,   136,   297,   137,   117,    -1,   243,
      53,   230,   119,   118,   215,   119,   117,    -1,   236,    -1,
     236,   125,   235,    -1,   236,    -1,   236,   125,   235,    -1,
     256,   236,    -1,   256,   236,   125,   235,    -1,    -1,   239,
     237,   231,    -1,    -1,   213,    -1,   213,   240,    -1,    -1,
     241,    -1,    -1,    49,   242,   240,    -1,   136,   298,   137,
     240,    -1,   244,    -1,   212,   244,    -1,   245,    -1,   245,
     256,    -1,   246,    -1,   211,   246,    -1,   246,   211,    -1,
     260,    -1,   248,    -1,   254,    -1,    -1,    41,   247,   254,
      -1,    -1,    45,   122,   249,   251,   123,    -1,    -1,     8,
     122,   250,   251,   123,    -1,   244,    -1,    -1,   244,   125,
     252,   251,    -1,     8,    -1,    45,    -1,   248,    -1,   254,
      -1,   255,    80,   253,    -1,   248,    80,   253,    -1,     8,
      -1,    45,    -1,    26,    -1,    25,    -1,    81,    -1,    82,
      -1,   133,    -1,   130,    -1,    32,    -1,   130,   133,    -1,
     130,   130,    -1,    32,   133,    -1,    32,   130,    -1,    32,
      32,    -1,    -1,   130,   130,   257,   256,    -1,    -1,    32,
     130,   258,   256,    -1,    -1,    32,    32,   259,   256,    -1,
     261,    -1,    81,    -1,    82,    -1,    25,    -1,    26,    -1,
       8,    -1,    45,    -1,    21,    -1,    15,    -1,    20,    -1,
      24,    -1,    23,    -1,    84,    -1,    85,    -1,    86,    -1,
      87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,    -1,
      92,    -1,    93,    -1,    -1,    36,   262,   264,    -1,    -1,
      35,   263,   264,    -1,   264,    -1,    22,    -1,    14,    -1,
      16,    -1,    17,    -1,    83,    -1,    18,    -1,    19,    -1,
      -1,   124,   266,    -1,   267,    -1,   267,   125,   266,    -1,
     268,   253,    -1,    -1,     4,    -1,     5,    -1,     6,    -1,
     270,    -1,   128,   270,    -1,   127,   270,    -1,     9,    -1,
     118,   269,   119,    -1,     8,   122,   245,   123,   118,   270,
     119,    -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,
       8,    -1,    45,    -1,    -1,    94,   118,   213,   125,   272,
     244,   119,    -1,    -1,    -1,    -1,    95,   118,   273,   213,
     125,   274,   244,   275,   119,    -1,    -1,    96,   118,   276,
     213,   119,    -1,    -1,    97,   118,   277,   213,   119,    -1,
      -1,    -1,    98,   118,   213,   125,   278,   260,   279,   125,
     298,   119,    -1,    -1,    99,   118,   213,   125,   280,   260,
     119,    -1,    -1,    -1,    -1,   100,   118,   281,   213,   125,
     282,   260,   283,   119,    -1,   101,   118,   213,   125,   260,
     119,    -1,    -1,   102,   118,   213,   125,   284,   260,   119,
      -1,    -1,   106,   118,   213,   125,   285,   260,   119,    -1,
      -1,   103,   118,   213,   125,   286,   260,   119,    -1,    -1,
     107,   118,   213,   125,   287,   260,   119,    -1,    -1,   104,
     118,   213,   125,   288,   260,   119,    -1,    -1,   108,   118,
     213,   125,   289,   260,   119,    -1,    -1,   105,   118,   213,
     125,   290,   260,   119,    -1,    -1,   109,   118,   213,   125,
     291,   260,   119,    -1,    -1,   110,   118,   213,   125,   292,
     260,   125,    10,   119,    -1,    -1,   111,   118,   213,   125,
     293,   260,   125,    10,   119,    -1,   112,   118,   213,   119,
      -1,   113,   118,   213,   119,    -1,   114,   118,   213,   125,
     213,   119,    -1,   114,   118,   213,   125,   213,   125,   119,
      -1,   118,   119,    -1,   136,   137,    -1,    51,   136,   137,
      -1,    52,   136,   137,    -1,   295,    -1,   126,    -1,   130,
      -1,   131,    -1,   127,    -1,   128,    -1,   138,    -1,   129,
      -1,   125,    -1,   122,    -1,   123,    -1,   133,    -1,   134,
      -1,   135,    -1,   132,    -1,    51,    -1,    52,    -1,    55,
      -1,    56,    -1,    57,    -1,    58,    -1,    59,    -1,    60,
      -1,    63,    -1,    64,    -1,    65,    -1,    66,    -1,    67,
      -1,    61,    -1,    62,    -1,    68,    -1,    69,    -1,    70,
      -1,    71,    -1,    72,    -1,    73,    -1,    74,    -1,    75,
      -1,    76,    -1,    77,    -1,    78,    -1,   115,    -1,    -1,
     297,   301,    -1,    -1,   298,   302,    -1,    -1,   299,   300,
      -1,     3,    -1,    40,    -1,   301,    -1,   117,    -1,   302,
      -1,   306,    -1,    30,    -1,   303,    -1,   304,    -1,   305,
      -1,   295,    -1,   124,    -1,   139,    -1,   260,    -1,    80,
      -1,    10,    -1,    11,    -1,    12,    -1,    13,    -1,     9,
      -1,    29,    -1,    31,    -1,    32,    -1,    33,    -1,    34,
      -1,    46,    -1,    38,    -1,     7,    -1,    27,    -1,    28,
      -1,    41,    -1,    49,    -1,    48,    -1,    79,    -1,     4,
      -1,     6,    -1,     5,    -1,    43,    -1,    44,    -1,    47,
      -1,   296,    -1,   120,   299,   121,    -1,   118,   297,   119,
      -1,    53,   297,   119,    -1,    54,   297,   119,    -1,   136,
     297,   137,    -1,    42,   307,   117,    -1,    -1,     3,   307,
      -1,   302,   307,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   626,   626,   626,   626,   629,   630,   631,   632,   633,
     634,   635,   636,   637,   638,   639,   640,   641,   642,   643,
     644,   645,   646,   647,   648,   649,   650,   651,   652,   653,
     654,   655,   656,   657,   658,   659,   660,   661,   662,   663,
     664,   665,   667,   667,   669,   669,   672,   672,   672,   674,
     675,   676,   677,   678,   679,   680,   681,   682,   683,   684,
     685,   686,   687,   688,   690,   691,   692,   693,   694,   696,
     697,   698,   699,   700,   701,   702,   710,   712,   714,   714,
     714,   716,   716,   720,   720,   720,   720,   722,   722,   722,
     724,   725,   730,   736,   742,   742,   743,   745,   745,   746,
     746,   747,   747,   748,   748,   750,   752,   754,   756,   756,
     759,   761,   763,   765,   766,   767,   769,   770,   771,   772,
     773,   775,   777,   778,   779,   780,   781,   783,   785,   787,
     788,   788,   791,   792,   792,   794,   794,   796,   797,   798,
     800,   802,   804,   809,   810,   811,   813,   814,   816,   817,
     822,   823,   827,   836,   837,   840,   844,   848,   859,   863,
     858,   878,   878,   889,   906,   907,   906,   914,   914,   925,
     942,   943,   945,   945,   948,   947,   952,   953,   952,   962,
     962,   972,   972,   974,   974,   976,   976,   978,   980,   994,
     994,   996,   998,   999,  1001,  1002,  1003,  1004,  1005,  1006,
    1008,  1008,  1010,  1010,  1012,  1012,  1014,  1014,  1014,  1016,
    1017,  1020,  1019,  1023,  1024,  1023,  1042,  1043,  1042,  1061,
    1069,  1069,  1082,  1084,  1082,  1097,  1097,  1099,  1099,  1101,
    1101,  1103,  1106,  1107,  1108,  1109,  1110,  1111,  1112,  1113,
    1114,  1115,  1116,  1117,  1118,  1120,  1123,  1124,  1126,  1127,
    1128,  1129,  1132,  1132,  1134,  1134,  1136,  1145,  1145,  1148,
    1148,  1154,  1159,  1160,  1162,  1163,  1165,  1166,  1167,  1169,
    1170,  1172,  1174,  1174,  1178,  1178,  1180,  1180,  1183,  1183,
    1183,  1185,  1186,  1187,  1188,  1190,  1196,  1203,  1204,  1205,
    1206,  1207,  1208,  1221,  1222,  1223,  1224,  1225,  1226,  1228,
    1230,  1232,  1232,  1234,  1234,  1236,  1236,  1239,  1240,  1241,
    1242,  1243,  1244,  1245,  1248,  1249,  1250,  1251,  1252,  1253,
    1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1263,  1264,  1264,  1266,  1269,  1270,  1271,  1272,  1273,  1274,
    1275,  1277,  1277,  1279,  1279,  1281,  1287,  1288,  1289,  1290,
    1292,  1293,  1294,  1296,  1297,  1298,  1305,  1306,  1307,  1308,
    1309,  1310,  1312,  1312,  1327,  1328,  1328,  1327,  1341,  1341,
    1356,  1356,  1370,  1370,  1370,  1417,  1416,  1432,  1433,  1433,
    1432,  1446,  1472,  1472,  1477,  1477,  1482,  1482,  1487,  1487,
    1492,  1492,  1497,  1497,  1502,  1502,  1507,  1507,  1512,  1512,
    1533,  1533,  1554,  1620,  1690,  1757,  1831,  1832,  1833,  1834,
    1835,  1837,  1838,  1838,  1839,  1839,  1840,  1840,  1841,  1841,
    1842,  1842,  1843,  1843,  1844,  1845,  1846,  1847,  1848,  1849,
    1850,  1851,  1852,  1853,  1854,  1855,  1856,  1857,  1858,  1859,
    1860,  1861,  1862,  1863,  1864,  1865,  1866,  1867,  1868,  1869,
    1870,  1876,  1881,  1881,  1882,  1882,  1883,  1883,  1885,  1885,
    1885,  1887,  1887,  1887,  1889,  1889,  1889,  1889,  1890,  1890,
    1890,  1890,  1890,  1891,  1891,  1891,  1891,  1892,  1892,  1892,
    1892,  1892,  1893,  1893,  1893,  1893,  1893,  1893,  1893,  1894,
    1894,  1894,  1894,  1894,  1894,  1895,  1895,  1895,  1895,  1897,
    1898,  1899,  1900,  1901,  1902,  1904,  1904,  1905
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "CLASS", "PUBLIC", "PRIVATE",
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
  "strt", "$@1", "file_item", "class_def", "$@2", "$@3", "class_def_body",
  "$@4", "class_def_item", "named_enum", "enum", "enum_list", "enum_item",
  "enum_value", "enum_literal", "enum_math", "math_unary_op",
  "math_binary_op", "named_union", "union", "using", "namespace", "$@5",
  "extern", "template_internal_class", "internal_class",
  "internal_class_body", "typedef", "template_method", "template_operator",
  "template", "$@6", "template_args", "$@7", "template_arg",
  "template_type", "legacy_function", "legacy_method", "function",
  "scoped_method", "scope", "method", "scoped_operator", "operator",
  "typecast_op_func", "$@8", "$@9", "op_func", "$@10", "op_sig", "$@11",
  "$@12", "func", "$@13", "pure_virtual", "maybe_const", "func_sig",
  "$@14", "$@15", "@16", "constructor", "$@17", "constructor_sig", "$@18",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "destructor_sig", "$@19", "const_mod", "static_mod", "any_id",
  "func_body", "ignore_args_list", "ignore_more_args", "args_list", "$@20",
  "more_args", "$@21", "arg", "$@22", "$@23", "$@24", "$@25", "$@26",
  "$@27", "$@28", "maybe_id", "maybe_indirect_id", "maybe_var_assign",
  "var_assign", "var", "var_ids", "maybe_indirect_var_ids",
  "var_id_maybe_assign", "$@29", "maybe_var_id", "var_id",
  "maybe_var_array", "var_array", "$@30", "maybe_static_type", "type",
  "type_red", "type_red1", "$@31", "templated_id", "$@32", "$@33", "types",
  "$@34", "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "$@35", "$@36", "$@37", "type_red2", "type_primitive", "$@38", "$@39",
  "type_integer", "optional_scope", "scope_list", "scope_list_item",
  "scope_type", "literal", "literal2", "macro", "$@40", "$@41", "$@42",
  "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50", "$@51",
  "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60",
  "$@61", "op_token", "op_token_no_delim", "vtk_constant_def",
  "maybe_other", "maybe_other_no_semi", "maybe_other_class",
  "other_stuff_or_class", "other_stuff", "other_stuff_no_semi", "braces",
  "parens", "brackets", "typedef_ignore", "typedef_ignore_body", 0
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
     365,   366,   367,   368,   369,   370,   371,    59,    40,    41,
     123,   125,    60,    62,    58,    44,    61,    45,    43,   126,
      42,    47,    37,    38,   124,    94,    91,    93,    33,    46
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint16 yyr1[] =
{
       0,   140,   141,   142,   141,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   143,   143,   143,   143,   143,   143,   143,   143,
     143,   143,   145,   144,   146,   144,   147,   148,   147,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   150,   151,   152,   152,
     152,   153,   153,   154,   154,   154,   154,   155,   155,   155,
     156,   156,   156,   156,   157,   157,   157,   158,   158,   158,
     158,   158,   158,   158,   158,   159,   160,   161,   163,   162,
     164,   165,   166,   167,   167,   167,   168,   168,   168,   168,
     168,   168,   168,   168,   168,   168,   168,   169,   170,   171,
     172,   171,   173,   174,   173,   175,   175,   176,   176,   176,
     177,   178,   179,   180,   180,   180,   181,   181,   182,   182,
     182,   182,   182,   183,   183,   184,   184,   184,   186,   187,
     185,   189,   188,   188,   191,   192,   190,   194,   193,   193,
     195,   195,   196,   196,   198,   197,   199,   200,   197,   202,
     201,   204,   203,   205,   205,   206,   206,   207,   208,   210,
     209,   211,   212,   212,   213,   213,   213,   213,   213,   213,
     214,   214,   215,   215,   216,   216,   217,   218,   217,   219,
     219,   220,   219,   222,   223,   221,   224,   225,   221,   221,
     226,   221,   227,   228,   221,   229,   229,   230,   230,   231,
     231,   232,   233,   233,   233,   233,   233,   233,   233,   233,
     233,   233,   233,   233,   233,   233,   234,   234,   235,   235,
     235,   235,   237,   236,   238,   238,   239,   240,   240,   242,
     241,   241,   243,   243,   244,   244,   245,   245,   245,   246,
     246,   246,   247,   246,   249,   248,   250,   248,   251,   252,
     251,   253,   253,   253,   253,   254,   254,   255,   255,   255,
     255,   255,   255,   256,   256,   256,   256,   256,   256,   256,
     256,   257,   256,   258,   256,   259,   256,   260,   260,   260,
     260,   260,   260,   260,   261,   261,   261,   261,   261,   261,
     261,   261,   261,   261,   261,   261,   261,   261,   261,   262,
     261,   263,   261,   261,   264,   264,   264,   264,   264,   264,
     264,   265,   265,   266,   266,   267,   268,   268,   268,   268,
     269,   269,   269,   269,   269,   269,   270,   270,   270,   270,
     270,   270,   272,   271,   273,   274,   275,   271,   276,   271,
     277,   271,   278,   279,   271,   280,   271,   281,   282,   283,
     271,   271,   284,   271,   285,   271,   286,   271,   287,   271,
     288,   271,   289,   271,   290,   271,   291,   271,   292,   271,
     293,   271,   271,   271,   271,   271,   294,   294,   294,   294,
     294,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   295,   295,   295,   295,   295,   295,   295,   295,   295,
     295,   296,   297,   297,   298,   298,   299,   299,   300,   300,
     300,   301,   301,   301,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   302,
     302,   302,   302,   302,   302,   302,   302,   302,   302,   303,
     304,   304,   304,   305,   306,   307,   307,   307
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     0,     3,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     1,     2,     3,
       3,     3,     4,     2,     3,     3,     2,     3,     3,     4,
       2,     3,     3,     3,     4,     2,     1,     1,     2,     4,
       4,     1,     0,     7,     0,    10,     0,     0,     3,     2,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     2,     3,     3,     2,     3,     2,     3,     3,
       2,     3,     2,     5,     1,     1,     7,     6,     0,     1,
       3,     1,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     7,     6,     3,     0,     6,
       5,     2,     3,     1,     4,     3,     4,     5,     8,     7,
       9,     9,     2,     2,     2,     2,     3,     2,     2,     3,
       0,     5,     1,     0,     4,     2,     2,     1,     1,     1,
       4,     4,     2,     3,     4,     3,     2,     3,     2,     3,
       1,     2,     3,     3,     3,     1,     2,     3,     0,     0,
       8,     0,     3,     2,     0,     0,     7,     0,     3,     2,
       2,     2,     0,     1,     0,     5,     0,     0,     9,     0,
       3,     0,     5,     0,     3,     0,     3,     4,     1,     0,
       5,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     3,     0,     1,     1,     3,     0,     0,     2,     1,
       1,     0,     4,     0,     0,     5,     0,     0,     5,     1,
       0,     5,     0,     0,     9,     0,     1,     1,     2,     0,
       1,     2,     4,     5,     4,     5,     4,     5,     3,     2,
       3,     5,     5,     6,     8,     8,     1,     3,     1,     3,
       2,     4,     0,     3,     0,     1,     2,     0,     1,     0,
       3,     4,     1,     2,     1,     2,     1,     2,     2,     1,
       1,     1,     0,     3,     0,     5,     0,     5,     1,     0,
       4,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     0,     2,     1,     3,     2,     0,     1,     1,     1,
       1,     2,     2,     1,     3,     7,     1,     1,     1,     1,
       1,     1,     0,     7,     0,     0,     0,     9,     0,     5,
       0,     5,     0,     0,    10,     0,     7,     0,     0,     0,
       9,     6,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     9,
       0,     9,     4,     4,     6,     7,     2,     2,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     2,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     3,     0,     2,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,   312,   335,   315,   336,
     337,   339,   340,   316,   314,   334,   318,   317,   310,   311,
       0,     0,    17,   191,     0,   331,   329,     0,     0,   272,
       0,     0,   454,   313,   192,     0,     0,     0,   308,   309,
     338,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   451,    41,     4,    15,     8,     7,    10,     9,
      11,    12,    13,    14,     0,     0,     0,     0,     0,     0,
     155,     0,     0,     5,     0,   262,   264,   266,   270,   271,
       0,   269,   307,   333,    36,    37,   195,   197,   196,   194,
     198,   199,    42,   312,   313,     0,     0,   452,   276,    78,
       0,   452,     0,   192,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   130,     0,     0,     0,     0,     0,   123,
     122,   125,   124,     0,   287,   290,   289,   288,   291,   292,
     108,     0,   452,   274,   193,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     6,   239,     0,     0,   364,   368,
     370,     0,     0,   377,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      16,     0,     0,     0,   200,   452,    35,    26,    30,    23,
      18,   267,   263,   195,   197,   196,     0,   194,     0,     0,
     198,   199,     0,   156,   161,   142,   167,   257,     0,   246,
     252,     0,   295,   294,   293,   265,   268,     0,     0,    38,
       0,   341,   257,     0,     0,   157,     0,     0,     0,     0,
      79,    81,    78,     0,     0,     0,   452,     0,     0,   158,
     332,   330,    27,    31,    24,    19,     0,   129,     0,   287,
     288,     0,   273,   452,     0,     0,     0,   126,     0,     0,
       0,     0,   492,   494,   493,   485,   312,   477,   473,   474,
     475,   476,   310,   311,   486,   487,   478,   464,   479,   480,
     481,   482,   484,   488,   495,   496,   313,   483,   497,   490,
     489,   425,   426,   452,   452,   427,   428,   429,   430,   431,
     432,   438,   439,   433,   434,   435,   436,   437,   440,   441,
     442,   443,   444,   445,   446,   447,   448,   449,   450,   491,
     472,   308,   309,   107,   452,   456,   419,   420,   469,   418,
     411,   414,   415,   417,   412,   413,   424,   421,   422,   423,
     452,   416,   470,   471,   468,   498,   455,   465,   466,   467,
       0,     0,   240,     0,     2,     0,     0,     0,     0,    28,
      32,    25,    20,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,    33,    21,
       0,   425,   426,     0,     0,   164,   410,   227,     0,     0,
       0,   154,   143,     0,     0,     0,   172,   163,   172,   169,
     259,   174,   176,   454,   256,   258,   238,     0,   229,   146,
     300,   299,   298,   297,   296,   281,   282,   283,   286,   284,
     281,   282,     0,   153,   145,   179,     0,   285,   278,     0,
     346,     0,   232,     0,   505,   461,    39,   453,   462,   463,
       0,   454,    78,     0,     0,   234,     0,   454,     0,   236,
       0,   207,   138,   139,   137,   225,     0,   132,   225,     0,
     452,     0,     0,     0,   116,     2,     0,     0,     0,     0,
       0,    40,     0,     3,    29,   140,   362,     0,     0,     0,
     372,   375,     0,     0,   382,   386,   390,   394,   384,   388,
     392,   396,   398,   400,   402,   403,     0,    34,    22,   201,
       0,     0,   406,   407,     0,     0,   228,     0,   147,   171,
     170,   173,   162,   168,   257,   207,     0,     0,   247,   248,
       0,     0,   253,   230,     0,     0,     0,   144,   188,     0,
     183,   181,   279,    44,   347,   348,   349,   342,   343,     0,
      46,   233,   505,   505,     0,   277,     0,    80,   195,    87,
      88,    89,   194,     0,    94,    95,    96,    90,    83,    82,
       0,    84,    86,    85,   454,   235,     0,   454,   237,     0,
       0,   226,   136,   131,   133,   135,     0,     0,   117,     0,
       0,     3,   501,   502,   500,   458,   459,   499,   457,   460,
     503,   275,   110,     0,   365,   369,   371,     0,     0,   378,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   408,   409,   165,     0,   242,   202,   452,   241,
     260,     0,     0,   257,     0,   250,   360,   353,   356,   357,
     358,   359,   361,     0,     0,     0,   231,   350,   306,   304,
     302,   189,     0,   180,   207,     0,   341,   346,   345,    47,
     506,   507,   504,    77,     0,    97,    98,    99,   100,   101,
     102,   103,   104,     0,    91,     0,   106,     0,   159,   219,
     209,   208,   210,   216,     0,     0,     0,   202,   202,   109,
       0,     0,   373,     0,     0,   381,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   404,     0,   207,   243,
       0,   203,   204,     0,   175,     0,   261,   249,     0,     0,
       0,   360,   352,   351,   207,   185,     0,     0,   280,     0,
     344,    43,   346,    93,    92,    76,   105,   172,   211,   222,
     220,   257,     0,   134,   119,     0,     0,     0,   363,   366,
       0,   376,   379,   383,   387,   391,   395,   385,   389,   393,
     397,     0,     0,   405,     0,     0,     0,     0,   177,   251,
       0,   354,     0,     0,   184,   452,   182,    46,     0,     0,
     312,   310,   311,    61,     0,     0,     0,   313,     0,   308,
     309,     0,    75,     0,    48,    53,    52,    55,    54,    56,
      60,    58,    57,     0,     0,     0,     0,     0,     0,   150,
      50,     0,     0,    74,   160,     0,   254,   254,   214,   217,
     118,     0,     0,     0,   454,     0,     0,     0,   166,   245,
     205,   244,   207,     0,   190,   185,     0,    47,     0,     0,
       0,     0,    59,     0,     0,     0,     0,     0,     0,     0,
       0,    51,     0,     0,   452,   148,    70,    65,   111,   127,
     128,    72,    67,    62,   151,    49,   212,   255,     0,     0,
     229,   229,   120,   121,   367,     0,   380,   399,   401,     0,
       0,   186,   187,    45,   113,   452,   454,   112,   149,   152,
       0,    68,    63,    71,    66,    69,    64,     0,     0,     0,
       0,     0,   221,   215,   218,   374,   178,     0,     0,     0,
       0,   141,     0,   223,   355,     0,   115,    73,   202,   114,
       0,   224
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    74,    75,   231,   666,   669,   742,   804,
      76,    77,   239,   240,   577,   578,   579,   580,   683,    78,
      79,    80,    81,   271,    82,   810,   811,   897,    83,   813,
     814,   475,   258,   476,   694,   477,   478,    85,   816,    86,
      87,   212,   869,    88,   870,    90,   471,   747,   213,   416,
     214,   524,   718,   215,   418,   417,   532,   216,   535,   536,
     842,   819,   550,   445,   664,   663,   784,   735,   547,   548,
     734,    91,    92,   232,   196,   720,   721,   589,   590,   691,
     825,   722,   751,   880,   752,   881,   827,   826,   928,   592,
     408,   542,   543,    93,   218,   538,   219,   428,   878,   220,
     424,   425,   534,   855,    95,    96,    97,   134,    98,   361,
     238,   449,   665,   447,    99,   116,   409,   546,   545,   544,
     101,   102,   126,   125,   103,   451,   557,   558,   559,   656,
     657,   104,   613,   375,   701,   833,   376,   377,   617,   760,
     618,   380,   704,   835,   621,   625,   622,   626,   623,   627,
     624,   628,   629,   630,   405,   354,   355,   237,   151,   489,
     608,   457,   458,   357,   358,   359,   459,   564
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -740
static const yytype_int16 yypact[] =
{
    -740,    91,  -740,  4877,   307,  5678,   175,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   -11,    55,
     524,   545,  -740,  -740,  5557,  -740,  -740,  5385,    -8,  -740,
    5258,   520,  -740,   285,    34,  5076,    17,     1,    84,   126,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,    18,    25,    57,    73,    80,    97,   124,   180,   185,
     186,   198,   204,   205,   207,   210,   211,   212,   213,   216,
     219,   220,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,   863,    -4,    -4,    -4,    -4,    -4,
    -740,  5764,  5678,  -740,   661,  -740,    15,   246,    42,  -740,
     128,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,   294,   -25,   -17,   309,   264,  -740,  -740,   307,
     338,  -740,   466,   313,   227,   418,   418,    -4,    -4,    -4,
      -4,   555,   267,   231,   552,   585,   524,   545,   238,  -740,
    -740,  -740,  -740,   700,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  3284,  -740,  -740,  -740,   240,   307,  4985,   307,   307,
      -4,    -4,    -4,    -4,  -740,  -740,  5557,   307,  -740,  -740,
    -740,   307,   307,  -740,   307,   307,   307,   307,   307,   307,
     307,   307,   307,   307,   307,   307,   307,   307,   307,  5385,
    -740,    -4,    -4,   811,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,   280,   282,   286,  5253,   287,   228,   307,
     293,   300,   555,  -740,    26,  -740,    26,   116,   268,   259,
    -740,   310,    16,   134,  -740,  -740,  -740,   710,    75,  -740,
    5678,   269,    19,   274,   307,  -740,   710,  1244,  5678,   271,
     275,   279,   307,   284,   307,  1380,  -740,   291,   307,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,   140,  -740,   260,   288,
     290,    42,  -740,  -740,   474,   289,   295,  -740,   228,   228,
     296,   297,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    1516,  5678,  -740,   228,  -740,    -4,   307,   228,   228,  -740,
    -740,  -740,  -740,   299,   298,   307,   307,   307,   303,   314,
     307,   316,   320,   323,   325,   326,   327,   331,   332,   337,
     341,   342,   306,   319,   347,   351,    -4,    -4,  -740,  -740,
    1652,   339,   348,   359,   346,  -740,  -740,  -740,   366,   307,
     367,  -740,  -740,   407,   411,   412,   462,  -740,   462,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,   228,   368,  -740,
      20,    83,  -740,    99,  -740,   -25,   -17,    42,  -740,  -740,
     -19,    45,   307,  -740,  -740,  -740,   377,  -740,   371,   374,
     302,   382,  -740,   388,  1108,  -740,  -740,  -740,  -740,  -740,
     380,  -740,   307,   361,   389,  -740,   390,  -740,  1788,  -740,
     395,   396,  -740,  -740,  -740,   307,   393,   392,   307,  1924,
    -740,   403,   408,   410,  -740,  -740,  2060,  2196,  2332,   971,
    2468,  -740,   413,   409,  -740,  -740,  -740,   414,   415,   416,
    -740,  -740,   426,  5796,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,   307,  -740,  -740,  -740,
     400,   401,  -740,  -740,   443,   110,  -740,   445,  -740,  -740,
    -740,  -740,  -740,  -740,    19,   396,  5678,  3420,  -740,   439,
     307,   386,  -740,  -740,    15,    15,    15,  -740,  -740,   448,
     444,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   442,   710,
    -740,  -740,  1108,  1108,   455,  -740,  3556,  -740,   -25,  -740,
    -740,  -740,   -17,   361,  -740,  -740,  -740,   522,  -740,  -740,
     361,  -740,    42,  -740,  -740,  -740,  3692,  -740,  -740,   457,
    5471,  -740,  -740,  -740,  -740,  -740,   228,  2604,  -740,   456,
     465,   467,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  5678,  -740,  -740,  -740,  5796,  5796,  -740,
     468,  5796,  5796,  5796,  5796,  5796,  5796,  5796,  5796,  5796,
    5796,   -35,  -740,  -740,  -740,   475,  -740,  5643,  -740,  -740,
    -740,   476,   480,    19,   228,   484,   490,  -740,  -740,  -740,
    -740,  -740,  -740,   386,   513,   513,  -740,  -740,  -740,  -740,
    -740,  -740,   307,  -740,   396,  5678,   269,   302,  -740,   492,
    -740,  -740,  -740,  -740,   495,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,   361,  -740,  3828,  -740,  3964,  -740,  -740,
    -740,  -740,   493,   169,   260,   498,   228,  5643,  5643,  -740,
     500,  5678,  -740,   502,  5796,  -740,   503,   504,   505,   509,
     512,   516,   519,   523,   514,   521,  -740,   526,   396,  -740,
     528,  -740,   534,  2740,  -740,   530,  -740,  -740,   228,  5678,
     542,  -740,  -740,  -740,   396,   537,   550,   551,  -740,   553,
    -740,  -740,  4373,  -740,  -740,  -740,  -740,   462,  -740,  -740,
    -740,    19,   307,  -740,  -740,   557,   569,   570,  -740,  -740,
     565,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,   631,   681,  -740,   575,   580,  5643,   582,  -740,  -740,
     577,  -740,   583,   307,  -740,  -740,  -740,  -740,   307,  4785,
     -19,    22,   119,  -740,  4489,  4576,  5167,    45,   586,   151,
     161,   589,  -740,   307,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,    -4,    -4,  4489,    -4,    -4,    -4,  -740,
    -740,   781,   579,  -740,  -740,  5471,   307,   307,  -740,  -740,
    -740,   584,   592,   591,  -740,   593,   594,   597,  -740,  -740,
    -740,  -740,   396,   601,  -740,   537,  2876,   590,   194,   307,
     811,   307,  -740,    -4,    -4,   811,    -4,    -4,  4663,    -4,
      -4,  -740,   887,  4750,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   604,   618,
     368,   368,  -740,  -740,  -740,  4100,  -740,  -740,  -740,   619,
     513,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
     148,  -740,  -740,  -740,  -740,  -740,  -740,  4785,   629,   307,
    3012,   632,  -740,  -740,  -740,  -740,  -740,   637,  3148,  4236,
     307,  -740,   634,  -740,  -740,   640,  -740,  -740,  5643,  -740,
     641,  -740
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -740,  -331,  -740,  -740,   675,  -740,  -740,   -26,  -740,  -740,
     -21,   -20,  -214,  -740,  -740,  -740,  -515,  -740,  -740,   -18,
     -15,    23,  -740,  -740,  -740,  -740,  -723,  -740,    24,   -33,
     -31,    -2,  -740,    74,  -740,  -740,  -740,  -740,  -740,    46,
      59,  -740,  -667,    77,     4,   539,  -740,  -740,  -101,  -740,
    -740,  -740,  -740,  -192,  -740,   562,  -397,  -740,  -740,  -740,
    -740,   559,  -740,  -740,  -740,  -740,   -66,    -3,  -739,  -740,
    -740,   686,  -740,     2,   -84,  -641,    12,  -494,  -740,   -30,
    -740,  -564,  -740,  -740,  -740,  -740,  -740,  -740,  -740,   322,
    -215,  -624,  -740,   -22,   -27,  -584,  -393,  -740,   -24,  -127,
    -492,  -740,  -740,     5,    -5,    65,   711,  -740,  -110,  -740,
    -740,  -219,  -740,  -210,  -104,    35,   -85,  -740,  -740,  -740,
      54,  -740,  -740,  -740,   159,   138,   141,  -740,    67,   158,
    -604,    70,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,  -740,
    -740,  -740,  -740,  -740,  -740,   607,   813,   -54,  -387,  -740,
    -740,   329,  -133,  -740,  -740,  -740,  -740,  -273
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -306
static const yytype_int16 yytable[] =
{
     115,    84,   197,   198,   199,   200,   112,    89,    94,   139,
     140,   225,   141,   164,   235,   142,   270,   438,   356,   460,
     412,   533,   120,   122,   261,   143,   692,   234,   464,   124,
     262,   130,   131,   493,   539,   244,   537,   248,   100,   163,
      94,   641,   640,   252,   253,   254,   255,   222,   430,   481,
     732,   733,  -305,   482,   483,  -287,   756,   757,   674,   414,
     727,  -287,   132,  -288,   865,   684,   150,   245,   420,  -290,
     132,   852,   154,   127,   566,   817,   369,   370,   371,   372,
     586,   160,   155,   440,   716,   233,   128,   202,   192,   193,
     717,     2,   868,   243,   161,   247,   217,   118,   360,  -195,
     204,   205,  -290,   118,   129,   153,  -290,   398,   399,    24,
     898,   411,   162,   194,   133,  -303,   195,   437,   437,   166,
     441,   241,   227,   439,   439,  -288,   437,   853,   859,   221,
     191,  -301,   439,   256,   165,  -289,   167,   264,   265,   266,
    -197,   400,   492,   168,   779,   223,   431,   645,   224,   432,
    -305,   726,   415,  -305,   601,   423,   210,   211,   363,   635,
     367,   368,   366,  -194,  -291,   420,   221,   153,   744,   374,
     737,   366,  -289,   378,   379,   169,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   170,   468,   397,   193,   256,   908,   685,   171,  -289,
     687,  -291,   106,   365,   442,   353,  -292,   453,   228,   479,
     407,   410,   373,  -303,   256,   172,  -303,   466,  -213,   107,
     108,   470,   749,   750,   774,   448,   222,   636,   637,  -301,
     446,  -291,  -301,   448,   421,   396,   106,  -196,   422,   109,
     782,  -292,   173,  -292,   241,   229,   638,   413,   567,   486,
     487,   539,   423,   107,   108,  -287,   913,   914,   421,   828,
     222,   692,   422,   472,   433,   894,   407,   434,   895,  -198,
     407,   407,   896,   109,   473,   110,   111,    23,   234,  -199,
     488,   494,   244,   248,   250,   251,   917,   930,  -213,   670,
     671,   353,  -287,   117,  -213,  -213,   490,   118,   174,   353,
      28,   474,   106,   175,   176,  -213,   554,   555,   556,   110,
     111,   894,   517,   518,   895,   106,   177,   642,   896,   107,
     108,   563,   178,   179,   223,   180,   222,   224,   181,   182,
     183,   184,   107,   108,   185,   539,   233,   186,   187,   109,
     243,   247,   540,   206,   236,   249,   106,   228,   889,   668,
     824,   154,   109,   582,   257,   267,   448,   362,   223,   583,
    -287,   224,  -290,   107,   108,  -288,  -289,  -288,   256,   568,
     222,   569,   570,  -291,   571,   110,   111,   497,   498,   499,
    -292,   695,   502,   109,   427,   426,   204,   205,   110,   111,
     429,   452,   461,   450,   646,   647,   648,   649,   650,   651,
     462,   465,  -288,   152,   356,   463,   572,   153,   469,   242,
     118,   526,   153,   484,   353,   246,   230,   485,   495,   110,
     111,   529,   530,   496,   223,   514,   597,   224,   500,   563,
     563,   652,     7,   356,     9,    10,    11,    12,   515,   501,
      15,   503,   210,   211,   549,   504,   738,   885,   505,   437,
     506,   507,   508,   356,   353,   439,   509,   510,   242,   658,
     659,   660,   511,   582,   241,   581,   512,   513,   223,   583,
     582,   224,   516,   230,   106,   520,   583,   591,   522,   573,
     591,   755,   106,   523,   521,   525,   527,   528,   574,   575,
     576,   107,   108,   531,   541,   551,   552,   553,   222,   107,
     108,    40,   560,   565,   653,   561,   222,   585,   353,   919,
     584,   109,   588,   654,   655,  -206,   593,   594,   631,   109,
     598,   731,   353,   648,   649,   650,   651,   599,   144,   600,
     612,   448,   106,   353,   615,   616,   611,   632,   633,   614,
     353,   353,   353,   353,   353,   145,   146,   110,   111,   107,
     108,   619,   356,   106,   356,   110,   111,   620,   652,   540,
     259,   634,   639,   203,   644,   147,   661,   667,   662,   109,
     107,   108,   672,   582,   697,   581,   688,   145,   146,   583,
     204,   205,   581,   698,   723,   693,   246,   705,   699,   206,
     109,   353,   719,   106,   480,   724,   223,   260,   407,   224,
     207,   148,   149,   725,   223,   110,   111,   224,   700,   728,
     107,   108,   729,   741,   743,   754,   353,   353,   748,   758,
     353,   761,   763,   764,   765,   829,   110,   111,   766,   874,
     109,   767,   693,   148,   149,   768,   210,   211,   769,   771,
     353,   836,   770,   540,   119,   773,   772,   775,   778,   675,
     676,   353,   677,   678,   679,   680,   681,   682,   899,   776,
     448,   781,   783,   874,   736,   121,   110,   111,   785,   203,
     786,   702,   703,   787,   830,   706,   707,   708,   709,   710,
     711,   712,   713,   714,   715,   581,   204,   205,   831,   832,
     834,   837,   693,   693,   838,   206,   759,   839,   407,   841,
     843,   882,   844,   875,   863,   263,   207,   864,   106,   883,
     884,   893,   886,   887,   208,   209,   888,   874,   435,   890,
     820,   805,   806,   911,   807,   107,   108,   808,   899,   866,
     867,   846,   871,   872,   873,   145,   146,   912,   916,   353,
     815,   353,   210,   211,   446,   109,   818,   821,   921,   235,
     923,   927,   356,   268,   269,   436,   924,   929,   762,   190,
     931,   847,   856,   234,   857,   809,   812,   443,   753,   901,
     902,   693,   903,   904,   861,   905,   906,   353,   419,   891,
     845,   110,   111,   226,   850,   736,   356,   444,   840,   106,
     848,   148,   149,   858,   780,   876,   446,   446,   854,   860,
     595,   862,   201,   879,   739,   549,   107,   108,   740,   822,
     910,   730,   823,   406,     0,   206,   105,   446,   609,   106,
     693,   233,     0,   217,     0,     0,   109,     0,   877,   877,
       0,     0,     0,     0,   208,   209,   107,   108,     0,     0,
       0,   918,     0,     0,     0,   206,     0,     0,     0,     0,
       0,   549,   256,   900,     0,     0,   109,   256,     0,     0,
     446,     0,   110,   111,     0,   446,   188,     0,   909,     0,
       5,   113,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,   110,   111,    23,   106,     0,    24,    25,    26,
     353,   189,   920,     0,    29,     0,     0,     0,   114,   123,
       0,   256,   107,   108,     0,     0,     0,     0,     0,     0,
       0,     0,   256,   693,     0,     0,     0,     0,     0,     0,
       0,     0,   109,     0,     0,     0,     0,     0,     0,   353,
     208,   209,     0,     0,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,   353,     0,     0,     0,   110,   111,
       0,     0,   353,   353,   605,   272,   273,   274,   275,   276,
     277,   278,   279,   280,   281,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,   282,   283,   284,   285,
     286,   287,   288,   289,   290,   291,    25,    26,     0,   292,
       0,   606,   293,   454,   294,   295,   296,   297,   298,   299,
     300,     0,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,   332,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    72,     0,   455,   334,
       0,   335,   607,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,     0,   351,
     352,   562,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,     0,   334,     0,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,   454,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   455,   334,   456,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,   454,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   455,   334,     0,
     335,   467,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,   454,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   455,   334,   491,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,   454,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   455,
     334,     0,   335,   519,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
     454,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   455,   334,     0,   335,   587,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,   454,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   455,   334,     0,   335,   596,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,   454,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   455,   334,   602,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,   454,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   455,   334,   603,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,   454,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   455,
     334,   604,   335,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
     454,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   455,   334,     0,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   610,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,   454,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   455,   334,     0,   335,   696,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,   454,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,   455,   334,     0,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   777,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,   454,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   455,   334,   892,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,   454,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   455,
     334,   922,   335,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
     454,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   455,   334,     0,   335,   925,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,     0,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   333,   334,     0,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,     0,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,     0,   334,     0,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   643,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   673,   334,     0,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   272,   273,   274,   275,
     276,   277,   278,   279,   280,   281,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,    25,    26,     0,
     292,     0,     0,   293,     0,   294,   295,   296,   297,   298,
     299,   300,     0,   301,   302,   303,   304,   305,   306,   307,
     308,   309,   310,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    72,     0,   686,
     334,     0,   335,     0,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,     0,
     351,   352,   272,   273,   274,   275,   276,   277,   278,   279,
     280,   281,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,   282,   283,   284,   285,   286,   287,   288,
     289,   290,   291,    25,    26,     0,   292,     0,     0,   293,
       0,   294,   295,   296,   297,   298,   299,   300,     0,   301,
     302,   303,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    72,     0,   745,   334,     0,   335,     0,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,     0,   351,   352,   272,   273,
     274,   275,   276,   277,   278,   279,   280,   281,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,   282,
     283,   284,   285,   286,   287,   288,   289,   290,   291,    25,
      26,     0,   292,     0,     0,   293,     0,   294,   295,   296,
     297,   298,   299,   300,     0,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    72,
       0,   746,   334,     0,   335,     0,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,     0,   351,   352,   272,   273,   274,   275,   276,   277,
     278,   279,   280,   281,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   282,   283,   284,   285,   286,
     287,   288,   289,   290,   291,    25,    26,     0,   292,     0,
       0,   293,     0,   294,   295,   296,   297,   298,   299,   300,
       0,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    72,     0,     0,   334,   915,
     335,     0,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,     0,   351,   352,
     272,   273,   274,   275,   276,   277,   278,   279,   280,   281,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    25,    26,     0,   292,     0,     0,   293,     0,   294,
     295,   296,   297,   298,   299,   300,     0,   301,   302,   303,
     304,   305,   306,   307,   308,   309,   310,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    72,     0,   926,   334,     0,   335,     0,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,     0,   351,   352,   788,   554,   555,   556,
     789,   790,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   791,   792,
      20,    21,   793,     0,    23,     0,     0,    24,    25,    26,
     794,   795,   796,    28,    29,    30,     0,    32,   797,    34,
       0,    36,     0,   798,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   799,   800,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,     0,   801,
     802,     0,   851,     0,     0,     0,   789,   790,     0,     0,
       0,     0,   803,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,   791,   792,     0,     0,     0,     0,
      23,     0,     0,    24,    25,    26,     0,     0,     0,     0,
      29,     0,     0,     0,   797,   123,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     799,   800,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,   789,   790,     0,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   791,   792,     0,     0,     0,     0,    23,     0,     0,
      24,    25,    26,     0,     0,     0,    28,    29,   803,     0,
       0,   797,   123,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   799,   800,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     789,   790,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,   791,   792,
       0,     0,     0,     0,    23,     0,     0,    24,    25,    26,
       0,     0,     0,     0,    29,   803,     0,     0,   797,   123,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   799,   800,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,   907,   790,     0,
       0,     0,     0,     0,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,   791,   792,     0,     0,     0,
       0,    23,     0,     0,     0,    25,    26,     0,     0,     0,
       0,    29,   803,   113,     0,   797,   123,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    23,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    29,     0,     0,     0,
     114,   799,   800,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   803,
       4,     0,     0,     0,     5,     6,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,     0,    23,     0,
       0,    24,    25,    26,   849,    27,     0,    28,    29,    30,
      31,    32,    33,    34,    35,    36,     0,    37,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,   113,    73,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    23,     0,     0,     0,
      25,    26,     0,     0,     0,     0,    29,     0,     0,     0,
     114,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   156,
       0,     0,     0,     5,   113,   157,     0,     0,     0,     0,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,   158,   159,   364,     0,    23,     0,     0,
      24,    25,    26,     0,     0,     0,     0,    29,     0,     0,
       0,   114,    34,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
     156,     0,     0,     0,     0,   113,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,   158,   159,     0,     0,    23,     0,
       0,     0,    25,    26,     0,     0,     0,     0,    29,     0,
       0,     0,   114,    34,     0,    36,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   135,     0,     0,     0,     0,   113,     0,     0,     0,
       0,     0,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,   136,   137,     0,     0,    23,
       0,     0,     0,    25,    26,     0,     0,     0,     0,    29,
       0,     0,     0,   114,   401,   402,   138,     0,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,     0,     0,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   403,     0,     0,     0,   336,   337,     0,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   404,
       0,   351,     5,   113,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,     0,     0,     0,     0,    23,     0,     0,    24,
      25,    26,     0,     0,     0,     0,    29,     0,     0,     0,
     114,   123,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,   113,
       0,     0,     0,     0,     0,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,     0,     0,
       0,     0,    23,     0,     0,     0,    25,    26,     0,     0,
       0,     0,    29,     0,     0,     0,   114,     0,     0,   689,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     690,     0,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,   113,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,     0,     0,     0,     0,    23,     0,
       0,     0,    25,    26,     0,     0,     0,     0,    29,     0,
       0,     0,   114,   123,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,   113,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
       0,     0,     0,     0,    23,     0,     0,     0,    25,    26,
       0,     0,     0,     0,    29,     0,   113,     0,   114,     0,
       0,   689,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,     0,     0,     0,     0,    23,
       0,     0,     0,    25,    26,     0,     0,     0,     0,    29,
       0,     0,     0,   114,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,   113,     0,     0,     0,     0,     0,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,     0,     0,     0,     0,     0,     0,     0,     0,    25,
      26,     0,     0,     0,   276,    29,     0,     0,     0,   114,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,   282,   283,     0,     0,     0,     0,     0,     0,     0,
       0,    25,    26,     0,     0,     0,     0,     0,     0,     0,
       0,   296,     0,     0,     0,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   331,   332,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50
};

static const yytype_int16 yycheck[] =
{
       5,     3,    86,    87,    88,    89,     4,     3,     3,    30,
      30,    96,    30,    35,   115,    30,   143,   227,   151,   238,
     212,   418,    20,    21,   134,    30,   590,   112,   242,    24,
     134,    27,    27,   364,   427,   120,   423,   122,     3,    35,
      35,   535,   534,   127,   128,   129,   130,    32,    32,   264,
     654,   655,    32,   268,   269,    80,   697,   698,   573,    33,
     644,    80,    27,    80,   803,   580,    31,   121,    49,    80,
      35,   794,    38,    27,   461,   742,   160,   161,   162,   163,
     467,    35,    48,     8,   119,   112,    27,    92,    84,    84,
     125,     0,   815,   120,    35,   122,    94,   122,   152,   118,
      25,    26,    80,   122,    27,   122,   117,   191,   192,    34,
     849,   212,    35,   117,   122,    32,   120,   227,   228,   118,
      45,   119,    80,   227,   228,    80,   236,   794,   795,    94,
      84,    32,   236,   131,   117,    80,   118,   135,   136,   137,
     118,   195,   361,   118,   728,   130,   130,   540,   133,   133,
     130,   643,   126,   133,   485,   136,    81,    82,   156,    49,
     158,   159,   157,   118,    80,    49,   131,   122,   683,   167,
     664,   166,   117,   171,   172,   118,   174,   175,   176,   177,
     178,   179,   180,   181,   182,   183,   184,   185,   186,   187,
     188,   118,   246,   189,   189,   193,   863,   584,   118,    80,
     587,   117,     8,   157,   129,   151,    80,   234,    80,   263,
     208,   209,   166,   130,   212,   118,   133,   244,    49,    25,
      26,   248,    53,    54,   718,   230,    32,   117,   118,   130,
     228,    80,   133,   238,   118,   189,     8,   118,   122,    45,
     734,    80,   118,   117,   242,   117,   136,   212,   462,   303,
     304,   644,   136,    25,    26,    80,   880,   881,   118,   751,
      32,   825,   122,     3,   130,   117,   264,   133,   120,   118,
     268,   269,   124,    45,    14,    81,    82,    31,   363,   118,
     334,   365,   367,   368,   125,   126,   890,   928,   119,   562,
     563,   237,   117,   118,   125,   126,   350,   122,   118,   245,
      40,    41,     8,   118,   118,   136,     4,     5,     6,    81,
      82,   117,   396,   397,   120,     8,   118,   536,   124,    25,
      26,   454,   118,   118,   130,   118,    32,   133,   118,   118,
     118,   118,    25,    26,   118,   728,   363,   118,   118,    45,
     367,   368,   427,    34,    80,   118,     8,    80,   842,   559,
     747,    38,    45,   463,   123,   117,   361,   117,   130,   463,
      80,   133,    80,    25,    26,    80,    80,    80,   366,     8,
      32,    10,    11,    80,    13,    81,    82,   375,   376,   377,
      80,   596,   380,    45,   125,   117,    25,    26,    81,    82,
      80,   117,   121,   124,     8,     9,    10,    11,    12,    13,
     125,   117,   117,   118,   537,   126,    45,   122,   117,   120,
     122,   409,   122,   117,   360,   120,   122,   120,   119,    81,
      82,    10,    10,   125,   130,   119,   480,   133,   125,   562,
     563,    45,    14,   566,    16,    17,    18,    19,   119,   125,
      22,   125,    81,    82,   442,   125,   665,   834,   125,   559,
     125,   125,   125,   586,   400,   559,   125,   125,   120,   544,
     545,   546,   125,   573,   462,   463,   125,   125,   130,   573,
     580,   133,   125,   122,     8,   136,   580,   475,   119,   118,
     478,   696,     8,   137,   136,   119,   119,    80,   127,   128,
     129,    25,    26,    31,   126,   118,   125,   123,    32,    25,
      26,    83,   120,   123,   118,   117,    32,   117,   454,   896,
     121,    45,   117,   127,   128,   119,   123,   125,   516,    45,
     117,     8,   468,    10,    11,    12,    13,   119,     8,   119,
     121,   536,     8,   479,   119,   119,   123,   137,   137,   125,
     486,   487,   488,   489,   490,    25,    26,    81,    82,    25,
      26,   125,   685,     8,   687,    81,    82,   503,    45,   644,
       8,   118,   117,     8,   125,    45,   118,   125,   124,    45,
      25,    26,   117,   683,   118,   573,   119,    25,    26,   683,
      25,    26,   580,   118,   638,   590,   120,   119,   121,    34,
      45,   537,   117,     8,   120,   119,   130,    45,   596,   133,
      45,    81,    82,   123,   130,    81,    82,   133,   613,   125,
      25,    26,   122,   121,   119,   117,   562,   563,   125,   119,
     566,   119,   119,   119,   119,   752,    81,    82,   119,   821,
      45,   119,   637,    81,    82,   119,    81,    82,   119,   125,
     586,    10,   119,   728,   120,   119,   125,   119,   118,   127,
     128,   597,   130,   131,   132,   133,   134,   135,   850,   125,
     665,   119,   125,   855,   662,   120,    81,    82,   118,     8,
     119,   617,   618,   120,   117,   621,   622,   623,   624,   625,
     626,   627,   628,   629,   630,   683,    25,    26,   119,   119,
     125,    10,   697,   698,   119,    34,   701,   117,   696,   117,
     123,   117,   119,   124,   118,   120,    45,   118,     8,   117,
     119,   121,   119,   119,    53,    54,   119,   909,     8,   118,
     742,   742,   742,   119,   742,    25,    26,   742,   920,   813,
     814,   785,   816,   817,   818,    25,    26,   119,   119,   685,
     742,   687,    81,    82,   742,    45,   742,   742,   119,   850,
     118,   117,   885,    53,    54,    45,   119,   117,   704,    84,
     119,   787,   795,   848,   795,   742,   742,   228,   694,   853,
     854,   776,   856,   857,   796,   859,   860,   723,   216,   845,
     783,    81,    82,    97,   789,   783,   919,   228,   776,     8,
     788,    81,    82,   795,   729,   825,   794,   795,   794,   795,
     478,   796,    91,   827,   666,   803,    25,    26,   667,   742,
     864,   653,   742,   206,    -1,    34,     3,   815,   489,     8,
     825,   848,    -1,   821,    -1,    -1,    45,    -1,   826,   827,
      -1,    -1,    -1,    -1,    53,    54,    25,    26,    -1,    -1,
      -1,   895,    -1,    -1,    -1,    34,    -1,    -1,    -1,    -1,
      -1,   849,   850,   851,    -1,    -1,    45,   855,    -1,    -1,
     858,    -1,    81,    82,    -1,   863,     3,    -1,   863,    -1,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    81,    82,    31,     8,    -1,    34,    35,    36,
     846,    38,   907,    -1,    41,    -1,    -1,    -1,    45,    46,
      -1,   909,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   920,   928,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    45,    -1,    -1,    -1,    -1,    -1,    -1,   885,
      53,    54,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   910,    -1,    -1,    -1,    81,    82,
      -1,    -1,   918,   919,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    -1,    38,
      -1,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,
      -1,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,    -1,   138,
     139,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,    -1,   118,    -1,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,   119,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,    -1,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,    -1,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,   119,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,    -1,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,    -1,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,   119,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,    -1,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,   118,    -1,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     4,     5,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    36,    -1,
      38,    -1,    -1,    41,    -1,    43,    44,    45,    46,    47,
      48,    49,    -1,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,   117,
     118,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    -1,
     138,   139,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    -1,    38,    -1,    -1,    41,
      -1,    43,    44,    45,    46,    47,    48,    49,    -1,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   115,    -1,   117,   118,    -1,   120,    -1,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,    -1,   138,   139,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    34,    35,
      36,    -1,    38,    -1,    -1,    41,    -1,    43,    44,    45,
      46,    47,    48,    49,    -1,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,
      -1,   117,   118,    -1,   120,    -1,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,    -1,   138,   139,     4,     5,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      30,    31,    32,    33,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    -1,    43,    44,    45,    46,    47,    48,    49,
      -1,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,   118,   119,
     120,    -1,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,    -1,   138,   139,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    -1,    38,    -1,    -1,    41,    -1,    43,
      44,    45,    46,    47,    48,    49,    -1,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   115,    -1,   117,   118,    -1,   120,    -1,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,    -1,   138,   139,     3,     4,     5,     6,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    31,    -1,    -1,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    -1,    44,    45,    46,
      -1,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,   114,    -1,   116,
     117,    -1,     3,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,   129,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     7,     8,    -1,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      34,    35,    36,    -1,    -1,    -1,    40,    41,   129,    -1,
      -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    -1,    41,   129,    -1,    -1,    45,    46,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,    -1,
      -1,    41,   129,     8,    -1,    45,    46,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,   129,
       3,    -1,    -1,    -1,     7,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    31,    -1,
      -1,    34,    35,    36,   129,    38,    -1,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    -1,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,     8,   117,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     3,
      -1,    -1,    -1,     7,     8,     9,    -1,    -1,    -1,    -1,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,   120,    -1,    31,    -1,    -1,
      34,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    48,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     3,    -1,    -1,    -1,    -1,     8,    -1,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    -1,    -1,    31,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    51,    52,    48,    -1,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   118,    -1,    -1,    -1,   122,   123,    -1,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    -1,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      79,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     8,    -1,    -1,    -1,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,
      -1,    -1,    -1,    -1,    41,    -1,     8,    -1,    45,    -1,
      -1,    48,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,     8,    41,    -1,    -1,    -1,    45,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    45,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   141,     0,   142,     3,     7,     8,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    31,    34,    35,    36,    38,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    50,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   117,   143,   144,   150,   151,   159,   160,
     161,   162,   164,   168,   171,   177,   179,   180,   183,   184,
     185,   211,   212,   233,   243,   244,   245,   246,   248,   254,
     255,   260,   261,   264,   271,   296,     8,    25,    26,    45,
      81,    82,   213,     8,    45,   244,   255,   118,   122,   120,
     213,   120,   213,    46,   243,   263,   262,   179,   180,   183,
     184,   243,   255,   122,   247,     3,    27,    28,    48,   150,
     151,   159,   160,   244,     8,    25,    26,    45,    81,    82,
     255,   298,   118,   122,    38,    48,     3,     9,    27,    28,
     179,   180,   183,   184,   233,   117,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,     3,    38,
     144,   179,   184,   243,   117,   120,   214,   214,   214,   214,
     214,   246,   244,     8,    25,    26,    34,    45,    53,    54,
      81,    82,   181,   188,   190,   193,   197,   213,   234,   236,
     239,   255,    32,   130,   133,   256,   211,    80,    80,   117,
     122,   145,   213,   234,   256,   188,    80,   297,   250,   152,
     153,   213,   120,   234,   256,   297,   120,   234,   256,   118,
     264,   264,   214,   214,   214,   214,   213,   123,   172,     8,
      45,   248,   254,   120,   213,   213,   213,   117,    53,    54,
     239,   163,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    38,    41,    43,    44,    45,    46,    47,    48,
      49,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,   117,   118,   120,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   138,   139,   260,   295,   296,   302,   303,   304,   305,
     297,   249,   117,   213,   120,   179,   243,   213,   213,   214,
     214,   214,   214,   179,   213,   273,   276,   277,   213,   213,
     281,   213,   213,   213,   213,   213,   213,   213,   213,   213,
     213,   213,   213,   213,   213,   213,   179,   184,   214,   214,
     297,    51,    52,   118,   136,   294,   295,   213,   230,   256,
     213,   188,   193,   255,    33,   126,   189,   195,   194,   195,
      49,   118,   122,   136,   240,   241,   117,   125,   237,    80,
      32,   130,   133,   130,   133,     8,    45,   248,   253,   254,
       8,    45,   129,   185,   201,   203,   213,   253,   244,   251,
     124,   265,   117,   234,    42,   117,   119,   301,   302,   306,
     251,   121,   125,   126,   152,   117,   234,   121,   297,   117,
     234,   186,     3,    14,    41,   171,   173,   175,   176,   297,
     120,   230,   230,   230,   117,   120,   297,   297,   297,   299,
     297,   119,   251,   141,   214,   119,   125,   213,   213,   213,
     125,   125,   213,   125,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   119,   119,   125,   214,   214,   121,
     136,   136,   119,   137,   191,   119,   213,   119,    80,    10,
      10,    31,   196,   196,   242,   198,   199,   298,   235,   236,
     256,   126,   231,   232,   259,   258,   257,   208,   209,   213,
     202,   118,   125,   123,     4,     5,     6,   266,   267,   268,
     120,   117,     3,   302,   307,   123,   298,   152,     8,    10,
      11,    13,    45,   118,   127,   128,   129,   154,   155,   156,
     157,   213,   248,   254,   121,   117,   298,   121,   117,   217,
     218,   213,   229,   123,   125,   229,   121,   297,   117,   119,
     119,   141,   119,   119,   119,     3,    40,   121,   300,   301,
     137,   123,   121,   272,   125,   119,   119,   278,   280,   125,
     260,   284,   286,   288,   290,   285,   287,   289,   291,   292,
     293,   213,   137,   137,   118,    49,   117,   118,   136,   117,
     240,   217,   251,   137,   125,   236,     8,     9,    10,    11,
      12,    13,    45,   118,   127,   128,   269,   270,   256,   256,
     256,   118,   124,   205,   204,   252,   146,   125,   253,   147,
     307,   307,   117,   117,   156,   127,   128,   130,   131,   132,
     133,   134,   135,   158,   156,   298,   117,   298,   119,    48,
      79,   219,   221,   244,   174,   230,   121,   118,   118,   121,
     244,   274,   260,   260,   282,   119,   260,   260,   260,   260,
     260,   260,   260,   260,   260,   260,   119,   125,   192,   117,
     215,   216,   221,   297,   119,   123,   240,   235,   125,   122,
     269,     8,   270,   270,   210,   207,   213,   217,   251,   265,
     266,   121,   148,   119,   156,   117,   117,   187,   125,    53,
      54,   222,   224,   173,   117,   230,   215,   215,   119,   244,
     279,   119,   260,   119,   119,   119,   119,   119,   119,   119,
     119,   125,   125,   119,   217,   119,   125,   137,   118,   235,
     245,   119,   217,   125,   206,   118,   119,   120,     3,     7,
       8,    25,    26,    29,    37,    38,    39,    45,    50,    81,
      82,   116,   117,   129,   149,   150,   151,   159,   160,   161,
     165,   166,   168,   169,   170,   171,   178,   182,   184,   201,
     233,   243,   268,   271,   196,   220,   227,   226,   240,   239,
     117,   119,   119,   275,   125,   283,    10,    10,   119,   117,
     216,   117,   200,   123,   119,   207,   297,   147,   213,   129,
     244,     3,   166,   182,   184,   243,   169,   170,   171,   182,
     184,   233,   243,   118,   118,   208,   214,   214,   166,   182,
     184,   214,   214,   214,   193,   124,   219,   213,   238,   238,
     223,   225,   117,   117,   119,   298,   119,   119,   119,   217,
     118,   206,   119,   121,   117,   120,   124,   167,   208,   193,
     213,   214,   214,   214,   214,   214,   214,     7,   182,   243,
     297,   119,   119,   231,   231,   119,   119,   270,   297,   298,
     244,   119,   119,   118,   119,   121,   117,   117,   228,   117,
     215,   119
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
#line 626 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 642 "vtkParse.y"
    { output_function(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 643 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 644 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 645 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 646 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 647 "vtkParse.y"
    { reject_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 648 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 650 "vtkParse.y"
    { output_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 651 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 652 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 653 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 654 "vtkParse.y"
    { reject_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 656 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 657 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 658 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str)); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { end_class(); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 669 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str)); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    { output_function(); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    { output_function(); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    { output_function(); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 692 "vtkParse.y"
    { output_function(); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    { output_function(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 694 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    { output_function(); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 731 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 737 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 742 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 742 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 743 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 748 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { popNamespace(); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 787 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 788 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 789 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 792 "vtkParse.y"
    { postSig(", "); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 796 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 797 "vtkParse.y"
    { postSig("class "); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 798 "vtkParse.y"
    { postSig("int "); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 805 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 816 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 818 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 828 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 841 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 845 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 849 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 863 "vtkParse.y"
    { postSig(")"); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 864 "vtkParse.y"
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

  case 161:

/* Line 1455 of yacc.c  */
#line 878 "vtkParse.y"
    { postSig(")"); }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 879 "vtkParse.y"
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

  case 163:

/* Line 1455 of yacc.c  */
#line 890 "vtkParse.y"
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

  case 164:

/* Line 1455 of yacc.c  */
#line 906 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 907 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 912 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 914 "vtkParse.y"
    { postSig(")"); }
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 915 "vtkParse.y"
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

  case 169:

/* Line 1455 of yacc.c  */
#line 926 "vtkParse.y"
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

  case 170:

/* Line 1455 of yacc.c  */
#line 942 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 943 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 945 "vtkParse.y"
    {postSig(" const");}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 948 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 951 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 952 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 953 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 963 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
    { postSig("("); }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 981 "vtkParse.y"
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

  case 189:

/* Line 1455 of yacc.c  */
#line 994 "vtkParse.y"
    { postSig("(");}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 996 "vtkParse.y"
    {postSig("const ");}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 998 "vtkParse.y"
    {postSig("static ");}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 999 "vtkParse.y"
    {postSig("static ");}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 1001 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 1002 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1003 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1004 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1005 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1006 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1014 "vtkParse.y"
    {clearTypeId();}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1016 "vtkParse.y"
    { postSig("...");}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1018 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1020 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 1023 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1024 "vtkParse.y"
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

  case 215:

/* Line 1455 of yacc.c  */
#line 1035 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
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

  case 218:

/* Line 1455 of yacc.c  */
#line 1054 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    { postSig("(&"); clearVarName(); }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1071 "vtkParse.y"
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

  case 222:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*");
      clearVarName(); }
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1084 "vtkParse.y"
    { postSig(")("); }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
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

  case 231:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
    {
       postSig("="); postSig((yyvsp[(2) - (2)].str)); setVarValue((yyvsp[(2) - (2)].str)); }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1132 "vtkParse.y"
    {clearVarValue();}
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1136 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(2) - (2)].integer); setVarName((yyvsp[(1) - (2)].str));}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1145 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1145 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1150 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1155 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1159 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1160 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1162 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1163 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1165 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1166 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1167 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1171 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1173 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1174 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1175 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1178 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1179 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1180 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1181 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1183 "vtkParse.y"
    {postSig(", ");}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1185 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1186 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1188 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1191 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1197 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1203 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1204 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1205 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1206 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1207 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1208 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1221 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1222 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1223 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1224 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1225 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1227 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1229 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1231 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1232 "vtkParse.y"
    { postSig("**"); }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1233 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1234 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1235 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1237 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1242 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1243 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1244 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1245 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_VTK_OBJECT; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1248 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1249 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1250 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1256 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1257 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1258 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1259 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1264 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1269 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    {
      currentClass->SuperClasses[currentClass->NumberOfSuperClasses++] =
        vtkstrdup((yyvsp[(2) - (2)].str));
    }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1292 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1296 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1297 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1299 "vtkParse.y"
    {
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (7)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(6) - (7)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (7)].str), getTypeId(), (yyvsp[(6) - (7)].str));
            }
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1306 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1307 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1308 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1309 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1310 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1313 "vtkParse.y"
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

  case 364:

/* Line 1455 of yacc.c  */
#line 1327 "vtkParse.y"
    {postSig("Get");}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    {markSig();}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1328 "vtkParse.y"
    {swapSig();}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1329 "vtkParse.y"
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

  case 368:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
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

  case 370:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
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

  case 372:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    {closeSig();}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1372 "vtkParse.y"
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

  case 375:

/* Line 1455 of yacc.c  */
#line 1417 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
    {
   postSig("*);");
   sprintf(temps,"Set%s",(yyvsp[(3) - (7)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->NumberOfArguments = 1;
   currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ArgClasses[0] = vtkstrdup(getTypeId());
   currentFunction->ArgCounts[0] = 1;
   output_function();
   }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1432 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1433 "vtkParse.y"
    {markSig();}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1433 "vtkParse.y"
    {swapSig();}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1434 "vtkParse.y"
    {
   postSig("();");
   sprintf(temps,"Get%s",(yyvsp[(4) - (9)].str));
   currentFunction->Name = vtkstrdup(temps);
   if (HaveComment)
     {
     currentFunction->Comment = vtkstrdup(CommentText);
     }
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
   currentFunction->ReturnClass = vtkstrdup(getTypeId());
   output_function();
   }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1447 "vtkParse.y"
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

  case 382:

/* Line 1455 of yacc.c  */
#line 1472 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1473 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1477 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1478 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1482 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1483 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1487 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1488 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1492 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1493 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1497 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1498 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1502 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1503 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 396:

/* Line 1455 of yacc.c  */
#line 1507 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1508 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1512 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1514 "vtkParse.y"
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

  case 400:

/* Line 1455 of yacc.c  */
#line 1533 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1535 "vtkParse.y"
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

  case 402:

/* Line 1455 of yacc.c  */
#line 1555 "vtkParse.y"
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
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
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

  case 403:

/* Line 1455 of yacc.c  */
#line 1621 "vtkParse.y"
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
     currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
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

  case 404:

/* Line 1455 of yacc.c  */
#line 1691 "vtkParse.y"
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
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
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
     currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC | VTK_PARSE_VTK_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (6)].str));
     output_function();
     }
   }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1758 "vtkParse.y"
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
   currentFunction->ReturnType = VTK_PARSE_VTK_OBJECT_PTR;
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
     currentFunction->ArgTypes[0] = VTK_PARSE_VTK_OBJECT_PTR;
     currentFunction->ArgCounts[0] = 1;
     currentFunction->ArgClasses[0] = vtkstrdup("vtkObject");
     currentFunction->ReturnType = (VTK_PARSE_STATIC|VTK_PARSE_VTK_OBJECT_PTR);
     currentFunction->ReturnClass = vtkstrdup((yyvsp[(3) - (7)].str));
     output_function();
     }
   }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1831 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1832 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1833 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1834 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1837 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1838 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1838 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1839 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1839 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1840 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1840 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1841 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1841 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1842 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1842 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1843 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1843 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1844 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1845 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1846 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1847 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1848 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1849 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1850 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1851 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1852 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1853 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1854 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1855 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1856 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1857 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1858 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1859 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1860 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1861 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1862 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1863 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1864 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1865 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1866 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1867 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1868 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1869 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1870 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 6762 "vtkParse.tab.c"
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
#line 1907 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i;

  func->Name = NULL;
  func->Namespace = NULL;
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
void InitClass(ClassInfo *cls)
{
  cls->ClassName = NULL;
  cls->Namespace = NULL;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
}

void InitFile(FileInfo *file_info)
{
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;
  file_info->NumberOfClasses = 0;
  file_info->NumberOfFunctions = 0;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->ClassName = vtkstrdup(classname);
  if (getNamespace())
    {
    currentClass->Namespace = vtkstrdup(getNamespace());
    }

  data.Classes[data.NumberOfClasses++] = currentClass;

  InitFunction(currentFunction);
}

/* reached the end of a class definition */
void end_class()
{
  currentClass = NULL;
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
    /* set the namespace */
    if (getNamespace())
      {
      currentFunction->Namespace = vtkstrdup(getNamespace());
      }

    /* make sure this function isn't a repeat */
    match = 0;
    for (i = 0; i < data.NumberOfFunctions; i++)
      {
      if (data.Functions[i]->Name &&
          strcmp(data.Functions[i]->Name, currentFunction->Name) == 0)
        {
        if (data.Functions[i]->NumberOfArguments ==
            currentFunction->NumberOfArguments)
          {
          for (j = 0; j < currentFunction->NumberOfArguments; j++)
            {
            if (data.Functions[i]->ArgTypes[j] ==
                currentFunction->ArgTypes[j])
              {
              if (currentFunction->ArgTypes[j] == VTK_PARSE_VTK_OBJECT &&
                  strcmp(data.Functions[i]->ArgClasses[j],
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
      data.Functions[data.NumberOfFunctions++] = currentFunction;
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
  strncpy(main_class, &data.FileName[i], j-i);
  main_class[j-i] = '\0';

  /* move the main class to the first position */
  for (i = 0; i < data.NumberOfClasses; i++)
    {
    if (strcmp(data.Classes[i]->ClassName, main_class) == 0)
      {
      ClassInfo *temp = data.Classes[i];
      for (j = i; j > 0; j--)
        {
        data.Classes[j] = data.Classes[j-1];
        }
      data.Classes[0] = temp;
      /* override "IsAbstract" with the "IsConcrete" set by CMake */
      data.Classes[0]->IsAbstract = !is_concrete;
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

  free(file_info);
}

