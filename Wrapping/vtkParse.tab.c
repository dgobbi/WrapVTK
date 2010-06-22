
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
#line 472 "vtkParse.tab.c"

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
#line 413 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 747 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 759 "vtkParse.tab.c"

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
#define YYLAST   6107

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  140
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  162
/* YYNRULES -- Number of rules.  */
#define YYNRULES  500
/* YYNRULES -- Number of states.  */
#define YYNSTATES  926

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
       0,     0,     3,     4,     7,     9,    12,    14,    16,    18,
      20,    22,    24,    26,    28,    30,    33,    35,    38,    42,
      46,    50,    55,    58,    62,    66,    69,    73,    77,    82,
      85,    89,    93,    97,   102,   105,   107,   109,   112,   117,
     122,   124,   125,   133,   134,   145,   146,   147,   151,   154,
     156,   159,   161,   163,   165,   167,   169,   171,   173,   176,
     178,   180,   183,   187,   191,   194,   198,   201,   205,   209,
     212,   216,   219,   225,   227,   229,   237,   244,   245,   247,
     251,   253,   257,   259,   261,   263,   265,   267,   269,   271,
     273,   276,   280,   284,   286,   288,   290,   292,   294,   296,
     298,   300,   302,   304,   306,   314,   321,   325,   331,   337,
     340,   344,   346,   351,   355,   360,   366,   375,   383,   393,
     403,   406,   409,   412,   415,   419,   422,   425,   429,   430,
     436,   438,   439,   444,   447,   450,   452,   454,   456,   461,
     466,   469,   473,   478,   482,   485,   489,   492,   496,   498,
     501,   505,   509,   513,   515,   518,   522,   523,   524,   533,
     534,   538,   541,   542,   543,   551,   552,   556,   559,   562,
     565,   566,   568,   569,   575,   576,   577,   587,   588,   592,
     593,   599,   600,   604,   605,   609,   614,   616,   617,   623,
     625,   627,   630,   632,   634,   636,   638,   640,   642,   644,
     648,   649,   651,   653,   657,   658,   659,   662,   664,   666,
     667,   672,   673,   678,   679,   684,   686,   687,   693,   694,
     695,   705,   706,   708,   710,   713,   714,   716,   719,   724,
     730,   735,   741,   746,   752,   756,   759,   763,   769,   775,
     782,   791,   800,   802,   806,   808,   812,   815,   820,   823,
     826,   827,   829,   830,   834,   839,   841,   844,   846,   849,
     851,   854,   857,   859,   861,   863,   864,   868,   869,   875,
     876,   882,   884,   885,   890,   892,   894,   896,   898,   902,
     906,   908,   910,   912,   914,   916,   918,   920,   922,   924,
     927,   930,   933,   936,   939,   940,   945,   946,   951,   952,
     957,   959,   961,   963,   965,   967,   969,   971,   973,   975,
     977,   979,   981,   983,   985,   987,   989,   991,   993,   995,
     997,   999,  1001,  1002,  1006,  1007,  1011,  1013,  1015,  1017,
    1019,  1021,  1023,  1025,  1027,  1028,  1031,  1033,  1037,  1040,
    1041,  1043,  1045,  1047,  1049,  1052,  1055,  1057,  1061,  1069,
    1071,  1073,  1075,  1077,  1079,  1081,  1082,  1090,  1091,  1092,
    1093,  1103,  1104,  1110,  1111,  1117,  1118,  1119,  1130,  1131,
    1139,  1140,  1141,  1142,  1152,  1159,  1160,  1168,  1169,  1177,
    1178,  1186,  1187,  1195,  1196,  1204,  1205,  1213,  1214,  1222,
    1223,  1231,  1232,  1242,  1243,  1253,  1258,  1263,  1270,  1278,
    1281,  1284,  1288,  1292,  1294,  1296,  1298,  1300,  1302,  1304,
    1306,  1308,  1310,  1312,  1314,  1316,  1318,  1320,  1322,  1324,
    1326,  1328,  1330,  1332,  1334,  1336,  1338,  1340,  1342,  1344,
    1346,  1348,  1350,  1352,  1354,  1356,  1358,  1360,  1362,  1364,
    1366,  1368,  1370,  1372,  1374,  1376,  1377,  1380,  1381,  1384,
    1385,  1388,  1390,  1392,  1394,  1396,  1398,  1400,  1402,  1404,
    1406,  1408,  1410,  1412,  1414,  1416,  1418,  1420,  1422,  1424,
    1426,  1428,  1430,  1432,  1434,  1436,  1438,  1440,  1442,  1444,
    1446,  1448,  1450,  1452,  1454,  1456,  1458,  1460,  1462,  1464,
    1466,  1468,  1470,  1474,  1478,  1482,  1486,  1490,  1494,  1495,
    1498
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     141,     0,    -1,    -1,   141,   142,    -1,   229,    -1,    47,
     229,    -1,   150,    -1,   149,    -1,   159,    -1,   158,    -1,
     160,    -1,   161,    -1,   162,    -1,   166,    -1,   143,    -1,
     169,   143,    -1,    29,    -1,   182,   212,    -1,    38,   182,
     212,    -1,    47,   182,   212,    -1,   169,   182,   212,    -1,
     169,    38,   182,   212,    -1,   181,   212,    -1,    38,   181,
     212,    -1,    47,   181,   212,    -1,   177,   212,    -1,    38,
     177,   212,    -1,    47,   177,   212,    -1,    47,     9,   177,
     212,    -1,   178,   212,    -1,    38,   178,   212,    -1,    47,
     178,   212,    -1,   169,   177,   212,    -1,   169,    38,   177,
     212,    -1,   175,   212,    -1,   265,    -1,   290,    -1,   249,
     117,    -1,     8,   118,   291,   119,    -1,    45,   118,   291,
     119,    -1,   117,    -1,    -1,     3,   211,   144,   259,   120,
     146,   121,    -1,    -1,     3,   211,   122,   245,   123,   145,
     259,   120,   146,   121,    -1,    -1,    -1,   146,   147,   148,
      -1,   262,   124,    -1,   229,    -1,    39,   229,    -1,   150,
      -1,   149,    -1,   159,    -1,   158,    -1,   160,    -1,   166,
      -1,   164,    -1,    37,   164,    -1,   163,    -1,    29,    -1,
     182,   212,    -1,    37,   182,   212,    -1,    38,   182,   212,
      -1,   168,   212,    -1,    38,   168,   212,    -1,   180,   212,
      -1,    37,   180,   212,    -1,    38,   180,   212,    -1,   167,
     212,    -1,    38,   167,   212,    -1,   176,   212,    -1,   116,
     118,   291,   119,   117,    -1,   265,    -1,   117,    -1,    27,
     211,   120,   151,   121,   292,   117,    -1,    27,   120,   151,
     121,   292,   117,    -1,    -1,   152,    -1,   152,   125,   151,
      -1,   211,    -1,   211,   126,   155,    -1,   154,    -1,   211,
      -1,   248,    -1,   242,    -1,    10,    -1,    11,    -1,    13,
      -1,   153,    -1,   156,   155,    -1,   153,   157,   155,    -1,
     118,   155,   119,    -1,   127,    -1,   128,    -1,   129,    -1,
     127,    -1,   128,    -1,   130,    -1,   131,    -1,   132,    -1,
     133,    -1,   134,    -1,   135,    -1,    28,   211,   120,   291,
     121,   292,   117,    -1,    28,   120,   291,   121,   292,   117,
      -1,    44,   292,   117,    -1,    43,   249,   120,   141,   121,
      -1,    47,     9,   120,   141,   121,    -1,   169,   164,    -1,
       3,   211,   165,    -1,   117,    -1,   120,   291,   121,   117,
      -1,   124,   292,   117,    -1,    42,   238,   233,   117,    -1,
      42,     3,   211,   226,   117,    -1,    42,     3,   211,   120,
     291,   121,   226,   117,    -1,    42,     3,   120,   291,   121,
     226,   117,    -1,    42,   238,    53,   226,   119,   118,   213,
     119,   117,    -1,    42,   238,    54,   226,   119,   118,   213,
     119,   117,    -1,    42,   150,    -1,    42,   149,    -1,    42,
     159,    -1,    42,   158,    -1,    42,    48,   117,    -1,   169,
     180,    -1,   169,   182,    -1,    40,   122,   123,    -1,    -1,
      40,   122,   170,   171,   123,    -1,   173,    -1,    -1,   173,
     125,   172,   171,    -1,   174,   225,    -1,   169,   225,    -1,
      41,    -1,     3,    -1,    14,    -1,    50,   118,   177,   119,
      -1,    50,   118,   180,   119,    -1,   237,   191,    -1,   237,
     179,   191,    -1,   249,    80,   129,   206,    -1,   249,    80,
     199,    -1,   249,    80,    -1,   179,   249,    80,    -1,   129,
     206,    -1,     7,   129,   206,    -1,   199,    -1,   237,   191,
      -1,     7,   238,   191,    -1,   249,    80,   183,    -1,   237,
     179,   186,    -1,   183,    -1,   237,   186,    -1,     7,   238,
     186,    -1,    -1,    -1,    34,   237,   118,   184,   215,   119,
     185,   194,    -1,    -1,   188,   187,   194,    -1,   188,   193,
      -1,    -1,    -1,    34,   288,   189,   118,   190,   215,   119,
      -1,    -1,   195,   192,   194,    -1,   195,   193,    -1,   126,
      10,    -1,    33,    10,    -1,    -1,    31,    -1,    -1,   211,
     118,   196,   215,   119,    -1,    -1,    -1,   211,   122,   197,
     245,   123,   118,   198,   215,   119,    -1,    -1,   201,   200,
     203,    -1,    -1,   211,   118,   202,   215,   119,    -1,    -1,
     124,   205,   204,    -1,    -1,   125,   205,   204,    -1,   211,
     118,   291,   119,    -1,   207,    -1,    -1,   211,   118,   208,
     215,   119,    -1,    31,    -1,    46,    -1,    46,    38,    -1,
      45,    -1,     8,    -1,    26,    -1,    25,    -1,    81,    -1,
      82,    -1,   117,    -1,   120,   291,   121,    -1,    -1,   214,
      -1,   219,    -1,   219,   125,   214,    -1,    -1,    -1,   216,
     217,    -1,    79,    -1,   219,    -1,    -1,   219,   125,   218,
     217,    -1,    -1,   238,   234,   220,   227,    -1,    -1,   238,
     233,   221,   227,    -1,    48,    -1,    -1,   238,    54,   222,
     225,   119,    -1,    -1,    -1,   238,    53,   223,   225,   119,
     118,   224,   213,   119,    -1,    -1,   211,    -1,   211,    -1,
     250,   211,    -1,    -1,   228,    -1,   126,   263,    -1,     3,
     211,   230,   117,    -1,     3,   211,   250,   230,   117,    -1,
      27,   211,   230,   117,    -1,    27,   211,   250,   230,   117,
      -1,    28,   211,   230,   117,    -1,    28,   211,   250,   230,
     117,    -1,   237,   230,   117,    -1,    48,   117,    -1,    46,
      48,   117,    -1,   237,    54,   211,   119,   117,    -1,   237,
      53,   226,   119,   117,    -1,   237,    53,   226,   119,    49,
     117,    -1,   237,    53,   226,   119,   136,   291,   137,   117,
      -1,   237,    53,   226,   119,   118,   213,   119,   117,    -1,
     232,    -1,   232,   125,   231,    -1,   232,    -1,   232,   125,
     231,    -1,   250,   232,    -1,   250,   232,   125,   231,    -1,
     233,   227,    -1,   211,   234,    -1,    -1,   235,    -1,    -1,
      49,   236,   234,    -1,   136,   292,   137,   234,    -1,   238,
      -1,   210,   238,    -1,   239,    -1,   239,   250,    -1,   240,
      -1,   209,   240,    -1,   240,   209,    -1,   254,    -1,   242,
      -1,   248,    -1,    -1,    41,   241,   248,    -1,    -1,    45,
     122,   243,   245,   123,    -1,    -1,     8,   122,   244,   245,
     123,    -1,   238,    -1,    -1,   238,   125,   246,   245,    -1,
       8,    -1,    45,    -1,   242,    -1,   248,    -1,   249,    80,
     247,    -1,   242,    80,   247,    -1,     8,    -1,    45,    -1,
      26,    -1,    25,    -1,    81,    -1,    82,    -1,   133,    -1,
     130,    -1,    32,    -1,   130,   133,    -1,   130,   130,    -1,
      32,   133,    -1,    32,   130,    -1,    32,    32,    -1,    -1,
     130,   130,   251,   250,    -1,    -1,    32,   130,   252,   250,
      -1,    -1,    32,    32,   253,   250,    -1,   255,    -1,    81,
      -1,    82,    -1,    25,    -1,    26,    -1,     8,    -1,    45,
      -1,    21,    -1,    15,    -1,    20,    -1,    24,    -1,    23,
      -1,    84,    -1,    85,    -1,    86,    -1,    87,    -1,    88,
      -1,    89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,
      -1,    -1,    36,   256,   258,    -1,    -1,    35,   257,   258,
      -1,   258,    -1,    22,    -1,    14,    -1,    16,    -1,    17,
      -1,    83,    -1,    18,    -1,    19,    -1,    -1,   124,   260,
      -1,   261,    -1,   261,   125,   260,    -1,   262,   247,    -1,
      -1,     4,    -1,     5,    -1,     6,    -1,   264,    -1,   128,
     264,    -1,   127,   264,    -1,     9,    -1,   118,   263,   119,
      -1,     8,   122,   239,   123,   118,   264,   119,    -1,    10,
      -1,    11,    -1,    12,    -1,    13,    -1,     8,    -1,    45,
      -1,    -1,    94,   118,   211,   125,   266,   238,   119,    -1,
      -1,    -1,    -1,    95,   118,   267,   211,   125,   268,   238,
     269,   119,    -1,    -1,    96,   118,   270,   211,   119,    -1,
      -1,    97,   118,   271,   211,   119,    -1,    -1,    -1,    98,
     118,   211,   125,   272,   254,   273,   125,   292,   119,    -1,
      -1,    99,   118,   211,   125,   274,   254,   119,    -1,    -1,
      -1,    -1,   100,   118,   275,   211,   125,   276,   254,   277,
     119,    -1,   101,   118,   211,   125,   254,   119,    -1,    -1,
     102,   118,   211,   125,   278,   254,   119,    -1,    -1,   106,
     118,   211,   125,   279,   254,   119,    -1,    -1,   103,   118,
     211,   125,   280,   254,   119,    -1,    -1,   107,   118,   211,
     125,   281,   254,   119,    -1,    -1,   104,   118,   211,   125,
     282,   254,   119,    -1,    -1,   108,   118,   211,   125,   283,
     254,   119,    -1,    -1,   105,   118,   211,   125,   284,   254,
     119,    -1,    -1,   109,   118,   211,   125,   285,   254,   119,
      -1,    -1,   110,   118,   211,   125,   286,   254,   125,    10,
     119,    -1,    -1,   111,   118,   211,   125,   287,   254,   125,
      10,   119,    -1,   112,   118,   211,   119,    -1,   113,   118,
     211,   119,    -1,   114,   118,   211,   125,   211,   119,    -1,
     114,   118,   211,   125,   211,   125,   119,    -1,   118,   119,
      -1,   136,   137,    -1,    51,   136,   137,    -1,    52,   136,
     137,    -1,   289,    -1,   126,    -1,   130,    -1,   131,    -1,
     127,    -1,   128,    -1,   138,    -1,   129,    -1,   125,    -1,
     122,    -1,   123,    -1,   133,    -1,   134,    -1,   135,    -1,
     132,    -1,    51,    -1,    52,    -1,    55,    -1,    56,    -1,
      57,    -1,    58,    -1,    59,    -1,    60,    -1,    63,    -1,
      64,    -1,    65,    -1,    66,    -1,    67,    -1,    61,    -1,
      62,    -1,    68,    -1,    69,    -1,    70,    -1,    71,    -1,
      72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,    -1,
      77,    -1,    78,    -1,   115,    -1,    -1,   291,   295,    -1,
      -1,   292,   296,    -1,    -1,   293,   294,    -1,     3,    -1,
      40,    -1,   295,    -1,   117,    -1,   296,    -1,   300,    -1,
      30,    -1,   297,    -1,   298,    -1,   299,    -1,   289,    -1,
     124,    -1,   139,    -1,   254,    -1,    80,    -1,    10,    -1,
      11,    -1,    12,    -1,    13,    -1,     9,    -1,    29,    -1,
      31,    -1,    32,    -1,    33,    -1,    34,    -1,    46,    -1,
      38,    -1,     7,    -1,    27,    -1,    28,    -1,    41,    -1,
      49,    -1,    48,    -1,    79,    -1,     4,    -1,     6,    -1,
       5,    -1,    43,    -1,    44,    -1,    47,    -1,   290,    -1,
     120,   293,   121,    -1,   118,   291,   119,    -1,    53,   291,
     119,    -1,    54,   291,   119,    -1,   136,   291,   137,    -1,
      42,   301,   117,    -1,    -1,     3,   301,    -1,   296,   301,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   544,   544,   544,   547,   548,   549,   550,   551,   552,
     553,   554,   555,   556,   557,   558,   559,   560,   561,   562,
     563,   564,   565,   566,   567,   568,   569,   570,   571,   572,
     573,   574,   575,   576,   577,   578,   579,   580,   581,   582,
     583,   585,   585,   587,   587,   590,   590,   590,   592,   593,
     594,   595,   596,   597,   598,   599,   600,   601,   602,   603,
     604,   605,   606,   608,   609,   610,   611,   612,   614,   615,
     616,   617,   618,   619,   620,   628,   630,   632,   632,   632,
     634,   634,   638,   638,   638,   638,   640,   640,   640,   642,
     643,   648,   654,   660,   660,   661,   663,   663,   664,   664,
     665,   665,   666,   666,   668,   670,   672,   674,   676,   678,
     680,   682,   683,   684,   686,   687,   688,   689,   690,   692,
     694,   695,   696,   697,   698,   700,   702,   704,   705,   705,
     708,   709,   709,   711,   711,   713,   714,   715,   717,   719,
     721,   726,   727,   728,   730,   731,   733,   734,   739,   740,
     744,   753,   754,   757,   761,   765,   776,   780,   775,   795,
     795,   806,   823,   824,   823,   831,   831,   842,   859,   860,
     862,   862,   865,   864,   869,   870,   869,   879,   879,   889,
     889,   891,   891,   893,   893,   895,   897,   911,   911,   913,
     915,   916,   918,   919,   920,   921,   922,   923,   925,   925,
     927,   927,   929,   929,   931,   931,   931,   933,   934,   937,
     936,   941,   940,   950,   949,   958,   966,   966,   974,   975,
     974,   984,   984,   986,   986,   988,   988,   990,   992,   993,
     994,   995,   996,   997,   998,   999,  1000,  1001,  1002,  1003,
    1004,  1006,  1009,  1010,  1012,  1013,  1014,  1015,  1018,  1020,
    1028,  1028,  1031,  1031,  1037,  1042,  1043,  1045,  1046,  1048,
    1049,  1050,  1052,  1053,  1055,  1057,  1057,  1061,  1061,  1063,
    1063,  1066,  1066,  1066,  1068,  1069,  1070,  1071,  1073,  1079,
    1086,  1087,  1088,  1089,  1090,  1091,  1104,  1105,  1106,  1107,
    1108,  1109,  1111,  1113,  1115,  1115,  1117,  1117,  1119,  1119,
    1122,  1123,  1124,  1125,  1126,  1127,  1128,  1131,  1132,  1133,
    1134,  1135,  1136,  1137,  1138,  1139,  1140,  1141,  1142,  1143,
    1144,  1145,  1146,  1146,  1147,  1147,  1149,  1152,  1153,  1154,
    1155,  1156,  1157,  1158,  1160,  1160,  1162,  1162,  1164,  1170,
    1171,  1172,  1173,  1175,  1176,  1177,  1179,  1180,  1181,  1188,
    1189,  1190,  1191,  1192,  1193,  1195,  1195,  1210,  1211,  1211,
    1210,  1224,  1224,  1239,  1239,  1253,  1253,  1253,  1300,  1299,
    1315,  1316,  1316,  1315,  1329,  1355,  1355,  1360,  1360,  1365,
    1365,  1370,  1370,  1375,  1375,  1380,  1380,  1385,  1385,  1390,
    1390,  1395,  1395,  1416,  1416,  1437,  1503,  1573,  1640,  1714,
    1715,  1716,  1717,  1718,  1720,  1721,  1721,  1722,  1722,  1723,
    1723,  1724,  1724,  1725,  1725,  1726,  1726,  1727,  1728,  1729,
    1730,  1731,  1732,  1733,  1734,  1735,  1736,  1737,  1738,  1739,
    1740,  1741,  1742,  1743,  1744,  1745,  1746,  1747,  1748,  1749,
    1750,  1751,  1752,  1753,  1759,  1764,  1764,  1765,  1765,  1766,
    1766,  1768,  1768,  1768,  1770,  1770,  1770,  1772,  1772,  1772,
    1772,  1773,  1773,  1773,  1773,  1773,  1774,  1774,  1774,  1774,
    1775,  1775,  1775,  1775,  1775,  1776,  1776,  1776,  1776,  1776,
    1776,  1776,  1777,  1777,  1777,  1777,  1777,  1777,  1778,  1778,
    1778,  1778,  1780,  1781,  1782,  1783,  1784,  1785,  1787,  1787,
    1788
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
  "strt", "file_item", "class_def", "$@1", "$@2", "class_def_body", "$@3",
  "class_def_item", "named_enum", "enum", "enum_list", "enum_item",
  "enum_value", "enum_literal", "enum_math", "math_unary_op",
  "math_binary_op", "named_union", "union", "using", "namespace", "extern",
  "template_internal_class", "internal_class", "internal_class_body",
  "typedef", "template_method", "template_operator", "template", "$@4",
  "template_args", "$@5", "template_arg", "template_type",
  "legacy_function", "legacy_method", "function", "scoped_method", "scope",
  "method", "scoped_operator", "operator", "typecast_op_func", "$@6",
  "$@7", "op_func", "$@8", "op_sig", "$@9", "$@10", "func", "$@11",
  "pure_virtual", "maybe_const", "func_sig", "$@12", "$@13", "@14",
  "constructor", "$@15", "constructor_sig", "$@16", "maybe_initializers",
  "more_initializers", "initializer", "destructor", "destructor_sig",
  "$@17", "const_mod", "static_mod", "any_id", "func_body",
  "ignore_args_list", "ignore_more_args", "args_list", "$@18", "more_args",
  "$@19", "arg", "$@20", "$@21", "$@22", "$@23", "$@24", "maybe_id",
  "maybe_indirect_id", "maybe_var_assign", "var_assign", "var", "var_ids",
  "maybe_indirect_var_ids", "var_id_maybe_assign", "var_id",
  "maybe_var_array", "var_array", "$@25", "maybe_static_type", "type",
  "type_red", "type_red1", "$@26", "templated_id", "$@27", "$@28", "types",
  "$@29", "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "$@30", "$@31", "$@32", "type_red2", "type_primitive", "$@33", "$@34",
  "type_integer", "optional_scope", "scope_list", "scope_list_item",
  "scope_type", "literal", "literal2", "macro", "$@35", "$@36", "$@37",
  "$@38", "$@39", "$@40", "$@41", "$@42", "$@43", "$@44", "$@45", "$@46",
  "$@47", "$@48", "$@49", "$@50", "$@51", "$@52", "$@53", "$@54", "$@55",
  "$@56", "op_token", "op_token_no_delim", "vtk_constant_def",
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
       0,   140,   141,   141,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   144,   143,   145,   143,   146,   147,   146,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,   148,   148,   149,   150,   151,   151,   151,
     152,   152,   153,   153,   153,   153,   154,   154,   154,   155,
     155,   155,   155,   156,   156,   156,   157,   157,   157,   157,
     157,   157,   157,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   165,   165,   166,   166,   166,   166,   166,   166,
     166,   166,   166,   166,   166,   167,   168,   169,   170,   169,
     171,   172,   171,   173,   173,   174,   174,   174,   175,   176,
     177,   178,   178,   178,   179,   179,   180,   180,   180,   180,
     180,   181,   181,   182,   182,   182,   184,   185,   183,   187,
     186,   186,   189,   190,   188,   192,   191,   191,   193,   193,
     194,   194,   196,   195,   197,   198,   195,   200,   199,   202,
     201,   203,   203,   204,   204,   205,   206,   208,   207,   209,
     210,   210,   211,   211,   211,   211,   211,   211,   212,   212,
     213,   213,   214,   214,   215,   216,   215,   217,   217,   218,
     217,   220,   219,   221,   219,   219,   222,   219,   223,   224,
     219,   225,   225,   226,   226,   227,   227,   228,   229,   229,
     229,   229,   229,   229,   229,   229,   229,   229,   229,   229,
     229,   229,   230,   230,   231,   231,   231,   231,   232,   233,
     234,   234,   236,   235,   235,   237,   237,   238,   238,   239,
     239,   239,   240,   240,   240,   241,   240,   243,   242,   244,
     242,   245,   246,   245,   247,   247,   247,   247,   248,   248,
     249,   249,   249,   249,   249,   249,   250,   250,   250,   250,
     250,   250,   250,   250,   251,   250,   252,   250,   253,   250,
     254,   254,   254,   254,   254,   254,   254,   255,   255,   255,
     255,   255,   255,   255,   255,   255,   255,   255,   255,   255,
     255,   255,   256,   255,   257,   255,   255,   258,   258,   258,
     258,   258,   258,   258,   259,   259,   260,   260,   261,   262,
     262,   262,   262,   263,   263,   263,   263,   263,   263,   264,
     264,   264,   264,   264,   264,   266,   265,   267,   268,   269,
     265,   270,   265,   271,   265,   272,   273,   265,   274,   265,
     275,   276,   277,   265,   265,   278,   265,   279,   265,   280,
     265,   281,   265,   282,   265,   283,   265,   284,   265,   285,
     265,   286,   265,   287,   265,   265,   265,   265,   265,   288,
     288,   288,   288,   288,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   289,   289,   289,   289,   289,   289,
     289,   289,   289,   289,   290,   291,   291,   292,   292,   293,
     293,   294,   294,   294,   295,   295,   295,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   296,   296,   296,   296,   296,   296,   296,   296,
     296,   296,   297,   298,   298,   298,   299,   300,   301,   301,
     301
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     2,     1,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     2,     1,     2,     3,     3,
       3,     4,     2,     3,     3,     2,     3,     3,     4,     2,
       3,     3,     3,     4,     2,     1,     1,     2,     4,     4,
       1,     0,     7,     0,    10,     0,     0,     3,     2,     1,
       2,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     3,     3,     2,     3,     2,     3,     3,     2,
       3,     2,     5,     1,     1,     7,     6,     0,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     7,     6,     3,     5,     5,     2,
       3,     1,     4,     3,     4,     5,     8,     7,     9,     9,
       2,     2,     2,     2,     3,     2,     2,     3,     0,     5,
       1,     0,     4,     2,     2,     1,     1,     1,     4,     4,
       2,     3,     4,     3,     2,     3,     2,     3,     1,     2,
       3,     3,     3,     1,     2,     3,     0,     0,     8,     0,
       3,     2,     0,     0,     7,     0,     3,     2,     2,     2,
       0,     1,     0,     5,     0,     0,     9,     0,     3,     0,
       5,     0,     3,     0,     3,     4,     1,     0,     5,     1,
       1,     2,     1,     1,     1,     1,     1,     1,     1,     3,
       0,     1,     1,     3,     0,     0,     2,     1,     1,     0,
       4,     0,     4,     0,     4,     1,     0,     5,     0,     0,
       9,     0,     1,     1,     2,     0,     1,     2,     4,     5,
       4,     5,     4,     5,     3,     2,     3,     5,     5,     6,
       8,     8,     1,     3,     1,     3,     2,     4,     2,     2,
       0,     1,     0,     3,     4,     1,     2,     1,     2,     1,
       2,     2,     1,     1,     1,     0,     3,     0,     5,     0,
       5,     1,     0,     4,     1,     1,     1,     1,     3,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     2,
       2,     2,     2,     2,     0,     4,     0,     4,     0,     4,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     1,     3,     2,     0,
       1,     1,     1,     1,     2,     2,     1,     3,     7,     1,
       1,     1,     1,     1,     1,     0,     7,     0,     0,     0,
       9,     0,     5,     0,     5,     0,     0,    10,     0,     7,
       0,     0,     0,     9,     6,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     9,     0,     9,     4,     4,     6,     7,     2,
       2,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     3,     3,     3,     3,     3,     3,     0,     2,
       2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     0,     1,     0,     0,   305,   328,   308,   329,   330,
     332,   333,   309,   307,   327,   311,   310,   303,   304,     0,
       0,    16,   189,     0,   324,   322,     0,     0,   265,     0,
       0,   447,   306,   190,     0,     0,     0,   301,   302,   331,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   444,    40,     3,    14,     7,     6,     9,     8,    10,
      11,    12,    13,     0,     0,     0,     0,     0,     0,   153,
       0,     0,     4,     0,   255,   257,   259,   263,   264,     0,
     262,   300,   326,    35,    36,   193,   195,   194,   192,   196,
     197,    41,   305,   306,     0,     0,   445,   269,    77,     0,
     445,     0,   190,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   128,     0,     0,     0,     0,     0,   121,   120,
     123,   122,     0,   280,   283,   282,   281,   284,   285,     0,
       0,   445,   267,   191,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,   235,     0,     0,   357,   361,   363,
       0,     0,   370,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    15,
       0,     0,     0,   198,   445,    34,    25,    29,    22,    17,
     260,   256,   193,   195,   194,     0,   192,     0,     0,   196,
     197,     0,   154,   159,   140,   165,   250,     0,   242,   225,
       0,   288,   287,   286,   258,   261,     0,     0,    37,     0,
     334,   250,     0,     0,   155,     0,     0,     0,     0,    78,
      80,    77,     0,     0,     0,   445,     0,     0,   156,   325,
     323,    26,    30,    23,    18,     0,   127,     0,   280,   281,
       0,   266,   445,     0,     0,     0,   124,     0,     0,     0,
       2,   485,   487,   486,   478,   305,   470,   466,   467,   468,
     469,   303,   304,   479,   480,   471,   457,   472,   473,   474,
     475,   477,   481,   488,   489,   306,   476,   490,   483,   482,
     418,   419,   445,   445,   420,   421,   422,   423,   424,   425,
     431,   432,   426,   427,   428,   429,   430,   433,   434,   435,
     436,   437,   438,   439,   440,   441,   442,   443,   484,   465,
     301,   302,   106,   445,   449,   412,   413,   462,   411,   404,
     407,   408,   410,   405,   406,   417,   414,   415,   416,   445,
     409,   463,   464,   461,   491,   448,   458,   459,   460,     0,
       0,   236,     0,     2,     0,     0,     0,     0,    27,    31,
      24,    19,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    41,     0,     0,    32,    20,     0,
     418,   419,     0,     0,   162,   403,   223,     0,     0,     0,
     152,   141,     0,     0,     0,   170,   161,   170,   167,   252,
     172,   174,   447,   249,   251,   234,     0,     0,   248,   226,
     144,   293,   292,   291,   290,   289,   274,   275,   276,   279,
     277,   274,   275,     0,   151,   143,   177,     0,   278,   271,
       0,   339,     0,   228,     0,   498,   454,    38,   446,   455,
     456,     0,   447,    77,     0,     0,   230,     0,   447,     0,
     232,     0,   205,   136,   137,   135,   221,     0,   130,   221,
       0,   445,     0,     0,     0,   114,     0,     0,     0,     0,
       0,     0,    39,     0,     0,    28,   138,   355,     0,     0,
       0,   365,   368,     0,     0,   375,   379,   383,   387,   377,
     381,   385,   389,   391,   393,   395,   396,     0,    33,    21,
     199,     0,     0,   399,   400,     0,     0,   224,     0,   145,
     169,   168,   171,   160,   166,   250,   205,     0,     0,   243,
     244,     0,   353,   346,   349,   350,   351,   352,   354,     0,
       0,     0,   227,   343,     0,     0,     0,   142,   186,     0,
     181,   179,   272,    43,   340,   341,   342,   335,   336,     0,
      45,   229,   498,   498,     0,   270,     0,    79,   193,    86,
      87,    88,   192,     0,    93,    94,    95,    89,    82,    81,
       0,    83,    85,    84,   447,   231,     0,   447,   233,     0,
       0,   222,   134,   129,   131,   133,     0,     0,   115,     0,
       0,   107,   494,   495,   493,   451,   452,   492,   450,   453,
     496,   268,   108,     0,   358,   362,   364,     0,     0,   371,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   401,   402,   163,     0,   238,   200,   445,   237,
     253,     0,     0,   250,     0,   246,     0,     0,   353,   345,
     344,   299,   297,   295,   187,     0,   178,   205,     0,   334,
     339,   338,    46,   499,   500,   497,    76,     0,    96,    97,
      98,    99,   100,   101,   102,   103,     0,    90,     0,   105,
       0,   157,   215,   207,   206,   208,   250,     0,     0,     0,
     200,   200,     0,     0,   366,     0,     0,   374,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,     0,
     205,   239,     0,   201,   202,     0,   173,     0,   254,   245,
       0,     0,   347,   205,   183,     0,     0,   273,     0,   337,
      42,   339,    92,    91,    75,   104,   170,   209,   218,   216,
     213,   211,   132,   117,     0,     0,     0,   356,   359,     0,
     369,   372,   376,   380,   384,   388,   378,   382,   386,   390,
       0,     0,   398,     0,     0,     0,     0,   175,   247,     0,
       0,     0,   182,   445,   180,    45,     0,     0,   305,   303,
     304,    60,     0,     0,     0,   306,     0,   301,   302,     0,
      74,     0,    47,    52,    51,    54,    53,    55,    59,    57,
      56,     0,     0,     0,     0,     0,     0,   148,    49,     0,
       0,    73,   158,     0,   221,   221,   225,   225,   116,     0,
       0,     0,   447,     0,     0,     0,   164,   241,   203,   240,
     205,     0,   188,   183,     0,    46,     0,     0,     0,     0,
      58,     0,     0,     0,     0,     0,     0,     0,     0,    50,
       0,     0,   445,   146,    69,    64,   109,   125,   126,    71,
      66,    61,   149,    48,   210,     0,     0,   214,   212,   118,
     119,   360,     0,   373,   392,   394,     0,     0,   184,   185,
      44,   111,   445,   447,   110,   147,   150,     0,    67,    62,
      70,    65,    68,    63,     0,     0,     0,     0,     0,   217,
     367,   176,   348,     0,     0,     0,   139,     0,   219,     0,
     113,    72,   200,   112,     0,   220
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,    73,    74,   230,   669,   672,   741,   802,    75,
      76,   238,   239,   587,   588,   589,   590,   686,    77,    78,
      79,    80,    81,   808,   809,   894,    82,   811,   812,    83,
     257,   477,   697,   478,   479,    84,   814,    85,    86,   211,
     867,    87,    88,    89,   472,   746,   212,   415,   213,   525,
     720,   214,   417,   416,   533,   215,   536,   537,   840,   817,
     560,   446,   667,   666,   782,   734,   557,   558,   733,    90,
      91,   231,   195,   722,   723,   599,   600,   694,   823,   724,
     827,   826,   825,   824,   922,   602,   407,   428,   429,    92,
     217,   539,   218,   219,   423,   424,   535,    93,    94,    95,
      96,   133,    97,   360,   237,   450,   668,   448,    98,   115,
     408,   556,   555,   554,   100,   101,   125,   124,   102,   452,
     567,   568,   569,   552,   553,   103,   623,   374,   703,   831,
     375,   376,   627,   759,   628,   379,   706,   833,   631,   635,
     632,   636,   633,   637,   634,   638,   639,   640,   404,   353,
     354,   236,   150,   490,   618,   458,   459,   356,   357,   358,
     460,   574
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -755
static const yytype_int16 yypact[] =
{
    -755,  5090,  -755,   550,  5896,   135,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,    77,   144,   206,
     381,  -755,  -755,   851,  -755,  -755,  5689,   -74,  -755,  5562,
     608,  -755,   199,    44,  5289,   -31,   -30,   169,   185,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
     -11,    43,    86,   100,   111,   141,   155,   171,   183,   189,
     194,   196,   200,   202,   207,   211,   223,   229,   236,   240,
     243,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  5380,   -14,   -14,   -14,   -14,   -14,  -755,
    5982,  5896,  -755,   659,  -755,    35,    99,    34,  -755,   187,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,   283,    -9,    -7,   120,   182,  -755,  -755,   550,   213,
    -755,   258,   293,   249,   545,   545,   -14,   -14,   -14,   -14,
     423,   280,   247,   613,   529,   206,   381,   252,  -755,  -755,
    -755,  -755,   601,  -755,  -755,  -755,  -755,  -755,  -755,   253,
    3266,  -755,  -755,  -755,   255,   550,  5198,   550,   550,   -14,
     -14,   -14,   -14,  -755,  -755,   851,   550,  -755,  -755,  -755,
     550,   550,  -755,   550,   550,   550,   550,   550,   550,   550,
     550,   550,   550,   550,   550,   550,   550,   550,  5689,  -755,
     -14,   -14,   563,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,   294,   299,   301,  5557,   303,   410,   550,   306,
     307,   423,  -755,    18,  -755,    18,   174,   273,   267,   269,
     313,    36,    73,  -755,  -755,  -755,   797,   377,  -755,  5896,
     272,    12,   281,   550,  -755,   797,  1226,  5896,   278,   276,
     282,   550,   287,   550,  1362,  -755,   295,   550,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,    83,  -755,    81,   288,   297,
      34,  -755,  -755,   389,   300,   304,  -755,   410,   410,   308,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  1498,
    5896,  -755,   410,  -755,   -14,   550,   410,   410,  -755,  -755,
    -755,  -755,   298,   302,   550,   550,   550,   305,   312,   550,
     314,   316,   318,   320,   321,   322,   325,   326,   329,   336,
     341,   319,   348,   344,   350,   -14,   -14,  -755,  -755,  1634,
     337,   342,   360,   286,  -755,  -755,  -755,   363,   550,   364,
    -755,  -755,   404,   478,   479,   462,  -755,   462,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,   410,   590,  -755,  -755,
    -755,    66,    67,  -755,    80,  -755,    -9,    -7,    34,  -755,
    -755,   160,   201,   550,  -755,  -755,  -755,   380,  -755,   370,
     376,   242,   382,  -755,   390,  1090,  -755,  -755,  -755,  -755,
    -755,   385,  -755,   550,   802,   391,  -755,   396,  -755,  1770,
    -755,   397,   398,  -755,  -755,  -755,   550,   392,   395,   550,
    1906,  -755,   406,   407,   408,  -755,  4859,  2042,  2178,  2314,
     953,  2450,  -755,   402,  4974,  -755,  -755,  -755,   409,   417,
     419,  -755,  -755,   414,  6014,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,   550,  -755,  -755,
    -755,   405,   411,  -755,  -755,   429,   188,  -755,   424,  -755,
    -755,  -755,  -755,  -755,  -755,    12,   398,  5896,  3402,  -755,
     425,   550,   427,  -755,  -755,  -755,  -755,  -755,  -755,   590,
     570,   570,  -755,  -755,    35,    35,    35,  -755,  -755,   433,
     432,  -755,  -755,  -755,  -755,  -755,  -755,  -755,   428,   797,
    -755,  -755,  1090,  1090,   440,  -755,  3538,  -755,    -9,  -755,
    -755,  -755,    -7,   802,  -755,  -755,  -755,   702,  -755,  -755,
     802,  -755,    34,  -755,  -755,  -755,  3674,  -755,  -755,   441,
    5775,  -755,  -755,  -755,  -755,  -755,   410,  2586,  -755,   448,
     450,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  5896,  -755,  -755,  -755,  6014,  6014,  -755,
     451,  6014,  6014,  6014,  6014,  6014,  6014,  6014,  6014,  6014,
    6014,   -34,  -755,  -755,  -755,   452,  -755,  5861,  -755,  -755,
    -755,   453,   463,    12,   410,   465,  5896,   454,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,   550,  -755,   398,  5896,   272,
     242,  -755,   466,  -755,  -755,  -755,  -755,   473,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,   802,  -755,  3810,  -755,
    3946,  -755,  -755,  -755,  -755,   469,    71,    81,   487,   410,
    5861,  5861,   486,  5896,  -755,   493,  6014,  -755,   499,   501,
     503,   505,   506,   510,   511,   517,   481,   515,  -755,   522,
     398,  -755,   523,  -755,   525,  2722,  -755,   533,  -755,  -755,
     410,   524,  -755,   398,   531,   541,   543,  -755,   540,  -755,
    -755,  4355,  -755,  -755,  -755,  -755,   462,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,   546,   552,   567,  -755,  -755,   566,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
     655,   678,  -755,   573,   581,  5861,   584,  -755,  -755,   585,
     583,   550,  -755,  -755,  -755,  -755,   550,  4767,   160,     9,
      10,  -755,  4471,  4558,  5471,   201,   587,   136,   142,   588,
    -755,   550,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,   -14,   -14,  4471,   -14,   -14,   -14,  -755,  -755,   764,
     591,  -755,  -755,  5775,   550,   550,   269,   269,  -755,   594,
     597,   602,  -755,   609,   611,   614,  -755,  -755,  -755,  -755,
     398,   570,  -755,   531,  2858,   586,   218,   550,   563,   550,
    -755,   -14,   -14,   563,   -14,   -14,  4645,   -14,   -14,  -755,
    4542,  4732,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,   615,   616,  -755,  -755,  -755,
    -755,  -755,  4082,  -755,  -755,  -755,   617,   620,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,   210,  -755,  -755,
    -755,  -755,  -755,  -755,  4767,   624,   550,  2994,   626,  -755,
    -755,  -755,  -755,  3130,  4218,   550,  -755,   603,  -755,   610,
    -755,  -755,  5861,  -755,   627,  -755
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -755,  -213,  -755,   649,  -755,  -755,   -40,  -755,  -755,   -19,
     -17,  -192,  -755,  -755,  -755,  -524,  -755,  -755,   -16,   -15,
       7,  -755,  -755,  -755,  -730,  -755,    11,   -43,   -42,  -241,
    -755,    56,  -755,  -755,  -755,  -755,  -755,    46,   193,  -755,
    -688,   246,   -25,   528,  -755,  -755,  -111,  -755,  -755,  -755,
    -755,  -196,  -755,   542,  -387,  -755,  -755,  -755,  -755,   532,
    -755,  -755,  -755,  -755,   -87,   -23,  -754,  -755,  -755,   673,
    -755,     1,   -51,  -646,    -2,  -503,  -755,   -45,  -755,  -568,
    -755,  -755,  -755,  -755,  -755,  -462,  -224,  -725,  -755,   -32,
     -92,  -584,  -398,  -131,  -461,  -755,  -755,   -18,    -4,   124,
     691,  -755,  -109,  -755,  -755,  -215,  -755,  -185,   -93,    30,
     -69,  -755,  -755,  -755,    41,  -755,  -755,  -755,   225,   115,
     116,  -755,    50,   248,  -505,    51,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,   580,
      17,  -113,  -399,  -755,  -755,   309,  -144,  -755,  -755,  -755,
    -755,  -220
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -299
static const yytype_int16 yytable[] =
{
     114,   129,   163,   234,   111,   123,   355,   244,   130,   162,
     138,   269,   139,   140,   141,   411,   476,   605,   104,   232,
     119,   121,   461,   538,   260,   142,   224,   242,   540,   246,
     534,    99,   695,   651,   196,   197,   198,   199,   359,   482,
     261,   439,   233,   483,   484,   659,   660,   863,   132,   465,
     243,   413,   247,   815,   755,   756,   131,   486,   191,   677,
     149,   419,   850,   576,   131,   192,   687,   221,   431,   596,
     729,  -280,   126,  -281,   650,   251,   252,   253,   254,   105,
     159,   399,   153,   866,   473,   718,   164,   201,   165,  -283,
    -282,   719,   154,   895,   216,   474,   106,   107,  -298,  -296,
     410,   877,   878,   193,   851,   857,   194,   166,   368,   369,
     370,   371,  -294,   117,   226,   152,   108,   438,   438,   240,
     419,    27,   475,   220,   748,   749,   438,  -195,  -194,   190,
      22,   255,   469,   440,   440,   263,   264,   265,   365,   397,
     398,   454,   440,   655,   414,   493,   778,   365,   422,   480,
     494,   467,   109,   110,   205,   471,   362,  -283,   366,   367,
     220,   167,   743,   396,   736,   222,   432,   373,   223,   433,
     192,   377,   378,   905,   380,   381,   382,   383,   384,   385,
     386,   387,   388,   389,   390,   391,   392,   393,   394,   487,
     488,   352,   728,   255,  -283,   688,  -298,  -296,   690,  -298,
    -296,   420,   364,   434,   168,   421,   435,   422,   406,   409,
    -294,   372,   255,  -294,   105,  -280,  -284,   773,   169,   127,
     489,   105,  -285,   419,  -282,   449,   105,   160,   447,   170,
     780,   106,   107,   449,   395,   751,   491,   645,   106,   107,
    -280,   412,   240,   106,   107,   221,   564,   565,   566,  -284,
     221,   108,  -280,   116,  -196,   695,   540,   117,   108,   171,
    -197,  -282,   235,   108,   406,  -285,   105,   227,   406,   406,
     232,   577,   128,   172,   242,   246,   924,   352,  -193,  -281,
     161,  -281,   117,   106,   107,   352,  -284,   109,   110,   173,
     221,   105,   420,   233,   109,   110,   421,   243,   247,   109,
     110,   174,  -285,   108,   228,   646,   647,   175,   106,   107,
     422,   573,   176,   495,   177,   221,  -281,   151,   178,  -192,
     179,   152,   652,   152,   648,   180,   118,   891,   108,   181,
     892,   153,   540,   241,   893,   891,   887,   886,   892,   109,
     110,   182,   893,   222,   518,   519,   223,   183,   222,   249,
     250,   223,   673,   674,   184,   592,   449,   541,   185,   822,
     227,   186,   875,   876,   109,   110,   255,   248,   607,   266,
     256,   593,   361,   270,  -280,   498,   499,   500,   245,  -283,
     503,  -282,   698,  -281,   671,   441,  -284,  -285,   222,   105,
     425,   223,   426,   430,   355,   427,   451,   105,   453,   462,
     352,   463,   203,   204,   466,   229,   106,   107,   464,   527,
     117,    23,   470,   222,   106,   107,   223,   496,   105,   152,
     241,   221,   442,   524,   245,   485,   108,   497,   573,   573,
     501,   202,   355,   882,   108,   106,   107,   502,   515,   504,
     352,   505,   221,   506,   559,   507,   508,   509,   203,   204,
     510,   511,   355,   737,   512,   108,   476,   205,   209,   210,
     438,   513,   109,   110,   240,   591,   514,   516,   206,   517,
     109,   110,   229,   521,   592,   754,   440,   601,   522,   523,
     601,   592,   526,   528,   529,   661,   662,   663,   530,   531,
     593,   109,   110,   532,   914,   562,   352,   593,   561,   563,
     813,   120,   570,   104,   209,   210,   443,   571,   575,   481,
     352,   104,   594,   595,   598,   603,    99,  -204,   641,   222,
     604,   352,   223,   608,    99,   621,   609,   610,   352,   352,
     352,   352,   352,   449,   624,   725,   625,   105,   626,   629,
     222,   649,   642,   223,   355,   630,   355,   644,   643,   656,
     654,   664,   856,   670,   106,   107,   665,   675,   105,     6,
     691,     8,     9,    10,    11,   750,   700,    14,   701,   721,
     707,   105,   726,   732,   108,   106,   107,   592,   658,   352,
     544,   545,   546,   547,   591,   541,   727,   740,   106,   107,
     730,   591,   742,   593,   747,   108,   696,   205,   542,   543,
     544,   545,   546,   547,   753,   757,   770,   406,   108,   105,
     109,   110,   760,   352,   352,   548,   143,   352,   762,   702,
     763,   258,   764,   872,   765,   766,   106,   107,    39,   767,
     768,   109,   110,   144,   145,   548,   769,   352,   144,   145,
     771,   772,   774,   696,   109,   110,   108,   779,   352,   262,
     775,   777,   896,   146,   267,   268,   781,   872,   259,   783,
     785,   541,   784,   828,   449,   834,   735,   202,   704,   705,
     844,   829,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   109,   110,   203,   204,   830,   591,   835,   147,
     148,   832,   836,   205,   147,   148,   696,   696,   837,   758,
     406,   839,   842,   841,   206,   861,   862,   890,   549,   818,
     872,   879,   207,   208,   880,   873,   816,   550,   551,   896,
     921,   881,   803,   819,   804,   805,   806,   923,   883,   352,
     884,   352,   189,   885,   908,   909,   911,   234,   355,   912,
     209,   210,   447,   916,   918,   845,   925,   761,   807,   907,
     854,   855,   810,   752,   232,   444,   888,   418,   843,   445,
     864,   865,   859,   869,   870,   871,   352,   852,   858,   225,
     355,   696,   105,   838,   853,   853,   860,   233,   874,   913,
     731,   200,   735,   848,   738,   405,   739,   846,   868,   106,
     107,   820,   821,   447,   447,   853,     0,   657,   205,   619,
     898,   899,   559,   900,   901,   436,   902,   903,     0,   108,
     578,     0,   579,   580,   447,   581,     0,   207,   208,   696,
     216,     0,   144,   145,     0,   601,   601,   203,   204,   678,
     679,   868,   680,   681,   682,   683,   684,   685,   853,     0,
       0,     0,   437,   906,     0,   109,   110,   582,   559,   255,
     897,     0,     0,     0,   255,     0,     0,   447,     0,   112,
       0,     0,   447,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   147,   148,
       0,     0,    22,   209,   210,   352,    24,    25,     0,     0,
       0,     0,    28,     0,     0,     0,   113,   122,     0,     0,
     915,     0,     0,     0,     0,     0,     0,   255,     0,     0,
       0,     0,     0,     0,     0,     0,   255,     0,   696,     0,
     583,     0,     0,   352,     0,     0,     0,     0,     0,   584,
     585,   586,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,   352,     0,
       0,     0,     0,     0,   352,   352,   615,   271,   272,   273,
     274,   275,   276,   277,   278,   279,   280,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,   281,   282,
     283,   284,   285,   286,   287,   288,   289,   290,    24,    25,
       0,   291,     0,   616,   292,   455,   293,   294,   295,   296,
     297,   298,   299,     0,   300,   301,   302,   303,   304,   305,
     306,   307,   308,   309,   310,   311,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    71,     0,
     456,   333,     0,   334,   617,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
       0,   350,   351,   572,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    24,    25,     0,   291,     0,
       0,   292,     0,   293,   294,   295,   296,   297,   298,   299,
       0,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,     0,   333,     0,
     334,     0,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,     0,   350,   351,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,    24,    25,     0,   291,     0,     0,   292,   455,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,   456,   333,   457,   334,     0,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,     0,   350,   351,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,    24,    25,     0,
     291,     0,     0,   292,   455,   293,   294,   295,   296,   297,
     298,   299,     0,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,   456,
     333,     0,   334,   468,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,     0,
     350,   351,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,    24,    25,     0,   291,     0,     0,   292,
     455,   293,   294,   295,   296,   297,   298,   299,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,   456,   333,   492,   334,     0,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,     0,   350,   351,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,    24,
      25,     0,   291,     0,     0,   292,   455,   293,   294,   295,
     296,   297,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,   456,   333,     0,   334,   520,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,     0,   350,   351,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    24,    25,     0,   291,     0,
       0,   292,   455,   293,   294,   295,   296,   297,   298,   299,
       0,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,   456,   333,     0,
     334,   597,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,     0,   350,   351,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,    24,    25,     0,   291,     0,     0,   292,   455,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,   456,   333,     0,   334,   606,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,     0,   350,   351,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,    24,    25,     0,
     291,     0,     0,   292,   455,   293,   294,   295,   296,   297,
     298,   299,     0,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,   456,
     333,   612,   334,     0,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,     0,
     350,   351,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,    24,    25,     0,   291,     0,     0,   292,
     455,   293,   294,   295,   296,   297,   298,   299,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,   456,   333,   613,   334,     0,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,     0,   350,   351,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,    24,
      25,     0,   291,     0,     0,   292,   455,   293,   294,   295,
     296,   297,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,   456,   333,   614,   334,     0,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,     0,   350,   351,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    24,    25,     0,   291,     0,
       0,   292,   455,   293,   294,   295,   296,   297,   298,   299,
       0,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,   456,   333,     0,
     334,     0,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   620,   350,   351,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,    24,    25,     0,   291,     0,     0,   292,   455,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,   456,   333,     0,   334,   699,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,     0,   350,   351,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,    24,    25,     0,
     291,     0,     0,   292,   455,   293,   294,   295,   296,   297,
     298,   299,     0,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,   456,
     333,     0,   334,     0,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   776,
     350,   351,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,    24,    25,     0,   291,     0,     0,   292,
     455,   293,   294,   295,   296,   297,   298,   299,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,   456,   333,   889,   334,     0,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,     0,   350,   351,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,    24,
      25,     0,   291,     0,     0,   292,   455,   293,   294,   295,
     296,   297,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,   456,   333,   917,   334,     0,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,     0,   350,   351,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    24,    25,     0,   291,     0,
       0,   292,   455,   293,   294,   295,   296,   297,   298,   299,
       0,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,   456,   333,     0,
     334,   919,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,     0,   350,   351,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,    24,    25,     0,   291,     0,     0,   292,     0,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,   332,   333,     0,   334,     0,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,     0,   350,   351,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,    24,    25,     0,
     291,     0,     0,   292,     0,   293,   294,   295,   296,   297,
     298,   299,     0,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
     333,     0,   334,     0,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,   653,
     350,   351,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,    24,    25,     0,   291,     0,     0,   292,
       0,   293,   294,   295,   296,   297,   298,   299,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,   676,   333,     0,   334,     0,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,     0,   350,   351,   271,   272,
     273,   274,   275,   276,   277,   278,   279,   280,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   281,
     282,   283,   284,   285,   286,   287,   288,   289,   290,    24,
      25,     0,   291,     0,     0,   292,     0,   293,   294,   295,
     296,   297,   298,   299,     0,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    71,
       0,   689,   333,     0,   334,     0,   335,   336,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,     0,   350,   351,   271,   272,   273,   274,   275,   276,
     277,   278,   279,   280,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,   281,   282,   283,   284,   285,
     286,   287,   288,   289,   290,    24,    25,     0,   291,     0,
       0,   292,     0,   293,   294,   295,   296,   297,   298,   299,
       0,   300,   301,   302,   303,   304,   305,   306,   307,   308,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,   330,   331,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    71,     0,   744,   333,     0,
     334,     0,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,     0,   350,   351,
     271,   272,   273,   274,   275,   276,   277,   278,   279,   280,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,   281,   282,   283,   284,   285,   286,   287,   288,   289,
     290,    24,    25,     0,   291,     0,     0,   292,     0,   293,
     294,   295,   296,   297,   298,   299,     0,   300,   301,   302,
     303,   304,   305,   306,   307,   308,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,   330,   331,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    71,     0,   745,   333,     0,   334,     0,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,   348,   349,     0,   350,   351,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   281,   282,   283,
     284,   285,   286,   287,   288,   289,   290,    24,    25,     0,
     291,     0,     0,   292,     0,   293,   294,   295,   296,   297,
     298,   299,     0,   300,   301,   302,   303,   304,   305,   306,
     307,   308,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,   330,   331,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    71,     0,     0,
     333,   910,   334,     0,   335,   336,   337,   338,   339,   340,
     341,   342,   343,   344,   345,   346,   347,   348,   349,     0,
     350,   351,   271,   272,   273,   274,   275,   276,   277,   278,
     279,   280,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,    24,    25,     0,   291,     0,     0,   292,
       0,   293,   294,   295,   296,   297,   298,   299,     0,   300,
     301,   302,   303,   304,   305,   306,   307,   308,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,   330,
     331,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    71,     0,   920,   333,     0,   334,     0,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,     0,   350,   351,   786,   564,
     565,   566,   787,   788,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
     789,   790,    19,    20,   791,     0,    22,     0,     0,    23,
      24,    25,   792,   793,   794,    27,    28,    29,     0,    31,
     795,    33,     0,    35,     0,   796,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   797,   798,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
       0,   799,   800,     0,   849,     0,     0,     0,   787,   788,
       0,     0,     0,     0,   801,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,   789,   790,     0,     0,
       0,     0,    22,     0,     0,    23,    24,    25,     0,     0,
       0,     0,    28,     0,     0,     0,   795,   122,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     105,     0,   797,   798,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   787,   788,   106,   107,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,   789,   790,     0,     0,   108,     0,    22,
       0,     0,    23,    24,    25,   207,   208,     0,    27,    28,
     801,     0,     0,   795,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   109,   110,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   797,
     798,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   787,   788,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
     789,   790,     0,     0,     0,     0,    22,     0,     0,    23,
      24,    25,     0,     0,     0,     0,    28,   801,     0,     0,
     795,   122,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   797,   798,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   904,
     788,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,   789,   790,     0,
       0,     0,     0,    22,     0,     0,     0,    24,    25,     0,
       0,     0,     0,    28,   801,   112,     0,   795,   122,     0,
       0,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,     0,     0,     0,     0,    22,     0,
       0,     0,    24,    25,     0,     0,     0,     0,    28,     0,
       0,     0,   113,   797,   798,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,   801,     3,     0,     0,     0,     4,     5,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,     0,
      22,     0,     0,    23,    24,    25,   847,    26,     0,    27,
      28,    29,    30,    31,    32,    33,    34,    35,     0,    36,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,     0,    72,     3,     0,     0,
     611,     4,     5,     0,     0,     0,     0,     0,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,     0,    22,     0,     0,    23,    24,
      25,     0,    26,     0,    27,    28,    29,    30,    31,    32,
      33,    34,    35,     0,    36,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
       2,    72,     0,     3,     0,   622,     0,     4,     5,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
       0,    22,     0,     0,    23,    24,    25,     0,    26,     0,
      27,    28,    29,    30,    31,    32,    33,    34,    35,     0,
      36,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,   112,    72,     0,     0,
       0,     0,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,     0,     0,     0,     0,    22,
       0,     0,     0,    24,    25,     0,     0,     0,     0,    28,
       0,     0,     0,   113,   122,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    37,
      38,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,   155,     0,     0,     0,     4,   112,   156,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   157,   158,   363,     0,
      22,     0,     0,    23,    24,    25,     0,     0,     0,     0,
      28,     0,     0,     0,   113,    33,     0,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,   187,     0,     0,     0,     4,   112,     0,
       0,     0,     0,     0,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,     0,     0,     0,
       0,    22,     0,     0,    23,    24,    25,     0,   188,     0,
       0,    28,     0,     0,     0,   113,   122,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    37,    38,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,   155,     0,     0,     0,     0,   112,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   157,   158,
       0,     0,    22,     0,     0,     0,    24,    25,     0,     0,
       0,     0,    28,     0,     0,     0,   113,    33,     0,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,   134,     0,     0,     0,     0,
     112,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   135,
     136,     0,     0,    22,     0,     0,     0,    24,    25,     0,
       0,     0,     0,    28,     0,     0,     0,   113,   400,   401,
     137,     0,   304,   305,   306,   307,   308,   309,   310,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   324,   325,   326,   327,     0,     0,     0,     0,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   402,     0,     0,     0,   335,
     336,     0,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   403,     0,   350,     4,   112,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,     0,     0,     0,     0,
      22,     0,     0,    23,    24,    25,     0,     0,     0,     0,
      28,     0,     0,     0,   113,   122,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,   112,     0,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,     0,     0,     0,     0,    22,     0,     0,     0,
      24,    25,     0,     0,     0,     0,    28,     0,     0,     0,
     113,     0,     0,   692,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   693,     0,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,   112,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,     0,     0,
       0,     0,    22,     0,     0,     0,    24,    25,     0,     0,
       0,     0,    28,     0,   112,     0,   113,     0,     0,   692,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,     0,     0,     0,     0,    22,     0,     0,
       0,    24,    25,     0,     0,     0,     0,    28,     0,     0,
       0,   113,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    37,    38,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
     112,     0,     0,     0,     0,     0,     6,     7,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,     0,
       0,     0,     0,     0,     0,     0,     0,    24,    25,     0,
       0,     0,   275,    28,     0,     0,     0,   113,     6,     7,
       8,     9,    10,    11,    12,    13,    14,    15,    16,   281,
     282,     0,     0,     0,     0,     0,     0,     0,     0,    24,
      25,     0,     0,     0,     0,     0,     0,     0,     0,   295,
       0,     0,     0,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   330,   331,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49
};

static const yytype_int16 yycheck[] =
{
       4,    26,    34,   114,     3,    23,   150,   120,    26,    34,
      29,   142,    29,    29,    29,   211,   257,   479,     1,   111,
      19,    20,   237,   422,   133,    29,    95,   119,   426,   121,
     417,     1,   600,   536,    85,    86,    87,    88,   151,   263,
     133,   226,   111,   267,   268,   550,   551,   801,   122,   241,
     119,    33,   121,   741,   700,   701,    26,   270,    83,   583,
      30,    49,   792,   462,    34,    83,   590,    32,    32,   468,
     654,    80,    26,    80,   535,   126,   127,   128,   129,     8,
      34,   194,    38,   813,     3,   119,   117,    91,   118,    80,
      80,   125,    48,   847,    93,    14,    25,    26,    32,    32,
     211,   826,   827,   117,   792,   793,   120,   118,   159,   160,
     161,   162,    32,   122,    80,   122,    45,   226,   227,   118,
      49,    40,    41,    93,    53,    54,   235,   118,   118,    83,
      31,   130,   245,   226,   227,   134,   135,   136,   156,   190,
     191,   233,   235,   541,   126,   360,   730,   165,   136,   262,
     363,   243,    81,    82,    34,   247,   155,    80,   157,   158,
     130,   118,   686,   188,   667,   130,   130,   166,   133,   133,
     188,   170,   171,   861,   173,   174,   175,   176,   177,   178,
     179,   180,   181,   182,   183,   184,   185,   186,   187,   302,
     303,   150,   653,   192,   117,   594,   130,   130,   597,   133,
     133,   118,   156,   130,   118,   122,   133,   136,   207,   208,
     130,   165,   211,   133,     8,    80,    80,   720,   118,    26,
     333,     8,    80,    49,    80,   229,     8,    34,   227,   118,
     733,    25,    26,   237,   188,   696,   349,    49,    25,    26,
      80,   211,   241,    25,    26,    32,     4,     5,     6,    80,
      32,    45,   117,   118,   118,   823,   654,   122,    45,   118,
     118,   117,    80,    45,   263,    80,     8,    80,   267,   268,
     362,   463,    26,   118,   366,   367,   922,   236,   118,    80,
      34,    80,   122,    25,    26,   244,   117,    81,    82,   118,
      32,     8,   118,   362,    81,    82,   122,   366,   367,    81,
      82,   118,   117,    45,   117,   117,   118,   118,    25,    26,
     136,   455,   118,   364,   118,    32,   117,   118,   118,   118,
     118,   122,   537,   122,   136,   118,   120,   117,    45,   118,
     120,    38,   730,   120,   124,   117,   841,   840,   120,    81,
      82,   118,   124,   130,   395,   396,   133,   118,   130,   124,
     125,   133,   572,   573,   118,   464,   360,   426,   118,   746,
      80,   118,   824,   825,    81,    82,   365,   118,   481,   117,
     123,   464,   117,   120,    80,   374,   375,   376,   120,    80,
     379,    80,   606,    80,   569,     8,    80,    80,   130,     8,
     117,   133,   125,    80,   538,   126,   124,     8,   117,   121,
     359,   125,    25,    26,   117,   122,    25,    26,   126,   408,
     122,    34,   117,   130,    25,    26,   133,   119,     8,   122,
     120,    32,    45,   137,   120,   117,    45,   125,   572,   573,
     125,     8,   576,   832,    45,    25,    26,   125,   119,   125,
     399,   125,    32,   125,   443,   125,   125,   125,    25,    26,
     125,   125,   596,   668,   125,    45,   697,    34,    81,    82,
     569,   125,    81,    82,   463,   464,   125,   119,    45,   125,
      81,    82,   122,   136,   583,   699,   569,   476,   136,   119,
     479,   590,   119,   119,    80,   554,   555,   556,    10,    10,
     583,    81,    82,    31,   893,   125,   455,   590,   118,   123,
     741,   120,   120,   486,    81,    82,   129,   117,   123,   120,
     469,   494,   121,   117,   117,   123,   486,   119,   517,   130,
     125,   480,   133,   117,   494,   123,   119,   119,   487,   488,
     489,   490,   491,   537,   125,   648,   119,     8,   119,   125,
     130,   117,   137,   133,   688,   504,   690,   118,   137,   122,
     125,   118,   793,   125,    25,    26,   124,   117,     8,    14,
     119,    16,    17,    18,    19,   696,   118,    22,   118,   117,
     119,     8,   119,   119,    45,    25,    26,   686,     8,   538,
      10,    11,    12,    13,   583,   654,   123,   121,    25,    26,
     125,   590,   119,   686,   125,    45,   600,    34,     8,     9,
      10,    11,    12,    13,   117,   119,   125,   606,    45,     8,
      81,    82,   119,   572,   573,    45,     8,   576,   119,   623,
     119,     8,   119,   819,   119,   119,    25,    26,    83,   119,
     119,    81,    82,    25,    26,    45,   119,   596,    25,    26,
     125,   119,   119,   647,    81,    82,    45,   123,   607,   120,
     125,   118,   848,    45,    53,    54,   125,   853,    45,   118,
     120,   730,   119,   117,   668,    10,   665,     8,   627,   628,
     783,   119,   631,   632,   633,   634,   635,   636,   637,   638,
     639,   640,    81,    82,    25,    26,   119,   686,    10,    81,
      82,   125,   119,    34,    81,    82,   700,   701,   117,   703,
     699,   117,   119,   118,    45,   118,   118,   121,   118,   741,
     906,   117,    53,    54,   117,   124,   741,   127,   128,   915,
     117,   119,   741,   741,   741,   741,   741,   117,   119,   688,
     119,   690,    83,   119,   119,   119,   119,   848,   882,   119,
      81,    82,   741,   119,   118,   785,   119,   706,   741,   862,
     793,   793,   741,   697,   846,   227,   843,   215,   781,   227,
     811,   812,   794,   814,   815,   816,   725,   792,   793,    96,
     914,   775,     8,   775,   792,   793,   794,   846,   823,   892,
     656,    90,   781,   787,   669,   205,   670,   786,   813,    25,
      26,   741,   741,   792,   793,   813,    -1,   549,    34,   490,
     851,   852,   801,   854,   855,     8,   857,   858,    -1,    45,
       8,    -1,    10,    11,   813,    13,    -1,    53,    54,   823,
     819,    -1,    25,    26,    -1,   824,   825,    25,    26,   127,
     128,   856,   130,   131,   132,   133,   134,   135,   856,    -1,
      -1,    -1,    45,   861,    -1,    81,    82,    45,   847,   848,
     849,    -1,    -1,    -1,   853,    -1,    -1,   856,    -1,     8,
      -1,    -1,   861,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    81,    82,
      -1,    -1,    31,    81,    82,   844,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
     904,    -1,    -1,    -1,    -1,    -1,    -1,   906,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   915,    -1,   922,    -1,
     118,    -1,    -1,   882,    -1,    -1,    -1,    -1,    -1,   127,
     128,   129,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    -1,    -1,   907,    -1,
      -1,    -1,    -1,    -1,   913,   914,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      -1,    38,    -1,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    -1,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,
     117,   118,    -1,   120,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
      -1,   138,   139,     3,     4,     5,     6,     7,     8,     9,
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
      -1,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
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
      -1,   115,    -1,   117,   118,    -1,   120,   121,   122,   123,
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
      -1,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
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
      -1,   115,    -1,   117,   118,    -1,   120,   121,   122,   123,
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
     118,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
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
      -1,    -1,    -1,   115,    -1,   117,   118,   119,   120,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,
     118,    -1,   120,    -1,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
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
      -1,    -1,    -1,    -1,    -1,   115,    -1,   117,   118,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   115,    -1,    -1,
     118,   119,   120,    -1,   122,   123,   124,   125,   126,   127,
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
     132,   133,   134,   135,   136,    -1,   138,   139,     3,     4,
       5,     6,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    31,    -1,    -1,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    -1,    44,
      45,    46,    -1,    48,    -1,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
      -1,   116,   117,    -1,     3,    -1,    -1,    -1,     7,     8,
      -1,    -1,    -1,    -1,   129,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    34,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       8,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     7,     8,    25,    26,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    45,    -1,    31,
      -1,    -1,    34,    35,    36,    53,    54,    -1,    40,    41,
     129,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    34,
      35,    36,    -1,    -1,    -1,    -1,    41,   129,    -1,    -1,
      45,    46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     7,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,   129,     8,    -1,    45,    46,    -1,
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,
      -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,
      -1,    -1,    45,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,   129,     3,    -1,    -1,    -1,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      31,    -1,    -1,    34,    35,    36,   129,    38,    -1,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    -1,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   114,   115,    -1,   117,     3,    -1,    -1,
     121,     7,     8,    -1,    -1,    -1,    -1,    -1,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    31,    -1,    -1,    34,    35,
      36,    -1,    38,    -1,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    -1,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
       0,   117,    -1,     3,    -1,   121,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    27,    28,    29,
      -1,    31,    -1,    -1,    34,    35,    36,    -1,    38,    -1,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    -1,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,     8,   117,    -1,    -1,
      -1,    -1,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,    31,
      -1,    -1,    -1,    35,    36,    -1,    -1,    -1,    -1,    41,
      -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,     3,    -1,    -1,    -1,     7,     8,     9,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,   120,    -1,
      31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    48,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     3,    -1,    -1,    -1,     7,     8,    -1,
      -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    25,    26,    -1,    -1,    -1,
      -1,    31,    -1,    -1,    34,    35,    36,    -1,    38,    -1,
      -1,    41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,     3,    -1,    -1,    -1,    -1,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,    -1,    -1,    45,    46,    -1,    48,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,     3,    -1,    -1,    -1,    -1,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    -1,    -1,    31,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,    -1,    41,    -1,    -1,    -1,    45,    51,    52,
      48,    -1,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   118,    -1,    -1,    -1,   122,
     123,    -1,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,   138,     7,     8,    -1,    -1,
      -1,    -1,    -1,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    -1,    -1,    -1,    -1,
      31,    -1,    -1,    34,    35,    36,    -1,    -1,    -1,    -1,
      41,    -1,    -1,    -1,    45,    46,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,     8,    -1,    -1,    -1,    -1,    -1,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,    -1,
      35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,    -1,
      45,    -1,    -1,    48,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    79,    -1,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,     8,
      -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    -1,    -1,
      -1,    -1,    31,    -1,    -1,    -1,    35,    36,    -1,    -1,
      -1,    -1,    41,    -1,     8,    -1,    45,    -1,    -1,    48,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    -1,    -1,    -1,    -1,    31,    -1,    -1,
      -1,    35,    36,    -1,    -1,    -1,    -1,    41,    -1,    -1,
      -1,    45,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
       8,    -1,    -1,    -1,    -1,    -1,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,    36,    -1,
      -1,    -1,     8,    41,    -1,    -1,    -1,    45,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    35,
      36,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    45,
      -1,    -1,    -1,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint16 yystos[] =
{
       0,   141,     0,     3,     7,     8,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    31,    34,    35,    36,    38,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    50,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   117,   142,   143,   149,   150,   158,   159,   160,
     161,   162,   166,   169,   175,   177,   178,   181,   182,   183,
     209,   210,   229,   237,   238,   239,   240,   242,   248,   249,
     254,   255,   258,   265,   290,     8,    25,    26,    45,    81,
      82,   211,     8,    45,   238,   249,   118,   122,   120,   211,
     120,   211,    46,   237,   257,   256,   177,   178,   181,   182,
     237,   249,   122,   241,     3,    27,    28,    48,   149,   150,
     158,   159,   238,     8,    25,    26,    45,    81,    82,   249,
     292,   118,   122,    38,    48,     3,     9,    27,    28,   177,
     178,   181,   182,   229,   117,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   118,   118,     3,    38,   143,
     177,   182,   237,   117,   120,   212,   212,   212,   212,   212,
     240,   238,     8,    25,    26,    34,    45,    53,    54,    81,
      82,   179,   186,   188,   191,   195,   211,   230,   232,   233,
     249,    32,   130,   133,   250,   209,    80,    80,   117,   122,
     144,   211,   230,   250,   186,    80,   291,   244,   151,   152,
     211,   120,   230,   250,   291,   120,   230,   250,   118,   258,
     258,   212,   212,   212,   212,   211,   123,   170,     8,    45,
     242,   248,   120,   211,   211,   211,   117,    53,    54,   233,
     120,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    38,    41,    43,    44,    45,    46,    47,    48,    49,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,   117,   118,   120,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     138,   139,   254,   289,   290,   296,   297,   298,   299,   291,
     243,   117,   211,   120,   177,   237,   211,   211,   212,   212,
     212,   212,   177,   211,   267,   270,   271,   211,   211,   275,
     211,   211,   211,   211,   211,   211,   211,   211,   211,   211,
     211,   211,   211,   211,   211,   177,   182,   212,   212,   291,
      51,    52,   118,   136,   288,   289,   211,   226,   250,   211,
     186,   191,   249,    33,   126,   187,   193,   192,   193,    49,
     118,   122,   136,   234,   235,   117,   125,   126,   227,   228,
      80,    32,   130,   133,   130,   133,     8,    45,   242,   247,
     248,     8,    45,   129,   183,   199,   201,   211,   247,   238,
     245,   124,   259,   117,   230,    42,   117,   119,   295,   296,
     300,   245,   121,   125,   126,   151,   117,   230,   121,   291,
     117,   230,   184,     3,    14,    41,   169,   171,   173,   174,
     291,   120,   226,   226,   226,   117,   141,   291,   291,   291,
     293,   291,   119,   245,   141,   212,   119,   125,   211,   211,
     211,   125,   125,   211,   125,   125,   125,   125,   125,   125,
     125,   125,   125,   125,   125,   119,   119,   125,   212,   212,
     121,   136,   136,   119,   137,   189,   119,   211,   119,    80,
      10,    10,    31,   194,   194,   236,   196,   197,   292,   231,
     232,   250,     8,     9,    10,    11,    12,    13,    45,   118,
     127,   128,   263,   264,   253,   252,   251,   206,   207,   211,
     200,   118,   125,   123,     4,     5,     6,   260,   261,   262,
     120,   117,     3,   296,   301,   123,   292,   151,     8,    10,
      11,    13,    45,   118,   127,   128,   129,   153,   154,   155,
     156,   211,   242,   248,   121,   117,   292,   121,   117,   215,
     216,   211,   225,   123,   125,   225,   121,   291,   117,   119,
     119,   121,   119,   119,   119,     3,    40,   121,   294,   295,
     137,   123,   121,   266,   125,   119,   119,   272,   274,   125,
     254,   278,   280,   282,   284,   279,   281,   283,   285,   286,
     287,   211,   137,   137,   118,    49,   117,   118,   136,   117,
     234,   215,   245,   137,   125,   232,   122,   263,     8,   264,
     264,   250,   250,   250,   118,   124,   203,   202,   246,   145,
     125,   247,   146,   301,   301,   117,   117,   155,   127,   128,
     130,   131,   132,   133,   134,   135,   157,   155,   292,   117,
     292,   119,    48,    79,   217,   219,   238,   172,   226,   121,
     118,   118,   238,   268,   254,   254,   276,   119,   254,   254,
     254,   254,   254,   254,   254,   254,   254,   254,   119,   125,
     190,   117,   213,   214,   219,   291,   119,   123,   234,   231,
     125,   239,   119,   208,   205,   211,   215,   245,   259,   260,
     121,   147,   119,   155,   117,   117,   185,   125,    53,    54,
     233,   234,   171,   117,   226,   213,   213,   119,   238,   273,
     119,   254,   119,   119,   119,   119,   119,   119,   119,   119,
     125,   125,   119,   215,   119,   125,   137,   118,   231,   123,
     215,   125,   204,   118,   119,   120,     3,     7,     8,    25,
      26,    29,    37,    38,    39,    45,    50,    81,    82,   116,
     117,   129,   148,   149,   150,   158,   159,   160,   163,   164,
     166,   167,   168,   169,   176,   180,   182,   199,   229,   237,
     262,   265,   194,   218,   223,   222,   221,   220,   117,   119,
     119,   269,   125,   277,    10,    10,   119,   117,   214,   117,
     198,   118,   119,   205,   291,   146,   211,   129,   238,     3,
     164,   180,   182,   237,   167,   168,   169,   180,   182,   229,
     237,   118,   118,   206,   212,   212,   164,   180,   182,   212,
     212,   212,   191,   124,   217,   225,   225,   227,   227,   117,
     117,   119,   292,   119,   119,   119,   215,   264,   204,   119,
     121,   117,   120,   124,   165,   206,   191,   211,   212,   212,
     212,   212,   212,   212,     7,   180,   237,   291,   119,   119,
     119,   119,   119,   291,   292,   238,   119,   119,   118,   121,
     117,   117,   224,   117,   213,   119
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
        case 17:

/* Line 1455 of yacc.c  */
#line 560 "vtkParse.y"
    { output_function(); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 561 "vtkParse.y"
    { output_function(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 562 "vtkParse.y"
    { reject_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 563 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 564 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 565 "vtkParse.y"
    { reject_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 566 "vtkParse.y"
    { reject_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 567 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 568 "vtkParse.y"
    { output_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 569 "vtkParse.y"
    { output_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 570 "vtkParse.y"
    { reject_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 571 "vtkParse.y"
    { reject_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 572 "vtkParse.y"
    { reject_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 573 "vtkParse.y"
    { reject_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 574 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 575 "vtkParse.y"
    { output_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 576 "vtkParse.y"
    { output_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 577 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 585 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str)); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 586 "vtkParse.y"
    { end_class(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 587 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str)); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 588 "vtkParse.y"
    { end_class(); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 590 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 605 "vtkParse.y"
    { output_function(); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 606 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 608 "vtkParse.y"
    { output_function(); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 609 "vtkParse.y"
    { output_function(); }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 610 "vtkParse.y"
    { output_function(); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 611 "vtkParse.y"
    { output_function(); }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 612 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 614 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 615 "vtkParse.y"
    { output_function(); }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 616 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 617 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 642 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 644 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 649 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 655 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 664 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 664 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { postSig(", "); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    { postSig("typename "); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    { postSig("class "); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    { postSig("int "); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 722 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 733 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 735 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 741 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 745 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 766 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 776 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 780 "vtkParse.y"
    { postSig(")"); }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 781 "vtkParse.y"
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

  case 159:

/* Line 1455 of yacc.c  */
#line 795 "vtkParse.y"
    { postSig(")"); }
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 796 "vtkParse.y"
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

  case 161:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
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

  case 162:

/* Line 1455 of yacc.c  */
#line 823 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 824 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 829 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 831 "vtkParse.y"
    { postSig(")"); }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 832 "vtkParse.y"
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

  case 167:

/* Line 1455 of yacc.c  */
#line 843 "vtkParse.y"
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

  case 168:

/* Line 1455 of yacc.c  */
#line 859 "vtkParse.y"
    {postSig(") = 0");}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    {postSig(") const = 0");}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 862 "vtkParse.y"
    {postSig(" const");}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 865 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 868 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 869 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 870 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 176:

/* Line 1455 of yacc.c  */
#line 877 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 879 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 178:

/* Line 1455 of yacc.c  */
#line 880 "vtkParse.y"
    {
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
#line 889 "vtkParse.y"
    { postSig("("); }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 898 "vtkParse.y"
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

  case 187:

/* Line 1455 of yacc.c  */
#line 911 "vtkParse.y"
    { postSig("(");}
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 913 "vtkParse.y"
    {postSig("const ");}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 915 "vtkParse.y"
    {postSig("static ");}
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 916 "vtkParse.y"
    {postSig("static ");}
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 918 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 194:

/* Line 1455 of yacc.c  */
#line 920 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 195:

/* Line 1455 of yacc.c  */
#line 921 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 922 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 923 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 931 "vtkParse.y"
    {clearTypeId();}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 933 "vtkParse.y"
    { postSig("...");}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 935 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 937 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 941 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 213:

/* Line 1455 of yacc.c  */
#line 950 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      int array_type = ((yyvsp[(2) - (2)].integer) % VTK_PARSE_COUNT_START);
      int array_count = ((yyvsp[(2) - (2)].integer) / VTK_PARSE_COUNT_START);
      currentFunction->ArgCounts[i] = array_count;
      currentFunction->ArgTypes[i] = (yyvsp[(1) - (2)].integer) + array_type;
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 959 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 966 "vtkParse.y"
    { postSig("(&"); }
    break;

  case 217:

/* Line 1455 of yacc.c  */
#line 967 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(") ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = ((yyvsp[(1) - (5)].integer) | VTK_PARSE_REF);
      currentFunction->ArgClasses[i] = vtkstrdup(getTypeId());
    }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 974 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*"); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 975 "vtkParse.y"
    { postSig(")("); }
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 976 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig(")");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_UNKNOWN;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
    {postSig("="); postSig((yyvsp[(2) - (2)].str));}
    break;

  case 249:

/* Line 1455 of yacc.c  */
#line 1020 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(2) - (2)].integer);}
    break;

  case 250:

/* Line 1455 of yacc.c  */
#line 1028 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 251:

/* Line 1455 of yacc.c  */
#line 1028 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 254:

/* Line 1455 of yacc.c  */
#line 1038 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1043 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1045 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1046 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1048 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1049 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1050 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1054 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1056 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1057 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1058 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1061 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1062 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1063 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1064 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1066 "vtkParse.y"
    {postSig(", ");}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1068 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1069 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1070 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1071 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1074 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1080 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1086 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1087 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1088 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1089 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1090 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1091 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1104 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1105 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1106 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1107 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1108 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1110 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1112 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1114 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1115 "vtkParse.y"
    { postSig("**"); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1116 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1117 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1118 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1119 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1120 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1122 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1123 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1124 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1125 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1126 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1127 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1128 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_VTK_OBJECT; }
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1131 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1132 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1133 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1134 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1135 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1136 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1137 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1138 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1139 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1140 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1141 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1142 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1143 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1144 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1145 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1146 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1146 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1147 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1149 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1152 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1153 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1154 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1155 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1156 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1158 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1165 "vtkParse.y"
    {
      currentClass->SuperClasses[currentClass->NumberOfSuperClasses++] =
        vtkstrdup((yyvsp[(2) - (2)].str));
    }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1170 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1171 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1172 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1173 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1175 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1176 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (2)].str);}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    {(yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (2)].str))+2);
                        sprintf((yyval.str), "-%s", (yyvsp[(2) - (2)].str)); }
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1179 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1180 "vtkParse.y"
    {(yyval.str) = (yyvsp[(2) - (3)].str);}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1182 "vtkParse.y"
    {
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (7)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(6) - (7)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (7)].str), getTypeId(), (yyvsp[(6) - (7)].str));
            }
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1188 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1189 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1191 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1192 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1193 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 355:

/* Line 1455 of yacc.c  */
#line 1195 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1196 "vtkParse.y"
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

  case 357:

/* Line 1455 of yacc.c  */
#line 1210 "vtkParse.y"
    {postSig("Get");}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    {markSig();}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    {swapSig();}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1212 "vtkParse.y"
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

  case 361:

/* Line 1455 of yacc.c  */
#line 1224 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1225 "vtkParse.y"
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

  case 363:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
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

  case 365:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    {closeSig();}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
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

  case 368:

/* Line 1455 of yacc.c  */
#line 1300 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1301 "vtkParse.y"
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

  case 370:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {markSig();}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {swapSig();}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1317 "vtkParse.y"
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

  case 374:

/* Line 1455 of yacc.c  */
#line 1330 "vtkParse.y"
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

  case 375:

/* Line 1455 of yacc.c  */
#line 1355 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1360 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1361 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1365 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1366 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1375 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1376 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 385:

/* Line 1455 of yacc.c  */
#line 1380 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1381 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1385 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1391 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1395 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
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

  case 393:

/* Line 1455 of yacc.c  */
#line 1416 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1418 "vtkParse.y"
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

  case 395:

/* Line 1455 of yacc.c  */
#line 1438 "vtkParse.y"
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

  case 396:

/* Line 1455 of yacc.c  */
#line 1504 "vtkParse.y"
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

  case 397:

/* Line 1455 of yacc.c  */
#line 1574 "vtkParse.y"
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

  case 398:

/* Line 1455 of yacc.c  */
#line 1641 "vtkParse.y"
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

  case 399:

/* Line 1455 of yacc.c  */
#line 1714 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1715 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1716 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1717 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1720 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1721 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1721 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1722 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1722 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1723 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1723 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1724 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1724 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1725 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1725 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1726 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1726 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1727 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1728 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1729 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1730 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 421:

/* Line 1455 of yacc.c  */
#line 1731 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1732 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1733 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1734 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 425:

/* Line 1455 of yacc.c  */
#line 1735 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1736 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1737 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1738 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1739 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1740 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1741 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1742 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1743 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1744 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1745 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1746 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1747 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1748 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1749 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1750 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1751 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1752 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1753 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;



/* Line 1455 of yacc.c  */
#line 6625 "vtkParse.tab.c"
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
#line 1790 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
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
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->ClassName = NULL;
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

