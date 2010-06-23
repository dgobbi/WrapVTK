
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
char *currentEnumName = 0;
char *currentEnumValue = 0;

void start_class(const char *classname, int is_struct);
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
    vtkParse_AddItemMacro(oldNamespace, Namespaces, currentNamespace);
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
#line 569 "vtkParse.tab.c"

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
#line 510 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 846 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 858 "vtkParse.tab.c"

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
#define YYLAST   6350

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  173
/* YYNRULES -- Number of rules.  */
#define YYNRULES  522
/* YYNRULES -- Number of states.  */
#define YYNSTATES  955

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
     214,   218,   222,   227,   230,   234,   238,   242,   247,   250,
     256,   258,   260,   261,   262,   272,   273,   274,   283,   284,
     286,   290,   292,   296,   298,   300,   302,   304,   306,   308,
     310,   312,   315,   319,   323,   325,   327,   329,   331,   333,
     335,   337,   339,   341,   343,   345,   352,   360,   367,   371,
     372,   379,   385,   388,   392,   396,   398,   403,   407,   412,
     421,   430,   440,   450,   453,   456,   459,   462,   465,   469,
     473,   474,   480,   482,   483,   488,   491,   494,   499,   504,
     507,   511,   516,   520,   523,   527,   530,   534,   536,   539,
     543,   547,   551,   553,   556,   560,   561,   562,   571,   572,
     576,   577,   578,   586,   587,   591,   592,   595,   598,   600,
     601,   607,   608,   609,   619,   620,   624,   625,   631,   632,
     636,   637,   641,   646,   648,   649,   655,   657,   659,   662,
     664,   666,   668,   670,   672,   674,   676,   680,   681,   683,
     685,   689,   690,   691,   694,   696,   698,   699,   704,   705,
     706,   712,   713,   714,   720,   722,   723,   729,   730,   731,
     741,   742,   744,   746,   749,   750,   752,   753,   757,   761,
     765,   768,   772,   778,   784,   791,   800,   809,   813,   815,
     819,   822,   827,   828,   832,   833,   835,   838,   839,   841,
     842,   846,   851,   853,   856,   858,   861,   863,   866,   869,
     871,   873,   875,   876,   880,   881,   887,   888,   894,   896,
     897,   902,   904,   906,   908,   910,   914,   918,   920,   922,
     924,   926,   928,   930,   932,   934,   936,   939,   942,   945,
     948,   951,   952,   957,   958,   963,   964,   969,   971,   973,
     975,   977,   979,   981,   983,   986,   989,   992,   995,   998,
    1001,  1004,  1007,  1009,  1011,  1013,  1015,  1017,  1019,  1021,
    1023,  1025,  1027,  1029,  1031,  1033,  1035,  1037,  1038,  1042,
    1043,  1047,  1049,  1051,  1053,  1055,  1057,  1059,  1061,  1063,
    1064,  1067,  1069,  1073,  1075,  1078,  1081,  1084,  1086,  1088,
    1090,  1092,  1093,  1097,  1098,  1102,  1104,  1105,  1110,  1111,
    1112,  1122,  1124,  1126,  1128,  1130,  1132,  1134,  1135,  1143,
    1144,  1145,  1146,  1156,  1157,  1163,  1164,  1170,  1171,  1172,
    1183,  1184,  1192,  1193,  1194,  1195,  1205,  1212,  1213,  1221,
    1222,  1230,  1231,  1239,  1240,  1248,  1249,  1257,  1258,  1266,
    1267,  1275,  1276,  1284,  1285,  1295,  1296,  1306,  1311,  1316,
    1323,  1331,  1334,  1337,  1341,  1345,  1347,  1349,  1351,  1353,
    1355,  1357,  1359,  1361,  1363,  1365,  1367,  1369,  1371,  1373,
    1375,  1377,  1379,  1381,  1383,  1385,  1387,  1389,  1391,  1393,
    1395,  1397,  1399,  1401,  1403,  1405,  1407,  1409,  1411,  1413,
    1415,  1417,  1419,  1421,  1423,  1425,  1427,  1429,  1430,  1433,
    1434,  1437,  1439,  1441,  1443,  1445,  1447,  1449,  1451,  1453,
    1455,  1457,  1459,  1461,  1463,  1465,  1467,  1469,  1471,  1473,
    1475,  1477,  1479,  1481,  1483,  1485,  1487,  1489,  1491,  1493,
    1495,  1497,  1499,  1501,  1503,  1505,  1507,  1509,  1511,  1513,
    1515,  1517,  1519,  1521,  1523,  1525,  1527,  1529,  1531,  1535,
    1539,  1543,  1547
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,    -1,    -1,   142,   143,   144,    -1,   238,
      -1,    48,   238,    -1,   156,    -1,   153,    -1,   168,    -1,
     167,    -1,   166,    -1,   169,    -1,   170,    -1,   172,    -1,
     176,    -1,   145,    -1,   177,   145,    -1,    30,    -1,   189,
     218,    -1,    39,   189,   218,    -1,    48,   189,   218,    -1,
     177,   189,   218,    -1,   177,    39,   189,   218,    -1,   188,
     218,    -1,    39,   188,   218,    -1,    48,   188,   218,    -1,
     184,   218,    -1,    39,   184,   218,    -1,    48,   184,   218,
      -1,    48,    10,   184,   218,    -1,   185,   218,    -1,    39,
     185,   218,    -1,    48,   185,   218,    -1,   177,   184,   218,
      -1,   177,    39,   184,   218,    -1,   182,   218,    -1,   281,
      -1,   306,    -1,   260,   118,    -1,     9,   119,   307,   120,
      -1,    46,   119,   307,   120,    -1,   118,    -1,    -1,     4,
     217,   146,   270,   121,   150,   122,    -1,    -1,     4,   217,
     123,   256,   124,   147,   270,   121,   150,   122,    -1,    -1,
       3,   217,   148,   270,   121,   150,   122,    -1,    -1,     3,
     217,   123,   256,   124,   149,   270,   121,   150,   122,    -1,
      -1,    -1,   150,   151,   152,    -1,   273,   125,    -1,   238,
      -1,    40,   238,    -1,   156,    -1,   153,    -1,   168,    -1,
     167,    -1,   166,    -1,   169,    -1,   176,    -1,   174,    -1,
      38,   174,    -1,   173,    -1,    30,    -1,   189,   218,    -1,
      38,   189,   218,    -1,    39,   189,   218,    -1,   177,   189,
     218,    -1,   177,    39,   189,   218,    -1,   187,   218,    -1,
      38,   187,   218,    -1,    39,   187,   218,    -1,   177,   187,
     218,    -1,   177,    39,   187,   218,    -1,   183,   218,    -1,
     117,   119,   307,   120,   118,    -1,   281,    -1,   118,    -1,
      -1,    -1,    28,   217,   154,   121,   159,   122,   155,   308,
     118,    -1,    -1,    -1,    28,   157,   121,   159,   122,   158,
     308,   118,    -1,    -1,   160,    -1,   160,   126,   159,    -1,
     217,    -1,   217,   127,   163,    -1,   162,    -1,   217,    -1,
     259,    -1,   253,    -1,    11,    -1,    12,    -1,    14,    -1,
     161,    -1,   164,   163,    -1,   161,   165,   163,    -1,   119,
     163,   120,    -1,   128,    -1,   129,    -1,   130,    -1,   128,
      -1,   129,    -1,   131,    -1,   132,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,     3,   121,   307,   122,   308,
     118,    -1,    29,   217,   121,   307,   122,   308,   118,    -1,
      29,   121,   307,   122,   308,   118,    -1,    45,   308,   118,
      -1,    -1,    44,   260,   171,   121,   142,   122,    -1,    48,
      10,   121,   142,   122,    -1,   177,   174,    -1,     4,   217,
     175,    -1,     3,   217,   175,    -1,   118,    -1,   121,   307,
     122,   118,    -1,   125,   308,   118,    -1,    43,   249,   244,
     118,    -1,    43,     4,   217,   121,   307,   122,   234,   118,
      -1,    43,     3,   217,   121,   307,   122,   234,   118,    -1,
      43,   249,    54,   234,   120,   119,   219,   120,   118,    -1,
      43,   249,    55,   234,   120,   119,   219,   120,   118,    -1,
      43,   156,    -1,    43,   153,    -1,    43,   168,    -1,    43,
     167,    -1,    43,   166,    -1,    43,    49,   118,    -1,    41,
     123,   124,    -1,    -1,    41,   123,   178,   179,   124,    -1,
     181,    -1,    -1,   181,   126,   180,   179,    -1,   250,   233,
      -1,   177,   233,    -1,    51,   119,   184,   120,    -1,    51,
     119,   187,   120,    -1,   248,   198,    -1,   248,   186,   198,
      -1,   260,    81,   130,   212,    -1,   260,    81,   205,    -1,
     260,    81,    -1,   186,   260,    81,    -1,   130,   212,    -1,
       8,   130,   212,    -1,   205,    -1,   248,   198,    -1,     8,
     249,   198,    -1,   260,    81,   190,    -1,   248,   186,   193,
      -1,   190,    -1,   248,   193,    -1,     8,   249,   193,    -1,
      -1,    -1,    35,   248,   119,   191,   221,   120,   192,   200,
      -1,    -1,   195,   194,   200,    -1,    -1,    -1,    35,   304,
     196,   119,   197,   221,   120,    -1,    -1,   201,   199,   200,
      -1,    -1,   127,    11,    -1,    34,    11,    -1,    32,    -1,
      -1,   217,   119,   202,   221,   120,    -1,    -1,    -1,   217,
     123,   203,   256,   124,   119,   204,   221,   120,    -1,    -1,
     207,   206,   209,    -1,    -1,   217,   119,   208,   221,   120,
      -1,    -1,   125,   211,   210,    -1,    -1,   126,   211,   210,
      -1,   217,   119,   307,   120,    -1,   213,    -1,    -1,   217,
     119,   214,   221,   120,    -1,    32,    -1,    47,    -1,    47,
      39,    -1,    46,    -1,     9,    -1,    27,    -1,    26,    -1,
      82,    -1,    83,    -1,   118,    -1,   121,   307,   122,    -1,
      -1,   220,    -1,   225,    -1,   225,   126,   220,    -1,    -1,
      -1,   222,   223,    -1,    80,    -1,   225,    -1,    -1,   225,
     126,   224,   223,    -1,    -1,    -1,   249,   226,   245,   227,
     235,    -1,    -1,    -1,   249,   228,   244,   229,   235,    -1,
      49,    -1,    -1,   249,    55,   230,   243,   120,    -1,    -1,
      -1,   249,    54,   231,   243,   120,   119,   232,   219,   120,
      -1,    -1,   217,    -1,   217,    -1,   261,   217,    -1,    -1,
     236,    -1,    -1,   127,   237,   274,    -1,   248,   241,   118,
      -1,   248,   239,   118,    -1,    49,   118,    -1,    47,    49,
     118,    -1,   248,    55,   217,   120,   118,    -1,   248,    54,
     234,   120,   118,    -1,   248,    54,   234,   120,    50,   118,
      -1,   248,    54,   234,   120,   137,   307,   138,   118,    -1,
     248,    54,   234,   120,   119,   219,   120,   118,    -1,   241,
     126,   240,    -1,   241,    -1,   241,   126,   240,    -1,   261,
     241,    -1,   261,   241,   126,   240,    -1,    -1,   244,   242,
     235,    -1,    -1,   217,    -1,   217,   245,    -1,    -1,   246,
      -1,    -1,    50,   247,   245,    -1,   137,   308,   138,   245,
      -1,   249,    -1,   216,   249,    -1,   250,    -1,   250,   261,
      -1,   251,    -1,   215,   251,    -1,   251,   215,    -1,   265,
      -1,   253,    -1,   259,    -1,    -1,    42,   252,   258,    -1,
      -1,    46,   123,   254,   256,   124,    -1,    -1,     9,   123,
     255,   256,   124,    -1,   249,    -1,    -1,   249,   126,   257,
     256,    -1,     9,    -1,    46,    -1,   253,    -1,   259,    -1,
     260,    81,   258,    -1,   253,    81,   258,    -1,     9,    -1,
      46,    -1,    27,    -1,    26,    -1,    82,    -1,    83,    -1,
     134,    -1,   131,    -1,    33,    -1,   131,   134,    -1,   131,
     131,    -1,    33,   134,    -1,    33,   131,    -1,    33,    33,
      -1,    -1,   131,   131,   262,   261,    -1,    -1,    33,   131,
     263,   261,    -1,    -1,    33,    33,   264,   261,    -1,   266,
      -1,    82,    -1,    83,    -1,    26,    -1,    27,    -1,     9,
      -1,    46,    -1,     4,     9,    -1,     4,    46,    -1,     3,
       9,    -1,     3,    46,    -1,    29,     9,    -1,    29,    46,
      -1,    28,     9,    -1,    28,    46,    -1,    22,    -1,    16,
      -1,    21,    -1,    25,    -1,    24,    -1,    85,    -1,    86,
      -1,    87,    -1,    88,    -1,    89,    -1,    90,    -1,    91,
      -1,    92,    -1,    93,    -1,    94,    -1,    -1,    37,   267,
     269,    -1,    -1,    36,   268,   269,    -1,   269,    -1,    23,
      -1,    15,    -1,    17,    -1,    18,    -1,    84,    -1,    19,
      -1,    20,    -1,    -1,   125,   271,    -1,   272,    -1,   272,
     126,   271,    -1,   258,    -1,     6,   258,    -1,     7,   258,
      -1,     5,   258,    -1,     5,    -1,     6,    -1,     7,    -1,
     280,    -1,    -1,   129,   275,   280,    -1,    -1,   128,   276,
     280,    -1,    10,    -1,    -1,   119,   277,   274,   120,    -1,
      -1,    -1,     9,   123,   278,   250,   124,   119,   279,   280,
     120,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
       9,    -1,    46,    -1,    -1,    95,   119,   217,   126,   282,
     249,   120,    -1,    -1,    -1,    -1,    96,   119,   283,   217,
     126,   284,   249,   285,   120,    -1,    -1,    97,   119,   286,
     217,   120,    -1,    -1,    98,   119,   287,   217,   120,    -1,
      -1,    -1,    99,   119,   217,   126,   288,   265,   289,   126,
     308,   120,    -1,    -1,   100,   119,   217,   126,   290,   265,
     120,    -1,    -1,    -1,    -1,   101,   119,   291,   217,   126,
     292,   265,   293,   120,    -1,   102,   119,   217,   126,   265,
     120,    -1,    -1,   103,   119,   217,   126,   294,   265,   120,
      -1,    -1,   107,   119,   217,   126,   295,   265,   120,    -1,
      -1,   104,   119,   217,   126,   296,   265,   120,    -1,    -1,
     108,   119,   217,   126,   297,   265,   120,    -1,    -1,   105,
     119,   217,   126,   298,   265,   120,    -1,    -1,   109,   119,
     217,   126,   299,   265,   120,    -1,    -1,   106,   119,   217,
     126,   300,   265,   120,    -1,    -1,   110,   119,   217,   126,
     301,   265,   120,    -1,    -1,   111,   119,   217,   126,   302,
     265,   126,    11,   120,    -1,    -1,   112,   119,   217,   126,
     303,   265,   126,    11,   120,    -1,   113,   119,   217,   120,
      -1,   114,   119,   217,   120,    -1,   115,   119,   217,   126,
     217,   120,    -1,   115,   119,   217,   126,   217,   126,   120,
      -1,   119,   120,    -1,   137,   138,    -1,    52,   137,   138,
      -1,    53,   137,   138,    -1,   305,    -1,   127,    -1,   131,
      -1,   132,    -1,   128,    -1,   129,    -1,   139,    -1,   130,
      -1,   126,    -1,   123,    -1,   124,    -1,   134,    -1,   135,
      -1,   136,    -1,   133,    -1,    52,    -1,    53,    -1,    56,
      -1,    57,    -1,    58,    -1,    59,    -1,    60,    -1,    61,
      -1,    64,    -1,    65,    -1,    66,    -1,    67,    -1,    68,
      -1,    62,    -1,    63,    -1,    69,    -1,    70,    -1,    71,
      -1,    72,    -1,    73,    -1,    74,    -1,    75,    -1,    76,
      -1,    77,    -1,    78,    -1,    79,    -1,   116,    -1,    -1,
     307,   309,    -1,    -1,   308,   310,    -1,   118,    -1,   310,
      -1,    31,    -1,   311,    -1,   312,    -1,   313,    -1,    43,
      -1,   305,    -1,   125,    -1,   140,    -1,    81,    -1,     4,
      -1,    41,    -1,    27,    -1,    26,    -1,    82,    -1,    83,
      -1,   266,    -1,     9,    -1,    46,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,    10,    -1,    30,    -1,    32,
      -1,    33,    -1,    34,    -1,     3,    -1,    35,    -1,    47,
      -1,    39,    -1,     8,    -1,    28,    -1,    29,    -1,    42,
      -1,    50,    -1,    49,    -1,    80,    -1,     5,    -1,     7,
      -1,     6,    -1,    44,    -1,    45,    -1,    48,    -1,   306,
      -1,   121,   307,   122,    -1,   119,   307,   120,    -1,    54,
     307,   120,    -1,    55,   307,   120,    -1,   137,   307,   138,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   642,   642,   642,   642,   645,   646,   647,   648,   649,
     650,   651,   652,   653,   654,   655,   656,   657,   658,   659,
     660,   661,   662,   663,   664,   665,   666,   667,   668,   669,
     670,   671,   672,   673,   674,   675,   676,   677,   678,   679,
     680,   681,   682,   684,   684,   686,   686,   688,   688,   690,
     690,   693,   693,   693,   695,   696,   697,   698,   699,   700,
     701,   702,   703,   704,   705,   706,   707,   708,   709,   710,
     712,   713,   714,   715,   716,   718,   719,   720,   721,   722,
     723,   724,   732,   733,   732,   735,   736,   735,   738,   738,
     738,   740,   741,   745,   745,   745,   745,   747,   747,   747,
     749,   750,   755,   761,   767,   767,   768,   770,   770,   771,
     771,   772,   772,   773,   773,   775,   777,   779,   781,   783,
     783,   786,   788,   790,   791,   793,   794,   795,   797,   798,
     799,   800,   802,   804,   805,   806,   807,   808,   809,   811,
     812,   812,   815,   816,   816,   818,   818,   820,   822,   824,
     829,   830,   831,   833,   834,   836,   837,   842,   843,   847,
     856,   857,   860,   864,   868,   879,   883,   878,   898,   898,
     910,   911,   910,   918,   918,   930,   931,   940,   950,   957,
     956,   961,   962,   961,   971,   971,   981,   981,   983,   983,
     985,   985,   987,   989,  1003,  1003,  1005,  1007,  1008,  1010,
    1011,  1012,  1013,  1014,  1015,  1017,  1017,  1019,  1019,  1021,
    1021,  1023,  1023,  1023,  1025,  1026,  1029,  1028,  1032,  1033,
    1032,  1051,  1052,  1051,  1070,  1078,  1078,  1091,  1093,  1091,
    1106,  1106,  1108,  1108,  1110,  1110,  1112,  1112,  1114,  1124,
    1125,  1126,  1127,  1128,  1129,  1130,  1132,  1135,  1137,  1138,
    1139,  1140,  1143,  1143,  1146,  1146,  1148,  1157,  1157,  1160,
    1160,  1166,  1171,  1172,  1174,  1175,  1177,  1178,  1179,  1181,
    1182,  1184,  1186,  1186,  1190,  1190,  1192,  1192,  1195,  1195,
    1195,  1197,  1198,  1199,  1200,  1202,  1208,  1215,  1216,  1217,
    1218,  1219,  1220,  1233,  1234,  1235,  1236,  1237,  1238,  1240,
    1242,  1244,  1244,  1246,  1246,  1248,  1248,  1251,  1252,  1253,
    1254,  1255,  1256,  1257,  1258,  1259,  1260,  1261,  1262,  1263,
    1264,  1265,  1268,  1269,  1270,  1271,  1272,  1273,  1274,  1275,
    1276,  1277,  1278,  1279,  1280,  1281,  1282,  1283,  1283,  1284,
    1284,  1286,  1289,  1290,  1291,  1292,  1293,  1294,  1295,  1297,
    1297,  1299,  1299,  1301,  1302,  1303,  1304,  1311,  1312,  1313,
    1315,  1316,  1316,  1317,  1317,  1320,  1321,  1321,  1322,  1323,
    1322,  1331,  1332,  1333,  1334,  1335,  1337,  1341,  1341,  1356,
    1357,  1357,  1356,  1370,  1370,  1385,  1385,  1399,  1399,  1399,
    1446,  1445,  1461,  1462,  1462,  1461,  1475,  1501,  1501,  1506,
    1506,  1511,  1511,  1516,  1516,  1521,  1521,  1526,  1526,  1531,
    1531,  1536,  1536,  1541,  1541,  1562,  1562,  1583,  1649,  1719,
    1786,  1860,  1861,  1862,  1863,  1864,  1866,  1867,  1867,  1868,
    1868,  1869,  1869,  1870,  1870,  1871,  1871,  1872,  1872,  1873,
    1874,  1875,  1876,  1877,  1878,  1879,  1880,  1881,  1882,  1883,
    1884,  1885,  1886,  1887,  1888,  1889,  1890,  1891,  1892,  1893,
    1894,  1895,  1896,  1897,  1898,  1899,  1905,  1928,  1928,  1929,
    1929,  1931,  1931,  1933,  1933,  1933,  1933,  1933,  1934,  1934,
    1934,  1934,  1934,  1934,  1935,  1935,  1935,  1935,  1935,  1936,
    1936,  1936,  1936,  1936,  1936,  1937,  1937,  1937,  1937,  1937,
    1937,  1938,  1938,  1938,  1938,  1938,  1938,  1938,  1939,  1939,
    1939,  1939,  1939,  1939,  1940,  1940,  1940,  1940,  1942,  1943,
    1944,  1945,  1946
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
  "class_def_body", "$@6", "class_def_item", "named_enum", "$@7", "$@8",
  "anonymous_enum", "$@9", "$@10", "enum_list", "enum_item", "enum_value",
  "enum_literal", "enum_math", "math_unary_op", "math_binary_op",
  "anonymous_struct", "named_union", "anonymous_union", "using",
  "namespace", "$@11", "extern", "template_internal_class",
  "internal_class", "internal_class_body", "typedef", "template", "$@12",
  "template_args", "$@13", "template_arg", "legacy_function",
  "legacy_method", "function", "scoped_method", "scope", "method",
  "scoped_operator", "operator", "typecast_op_func", "$@14", "$@15",
  "op_func", "$@16", "op_sig", "$@17", "$@18", "func", "$@19",
  "func_trailer", "func_sig", "$@20", "$@21", "@22", "constructor", "$@23",
  "constructor_sig", "$@24", "maybe_initializers", "more_initializers",
  "initializer", "destructor", "destructor_sig", "$@25", "const_mod",
  "static_mod", "any_id", "func_body", "ignore_args_list",
  "ignore_more_args", "args_list", "$@26", "more_args", "$@27", "arg",
  "$@28", "$@29", "$@30", "$@31", "$@32", "$@33", "$@34", "maybe_id",
  "maybe_indirect_id", "maybe_var_assign", "var_assign", "$@35", "var",
  "var_ids", "maybe_indirect_var_ids", "var_id_maybe_assign", "$@36",
  "maybe_var_id", "var_id", "maybe_var_array", "var_array", "$@37",
  "maybe_static_type", "type", "type_red", "type_red1", "$@38",
  "templated_id", "$@39", "$@40", "types", "$@41", "maybe_scoped_id",
  "scoped_id", "class_id", "type_indirection", "$@42", "$@43", "$@44",
  "type_red2", "type_primitive", "$@45", "$@46", "type_integer",
  "optional_scope", "scope_list", "scope_list_item", "scope_type",
  "literal", "$@47", "$@48", "$@49", "$@50", "$@51", "literal2", "macro",
  "$@52", "$@53", "$@54", "$@55", "$@56", "$@57", "$@58", "$@59", "$@60",
  "$@61", "$@62", "$@63", "$@64", "$@65", "$@66", "$@67", "$@68", "$@69",
  "$@70", "$@71", "$@72", "$@73", "op_token", "op_token_no_delim",
  "vtk_constant_def", "maybe_other", "maybe_other_no_semi", "other_stuff",
  "other_stuff_no_semi", "braces", "parens", "brackets", 0
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
     152,   152,   154,   155,   153,   157,   158,   156,   159,   159,
     159,   160,   160,   161,   161,   161,   161,   162,   162,   162,
     163,   163,   163,   163,   164,   164,   164,   165,   165,   165,
     165,   165,   165,   165,   165,   166,   167,   168,   169,   171,
     170,   172,   173,   174,   174,   175,   175,   175,   176,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   177,
     178,   177,   179,   180,   179,   181,   181,   182,   183,   184,
     185,   185,   185,   186,   186,   187,   187,   187,   187,   187,
     188,   188,   189,   189,   189,   191,   192,   190,   194,   193,
     196,   197,   195,   199,   198,   200,   200,   200,   200,   202,
     201,   203,   204,   201,   206,   205,   208,   207,   209,   209,
     210,   210,   211,   212,   214,   213,   215,   216,   216,   217,
     217,   217,   217,   217,   217,   218,   218,   219,   219,   220,
     220,   221,   222,   221,   223,   223,   224,   223,   226,   227,
     225,   228,   229,   225,   225,   230,   225,   231,   232,   225,
     233,   233,   234,   234,   235,   235,   237,   236,   238,   238,
     238,   238,   238,   238,   238,   238,   238,   239,   240,   240,
     240,   240,   242,   241,   243,   243,   244,   245,   245,   247,
     246,   246,   248,   248,   249,   249,   250,   250,   250,   251,
     251,   251,   252,   251,   254,   253,   255,   253,   256,   257,
     256,   258,   258,   258,   258,   259,   259,   260,   260,   260,
     260,   260,   260,   261,   261,   261,   261,   261,   261,   261,
     261,   262,   261,   263,   261,   264,   261,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   265,   265,   265,
     265,   265,   266,   266,   266,   266,   266,   266,   266,   266,
     266,   266,   266,   266,   266,   266,   266,   267,   266,   268,
     266,   266,   269,   269,   269,   269,   269,   269,   269,   270,
     270,   271,   271,   272,   272,   272,   272,   273,   273,   273,
     274,   275,   274,   276,   274,   274,   277,   274,   278,   279,
     274,   280,   280,   280,   280,   280,   280,   282,   281,   283,
     284,   285,   281,   286,   281,   287,   281,   288,   289,   281,
     290,   281,   291,   292,   293,   281,   281,   294,   281,   295,
     281,   296,   281,   297,   281,   298,   281,   299,   281,   300,
     281,   301,   281,   302,   281,   303,   281,   281,   281,   281,
     281,   304,   304,   304,   304,   304,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   305,   305,   305,   305,
     305,   305,   305,   305,   305,   305,   306,   307,   307,   308,
     308,   309,   309,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   311,   312,
     312,   312,   313
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
       1,     2,     3,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     6,     7,     6,     3,     0,
       6,     5,     2,     3,     3,     1,     4,     3,     4,     8,
       8,     9,     9,     2,     2,     2,     2,     2,     3,     3,
       0,     5,     1,     0,     4,     2,     2,     4,     4,     2,
       3,     4,     3,     2,     3,     2,     3,     1,     2,     3,
       3,     3,     1,     2,     3,     0,     0,     8,     0,     3,
       0,     0,     7,     0,     3,     0,     2,     2,     1,     0,
       5,     0,     0,     9,     0,     3,     0,     5,     0,     3,
       0,     3,     4,     1,     0,     5,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     3,     0,     1,     1,
       3,     0,     0,     2,     1,     1,     0,     4,     0,     0,
       5,     0,     0,     5,     1,     0,     5,     0,     0,     9,
       0,     1,     1,     2,     0,     1,     0,     3,     3,     3,
       2,     3,     5,     5,     6,     8,     8,     3,     1,     3,
       2,     4,     0,     3,     0,     1,     2,     0,     1,     0,
       3,     4,     1,     2,     1,     2,     1,     2,     2,     1,
       1,     1,     0,     3,     0,     5,     0,     5,     1,     0,
       4,     1,     1,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     0,     4,     0,     4,     0,     4,     1,     1,     1,
       1,     1,     1,     1,     2,     2,     2,     2,     2,     2,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     3,     0,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     3,     1,     2,     2,     2,     1,     1,     1,
       1,     0,     3,     0,     3,     1,     0,     4,     0,     0,
       9,     1,     1,     1,     1,     1,     1,     0,     7,     0,
       0,     0,     9,     0,     5,     0,     5,     0,     0,    10,
       0,     7,     0,     0,     0,     9,     6,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     9,     0,     9,     4,     4,     6,
       7,     2,     2,     3,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint16 yydefact[] =
{
       2,     3,     1,     0,     0,     0,     0,   312,   343,   323,
     344,   345,   347,   348,   324,   322,   342,   326,   325,   310,
     311,    85,     0,    18,   196,     0,   339,   337,     0,     0,
     272,     0,     0,   469,   313,   197,     0,     0,     0,   308,
     309,   346,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   466,    42,     4,    16,     8,     7,    11,
      10,     9,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,   162,     0,     0,     5,     0,   262,   264,   266,
     270,   271,     0,   269,   307,   341,    37,    38,   316,   202,
     201,   317,   203,   204,   467,    47,   314,   315,    43,     0,
       0,   312,     0,     0,   313,     0,     0,   467,   276,   320,
     321,     0,    82,   318,   319,   467,     0,   197,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   140,     0,     0,
       0,     0,   134,   133,   137,   136,   135,     0,   287,   290,
     289,   288,   291,   292,   119,     0,   467,   274,   198,     0,
       0,     0,     0,     0,     0,     6,   240,     0,     0,   379,
     383,   385,     0,     0,   392,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    17,     0,     0,     0,   205,   467,    36,    27,    31,
      24,    19,   267,   263,   200,   202,   201,     0,   199,     0,
       0,   203,   204,     0,   163,   168,   149,   173,   257,     0,
       0,   252,     0,   295,   294,   293,   265,   268,     0,     0,
      39,     0,     0,   349,     0,   349,   316,   317,   314,   315,
     320,   321,   318,   319,   164,     0,     0,     0,    88,     0,
       0,   467,   165,   340,   338,    28,    32,    25,    20,     0,
     139,     0,   281,   282,   283,   273,   284,     0,     0,   138,
     200,   199,     0,     0,   257,     0,     0,   500,   482,   511,
     513,   512,   504,   489,   495,   491,   492,   493,   494,   485,
     484,   505,   506,   496,   473,   497,   498,   499,   501,   503,
     483,   507,   477,   514,   515,   490,   502,   516,   509,   508,
     440,   441,   467,   467,   442,   443,   444,   445,   446,   447,
     453,   454,   448,   449,   450,   451,   452,   455,   456,   457,
     458,   459,   460,   461,   462,   463,   464,   465,   510,   481,
     486,   487,   118,   467,   467,   434,   435,   479,   433,   426,
     429,   430,   432,   427,   428,   439,   436,   437,   438,   467,
     431,   480,   488,   478,   517,   470,   474,   475,   476,     0,
       0,   241,     2,     0,     0,    29,    33,    26,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    22,     0,   440,   441,     0,     0,
     170,   425,   232,     0,     0,     0,   161,   150,     0,   175,
     175,   259,   179,   181,   469,   256,   258,   239,   238,     0,
     234,   153,   300,   299,   298,   297,   296,   286,   281,   282,
       0,   160,   152,   184,     0,   285,   471,   469,   468,   472,
     278,     0,     0,     0,     0,     0,    40,     0,     0,    89,
      91,    88,   469,     0,   212,   230,     0,   142,   230,   467,
     467,     0,     0,   128,     2,     0,     0,     0,     0,     0,
      41,     0,     3,    30,   147,   377,     0,     0,     0,   387,
     390,     0,     0,   397,   401,   405,   409,   399,   403,   407,
     411,   413,   415,   417,   418,     0,    35,    23,   206,     0,
       0,   421,   422,     0,     0,   233,     0,   154,   178,     0,
       0,   169,   174,   257,   212,     0,     0,   247,   248,     0,
     236,   253,   235,     0,     0,     0,   151,   193,     0,   188,
     186,     0,   279,    49,     0,     0,     0,   353,   350,   351,
      51,    45,    51,   277,    86,    88,     0,     0,     0,   469,
       0,     0,   231,   146,   141,   143,   145,     0,     0,     0,
       0,     3,   520,   521,   519,   518,   522,   275,   121,     0,
     380,   384,   386,     0,     0,   393,   312,   310,   311,   313,
     308,   309,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   423,   424,   171,     0,   243,   207,
     467,   242,   177,   176,   260,     0,     0,   257,     0,   250,
       0,   306,   304,   302,   194,     0,   185,   212,   115,     0,
     349,   356,   354,   355,     0,    52,   349,    52,   469,    90,
     200,    97,    98,    99,   199,     0,   104,   105,   106,   100,
      93,    92,     0,    94,    96,    95,    83,   117,     0,   166,
     224,   214,   213,   215,   221,     0,     0,     0,   207,   207,
     120,     0,     0,   388,     0,     0,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   419,     0,   212,
     244,     0,   208,   209,     0,   180,     0,   261,   249,     0,
     375,   365,   371,   372,   373,   374,   376,   366,   363,   361,
     237,   360,   212,   190,     0,     0,   280,     0,   352,    48,
       0,     0,    44,     0,     0,   107,   108,   109,   110,   111,
     112,   113,   114,     0,   101,   469,   116,   175,   216,   227,
     225,   257,     0,   144,     0,     0,     0,     0,   378,   381,
       0,   391,   394,   398,   402,   406,   410,   400,   404,   408,
     412,     0,     0,   420,     0,     0,     0,     0,   182,   251,
     368,     0,     0,     0,     0,     0,   189,   467,   187,    51,
       0,     0,   357,   358,   359,     0,   312,   310,   311,    67,
       0,     0,     0,   313,     0,   308,   309,     0,    81,     0,
      53,    58,    57,    61,    60,    59,    62,    66,    64,    63,
       0,     0,     0,     0,   157,    55,     0,     0,    80,    51,
      87,   103,   102,     0,   167,     0,   254,   254,   219,   222,
     130,   129,     0,     0,     0,   469,     0,     0,     0,   172,
     246,   210,   245,   212,     0,     0,   375,   364,   362,   195,
     190,     0,    52,     0,     0,     0,     0,     0,    65,     0,
       0,     0,     0,     0,    56,     0,     0,   467,   155,     0,
     122,     0,     0,    78,    73,    68,   158,    54,    52,    84,
     217,   255,     0,     0,   234,   234,   131,   132,   382,     0,
     395,   414,   416,     0,     0,   367,   191,   192,    50,   125,
     467,   469,   124,   123,   156,   159,    74,    69,    75,    70,
       0,     0,     0,     0,     0,     0,    76,    71,    46,     0,
     226,   220,   223,   389,   183,     0,     0,     0,     0,   148,
       0,    77,    72,   228,   369,     0,   127,    79,   207,     0,
     126,     0,     0,   229,   370
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    75,    76,   245,   646,   243,   640,   645,
     730,   810,    77,   259,   745,    78,   131,   648,   468,   469,
     659,   660,   661,   662,   743,    79,    80,    81,    82,    83,
     286,    84,   817,   818,   912,    85,   475,   271,   476,   675,
     477,    87,   821,    88,    89,   223,   822,    90,    91,    92,
     474,   747,   224,   429,   225,   523,   699,   226,   430,   531,
     227,   534,   535,   853,   824,   549,   453,   637,   636,   786,
     723,   546,   547,   722,    93,    94,   269,   207,   701,   702,
     570,   571,   672,   835,   703,   751,   894,   752,   895,   837,
     836,   948,   573,   423,   541,   542,   630,    95,   229,   537,
     230,   440,   892,   231,   435,   436,   533,   871,    97,    98,
      99,   148,   100,   380,   257,   461,   639,   455,   101,   126,
     424,   545,   544,   543,   103,   104,   140,   139,   105,   463,
     558,   559,   827,   720,   783,   782,   781,   854,   949,   721,
     106,   589,   391,   682,   844,   392,   393,   593,   760,   594,
     396,   685,   846,   603,   607,   604,   608,   605,   609,   606,
     610,   611,   612,   420,   373,   374,   241,   165,   458,   459,
     376,   377,   378
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -736
static const yytype_int16 yypact[] =
{
    -736,    63,  -736,  5211,    98,   487,  6041,   185,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,    -5,
      59,   578,   197,  -736,  -736,  5787,  -736,  -736,  5511,   -58,
    -736,  5879,   605,  -736,   207,    50,  5327,   -36,   -25,    97,
     145,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,    10,    38,    66,    82,    89,    93,   110,   112,
     123,   125,   136,   141,   159,   167,   172,   174,   192,   208,
     212,   221,   227,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  5419,   177,   177,   177,
     177,   177,  -736,  6133,  6041,  -736,   472,  -736,    12,   144,
     135,  -736,   146,  -736,  -736,  -736,  -736,  -736,   114,  -736,
    -736,   216,  -736,  -736,  -736,   213,   114,   216,   224,   253,
     268,   -33,   287,   296,    -3,   316,   273,  -736,  -736,   237,
     241,   242,  -736,   237,   241,  -736,   243,   326,   247,   390,
     390,   177,   177,   177,   177,   462,   300,   258,   618,    98,
     487,   265,  -736,  -736,  -736,  -736,  -736,   555,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  3286,  -736,  -736,  -736,   266,
    5104,   177,   177,   177,   177,  -736,  -736,  5787,   643,  -736,
    -736,  -736,   643,   643,  -736,   643,   643,   643,   643,   643,
     643,   643,   643,   643,   643,   643,   643,   643,   643,   656,
    5511,  -736,   177,   177,   475,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,   305,   309,   310,  6211,   317,   219,
     643,   318,   319,   462,  -736,  -736,  -736,  -736,    30,   283,
     -20,  -736,   322,    25,   181,  -736,  -736,  -736,   618,    35,
    -736,   940,  6041,   279,  6041,   279,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,   618,  1078,  6041,   643,   290,
    1216,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,    49,
    -736,  5914,   -33,    -3,   135,  -736,  -736,   293,   294,  -736,
    -736,  -736,   219,   219,    33,   298,   299,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  1354,
    6041,  -736,  -736,   177,   643,  -736,  -736,  -736,  -736,   297,
     308,   643,   643,   643,   315,   320,   643,   323,   327,   328,
     329,   335,   336,   337,   338,   342,   344,   347,   302,   303,
     356,   177,   177,  -736,  -736,  1492,   289,   306,   332,   345,
    -736,  -736,  -736,   370,   643,   371,  -736,  -736,   422,    34,
      34,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,   219,
     377,  -736,    40,    83,  -736,   122,  -736,  -736,   166,   209,
     643,  -736,  -736,  -736,   386,  -736,  -736,  -736,  -736,  -736,
     383,   391,   460,   401,   399,   403,  -736,   406,   410,   411,
     409,   643,  -736,  1630,   419,   643,   423,   420,   643,  -736,
    -736,   433,   436,  -736,  -736,  1768,  1906,  2044,  2182,  2320,
    -736,   435,   439,  -736,  -736,  -736,   437,   442,   448,  -736,
    -736,   446,  6168,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,   643,  -736,  -736,  -736,   438,
     440,  -736,  -736,   454,   163,  -736,   456,  -736,  -736,   577,
     579,  -736,  -736,    33,   419,  6041,  3424,  -736,   451,   643,
    -736,  -736,  -736,    12,    12,    12,  -736,  -736,   470,   473,
    -736,  3562,  -736,  -736,   618,   618,   618,  -736,  -736,   465,
    -736,  -736,  -736,  -736,  -736,   643,   466,   478,  3700,  -736,
     477,  5603,  -736,  -736,  -736,  -736,  -736,  2458,  2596,   483,
     492,   484,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  6041,
    -736,  -736,  -736,  6168,  6168,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,   498,  6168,  6168,  6168,  6168,  6168,  6168,  6168,
    6168,  6168,  6168,    84,  -736,  -736,  -736,   505,  -736,  6006,
    -736,  -736,  -736,  -736,  -736,   506,   501,    33,   219,   502,
     366,  -736,  -736,  -736,  -736,   643,  -736,   419,  -736,  6041,
     279,  -736,  -736,  -736,   460,   508,   279,   512,  -736,  -736,
     -33,  -736,  -736,  -736,    -3,   466,  -736,  -736,  -736,   627,
    -736,  -736,   466,  -736,   135,  -736,  -736,  -736,  3838,  -736,
    -736,  -736,  -736,   509,   269,  5914,   219,   219,  6006,  6006,
    -736,   519,  6041,  -736,   520,  6168,  -736,   521,   522,   523,
     526,   527,   530,   533,   534,   529,   532,  -736,   539,   419,
    -736,   546,  -736,   542,  2734,  -736,   552,  -736,  -736,   219,
     551,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,   419,   549,   560,   561,  -736,   559,  -736,  -736,
    4528,   564,  -736,  3976,   571,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,   466,  -736,  -736,  -736,    34,  -736,  -736,
    -736,    33,   643,  -736,   568,   580,   584,   585,  -736,  -736,
     573,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,   686,   695,  -736,   587,   590,  6006,   591,  -736,  -736,
    -736,   366,   681,   681,   594,   643,  -736,  -736,  -736,  -736,
      98,   487,  -736,  -736,  -736,  5012,   166,     3,    20,  -736,
    4736,  4828,  5695,   209,   600,    28,    29,   601,  -736,   643,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    4644,   177,   177,   177,  -736,  -736,   525,   596,  -736,  -736,
    -736,  -736,  -736,  4114,  -736,  5603,   643,   643,  -736,  -736,
    -736,  -736,   604,   606,   603,  -736,   608,   612,   613,  -736,
    -736,  -736,  -736,   419,  6041,   614,  -736,  -736,  -736,  -736,
     549,  2872,   615,   195,   195,   643,   475,   656,  -736,   177,
     177,   475,   177,   177,  -736,   566,  4920,  -736,  -736,  4828,
    -736,   177,   177,  -736,  -736,  -736,  -736,  -736,   619,  -736,
    -736,  -736,   616,   620,   377,   377,  -736,  -736,  -736,  4252,
    -736,  -736,  -736,   622,   621,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    5012,   626,   643,  3010,   177,   177,  -736,  -736,  -736,   628,
    -736,  -736,  -736,  -736,  -736,   629,  3148,  4390,   643,  -736,
     631,  -736,  -736,  -736,  -736,   634,  -736,  -736,  6006,   681,
    -736,   644,   645,  -736,  -736
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -736,  -347,  -736,  -736,   668,  -736,  -736,  -736,  -736,  -535,
    -736,  -736,   -19,  -736,  -736,   -18,  -736,  -736,  -411,  -736,
    -736,  -736,  -591,  -736,  -736,   -14,   -13,   -12,    36,  -736,
    -736,  -736,  -736,  -725,   -97,    39,     0,  -736,    96,  -736,
    -736,  -736,  -736,    41,    51,  -736,  -491,    57,   -27,   536,
    -736,  -736,  -115,  -736,  -736,  -736,  -736,  -209,  -736,  -399,
    -736,  -736,  -736,  -736,   537,  -736,  -736,  -736,  -736,   -88,
      -8,  -735,  -736,  -736,   679,  -736,     1,   -39,  -641,     4,
    -492,  -736,   -56,  -736,  -543,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,   307,  -229,  -573,  -736,  -736,   -34,  -736,  -588,
    -403,  -736,   -50,  -153,  -501,  -736,  -736,     5,    -6,  -251,
     701,  -736,  -127,  -736,  -736,  -218,  -736,  -119,  -124,    64,
     -87,  -736,  -736,  -736,  -336,  -118,  -736,  -736,   217,  -202,
     151,  -736,  -736,    15,  -736,  -736,  -736,  -736,  -736,  -727,
      67,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,  -736,
    -736,  -736,  -736,  -736,   581,   796,  -120,  -400,  -736,  -149,
    -736,  -736,  -736
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -306
static const yytype_int16 yytable[] =
{
     125,   144,   175,    86,   285,   115,   118,   256,    96,   174,
     254,   236,   152,   153,   427,   260,   375,   154,   155,   156,
     478,   274,   132,   136,   276,   157,   464,   647,   673,   275,
     138,   532,   624,   145,   536,   492,   538,   756,   757,   467,
     708,    96,   625,   465,   448,   233,   379,   372,  -287,   208,
     209,   210,   211,   481,   482,   857,   858,   551,   442,   203,
     567,   215,   216,     2,   734,   147,   528,   102,   529,   141,
      25,   744,   568,  -305,   878,   868,  -290,   171,  -288,   142,
     431,   449,   176,   431,  -290,   143,   415,   172,   213,   168,
     128,   204,   146,   173,   177,   880,   164,   228,   438,   169,
     146,  -289,   265,   266,   267,   268,   439,   108,   426,  -291,
    -292,   274,   274,  -290,   276,   276,  -303,   221,   222,   447,
     167,   779,  -202,   372,   109,   110,   707,   202,   274,   178,
     914,   276,   385,   386,   387,   388,   629,   581,   372,  -201,
    -289,   473,   372,   234,   111,   725,   235,  -203,  -204,   432,
     277,   278,   832,   433,   649,  -301,   443,   179,   284,   444,
     232,   530,   491,   413,   414,   450,   602,   434,   432,   668,
     434,  -305,   433,   412,  -305,   384,    24,  -289,  -291,   390,
     112,   113,   384,   394,   395,   180,   397,   398,   399,   400,
     401,   402,   403,   404,   405,   406,   407,   408,   409,   410,
     115,   181,   485,   486,   697,   204,   133,   774,   182,   232,
     698,   383,   183,   617,  -303,  -291,   238,  -303,   389,   114,
     422,   425,   952,   109,   110,   538,  -292,   239,   280,   184,
     784,   185,  -200,   487,   488,  -200,   460,  -200,   460,  -200,
     454,   411,   186,   134,   187,   109,   110,  -287,   733,   489,
     838,   460,   233,  -301,   862,   188,  -301,   683,   684,   470,
     189,   372,   246,  -292,   240,   281,  -287,   687,   688,   689,
     690,   691,   692,   693,   694,   695,   696,   248,   190,   112,
     113,   618,   619,   422,   422,  -200,   191,   428,  -288,   128,
    -288,   192,   673,   193,   888,   205,   250,   372,   206,   247,
     620,   112,   113,  -287,   127,   252,   538,   951,   128,   869,
     872,   194,   445,   909,   249,   446,   910,   626,   135,  -218,
     911,   931,   932,   749,   750,  -288,   166,   195,  -199,   881,
     167,   196,   167,   251,  -199,   274,   242,  -199,   276,  -199,
     197,  -199,   253,   557,   493,   833,   198,   244,   834,   762,
     234,   217,   539,   235,   255,   372,   263,   264,  -200,   577,
     578,   903,  -199,   258,   261,   168,   262,   372,   372,   372,
     372,   372,   516,   517,   460,   710,   711,   712,   713,   714,
     715,   239,   270,   279,   381,   921,  -287,   375,   924,  -218,
    -290,  -289,   496,   497,   498,  -218,  -218,   501,  -288,  -291,
    -292,   437,   375,   441,   462,     8,  -218,    10,    11,    12,
      13,   471,   716,    16,   479,   480,   483,   494,   372,   375,
     484,   726,   513,   514,   478,   525,   519,   274,   274,   274,
     276,   276,   276,   372,   495,   641,   642,   643,   727,   664,
     284,   499,   665,   520,   731,   899,   500,   754,   755,   502,
     372,   548,   521,   503,   504,   505,   631,   632,   633,   372,
     372,   506,   507,   508,   509,   554,   555,   556,   510,   272,
     511,   214,   470,   512,    41,   650,   572,   651,   652,   572,
     653,   214,   515,   522,   280,   717,   159,   160,   215,   216,
     524,   526,   215,   216,   718,   719,   116,   217,   215,   216,
     704,   109,   110,   527,   540,   550,   273,   217,   218,   552,
     217,   937,   654,   109,   110,   553,   613,   274,   218,   375,
     276,   281,   560,   561,   562,   557,   219,   220,   664,   460,
     563,   665,   564,   117,   280,   664,   566,   565,   665,  -211,
     284,   539,   162,   163,   221,   222,   575,   574,   221,   222,
     372,   109,   110,   579,   221,   222,   580,   112,   113,   587,
     217,   588,   591,   590,   280,   674,   470,   663,   592,   112,
     113,   281,   595,   616,   621,   280,   614,   628,   615,   219,
     220,   109,   110,   681,   375,   655,   372,   129,   622,   634,
     623,   644,   109,   110,   656,   657,   658,   669,   635,   839,
     666,   281,   678,   904,   109,   110,   680,   112,   113,   282,
     283,   679,   281,   674,   158,   372,   664,   886,   686,   665,
     219,   220,   539,   700,   130,   706,   705,   272,   709,   284,
     729,   159,   160,   460,   732,   748,   724,   112,   113,   758,
     761,   763,   764,   765,   159,   160,   766,   767,   112,   113,
     768,   161,   280,   769,   770,   771,   663,   915,   772,   773,
     112,   113,   886,   663,   273,   108,   775,   861,   776,   109,
     110,   778,   674,   674,   780,   785,   759,   422,   422,   787,
     789,   788,   109,   110,   375,   829,   840,   162,   163,   281,
     856,   831,   712,   713,   714,   715,   825,   847,   841,   845,
     162,   163,   111,   823,   842,   843,   848,   849,   850,   852,
     284,   811,   812,   886,   859,   372,   813,   814,   815,   876,
     877,   887,   896,   898,   897,   112,   113,   716,   900,   915,
     820,   454,   901,   902,   905,   826,   929,   908,   112,   113,
     930,   928,   934,   372,   663,   935,   939,   943,   944,   947,
     375,   254,   950,   284,   201,   735,   736,   923,   737,   738,
     739,   740,   741,   742,   953,   954,   816,   913,   874,   819,
     674,   753,   906,   870,   873,   451,   452,   860,   237,   890,
     851,   372,   883,   884,   885,   576,   724,   893,   375,   866,
     936,   863,   864,   882,   212,   728,   855,   828,   421,   107,
       0,   454,   454,     0,     0,   372,     0,   875,     0,     0,
     548,     0,     0,     0,     0,     0,     0,     0,   372,   372,
       0,   454,     0,     0,     0,     0,     0,   228,     0,   674,
     916,   917,     0,   918,   919,     0,     0,   891,   891,     0,
       0,     0,   926,   927,     0,     0,     0,     0,     0,     0,
       0,     0,   925,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   548,     0,   863,     0,
       0,     0,     0,     0,     0,     0,   284,   454,     0,     0,
     454,   922,     0,     0,     0,   941,   942,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   938,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   674,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,    26,    27,     0,   309,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   456,   353,
       0,   354,   457,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    26,    27,     0,   309,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   456,   353,   466,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,    26,    27,     0,   309,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   456,   353,     0,   354,   472,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      26,    27,     0,   309,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   456,   353,   490,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,     0,   370,   371,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    26,    27,
       0,   309,     0,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     456,   353,     0,   354,   518,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,    26,    27,     0,   309,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   456,   353,
       0,   354,   569,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    26,    27,     0,   309,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   456,   353,   582,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,    26,    27,     0,   309,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   456,   353,   583,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      26,    27,     0,   309,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   456,   353,   584,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,     0,   370,   371,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    26,    27,
       0,   309,     0,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     456,   353,     0,   354,   585,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,    26,    27,     0,   309,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   456,   353,
       0,   354,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,   586,   370,
     371,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    26,    27,     0,   309,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   456,   353,     0,   354,
     676,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,    26,    27,     0,   309,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   456,   353,     0,   354,   677,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      26,    27,     0,   309,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   456,   353,     0,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   777,   370,   371,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    26,    27,
       0,   309,     0,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     456,   353,   907,   354,     0,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,    26,    27,     0,   309,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   456,   353,
     940,   354,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    26,    27,     0,   309,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   456,   353,     0,   354,
     945,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,    26,    27,     0,   309,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   352,   353,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      26,    27,     0,   309,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,   353,     0,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,   627,   370,   371,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    26,    27,
       0,   309,     0,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     638,   353,     0,   354,     0,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,    26,    27,     0,   309,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   667,   353,
       0,   354,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   287,   288,   289,   290,   291,   292,   293,   294,   295,
     296,   297,   298,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    26,    27,     0,   309,     0,   310,
     311,   312,   313,   314,   315,   316,   317,   318,   319,     0,
     320,   321,   322,   323,   324,   325,   326,   327,   328,   329,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   746,   353,     0,   354,
       0,   355,   356,   357,   358,   359,   360,   361,   362,   363,
     364,   365,   366,   367,   368,   369,     0,   370,   371,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   296,   297,
     298,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   299,   300,   301,   302,   303,   304,   305,   306,
     307,   308,    26,    27,     0,   309,     0,   310,   311,   312,
     313,   314,   315,   316,   317,   318,   319,     0,   320,   321,
     322,   323,   324,   325,   326,   327,   328,   329,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   830,   353,     0,   354,     0,   355,
     356,   357,   358,   359,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   370,   371,   287,   288,   289,
     290,   291,   292,   293,   294,   295,   296,   297,   298,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     299,   300,   301,   302,   303,   304,   305,   306,   307,   308,
      26,    27,     0,   309,     0,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,     0,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   329,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   889,   353,     0,   354,     0,   355,   356,   357,
     358,   359,   360,   361,   362,   363,   364,   365,   366,   367,
     368,   369,     0,   370,   371,   287,   288,   289,   290,   291,
     292,   293,   294,   295,   296,   297,   298,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   299,   300,
     301,   302,   303,   304,   305,   306,   307,   308,    26,    27,
       0,   309,     0,   310,   311,   312,   313,   314,   315,   316,
     317,   318,   319,     0,   320,   321,   322,   323,   324,   325,
     326,   327,   328,   329,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,   353,   933,   354,     0,   355,   356,   357,   358,   359,
     360,   361,   362,   363,   364,   365,   366,   367,   368,   369,
       0,   370,   371,   287,   288,   289,   290,   291,   292,   293,
     294,   295,   296,   297,   298,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   299,   300,   301,   302,
     303,   304,   305,   306,   307,   308,    26,    27,     0,   309,
       0,   310,   311,   312,   313,   314,   315,   316,   317,   318,
     319,     0,   320,   321,   322,   323,   324,   325,   326,   327,
     328,   329,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   946,   353,
       0,   354,     0,   355,   356,   357,   358,   359,   360,   361,
     362,   363,   364,   365,   366,   367,   368,   369,     0,   370,
     371,   790,   791,   792,   793,   794,   795,   796,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   797,   798,    21,    22,   799,     0,
      24,     0,     0,    25,    26,    27,   800,   801,   802,    29,
      30,    31,     0,    33,   803,    35,     0,    37,     0,   804,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     805,   806,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,   807,   808,   867,   791,     0,
       0,     0,   795,   796,     0,     0,     0,     0,   809,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     797,   798,   122,   123,     0,     0,    24,     0,     0,    25,
      26,    27,     0,   879,     0,     0,    30,     0,     0,     0,
     803,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   805,   806,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   867,
     791,     0,     0,     0,   795,   796,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   797,   798,   122,   123,     0,     0,    24,     0,
       0,    25,    26,    27,   809,     0,     0,     0,    30,     0,
       0,     0,   803,   137,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   805,   806,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   119,   120,     0,     0,     0,   795,   796,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   797,   798,   122,   123,     0,     0,
      24,     0,     0,    25,    26,    27,   809,     0,     0,     0,
      30,     0,     0,     0,   803,   137,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     805,   806,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   119,   120,     0,     0,     0,   920,   796,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   797,   798,   122,   123,
       0,     0,    24,     0,     0,     0,    26,    27,   809,     0,
       0,     0,    30,     0,     0,     0,   803,   137,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   805,   806,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   119,   120,     0,     0,     0,
       0,   121,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     122,   123,     0,     0,    24,     0,     0,     0,    26,    27,
     809,     0,     0,     0,    30,     0,     0,     0,   124,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   119,   120,     0,
       0,     0,     0,   121,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   122,   123,     0,     0,    24,     0,     0,     0,
      26,    27,   865,     0,     0,     0,    30,     0,     0,     0,
     124,   137,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     6,
       7,     0,     0,     0,     0,   382,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,     0,    24,     0,     0,    25,    26,    27,     0,
      28,     0,    29,    30,    31,    32,    33,    34,    35,    36,
      37,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,     0,    74,
     119,   120,     0,     0,     0,     6,   121,   170,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   122,   123,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   124,    35,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   199,     5,     0,     0,     0,     6,   121,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   122,   123,     0,
       0,    24,     0,     0,    25,    26,    27,     0,   200,     0,
       0,    30,     0,     0,     0,   124,   137,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   119,   120,     0,     0,     0,     6,
     121,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   122,
     123,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   124,   137,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   119,   120,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   122,   123,     0,     0,    24,     0,     0,     0,    26,
      27,     0,     0,     0,     0,    30,     0,     0,     0,   124,
       0,     0,   670,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   671,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   119,   120,
       0,     0,     0,     0,   121,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   122,   123,     0,     0,    24,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   124,    35,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     119,   120,     0,     0,     0,     0,   121,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   122,   123,     0,     0,    24,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   124,   137,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   149,   150,     0,     0,     0,     0,   121,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,    24,     0,     0,     0,    26,    27,   119,   120,     0,
       0,    30,     0,   121,     0,   124,     0,     0,   151,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   122,   123,     0,     0,    24,     0,     0,     0,
      26,    27,     0,     0,     0,    29,    30,     0,     0,     0,
     124,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   119,
     120,     0,     0,     0,     0,   121,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   122,   123,     0,     0,    24,     0,
       0,     0,    26,    27,   119,   120,     0,     0,    30,     0,
     121,     0,   124,     0,     0,   670,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   122,
     123,     0,     0,    24,     0,     0,     0,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   124,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   119,   120,     0,     0,
       0,     0,   121,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   122,   123,     0,     0,     0,     0,     0,     0,    26,
      27,   119,   120,     0,     0,    30,     0,   596,     0,   124,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   597,   598,   122,   123,     0,     0,
       0,     0,     0,     0,    26,    27,     0,     0,     0,     0,
       0,     0,     0,     0,   599,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     600,   601,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   416,   417,     0,     0,   324,   325,   326,
     327,   328,   329,   330,   331,   332,   333,   334,   335,   336,
     337,   338,   339,   340,   341,   342,   343,   344,   345,   346,
     347,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     418,     0,     0,     0,   355,   356,     0,   358,   359,   360,
     361,   362,   363,   364,   365,   366,   367,   368,   419,     0,
     370
};

static const yytype_int16 yycheck[] =
{
       6,    28,    36,     3,   157,     4,     5,   127,     3,    36,
     125,    98,    31,    31,   223,   135,   165,    31,    31,    31,
     271,   148,    21,    22,   148,    31,   244,   562,   571,   148,
      25,   430,   533,    28,   434,   382,   439,   678,   679,   257,
     628,    36,   534,   245,     9,    33,   166,   165,    81,    88,
      89,    90,    91,   282,   283,   782,   783,   457,    33,    86,
     471,    26,    27,     0,   655,   123,    32,     3,    34,    28,
      35,   662,   472,    33,   809,   800,    81,    36,    81,    28,
      50,    46,   118,    50,    81,    28,   206,    36,    94,    39,
     123,    86,    28,    36,   119,   820,    32,    96,   118,    49,
      36,    81,   141,   142,   143,   144,   126,     9,   223,    81,
      81,   238,   239,   118,   238,   239,    33,    82,    83,   238,
     123,   709,   119,   241,    26,    27,   627,    86,   255,   119,
     865,   255,   171,   172,   173,   174,   539,   484,   256,   119,
      81,   261,   260,   131,    46,   637,   134,   119,   119,   119,
     149,   150,   743,   123,   565,    33,   131,   119,   157,   134,
      96,   127,   380,   202,   203,   130,   502,   137,   119,   569,
     137,   131,   123,   200,   134,   170,    32,   118,    81,   178,
      82,    83,   177,   182,   183,   119,   185,   186,   187,   188,
     189,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   119,   322,   323,   120,   200,     9,   699,   119,   145,
     126,   170,   119,    50,   131,   118,    81,   134,   177,   121,
     219,   220,   949,    26,    27,   628,    81,    81,     9,   119,
     722,   119,   118,   353,   354,   121,   242,   123,   244,   125,
     239,   200,   119,    46,   119,    26,    27,    81,   648,   369,
     751,   257,    33,   131,   789,   119,   134,   593,   594,   258,
     119,   379,     9,   118,   118,    46,    81,   603,   604,   605,
     606,   607,   608,   609,   610,   611,   612,     9,   119,    82,
      83,   118,   119,   282,   283,   119,   119,   223,    81,   123,
      81,   119,   835,   119,   829,   118,     9,   415,   121,    46,
     137,    82,    83,   118,   119,     9,   709,   948,   123,   800,
     801,   119,   131,   118,    46,   134,   121,   535,   121,    50,
     125,   894,   895,    54,    55,   118,   119,   119,   119,   820,
     123,   119,   123,    46,   118,   462,   123,   121,   462,   123,
     119,   125,    46,   462,   383,   745,   119,   123,   747,   685,
     131,    35,   439,   134,    81,   473,   139,   140,   121,   479,
     480,   853,   121,   121,   121,    39,   119,   485,   486,   487,
     488,   489,   411,   412,   380,     9,    10,    11,    12,    13,
      14,    81,   124,   118,   118,   876,    81,   536,   879,   120,
      81,    81,   391,   392,   393,   126,   127,   396,    81,    81,
      81,   118,   551,    81,   125,    15,   137,    17,    18,    19,
      20,   121,    46,    23,   121,   121,   118,   120,   536,   568,
     121,   639,   120,   120,   675,   424,   137,   554,   555,   556,
     554,   555,   556,   551,   126,   554,   555,   556,   640,   566,
     439,   126,   566,   137,   646,   845,   126,   676,   677,   126,
     568,   450,   120,   126,   126,   126,   543,   544,   545,   577,
     578,   126,   126,   126,   126,     5,     6,     7,   126,     9,
     126,     9,   471,   126,    84,     9,   475,    11,    12,   478,
      14,     9,   126,   138,     9,   119,    26,    27,    26,    27,
     120,   120,    26,    27,   128,   129,     9,    35,    26,    27,
     620,    26,    27,    81,   127,   119,    46,    35,    46,   126,
      35,   911,    46,    26,    27,   124,   515,   644,    46,   668,
     644,    46,   121,   124,   121,   644,    54,    55,   655,   535,
     124,   655,   122,    46,     9,   662,   127,   126,   662,   120,
     539,   628,    82,    83,    82,    83,   126,   124,    82,    83,
     668,    26,    27,   120,    82,    83,   120,    82,    83,   124,
      35,   122,   120,   126,     9,   571,   565,   566,   120,    82,
      83,    46,   126,   119,   118,     9,   138,   126,   138,    54,
      55,    26,    27,   589,   733,   119,   704,     9,    11,   119,
      11,   126,    26,    27,   128,   129,   130,   120,   125,   752,
     122,    46,   119,   854,    26,    27,   122,    82,    83,    54,
      55,   119,    46,   619,     9,   733,   743,   826,   120,   743,
      54,    55,   709,   118,    46,   124,   120,     9,   126,   628,
     122,    26,    27,   639,   122,   126,   635,    82,    83,   120,
     120,   120,   120,   120,    26,    27,   120,   120,    82,    83,
     120,    46,     9,   120,   120,   126,   655,   866,   126,   120,
      82,    83,   871,   662,    46,     9,   120,   787,   126,    26,
      27,   119,   678,   679,   123,   126,   682,   676,   677,   119,
     121,   120,    26,    27,   833,   121,   118,    82,    83,    46,
       9,   120,    11,    12,    13,    14,   730,    11,   118,   126,
      82,    83,    46,   730,   120,   120,    11,   120,   118,   118,
     709,   730,   730,   922,   120,   833,   730,   730,   730,   119,
     119,   125,   118,   120,   118,    82,    83,    46,   120,   938,
     730,   730,   120,   120,   120,   730,   120,   122,    82,    83,
     120,   122,   120,   861,   743,   124,   120,   119,   119,   118,
     899,   866,   118,   752,    86,   128,   129,   877,   131,   132,
     133,   134,   135,   136,   120,   120,   730,   864,   802,   730,
     776,   675,   860,   800,   801,   239,   239,   785,    99,   835,
     776,   899,   821,   822,   823,   478,   785,   837,   937,   795,
     910,   790,   791,   820,    93,   644,   781,   730,   217,     3,
      -1,   800,   801,    -1,    -1,   923,    -1,   802,    -1,    -1,
     809,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   936,   937,
      -1,   820,    -1,    -1,    -1,    -1,    -1,   826,    -1,   835,
     869,   870,    -1,   872,   873,    -1,    -1,   836,   837,    -1,
      -1,    -1,   881,   882,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   879,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   865,    -1,   867,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   875,   876,    -1,    -1,
     879,   876,    -1,    -1,    -1,   924,   925,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   920,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   948,     3,     4,     5,     6,     7,     8,     9,
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
      -1,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
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
      -1,   121,    -1,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
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
      -1,    -1,   116,    -1,   118,   119,    -1,   121,   122,   123,
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
     116,    -1,   118,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     3,     4,     5,     6,     7,
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
     116,    -1,    -1,   119,    -1,   121,    -1,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   138,   139,   140,     3,     4,     5,     6,     7,
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
      -1,   119,   120,   121,    -1,   123,   124,   125,   126,   127,
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
     140,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    -1,
      32,    -1,    -1,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    -1,    45,    46,    47,    -1,    49,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,    -1,   117,   118,     3,     4,    -1,
      -1,    -1,     8,     9,    -1,    -1,    -1,    -1,   130,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    35,
      36,    37,    -1,    39,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     3,
       4,    -1,    -1,    -1,     8,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    35,    36,    37,   130,    -1,    -1,    -1,    42,    -1,
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
      -1,    -1,    32,    -1,    -1,    -1,    36,    37,   130,    -1,
      -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,    94,     3,     4,    -1,    -1,    -1,
      -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,    25,    26,    27,
      28,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,
     130,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    93,    94,     3,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    37,   130,    -1,    -1,    -1,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,   121,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    -1,    32,    -1,    -1,    35,    36,    37,    -1,
      39,    -1,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    -1,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,    -1,   118,
       3,     4,    -1,    -1,    -1,     8,     9,    10,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    35,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     3,     4,    -1,    -1,    -1,     8,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    35,    36,    37,    -1,    39,    -1,
      -1,    42,    -1,    -1,    -1,    46,    47,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,    -1,    -1,    -1,     8,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    35,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    47,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    42,    -1,    -1,    -1,    46,
      -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    80,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     3,     4,
      -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,
      -1,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,    -1,
      -1,    46,    47,    -1,    49,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
       3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,
      -1,    -1,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    -1,    -1,    32,
      -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,
      -1,    -1,    -1,    46,    47,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,
      -1,    -1,    -1,    -1,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    -1,
      -1,    32,    -1,    -1,    -1,    36,    37,     3,     4,    -1,
      -1,    42,    -1,     9,    -1,    46,    -1,    -1,    49,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    -1,    -1,    32,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,     3,
       4,    -1,    -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,
      -1,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    37,     3,     4,    -1,    -1,    42,    -1,
       9,    -1,    46,    -1,    -1,    49,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,    -1,
      -1,    -1,    -1,    42,    -1,    -1,    -1,    46,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,     3,     4,    -1,    -1,
      -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,     3,     4,    -1,    -1,    42,    -1,     9,    -1,    46,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    46,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    52,    53,    -1,    -1,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     119,    -1,    -1,    -1,   123,   124,    -1,   126,   127,   128,
     129,   130,   131,   132,   133,   134,   135,   136,   137,    -1,
     139
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
     113,   114,   115,   116,   118,   144,   145,   153,   156,   166,
     167,   168,   169,   170,   172,   176,   177,   182,   184,   185,
     188,   189,   190,   215,   216,   238,   248,   249,   250,   251,
     253,   259,   260,   265,   266,   269,   281,   306,     9,    26,
      27,    46,    82,    83,   121,   217,     9,    46,   217,     3,
       4,     9,    28,    29,    46,   249,   260,   119,   123,     9,
      46,   157,   217,     9,    46,   121,   217,    47,   248,   268,
     267,   184,   185,   188,   189,   248,   260,   123,   252,     3,
       4,    49,   153,   156,   166,   167,   168,   249,     9,    26,
      27,    46,    82,    83,   260,   308,   119,   123,    39,    49,
      10,   184,   185,   188,   189,   238,   118,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,     3,
      39,   145,   184,   189,   248,   118,   121,   218,   218,   218,
     218,   218,   251,   249,     9,    26,    27,    35,    46,    54,
      55,    82,    83,   186,   193,   195,   198,   201,   217,   239,
     241,   244,   260,    33,   131,   134,   261,   215,    81,    81,
     118,   307,   123,   148,   123,   146,     9,    46,     9,    46,
       9,    46,     9,    46,   193,    81,   307,   255,   121,   154,
     307,   121,   119,   269,   269,   218,   218,   218,   218,   217,
     124,   178,     9,    46,   253,   258,   259,   217,   217,   118,
       9,    46,    54,    55,   217,   244,   171,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   118,   119,   121,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     139,   140,   266,   305,   306,   310,   311,   312,   313,   307,
     254,   118,   121,   184,   248,   218,   218,   218,   218,   184,
     217,   283,   286,   287,   217,   217,   291,   217,   217,   217,
     217,   217,   217,   217,   217,   217,   217,   217,   217,   217,
     217,   184,   189,   218,   218,   307,    52,    53,   119,   137,
     304,   305,   217,   234,   261,   217,   193,   198,   260,   194,
     199,    50,   119,   123,   137,   245,   246,   118,   118,   126,
     242,    81,    33,   131,   134,   131,   134,   258,     9,    46,
     130,   190,   205,   207,   217,   258,   118,   122,   309,   310,
     249,   256,   125,   270,   256,   270,   120,   256,   159,   160,
     217,   121,   122,   307,   191,   177,   179,   181,   250,   121,
     121,   234,   234,   118,   121,   307,   307,   307,   307,   307,
     120,   256,   142,   218,   120,   126,   217,   217,   217,   126,
     126,   217,   126,   126,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   120,   120,   126,   218,   218,   122,   137,
     137,   120,   138,   196,   120,   217,   120,    81,    32,    34,
     127,   200,   200,   247,   202,   203,   308,   240,   241,   261,
     127,   235,   236,   264,   263,   262,   212,   213,   217,   206,
     119,   308,   126,   124,     5,     6,     7,   258,   271,   272,
     121,   124,   121,   124,   122,   126,   127,   159,   308,   122,
     221,   222,   217,   233,   124,   126,   233,   307,   307,   120,
     120,   142,   120,   120,   120,   122,   138,   124,   122,   282,
     126,   120,   120,   288,   290,   126,     9,    26,    27,    46,
      82,    83,   265,   294,   296,   298,   300,   295,   297,   299,
     301,   302,   303,   217,   138,   138,   119,    50,   118,   119,
     137,   118,    11,    11,   245,   221,   256,   138,   126,   241,
     237,   261,   261,   261,   119,   125,   209,   208,   118,   257,
     149,   258,   258,   258,   126,   150,   147,   150,   158,   159,
       9,    11,    12,    14,    46,   119,   128,   129,   130,   161,
     162,   163,   164,   217,   253,   259,   122,   118,   308,   120,
      49,    80,   223,   225,   249,   180,   122,   122,   119,   119,
     122,   249,   284,   265,   265,   292,   120,   265,   265,   265,
     265,   265,   265,   265,   265,   265,   265,   120,   126,   197,
     118,   219,   220,   225,   307,   120,   124,   245,   240,   126,
       9,    10,    11,    12,    13,    14,    46,   119,   128,   129,
     274,   280,   214,   211,   217,   221,   256,   270,   271,   122,
     151,   270,   122,   308,   163,   128,   129,   131,   132,   133,
     134,   135,   136,   165,   163,   155,   118,   192,   126,    54,
      55,   226,   228,   179,   234,   234,   219,   219,   120,   249,
     289,   120,   265,   120,   120,   120,   120,   120,   120,   120,
     120,   126,   126,   120,   221,   120,   126,   138,   119,   240,
     123,   277,   276,   275,   221,   126,   210,   119,   120,   121,
       3,     4,     5,     6,     7,     8,     9,    26,    27,    30,
      38,    39,    40,    46,    51,    82,    83,   117,   118,   130,
     152,   153,   156,   166,   167,   168,   169,   173,   174,   176,
     177,   183,   187,   189,   205,   238,   248,   273,   281,   121,
     118,   120,   163,   308,   200,   224,   231,   230,   245,   244,
     118,   118,   120,   120,   285,   126,   293,    11,    11,   120,
     118,   220,   118,   204,   278,   274,     9,   280,   280,   120,
     211,   307,   150,   217,   217,   130,   249,     3,   174,   187,
     189,   248,   187,   189,   238,   248,   119,   119,   212,    39,
     174,   187,   189,   218,   218,   218,   198,   125,   150,   118,
     223,   217,   243,   243,   227,   229,   118,   118,   120,   308,
     120,   120,   120,   221,   250,   120,   210,   120,   122,   118,
     121,   125,   175,   175,   212,   198,   218,   218,   218,   218,
       8,   187,   248,   307,   187,   189,   218,   218,   122,   120,
     120,   235,   235,   120,   120,   124,   307,   308,   249,   120,
     120,   218,   218,   119,   119,   122,   118,   118,   232,   279,
     118,   219,   280,   120,   120
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
#line 642 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 659 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 660 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 661 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 662 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 663 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 664 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 665 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 666 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 667 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 668 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 669 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 670 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 671 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 672 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 673 "vtkParse.y"
    { reject_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 674 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 675 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 676 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 684 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 685 "vtkParse.y"
    { end_class(); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 686 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 687 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 688 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 689 "vtkParse.y"
    { end_class(); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 690 "vtkParse.y"
    { start_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 691 "vtkParse.y"
    { end_class(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 693 "vtkParse.y"
    { delSig(); clearTypeId(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 713 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 714 "vtkParse.y"
    { output_function(); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 715 "vtkParse.y"
    { output_function(); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 716 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 718 "vtkParse.y"
    { output_function(); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 719 "vtkParse.y"
    { output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 720 "vtkParse.y"
    { output_function(); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 721 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 732 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 733 "vtkParse.y"
    {end_enum();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 735 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 736 "vtkParse.y"
    {end_enum();}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 740 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 741 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 762 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 767 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 768 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 771 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 783 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 784 "vtkParse.y"
    { popNamespace(); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 811 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 812 "vtkParse.y"
    { postSig("template<"); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 813 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 816 "vtkParse.y"
    { postSig(", "); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 825 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 836 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 838 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 844 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 848 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 861 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 865 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 869 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 879 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 883 "vtkParse.y"
    { postSig(")"); }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 884 "vtkParse.y"
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

  case 168:

/* Line 1455 of yacc.c  */
#line 898 "vtkParse.y"
    { postSig(")"); }
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 899 "vtkParse.y"
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

  case 170:

/* Line 1455 of yacc.c  */
#line 910 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 911 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 916 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 918 "vtkParse.y"
    { postSig(")"); }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 919 "vtkParse.y"
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

  case 176:

/* Line 1455 of yacc.c  */
#line 932 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 941 "vtkParse.y"
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

  case 178:

/* Line 1455 of yacc.c  */
#line 951 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 957 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 960 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 961 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 962 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 183:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 184:

/* Line 1455 of yacc.c  */
#line 971 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 972 "vtkParse.y"
    {
      currentFunction->Name = (yyvsp[(1) - (3)].str);
      if (HaveComment)
        {
        currentFunction->Comment = vtkstrdup(CommentText);
        }
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
    break;

  case 186:

/* Line 1455 of yacc.c  */
#line 981 "vtkParse.y"
    { postSig("("); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 990 "vtkParse.y"
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

  case 194:

/* Line 1455 of yacc.c  */
#line 1003 "vtkParse.y"
    { postSig("(");}
    break;

  case 196:

/* Line 1455 of yacc.c  */
#line 1005 "vtkParse.y"
    {postSig("const ");}
    break;

  case 197:

/* Line 1455 of yacc.c  */
#line 1007 "vtkParse.y"
    {postSig("static ");}
    break;

  case 198:

/* Line 1455 of yacc.c  */
#line 1008 "vtkParse.y"
    {postSig("static ");}
    break;

  case 199:

/* Line 1455 of yacc.c  */
#line 1010 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 200:

/* Line 1455 of yacc.c  */
#line 1011 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1012 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 202:

/* Line 1455 of yacc.c  */
#line 1013 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 203:

/* Line 1455 of yacc.c  */
#line 1014 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1015 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1023 "vtkParse.y"
    {clearTypeId();}
    break;

  case 214:

/* Line 1455 of yacc.c  */
#line 1025 "vtkParse.y"
    { postSig("...");}
    break;

  case 215:

/* Line 1455 of yacc.c  */
#line 1027 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 216:

/* Line 1455 of yacc.c  */
#line 1029 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 218:

/* Line 1455 of yacc.c  */
#line 1032 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 219:

/* Line 1455 of yacc.c  */
#line 1033 "vtkParse.y"
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

  case 220:

/* Line 1455 of yacc.c  */
#line 1044 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 221:

/* Line 1455 of yacc.c  */
#line 1051 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1052 "vtkParse.y"
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
#line 1063 "vtkParse.y"
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
#line 1071 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 225:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    { postSig("(&"); clearVarName(); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1080 "vtkParse.y"
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

  case 227:

/* Line 1455 of yacc.c  */
#line 1091 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*");
      clearVarName(); }
    break;

  case 228:

/* Line 1455 of yacc.c  */
#line 1093 "vtkParse.y"
    { postSig(")("); }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1094 "vtkParse.y"
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

  case 236:

/* Line 1455 of yacc.c  */
#line 1112 "vtkParse.y"
    { postSig("="); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1112 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 238:

/* Line 1455 of yacc.c  */
#line 1115 "vtkParse.y"
    {
        int type = ((yyvsp[(1) - (3)].integer) | (yyvsp[(2) - (3)].integer));
        if (getVarValue() && ((type & VTK_PARSE_CONST) != 0) &&
            ((type & VTK_PARSE_INDIRECT) == 0))
          {
          add_constant(getVarName(), getVarValue(),
                       (type & VTK_PARSE_UNQUALIFIED_TYPE), getTypeId(), 0);
          }
        }
    break;

  case 252:

/* Line 1455 of yacc.c  */
#line 1143 "vtkParse.y"
    {clearVarValue();}
    break;

  case 253:

/* Line 1455 of yacc.c  */
#line 1143 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(1) - (3)].integer); }
    break;

  case 255:

/* Line 1455 of yacc.c  */
#line 1146 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 256:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(2) - (2)].integer); setVarName((yyvsp[(1) - (2)].str));}
    break;

  case 257:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 258:

/* Line 1455 of yacc.c  */
#line 1157 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1160 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 260:

/* Line 1455 of yacc.c  */
#line 1162 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1167 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1171 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1172 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1174 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1175 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1177 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1178 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1179 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1183 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1185 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1186 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1187 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1190 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 275:

/* Line 1455 of yacc.c  */
#line 1191 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1192 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1193 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1195 "vtkParse.y"
    {postSig(", ");}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1197 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1198 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1199 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 284:

/* Line 1455 of yacc.c  */
#line 1200 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1203 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 286:

/* Line 1455 of yacc.c  */
#line 1209 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1215 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1216 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1217 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1218 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1219 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1220 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1233 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1234 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1235 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1236 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1237 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1241 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1243 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1244 "vtkParse.y"
    { postSig("**"); }
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1245 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1246 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1247 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1248 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1249 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1252 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1256 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1257 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1258 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1259 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1262 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1264 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1269 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1270 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1272 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1273 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1274 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1275 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1276 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1278 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1279 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1280 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1281 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1282 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1289 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1290 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1291 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1292 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1293 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1294 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1295 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 356:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 357:

/* Line 1455 of yacc.c  */
#line 1311 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 358:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 359:

/* Line 1455 of yacc.c  */
#line 1313 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 360:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 361:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {postSig("+");}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1317 "vtkParse.y"
    {postSig("-");}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1317 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1320 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1321 "vtkParse.y"
    {postSig("(");}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1321 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1322 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1323 "vtkParse.y"
    {postSig("<(");}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1331 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1332 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1337 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
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

  case 379:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    {postSig("Get");}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    {markSig();}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    {swapSig();}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1358 "vtkParse.y"
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

  case 383:

/* Line 1455 of yacc.c  */
#line 1370 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1371 "vtkParse.y"
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

  case 385:

/* Line 1455 of yacc.c  */
#line 1385 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
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

  case 387:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1399 "vtkParse.y"
    {closeSig();}
    break;

  case 389:

/* Line 1455 of yacc.c  */
#line 1401 "vtkParse.y"
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

  case 390:

/* Line 1455 of yacc.c  */
#line 1446 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 391:

/* Line 1455 of yacc.c  */
#line 1447 "vtkParse.y"
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

  case 392:

/* Line 1455 of yacc.c  */
#line 1461 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 393:

/* Line 1455 of yacc.c  */
#line 1462 "vtkParse.y"
    {markSig();}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1462 "vtkParse.y"
    {swapSig();}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1463 "vtkParse.y"
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

  case 396:

/* Line 1455 of yacc.c  */
#line 1476 "vtkParse.y"
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

  case 397:

/* Line 1455 of yacc.c  */
#line 1501 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 398:

/* Line 1455 of yacc.c  */
#line 1502 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1506 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1507 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1511 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 402:

/* Line 1455 of yacc.c  */
#line 1512 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 403:

/* Line 1455 of yacc.c  */
#line 1516 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1517 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1521 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1522 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1526 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1527 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1531 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1532 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1536 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1537 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1541 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1543 "vtkParse.y"
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

  case 415:

/* Line 1455 of yacc.c  */
#line 1562 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1564 "vtkParse.y"
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

  case 417:

/* Line 1455 of yacc.c  */
#line 1584 "vtkParse.y"
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

  case 418:

/* Line 1455 of yacc.c  */
#line 1650 "vtkParse.y"
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

  case 419:

/* Line 1455 of yacc.c  */
#line 1720 "vtkParse.y"
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

  case 420:

/* Line 1455 of yacc.c  */
#line 1787 "vtkParse.y"
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

  case 421:

/* Line 1455 of yacc.c  */
#line 1860 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1861 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 423:

/* Line 1455 of yacc.c  */
#line 1862 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 424:

/* Line 1455 of yacc.c  */
#line 1863 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 426:

/* Line 1455 of yacc.c  */
#line 1866 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 427:

/* Line 1455 of yacc.c  */
#line 1867 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1867 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1868 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1868 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 431:

/* Line 1455 of yacc.c  */
#line 1869 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1869 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1870 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1870 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1871 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1871 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1872 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1872 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1873 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1874 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1875 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1876 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1877 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1878 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1879 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1880 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1881 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1882 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1883 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1884 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1885 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1886 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1887 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1888 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1889 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1890 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1891 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1892 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1893 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1894 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1895 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1896 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1897 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1898 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1899 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1906 "vtkParse.y"
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
#line 7061 "vtkParse.tab.c"
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
#line 1948 "vtkParse.y"

#include <string.h>
#include "lex.yy.c"

/* initialize the structure */
void InitFunction(FunctionInfo *func)
{
  int i;

  func->Name = NULL;
  func->ItemType = VTK_FUNCTION_INFO;
  func->NumberOfArguments = 0;
  func->ArrayFailure = 0;
  func->IsVirtual = 0;
  func->IsPureVirtual = 0;
  func->IsPublic = 0;
  func->IsOperator = 0;
  func->IsConst = 0;
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
  con->ItemType = VTK_CONSTANT_INFO;
  con->Value = NULL;
  con->Type = 0;
  con->TypeClass = NULL;
  con->IsEnum = 0;
  con->IsProtected = 0;
  con->IsPublic = 0;
}

/* initialize the structure */
void InitClass(ClassInfo *cls)
{
  cls->Name = NULL;
  cls->ItemType = VTK_CLASS_INFO;
  cls->IsAbstract = 0;
  cls->HasDelete = 0;
  cls->NumberOfSuperClasses = 0;
  cls->NumberOfFunctions = 0;
  cls->NumberOfConstants = 0;
  cls->NumberOfItems = 0;
}

/* initialize the structure */
void InitFile(FileInfo *file_info)
{
  /* namespace info */
  file_info->Name = NULL;
  file_info->ItemType = VTK_NAMESPACE_INFO;
  file_info->NumberOfClasses = 0;
  file_info->NumberOfFunctions = 0;
  file_info->NumberOfConstants = 0;
  file_info->NumberOfNamespaces = 0;
  file_info->NumberOfItems = 0;

  /* file info */
  file_info->FileName = NULL;
  file_info->NameComment = NULL;
  file_info->Description = NULL;
  file_info->Caveats = NULL;
  file_info->SeeAlso = NULL;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct)
{
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  InitClass(currentClass);
  currentClass->Name = vtkstrdup(classname);
  vtkParse_AddItemMacro(currentNamespace, Classes, currentClass);

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
  in_public = 1;
  in_protected = 0;
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
    con->IsPublic = 1;
    vtkParse_AddItemMacro(&data, Constants, con);
    }
  else if (currentClass)
    {
    con->IsPublic = in_public;
    con->IsProtected = in_protected;
    vtkParse_AddItemMacro(currentClass, Constants, con);
    }
  else
    {
    con->IsPublic = 1;
    vtkParse_AddItemMacro(currentNamespace, Constants, con);
    }
}

/* if the name is a const in this namespace, the scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  FileInfo *scope = currentNamespace;
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
    currentFunction->IsPublic = in_public;
    currentFunction->IsProtected = in_protected;
    }
  else
    {
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
  int i, j;

  /* read each hint line in succession */
  while (fscanf(hfile,"%s %s %x %i", h_cls, h_func, &h_type, &h_value) != EOF)
    {
    /* find the matching class */
    for (i = 0; i < file_info->NumberOfClasses; i++)
      {
      class_info = file_info->Classes[i];

      if (strcmp(h_cls, class_info->Name) == 0)
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
  ConstantInfo *const_info;

  n = file_info->NumberOfClasses;
  for (i = 0; i < n; i++)
    {
    class_info = file_info->Classes[i];

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

  m = file_info->NumberOfFunctions;
  for (j = 0; j < m; j++)
    {
    func_info = file_info->Functions[j];
    free(func_info);
    }
  if (m > 0)
    {
    free(file_info->Functions);
    }

  m = file_info->NumberOfConstants;
  for (j = 0; j < m; j++)
    {
    const_info = file_info->Constants[j];
    free(const_info);
    }
  if (m > 0)
    {
    free(file_info->Constants);
    }

  m = file_info->NumberOfNamespaces;
  for (i = 0; i < m; i++)
    {
    vtkParse_Free(file_info->Namespaces[i]);
    }

  if (file_info->NumberOfItems > 0)
    {
    free(file_info->Items);
    }

  free(file_info);
}

