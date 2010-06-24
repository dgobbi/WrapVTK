
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
TemplateArgs *templateStack[10];
int templateDepth = 0;
TemplateArgs *currentTemplate = NULL;

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
#line 605 "vtkParse.tab.c"

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
#line 546 "vtkParse.y"

  char *str;
  int   integer;



/* Line 222 of yacc.c  */
#line 882 "vtkParse.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 894 "vtkParse.tab.c"

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
#define YYLAST   6504

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  141
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  178
/* YYNRULES -- Number of rules.  */
#define YYNRULES  528
/* YYNRULES -- Number of states.  */
#define YYNSTATES  967

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
     372,   379,   384,   390,   393,   397,   401,   403,   408,   412,
     417,   426,   435,   445,   455,   458,   461,   464,   467,   470,
     474,   478,   479,   485,   487,   488,   493,   496,   499,   500,
     504,   506,   508,   509,   510,   514,   519,   524,   527,   531,
     536,   540,   543,   547,   550,   554,   556,   559,   563,   567,
     571,   573,   576,   580,   581,   582,   591,   592,   596,   597,
     598,   606,   607,   611,   612,   615,   618,   620,   621,   627,
     628,   629,   639,   640,   644,   645,   651,   652,   656,   657,
     661,   666,   668,   669,   675,   677,   679,   682,   684,   686,
     688,   690,   692,   694,   696,   700,   701,   703,   705,   709,
     710,   711,   714,   716,   718,   719,   724,   725,   726,   732,
     733,   734,   740,   742,   743,   749,   750,   751,   761,   763,
     766,   767,   769,   770,   774,   778,   782,   785,   789,   795,
     801,   808,   817,   826,   830,   832,   836,   839,   844,   845,
     849,   850,   852,   855,   856,   858,   859,   863,   868,   870,
     873,   875,   878,   880,   883,   886,   888,   890,   892,   893,
     897,   898,   904,   905,   911,   913,   914,   919,   921,   923,
     925,   927,   931,   935,   937,   939,   941,   943,   945,   947,
     949,   951,   953,   956,   959,   962,   965,   968,   969,   974,
     975,   980,   981,   986,   988,   991,   994,   997,  1000,  1003,
    1006,  1008,  1010,  1012,  1014,  1016,  1018,  1020,  1022,  1024,
    1026,  1028,  1030,  1032,  1034,  1036,  1038,  1040,  1042,  1044,
    1046,  1048,  1050,  1052,  1053,  1057,  1058,  1062,  1064,  1066,
    1068,  1070,  1072,  1074,  1076,  1078,  1079,  1082,  1084,  1088,
    1090,  1093,  1096,  1099,  1101,  1103,  1105,  1107,  1108,  1112,
    1113,  1117,  1119,  1120,  1125,  1126,  1127,  1137,  1139,  1141,
    1143,  1145,  1147,  1149,  1150,  1158,  1159,  1160,  1161,  1171,
    1172,  1178,  1179,  1185,  1186,  1187,  1198,  1199,  1207,  1208,
    1209,  1210,  1220,  1227,  1228,  1236,  1237,  1245,  1246,  1254,
    1255,  1263,  1264,  1272,  1273,  1281,  1282,  1290,  1291,  1299,
    1300,  1310,  1311,  1321,  1326,  1331,  1338,  1346,  1349,  1352,
    1356,  1360,  1362,  1364,  1366,  1368,  1370,  1372,  1374,  1376,
    1378,  1380,  1382,  1384,  1386,  1388,  1390,  1392,  1394,  1396,
    1398,  1400,  1402,  1404,  1406,  1408,  1410,  1412,  1414,  1416,
    1418,  1420,  1422,  1424,  1426,  1428,  1430,  1432,  1434,  1436,
    1438,  1440,  1442,  1444,  1445,  1448,  1449,  1452,  1454,  1456,
    1458,  1460,  1462,  1464,  1466,  1468,  1470,  1472,  1474,  1476,
    1478,  1480,  1482,  1484,  1486,  1488,  1490,  1492,  1494,  1496,
    1498,  1500,  1502,  1504,  1506,  1508,  1510,  1512,  1514,  1516,
    1518,  1520,  1522,  1524,  1526,  1528,  1530,  1532,  1534,  1536,
    1538,  1540,  1542,  1544,  1546,  1550,  1554,  1558,  1562
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
     142,     0,    -1,    -1,    -1,   142,   143,   144,    -1,   241,
      -1,    48,   241,    -1,   156,    -1,   153,    -1,   168,    -1,
     167,    -1,   166,    -1,   169,    -1,   170,    -1,   172,    -1,
     176,    -1,   145,    -1,   177,   145,    -1,    30,    -1,   193,
     222,    -1,    39,   193,   222,    -1,    48,   193,   222,    -1,
     177,   193,   222,    -1,   177,    39,   193,   222,    -1,   192,
     222,    -1,    39,   192,   222,    -1,    48,   192,   222,    -1,
     188,   222,    -1,    39,   188,   222,    -1,    48,   188,   222,
      -1,    48,    10,   188,   222,    -1,   189,   222,    -1,    39,
     189,   222,    -1,    48,   189,   222,    -1,   177,   188,   222,
      -1,   177,    39,   188,   222,    -1,   186,   222,    -1,   286,
      -1,   311,    -1,   263,   118,    -1,     9,   119,   312,   120,
      -1,    46,   119,   312,   120,    -1,   118,    -1,    -1,     4,
     221,   146,   275,   121,   150,   122,    -1,    -1,     4,   221,
     123,   259,   124,   147,   275,   121,   150,   122,    -1,    -1,
       3,   221,   148,   275,   121,   150,   122,    -1,    -1,     3,
     221,   123,   259,   124,   149,   275,   121,   150,   122,    -1,
      -1,    -1,   150,   151,   152,    -1,   278,   125,    -1,   241,
      -1,    40,   241,    -1,   156,    -1,   153,    -1,   168,    -1,
     167,    -1,   166,    -1,   169,    -1,   176,    -1,   174,    -1,
      38,   174,    -1,   173,    -1,    30,    -1,   193,   222,    -1,
      38,   193,   222,    -1,    39,   193,   222,    -1,   177,   193,
     222,    -1,   177,    39,   193,   222,    -1,   191,   222,    -1,
      38,   191,   222,    -1,    39,   191,   222,    -1,   177,   191,
     222,    -1,   177,    39,   191,   222,    -1,   187,   222,    -1,
     117,   119,   312,   120,   118,    -1,   286,    -1,   118,    -1,
      -1,    -1,    28,   221,   154,   121,   159,   122,   155,   313,
     118,    -1,    -1,    -1,    28,   157,   121,   159,   122,   158,
     313,   118,    -1,    -1,   160,    -1,   160,   126,   159,    -1,
     221,    -1,   221,   127,   163,    -1,   162,    -1,   221,    -1,
     262,    -1,   256,    -1,    11,    -1,    12,    -1,    14,    -1,
     161,    -1,   164,   163,    -1,   161,   165,   163,    -1,   119,
     163,   120,    -1,   128,    -1,   129,    -1,   130,    -1,   128,
      -1,   129,    -1,   131,    -1,   132,    -1,   133,    -1,   134,
      -1,   135,    -1,   136,    -1,     3,   121,   312,   122,   313,
     118,    -1,    29,   221,   121,   312,   122,   313,   118,    -1,
      29,   121,   312,   122,   313,   118,    -1,    45,   313,   118,
      -1,    -1,    44,   263,   171,   121,   142,   122,    -1,    44,
     121,   312,   122,    -1,    48,    10,   121,   142,   122,    -1,
     177,   174,    -1,     4,   221,   175,    -1,     3,   221,   175,
      -1,   118,    -1,   121,   312,   122,   118,    -1,   125,   313,
     118,    -1,    43,   252,   247,   118,    -1,    43,     4,   221,
     121,   312,   122,   237,   118,    -1,    43,     3,   221,   121,
     312,   122,   237,   118,    -1,    43,   252,    54,   237,   120,
     119,   223,   120,   118,    -1,    43,   252,    55,   237,   120,
     119,   223,   120,   118,    -1,    43,   156,    -1,    43,   153,
      -1,    43,   168,    -1,    43,   167,    -1,    43,   166,    -1,
      43,    49,   118,    -1,    41,   123,   124,    -1,    -1,    41,
     123,   178,   179,   124,    -1,   181,    -1,    -1,   181,   126,
     180,   179,    -1,   269,   184,    -1,   183,   184,    -1,    -1,
     182,   177,   184,    -1,     4,    -1,    42,    -1,    -1,    -1,
     221,   185,   238,    -1,    51,   119,   188,   120,    -1,    51,
     119,   191,   120,    -1,   251,   202,    -1,   251,   190,   202,
      -1,   263,    81,   130,   216,    -1,   263,    81,   209,    -1,
     263,    81,    -1,   190,   263,    81,    -1,   130,   216,    -1,
       8,   130,   216,    -1,   209,    -1,   251,   202,    -1,     8,
     252,   202,    -1,   263,    81,   194,    -1,   251,   190,   197,
      -1,   194,    -1,   251,   197,    -1,     8,   252,   197,    -1,
      -1,    -1,    35,   251,   119,   195,   225,   120,   196,   204,
      -1,    -1,   199,   198,   204,    -1,    -1,    -1,    35,   309,
     200,   119,   201,   225,   120,    -1,    -1,   205,   203,   204,
      -1,    -1,   127,    11,    -1,    34,    11,    -1,    32,    -1,
      -1,   221,   119,   206,   225,   120,    -1,    -1,    -1,   221,
     123,   207,   259,   124,   119,   208,   225,   120,    -1,    -1,
     211,   210,   213,    -1,    -1,   221,   119,   212,   225,   120,
      -1,    -1,   125,   215,   214,    -1,    -1,   126,   215,   214,
      -1,   221,   119,   312,   120,    -1,   217,    -1,    -1,   221,
     119,   218,   225,   120,    -1,    32,    -1,    47,    -1,    47,
      39,    -1,    46,    -1,     9,    -1,    27,    -1,    26,    -1,
      82,    -1,    83,    -1,   118,    -1,   121,   312,   122,    -1,
      -1,   224,    -1,   229,    -1,   229,   126,   224,    -1,    -1,
      -1,   226,   227,    -1,    80,    -1,   229,    -1,    -1,   229,
     126,   228,   227,    -1,    -1,    -1,   252,   230,   248,   231,
     238,    -1,    -1,    -1,   252,   232,   247,   233,   238,    -1,
      49,    -1,    -1,   252,    55,   234,   246,   120,    -1,    -1,
      -1,   252,    54,   235,   246,   120,   119,   236,   223,   120,
      -1,   221,    -1,   264,   221,    -1,    -1,   239,    -1,    -1,
     127,   240,   279,    -1,   251,   244,   118,    -1,   251,   242,
     118,    -1,    49,   118,    -1,    47,    49,   118,    -1,   251,
      55,   221,   120,   118,    -1,   251,    54,   237,   120,   118,
      -1,   251,    54,   237,   120,    50,   118,    -1,   251,    54,
     237,   120,   137,   312,   138,   118,    -1,   251,    54,   237,
     120,   119,   223,   120,   118,    -1,   244,   126,   243,    -1,
     244,    -1,   244,   126,   243,    -1,   264,   244,    -1,   264,
     244,   126,   243,    -1,    -1,   247,   245,   238,    -1,    -1,
     221,    -1,   221,   248,    -1,    -1,   249,    -1,    -1,    50,
     250,   248,    -1,   137,   313,   138,   248,    -1,   252,    -1,
     220,   252,    -1,   253,    -1,   253,   264,    -1,   254,    -1,
     219,   254,    -1,   254,   219,    -1,   268,    -1,   256,    -1,
     262,    -1,    -1,    42,   255,   261,    -1,    -1,    46,   123,
     257,   259,   124,    -1,    -1,     9,   123,   258,   259,   124,
      -1,   252,    -1,    -1,   252,   126,   260,   259,    -1,     9,
      -1,    46,    -1,   256,    -1,   262,    -1,   263,    81,   261,
      -1,   256,    81,   261,    -1,     9,    -1,    46,    -1,    27,
      -1,    26,    -1,    82,    -1,    83,    -1,   134,    -1,   131,
      -1,    33,    -1,   131,   134,    -1,   131,   131,    -1,    33,
     134,    -1,    33,   131,    -1,    33,    33,    -1,    -1,   131,
     131,   265,   264,    -1,    -1,    33,   131,   266,   264,    -1,
      -1,    33,    33,   267,   264,    -1,   269,    -1,     4,   270,
      -1,     3,   270,    -1,    29,     9,    -1,    29,    46,    -1,
      28,     9,    -1,    28,    46,    -1,   271,    -1,   270,    -1,
      82,    -1,    83,    -1,    26,    -1,    27,    -1,     9,    -1,
      46,    -1,    22,    -1,    16,    -1,    21,    -1,    25,    -1,
      24,    -1,    85,    -1,    86,    -1,    87,    -1,    88,    -1,
      89,    -1,    90,    -1,    91,    -1,    92,    -1,    93,    -1,
      94,    -1,    -1,    37,   272,   274,    -1,    -1,    36,   273,
     274,    -1,   274,    -1,    23,    -1,    15,    -1,    17,    -1,
      18,    -1,    84,    -1,    19,    -1,    20,    -1,    -1,   125,
     276,    -1,   277,    -1,   277,   126,   276,    -1,   261,    -1,
       6,   261,    -1,     7,   261,    -1,     5,   261,    -1,     5,
      -1,     6,    -1,     7,    -1,   285,    -1,    -1,   129,   280,
     285,    -1,    -1,   128,   281,   285,    -1,    10,    -1,    -1,
     119,   282,   279,   120,    -1,    -1,    -1,     9,   123,   283,
     253,   124,   119,   284,   285,   120,    -1,    11,    -1,    12,
      -1,    13,    -1,    14,    -1,     9,    -1,    46,    -1,    -1,
      95,   119,   221,   126,   287,   252,   120,    -1,    -1,    -1,
      -1,    96,   119,   288,   221,   126,   289,   252,   290,   120,
      -1,    -1,    97,   119,   291,   221,   120,    -1,    -1,    98,
     119,   292,   221,   120,    -1,    -1,    -1,    99,   119,   221,
     126,   293,   268,   294,   126,   313,   120,    -1,    -1,   100,
     119,   221,   126,   295,   268,   120,    -1,    -1,    -1,    -1,
     101,   119,   296,   221,   126,   297,   268,   298,   120,    -1,
     102,   119,   221,   126,   268,   120,    -1,    -1,   103,   119,
     221,   126,   299,   268,   120,    -1,    -1,   107,   119,   221,
     126,   300,   268,   120,    -1,    -1,   104,   119,   221,   126,
     301,   268,   120,    -1,    -1,   108,   119,   221,   126,   302,
     268,   120,    -1,    -1,   105,   119,   221,   126,   303,   268,
     120,    -1,    -1,   109,   119,   221,   126,   304,   268,   120,
      -1,    -1,   106,   119,   221,   126,   305,   268,   120,    -1,
      -1,   110,   119,   221,   126,   306,   268,   120,    -1,    -1,
     111,   119,   221,   126,   307,   268,   126,    11,   120,    -1,
      -1,   112,   119,   221,   126,   308,   268,   126,    11,   120,
      -1,   113,   119,   221,   120,    -1,   114,   119,   221,   120,
      -1,   115,   119,   221,   126,   221,   120,    -1,   115,   119,
     221,   126,   221,   126,   120,    -1,   119,   120,    -1,   137,
     138,    -1,    52,   137,   138,    -1,    53,   137,   138,    -1,
     310,    -1,   127,    -1,   131,    -1,   132,    -1,   128,    -1,
     129,    -1,   139,    -1,   130,    -1,   126,    -1,   123,    -1,
     124,    -1,   134,    -1,   135,    -1,   136,    -1,   133,    -1,
      52,    -1,    53,    -1,    56,    -1,    57,    -1,    58,    -1,
      59,    -1,    60,    -1,    61,    -1,    64,    -1,    65,    -1,
      66,    -1,    67,    -1,    68,    -1,    62,    -1,    63,    -1,
      69,    -1,    70,    -1,    71,    -1,    72,    -1,    73,    -1,
      74,    -1,    75,    -1,    76,    -1,    77,    -1,    78,    -1,
      79,    -1,   116,    -1,    -1,   312,   314,    -1,    -1,   313,
     315,    -1,   118,    -1,   315,    -1,    31,    -1,   316,    -1,
     317,    -1,   318,    -1,    43,    -1,   310,    -1,   125,    -1,
     140,    -1,    81,    -1,     4,    -1,    41,    -1,    27,    -1,
      26,    -1,    82,    -1,    83,    -1,   271,    -1,     9,    -1,
      46,    -1,    11,    -1,    12,    -1,    13,    -1,    14,    -1,
      10,    -1,    30,    -1,    32,    -1,    33,    -1,    34,    -1,
       3,    -1,    35,    -1,    47,    -1,    39,    -1,     8,    -1,
      28,    -1,    29,    -1,    42,    -1,    50,    -1,    49,    -1,
      80,    -1,     5,    -1,     7,    -1,     6,    -1,    44,    -1,
      45,    -1,    48,    -1,   311,    -1,   121,   312,   122,    -1,
     119,   312,   120,    -1,    54,   312,   120,    -1,    55,   312,
     120,    -1,   137,   312,   138,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   678,   678,   678,   678,   681,   682,   683,   684,   685,
     686,   687,   688,   689,   690,   691,   692,   693,   694,   695,
     696,   697,   698,   699,   700,   701,   702,   703,   704,   705,
     706,   707,   708,   709,   710,   711,   712,   713,   714,   715,
     716,   717,   718,   720,   720,   722,   722,   724,   724,   726,
     726,   729,   729,   729,   732,   733,   734,   735,   736,   737,
     738,   739,   740,   741,   742,   743,   744,   745,   746,   747,
     749,   750,   751,   752,   753,   755,   756,   757,   758,   759,
     760,   761,   769,   770,   769,   772,   773,   772,   775,   775,
     775,   777,   778,   782,   782,   782,   782,   784,   784,   784,
     786,   787,   792,   798,   804,   804,   805,   807,   807,   808,
     808,   809,   809,   810,   810,   812,   814,   816,   818,   820,
     820,   822,   824,   826,   828,   829,   831,   832,   833,   835,
     836,   837,   838,   840,   842,   843,   844,   845,   846,   847,
     849,   850,   850,   854,   855,   855,   859,   867,   873,   873,
     884,   885,   887,   887,   887,   890,   892,   894,   899,   900,
     901,   903,   904,   906,   907,   912,   913,   917,   926,   927,
     930,   934,   938,   949,   953,   948,   968,   968,   980,   981,
     980,   988,   988,  1000,  1001,  1010,  1020,  1027,  1026,  1031,
    1032,  1031,  1041,  1041,  1051,  1051,  1053,  1053,  1055,  1055,
    1057,  1059,  1073,  1073,  1075,  1077,  1078,  1080,  1081,  1082,
    1083,  1084,  1085,  1087,  1087,  1089,  1089,  1091,  1091,  1093,
    1093,  1093,  1095,  1096,  1099,  1098,  1102,  1103,  1102,  1121,
    1122,  1121,  1140,  1148,  1148,  1161,  1163,  1161,  1176,  1176,
    1178,  1178,  1180,  1180,  1182,  1192,  1193,  1194,  1195,  1196,
    1197,  1198,  1200,  1203,  1205,  1206,  1207,  1208,  1211,  1211,
    1214,  1214,  1216,  1225,  1225,  1228,  1228,  1234,  1239,  1240,
    1242,  1243,  1245,  1246,  1247,  1249,  1250,  1252,  1254,  1254,
    1258,  1258,  1260,  1260,  1263,  1263,  1263,  1265,  1266,  1267,
    1268,  1270,  1276,  1283,  1284,  1285,  1286,  1287,  1288,  1301,
    1302,  1303,  1304,  1305,  1306,  1308,  1310,  1312,  1312,  1314,
    1314,  1316,  1316,  1320,  1321,  1322,  1323,  1324,  1325,  1326,
    1329,  1330,  1333,  1334,  1335,  1336,  1337,  1338,  1341,  1342,
    1343,  1344,  1345,  1346,  1347,  1348,  1349,  1350,  1351,  1352,
    1353,  1354,  1355,  1356,  1356,  1357,  1357,  1359,  1362,  1363,
    1364,  1365,  1366,  1367,  1368,  1370,  1370,  1372,  1372,  1374,
    1375,  1376,  1377,  1384,  1385,  1386,  1388,  1389,  1389,  1390,
    1390,  1393,  1394,  1394,  1395,  1396,  1395,  1404,  1405,  1406,
    1407,  1408,  1410,  1414,  1414,  1429,  1430,  1430,  1429,  1443,
    1443,  1458,  1458,  1472,  1472,  1472,  1519,  1518,  1534,  1535,
    1535,  1534,  1548,  1574,  1574,  1579,  1579,  1584,  1584,  1589,
    1589,  1594,  1594,  1599,  1599,  1604,  1604,  1609,  1609,  1614,
    1614,  1635,  1635,  1656,  1722,  1792,  1859,  1933,  1934,  1935,
    1936,  1937,  1939,  1940,  1940,  1941,  1941,  1942,  1942,  1943,
    1943,  1944,  1944,  1945,  1945,  1946,  1947,  1948,  1949,  1950,
    1951,  1952,  1953,  1954,  1955,  1956,  1957,  1958,  1959,  1960,
    1961,  1962,  1963,  1964,  1965,  1966,  1967,  1968,  1969,  1970,
    1971,  1972,  1978,  2001,  2001,  2002,  2002,  2004,  2004,  2006,
    2006,  2006,  2006,  2006,  2007,  2007,  2007,  2007,  2007,  2007,
    2008,  2008,  2008,  2008,  2008,  2009,  2009,  2009,  2009,  2009,
    2009,  2010,  2010,  2010,  2010,  2010,  2010,  2011,  2011,  2011,
    2011,  2011,  2011,  2011,  2012,  2012,  2012,  2012,  2012,  2012,
    2013,  2013,  2013,  2013,  2015,  2016,  2017,  2018,  2019
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
  "template_args", "$@13", "template_arg", "$@14", "class_or_typename",
  "maybe_template_id", "$@15", "legacy_function", "legacy_method",
  "function", "scoped_method", "scope", "method", "scoped_operator",
  "operator", "typecast_op_func", "$@16", "$@17", "op_func", "$@18",
  "op_sig", "$@19", "$@20", "func", "$@21", "func_trailer", "func_sig",
  "$@22", "$@23", "@24", "constructor", "$@25", "constructor_sig", "$@26",
  "maybe_initializers", "more_initializers", "initializer", "destructor",
  "destructor_sig", "$@27", "const_mod", "static_mod", "any_id",
  "func_body", "ignore_args_list", "ignore_more_args", "args_list", "$@28",
  "more_args", "$@29", "arg", "$@30", "$@31", "$@32", "$@33", "$@34",
  "$@35", "$@36", "maybe_indirect_id", "maybe_var_assign", "var_assign",
  "$@37", "var", "var_ids", "maybe_indirect_var_ids",
  "var_id_maybe_assign", "$@38", "maybe_var_id", "var_id",
  "maybe_var_array", "var_array", "$@39", "maybe_static_type", "type",
  "type_red", "type_red1", "$@40", "templated_id", "$@41", "$@42", "types",
  "$@43", "maybe_scoped_id", "scoped_id", "class_id", "type_indirection",
  "$@44", "$@45", "$@46", "type_red2", "type_simple", "type_id",
  "type_primitive", "$@47", "$@48", "type_integer", "optional_scope",
  "scope_list", "scope_list_item", "scope_type", "literal", "$@49", "$@50",
  "$@51", "$@52", "$@53", "literal2", "macro", "$@54", "$@55", "$@56",
  "$@57", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "op_token", "op_token_no_delim", "vtk_constant_def",
  "maybe_other", "maybe_other_no_semi", "other_stuff",
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
     170,   170,   172,   173,   174,   174,   175,   175,   175,   176,
     176,   176,   176,   176,   176,   176,   176,   176,   176,   176,
     177,   178,   177,   179,   180,   179,   181,   181,   182,   181,
     183,   183,   184,   185,   184,   186,   187,   188,   189,   189,
     189,   190,   190,   191,   191,   191,   191,   191,   192,   192,
     193,   193,   193,   195,   196,   194,   198,   197,   200,   201,
     199,   203,   202,   204,   204,   204,   204,   206,   205,   207,
     208,   205,   210,   209,   212,   211,   213,   213,   214,   214,
     215,   216,   218,   217,   219,   220,   220,   221,   221,   221,
     221,   221,   221,   222,   222,   223,   223,   224,   224,   225,
     226,   225,   227,   227,   228,   227,   230,   231,   229,   232,
     233,   229,   229,   234,   229,   235,   236,   229,   237,   237,
     238,   238,   240,   239,   241,   241,   241,   241,   241,   241,
     241,   241,   241,   242,   243,   243,   243,   243,   245,   244,
     246,   246,   247,   248,   248,   250,   249,   249,   251,   251,
     252,   252,   253,   253,   253,   254,   254,   254,   255,   254,
     257,   256,   258,   256,   259,   260,   259,   261,   261,   261,
     261,   262,   262,   263,   263,   263,   263,   263,   263,   264,
     264,   264,   264,   264,   264,   264,   264,   265,   264,   266,
     264,   267,   264,   268,   268,   268,   268,   268,   268,   268,
     269,   269,   270,   270,   270,   270,   270,   270,   271,   271,
     271,   271,   271,   271,   271,   271,   271,   271,   271,   271,
     271,   271,   271,   272,   271,   273,   271,   271,   274,   274,
     274,   274,   274,   274,   274,   275,   275,   276,   276,   277,
     277,   277,   277,   278,   278,   278,   279,   280,   279,   281,
     279,   279,   282,   279,   283,   284,   279,   285,   285,   285,
     285,   285,   285,   287,   286,   288,   289,   290,   286,   291,
     286,   292,   286,   293,   294,   286,   295,   286,   296,   297,
     298,   286,   286,   299,   286,   300,   286,   301,   286,   302,
     286,   303,   286,   304,   286,   305,   286,   306,   286,   307,
     286,   308,   286,   286,   286,   286,   286,   309,   309,   309,
     309,   309,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   310,   310,   310,   310,   310,   310,   310,   310,
     310,   310,   311,   312,   312,   313,   313,   314,   314,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   315,   315,   315,   315,   315,   315,
     315,   315,   315,   315,   316,   317,   317,   317,   318
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
       6,     4,     5,     2,     3,     3,     1,     4,     3,     4,
       8,     8,     9,     9,     2,     2,     2,     2,     2,     3,
       3,     0,     5,     1,     0,     4,     2,     2,     0,     3,
       1,     1,     0,     0,     3,     4,     4,     2,     3,     4,
       3,     2,     3,     2,     3,     1,     2,     3,     3,     3,
       1,     2,     3,     0,     0,     8,     0,     3,     0,     0,
       7,     0,     3,     0,     2,     2,     1,     0,     5,     0,
       0,     9,     0,     3,     0,     5,     0,     3,     0,     3,
       4,     1,     0,     5,     1,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     3,     0,     1,     1,     3,     0,
       0,     2,     1,     1,     0,     4,     0,     0,     5,     0,
       0,     5,     1,     0,     5,     0,     0,     9,     1,     2,
       0,     1,     0,     3,     3,     3,     2,     3,     5,     5,
       6,     8,     8,     3,     1,     3,     2,     4,     0,     3,
       0,     1,     2,     0,     1,     0,     3,     4,     1,     2,
       1,     2,     1,     2,     2,     1,     1,     1,     0,     3,
       0,     5,     0,     5,     1,     0,     4,     1,     1,     1,
       1,     3,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     2,     2,     2,     0,     4,     0,
       4,     0,     4,     1,     2,     2,     2,     2,     2,     2,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     3,     0,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     0,     2,     1,     3,     1,
       2,     2,     2,     1,     1,     1,     1,     0,     3,     0,
       3,     1,     0,     4,     0,     0,     9,     1,     1,     1,
       1,     1,     1,     0,     7,     0,     0,     0,     9,     0,
       5,     0,     5,     0,     0,    10,     0,     7,     0,     0,
       0,     9,     6,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       9,     0,     9,     4,     4,     6,     7,     2,     2,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     0,     2,     1,     1,     1,
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
       2,     3,     1,     0,     0,     0,     0,   326,   349,   329,
     350,   351,   353,   354,   330,   328,   348,   332,   331,   324,
     325,    85,     0,    18,   204,     0,   345,   343,     0,     0,
     278,     0,     0,   475,   327,   205,     0,     0,     0,   322,
     323,   352,   333,   334,   335,   336,   337,   338,   339,   340,
     341,   342,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   472,    42,     4,    16,     8,     7,    11,
      10,     9,    12,    13,    14,    15,     0,     0,     0,     0,
       0,     0,   170,     0,     0,     5,     0,   268,   270,   272,
     276,   277,     0,   275,   313,   321,   320,   347,    37,    38,
     326,   324,   325,   327,   322,   323,   473,    47,   315,    43,
     314,     0,     0,   326,     0,     0,   327,     0,     0,   473,
     282,   318,   210,   209,   319,   211,   212,     0,    82,   316,
     317,   473,     0,   205,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   141,     0,     0,     0,     0,   135,   134,
     138,   137,   136,     0,   293,   296,   295,   294,   297,   298,
     473,   119,     0,   473,   280,   206,     0,     0,     0,     0,
       0,     0,     6,   246,     0,     0,   385,   389,   391,     0,
       0,   398,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    17,     0,
       0,     0,   213,   473,    36,    27,    31,    24,    19,   273,
     269,   208,   210,   209,     0,   207,     0,     0,   211,   212,
       0,   171,   176,   157,   181,   263,     0,     0,   258,     0,
     301,   300,   299,   271,   274,     0,     0,    39,     0,     0,
     355,     0,   355,   326,   324,   325,   327,   322,   323,   318,
     319,   316,   317,   172,     0,     0,     0,    88,     0,     0,
     473,   173,   346,   344,    28,    32,    25,    20,     0,   140,
     148,   287,   288,   289,   279,   290,     0,     0,   139,   208,
     207,     0,     0,   263,     0,     0,     0,   506,   488,   517,
     519,   518,   510,   495,   501,   497,   498,   499,   500,   491,
     490,   511,   512,   502,   479,   503,   504,   505,   507,   509,
     489,   513,   483,   520,   521,   496,   508,   522,   515,   514,
     446,   447,   473,   473,   448,   449,   450,   451,   452,   453,
     459,   460,   454,   455,   456,   457,   458,   461,   462,   463,
     464,   465,   466,   467,   468,   469,   470,   471,   516,   487,
     492,   493,   118,   473,   473,   440,   441,   485,   439,   432,
     435,   436,   438,   433,   434,   445,   442,   443,   444,   473,
     437,   486,   494,   484,   523,   476,   480,   481,   482,     0,
       0,   247,     2,     0,     0,    29,    33,    26,    21,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    34,    22,     0,   446,   447,     0,     0,
     178,   431,   238,     0,     0,     0,   169,   158,     0,   183,
     183,   265,   187,   189,   475,   262,   264,   245,   244,     0,
     240,   161,   306,   305,   304,   303,   302,   292,   287,   288,
       0,   168,   160,   192,     0,   291,   477,   475,   474,   478,
     284,     0,     0,     0,     0,     0,    40,     0,     0,    89,
      91,    88,   475,     0,   220,   150,   151,     0,   143,     0,
     152,   152,   473,   473,     0,     0,   129,   121,     2,     0,
       0,     0,     0,     0,    41,     0,     3,    30,   155,   383,
       0,     0,     0,   393,   396,     0,     0,   403,   407,   411,
     415,   405,   409,   413,   417,   419,   421,   423,   424,     0,
      35,    23,   214,     0,     0,   427,   428,     0,     0,   239,
       0,   162,   186,     0,     0,   177,   182,   263,   220,     0,
       0,   253,   254,     0,   242,   259,   241,     0,     0,     0,
     159,   201,     0,   196,   194,     0,   285,    49,     0,     0,
       0,   359,   356,   357,    51,    45,    51,   283,    86,    88,
       0,     0,     0,   475,     0,     0,   142,   144,   152,   147,
     153,   146,     0,     0,     0,     0,     3,   526,   527,   525,
     524,   528,   281,   122,     0,   386,   390,   392,     0,     0,
     399,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   429,   430,   179,     0,   249,   215,   473,
     248,   185,   184,   266,     0,     0,   263,     0,   256,     0,
     312,   310,   308,   202,     0,   193,   220,   115,     0,   355,
     362,   360,   361,     0,    52,   355,    52,   475,    90,   208,
      97,    98,    99,   207,     0,   104,   105,   106,   100,    93,
      92,     0,    94,    96,    95,    83,   117,     0,   174,   232,
     222,   221,   223,   229,   148,   149,   240,     0,     0,   215,
     215,   120,     0,     0,   394,     0,     0,   402,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   425,     0,
     220,   250,     0,   216,   217,     0,   188,     0,   267,   255,
       0,   381,   371,   377,   378,   379,   380,   382,   372,   369,
     367,   243,   366,   220,   198,     0,     0,   286,     0,   358,
      48,     0,     0,    44,     0,     0,   107,   108,   109,   110,
     111,   112,   113,   114,     0,   101,   475,   116,   183,   224,
     235,   233,   263,     0,   145,   154,     0,     0,     0,     0,
     384,   387,     0,   397,   400,   404,   408,   412,   416,   406,
     410,   414,   418,     0,     0,   426,     0,     0,     0,     0,
     190,   257,   374,     0,     0,     0,     0,     0,   197,   473,
     195,    51,     0,     0,   363,   364,   365,     0,   326,   324,
     325,    67,     0,     0,     0,   327,     0,   322,   323,     0,
      81,     0,    53,    58,    57,    61,    60,    59,    62,    66,
      64,    63,     0,     0,     0,     0,   165,    55,     0,     0,
      80,    51,    87,   103,   102,     0,   175,     0,   260,   260,
     227,   230,   131,   130,     0,     0,     0,   475,     0,     0,
       0,   180,   252,   218,   251,   220,     0,     0,   381,   370,
     368,   203,   198,     0,    52,     0,     0,     0,     0,     0,
      65,     0,     0,     0,     0,     0,    56,     0,     0,   473,
     163,     0,   123,     0,     0,    78,    73,    68,   166,    54,
      52,    84,   225,   261,     0,     0,   240,   240,   132,   133,
     388,     0,   401,   420,   422,     0,     0,   373,   199,   200,
      50,   126,   473,   475,   125,   124,   164,   167,    74,    69,
      75,    70,     0,     0,     0,     0,     0,     0,    76,    71,
      46,     0,   234,   228,   231,   395,   191,     0,     0,     0,
       0,   156,     0,    77,    72,   236,   375,     0,   128,    79,
     215,     0,   127,     0,     0,   237,   376
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     3,    75,    76,   252,   655,   250,   649,   654,
     741,   822,    77,   268,   756,    78,   137,   657,   478,   479,
     668,   669,   670,   671,   754,    79,    80,    81,    82,    83,
     296,    84,   829,   830,   924,    85,    86,   280,   487,   684,
     488,   489,   490,   589,   686,    87,   833,    88,    89,   230,
     834,    90,    91,    92,   484,   758,   231,   439,   232,   537,
     710,   233,   440,   545,   234,   548,   549,   865,   836,   563,
     463,   646,   645,   798,   734,   560,   561,   733,    93,    94,
     278,   214,   712,   713,   584,   585,   681,   847,   714,   762,
     906,   763,   907,   849,   848,   960,   433,   555,   556,   639,
      95,   236,   551,   237,   450,   904,   238,   445,   446,   547,
     883,    97,    98,    99,   154,   100,   390,   266,   471,   648,
     465,   101,   128,   434,   559,   558,   557,   103,   104,   105,
     106,   146,   145,   107,   473,   572,   573,   839,   731,   795,
     794,   793,   866,   961,   732,   108,   604,   401,   693,   856,
     402,   403,   608,   772,   609,   406,   696,   858,   612,   616,
     613,   617,   614,   618,   615,   619,   620,   621,   430,   383,
     384,   248,   172,   468,   469,   386,   387,   388
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -755
static const yytype_int16 yypact[] =
{
    -755,    81,  -755,  5361,   268,   270,  6156,     3,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,     9,
      17,   655,   354,  -755,  -755,  5937,  -755,  -755,  5661,   -36,
    -755,  6029,   385,  -755,   200,    37,  5477,   -13,    36,   106,
     168,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,    42,    49,    64,    95,    97,   131,   140,   166,
     193,   201,   216,   218,   224,   229,   230,   236,   237,   238,
     243,   245,   247,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  5569,    67,    67,    67,
      67,    67,  -755,  6248,  6156,  -755,   485,  -755,    13,    71,
      86,  -755,   222,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
     190,   251,   326,   392,   505,   535,  -755,   250,  -755,   254,
    -755,   670,   670,    26,    48,   300,    43,   174,   294,  -755,
    -755,   258,  -755,  -755,   264,  -755,  -755,   265,  -755,   258,
     264,  -755,   267,   356,   274,   252,   252,    67,    67,    67,
      67,   332,   316,   275,   683,   268,   270,   283,  -755,  -755,
    -755,  -755,  -755,   564,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  3436,  -755,  -755,  -755,   287,  5254,    67,    67,
      67,    67,  -755,  -755,  5937,   685,  -755,  -755,  -755,   685,
     685,  -755,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   685,   685,   685,   685,   685,   270,  5661,  -755,    67,
      67,   567,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,   325,   327,   329,  6365,   336,   256,   685,   338,   339,
     332,  -755,  -755,  -755,  -755,   187,   303,   -47,  -755,   342,
      14,   127,  -755,  -755,  -755,   683,    90,  -755,   952,  6156,
     307,  6156,   307,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,   683,  1090,  6156,   685,   304,  1228,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,   116,  -755,
    6374,    26,    43,    86,  -755,  -755,   313,   324,  -755,  -755,
    -755,   256,   256,    15,   328,  1366,   334,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  1504,
    6156,  -755,  -755,    67,   685,  -755,  -755,  -755,  -755,   337,
     330,   685,   685,   685,   333,   340,   685,   343,   353,   355,
     357,   358,   360,   363,   367,   370,   372,   378,   387,   388,
     379,    67,    67,  -755,  -755,  1642,   321,   395,   389,   386,
    -755,  -755,  -755,   396,   685,   409,  -755,  -755,   399,    32,
      32,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,   256,
     406,  -755,    44,    45,  -755,    50,  -755,  -755,   111,   157,
     685,  -755,  -755,  -755,   415,  -755,  -755,  -755,  -755,  -755,
     416,   411,   594,   420,   421,   430,  -755,   428,   433,   431,
     434,   685,  -755,  1780,   442,  -755,  -755,   446,   440,   528,
     685,   685,  -755,  -755,   457,   458,  -755,  -755,  -755,  1918,
    2056,  2194,  2332,  2470,  -755,   459,   462,  -755,  -755,  -755,
     460,   465,   467,  -755,  -755,   470,  6283,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,   685,
    -755,  -755,  -755,   450,   469,  -755,  -755,   478,    -5,  -755,
     490,  -755,  -755,   598,   600,  -755,  -755,    15,   442,  6156,
    3574,  -755,   489,   685,  -755,  -755,  -755,    13,    13,    13,
    -755,  -755,   497,   499,  -755,  3712,  -755,  -755,   683,   683,
     683,  -755,  -755,   503,  -755,  -755,  -755,  -755,  -755,   685,
     476,   509,  3850,  -755,   512,  5753,  -755,  -755,   685,  -755,
    -755,  -755,  2608,  2746,   506,   517,   515,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  6156,  -755,  -755,  -755,  6283,  6283,
    -755,   521,  6283,  6283,  6283,  6283,  6283,  6283,  6283,  6283,
    6283,  6283,   -46,  -755,  -755,  -755,   525,  -755,  6121,  -755,
    -755,  -755,  -755,  -755,   539,   531,    15,   256,   540,   242,
    -755,  -755,  -755,  -755,   685,  -755,   442,  -755,  6156,   307,
    -755,  -755,  -755,   594,   545,   307,   546,  -755,  -755,    26,
    -755,  -755,  -755,    43,   476,  -755,  -755,  -755,   641,  -755,
    -755,   476,  -755,    86,  -755,  -755,  -755,  3988,  -755,  -755,
    -755,  -755,   543,   445,  6374,  -755,   406,   256,   256,  6121,
    6121,  -755,   541,  6156,  -755,   550,  6283,  -755,   551,   553,
     554,   555,   558,   560,   565,   575,   573,   574,  -755,   582,
     442,  -755,   583,  -755,   578,  2884,  -755,   586,  -755,  -755,
     256,   590,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,   442,   580,   599,   602,  -755,   606,  -755,
    -755,  4678,   607,  -755,  4126,   610,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,   476,  -755,  -755,  -755,    32,  -755,
    -755,  -755,    15,   685,  -755,  -755,   601,   614,   613,   615,
    -755,  -755,   617,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,   725,   728,  -755,   620,   623,  6121,   626,
    -755,  -755,  -755,   242,   451,   451,   625,   685,  -755,  -755,
    -755,  -755,   268,   270,  -755,  -755,  -755,  5162,   111,    11,
      19,  -755,  4886,  4978,  5845,   157,   628,    96,   165,   629,
    -755,   685,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  4794,    67,    67,    67,  -755,  -755,   492,   624,
    -755,  -755,  -755,  -755,  -755,  4264,  -755,  5753,   685,   685,
    -755,  -755,  -755,  -755,   632,   633,   636,  -755,   637,   638,
     640,  -755,  -755,  -755,  -755,   442,  6156,   642,  -755,  -755,
    -755,  -755,   580,  3022,   639,   308,   308,   685,   567,   270,
    -755,    67,    67,   567,    67,    67,  -755,   608,  5070,  -755,
    -755,  4978,  -755,    67,    67,  -755,  -755,  -755,  -755,  -755,
     649,  -755,  -755,  -755,   643,   658,   406,   406,  -755,  -755,
    -755,  4402,  -755,  -755,  -755,   659,   657,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  5162,   663,   685,  3160,    67,    67,  -755,  -755,
    -755,   665,  -755,  -755,  -755,  -755,  -755,   668,  3298,  4540,
     685,  -755,   671,  -755,  -755,  -755,  -755,   672,  -755,  -755,
    6121,   451,  -755,   673,   679,  -755,  -755
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -755,  -348,  -755,  -755,   705,  -755,  -755,  -755,  -755,  -537,
    -755,  -755,   -24,  -755,  -755,   -21,  -755,  -755,  -425,  -755,
    -755,  -755,  -603,  -755,  -755,   -18,   -16,   -15,    51,  -755,
    -755,  -755,  -755,  -737,   -76,    61,  -451,  -755,   122,  -755,
    -755,  -755,  -755,  -428,  -755,  -755,  -755,    34,    68,  -755,
    -590,   263,   -27,   561,  -755,  -755,  -124,  -755,  -755,  -755,
    -755,  -226,  -755,  -414,  -755,  -755,  -755,  -755,   562,  -755,
    -755,  -755,  -755,   -61,    18,  -754,  -755,  -755,   713,  -755,
       1,   -39,  -653,    29,  -500,  -755,   -23,  -755,  -542,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -260,  -633,  -755,  -755,
     -34,  -755,  -555,  -420,  -755,   -31,  -149,  -505,  -755,  -755,
       5,    -6,   -43,   727,  -755,  -127,  -755,  -755,  -232,  -755,
    -130,   -20,    57,   -81,  -755,  -755,  -755,  -287,  -262,     7,
     -29,  -755,  -755,   -44,  -231,   172,  -755,  -755,    33,  -755,
    -755,  -755,  -755,  -755,  -740,    87,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,
    -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,  -755,   603,
     826,  -101,  -409,  -755,  -152,  -755,  -755,  -755
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -312
static const yytype_int16 yytable[] =
{
     127,   150,   182,   263,   437,   117,   119,   158,    96,   181,
     159,   118,   120,   160,   294,   161,   162,   243,   491,   474,
     385,   475,   138,   142,   284,   163,   546,   283,   265,   552,
     144,   494,   495,   151,   477,   550,   768,   769,   588,   656,
     269,    96,   633,   682,   506,   626,   240,   452,   634,   215,
     216,   217,   218,   765,   869,   870,   581,   259,   565,   210,
     102,   745,   147,   591,   542,   441,   543,   890,   755,   295,
     178,   448,   389,   582,   708,   880,   175,  -311,  -309,   449,
     709,     2,   719,  -307,  -293,   152,   176,   153,   220,   171,
    -296,   211,  -296,   152,   260,   892,   148,   235,  -295,   458,
    -295,   272,   273,    24,   179,   183,   436,  -293,   274,   275,
     276,   277,   425,   627,   628,   457,   222,   223,   283,   283,
     209,  -293,   129,   926,  -294,    25,   130,  -296,   118,   120,
    -210,   718,   629,   638,   285,  -295,   459,   283,  -209,   395,
     396,   397,   398,   382,   241,   453,   736,   242,   454,   130,
     596,   844,   444,   239,   658,   184,   286,   287,   505,   544,
     685,   185,   118,   120,   293,   791,   174,   245,   186,   483,
     423,   424,   228,   229,   677,  -311,  -309,  -297,  -311,  -309,
     422,  -307,   394,   187,  -307,   212,   400,  -297,   213,   394,
     404,   405,  -293,   407,   408,   409,   410,   411,   412,   413,
     414,   415,   416,   417,   418,   419,   420,   117,   239,   224,
     786,   393,   211,   118,   188,  -211,   189,   552,   399,   382,
     460,   964,   881,   884,  -297,   285,   285,   432,   435,   611,
    -208,   499,   500,   796,   130,   442,   382,   441,  -294,   443,
     382,   421,   893,   470,   285,   470,  -298,   464,   744,  -298,
     190,   721,   722,   723,   724,   725,   726,   850,   455,   191,
     470,   456,   501,   502,   874,   289,   382,     8,   480,    10,
      11,    12,    13,   943,   944,    16,  -207,   110,   503,   110,
     174,  -294,   132,   133,  -212,   192,  -298,   438,   727,   240,
     832,   149,   432,   432,   111,   112,   111,   112,   933,   180,
     552,   936,   290,   246,   900,   682,   442,   963,  -208,   261,
     443,  -208,   193,  -208,   113,  -208,   113,   635,  -294,   173,
     194,   694,   695,   174,   444,   698,   699,   700,   701,   702,
     703,   704,   705,   706,   707,   195,    41,   196,   135,   136,
     247,   221,   571,   197,   846,   283,   262,   845,   198,   199,
     114,   115,   114,   115,   507,   200,   201,   202,   222,   223,
     382,   728,   203,   139,   204,   915,   205,   224,   553,  -210,
     729,   730,  -210,   249,  -210,   264,  -210,   251,   225,  -208,
     132,   133,   530,   531,   470,  -207,   267,   241,   270,   116,
     242,   592,   593,   271,   164,   175,   382,   246,   385,   279,
     140,   288,   510,   511,   512,   391,  -293,   515,  -296,   774,
    -295,   165,   166,   385,   228,   229,   737,  -294,   738,  -297,
    -298,   447,   491,   451,   742,   481,   921,   766,   767,   922,
     385,   167,   472,   923,   492,   539,   135,   136,   650,   651,
     652,   283,   283,   283,  -209,   493,   496,  -209,   911,  -209,
     293,  -209,   285,   673,   382,   498,   509,   508,   533,   513,
     868,   562,   723,   724,   725,   726,   514,   168,   169,   516,
     382,   382,   382,   382,   382,   141,   640,   641,   642,   517,
     541,   518,   480,   519,   520,   659,   521,   660,   661,   522,
     662,   590,   590,   523,   221,  -226,   524,   727,   525,   760,
     761,   289,   222,   223,   526,   529,   170,   527,   528,   535,
    -207,   222,   223,  -207,   949,  -207,   538,  -207,   132,   133,
     224,   382,   663,   571,   536,   385,   283,   224,   715,   540,
     622,   225,   534,   554,   564,   567,   382,   673,   290,   226,
     227,   574,   566,   470,   673,   575,   226,   227,   285,   285,
     285,   576,   577,   382,   293,   578,   553,   579,   228,   229,
     674,   580,  -219,   382,   382,  -226,   587,   228,   229,    29,
     586,  -226,  -226,   289,   135,   136,   289,   594,   595,   683,
     480,   672,  -226,   602,   603,   606,   605,   607,   623,   590,
     132,   133,   385,   132,   133,   664,   610,   625,   692,   568,
     569,   570,   224,   281,   665,   666,   667,   624,   630,   631,
     290,   632,   898,   290,   851,   637,   643,   289,   291,   292,
     165,   166,   683,  -211,   644,   689,  -211,   673,  -211,   653,
    -211,   675,   678,   285,   132,   133,   690,   691,   293,   553,
     282,   697,   470,   711,   674,   735,   135,   136,   382,   135,
     136,   674,   927,  -212,   290,   717,  -212,   898,  -212,   716,
    -212,   770,   226,   227,   131,   672,   720,   740,   743,   759,
     773,   775,   672,   776,   777,   778,   168,   169,   779,   253,
     780,   132,   133,   683,   683,   781,   382,   771,   432,   432,
     135,   136,   281,   385,   289,   782,   254,   255,   873,   783,
     784,   134,   785,   787,   788,   790,   797,   837,   898,   165,
     166,   132,   133,   792,   835,   382,   256,   823,   799,   852,
     824,   293,   800,   825,   927,   826,   827,   801,   841,   282,
     843,   290,   853,   854,   674,   855,   859,   135,   136,   860,
     861,   862,   464,   857,   864,   871,   838,   888,   889,   899,
     908,   909,   257,   258,   263,   672,   910,   912,   913,   385,
     914,   920,   917,   941,   293,   168,   169,   135,   136,   746,
     747,   940,   748,   749,   750,   751,   752,   753,   942,   946,
     886,   947,   683,   951,   955,   882,   885,   956,   935,   959,
     962,   208,   828,   965,   895,   896,   897,   385,   735,   966,
     925,   878,   831,   875,   876,   894,   764,   461,   462,   118,
     120,   918,   244,   464,   464,   872,   382,   863,   905,   887,
     219,   948,   562,   916,   902,   739,   867,   431,   840,   109,
       0,     0,     0,   464,     0,     0,     0,     0,     0,   235,
       0,   683,   928,   929,   382,   930,   931,     0,     0,   903,
     903,     0,     0,     0,   938,   939,     0,     0,     0,     0,
       0,     0,     0,     0,   937,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   562,     0,
     875,     0,   382,     0,     0,     0,   118,     0,   293,   464,
       0,     0,   464,   934,     0,     0,     0,   953,   954,     0,
       0,     0,     0,     0,     0,     0,   382,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   382,
     382,     0,     0,     0,     0,     0,   950,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   683,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    26,    27,
       0,   319,     0,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     466,   363,     0,   364,   467,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
       0,   380,   381,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    26,    27,     0,   319,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   466,   363,
     476,   364,     0,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   380,
     381,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    26,    27,     0,   319,     0,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   466,   363,     0,   364,
     482,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,     0,   380,   381,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    26,    27,     0,   319,     0,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   466,   363,     0,   364,   497,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,     0,   380,   381,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      26,    27,     0,   319,     0,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   466,   363,   504,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,     0,   380,   381,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    26,    27,
       0,   319,     0,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     466,   363,     0,   364,   532,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
       0,   380,   381,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    26,    27,     0,   319,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   466,   363,
       0,   364,   583,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   380,
     381,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    26,    27,     0,   319,     0,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   466,   363,   597,   364,
       0,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,     0,   380,   381,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    26,    27,     0,   319,     0,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   466,   363,   598,   364,     0,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,     0,   380,   381,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      26,    27,     0,   319,     0,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   466,   363,   599,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,     0,   380,   381,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    26,    27,
       0,   319,     0,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     466,   363,     0,   364,   600,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
       0,   380,   381,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    26,    27,     0,   319,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   466,   363,
       0,   364,     0,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,   601,   380,
     381,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    26,    27,     0,   319,     0,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   466,   363,     0,   364,
     687,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,     0,   380,   381,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    26,    27,     0,   319,     0,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   466,   363,     0,   364,   688,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,     0,   380,   381,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      26,    27,     0,   319,     0,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   466,   363,     0,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   789,   380,   381,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    26,    27,
       0,   319,     0,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     466,   363,   919,   364,     0,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
       0,   380,   381,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    26,    27,     0,   319,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   466,   363,
     952,   364,     0,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   380,
     381,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    26,    27,     0,   319,     0,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   466,   363,     0,   364,
     957,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,     0,   380,   381,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    26,    27,     0,   319,     0,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   362,   363,     0,   364,     0,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,     0,   380,   381,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      26,    27,     0,   319,     0,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,     0,   363,     0,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,   636,   380,   381,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    26,    27,
       0,   319,     0,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
     647,   363,     0,   364,     0,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
       0,   380,   381,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    26,    27,     0,   319,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   676,   363,
       0,   364,     0,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   380,
     381,   297,   298,   299,   300,   301,   302,   303,   304,   305,
     306,   307,   308,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,    26,    27,     0,   319,     0,   320,
     321,   322,   323,   324,   325,   326,   327,   328,   329,     0,
     330,   331,   332,   333,   334,   335,   336,   337,   338,   339,
     340,   341,   342,   343,   344,   345,   346,   347,   348,   349,
     350,   351,   352,   353,   354,   355,   356,   357,   358,   359,
     360,   361,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,     0,   757,   363,     0,   364,
       0,   365,   366,   367,   368,   369,   370,   371,   372,   373,
     374,   375,   376,   377,   378,   379,     0,   380,   381,   297,
     298,   299,   300,   301,   302,   303,   304,   305,   306,   307,
     308,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   309,   310,   311,   312,   313,   314,   315,   316,
     317,   318,    26,    27,     0,   319,     0,   320,   321,   322,
     323,   324,   325,   326,   327,   328,   329,     0,   330,   331,
     332,   333,   334,   335,   336,   337,   338,   339,   340,   341,
     342,   343,   344,   345,   346,   347,   348,   349,   350,   351,
     352,   353,   354,   355,   356,   357,   358,   359,   360,   361,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    73,     0,   842,   363,     0,   364,     0,   365,
     366,   367,   368,   369,   370,   371,   372,   373,   374,   375,
     376,   377,   378,   379,     0,   380,   381,   297,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     309,   310,   311,   312,   313,   314,   315,   316,   317,   318,
      26,    27,     0,   319,     0,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,     0,   330,   331,   332,   333,
     334,   335,   336,   337,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   352,   353,
     354,   355,   356,   357,   358,   359,   360,   361,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      73,     0,   901,   363,     0,   364,     0,   365,   366,   367,
     368,   369,   370,   371,   372,   373,   374,   375,   376,   377,
     378,   379,     0,   380,   381,   297,   298,   299,   300,   301,
     302,   303,   304,   305,   306,   307,   308,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,   309,   310,
     311,   312,   313,   314,   315,   316,   317,   318,    26,    27,
       0,   319,     0,   320,   321,   322,   323,   324,   325,   326,
     327,   328,   329,     0,   330,   331,   332,   333,   334,   335,
     336,   337,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   352,   353,   354,   355,
     356,   357,   358,   359,   360,   361,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    73,     0,
       0,   363,   945,   364,     0,   365,   366,   367,   368,   369,
     370,   371,   372,   373,   374,   375,   376,   377,   378,   379,
       0,   380,   381,   297,   298,   299,   300,   301,   302,   303,
     304,   305,   306,   307,   308,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   309,   310,   311,   312,
     313,   314,   315,   316,   317,   318,    26,    27,     0,   319,
       0,   320,   321,   322,   323,   324,   325,   326,   327,   328,
     329,     0,   330,   331,   332,   333,   334,   335,   336,   337,
     338,   339,   340,   341,   342,   343,   344,   345,   346,   347,
     348,   349,   350,   351,   352,   353,   354,   355,   356,   357,
     358,   359,   360,   361,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    73,     0,   958,   363,
       0,   364,     0,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,   375,   376,   377,   378,   379,     0,   380,
     381,   802,   803,   804,   805,   806,   807,   808,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   809,   810,    21,    22,   811,     0,
      24,     0,     0,    25,    26,    27,   812,   813,   814,    29,
      30,    31,     0,    33,   815,    35,     0,    37,     0,   816,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     817,   818,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,     0,   819,   820,   879,   803,     0,
       0,     0,   807,   808,     0,     0,     0,     0,   821,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     809,   810,   124,   125,     0,     0,    24,     0,     0,    25,
      26,    27,     0,   891,     0,     0,    30,     0,     0,     0,
     815,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   817,   818,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,   879,
     803,     0,     0,     0,   807,   808,     0,     0,     0,     0,
       0,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,   809,   810,   124,   125,     0,     0,    24,     0,
       0,    25,    26,    27,   821,     0,     0,     0,    30,     0,
       0,     0,   815,   143,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   817,   818,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   121,   122,     0,     0,     0,   807,   808,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,   809,   810,   124,   125,     0,     0,
      24,     0,     0,    25,    26,    27,   821,     0,     0,     0,
      30,     0,     0,     0,   815,   143,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     817,   818,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,   121,   122,     0,     0,     0,   932,   808,
       0,     0,     0,     0,     0,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,   809,   810,   124,   125,
       0,     0,    24,     0,     0,     0,    26,    27,   821,     0,
       0,     0,    30,     0,     0,     0,   815,   143,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   817,   818,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,   121,   122,     0,     0,     0,
       0,   123,     0,     0,     0,     0,     0,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
     124,   125,     0,     0,    24,     0,     0,     0,    26,    27,
     821,     0,     0,     0,    30,     0,     0,     0,   126,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,   121,   122,     0,
       0,     0,     0,   123,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   124,   125,     0,     0,    24,     0,     0,     0,
      26,    27,   877,     0,     0,     0,    30,     0,     0,     0,
     126,   143,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     4,     5,     0,     0,     0,     6,
       7,     0,     0,     0,     0,   392,     8,     9,    10,    11,
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
     121,   122,     0,     0,     0,     6,   123,   177,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   124,   125,     0,     0,    24,
       0,     0,    25,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   126,    35,     0,    37,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   206,     5,     0,     0,     0,     6,   123,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,   124,   125,     0,
       0,    24,     0,     0,    25,    26,    27,     0,   207,     0,
       0,    30,     0,     0,     0,   126,   143,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   121,   122,     0,     0,     0,     6,
     123,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   124,
     125,     0,     0,    24,     0,     0,    25,    26,    27,     0,
       0,     0,     0,    30,     0,     0,     0,   126,   143,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,   121,   122,     0,     0,
       0,     0,   123,     0,     0,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,   124,   125,     0,     0,    24,     0,     0,     0,    26,
      27,     0,     0,     0,     0,    30,     0,     0,     0,   126,
       0,     0,   679,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   680,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   121,   122,
       0,     0,     0,     0,   123,     0,     0,     0,     0,     0,
       8,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,   124,   125,     0,     0,    24,     0,     0,
       0,    26,    27,     0,     0,     0,     0,    30,     0,     0,
       0,   126,    35,     0,    37,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     121,   122,     0,     0,     0,     0,   123,     0,     0,     0,
       0,     0,     8,     9,    10,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    20,   124,   125,     0,     0,    24,
       0,     0,     0,    26,    27,     0,     0,     0,     0,    30,
       0,     0,     0,   126,   143,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,   155,   156,     0,     0,     0,     0,   123,     0,
       0,     0,     0,     0,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,     0,
       0,    24,     0,     0,     0,    26,    27,     0,     0,     0,
       0,    30,     0,     0,     0,   126,     0,     0,   157,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,   121,   122,     0,     0,     0,     0,
     123,     0,     0,     0,     0,     0,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,   124,
     125,     0,     0,    24,     0,     0,     0,    26,    27,   121,
     122,     0,     0,    30,     0,   123,     0,   126,     0,     0,
     679,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,   124,   125,     0,     0,    24,     0,
       0,     0,    26,    27,     0,     0,     0,     0,    30,     0,
       0,     0,   126,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,   121,   122,     0,     0,     0,     0,   123,     0,     0,
       0,     0,     0,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,   124,   125,     0,     0,
       0,     0,     0,     0,    26,    27,   121,   122,     0,     0,
      30,     0,   253,     0,   126,     0,     0,     0,     8,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,   254,
     255,   124,   125,     0,     0,     0,     0,     0,     0,    26,
      27,     0,     0,     0,     0,     0,     0,     0,     0,   256,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   257,   258,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,   485,     0,
       0,     0,     0,   253,     0,     0,     0,     0,     0,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
     254,   255,     0,     0,     0,     0,     0,     0,     0,     0,
      26,    27,     0,     0,     0,     0,   486,   426,   427,     0,
     256,   334,   335,   336,   337,   338,   339,   340,   341,   342,
     343,   344,   345,   346,   347,   348,   349,   350,   351,   352,
     353,   354,   355,   356,   357,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   257,   258,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   428,     0,     0,     0,   365,   366,
       0,   368,   369,   370,   371,   372,   373,   374,   375,   376,
     377,   378,   429,     0,   380
};

static const yytype_int16 yycheck[] =
{
       6,    28,    36,   127,   230,     4,     5,    31,     3,    36,
      31,     4,     5,    31,   163,    31,    31,    98,   280,   251,
     172,   252,    21,    22,   154,    31,   440,   154,   129,   449,
      25,   291,   292,    28,   266,   444,   689,   690,   489,   576,
     141,    36,   547,   585,   392,    50,    33,    33,   548,    88,
      89,    90,    91,   686,   794,   795,   481,     9,   467,    86,
       3,   664,    28,   491,    32,    50,    34,   821,   671,   170,
      36,   118,   173,   482,   120,   812,    39,    33,    33,   126,
     126,     0,   637,    33,    81,    28,    49,   123,    94,    32,
      81,    86,    81,    36,    46,   832,    28,    96,    81,     9,
      81,   145,   146,    32,    36,   118,   230,    81,   147,   148,
     149,   150,   213,   118,   119,   245,    26,    27,   245,   246,
      86,   118,   119,   877,    81,    35,   123,   118,   121,   122,
     119,   636,   137,   553,   154,   118,    46,   264,   119,   178,
     179,   180,   181,   172,   131,   131,   646,   134,   134,   123,
     498,   754,   137,    96,   579,   119,   155,   156,   390,   127,
     588,   119,   155,   156,   163,   720,   123,    81,   119,   270,
     209,   210,    82,    83,   583,   131,   131,    81,   134,   134,
     207,   131,   177,   119,   134,   118,   185,    81,   121,   184,
     189,   190,    81,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   151,    35,
     710,   177,   207,   206,   119,   119,   119,   637,   184,   248,
     130,   961,   812,   813,   118,   245,   246,   226,   227,   516,
     119,   332,   333,   733,   123,   119,   265,    50,    81,   123,
     269,   207,   832,   249,   264,   251,    81,   246,   657,    81,
     119,     9,    10,    11,    12,    13,    14,   762,   131,   119,
     266,   134,   363,   364,   801,     9,   295,    15,   267,    17,
      18,    19,    20,   906,   907,    23,   119,     9,   379,     9,
     123,    81,    26,    27,   119,   119,   118,   230,    46,    33,
     741,    28,   291,   292,    26,    27,    26,    27,   888,    36,
     720,   891,    46,    81,   841,   847,   119,   960,   118,     9,
     123,   121,   119,   123,    46,   125,    46,   549,   118,   119,
     119,   608,   609,   123,   137,   612,   613,   614,   615,   616,
     617,   618,   619,   620,   621,   119,    84,   119,    82,    83,
     118,     9,   472,   119,   758,   472,    46,   756,   119,   119,
      82,    83,    82,    83,   393,   119,   119,   119,    26,    27,
     389,   119,   119,     9,   119,   865,   119,    35,   449,   118,
     128,   129,   121,   123,   123,    81,   125,   123,    46,   121,
      26,    27,   421,   422,   390,   121,   121,   131,   121,   121,
     134,   492,   493,   119,     9,    39,   425,    81,   550,   124,
      46,   118,   401,   402,   403,   118,    81,   406,    81,   696,
      81,    26,    27,   565,    82,    83,   648,    81,   649,    81,
      81,   118,   684,    81,   655,   121,   118,   687,   688,   121,
     582,    46,   125,   125,   121,   434,    82,    83,   568,   569,
     570,   568,   569,   570,   118,   121,   118,   121,   857,   123,
     449,   125,   472,   580,   483,   121,   126,   120,   137,   126,
       9,   460,    11,    12,    13,    14,   126,    82,    83,   126,
     499,   500,   501,   502,   503,   121,   557,   558,   559,   126,
      81,   126,   481,   126,   126,     9,   126,    11,    12,   126,
      14,   490,   491,   126,     9,    50,   126,    46,   126,    54,
      55,     9,    26,    27,   126,   126,   121,   120,   120,   120,
     118,    26,    27,   121,   923,   123,   120,   125,    26,    27,
      35,   550,    46,   653,   138,   677,   653,    35,   629,   120,
     529,    46,   137,   127,   119,   124,   565,   664,    46,    54,
      55,   121,   126,   549,   671,   124,    54,    55,   568,   569,
     570,   121,   124,   582,   553,   122,   637,   126,    82,    83,
     580,   127,   120,   592,   593,   120,   126,    82,    83,    41,
     124,   126,   127,     9,    82,    83,     9,   120,   120,   585,
     579,   580,   137,   124,   122,   120,   126,   120,   138,   588,
      26,    27,   744,    26,    27,   119,   126,   119,   604,     5,
       6,     7,    35,     9,   128,   129,   130,   138,   118,    11,
      46,    11,   838,    46,   763,   126,   119,     9,    54,    55,
      26,    27,   628,   118,   125,   119,   121,   754,   123,   126,
     125,   122,   120,   653,    26,    27,   119,   122,   637,   720,
      46,   120,   648,   118,   664,   644,    82,    83,   677,    82,
      83,   671,   878,   118,    46,   124,   121,   883,   123,   120,
     125,   120,    54,    55,     9,   664,   126,   122,   122,   126,
     120,   120,   671,   120,   120,   120,    82,    83,   120,     9,
     120,    26,    27,   689,   690,   120,   715,   693,   687,   688,
      82,    83,     9,   845,     9,   120,    26,    27,   799,   126,
     126,    46,   120,   120,   126,   119,   126,   741,   934,    26,
      27,    26,    27,   123,   741,   744,    46,   741,   119,   118,
     741,   720,   120,   741,   950,   741,   741,   121,   121,    46,
     120,    46,   118,   120,   754,   120,    11,    82,    83,    11,
     120,   118,   741,   126,   118,   120,   741,   119,   119,   125,
     118,   118,    82,    83,   878,   754,   120,   120,   120,   911,
     120,   122,   120,   120,   763,    82,    83,    82,    83,   128,
     129,   122,   131,   132,   133,   134,   135,   136,   120,   120,
     814,   124,   788,   120,   119,   812,   813,   119,   889,   118,
     118,    86,   741,   120,   833,   834,   835,   949,   797,   120,
     876,   807,   741,   802,   803,   832,   684,   246,   246,   802,
     803,   872,    99,   812,   813,   797,   845,   788,   849,   814,
      93,   922,   821,   866,   847,   653,   793,   224,   741,     3,
      -1,    -1,    -1,   832,    -1,    -1,    -1,    -1,    -1,   838,
      -1,   847,   881,   882,   873,   884,   885,    -1,    -1,   848,
     849,    -1,    -1,    -1,   893,   894,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   891,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   877,    -1,
     879,    -1,   911,    -1,    -1,    -1,   879,    -1,   887,   888,
      -1,    -1,   891,   888,    -1,    -1,    -1,   936,   937,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   935,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   948,
     949,    -1,    -1,    -1,    -1,    -1,   932,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   960,     3,     4,     5,     6,     7,
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
      -1,    32,    -1,    -1,    -1,    36,    37,    -1,    -1,    -1,
      -1,    42,    -1,    -1,    -1,    46,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,     3,     4,    -1,    -1,    -1,    -1,
       9,    -1,    -1,    -1,    -1,    -1,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    -1,    -1,    32,    -1,    -1,    -1,    36,    37,     3,
       4,    -1,    -1,    42,    -1,     9,    -1,    46,    -1,    -1,
      49,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    -1,    -1,    32,    -1,
      -1,    -1,    36,    37,    -1,    -1,    -1,    -1,    42,    -1,
      -1,    -1,    46,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,     3,     4,    -1,    -1,    -1,    -1,     9,    -1,    -1,
      -1,    -1,    -1,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    -1,    -1,
      -1,    -1,    -1,    -1,    36,    37,     3,     4,    -1,    -1,
      42,    -1,     9,    -1,    46,    -1,    -1,    -1,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    -1,    -1,    -1,    -1,    -1,    -1,    36,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    46,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,     4,    -1,
      -1,    -1,    -1,     9,    -1,    -1,    -1,    -1,    -1,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      36,    37,    -1,    -1,    -1,    -1,    42,    52,    53,    -1,
      46,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   119,    -1,    -1,    -1,   123,   124,
      -1,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,    -1,   139
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
     167,   168,   169,   170,   172,   176,   177,   186,   188,   189,
     192,   193,   194,   219,   220,   241,   251,   252,   253,   254,
     256,   262,   263,   268,   269,   270,   271,   274,   286,   311,
       9,    26,    27,    46,    82,    83,   121,   221,   270,   221,
     270,     3,     4,     9,    28,    29,    46,   252,   263,   119,
     123,     9,    26,    27,    46,    82,    83,   157,   221,     9,
      46,   121,   221,    47,   251,   273,   272,   188,   189,   192,
     193,   251,   263,   123,   255,     3,     4,    49,   153,   156,
     166,   167,   168,   252,     9,    26,    27,    46,    82,    83,
     121,   263,   313,   119,   123,    39,    49,    10,   188,   189,
     192,   193,   241,   118,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   119,     3,    39,   145,   188,
     193,   251,   118,   121,   222,   222,   222,   222,   222,   254,
     252,     9,    26,    27,    35,    46,    54,    55,    82,    83,
     190,   197,   199,   202,   205,   221,   242,   244,   247,   263,
      33,   131,   134,   264,   219,    81,    81,   118,   312,   123,
     148,   123,   146,     9,    26,    27,    46,    82,    83,     9,
      46,     9,    46,   197,    81,   312,   258,   121,   154,   312,
     121,   119,   274,   274,   222,   222,   222,   222,   221,   124,
     178,     9,    46,   256,   261,   262,   221,   221,   118,     9,
      46,    54,    55,   221,   247,   312,   171,     3,     4,     5,
       6,     7,     8,     9,    10,    11,    12,    13,    14,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    39,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,   118,   119,   121,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,   137,
     139,   140,   271,   310,   311,   315,   316,   317,   318,   312,
     257,   118,   121,   188,   251,   222,   222,   222,   222,   188,
     221,   288,   291,   292,   221,   221,   296,   221,   221,   221,
     221,   221,   221,   221,   221,   221,   221,   221,   221,   221,
     221,   188,   193,   222,   222,   312,    52,    53,   119,   137,
     309,   310,   221,   237,   264,   221,   197,   202,   263,   198,
     203,    50,   119,   123,   137,   248,   249,   118,   118,   126,
     245,    81,    33,   131,   134,   131,   134,   261,     9,    46,
     130,   194,   209,   211,   221,   261,   118,   122,   314,   315,
     252,   259,   125,   275,   259,   275,   120,   259,   159,   160,
     221,   121,   122,   312,   195,     4,    42,   179,   181,   182,
     183,   269,   121,   121,   237,   237,   118,   122,   121,   312,
     312,   312,   312,   312,   120,   259,   142,   222,   120,   126,
     221,   221,   221,   126,   126,   221,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   120,   120,   126,
     222,   222,   122,   137,   137,   120,   138,   200,   120,   221,
     120,    81,    32,    34,   127,   204,   204,   250,   206,   207,
     313,   243,   244,   264,   127,   238,   239,   267,   266,   265,
     216,   217,   221,   210,   119,   313,   126,   124,     5,     6,
       7,   261,   276,   277,   121,   124,   121,   124,   122,   126,
     127,   159,   313,   122,   225,   226,   124,   126,   177,   184,
     221,   184,   312,   312,   120,   120,   142,   120,   120,   120,
     122,   138,   124,   122,   287,   126,   120,   120,   293,   295,
     126,   268,   299,   301,   303,   305,   300,   302,   304,   306,
     307,   308,   221,   138,   138,   119,    50,   118,   119,   137,
     118,    11,    11,   248,   225,   259,   138,   126,   244,   240,
     264,   264,   264,   119,   125,   213,   212,   118,   260,   149,
     261,   261,   261,   126,   150,   147,   150,   158,   159,     9,
      11,    12,    14,    46,   119,   128,   129,   130,   161,   162,
     163,   164,   221,   256,   262,   122,   118,   313,   120,    49,
      80,   227,   229,   252,   180,   184,   185,   122,   122,   119,
     119,   122,   252,   289,   268,   268,   297,   120,   268,   268,
     268,   268,   268,   268,   268,   268,   268,   268,   120,   126,
     201,   118,   223,   224,   229,   312,   120,   124,   248,   243,
     126,     9,    10,    11,    12,    13,    14,    46,   119,   128,
     129,   279,   285,   218,   215,   221,   225,   259,   275,   276,
     122,   151,   275,   122,   313,   163,   128,   129,   131,   132,
     133,   134,   135,   136,   165,   163,   155,   118,   196,   126,
      54,    55,   230,   232,   179,   238,   237,   237,   223,   223,
     120,   252,   294,   120,   268,   120,   120,   120,   120,   120,
     120,   120,   120,   126,   126,   120,   225,   120,   126,   138,
     119,   243,   123,   282,   281,   280,   225,   126,   214,   119,
     120,   121,     3,     4,     5,     6,     7,     8,     9,    26,
      27,    30,    38,    39,    40,    46,    51,    82,    83,   117,
     118,   130,   152,   153,   156,   166,   167,   168,   169,   173,
     174,   176,   177,   187,   191,   193,   209,   241,   251,   278,
     286,   121,   118,   120,   163,   313,   204,   228,   235,   234,
     248,   247,   118,   118,   120,   120,   290,   126,   298,    11,
      11,   120,   118,   224,   118,   208,   283,   279,     9,   285,
     285,   120,   215,   312,   150,   221,   221,   130,   252,     3,
     174,   191,   193,   251,   191,   193,   241,   251,   119,   119,
     216,    39,   174,   191,   193,   222,   222,   222,   202,   125,
     150,   118,   227,   221,   246,   246,   231,   233,   118,   118,
     120,   313,   120,   120,   120,   225,   253,   120,   214,   120,
     122,   118,   121,   125,   175,   175,   216,   202,   222,   222,
     222,   222,     8,   191,   251,   312,   191,   193,   222,   222,
     122,   120,   120,   238,   238,   120,   120,   124,   312,   313,
     252,   120,   120,   222,   222,   119,   119,   122,   118,   118,
     236,   284,   118,   223,   285,   120,   120
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
#line 678 "vtkParse.y"
    { delSig(); clearTypeId(); clearTemplate(); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 695 "vtkParse.y"
    { output_function(); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 696 "vtkParse.y"
    { output_function(); }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 697 "vtkParse.y"
    { output_function(); }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 698 "vtkParse.y"
    { output_function(); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 699 "vtkParse.y"
    { output_function(); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 700 "vtkParse.y"
    { reject_function(); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 701 "vtkParse.y"
    { reject_function(); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 702 "vtkParse.y"
    { reject_function(); }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 703 "vtkParse.y"
    { output_function(); }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 704 "vtkParse.y"
    { output_function(); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 705 "vtkParse.y"
    { output_function(); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 706 "vtkParse.y"
    { output_function(); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 707 "vtkParse.y"
    { reject_function(); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 708 "vtkParse.y"
    { reject_function(); }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 709 "vtkParse.y"
    { reject_function(); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 710 "vtkParse.y"
    { output_function(); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 711 "vtkParse.y"
    { output_function(); }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 712 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 720 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 0); }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 721 "vtkParse.y"
    { end_class(); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 722 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 0); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 723 "vtkParse.y"
    { end_class(); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 724 "vtkParse.y"
    { start_class((yyvsp[(2) - (2)].str), 1); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 725 "vtkParse.y"
    { end_class(); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 726 "vtkParse.y"
    { reject_class((yyvsp[(2) - (5)].str), 1); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 727 "vtkParse.y"
    { end_class(); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 729 "vtkParse.y"
    { delSig(); clearTypeId(); clearTemplate(); }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 746 "vtkParse.y"
    { output_function(); }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 747 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 749 "vtkParse.y"
    { output_function(); }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 750 "vtkParse.y"
    { output_function(); }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 751 "vtkParse.y"
    { output_function(); }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 752 "vtkParse.y"
    { output_function(); }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 753 "vtkParse.y"
    { ClassInfo *tmpc = currentClass;
     currentClass = NULL; output_function(); currentClass = tmpc; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 755 "vtkParse.y"
    { output_function(); }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 756 "vtkParse.y"
    { output_function(); }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 757 "vtkParse.y"
    { output_function(); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 758 "vtkParse.y"
    { legacySig(); output_function(); }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 769 "vtkParse.y"
    {start_enum((yyvsp[(2) - (2)].str));}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 770 "vtkParse.y"
    {end_enum();}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 772 "vtkParse.y"
    {start_enum(NULL);}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 773 "vtkParse.y"
    {end_enum();}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 777 "vtkParse.y"
    {add_enum((yyvsp[(1) - (1)].str), NULL);}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 778 "vtkParse.y"
    {add_enum((yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 786 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 788 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (2)].str)) + strlen((yyvsp[(2) - (2)].str)) + 1);
         sprintf((yyval.str), "%s%s", (yyvsp[(1) - (2)].str), (yyvsp[(2) - (2)].str));
       }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 793 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str)) + strlen((yyvsp[(2) - (3)].str)) +
                                  strlen((yyvsp[(3) - (3)].str)) + 3);
         sprintf((yyval.str), "%s %s %s", (yyvsp[(1) - (3)].str), (yyvsp[(2) - (3)].str), (yyvsp[(3) - (3)].str));
       }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 799 "vtkParse.y"
    {
         (yyval.str) = (char *)malloc(strlen((yyvsp[(2) - (3)].str)) + 3);
         sprintf((yyval.str), "(%s)", (yyvsp[(2) - (3)].str));
       }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 804 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 805 "vtkParse.y"
    { (yyval.str) = "~"; }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    { (yyval.str) = "-"; }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 807 "vtkParse.y"
    { (yyval.str) = "+"; }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    { (yyval.str) = "*"; }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 808 "vtkParse.y"
    { (yyval.str) = "/"; }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    { (yyval.str) = "%"; }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 809 "vtkParse.y"
    { (yyval.str) = "&"; }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { (yyval.str) = "|"; }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 810 "vtkParse.y"
    { (yyval.str) = "^"; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 820 "vtkParse.y"
    { pushNamespace((yyvsp[(2) - (2)].str)); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 821 "vtkParse.y"
    { popNamespace(); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 849 "vtkParse.y"
    { postSig("template<> "); clearTypeId(); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 850 "vtkParse.y"
    { postSig("template<");
          clearTypeId(); clearVarName(); clearVarValue(); startTemplate(); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 852 "vtkParse.y"
    { postSig("> "); clearTypeId(); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 855 "vtkParse.y"
    { postSig(", ");
                 clearTypeId(); clearVarName(); clearVarValue(); }
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 860 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgTypes[i] = (yyvsp[(1) - (2)].integer);
               currentTemplate->ArgClasses[i] = vtkstrdup(getTypeId());
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 868 "vtkParse.y"
    {
               int i = currentTemplate->NumberOfArguments++;
               currentTemplate->ArgNames[i] = vtkstrdup(getVarName());
               currentTemplate->ArgValues[i] = vtkstrdup(getVarValue());
               }
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 873 "vtkParse.y"
    { pushTemplate(); }
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 874 "vtkParse.y"
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

  case 150:

/* Line 1455 of yacc.c  */
#line 884 "vtkParse.y"
    {postSig("class ");}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 885 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 887 "vtkParse.y"
    { setVarName((yyvsp[(1) - (1)].str)); clearVarValue(); }
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 895 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 906 "vtkParse.y"
    {openSig(); preSig("~"); closeSig();}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 908 "vtkParse.y"
    {
         openSig(); preSig("virtual ~"); closeSig();
         currentFunction->IsVirtual = 1;
         }
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 914 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 918 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 931 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (1)].integer);
         }
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 935 "vtkParse.y"
    {
         currentFunction->ReturnType = (yyvsp[(1) - (2)].integer);
         }
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 939 "vtkParse.y"
    {
         openSig();
         preSig("virtual ");
         closeSig();
         currentFunction->IsVirtual = 1;
         currentFunction->ReturnType = (yyvsp[(2) - (3)].integer);
         }
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 949 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 953 "vtkParse.y"
    { postSig(")"); }
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 954 "vtkParse.y"
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

  case 176:

/* Line 1455 of yacc.c  */
#line 968 "vtkParse.y"
    { postSig(")"); }
    break;

  case 177:

/* Line 1455 of yacc.c  */
#line 969 "vtkParse.y"
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

  case 178:

/* Line 1455 of yacc.c  */
#line 980 "vtkParse.y"
    {postSig((yyvsp[(2) - (2)].str));}
    break;

  case 179:

/* Line 1455 of yacc.c  */
#line 981 "vtkParse.y"
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 180:

/* Line 1455 of yacc.c  */
#line 986 "vtkParse.y"
    { (yyval.str) = (yyvsp[(2) - (7)].str); }
    break;

  case 181:

/* Line 1455 of yacc.c  */
#line 988 "vtkParse.y"
    { postSig(")"); }
    break;

  case 182:

/* Line 1455 of yacc.c  */
#line 989 "vtkParse.y"
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

  case 184:

/* Line 1455 of yacc.c  */
#line 1002 "vtkParse.y"
    {
      postSig(" = 0");
      if (currentClass)
        {
        currentFunction->IsPureVirtual = 1;
        currentClass->IsAbstract = 1;
        }
    }
    break;

  case 185:

/* Line 1455 of yacc.c  */
#line 1011 "vtkParse.y"
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

  case 186:

/* Line 1455 of yacc.c  */
#line 1021 "vtkParse.y"
    {
      postSig(" const");
      currentFunction->IsConst = 1;
    }
    break;

  case 187:

/* Line 1455 of yacc.c  */
#line 1027 "vtkParse.y"
    {
      postSig("(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
    }
    break;

  case 188:

/* Line 1455 of yacc.c  */
#line 1030 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (5)].str); }
    break;

  case 189:

/* Line 1455 of yacc.c  */
#line 1031 "vtkParse.y"
    {markSig(); postSig("<");}
    break;

  case 190:

/* Line 1455 of yacc.c  */
#line 1032 "vtkParse.y"
    {
      const char *cp;
      postSig(">(");
      currentFunction->ReturnClass = vtkstrdup(getTypeId());
      cp = copySig();
      (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (6)].str)) + strlen(cp) + 1);
      sprintf((yyval.str), "%s%s", (yyvsp[(1) - (6)].str), cp);
    }
    break;

  case 191:

/* Line 1455 of yacc.c  */
#line 1039 "vtkParse.y"
    { (yyval.str) = (yyvsp[(7) - (9)].str); }
    break;

  case 192:

/* Line 1455 of yacc.c  */
#line 1041 "vtkParse.y"
    { postSig(");"); closeSig(); }
    break;

  case 193:

/* Line 1455 of yacc.c  */
#line 1042 "vtkParse.y"
    {
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
#line 1051 "vtkParse.y"
    { postSig("("); }
    break;

  case 201:

/* Line 1455 of yacc.c  */
#line 1060 "vtkParse.y"
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

  case 202:

/* Line 1455 of yacc.c  */
#line 1073 "vtkParse.y"
    { postSig("(");}
    break;

  case 204:

/* Line 1455 of yacc.c  */
#line 1075 "vtkParse.y"
    {postSig("const ");}
    break;

  case 205:

/* Line 1455 of yacc.c  */
#line 1077 "vtkParse.y"
    {postSig("static ");}
    break;

  case 206:

/* Line 1455 of yacc.c  */
#line 1078 "vtkParse.y"
    {postSig("static ");}
    break;

  case 207:

/* Line 1455 of yacc.c  */
#line 1080 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 208:

/* Line 1455 of yacc.c  */
#line 1081 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 209:

/* Line 1455 of yacc.c  */
#line 1082 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 210:

/* Line 1455 of yacc.c  */
#line 1083 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 211:

/* Line 1455 of yacc.c  */
#line 1084 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 212:

/* Line 1455 of yacc.c  */
#line 1085 "vtkParse.y"
    {postSig((yyvsp[(1) - (1)].str));}
    break;

  case 220:

/* Line 1455 of yacc.c  */
#line 1093 "vtkParse.y"
    {clearTypeId();}
    break;

  case 222:

/* Line 1455 of yacc.c  */
#line 1095 "vtkParse.y"
    { postSig("...");}
    break;

  case 223:

/* Line 1455 of yacc.c  */
#line 1097 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; }
    break;

  case 224:

/* Line 1455 of yacc.c  */
#line 1099 "vtkParse.y"
    { clearTypeId(); currentFunction->NumberOfArguments++; postSig(", "); }
    break;

  case 226:

/* Line 1455 of yacc.c  */
#line 1102 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 227:

/* Line 1455 of yacc.c  */
#line 1103 "vtkParse.y"
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

  case 228:

/* Line 1455 of yacc.c  */
#line 1114 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 229:

/* Line 1455 of yacc.c  */
#line 1121 "vtkParse.y"
    { clearVarName(); clearVarValue(); }
    break;

  case 230:

/* Line 1455 of yacc.c  */
#line 1122 "vtkParse.y"
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

  case 231:

/* Line 1455 of yacc.c  */
#line 1133 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      if (getVarValue())
        {
        currentFunction->ArgValues[i] = vtkstrdup(getVarValue());
        }
    }
    break;

  case 232:

/* Line 1455 of yacc.c  */
#line 1141 "vtkParse.y"
    {
      int i = currentFunction->NumberOfArguments;
      postSig("void (*func)(void *) ");
      currentFunction->ArgCounts[i] = 0;
      currentFunction->ArgTypes[i] = VTK_PARSE_FUNCTION;
      currentFunction->ArgClasses[i] = vtkstrdup("function");
    }
    break;

  case 233:

/* Line 1455 of yacc.c  */
#line 1148 "vtkParse.y"
    { postSig("(&"); clearVarName(); }
    break;

  case 234:

/* Line 1455 of yacc.c  */
#line 1150 "vtkParse.y"
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

  case 235:

/* Line 1455 of yacc.c  */
#line 1161 "vtkParse.y"
    { postSig("("); postSig((yyvsp[(2) - (2)].str)); postSig("*");
      clearVarName(); }
    break;

  case 236:

/* Line 1455 of yacc.c  */
#line 1163 "vtkParse.y"
    { postSig(")("); }
    break;

  case 237:

/* Line 1455 of yacc.c  */
#line 1164 "vtkParse.y"
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

  case 242:

/* Line 1455 of yacc.c  */
#line 1180 "vtkParse.y"
    { postSig("="); }
    break;

  case 243:

/* Line 1455 of yacc.c  */
#line 1180 "vtkParse.y"
    { setVarValue((yyvsp[(3) - (3)].str)); }
    break;

  case 244:

/* Line 1455 of yacc.c  */
#line 1183 "vtkParse.y"
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

  case 258:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    {clearVarValue();}
    break;

  case 259:

/* Line 1455 of yacc.c  */
#line 1211 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(1) - (3)].integer); }
    break;

  case 261:

/* Line 1455 of yacc.c  */
#line 1214 "vtkParse.y"
    {setVarName((yyvsp[(1) - (1)].str));}
    break;

  case 262:

/* Line 1455 of yacc.c  */
#line 1216 "vtkParse.y"
    {
    (yyval.integer) = (yyvsp[(2) - (2)].integer); setVarName((yyvsp[(1) - (2)].str));}
    break;

  case 263:

/* Line 1455 of yacc.c  */
#line 1225 "vtkParse.y"
    {(yyval.integer) = 0;}
    break;

  case 264:

/* Line 1455 of yacc.c  */
#line 1225 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 265:

/* Line 1455 of yacc.c  */
#line 1228 "vtkParse.y"
    { char temp[100]; sprintf(temp,"[%i]",(yyvsp[(1) - (1)].integer));
                   postSig(temp); }
    break;

  case 266:

/* Line 1455 of yacc.c  */
#line 1230 "vtkParse.y"
    { (yyval.integer) =
                         ((VTK_PARSE_COUNT_START * (yyvsp[(1) - (3)].integer)) |
                          ((VTK_PARSE_POINTER + (yyvsp[(3) - (3)].integer)) &
                           VTK_PARSE_UNQUALIFIED_TYPE)); }
    break;

  case 267:

/* Line 1455 of yacc.c  */
#line 1235 "vtkParse.y"
    { postSig("[]");
              (yyval.integer) = ((VTK_PARSE_POINTER + (yyvsp[(4) - (4)].integer)) &
                             VTK_PARSE_UNQUALIFIED_TYPE); }
    break;

  case 268:

/* Line 1455 of yacc.c  */
#line 1239 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 269:

/* Line 1455 of yacc.c  */
#line 1240 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_STATIC | (yyvsp[(2) - (2)].integer));}
    break;

  case 270:

/* Line 1455 of yacc.c  */
#line 1242 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 271:

/* Line 1455 of yacc.c  */
#line 1243 "vtkParse.y"
    {(yyval.integer) = ((yyvsp[(1) - (2)].integer) | (yyvsp[(2) - (2)].integer));}
    break;

  case 272:

/* Line 1455 of yacc.c  */
#line 1245 "vtkParse.y"
    {(yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 273:

/* Line 1455 of yacc.c  */
#line 1246 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(2) - (2)].integer));}
    break;

  case 274:

/* Line 1455 of yacc.c  */
#line 1247 "vtkParse.y"
    {(yyval.integer) = (VTK_PARSE_CONST | (yyvsp[(1) - (2)].integer));}
    break;

  case 276:

/* Line 1455 of yacc.c  */
#line 1251 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 277:

/* Line 1455 of yacc.c  */
#line 1253 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 278:

/* Line 1455 of yacc.c  */
#line 1254 "vtkParse.y"
    {postSig("typename ");}
    break;

  case 279:

/* Line 1455 of yacc.c  */
#line 1255 "vtkParse.y"
    {postSig(" "); setTypeId((yyvsp[(3) - (3)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN;}
    break;

  case 280:

/* Line 1455 of yacc.c  */
#line 1258 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 281:

/* Line 1455 of yacc.c  */
#line 1259 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 282:

/* Line 1455 of yacc.c  */
#line 1260 "vtkParse.y"
    { markSig(); postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 283:

/* Line 1455 of yacc.c  */
#line 1261 "vtkParse.y"
    {chopSig(); postSig(">"); (yyval.str) = vtkstrdup(copySig()); clearTypeId();}
    break;

  case 285:

/* Line 1455 of yacc.c  */
#line 1263 "vtkParse.y"
    {postSig(", ");}
    break;

  case 287:

/* Line 1455 of yacc.c  */
#line 1265 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 288:

/* Line 1455 of yacc.c  */
#line 1266 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 289:

/* Line 1455 of yacc.c  */
#line 1267 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 290:

/* Line 1455 of yacc.c  */
#line 1268 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 291:

/* Line 1455 of yacc.c  */
#line 1271 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig((yyvsp[(1) - (3)].str));
           }
    break;

  case 292:

/* Line 1455 of yacc.c  */
#line 1277 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (3)].str))+strlen((yyvsp[(3) - (3)].str))+3);
             sprintf((yyval.str), "%s::%s", (yyvsp[(1) - (3)].str), (yyvsp[(3) - (3)].str));
             preScopeSig("");
           }
    break;

  case 293:

/* Line 1455 of yacc.c  */
#line 1283 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 294:

/* Line 1455 of yacc.c  */
#line 1284 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 295:

/* Line 1455 of yacc.c  */
#line 1285 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 296:

/* Line 1455 of yacc.c  */
#line 1286 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 297:

/* Line 1455 of yacc.c  */
#line 1287 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 298:

/* Line 1455 of yacc.c  */
#line 1288 "vtkParse.y"
    { (yyval.str) = (yyvsp[(1) - (1)].str); }
    break;

  case 299:

/* Line 1455 of yacc.c  */
#line 1301 "vtkParse.y"
    { postSig("&"); (yyval.integer) = VTK_PARSE_REF;}
    break;

  case 300:

/* Line 1455 of yacc.c  */
#line 1302 "vtkParse.y"
    { postSig("*"); (yyval.integer) = VTK_PARSE_POINTER;}
    break;

  case 301:

/* Line 1455 of yacc.c  */
#line 1303 "vtkParse.y"
    { postSig("*const "); (yyval.integer) = VTK_PARSE_CONST_POINTER;}
    break;

  case 302:

/* Line 1455 of yacc.c  */
#line 1304 "vtkParse.y"
    { postSig("*&"); (yyval.integer) = VTK_PARSE_POINTER_REF;}
    break;

  case 303:

/* Line 1455 of yacc.c  */
#line 1305 "vtkParse.y"
    { postSig("**"); (yyval.integer) = VTK_PARSE_POINTER_POINTER;}
    break;

  case 304:

/* Line 1455 of yacc.c  */
#line 1307 "vtkParse.y"
    { postSig("*const &"); (yyval.integer) = VTK_PARSE_CONST_POINTER_REF;}
    break;

  case 305:

/* Line 1455 of yacc.c  */
#line 1309 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_POINTER_CONST_POINTER;}
    break;

  case 306:

/* Line 1455 of yacc.c  */
#line 1311 "vtkParse.y"
    { postSig("*const *"); (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 307:

/* Line 1455 of yacc.c  */
#line 1312 "vtkParse.y"
    { postSig("**"); }
    break;

  case 308:

/* Line 1455 of yacc.c  */
#line 1313 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 309:

/* Line 1455 of yacc.c  */
#line 1314 "vtkParse.y"
    { postSig("*const *");}
    break;

  case 310:

/* Line 1455 of yacc.c  */
#line 1315 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 311:

/* Line 1455 of yacc.c  */
#line 1316 "vtkParse.y"
    { postSig("*const *const ");}
    break;

  case 312:

/* Line 1455 of yacc.c  */
#line 1317 "vtkParse.y"
    { (yyval.integer) = VTK_PARSE_BAD_INDIRECT;}
    break;

  case 313:

/* Line 1455 of yacc.c  */
#line 1320 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 314:

/* Line 1455 of yacc.c  */
#line 1321 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 315:

/* Line 1455 of yacc.c  */
#line 1322 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(2) - (2)].integer); }
    break;

  case 316:

/* Line 1455 of yacc.c  */
#line 1323 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 317:

/* Line 1455 of yacc.c  */
#line 1324 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 318:

/* Line 1455 of yacc.c  */
#line 1325 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 319:

/* Line 1455 of yacc.c  */
#line 1326 "vtkParse.y"
    { typeSig((yyvsp[(2) - (2)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 320:

/* Line 1455 of yacc.c  */
#line 1329 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 321:

/* Line 1455 of yacc.c  */
#line 1330 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 322:

/* Line 1455 of yacc.c  */
#line 1333 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_STRING;}
    break;

  case 323:

/* Line 1455 of yacc.c  */
#line 1334 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNICODE_STRING;}
    break;

  case 324:

/* Line 1455 of yacc.c  */
#line 1335 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OSTREAM; }
    break;

  case 325:

/* Line 1455 of yacc.c  */
#line 1336 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_ISTREAM; }
    break;

  case 326:

/* Line 1455 of yacc.c  */
#line 1337 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_UNKNOWN; }
    break;

  case 327:

/* Line 1455 of yacc.c  */
#line 1338 "vtkParse.y"
    { typeSig((yyvsp[(1) - (1)].str)); (yyval.integer) = VTK_PARSE_OBJECT; }
    break;

  case 328:

/* Line 1455 of yacc.c  */
#line 1341 "vtkParse.y"
    { typeSig("void"); (yyval.integer) = VTK_PARSE_VOID;}
    break;

  case 329:

/* Line 1455 of yacc.c  */
#line 1342 "vtkParse.y"
    { typeSig("float"); (yyval.integer) = VTK_PARSE_FLOAT;}
    break;

  case 330:

/* Line 1455 of yacc.c  */
#line 1343 "vtkParse.y"
    { typeSig("double"); (yyval.integer) = VTK_PARSE_DOUBLE;}
    break;

  case 331:

/* Line 1455 of yacc.c  */
#line 1344 "vtkParse.y"
    { typeSig("bool"); (yyval.integer) = VTK_PARSE_BOOL;}
    break;

  case 332:

/* Line 1455 of yacc.c  */
#line 1345 "vtkParse.y"
    {typeSig("signed char"); (yyval.integer) = VTK_PARSE_SIGNED_CHAR;}
    break;

  case 333:

/* Line 1455 of yacc.c  */
#line 1346 "vtkParse.y"
    { typeSig("vtkTypeInt8"); (yyval.integer) = VTK_PARSE_INT8; }
    break;

  case 334:

/* Line 1455 of yacc.c  */
#line 1347 "vtkParse.y"
    { typeSig("vtkTypeUInt8"); (yyval.integer) = VTK_PARSE_UINT8; }
    break;

  case 335:

/* Line 1455 of yacc.c  */
#line 1348 "vtkParse.y"
    { typeSig("vtkTypeInt16"); (yyval.integer) = VTK_PARSE_INT16; }
    break;

  case 336:

/* Line 1455 of yacc.c  */
#line 1349 "vtkParse.y"
    { typeSig("vtkTypeUInt16"); (yyval.integer) = VTK_PARSE_UINT16; }
    break;

  case 337:

/* Line 1455 of yacc.c  */
#line 1350 "vtkParse.y"
    { typeSig("vtkTypeInt32"); (yyval.integer) = VTK_PARSE_INT32; }
    break;

  case 338:

/* Line 1455 of yacc.c  */
#line 1351 "vtkParse.y"
    { typeSig("vtkTypeUInt32"); (yyval.integer) = VTK_PARSE_UINT32; }
    break;

  case 339:

/* Line 1455 of yacc.c  */
#line 1352 "vtkParse.y"
    { typeSig("vtkTypeInt64"); (yyval.integer) = VTK_PARSE_INT64; }
    break;

  case 340:

/* Line 1455 of yacc.c  */
#line 1353 "vtkParse.y"
    { typeSig("vtkTypeUInt64"); (yyval.integer) = VTK_PARSE_UINT64; }
    break;

  case 341:

/* Line 1455 of yacc.c  */
#line 1354 "vtkParse.y"
    { typeSig("vtkTypeFloat32"); (yyval.integer) = VTK_PARSE_FLOAT32; }
    break;

  case 342:

/* Line 1455 of yacc.c  */
#line 1355 "vtkParse.y"
    { typeSig("vtkTypeFloat64"); (yyval.integer) = VTK_PARSE_FLOAT64; }
    break;

  case 343:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    {typeSig("signed");}
    break;

  case 344:

/* Line 1455 of yacc.c  */
#line 1356 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(3) - (3)].integer);}
    break;

  case 345:

/* Line 1455 of yacc.c  */
#line 1357 "vtkParse.y"
    {typeSig("unsigned");}
    break;

  case 346:

/* Line 1455 of yacc.c  */
#line 1358 "vtkParse.y"
    { (yyval.integer) = (VTK_PARSE_UNSIGNED | (yyvsp[(3) - (3)].integer));}
    break;

  case 347:

/* Line 1455 of yacc.c  */
#line 1359 "vtkParse.y"
    { (yyval.integer) = (yyvsp[(1) - (1)].integer);}
    break;

  case 348:

/* Line 1455 of yacc.c  */
#line 1362 "vtkParse.y"
    { typeSig("char"); (yyval.integer) = VTK_PARSE_CHAR;}
    break;

  case 349:

/* Line 1455 of yacc.c  */
#line 1363 "vtkParse.y"
    { typeSig("int"); (yyval.integer) = VTK_PARSE_INT;}
    break;

  case 350:

/* Line 1455 of yacc.c  */
#line 1364 "vtkParse.y"
    { typeSig("short"); (yyval.integer) = VTK_PARSE_SHORT;}
    break;

  case 351:

/* Line 1455 of yacc.c  */
#line 1365 "vtkParse.y"
    { typeSig("long"); (yyval.integer) = VTK_PARSE_LONG;}
    break;

  case 352:

/* Line 1455 of yacc.c  */
#line 1366 "vtkParse.y"
    { typeSig("vtkIdType"); (yyval.integer) = VTK_PARSE_ID_TYPE;}
    break;

  case 353:

/* Line 1455 of yacc.c  */
#line 1367 "vtkParse.y"
    { typeSig("long long"); (yyval.integer) = VTK_PARSE_LONG_LONG;}
    break;

  case 354:

/* Line 1455 of yacc.c  */
#line 1368 "vtkParse.y"
    { typeSig("__int64"); (yyval.integer) = VTK_PARSE___INT64;}
    break;

  case 362:

/* Line 1455 of yacc.c  */
#line 1378 "vtkParse.y"
    {
      vtkParse_AddPointerToArray(&currentClass->SuperClasses,
                                 &currentClass->NumberOfSuperClasses,
                                 vtkstrdup((yyvsp[(2) - (2)].str)));
    }
    break;

  case 363:

/* Line 1455 of yacc.c  */
#line 1384 "vtkParse.y"
    {in_public = 1; in_protected = 0;}
    break;

  case 364:

/* Line 1455 of yacc.c  */
#line 1385 "vtkParse.y"
    {in_public = 0; in_protected = 0;}
    break;

  case 365:

/* Line 1455 of yacc.c  */
#line 1386 "vtkParse.y"
    {in_public = 0; in_protected = 1;}
    break;

  case 366:

/* Line 1455 of yacc.c  */
#line 1388 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str);}
    break;

  case 367:

/* Line 1455 of yacc.c  */
#line 1389 "vtkParse.y"
    {postSig("+");}
    break;

  case 368:

/* Line 1455 of yacc.c  */
#line 1389 "vtkParse.y"
    {(yyval.str) = (yyvsp[(3) - (3)].str);}
    break;

  case 369:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    {postSig("-");}
    break;

  case 370:

/* Line 1455 of yacc.c  */
#line 1390 "vtkParse.y"
    {
             (yyval.str) = (char *)malloc(strlen((yyvsp[(3) - (3)].str))+2);
             sprintf((yyval.str), "-%s", (yyvsp[(3) - (3)].str)); }
    break;

  case 371:

/* Line 1455 of yacc.c  */
#line 1393 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 372:

/* Line 1455 of yacc.c  */
#line 1394 "vtkParse.y"
    {postSig("(");}
    break;

  case 373:

/* Line 1455 of yacc.c  */
#line 1394 "vtkParse.y"
    {postSig(")"); (yyval.str) = (yyvsp[(3) - (4)].str);}
    break;

  case 374:

/* Line 1455 of yacc.c  */
#line 1395 "vtkParse.y"
    {postSig((yyvsp[(1) - (2)].str)); postSig("<");}
    break;

  case 375:

/* Line 1455 of yacc.c  */
#line 1396 "vtkParse.y"
    {postSig("<(");}
    break;

  case 376:

/* Line 1455 of yacc.c  */
#line 1397 "vtkParse.y"
    {
            postSig(")");
            (yyval.str) = (char *)malloc(strlen((yyvsp[(1) - (9)].str)) + strlen(getTypeId()) +
                                     strlen((yyvsp[(8) - (9)].str)) + 5);
            sprintf((yyval.str), "%s<%s>(%s)", (yyvsp[(1) - (9)].str), getTypeId(), (yyvsp[(8) - (9)].str));
            }
    break;

  case 377:

/* Line 1455 of yacc.c  */
#line 1404 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 378:

/* Line 1455 of yacc.c  */
#line 1405 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 379:

/* Line 1455 of yacc.c  */
#line 1406 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 380:

/* Line 1455 of yacc.c  */
#line 1407 "vtkParse.y"
    {(yyval.str) = (yyvsp[(1) - (1)].str); postSig((yyvsp[(1) - (1)].str));}
    break;

  case 381:

/* Line 1455 of yacc.c  */
#line 1408 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 382:

/* Line 1455 of yacc.c  */
#line 1410 "vtkParse.y"
    {(yyval.str) = vtkstrdup(add_const_scope((yyvsp[(1) - (1)].str)));
                postSig((yyvsp[(1) - (1)].str));}
    break;

  case 383:

/* Line 1455 of yacc.c  */
#line 1414 "vtkParse.y"
    {preSig("void Set"); postSig("(");}
    break;

  case 384:

/* Line 1455 of yacc.c  */
#line 1415 "vtkParse.y"
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

  case 385:

/* Line 1455 of yacc.c  */
#line 1429 "vtkParse.y"
    {postSig("Get");}
    break;

  case 386:

/* Line 1455 of yacc.c  */
#line 1430 "vtkParse.y"
    {markSig();}
    break;

  case 387:

/* Line 1455 of yacc.c  */
#line 1430 "vtkParse.y"
    {swapSig();}
    break;

  case 388:

/* Line 1455 of yacc.c  */
#line 1431 "vtkParse.y"
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

  case 389:

/* Line 1455 of yacc.c  */
#line 1443 "vtkParse.y"
    {preSig("void Set");}
    break;

  case 390:

/* Line 1455 of yacc.c  */
#line 1444 "vtkParse.y"
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

  case 391:

/* Line 1455 of yacc.c  */
#line 1458 "vtkParse.y"
    {preSig("char *Get");}
    break;

  case 392:

/* Line 1455 of yacc.c  */
#line 1459 "vtkParse.y"
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

  case 393:

/* Line 1455 of yacc.c  */
#line 1472 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 394:

/* Line 1455 of yacc.c  */
#line 1472 "vtkParse.y"
    {closeSig();}
    break;

  case 395:

/* Line 1455 of yacc.c  */
#line 1474 "vtkParse.y"
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

  case 396:

/* Line 1455 of yacc.c  */
#line 1519 "vtkParse.y"
    {preSig("void Set"); postSig("("); }
    break;

  case 397:

/* Line 1455 of yacc.c  */
#line 1520 "vtkParse.y"
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

  case 398:

/* Line 1455 of yacc.c  */
#line 1534 "vtkParse.y"
    {postSig("*Get");}
    break;

  case 399:

/* Line 1455 of yacc.c  */
#line 1535 "vtkParse.y"
    {markSig();}
    break;

  case 400:

/* Line 1455 of yacc.c  */
#line 1535 "vtkParse.y"
    {swapSig();}
    break;

  case 401:

/* Line 1455 of yacc.c  */
#line 1536 "vtkParse.y"
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

  case 402:

/* Line 1455 of yacc.c  */
#line 1549 "vtkParse.y"
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

  case 403:

/* Line 1455 of yacc.c  */
#line 1574 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 404:

/* Line 1455 of yacc.c  */
#line 1575 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 405:

/* Line 1455 of yacc.c  */
#line 1579 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 406:

/* Line 1455 of yacc.c  */
#line 1580 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 2);
   }
    break;

  case 407:

/* Line 1455 of yacc.c  */
#line 1584 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 408:

/* Line 1455 of yacc.c  */
#line 1585 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 409:

/* Line 1455 of yacc.c  */
#line 1589 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 410:

/* Line 1455 of yacc.c  */
#line 1590 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 3);
   }
    break;

  case 411:

/* Line 1455 of yacc.c  */
#line 1594 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 412:

/* Line 1455 of yacc.c  */
#line 1595 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 413:

/* Line 1455 of yacc.c  */
#line 1599 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 414:

/* Line 1455 of yacc.c  */
#line 1600 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 4);
   }
    break;

  case 415:

/* Line 1455 of yacc.c  */
#line 1604 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 416:

/* Line 1455 of yacc.c  */
#line 1605 "vtkParse.y"
    {
   chopSig();
   outputSetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 417:

/* Line 1455 of yacc.c  */
#line 1609 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 418:

/* Line 1455 of yacc.c  */
#line 1610 "vtkParse.y"
    {
   chopSig();
   outputGetVectorMacro((yyvsp[(3) - (7)].str), (yyvsp[(6) - (7)].integer), copySig(), 6);
   }
    break;

  case 419:

/* Line 1455 of yacc.c  */
#line 1614 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 420:

/* Line 1455 of yacc.c  */
#line 1616 "vtkParse.y"
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

  case 421:

/* Line 1455 of yacc.c  */
#line 1635 "vtkParse.y"
    {delSig(); markSig();}
    break;

  case 422:

/* Line 1455 of yacc.c  */
#line 1637 "vtkParse.y"
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

  case 423:

/* Line 1455 of yacc.c  */
#line 1657 "vtkParse.y"
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

  case 424:

/* Line 1455 of yacc.c  */
#line 1723 "vtkParse.y"
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

  case 425:

/* Line 1455 of yacc.c  */
#line 1793 "vtkParse.y"
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

  case 426:

/* Line 1455 of yacc.c  */
#line 1860 "vtkParse.y"
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

  case 427:

/* Line 1455 of yacc.c  */
#line 1933 "vtkParse.y"
    { (yyval.str) = "operator()"; }
    break;

  case 428:

/* Line 1455 of yacc.c  */
#line 1934 "vtkParse.y"
    { (yyval.str) = "operator[]"; }
    break;

  case 429:

/* Line 1455 of yacc.c  */
#line 1935 "vtkParse.y"
    { (yyval.str) = "operator new[]"; }
    break;

  case 430:

/* Line 1455 of yacc.c  */
#line 1936 "vtkParse.y"
    { (yyval.str) = "operator delete[]"; }
    break;

  case 432:

/* Line 1455 of yacc.c  */
#line 1939 "vtkParse.y"
    { (yyval.str) = "operator="; }
    break;

  case 433:

/* Line 1455 of yacc.c  */
#line 1940 "vtkParse.y"
    { (yyval.str) = "operator*"; }
    break;

  case 434:

/* Line 1455 of yacc.c  */
#line 1940 "vtkParse.y"
    { (yyval.str) = "operator/"; }
    break;

  case 435:

/* Line 1455 of yacc.c  */
#line 1941 "vtkParse.y"
    { (yyval.str) = "operator-"; }
    break;

  case 436:

/* Line 1455 of yacc.c  */
#line 1941 "vtkParse.y"
    { (yyval.str) = "operator+"; }
    break;

  case 437:

/* Line 1455 of yacc.c  */
#line 1942 "vtkParse.y"
    { (yyval.str) = "operator!"; }
    break;

  case 438:

/* Line 1455 of yacc.c  */
#line 1942 "vtkParse.y"
    { (yyval.str) = "operator~"; }
    break;

  case 439:

/* Line 1455 of yacc.c  */
#line 1943 "vtkParse.y"
    { (yyval.str) = "operator,"; }
    break;

  case 440:

/* Line 1455 of yacc.c  */
#line 1943 "vtkParse.y"
    { (yyval.str) = "operator<"; }
    break;

  case 441:

/* Line 1455 of yacc.c  */
#line 1944 "vtkParse.y"
    { (yyval.str) = "operator>"; }
    break;

  case 442:

/* Line 1455 of yacc.c  */
#line 1944 "vtkParse.y"
    { (yyval.str) = "operator&"; }
    break;

  case 443:

/* Line 1455 of yacc.c  */
#line 1945 "vtkParse.y"
    { (yyval.str) = "operator|"; }
    break;

  case 444:

/* Line 1455 of yacc.c  */
#line 1945 "vtkParse.y"
    { (yyval.str) = "operator^"; }
    break;

  case 445:

/* Line 1455 of yacc.c  */
#line 1946 "vtkParse.y"
    { (yyval.str) = "operator%"; }
    break;

  case 446:

/* Line 1455 of yacc.c  */
#line 1947 "vtkParse.y"
    { (yyval.str) = "operator new"; }
    break;

  case 447:

/* Line 1455 of yacc.c  */
#line 1948 "vtkParse.y"
    { (yyval.str) = "operator delete"; }
    break;

  case 448:

/* Line 1455 of yacc.c  */
#line 1949 "vtkParse.y"
    { (yyval.str) = "operator<<="; }
    break;

  case 449:

/* Line 1455 of yacc.c  */
#line 1950 "vtkParse.y"
    { (yyval.str) = "operator>>="; }
    break;

  case 450:

/* Line 1455 of yacc.c  */
#line 1951 "vtkParse.y"
    { (yyval.str) = "operator<<"; }
    break;

  case 451:

/* Line 1455 of yacc.c  */
#line 1952 "vtkParse.y"
    { (yyval.str) = "operator>>"; }
    break;

  case 452:

/* Line 1455 of yacc.c  */
#line 1953 "vtkParse.y"
    { (yyval.str) = "operator->*"; }
    break;

  case 453:

/* Line 1455 of yacc.c  */
#line 1954 "vtkParse.y"
    { (yyval.str) = "operator->"; }
    break;

  case 454:

/* Line 1455 of yacc.c  */
#line 1955 "vtkParse.y"
    { (yyval.str) = "operator+="; }
    break;

  case 455:

/* Line 1455 of yacc.c  */
#line 1956 "vtkParse.y"
    { (yyval.str) = "operator-="; }
    break;

  case 456:

/* Line 1455 of yacc.c  */
#line 1957 "vtkParse.y"
    { (yyval.str) = "operator*="; }
    break;

  case 457:

/* Line 1455 of yacc.c  */
#line 1958 "vtkParse.y"
    { (yyval.str) = "operator/="; }
    break;

  case 458:

/* Line 1455 of yacc.c  */
#line 1959 "vtkParse.y"
    { (yyval.str) = "operator%="; }
    break;

  case 459:

/* Line 1455 of yacc.c  */
#line 1960 "vtkParse.y"
    { (yyval.str) = "operator++"; }
    break;

  case 460:

/* Line 1455 of yacc.c  */
#line 1961 "vtkParse.y"
    { (yyval.str) = "operator--"; }
    break;

  case 461:

/* Line 1455 of yacc.c  */
#line 1962 "vtkParse.y"
    { (yyval.str) = "operator&="; }
    break;

  case 462:

/* Line 1455 of yacc.c  */
#line 1963 "vtkParse.y"
    { (yyval.str) = "operator|="; }
    break;

  case 463:

/* Line 1455 of yacc.c  */
#line 1964 "vtkParse.y"
    { (yyval.str) = "operator^="; }
    break;

  case 464:

/* Line 1455 of yacc.c  */
#line 1965 "vtkParse.y"
    {(yyval.str) = "operator&&=";}
    break;

  case 465:

/* Line 1455 of yacc.c  */
#line 1966 "vtkParse.y"
    {(yyval.str) = "operator||=";}
    break;

  case 466:

/* Line 1455 of yacc.c  */
#line 1967 "vtkParse.y"
    { (yyval.str) = "operator&&"; }
    break;

  case 467:

/* Line 1455 of yacc.c  */
#line 1968 "vtkParse.y"
    { (yyval.str) = "operator||"; }
    break;

  case 468:

/* Line 1455 of yacc.c  */
#line 1969 "vtkParse.y"
    { (yyval.str) = "operator=="; }
    break;

  case 469:

/* Line 1455 of yacc.c  */
#line 1970 "vtkParse.y"
    { (yyval.str) = "operator!="; }
    break;

  case 470:

/* Line 1455 of yacc.c  */
#line 1971 "vtkParse.y"
    { (yyval.str) = "operator<="; }
    break;

  case 471:

/* Line 1455 of yacc.c  */
#line 1972 "vtkParse.y"
    { (yyval.str) = "operator>="; }
    break;

  case 472:

/* Line 1455 of yacc.c  */
#line 1979 "vtkParse.y"
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
#line 7201 "vtkParse.tab.c"
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
#line 2021 "vtkParse.y"

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
  int i;

  func->Name = NULL;
  func->ItemType = VTK_FUNCTION_INFO;
  func->Template = NULL;
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
  cls->Template = NULL;
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
  file_info->ItemType = VTK_FILE_INFO;
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

  in_public = 0;
  in_protected = 0;
  if (is_struct)
    {
    in_public = 1;
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

