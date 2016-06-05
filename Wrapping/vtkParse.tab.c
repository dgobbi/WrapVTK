/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Skeleton implementation for Bison GLR parsers in C

   Copyright (C) 2002-2013 Free Software Foundation, Inc.

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

/* C GLR parser skeleton written by Paul Hilfinger.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "glr.c"

/* Pure parsers.  */
#define YYPURE 0






/* First part of user declarations.  */
#line 15 "vtkParse.y" /* glr.c:207  */


/*

This file must be translated to C and modified to build everywhere.

Run yacc like this:

  yacc -b vtkParse vtkParse.y

Modify vtkParse.tab.c:
  - convert TABs to spaces (eight per tab)
  - remove spaces from ends of lines, s/ *$//g
  - replace all instances of "static inline" with "static".
*/

/*
The purpose of this parser is to read C++ header files in order to
generate data structures that describe the C++ interface of a library,
one header file at a time.  As such, it is not a complete C++ parser.
It only parses what is relevant to the interface and skips the rest.

While the parser reads method definitions, type definitions, and
template definitions it generates a "signature" which is a string
that matches (apart from whitespace) the text that was parsed.

While parsing types, the parser creates an unsigned int that describes
the type as well as creating other data structures for arrays, function
pointers, etc.  The parser also creates a typeId string, which is either
a simple id that gives the class name or type name, or is "function" for
function pointer types, or "method" for method pointer types.
*/

/*
Conformance Notes:

This parser was designed empirically and incrementally.  It has been
refactored to make it more similar to the C++ 1998 grammar, but there
are still many very significant differences.

The most significant difference between this parser and a "standard"
parser is that it only parses declarations in detail.  All other
statements and expressions are parsed as arbitrary sequences of symbols,
without any syntactic analysis.

The "unqualified_id" does not directly include "operator_function_id" or
"conversion_function_id" (e.g. ids like "operator=" or "operator int*").
Instead, these two id types are used to allow operator functions to be
handled by their own rules, rather than by the generic function rules.
These ids can only be used in function declarations and using declarations.

Types are handled quite differently from the C++ BNF.  These differences
represent a prolonged (and ultimately successful) attempt to empirically
create a yacc parser without any shift/reduce conflicts.  The rules for
types are organized according to the way that types are usually defined
in working code, rather than strictly according to C++ grammar.


The declaration specifier "typedef" can only appear at the beginning
of a declaration sequence.  There are also restrictions on where class
and enum specifiers can be used: you can declare a new struct within a
variable declaration, but not within a parameter declaration.

The lexer returns each of "(scope::*", "(*", "(a::b::*", etc. as single
tokens.  The C++ BNF, in contrast, would consider these to be a "("
followed by a "ptr_operator".  The lexer concatenates these tokens in
order to eliminate shift/reduce conflicts in the parser.  However, this
means that this parser will only recognize "scope::*" as valid if it is
preceded by "(", e.g. as part of a member function pointer specification.

Variables that are initialized via constructor arguments, for example
"someclass variablename(arglist)", must take a literals as the first
argument.  If an identifier is used as the first argument, then the
parser will interpret the variable declaration as a function declaration,
since the parser will assume the identifier names a type.

An odd bit of C++ ambiguity is that y(x); can be interpreted variously
as declaration of variable "x" of type "y", as a function call if "y"
is the name of a function, or as a constructor if "y" is the name of
a class.  This parser always interprets this pattern as a constructor
declaration, because function calls are ignored by the parser, and
variable declarations of the form y(x); are exceedingly rare compared
to the more usual form y x; without parentheses.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define yyerror(a) print_parser_error(a, NULL, 0)
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

/* Map from the type anonymous_enumeration in vtkType.h to the
   VTK wrapping type system number for the type. */

#include "vtkParse.h"
#include "vtkParsePreprocess.h"
#include "vtkParseData.h"
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
   the primitive_type production rule code.  */
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

/* Define the kinds of [[attributes]] to collect */
enum
  {
  VTK_PARSE_ATTRIB_NONE,
  VTK_PARSE_ATTRIB_DECL,  /* modify a declaration */
  VTK_PARSE_ATTRIB_ID,    /* modify an id */
  VTK_PARSE_ATTRIB_REF,   /* modify *, &, or && */
  VTK_PARSE_ATTRIB_FUNC,  /* modify a function or method */
  VTK_PARSE_ATTRIB_ARRAY, /* modify an array size specifier */
  VTK_PARSE_ATTRIB_KEY    /* modify class, struct, union, or enum */
  };

#define vtkParseDebug(s1, s2) \
  if ( parseDebug ) { fprintf(stderr, "   %s %s\n", s1, s2); }

/* the tokenizer */
int yylex(void);

/* global variables */
FileInfo      *data = NULL;
int            parseDebug;

/* the "preprocessor" */
PreprocessInfo *preprocessor = NULL;

/* include dirs specified on the command line */
unsigned long  NumberOfIncludeDirectories= 0;
const char   **IncludeDirectories;

/* macros specified on the command line */
unsigned long  NumberOfDefinitions = 0;
const char   **Definitions;

/* options that can be set by the programs that use the parser */
int            IgnoreBTX = 0;
int            Recursive = 0;
const char    *CommandName = NULL;

/* various state variables */
NamespaceInfo *currentNamespace = NULL;
ClassInfo     *currentClass = NULL;
FunctionInfo  *currentFunction = NULL;
TemplateInfo  *currentTemplate = NULL;
const char    *currentEnumName = NULL;
const char    *currentEnumValue = NULL;
unsigned int   currentEnumType = 0;
parse_access_t access_level = VTK_ACCESS_PUBLIC;

/* functions from vtkParse.l */
void print_parser_error(const char *text, const char *cp, size_t n);

/* helper functions */
const char *type_class(unsigned int type, const char *classname);
void start_class(const char *classname, int is_struct_or_union);
void end_class();
void add_base_class(ClassInfo *cls, const char *name, int access_lev,
                    unsigned int extra);
void output_friend_function(void);
void output_function(void);
void reject_function(void);
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count);
void add_parameter(FunctionInfo *func, unsigned int type,
                   const char *classname, unsigned long count);
void add_template_parameter(unsigned int datatype,
                            unsigned int extra, const char *funcSig);
void add_using(const char *name, int is_namespace);
void start_enum(const char *name, int is_scoped,
                unsigned int type, const char *basename);
void add_enum(const char *name, const char *value);
void end_enum();
unsigned int guess_constant_type(const char *value);
void add_constant(const char *name, const char *value,
                  unsigned int type, const char *typeclass, int global);
const char *add_const_scope(const char *name);
void prepend_scope(char *cp, const char *arg);
unsigned int guess_id_type(const char *cp);
unsigned int add_indirection(unsigned int tval, unsigned int ptr);
unsigned int add_indirection_to_array(unsigned int ptr);
void handle_complex_type(ValueInfo *val, unsigned int datatype,
                         unsigned int extra, const char *funcSig);
void handle_function_type(ValueInfo *param, const char *name,
                          const char *funcSig);
void handle_attribute(const char *att, int pack);
void add_legacy_parameter(FunctionInfo *func, ValueInfo *param);

void outputSetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n);
void outputGetVectorMacro(const char *var, unsigned int paramType,
                          const char *typeText, unsigned long n);


/*----------------------------------------------------------------
 * String utility methods
 *
 * Strings are centrally allocated and are const, and they are not
 * freed until the program exits.  If they need to be freed before
 * then, vtkParse_FreeStringCache() can be called.
 */

/* duplicate the first n bytes of a string and terminate */
static const char *vtkstrndup(const char *in, size_t n)
{
  return vtkParse_CacheString(data->Strings, in, n);
}

/* duplicate a string */
static const char *vtkstrdup(const char *in)
{
  if (in)
    {
    in = vtkParse_CacheString(data->Strings, in, strlen(in));
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
  cp = vtkParse_NewString(data->Strings, m);
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

enum comment_enum
{
  ClosedComment = -2,
  StickyComment = -1,
  NoComment = 0,
  NormalComment = 1,
  NameComment = 2,
  DescriptionComment = 3,
  SeeAlsoComment = 4,
  CaveatsComment = 5,
  DoxygenComment = 6,
  TrailingComment = 7
};

/* "private" variables */
char          *commentText = NULL;
size_t         commentLength = 0;
size_t         commentAllocatedLength = 0;
int            commentState = 0;
int            commentMemberGroup = 0;
int            commentGroupDepth = 0;
parse_dox_t    commentType = DOX_COMMAND_OTHER;
const char    *commentTarget = NULL;

/* Struct for recognizing certain doxygen commands */
struct DoxygenCommandInfo
{
  const char *name;
  size_t length;
  parse_dox_t type;
};

/* List of doxygen commands (@cond is not handled yet) */
struct DoxygenCommandInfo doxygenCommands[] = {
  { "def", 3, DOX_COMMAND_DEF },
  { "category", 8, DOX_COMMAND_CATEGORY },
  { "interface", 9, DOX_COMMAND_INTERFACE },
  { "protocol", 8, DOX_COMMAND_PROTOCOL },
  { "class", 5, DOX_COMMAND_CLASS },
  { "enum", 4, DOX_COMMAND_ENUM },
  { "struct", 6, DOX_COMMAND_STRUCT },
  { "union", 5, DOX_COMMAND_UNION },
  { "namespace", 9, DOX_COMMAND_NAMESPACE },
  { "typedef", 7, DOX_COMMAND_TYPEDEF },
  { "fn", 2, DOX_COMMAND_FN },
  { "property", 8, DOX_COMMAND_PROPERTY },
  { "var", 3, DOX_COMMAND_VAR },
  { "name", 4, DOX_COMMAND_NAME },
  { "defgroup", 8, DOX_COMMAND_DEFGROUP },
  { "addtogroup", 10, DOX_COMMAND_ADDTOGROUP },
  { "weakgroup", 9, DOX_COMMAND_WEAKGROUP },
  { "example", 7, DOX_COMMAND_EXAMPLE },
  { "file", 4, DOX_COMMAND_FILE },
  { "dir", 3, DOX_COMMAND_DIR },
  { "mainpage", 8, DOX_COMMAND_MAINPAGE },
  { "page", 4, DOX_COMMAND_PAGE },
  { "subpage", 7, DOX_COMMAND_SUBPAGE },
  { "internal", 8, DOX_COMMAND_INTERNAL },
  { "package", 7, DOX_COMMAND_PACKAGE },
  { "privatesection", 14, DOX_COMMAND_PRIVATESECTION },
  { "protectedsection", 16, DOX_COMMAND_PROTECTEDSECTION },
  { "publicsection", 13, DOX_COMMAND_PUBLICSECTION },
  { NULL, 0, DOX_COMMAND_OTHER }
};

void closeComment();

/* Clear the comment buffer */
void clearComment()
{
  commentLength = 0;
  if (commentText)
    {
    commentText[commentLength] = '\0';
    }
  commentState = 0;
  commentType = DOX_COMMAND_OTHER;
}

/* This is called when entering or leaving a comment block */
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

/* Get the text from the comment buffer */
const char *getComment()
{
  const char *text = commentText;
  const char *cp = commentText;
  size_t l = commentLength;

  if (commentText != NULL && commentState != 0)
    {
    /* strip trailing blank lines */
    while (l > 0 && (cp[l-1] == ' ' || cp[l-1] == '\t' ||
                     cp[l-1] == '\r' || cp[l-1] == '\n'))
      {
      if (cp[l-1] == '\n')
        {
        commentLength = l;
        }
      l--;
      }
    commentText[commentLength] = '\0';
    /* strip leading blank lines */
    while (*cp == ' ' || *cp == '\t' || *cp == '\r' || *cp == '\n')
      {
      if (*cp == '\n')
        {
        text = cp + 1;
        }
      cp++;
      }
    return text;
    }

  return NULL;
}

/* Check for doxygen commands that mark unwanted comments */
parse_dox_t checkDoxygenCommand(const char *text, size_t n)
{
  struct DoxygenCommandInfo *info;
  for (info = doxygenCommands; info->name; info++)
    {
    if (info->length == n && strncmp(text, info->name, n) == 0)
      {
      return info->type;
      }
    }
  return DOX_COMMAND_OTHER;
}

/* This is called whenever a comment line is encountered */
void addCommentLine(const char *line, size_t n, int type)
{
  size_t i, j;
  parse_dox_t t = DOX_COMMAND_OTHER;

  if (type == DoxygenComment || commentState == DoxygenComment)
    {
    if (type == DoxygenComment)
      {
      /* search for '@' and backslash */
      for (i = 0; i+1 < n; i++)
        {
        if (line[i] == '@' || line[i] == '\\')
          {
          j = ++i;
          while (i < n && line[i] >= 'a' && line[i] <= 'z')
            {
            i++;
            }
          if (line[i-1] == '@' && (line[i] == '{' || line[i] == '}'))
            {
            if (line[i] == '{')
              {
              commentGroupDepth++;
              }
            else
              {
              --commentGroupDepth;
              }
            closeComment();
            return;
            }
          else
            {
            /* record the type of this comment */
            t = checkDoxygenCommand(&line[j], i-j);
            if (t != DOX_COMMAND_OTHER)
              {
              while (i < n && line[i] == ' ')
                {
                i++;
                }
              j = i;
              while (i < n && vtkParse_CharType(line[i], CPRE_XID))
                {
                i++;
                }
              commentTarget = vtkstrndup(&line[j], i-j);
              /* remove this line from the comment */
              n = 0;
              }
            }
          }
        }
      }
    else if (commentState == DoxygenComment)
      {
      return;
      }
    if (commentState != type)
      {
      setCommentState(type);
      }
    if (t != DOX_COMMAND_OTHER)
      {
      commentType = t;
      }
    }
  else if (type == TrailingComment)
    {
    if (commentState != type)
      {
      setCommentState(type);
      }
    }
  else if (commentState == 0 ||
           commentState == StickyComment ||
           commentState == ClosedComment)
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
    if (!commentText)
      {
      fprintf(stderr, "Wrapping: out of memory\n");
      exit(1);
      }
    }

  if (n > 0)
    {
    memcpy(&commentText[commentLength], line, n);
    }
  commentLength += n;
  commentText[commentLength++] = '\n';
  commentText[commentLength] = '\0';
}

/* Store a doxygen comment */
void storeComment()
{
  CommentInfo *info = (CommentInfo *)malloc(sizeof(CommentInfo));
  vtkParse_InitComment(info);
  info->Type = commentType;
  info->Name = commentTarget;
  info->Comment = vtkstrdup(getComment());

  if (commentType >= DOX_COMMAND_DEFGROUP)
    {
    /* comment has no scope, it is global to the project */
    vtkParse_AddCommentToNamespace(data->Contents, info);
    }
  else
    {
    /* comment is scoped to current namespace */
    if (currentClass)
      {
      vtkParse_AddCommentToClass(currentClass, info);
      }
    else
      {
      vtkParse_AddCommentToNamespace(currentNamespace, info);
      }
    }
}

/* Apply a doxygen trailing comment to the previous item */
void applyComment(ClassInfo *cls)
{
  unsigned long i;
  ItemInfo *item;
  const char *comment = vtkstrdup(getComment());

  i = cls->NumberOfItems;
  if (i > 0)
    {
    item = &cls->Items[--i];
    if (item->Type == VTK_NAMESPACE_INFO)
      {
      cls->Namespaces[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_CLASS_INFO ||
             item->Type == VTK_STRUCT_INFO ||
             item->Type == VTK_UNION_INFO)
      {
      cls->Classes[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_ENUM_INFO)
      {
      cls->Enums[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_FUNCTION_INFO)
      {
      cls->Functions[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_VARIABLE_INFO)
      {
      cls->Variables[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_CONSTANT_INFO)
      {
      cls->Constants[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_TYPEDEF_INFO)
      {
      cls->Typedefs[item->Index]->Comment = comment;
      }
    else if (item->Type == VTK_USING_INFO)
      {
      cls->Usings[item->Index]->Comment = comment;
      }
    }
}

/* This is called when a comment block ends */
void closeComment()
{
  const char *cp;
  size_t l;

  switch (commentState)
    {
    case ClosedComment:
      clearComment();
      break;
    case NormalComment:
      /* Make comment persist until a new comment starts */
      commentState = StickyComment;
      break;
    case NameComment:
      /* For NameComment, strip the comment */
      cp = getComment();
      l = strlen(cp);
      while (l > 0 &&
             (cp[l-1] == '\n' || cp[l-1] == '\r' || cp[l-1] == ' '))
        {
        l--;
        }
      data->NameComment = vtkstrndup(cp, l);
      clearComment();
      break;
    case DescriptionComment:
      data->Description = vtkstrdup(getComment());
      clearComment();
      break;
    case SeeAlsoComment:
      data->SeeAlso = vtkstrdup(getComment());
      clearComment();
      break;
    case CaveatsComment:
      data->Caveats = vtkstrdup(getComment());
      clearComment();
      break;
    case DoxygenComment:
      if (commentType == DOX_COMMAND_OTHER)
        {
        /* Apply only to next item unless within a member group */
        commentState = (commentMemberGroup ? StickyComment : ClosedComment);
        }
      else
        {
        /* Comment might not apply to next item, so store it */
        storeComment();
        clearComment();
        }
      break;
    case TrailingComment:
      if (currentClass)
        {
        applyComment(currentClass);
        }
      else
        {
        applyComment(currentNamespace);
        }
      clearComment();
      break;
    }
}

/* This is called when a blank line occurs in the header file */
void commentBreak()
{
  if (!commentMemberGroup && commentState == StickyComment)
    {
    clearComment();
    }
  else if (commentState == DoxygenComment)
    {
    /* blank lines only end targeted doxygen comments */
    if (commentType != DOX_COMMAND_OTHER)
      {
      closeComment();
      }
    }
  else
    {
    /* blank lines end VTK comments */
    closeComment();
    }
}

/* This is called when doxygen @{ or @} are encountered */
void setCommentMemberGroup(int g)
{
  commentMemberGroup = g;
  clearComment();
}

/* Assign comments to the items that they apply to */
void assignComments(ClassInfo *cls)
{
  unsigned long i, j;
  int t;
  const char *name;
  const char *comment;

  for (i = 0; i < cls->NumberOfComments; i++)
    {
    t = cls->Comments[i]->Type;
    name = cls->Comments[i]->Name;
    comment = cls->Comments[i]->Comment;
    /* find the item the comment applies to */
    if (t == DOX_COMMAND_CLASS ||
        t == DOX_COMMAND_STRUCT ||
        t == DOX_COMMAND_UNION)
      {
      for (j = 0; j < cls->NumberOfClasses; j++)
        {
        if (cls->Classes[j]->Name && name &&
            strcmp(cls->Classes[j]->Name, name) == 0)
          {
          cls->Classes[j]->Comment = comment;
          break;
          }
        }
      }
    else if (t == DOX_COMMAND_ENUM)
      {
      for (j = 0; j < cls->NumberOfEnums; j++)
        {
        if (cls->Enums[j]->Name && name &&
            strcmp(cls->Enums[j]->Name, name) == 0)
          {
          cls->Enums[j]->Comment = comment;
          break;
          }
        }
      }
    else if (t == DOX_COMMAND_TYPEDEF)
      {
      for (j = 0; j < cls->NumberOfTypedefs; j++)
        {
        if (cls->Typedefs[j]->Name && name &&
            strcmp(cls->Typedefs[j]->Name, name) == 0)
          {
          cls->Typedefs[j]->Comment = comment;
          break;
          }
        }
      }
    else if (t == DOX_COMMAND_FN)
      {
      for (j = 0; j < cls->NumberOfFunctions; j++)
        {
        if (cls->Functions[j]->Name && name &&
            strcmp(cls->Functions[j]->Name, name) == 0)
          {
          cls->Functions[j]->Comment = comment;
          break;
          }
        }
      }
    else if (t == DOX_COMMAND_VAR)
      {
      for (j = 0; j < cls->NumberOfVariables; j++)
        {
        if (cls->Variables[j]->Name && name &&
            strcmp(cls->Variables[j]->Name, name) == 0)
          {
          cls->Variables[j]->Comment = comment;
          break;
          }
        }
      for (j = 0; j < cls->NumberOfConstants; j++)
        {
        if (cls->Constants[j]->Name && name &&
            strcmp(cls->Constants[j]->Name, name) == 0)
          {
          cls->Constants[j]->Comment = comment;
          break;
          }
        }
      }
    else if (t == DOX_COMMAND_NAMESPACE)
      {
      for (j = 0; j < cls->NumberOfNamespaces; j++)
        {
        if (cls->Namespaces[j]->Name && name &&
            strcmp(cls->Namespaces[j]->Name, name) == 0)
          {
          cls->Namespaces[j]->Comment = comment;
          break;
          }
        }
      }
    }

  /* recurse into child classes */
  for (i = 0; i < cls->NumberOfClasses; i++)
    {
    if (cls->Classes[i])
      {
      assignComments(cls->Classes[i]);
      }
    }

  /* recurse into child namespaces */
  for (i = 0; i < cls->NumberOfNamespaces; i++)
    {
    if (cls->Namespaces[i])
      {
      assignComments(cls->Namespaces[i]);
      }
    }
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
    currentNamespace->Name = name;
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
TemplateInfo *templateStack[10];
unsigned long templateDepth = 0;

/* begin a template */
void startTemplate()
{
  currentTemplate = (TemplateInfo *)malloc(sizeof(TemplateInfo));
  vtkParse_InitTemplate(currentTemplate);
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

/* get the signature length */
size_t getSigLength()
{
  return sigLength;
}

/* reset the sig to the specified length */
void resetSig(size_t n)
{
  if (n < sigLength)
    {
    sigLength = n;
    }
}

/* reallocate Signature if n chars cannot be appended */
void checkSigSize(size_t n)
{
  const char *ccp;

  if (sigAllocatedLength == 0)
    {
    sigLength = 0;
    sigAllocatedLength = 80 + n;
    signature = vtkParse_NewString(data->Strings, sigAllocatedLength);
    signature[0] = '\0';
    }
  else if (sigLength + n > sigAllocatedLength)
    {
    sigAllocatedLength += sigLength + n;
    ccp = signature;
    signature = vtkParse_NewString(data->Strings, sigAllocatedLength);
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
  if (!sigClosed)
    {
    size_t n = strlen(arg);
    checkSigSize(n);
    if (n > 0)
      {
      memmove(&signature[n], signature, sigLength);
      strncpy(signature, arg, n);
      sigLength += n;
      }
    signature[sigLength] = '\0';
    }
}

/* append text to the end of the signature */
void postSig(const char *arg)
{
  if (!sigClosed)
    {
    size_t n = strlen(arg);
    checkSigSize(n);
    if (n > 0)
      {
      strncpy(&signature[sigLength], arg, n);
      sigLength += n;
      }
    signature[sigLength] = '\0';
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
  return vtkstrdup(cp);
}

/* cut the sig from the mark to the current location, and clear the mark */
const char *cutSig()
{
  const char *cp = NULL;
  if (sigMarkDepth > 0)
    {
    sigMarkDepth--;
    }
  if (signature)
    {
    sigLength = sigMark[sigMarkDepth];
    cp = vtkstrdup(&signature[sigLength]);
    signature[sigLength] = 0;
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
 * Subroutines for building a type
 */

/* "private" variables */
unsigned int storedType;
unsigned int typeStack[10];
unsigned long typeDepth = 0;

/* save the type on the stack */
void pushType()
{
  typeStack[typeDepth++] = storedType;
}

/* pop the type stack */
void popType()
{
  storedType = typeStack[--typeDepth];
}

/* clear the storage type */
void clearType()
{
  storedType = 0;
}

/* save the type */
void setTypeBase(unsigned int base)
{
  storedType &= ~(unsigned int)(VTK_PARSE_BASE_TYPE);
  storedType |= base;
}

/* set a type modifier bit */
void setTypeMod(unsigned int mod)
{
  storedType |= mod;
}

/* modify the indirection (pointers, refs) in the storage type */
void setTypePtr(unsigned int ind)
{
  storedType &= ~(unsigned int)(VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE);
  ind &= (VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE);
  storedType |= ind;
}

/* retrieve the storage type */
unsigned int getType()
{
  return storedType;
}

/* combine two primitive type parts, e.g. "long int" */
unsigned int buildTypeBase(unsigned int a, unsigned int b)
{
  unsigned int base = (a & VTK_PARSE_BASE_TYPE);
  unsigned int basemod = (b & VTK_PARSE_BASE_TYPE);

  switch (base)
    {
    case 0:
      base = basemod;
      break;
    case VTK_PARSE_UNSIGNED_INT:
      base = (basemod | VTK_PARSE_UNSIGNED);
      break;
    case VTK_PARSE_INT:
      base = basemod;
      if (base == VTK_PARSE_CHAR)
        {
        base = VTK_PARSE_SIGNED_CHAR;
        }
      break;
    case VTK_PARSE_CHAR:
      if (basemod == VTK_PARSE_INT)
        {
        base = VTK_PARSE_SIGNED_CHAR;
        }
      else if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_CHAR;
        }
      break;
    case VTK_PARSE_SHORT:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_SHORT;
        }
      break;
    case VTK_PARSE_LONG:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_LONG;
        }
      else if (basemod == VTK_PARSE_LONG)
        {
        base = VTK_PARSE_LONG_LONG;
        }
      else if (basemod == VTK_PARSE_DOUBLE)
        {
        base = VTK_PARSE_LONG_DOUBLE;
        }
      break;
    case VTK_PARSE_UNSIGNED_LONG:
      if (basemod == VTK_PARSE_LONG)
        {
        base = VTK_PARSE_UNSIGNED_LONG_LONG;
        }
      break;
    case VTK_PARSE_LONG_LONG:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED_LONG_LONG;
        }
      break;
    case VTK_PARSE___INT64:
      if (basemod == VTK_PARSE_UNSIGNED_INT)
        {
        base = VTK_PARSE_UNSIGNED___INT64;
        }
      break;
    case VTK_PARSE_DOUBLE:
      if (basemod == VTK_PARSE_LONG)
        {
        base = VTK_PARSE_LONG_DOUBLE;
        }
      break;
    }

  return ((a & ~(unsigned int)(VTK_PARSE_BASE_TYPE)) | base);
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
                            size);
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

  arrayDimensions[0] = size;
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
 * Variables and Parameters
 */

/* "private" variables */
const char *currentVarName = 0;
const char *currentVarValue = 0;
const char *currentId = 0;

/* clear the var Id */
void clearVarName(void)
{
  currentVarName = NULL;
}

/* set the var Id */
void setVarName(const char *text)
{
  currentVarName = text;
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
  currentVarValue = text;
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
  if (currentId == NULL)
    {
    currentId = text;
    }
}

/* set the signature and type together */
void typeSig(const char *text)
{
  postSig(text);
  postSig(" ");

  if (currentId == 0)
    {
    setTypeId(text);
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
  functionVarNameStack[functionDepth] = getVarName();
  functionTypeIdStack[functionDepth] = getTypeId();
  pushType();
  clearType();
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
  popType();

  functionStack[functionDepth+1] = newFunction;
}

FunctionInfo *getFunction()
{
  return functionStack[functionDepth+1];
}

/*----------------------------------------------------------------
 * Attributes
 */

int attributeRole = 0;
int attributeStack[20];
unsigned long attributeDepth = 0;

/* Set kind of attributes to collect in attribute_specifier_seq */
void pushAttributeRole(int x)
{
  attributeStack[attributeDepth++] = attributeRole;
  attributeRole = x;
}

/* Go back to the previous kind of attributes */
void popAttributeRole()
{
  attributeRole = attributeStack[--attributeDepth];
}

/* Get the current kind of attribute */
int getAttributeRole()
{
  return attributeRole;
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
         (vtkParse_CharType(cp[i-1], CPRE_XID) ||
          cp[i-1] == ':' || cp[i-1] == '>'))
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

  /* if there are two ampersands, it is an rvalue reference */
  if ((type1 & type2 & VTK_PARSE_REF) != 0)
    {
    result |= VTK_PARSE_RVALUE;
    }

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


#line 1818 "vtkParse.tab.c" /* glr.c:207  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    ID = 258,
    VTK_ID = 259,
    QT_ID = 260,
    StdString = 261,
    UnicodeString = 262,
    OSTREAM = 263,
    ISTREAM = 264,
    LP = 265,
    LA = 266,
    STRING_LITERAL = 267,
    INT_LITERAL = 268,
    HEX_LITERAL = 269,
    BIN_LITERAL = 270,
    OCT_LITERAL = 271,
    FLOAT_LITERAL = 272,
    CHAR_LITERAL = 273,
    ZERO = 274,
    NULLPTR = 275,
    SSIZE_T = 276,
    SIZE_T = 277,
    NULLPTR_T = 278,
    BEGIN_ATTRIB = 279,
    STRUCT = 280,
    CLASS = 281,
    UNION = 282,
    ENUM = 283,
    PUBLIC = 284,
    PRIVATE = 285,
    PROTECTED = 286,
    CONST = 287,
    VOLATILE = 288,
    MUTABLE = 289,
    STATIC = 290,
    THREAD_LOCAL = 291,
    VIRTUAL = 292,
    EXPLICIT = 293,
    INLINE = 294,
    CONSTEXPR = 295,
    FRIEND = 296,
    EXTERN = 297,
    OPERATOR = 298,
    TEMPLATE = 299,
    THROW = 300,
    TRY = 301,
    CATCH = 302,
    NOEXCEPT = 303,
    DECLTYPE = 304,
    TYPENAME = 305,
    TYPEDEF = 306,
    NAMESPACE = 307,
    USING = 308,
    NEW = 309,
    DELETE = 310,
    DEFAULT = 311,
    STATIC_CAST = 312,
    DYNAMIC_CAST = 313,
    CONST_CAST = 314,
    REINTERPRET_CAST = 315,
    OP_LSHIFT_EQ = 316,
    OP_RSHIFT_EQ = 317,
    OP_LSHIFT = 318,
    OP_RSHIFT_A = 319,
    OP_DOT_POINTER = 320,
    OP_ARROW_POINTER = 321,
    OP_ARROW = 322,
    OP_INCR = 323,
    OP_DECR = 324,
    OP_PLUS_EQ = 325,
    OP_MINUS_EQ = 326,
    OP_TIMES_EQ = 327,
    OP_DIVIDE_EQ = 328,
    OP_REMAINDER_EQ = 329,
    OP_AND_EQ = 330,
    OP_OR_EQ = 331,
    OP_XOR_EQ = 332,
    OP_LOGIC_AND = 333,
    OP_LOGIC_OR = 334,
    OP_LOGIC_EQ = 335,
    OP_LOGIC_NEQ = 336,
    OP_LOGIC_LEQ = 337,
    OP_LOGIC_GEQ = 338,
    ELLIPSIS = 339,
    DOUBLE_COLON = 340,
    OTHER = 341,
    AUTO = 342,
    VOID = 343,
    BOOL = 344,
    FLOAT = 345,
    DOUBLE = 346,
    INT = 347,
    SHORT = 348,
    LONG = 349,
    INT64__ = 350,
    CHAR = 351,
    CHAR16_T = 352,
    CHAR32_T = 353,
    WCHAR_T = 354,
    SIGNED = 355,
    UNSIGNED = 356,
    IdType = 357,
    FloatType = 358,
    TypeInt8 = 359,
    TypeUInt8 = 360,
    TypeInt16 = 361,
    TypeUInt16 = 362,
    TypeInt32 = 363,
    TypeUInt32 = 364,
    TypeInt64 = 365,
    TypeUInt64 = 366,
    TypeFloat32 = 367,
    TypeFloat64 = 368,
    SetMacro = 369,
    GetMacro = 370,
    SetStringMacro = 371,
    GetStringMacro = 372,
    SetClampMacro = 373,
    SetObjectMacro = 374,
    GetObjectMacro = 375,
    BooleanMacro = 376,
    SetVector2Macro = 377,
    SetVector3Macro = 378,
    SetVector4Macro = 379,
    SetVector6Macro = 380,
    GetVector2Macro = 381,
    GetVector3Macro = 382,
    GetVector4Macro = 383,
    GetVector6Macro = 384,
    SetVectorMacro = 385,
    GetVectorMacro = 386,
    ViewportCoordinateMacro = 387,
    WorldCoordinateMacro = 388,
    TypeMacro = 389,
    VTK_BYTE_SWAP_DECL = 390
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 1796 "vtkParse.y" /* glr.c:212  */

  const char   *str;
  unsigned int  integer;

#line 1987 "vtkParse.tab.c" /* glr.c:212  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);


/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Default (constant) value used for initialization for null
   right-hand sides.  Unlike the standard yacc.c template, here we set
   the default value of $$ to a zeroed-out value.  Since the default
   value is undefined, this behavior is technically correct.  */
static YYSTYPE yyval_default;

/* Copy the second part of user declarations.  */

#line 2015 "vtkParse.tab.c" /* glr.c:230  */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YYFREE
# define YYFREE free
#endif
#ifndef YYMALLOC
# define YYMALLOC malloc
#endif
#ifndef YYREALLOC
# define YYREALLOC realloc
#endif

#define YYSIZEMAX ((size_t) -1)

#ifdef __cplusplus
   typedef bool yybool;
#else
   typedef unsigned char yybool;
#endif
#define yytrue 1
#define yyfalse 0

#ifndef YYSETJMP
# include <setjmp.h>
# define YYJMP_BUF jmp_buf
# define YYSETJMP(Env) setjmp (Env)
/* Pacify clang.  */
# define YYLONGJMP(Env, Val) (longjmp (Env, Val), YYASSERT (0))
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#ifndef YYASSERT
# define YYASSERT(Condition) ((void) ((Condition) || (abort (), 0)))
#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   8795

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  294
/* YYNRULES -- Number of rules.  */
#define YYNRULES  733
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1220
/* YYMAXRHS -- Maximum number of symbols on right-hand side of rule.  */
#define YYMAXRHS 10
/* YYMAXLEFT -- Maximum number of symbols to the left of a handle
   accessed by $0, $-1, etc., in any rule.  */
#define YYMAXLEFT 0

/* YYTRANSLATE(X) -- Bison symbol number corresponding to X.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   390

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   155,     2,     2,     2,   151,   148,     2,
     142,   143,   149,   154,   141,   153,   158,   152,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,   140,   136,
     144,   139,   150,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,   145,     2,   146,   157,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,   137,   156,   138,   147,     2,     2,     2,
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
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135
};

#if YYDEBUG
/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,  1972,  1972,  1974,  1976,  1975,  1986,  1987,  1988,  1989,
    1990,  1991,  1992,  1993,  1994,  1995,  1996,  1997,  1998,  1999,
    2000,  2001,  2002,  2003,  2006,  2007,  2008,  2009,  2010,  2011,
    2014,  2015,  2022,  2029,  2030,  2030,  2034,  2041,  2042,  2045,
    2046,  2047,  2050,  2051,  2054,  2054,  2069,  2068,  2074,  2080,
    2079,  2084,  2090,  2091,  2092,  2095,  2097,  2099,  2102,  2103,
    2106,  2107,  2109,  2111,  2110,  2119,  2123,  2124,  2125,  2128,
    2129,  2130,  2131,  2132,  2133,  2134,  2135,  2136,  2137,  2138,
    2139,  2140,  2141,  2142,  2143,  2146,  2147,  2148,  2149,  2150,
    2153,  2154,  2155,  2156,  2159,  2160,  2163,  2165,  2168,  2173,
    2174,  2177,  2178,  2181,  2182,  2183,  2194,  2195,  2196,  2200,
    2201,  2205,  2205,  2218,  2224,  2232,  2233,  2234,  2237,  2238,
    2238,  2242,  2243,  2245,  2246,  2247,  2247,  2255,  2259,  2260,
    2263,  2265,  2267,  2268,  2271,  2272,  2280,  2281,  2284,  2285,
    2287,  2289,  2291,  2295,  2297,  2298,  2301,  2304,  2305,  2308,
    2309,  2308,  2313,  2354,  2357,  2358,  2359,  2361,  2363,  2365,
    2369,  2372,  2372,  2404,  2407,  2406,  2424,  2426,  2425,  2430,
    2432,  2430,  2434,  2436,  2434,  2438,  2441,  2438,  2452,  2453,
    2456,  2457,  2459,  2460,  2463,  2463,  2473,  2474,  2482,  2483,
    2484,  2485,  2488,  2491,  2492,  2493,  2496,  2497,  2498,  2501,
    2502,  2503,  2507,  2508,  2509,  2510,  2513,  2514,  2515,  2519,
    2525,  2518,  2536,  2540,  2540,  2552,  2551,  2560,  2564,  2567,
    2576,  2577,  2580,  2580,  2581,  2582,  2588,  2593,  2594,  2595,
    2598,  2601,  2602,  2604,  2605,  2608,  2608,  2616,  2617,  2618,
    2621,  2623,  2624,  2628,  2627,  2640,  2641,  2640,  2660,  2660,
    2664,  2665,  2668,  2669,  2672,  2678,  2679,  2679,  2682,  2683,
    2683,  2685,  2687,  2691,  2693,  2691,  2717,  2718,  2721,  2721,
    2723,  2723,  2725,  2725,  2730,  2731,  2731,  2739,  2742,  2812,
    2813,  2815,  2816,  2816,  2819,  2822,  2823,  2827,  2839,  2838,
    2856,  2857,  2861,  2863,  2863,  2881,  2881,  2883,  2887,  2888,
    2889,  2888,  2894,  2896,  2897,  2898,  2899,  2900,  2901,  2904,
    2905,  2909,  2910,  2914,  2915,  2919,  2920,  2921,  2922,  2925,
    2926,  2929,  2929,  2932,  2933,  2936,  2936,  2940,  2941,  2941,
    2948,  2949,  2952,  2953,  2954,  2955,  2956,  2959,  2961,  2963,
    2967,  2969,  2971,  2973,  2975,  2977,  2979,  2979,  2984,  2987,
    2990,  2993,  2993,  3001,  3001,  3009,  3010,  3011,  3012,  3013,
    3014,  3015,  3016,  3017,  3018,  3019,  3020,  3021,  3022,  3023,
    3024,  3025,  3026,  3027,  3028,  3029,  3030,  3037,  3038,  3039,
    3040,  3041,  3042,  3043,  3049,  3050,  3053,  3054,  3056,  3057,
    3060,  3061,  3064,  3065,  3066,  3067,  3070,  3071,  3072,  3073,
    3074,  3078,  3079,  3080,  3083,  3084,  3087,  3088,  3096,  3099,
    3099,  3101,  3101,  3105,  3106,  3108,  3112,  3113,  3115,  3115,
    3118,  3120,  3124,  3127,  3127,  3129,  3129,  3133,  3136,  3136,
    3138,  3138,  3142,  3143,  3145,  3147,  3149,  3151,  3153,  3157,
    3158,  3161,  3162,  3163,  3164,  3165,  3166,  3167,  3168,  3169,
    3170,  3171,  3172,  3173,  3174,  3175,  3176,  3177,  3178,  3179,
    3180,  3181,  3182,  3185,  3186,  3187,  3188,  3189,  3190,  3191,
    3192,  3193,  3194,  3195,  3196,  3197,  3198,  3199,  3219,  3220,
    3221,  3222,  3225,  3229,  3233,  3233,  3237,  3238,  3253,  3254,
    3279,  3279,  3283,  3283,  3287,  3287,  3291,  3291,  3295,  3295,
    3299,  3299,  3302,  3303,  3306,  3308,  3309,  3310,  3311,  3314,
    3314,  3318,  3319,  3322,  3323,  3326,  3327,  3335,  3335,  3345,
    3346,  3346,  3345,  3355,  3355,  3365,  3365,  3374,  3374,  3374,
    3407,  3406,  3417,  3418,  3418,  3417,  3427,  3445,  3445,  3450,
    3450,  3455,  3455,  3460,  3460,  3465,  3465,  3470,  3470,  3475,
    3475,  3480,  3480,  3485,  3485,  3502,  3502,  3516,  3553,  3591,
    3628,  3629,  3636,  3637,  3638,  3639,  3640,  3641,  3642,  3643,
    3644,  3645,  3646,  3647,  3650,  3651,  3652,  3653,  3654,  3655,
    3656,  3657,  3658,  3659,  3660,  3661,  3662,  3663,  3664,  3665,
    3666,  3667,  3668,  3669,  3670,  3671,  3672,  3673,  3674,  3675,
    3676,  3677,  3678,  3679,  3680,  3681,  3682,  3683,  3686,  3687,
    3688,  3689,  3690,  3691,  3692,  3693,  3694,  3695,  3696,  3697,
    3698,  3699,  3700,  3701,  3702,  3703,  3704,  3705,  3706,  3707,
    3708,  3709,  3710,  3711,  3712,  3713,  3714,  3717,  3718,  3719,
    3720,  3721,  3722,  3723,  3724,  3725,  3732,  3733,  3736,  3737,
    3738,  3739,  3739,  3740,  3743,  3744,  3747,  3748,  3749,  3750,
    3780,  3780,  3781,  3782,  3783,  3784,  3807,  3808,  3811,  3812,
    3813,  3814,  3817,  3818,  3819,  3822,  3823,  3825,  3826,  3828,
    3829,  3832,  3833,  3836,  3837,  3838,  3842,  3841,  3855,  3856,
    3859,  3859,  3861,  3861,  3865,  3865,  3867,  3867,  3869,  3869,
    3873,  3873,  3878,  3879,  3881,  3882,  3885,  3886,  3889,  3890,
    3893,  3894,  3895,  3896,  3897,  3898,  3899,  3900,  3900,  3900,
    3900,  3900,  3901,  3902,  3903,  3904,  3905,  3908,  3911,  3912,
    3915,  3918,  3918,  3918
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "ID", "VTK_ID", "QT_ID", "StdString",
  "UnicodeString", "OSTREAM", "ISTREAM", "LP", "LA", "STRING_LITERAL",
  "INT_LITERAL", "HEX_LITERAL", "BIN_LITERAL", "OCT_LITERAL",
  "FLOAT_LITERAL", "CHAR_LITERAL", "ZERO", "NULLPTR", "SSIZE_T", "SIZE_T",
  "NULLPTR_T", "BEGIN_ATTRIB", "STRUCT", "CLASS", "UNION", "ENUM",
  "PUBLIC", "PRIVATE", "PROTECTED", "CONST", "VOLATILE", "MUTABLE",
  "STATIC", "THREAD_LOCAL", "VIRTUAL", "EXPLICIT", "INLINE", "CONSTEXPR",
  "FRIEND", "EXTERN", "OPERATOR", "TEMPLATE", "THROW", "TRY", "CATCH",
  "NOEXCEPT", "DECLTYPE", "TYPENAME", "TYPEDEF", "NAMESPACE", "USING",
  "NEW", "DELETE", "DEFAULT", "STATIC_CAST", "DYNAMIC_CAST", "CONST_CAST",
  "REINTERPRET_CAST", "OP_LSHIFT_EQ", "OP_RSHIFT_EQ", "OP_LSHIFT",
  "OP_RSHIFT_A", "OP_DOT_POINTER", "OP_ARROW_POINTER", "OP_ARROW",
  "OP_INCR", "OP_DECR", "OP_PLUS_EQ", "OP_MINUS_EQ", "OP_TIMES_EQ",
  "OP_DIVIDE_EQ", "OP_REMAINDER_EQ", "OP_AND_EQ", "OP_OR_EQ", "OP_XOR_EQ",
  "OP_LOGIC_AND", "OP_LOGIC_OR", "OP_LOGIC_EQ", "OP_LOGIC_NEQ",
  "OP_LOGIC_LEQ", "OP_LOGIC_GEQ", "ELLIPSIS", "DOUBLE_COLON", "OTHER",
  "AUTO", "VOID", "BOOL", "FLOAT", "DOUBLE", "INT", "SHORT", "LONG",
  "INT64__", "CHAR", "CHAR16_T", "CHAR32_T", "WCHAR_T", "SIGNED",
  "UNSIGNED", "IdType", "FloatType", "TypeInt8", "TypeUInt8", "TypeInt16",
  "TypeUInt16", "TypeInt32", "TypeUInt32", "TypeInt64", "TypeUInt64",
  "TypeFloat32", "TypeFloat64", "SetMacro", "GetMacro", "SetStringMacro",
  "GetStringMacro", "SetClampMacro", "SetObjectMacro", "GetObjectMacro",
  "BooleanMacro", "SetVector2Macro", "SetVector3Macro", "SetVector4Macro",
  "SetVector6Macro", "GetVector2Macro", "GetVector3Macro",
  "GetVector4Macro", "GetVector6Macro", "SetVectorMacro", "GetVectorMacro",
  "ViewportCoordinateMacro", "WorldCoordinateMacro", "TypeMacro",
  "VTK_BYTE_SWAP_DECL", "';'", "'{'", "'}'", "'='", "':'", "','", "'('",
  "')'", "'<'", "'['", "']'", "'~'", "'&'", "'*'", "'>'", "'%'", "'/'",
  "'-'", "'+'", "'!'", "'|'", "'^'", "'.'", "$accept", "translation_unit",
  "opt_declaration_seq", "$@1", "declaration", "template_declaration",
  "explicit_instantiation", "linkage_specification",
  "namespace_definition", "$@2", "namespace_alias_definition",
  "forward_declaration", "simple_forward_declaration", "class_definition",
  "class_specifier", "$@3", "class_head", "$@4", "$@5", "class_key",
  "class_head_name", "class_name", "opt_final", "member_specification",
  "$@6", "member_access_specifier", "member_declaration",
  "template_member_declaration", "friend_declaration",
  "base_specifier_list", "base_specifier", "opt_virtual",
  "opt_access_specifier", "access_specifier", "opaque_enum_declaration",
  "enum_definition", "enum_specifier", "$@7", "enum_head", "enum_key",
  "opt_enum_base", "$@8", "enumerator_list", "enumerator_definition",
  "$@9", "nested_variable_initialization", "ignored_initializer",
  "ignored_class", "ignored_class_body", "typedef_declaration",
  "basic_typedef_declaration", "typedef_declarator_list",
  "typedef_declarator_list_cont", "typedef_declarator",
  "typedef_direct_declarator", "function_direct_declarator", "$@10",
  "$@11", "typedef_declarator_id", "using_declaration", "using_id",
  "using_directive", "alias_declaration", "$@12", "template_head", "$@13",
  "template_parameter_list", "$@14", "template_parameter", "$@15", "$@16",
  "$@17", "$@18", "$@19", "$@20", "opt_ellipsis", "class_or_typename",
  "opt_template_parameter_initializer", "template_parameter_initializer",
  "$@21", "template_parameter_value", "function_definition",
  "function_declaration", "nested_method_declaration",
  "nested_operator_declaration", "method_definition", "method_declaration",
  "operator_declaration", "conversion_function", "$@22", "$@23",
  "conversion_function_id", "operator_function_nr", "$@24",
  "operator_function_sig", "$@25", "operator_function_id", "operator_sig",
  "function_nr", "function_trailer_clause", "function_trailer", "$@26",
  "noexcept_sig", "function_body_as_trailer", "opt_trailing_return_type",
  "trailing_return_type", "$@27", "function_body", "function_try_block",
  "handler_seq", "function_sig", "$@28", "structor_declaration", "$@29",
  "$@30", "structor_sig", "$@31", "opt_ctor_initializer",
  "mem_initializer_list", "mem_initializer",
  "parameter_declaration_clause", "$@32", "parameter_list", "$@33",
  "parameter_declaration", "$@34", "$@35", "opt_initializer",
  "initializer", "$@36", "$@37", "$@38", "constructor_args", "$@39",
  "variable_declaration", "init_declarator_id", "opt_declarator_list",
  "declarator_list_cont", "$@40", "init_declarator",
  "opt_ptr_operator_seq", "direct_abstract_declarator", "$@41",
  "opt_declarator_id", "direct_declarator", "$@42", "lp_or_la", "$@43",
  "opt_array_or_parameters", "$@44", "$@45", "function_qualifiers",
  "abstract_declarator", "declarator", "declarator_id", "bitfield_size",
  "opt_array_decorator_seq", "array_decorator_seq", "$@46",
  "array_decorator_seq_impl", "array_decorator", "$@47",
  "array_size_specifier", "$@48", "id_expression", "unqualified_id",
  "qualified_id", "nested_name_specifier", "$@49", "tilde_sig",
  "identifier_sig", "scope_operator_sig", "template_id", "$@50",
  "decltype_specifier", "$@51", "simple_id", "identifier",
  "opt_decl_specifier_seq", "decl_specifier2", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "function_specifier",
  "cv_qualifier", "cv_qualifier_seq", "store_type", "store_type_specifier",
  "$@52", "$@53", "type_specifier", "trailing_type_specifier", "$@54",
  "trailing_type_specifier_seq", "trailing_type_specifier_seq2", "$@55",
  "$@56", "tparam_type", "tparam_type_specifier2", "$@57", "$@58",
  "tparam_type_specifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "rvalue_reference",
  "pointer", "$@59", "ptr_cv_qualifier_seq", "pointer_seq",
  "decl_attribute_specifier_seq", "$@60", "id_attribute_specifier_seq",
  "$@61", "ref_attribute_specifier_seq", "$@62",
  "func_attribute_specifier_seq", "$@63", "array_attribute_specifier_seq",
  "$@64", "key_attribute_specifier_seq", "$@65", "attribute_specifier_seq",
  "attribute_specifier", "attribute_list", "attribute", "$@66",
  "attribute_pack", "attribute_sig", "attribute_token",
  "declaration_macro", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72",
  "$@73", "$@74", "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81",
  "$@82", "$@83", "$@84", "$@85", "$@86", "$@87", "$@88", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "constant_expression_item", "$@89",
  "common_bracket_item", "common_bracket_item_no_scope_operator",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig",
  "$@90", "right_angle_bracket", "brackets_sig", "$@91", "$@92",
  "parentheses_sig", "$@93", "$@94", "$@95", "braces_sig", "$@96",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_item_no_angle", "ignored_braces",
  "ignored_brackets", "ignored_parentheses", "ignored_left_parenthesis", YY_NULLPTR
};
#endif

#define YYPACT_NINF -1039
#define YYTABLE_NINF -687

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
   -1039,    97,   128, -1039, -1039,  6854, -1039,   159,   171,   191,
     261,   275,   276,   289,    19,    34,    35, -1039, -1039, -1039,
     411, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
      89, -1039,  4515, -1039, -1039,  8460,    78,  7447, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039,   155,   156,   221,   234,   236,   249,
     268,   273,   311,   321,   322,   324,    15,    31,    75,   108,
     174,   188,   195,   217,   252,   304,   335,   343,   348,   350,
     360,   370,   373,   377,   379,   384,   403, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039,    71, -1039, -1039, -1039, -1039, -1039,
   -1039,  8127, -1039,    26,    26,    26,    26, -1039,   408,  8460,
   -1039,   291, -1039,   415,  1944,  2060,   468,  7674,   198,   292,
   -1039,   412,  8238, -1039, -1039, -1039, -1039,   101,   103, -1039,
   -1039, -1039, -1039, -1039, -1039,   536, -1039, -1039,   426,  4983,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039,    28, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
      79,  7674,    46,    47,    54,   146,   185,   201,   203,   552,
   -1039, -1039, -1039, -1039, -1039,  7721,   468,   468,  8460,   101,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,   428,    46,
      47,    54,   146,   185,   201,   203, -1039, -1039, -1039,  7674,
    7674, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039,   433,   434, -1039,  1944,  7674,   468,   468,
    6810, -1039, -1039, -1039,  6810,  6810, -1039,  6810,  6810,  6810,
    6810,  6810,  6810,  6810,  6810,  6810,  6810,  6810,  6810,  6810,
    6810,  2229,   440,  7904, -1039,  2229, -1039,  7497,   437,  7674,
   -1039, -1039, -1039, -1039, -1039, -1039,  8127, -1039, -1039,  8349,
     101,   448, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039,  8460, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
     447,   468,   468,   468, -1039, -1039, -1039, -1039,   412, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039,  1944, -1039, -1039, -1039, -1039, -1039, -1039,  7745,
   -1039,   330,    65, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039,   145, -1039, -1039, -1039,   112, -1039, -1039, -1039,  2331,
    2487, -1039, -1039,   325, -1039,  2643,  3735,  2799, -1039, -1039,
   -1039, -1039, -1039, -1039,  7082,  8016,  7082,  7562, -1039, -1039,
   -1039, -1039, -1039, -1039,  7792, -1039,  2955,   752,   460, -1039,
     462, -1039,   463, -1039, -1039,  6699,  1944, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039,   467,  6810,  6810,  6810,   470,   473,
    6810,   474,   480,   481,   482,   487,   489,   490,   495,   496,
     499,   500,   461,   466,   501, -1039, -1039,   510, -1039,   101,
   -1039, -1039, -1039, -1039, -1039, -1039,    64, -1039,  1802,   775,
     468,   468,   536,   512,  6810, -1039, -1039, -1039,   351, -1039,
    7674,  8349,  7745,  7674,   515,  3111,   513,  8089,   536,   897,
     448, -1039, -1039, -1039, -1039, -1039,  2229,  8016,  2229,  7562,
   -1039, -1039, -1039, -1039,   317, -1039, -1039, -1039,  1688, -1039,
   -1039,   508, -1039,  1944,   136, -1039, -1039, -1039,   518,   517,
    7792, -1039,   514,   101, -1039, -1039, -1039, -1039, -1039, -1039,
    7314,   298, -1039,   897,   523,  3891, -1039, -1039,   519, -1039,
   -1039, -1039, -1039,    42, -1039,  8571,   116,   619, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039,   528, -1039,   101,    70,
     530,   -10,  7082,  7082,   143,   178, -1039, -1039, -1039, -1039,
     531,   468, -1039, -1039, -1039,   666,   526,   527,    44, -1039,
   -1039,   539, -1039,   537, -1039, -1039, -1039, -1039, -1039, -1039,
     532,   541,   542, -1039, -1039,   533,  8460, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,  7674,
   -1039,   545, -1039, -1039,    49,  1534, -1039, -1039,   547, -1039,
   -1039,   468,   468,  1802, -1039,   285, -1039,   553,  8460,   557,
   -1039, -1039,  1944,   558, -1039,   107, -1039, -1039,   555,   616,
   -1039,   468, -1039,   513,  5919,   565,    66,   567,   351,  7314,
   -1039,   317, -1039, -1039,   566,   193, -1039, -1039,   562,     6,
   -1039, -1039, -1039, -1039, -1039,  6231, -1039, -1039,   801, -1039,
   -1039,   536,   317,   315,   564,   468, -1039,   628,    79, -1039,
   -1039, -1039, -1039, -1039,  7674,  7674,  7674, -1039,   468,   468,
    8460,   101,   103, -1039, -1039, -1039, -1039,   101,   116,  5139,
    5295,  5451, -1039,   572, -1039, -1039, -1039,   578,   581, -1039,
     103, -1039,   579, -1039,   584,  8460, -1039,   577,   580, -1039,
   -1039, -1039, -1039,  8460, -1039, -1039, -1039,  8460,  8460, -1039,
     585,  8460,  8460,  8460,  8460,  8460,  8460,  8460,  8460,  8460,
    8460,   583, -1039, -1039, -1039, -1039, -1039,   587, -1039, -1039,
   -1039,   588,   591, -1039,   697,   651, -1039, -1039, -1039, -1039,
    6810, -1039, -1039, -1039,   126,  7674,   651,  3267, -1039, -1039,
     596, -1039, -1039, -1039, -1039,   595, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039,   604, -1039,   193, -1039, -1039, -1039, -1039, -1039, -1039,
      96, -1039,    79, -1039, -1039, -1039, -1039,   562, -1039,   559,
   -1039,   600,   103, -1039,  6075, -1039,  6231, -1039, -1039, -1039,
   -1039,   240, -1039,   334, -1039, -1039, -1039,   897, -1039, -1039,
   -1039,   325, -1039, -1039, -1039, -1039,  7792, -1039, -1039, -1039,
   -1039, -1039,   101, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039,   513, -1039,   101,
   -1039, -1039,   603,  8460, -1039,   605,  8460, -1039,   607,   609,
     610,   611,   623,   624,   627,   630,   606,   633, -1039,   632,
    2107, -1039,  7674, -1039, -1039, -1039,  7674, -1039,  1534, -1039,
   -1039,  6231, -1039,   635, -1039, -1039, -1039, -1039, -1039, -1039,
     692,  8460,   193, -1039, -1039, -1039, -1039, -1039, -1039,   513,
      79,  8682, -1039, -1039, -1039, -1039,   640, -1039, -1039, -1039,
   -1039, -1039, -1039,   513, -1039,  6543, -1039,  4671, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039,   359, -1039,   648,    65,
    7314,   648, -1039,   645,   655, -1039, -1039,   653, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,   779,   782,
   -1039,  7104,   124,  7609,   107, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039,  6988, -1039,    26,
   -1039, -1039, -1039,   661,   447,  1944,  7220,   101, -1039,   651,
    1534,   651,   591,  6231,  4827, -1039,   753, -1039,   536, -1039,
   -1039,   101, -1039, -1039,  5607,  5919,  5763,   656, -1039,  8682,
   -1039, -1039,   103,   657,  6231,   659, -1039, -1039, -1039, -1039,
   -1039,  6231,   513,  7314, -1039, -1039, -1039, -1039, -1039,   662,
     101, -1039,   648, -1039, -1039,   663, -1039,   679,   680,   682,
   -1039, -1039, -1039,   843,    26,   447,  7336,   651, -1039, -1039,
   -1039, -1039,  6988, -1039, -1039,  7336, -1039, -1039, -1039, -1039,
    1944,  7745, -1039, -1039, -1039,   107,   193, -1039, -1039,   658,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039,  6231, -1039,  6231,
     683,  6387, -1039, -1039, -1039, -1039, -1039,  4047, -1039, -1039,
   -1039,  7857, -1039, -1039,   843, -1039, -1039,  7745,  7336,   693,
   -1039, -1039,   691, -1039,   330, -1039, -1039, -1039,  7314, -1039,
   -1039, -1039, -1039,  6387, -1039,   366,   406, -1039, -1039, -1039,
     131, -1039,  7857, -1039,  7969, -1039,   695, -1039, -1039,  7314,
     536, -1039, -1039, -1039, -1039, -1039,   107,   115,  3423,  4203,
     357,    92,  7969,   138, -1039, -1039,  3579, -1039, -1039, -1039,
   -1039, -1039, -1039,    99,   357, -1039,   406,  4359, -1039, -1039
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   490,     0,   502,   445,   446,   447,
     441,   442,   443,   444,   449,   450,   448,    53,    52,    54,
     115,   404,   405,   396,   399,   400,   402,   403,   401,   395,
     397,   218,     0,   353,   418,     0,     0,     0,   350,   463,
     464,   465,   466,   467,   472,   473,   474,   475,   468,   469,
     470,   471,   476,   477,   461,   462,   451,   452,   453,   454,
     455,   456,   457,   458,   459,   460,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   348,     5,
      19,    20,    13,    11,    12,     9,    37,    17,   384,    44,
     500,    10,    16,   384,     0,   500,    14,   136,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   206,     0,     0,
      15,     0,   330,   492,     0,     0,     0,     0,   492,   417,
     332,   349,     0,   490,   392,   393,   394,   178,   285,   409,
     413,   416,   492,   492,    21,   491,   117,   116,   398,     0,
     445,   446,   447,   441,   442,   443,   444,   732,   733,   643,
     638,   639,   640,   637,   641,   642,   644,   645,   449,   450,
     448,   702,   611,   610,   612,   630,   614,   616,   615,   617,
     618,   619,   622,   623,   621,   620,   626,   629,   613,   631,
     632,   624,   609,   608,   628,   627,   584,   585,   625,   635,
     634,   633,   636,   586,   587,   588,   716,   589,   590,   591,
     597,   598,   592,   593,   594,   595,   596,   599,   600,   601,
     602,   603,   604,   605,   606,   607,   714,   713,   726,   461,
     462,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   702,   720,   717,   721,   731,   164,   702,   580,   581,
     575,   719,   574,   576,   577,   578,   579,   582,   583,   718,
     725,   724,   715,   722,   723,   704,   710,   712,   711,   702,
       0,     0,   445,   446,   447,   441,   442,   443,   444,   397,
     384,   500,   384,   500,   492,     0,   492,   417,     0,   178,
     377,   379,   378,   382,   383,   381,   380,   702,    34,   357,
     355,   356,   360,   361,   359,   358,   364,   363,   362,     0,
       0,   375,   376,   365,   366,   367,   368,   369,   370,   371,
     372,   373,   374,     0,   492,   331,     0,     0,   333,   334,
       0,   519,   523,   525,     0,     0,   532,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   285,     0,    51,   502,   285,   111,   118,     0,     0,
      27,    38,    24,   500,    26,    28,     0,    25,    29,     0,
     178,   250,   239,   702,   188,   238,   190,   191,   189,   209,
     500,     0,   212,    22,   421,   502,   346,   196,   194,   245,
     337,     0,   333,   334,   335,    59,   336,    58,     0,   340,
     338,   339,   341,   420,   342,   351,   384,   500,   384,   500,
     137,   207,     0,   490,   411,   390,   295,   297,   179,     0,
     281,   266,   178,   494,   494,   494,   408,   286,   478,   479,
     488,   480,   384,   440,   439,   509,   503,     3,   704,     0,
       0,   689,   688,   169,   163,     0,     0,     0,   696,   698,
     694,   354,   492,   398,   285,    51,   285,   118,   337,   384,
     384,   152,   148,   144,     0,   147,     0,     0,     0,   155,
       0,   153,     0,   157,   156,     0,     0,   357,   355,   356,
     360,   361,   359,   358,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   389,   388,     0,   281,   178,
     490,   386,   387,    62,    40,    49,   414,   492,     0,     0,
      59,     0,   501,     0,   123,   107,   119,   114,   492,   492,
       0,     0,     0,     0,     0,     0,   256,     0,   493,     0,
     250,   248,   343,   344,   345,   677,   285,    51,   285,   118,
     197,   195,   391,   384,   486,   208,   213,   492,     0,   192,
     220,   319,   492,     0,     0,   268,   278,   267,     0,     0,
       0,   311,     0,   178,   483,   502,   482,   484,   481,   489,
     410,     0,   506,     0,     4,     0,   707,   709,     0,   703,
     706,   708,   727,     0,   166,     0,     0,     0,   728,    31,
     705,   730,   666,   666,   666,   419,     0,   144,   178,   414,
       0,   492,   285,   285,     0,   319,   492,   333,   334,    33,
       0,     0,     3,   160,   161,     0,   584,   585,     0,   569,
     568,     0,   566,     0,   567,   217,   573,   159,   158,   517,
       0,     0,     0,   527,   530,     0,     0,   537,   541,   545,
     549,   539,   543,   547,   551,   553,   555,   557,   558,     0,
      42,   280,   284,   385,    63,     0,    61,    39,    48,    57,
     492,    59,     0,     0,   109,     0,   121,   124,     0,   113,
     415,   492,     0,   251,   252,     0,   702,   237,     0,   490,
     414,     0,   246,   256,     0,     0,   414,     0,   492,   412,
     406,   487,   296,   220,     0,   233,   292,   320,     0,   313,
     198,   193,   492,   277,   282,     0,   700,   271,     0,   293,
     312,   495,   486,   509,     0,   515,   349,   511,   513,    32,
      30,   729,   167,   165,     0,     0,     0,   435,   434,   433,
       0,   178,   285,   428,   432,   180,   181,   178,     0,     0,
       0,     0,   139,   143,   146,   141,   113,     0,     0,   138,
     285,   149,   313,    36,     4,     0,   572,     0,     0,   571,
     570,   562,   563,     0,   520,   524,   526,     0,     0,   533,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   560,    66,    67,    68,    45,   490,     0,   103,   104,
     105,   101,    50,    94,    99,   178,    46,    55,   492,   112,
     123,   125,   120,   106,   332,     0,   178,     0,   496,   262,
     257,   258,   263,   347,   220,     0,   692,   655,   684,   660,
     685,   686,   690,   661,   665,   664,   659,   662,   663,   682,
     654,   683,   678,   681,   352,   656,   657,   658,    43,    41,
     110,   113,   407,   233,   215,   226,   224,   222,   230,   235,
       0,   221,   228,   229,   219,   234,   325,   322,   323,     0,
     243,     0,   285,   653,   650,   651,   269,   646,   648,   649,
     679,     0,   274,   298,   485,   508,   504,     0,   512,   510,
     514,   169,   436,   437,   438,   430,   290,   170,   494,   427,
     384,   173,   178,   671,   673,   674,   697,   669,   670,   668,
     672,   667,   699,   695,   140,   142,   145,   256,    35,   178,
     564,   565,     0,     0,   528,     0,     0,   536,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   561,     0,
       0,    65,     0,   102,   490,   100,     0,    96,     0,    56,
     122,     0,   704,     0,   129,   253,   254,   241,   210,   502,
     259,     0,   233,   496,   666,   677,   666,   108,   214,   256,
       0,     0,   225,   231,   232,   227,   328,   324,   316,   317,
     318,   315,   314,   256,   283,     0,   647,     0,   275,   273,
     299,   294,   302,   516,   168,   384,   298,   291,   182,   178,
     429,   182,   176,     0,     0,   518,   521,     0,   531,   534,
     538,   542,   546,   550,   540,   544,   548,   552,     0,     0,
     559,     0,   397,     0,     0,    84,    80,    71,    77,    64,
      79,    73,    72,    76,    74,    69,    70,     0,    78,     0,
     203,   204,    75,     0,   330,     0,     0,   178,    81,   178,
       0,   178,    47,   126,   128,   127,   240,   220,   497,   261,
     490,   178,   247,   249,     0,     0,     0,     0,   223,     0,
     423,   236,   285,     0,     0,     0,   652,   676,   701,   675,
     680,     0,   256,   431,   287,   184,   171,   183,   309,     0,
     178,   174,   182,   150,   162,     0,   704,     0,     0,     0,
      92,   500,    90,     0,     0,     0,     0,   178,    82,    85,
      87,    88,     0,    86,    89,     0,   199,    83,   492,   205,
       0,     0,    97,    95,    98,     0,   233,   260,   264,     0,
     687,   691,   496,   425,   384,   422,   498,   329,   496,   276,
       0,     0,   288,   310,   177,   303,   522,     0,   535,   554,
     556,     0,   500,    91,     0,    93,   500,     0,     0,     0,
     492,   202,     0,   211,   266,   693,   216,   384,   424,   326,
     502,   244,   496,   185,   186,   298,   151,   529,   702,   704,
     414,   132,     0,   500,     0,   200,     0,   702,   265,   426,
     499,   300,   187,   289,   305,   304,     0,   308,     0,     0,
       0,    60,     0,   414,   133,   201,     0,   303,   306,   307,
     704,   135,   130,    60,     0,   242,   301,     0,   131,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1039, -1039,  -388, -1039, -1039,   828,  -106, -1039, -1039, -1039,
   -1039,  -842,  -108,     0,   -33, -1039, -1039, -1039, -1039,    18,
    -433,  -105,  -758, -1039, -1039, -1039, -1039,  -102, -1039,  -109,
    -210, -1039, -1039,    40,   -98,   -95,   -27, -1039, -1039,     8,
    -474, -1039, -1039,    37, -1039, -1039, -1039,  -257,  -915,   -91,
    -123,  -365,   243,    93, -1039, -1039, -1039, -1039,   244,   -89,
   -1039, -1039,     5, -1039,    -1, -1039, -1039, -1039,   -36, -1039,
   -1039, -1039, -1039, -1039, -1039,   554,   109,  -927, -1039, -1039,
   -1039,   851, -1039, -1039, -1039,   -81,  -161,    13,   -11, -1039,
   -1039,  -265,  -493, -1039, -1039, -1039,  -312,  -309,  -537,  -665,
   -1039, -1039, -1039, -1039,  -802, -1039, -1039,   -56, -1039, -1039,
   -1039, -1039,  -100, -1039, -1039, -1039, -1039,   326, -1039,    50,
    -658, -1039, -1039, -1039,  -199, -1039, -1039,  -300, -1039, -1039,
   -1039, -1039, -1039, -1039,     7,   362,  -303,   376, -1039,     2,
    -113,  -690, -1039, -1039,  -242, -1039,  -697, -1039,  -948, -1039,
   -1039,  -321, -1039, -1039,  -431, -1039, -1039,  -468, -1039, -1039,
      20, -1039, -1039, -1039,  1153,   880,  1057,    63, -1039, -1039,
      95,   352,    -5, -1039,    29, -1039,  1131,   -29,   -64, -1039,
      -4,   788, -1039, -1039,  -492, -1039,  1229,   210, -1039, -1039,
     114,  -894, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039,   295,   204,   250,  -406,   464, -1039,   465, -1039,
     170, -1039,    36, -1039,   -87, -1039,  -395, -1039,  -899, -1039,
   -1039, -1039,   -99, -1039,  -343, -1039, -1039,   184, -1039, -1039,
   -1039, -1039,   -47, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039, -1039,
   -1039, -1039, -1039, -1039, -1039, -1039, -1039,    77,   140,    91,
    -888,  -811, -1039,  -432,   -88,  -558, -1039,   -78, -1039,   -55,
   -1039, -1038, -1039,  -667, -1039,  -556, -1039, -1039, -1039,  -255,
   -1039, -1039, -1039,   344, -1039,  -153,  -417, -1039,  -427,    39,
     100, -1039,  -657, -1039
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   360,    91,    92,    93,   468,
      94,    95,    96,   362,    98,   352,    99,   948,   665,   380,
     516,   517,   668,   664,   796,   797,  1029,  1110,  1031,   802,
     803,   946,   942,   804,   101,   102,   103,   524,   104,   363,
     527,   678,   675,   676,   951,   364,   953,  1102,  1181,   106,
     107,   606,   614,   607,   461,   462,   917,  1145,   463,   108,
     323,   109,   365,   765,   366,   443,   593,   891,   594,   595,
     998,   596,  1001,   597,  1092,   896,   747,  1086,  1087,  1141,
    1173,   367,   113,   114,   115,  1113,  1039,  1040,   117,   536,
    1057,   118,   555,   703,   556,   969,   557,   119,   559,   705,
     861,   970,   862,   863,   864,   865,   971,   374,   375,  1056,
     560,   983,  1041,   540,   824,   389,   693,   534,   683,   684,
     688,   689,   820,  1060,   821,   961,  1164,   566,   567,   715,
     568,   569,   881,  1081,   368,   420,   507,   564,   872,   508,
     509,   897,  1175,   996,   421,   883,   422,   554,   991,  1082,
    1207,  1176,  1089,   572,   561,   982,   706,   992,   708,   867,
     868,   976,  1073,  1074,   805,   122,   284,   285,   539,   125,
     126,   127,   286,   545,   287,   270,   130,   131,   351,   510,
     381,   133,   134,   135,   136,   701,  1047,   138,   432,   553,
     139,   140,   271,  1071,  1072,  1134,  1167,   741,   742,   900,
     995,   743,   141,   142,   143,   427,   428,   429,   430,   722,
     702,   431,   822,     6,   680,   385,   574,   575,   958,   959,
    1169,  1170,   353,   354,   145,   436,   581,   582,   583,   889,
     727,   728,   144,   773,   485,   923,  1095,   486,   487,   777,
    1007,   778,   490,   926,  1097,   781,   785,   782,   786,   783,
     787,   784,   788,   789,   790,   939,   635,   836,   837,   838,
     876,   877,   985,   878,   840,   749,   910,   911,  1080,   694,
     987,   841,   842,   879,   965,   444,   845,   966,   964,   846,
     604,   602,   603,   847,   880,   439,   446,   589,   590,   591,
     266,   267,   268,   269
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
     128,   132,   280,   361,   111,    97,   357,   298,   282,   410,
     110,   522,   120,   105,   474,   451,   573,   475,   116,   600,
     394,   585,   609,   100,   388,   426,   711,   843,   816,   576,
     577,   288,   328,   615,   129,   825,   384,   733,   853,   355,
       5,   403,   538,   283,   898,   750,   751,   465,  1084,   584,
     898,   968,   523,   281,   679,   433,   434,   901,   376,   377,
     378,   473,   700,  1053,  1063,   986,   329,   666,   124,   666,
     710,   265,   371,   666,  1091,   416,   417,  1070,   792,   793,
     794,   290,   291,   292,   293,   294,   295,   296,   440,   448,
     449,   610,   441,   707,   445,   666,   398,     3,  1027,   406,
     326,   148,   666,  1174,   690,   408,   441,   369,   769,   262,
     558,   416,   417,   387,   696,   972,   447,   157,   158,   392,
     395,   411,   328,   264,   116,   157,   158,  -118,    -2,   100,
     526,  -377,  -379,   149,   666,  1192,   453,   756,   844,  -378,
     409,   666,   745,   423,   466,   711,   869,   707,   870,   418,
     407,   973,   974,   393,   396,  -364,   329,   330,   600,   962,
    1062,  -364,   372,   373,   638,  1144,   746,   475,   149,   415,
    -363,  -362,   263,   331,   124,  1133,  -363,  -362,   442,  1100,
     571,   423,   455,   732,   457,   418,  1137,   795,   438,   710,
    -377,  -379,   442,  1139,   770,   412,   855,   384,  -378,   403,
     667,   -60,   849,   -60,   -60,   898,   -60,   -60,   356,   852,
     -60,   637,  1002,   424,   425,   297,   454,   332,   456,   391,
     535,   450,   898,   558,   851,   856,   262,  1193,   667,  1004,
     700,  -382,   721,  1166,   764,   849,   260,   472,   857,  1171,
     264,   858,   986,   695,  -377,   697,   414,   757,   758,   245,
     333,   424,   425,  -505,   558,   459,  -379,   245,  -505,  1003,
     859,   460,   839,   241,   530,   952,   328,   667,   -60,  1204,
    -383,   -60,   713,  1191,   849,   -60,  -378,   714,   -60,   759,
     392,   537,   261,    38,   760,  1212,  -381,  1204,  -380,   263,
    -382,  -375,  -376,   424,   425,  -357,   283,  -375,  -376,  1218,
     329,  -357,   898,  -377,   328,   328,   281,  -355,   547,  1088,
     549,  1067,   551,  -355,   393,  -379,   334,   909,   909,   909,
     761,   392,   328,  -321,  1163,  1075,   986,  -356,   986,  -383,
     335,   720,   860,  -356,  -333,  -378,   406,   336,   329,   329,
    -333,   608,   546,   608,   548,  -381,  -382,  -380,   520,    21,
      22,  -172,   328,   260,   328,   393,   329,  -365,   411,   337,
    -383,  -381,   531,  -365,   898,   605,   465,  1108,   580,  -175,
    -366,  1128,  -367,   558,  -380,  -172,  -366,    38,  -367,   116,
     391,   988,   521,   989,   281,  -368,   329,   407,   329,   327,
     476,  -368,  1126,   898,   338,   612,   613,  -360,   843,   261,
    1143,   550,   414,  -360,  -369,  -382,  1064,   392,  1066,  -370,
    -369,  -361,  -359,   670,   328,  -370,   518,  -361,  -359,  -383,
    -381,   391,  1200,   809,  1140,  -358,   810,   383,  -334,   124,
     669,  -358,   412,  -380,  -334,   398,   146,   147,  1194,   723,
    1195,   393,   472,  1200,   724,  1214,   339,  -371,   329,   552,
     520,  1196,   328,  -371,  1197,  1214,  -507,  -372,  -373,   617,
    -374,  -507,   621,  -372,  -373,   997,  -374,  -270,  1162,   565,
     704,   392,  -272,   890,   843,   709,   990,   340,   399,  -321,
     402,   404,   563,   414,   521,   341,   329,  -118,  -118,   699,
     342,   526,   343,   618,  1178,   414,   521,  1179,   406,   608,
     608,   990,   344,   999,  -321,   393,   843,   391,   990,  1130,
     398,  -321,   345,   671,   621,   346,   262,   262,   518,   347,
     411,   348,   262,   262,   262,   328,   349,   328,   328,   762,
     264,   264,   520,   817,   691,  1054,   264,   264,   264,  1208,
    1209,   398,   520,   262,   328,   350,   663,   672,   521,   281,
     379,  -331,   636,    38,   726,   909,   405,   264,   392,   329,
     435,   329,   329,   437,   453,   617,   521,   467,   808,   471,
    -154,   391,   978,   979,   980,   981,   521,   513,   329,   263,
     263,   246,   673,   807,  1161,   263,   263,   263,   533,   541,
     738,   740,   393,  1090,   412,   682,   748,   622,   623,   618,
     518,   512,   624,   736,   657,   512,   263,   975,   639,   658,
     518,   643,   262,   391,   644,   646,  1058,   798,   799,   800,
    1161,   647,   648,   649,   739,   871,   264,   600,   650,   899,
     651,   652,   909,   839,   909,   636,   653,   654,   402,   404,
     655,   656,   659,   260,   260,   414,   660,   608,   674,   260,
     260,   260,   686,  -321,   328,   716,  -255,   719,   391,   718,
     328,   729,   262,   358,   752,   731,   755,   763,   671,   766,
     260,   767,   768,   774,   779,   263,   264,   392,   725,  1147,
     402,   404,   771,   772,   775,   776,   714,   806,   329,   261,
     261,   419,   811,   813,   329,   261,   261,   261,   818,   815,
     819,   848,   672,   850,   512,   519,   512,   866,   854,   839,
     886,   393,   888,   760,   914,  1068,   261,   915,  1180,   869,
     600,   949,   918,   920,   938,   263,   921,   941,   927,   328,
     328,   328,   944,  1118,   945,   418,   558,   960,   963,   260,
     967,   839,   870,   542,   543,   544,  1005,  1018,  1008,  1201,
    1010,  1203,  1011,  1012,  1013,   290,   291,   292,   293,   294,
     295,   296,  1199,   329,   329,   329,  1014,  1015,   391,  1213,
    1016,  1055,   600,  1017,  1019,  1020,  1059,   391,   290,   291,
     292,   293,   294,   295,   296,   261,  -327,  1085,  1093,   260,
     600,  1094,  1098,  1217,  1096,  1099,   512,  1117,   512,  1132,
    1125,    33,  1138,  1136,  1165,  1142,  1146,   519,  1160,   882,
     328,   558,   558,   159,   160,   161,   162,   163,   164,   165,
     166,   167,  1148,  1149,    33,  1150,  1172,  1190,  1187,  1185,
     512,  1205,   940,    90,  1026,   261,  1000,    38,  1030,  1052,
    1123,   943,  1032,   464,   329,  1033,  1153,   950,   558,  1034,
     753,  1035,   754,   916,   895,   994,   112,   902,   726,  1038,
    1104,  1127,   512,   512,  1188,   955,   692,   398,    17,    18,
      19,   662,   402,   404,   984,    21,    22,    23,    24,    25,
      26,    27,    28,    29,   661,   279,  1216,   977,   812,   519,
     744,   617,   884,  1048,   262,   578,   579,  1076,   834,   519,
     290,   291,   292,   293,   294,   295,   296,   885,   264,  1079,
    1065,     0,   717,     0,   954,     0,     0,     0,     0,   834,
     413,     0,     0,   410,   532,   618,     0,     0,     0,   361,
       0,  1083,     0,     0,     0,   128,  1046,   328,     0,  1037,
    1028,   328,     0,   328,   835,  1036,  1119,  1042,   105,   512,
       0,     0,     0,   834,   834,   834,     0,   263,   100,  1135,
       0,     0,     0,     0,     0,   835,     0,  1069,     0,   129,
       0,   329,     0,   402,     0,   329,   570,   329,     0,     0,
    1050,     0,   993,  1116,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   361,     0,     0,     0,   835,
     835,   835,  1151,  1045,   390,     0,  1119,   400,     0,     0,
       0,     0,     0,   406,     0,  1119,   128,  1106,   328,   408,
    1103,   260,     0,   543,   544,  1198,     0,     0,     0,     0,
       0,  1159,   128,  1115,  1206,   411,  1112,  1109,     0,  1101,
     392,   128,  1111,   823,  1114,   328,     0,     0,  1155,     0,
     129,     0,   329,  1182,   409,   100,     0,  1184,  1119,     0,
       0,     0,   123,   570,   407,     0,   129,   261,     0,     0,
    1168,     0,     0,  1186,   393,   129,   413,   887,     0,   329,
     834,     0,   406,     0,  1202,     0,   326,     0,     0,     0,
     402,   404,   398,     0,   325,   411,     0,     0,     0,  1154,
    1045,   128,     0,  1189,   411,     0,     0,   128,  1158,  1120,
     128,  1112,  1109,     0,     0,   392,   617,  1111,     0,  1114,
       0,  1152,     0,     0,  1156,   406,   835,   570,   398,     0,
     281,   262,     0,   407,     0,   129,     0,     0,     0,   511,
     391,   129,     0,   511,   129,   264,   520,   411,     0,   393,
     618,     0,   617,   128,     0,   834,     0,   413,   121,     0,
     414,     0,   464,     0,     0,   458,     0,     0,     0,   413,
       0,     0,  1183,     0,     0,  1045,   281,   520,  1120,   520,
     521,     0,     0,     0,   401,     0,   618,   129,     0,   834,
     324,   834,     0,     0,   263,     0,     0,   520,     0,     0,
       0,   835,     0,     0,     0,     0,   458,   400,     0,     0,
       0,   521,     0,   521,   518,   391,     0,     0,     0,     0,
     414,  1120,     0,     0,   262,     0,     0,     0,     0,   414,
       0,   521,     0,     0,   137,   835,     0,   835,   264,     0,
       0,     0,   511,     0,   511,   518,     0,   518,     0,     0,
     512,     0,     0,     0,     0,     0,   397,   834,   260,     0,
       0,     0,     0,     0,   289,   518,     0,     0,   834,   834,
     834,     0,   414,     0,     0,   262,   262,     0,   834,     0,
       0,     0,     0,   262,     0,   834,     0,   263,     0,   264,
     264,     0,   390,     0,   262,     0,     0,   264,     0,   562,
       0,     0,     0,   835,   261,     0,     0,     0,   264,     0,
       0,     0,     0,     0,   835,   835,   835,     0,     0,   413,
       0,     0,     0,     0,   835,     0,     0,     0,   325,     0,
       0,   835,     0,   512,   511,     0,   511,     0,   263,   263,
     370,   834,     0,   834,   616,   834,   263,     0,   382,     0,
       0,   260,     0,     0,     0,     0,   458,   263,     0,   947,
       0,     0,     0,     0,     0,     0,   325,   325,   511,     0,
     956,     0,     0,     0,     0,   327,     0,   834,     0,     0,
       0,     0,     0,     0,   401,     0,     0,   835,     0,   835,
       0,   835,     0,     0,     0,     0,     0,   261,     0,     0,
     511,   511,   260,   260,     0,     0,     0,     0,     0,     0,
     260,     0,   562,     0,   325,     0,   325,     0,   512,     0,
       0,   260,     0,   835,   452,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   512,
       0,     0,     0,   712,     0,     0,     0,     0,   261,   261,
     616,     0,     0,     0,     0,     0,   261,     0,     0,     0,
       0,   484,   469,   470,     0,   488,   489,   261,   491,   492,
     493,   494,   495,   496,   497,   498,   499,   500,   501,   502,
     503,   504,     0,     0,   397,     0,     0,   511,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   519,     0,     0,     0,     0,     0,     0,
     528,     0,   529,     0,   325,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   620,     0,     0,     0,   413,     0,
       0,     0,     0,     0,   519,     0,   519,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   519,   306,   307,   308,     0,     0,
       0,     0,   712,   798,   799,   800,     0,     0,     0,     0,
       0,   801,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,   397,   325,     0,     0,
     325,     0,     0,     0,     0,   370,     0,     0,     0,     0,
       0,  1121,     0,  1122,     0,  1124,   325,     0,     0,     0,
     611,     0,     0,     0,     0,     0,   640,   641,   642,    38,
       0,   645,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,     0,   397,
       0,     0,   737,     0,     0,   677,     0,     0,     0,     0,
       0,  1157,     0,     0,     0,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   397,     0,
       0,    88,     0,   681,     0,     0,   685,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     625,     0,   698,     0,   382,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   325,     0,     0,     0,
       0,     0,   325,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   626,   627,     0,     0,     0,     0,     0,   203,
     204,   205,   628,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,     0,     0,     0,     0,   616,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   511,     0,
       0,   325,   325,   325,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   397,   299,   300,   301,   302,   303,
     304,   305,   791,   814,     0,     0,     0,     0,     0,     0,
    1044,     0,     0,   306,   307,   308,     0,   629,     0,   630,
     631,     0,   632,   633,   413,   248,   249,   250,   634,   252,
     253,   254,   255,   256,   257,   258,   386,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,   413,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   511,   325,     0,     0,   780,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   892,   893,   894,
       0,     0,     0,     0,   413,     0,     0,     0,     0,     0,
       0,  1105,     0,   413,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,     0,  1105,     0,     0,
       0,     0,     0,     0,     0,   458,  1105,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   677,   413,     0,     0,     0,   413,   299,   300,   301,
     302,   303,   304,   305,     0,     0,   511,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   307,   308,   685,     0,
       0,     0,     0,     0,     0,     0,     0,   511,     0,     0,
       0,     0,     0,     0,     0,     0,  1105,    31,   386,     0,
       0,     0,  1105,    33,   919,  1105,     0,   123,     0,   325,
     458,   562,   922,   325,     0,   325,   924,   925,     0,     0,
     928,   929,   930,   931,   932,   933,   934,   935,   936,   937,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   712,  1105,     0,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,     0,     0,
       0,     0,     0,   299,   300,   301,   302,   303,   304,   305,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     325,   306,   307,   308,     0,     0,     0,     0,     0,     0,
       0,    88,     0,  1043,     0,  1049,     0,     0,     0,  1051,
       0,     0,     0,     0,     0,     0,     0,   325,     0,    33,
       7,     8,     9,    10,    11,    12,    13,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    14,    15,
      16,     0,    17,    18,    19,    20,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,  1021,  1022,
      31,    32,  1006,     0,     0,  1009,    33,    34,    35,     0,
    1023,     0,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,     0,     0,   324,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
    1061,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,  1024,  1025,     0,     0,     0,     0,     0,     0,
    1107,     0,     0,     0,    88,     0,     0,     0,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
     505,   279,     0,     0,     0,     0,     0,     0,     0,     0,
     506,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   423,     0,     0,
       0,     0,     0,   397,     0,   397,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,     0,     0,   397,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,  -279,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,   424,   425,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   586,   241,     0,
     242,   243,   244,   245,     0,   587,   247,   588,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586,   241,   592,   242,   243,   244,   245,
       0,   587,   247,     0,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
     241,     0,   242,   243,   244,   245,     0,   587,   247,   598,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   586,   241,     0,   242,   243,
     244,   245,   601,   587,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   586,   241,   619,   242,   243,   244,   245,     0,   587,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   586,   241,   687,
     242,   243,   244,   245,     0,   587,   247,     0,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586,   241,   957,   242,   243,   244,   245,
       0,   587,   247,     0,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
     241,  1210,   242,   243,   244,   245,     0,   587,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   586,   241,  1215,   242,   243,
     244,   245,     0,   587,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   599,   241,     0,   242,   243,   244,   245,     0,   587,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,   226,   227,   228,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   730,   241,     0,
     242,   243,   244,   245,     0,   587,   247,     0,   248,   249,
     250,   251,   252,   253,   254,   255,   256,   257,   258,   259,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,     0,   242,   243,   244,   245,
    1177,   587,   247,     0,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1211,
     241,     0,   242,   243,   244,   245,     0,   587,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   206,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   227,   228,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1219,   241,     0,   242,   243,
     244,   245,     0,   587,   247,     0,   248,   249,   250,   251,
     252,   253,   254,   255,   256,   257,   258,   259,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   206,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,   226,
     227,   228,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   241,     0,   242,   243,   244,   245,     0,   246,
     247,     0,   248,   249,   250,   251,   252,   253,   254,   255,
     256,   257,   258,   259,   150,   151,   152,   153,   154,   155,
     156,   448,   449,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   826,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   903,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     0,   827,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1077,   716,  1078,
     904,   829,   905,   450,     0,   907,   832,     0,   248,   249,
     250,   908,   252,   253,   254,   255,   256,   257,   258,   833,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   206,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   227,   228,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   241,     0,   242,   243,   244,   245,
       0,   587,   247,     0,   248,   249,   250,   251,   252,   253,
     254,   255,   256,   257,   258,   259,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   206,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,   226,   227,   228,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     241,     0,   242,   243,   244,   245,     0,     0,   247,     0,
     248,   249,   250,   251,   252,   253,   254,   255,   256,   257,
     258,   259,   150,   151,   152,   153,   154,   155,   156,   448,
     449,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   826,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   903,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,   827,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   716,     0,   904,   829,
     905,   450,   906,   907,   832,     0,   248,   249,   250,   908,
     252,   253,   254,   255,   256,   257,   258,   833,   150,   151,
     152,   153,   154,   155,   156,   448,   449,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   826,
     172,   173,   174,   175,   176,   177,   178,   179,     0,     0,
     180,   181,   182,   183,   184,   185,     0,   186,   187,   188,
     189,     0,     0,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,   903,
     207,   208,   209,   210,   211,   212,   213,   214,   215,   216,
     217,   218,   219,   220,   221,   222,   223,   224,   225,     0,
     827,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   229,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   716,     0,   904,   829,   905,   450,   912,   907,
     832,     0,   248,   249,   250,   908,   252,   253,   254,   255,
     256,   257,   258,   833,   150,   151,   152,   153,   154,   155,
     156,   448,   449,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   826,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   903,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     0,   827,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   716,     0,
     904,   829,   905,   450,   913,   907,   832,     0,   248,   249,
     250,   908,   252,   253,   254,   255,   256,   257,   258,   833,
     150,   151,   152,   153,   154,   155,   156,   448,   449,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   826,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,   903,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,     0,   827,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   716,     0,   904,   829,   905,   450,
       0,   907,   832,  1129,   248,   249,   250,   908,   252,   253,
     254,   255,   256,   257,   258,   833,   150,   151,   152,   153,
     154,   155,   156,   448,   449,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   826,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,   903,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,     0,   827,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     716,     0,   904,   829,   905,   450,     0,   907,   832,  1131,
     248,   249,   250,   908,   252,   253,   254,   255,   256,   257,
     258,   833,   150,   151,   152,   153,   154,   155,   156,   448,
     449,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   826,   172,   173,   174,   175,   176,   177,
     178,   179,     0,     0,   180,   181,   182,   183,   184,   185,
       0,   186,   187,   188,   189,     0,     0,   190,   191,   192,
     193,   194,   195,   196,   197,   198,   199,   200,   201,   202,
     203,   204,   205,   441,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,   827,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   716,     0,   828,   829,
     830,   450,     0,   831,   832,     0,   248,   249,   250,   442,
     252,   253,   254,   255,   256,   257,   258,   833,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,     0,     0,
    -650,  -650,  -650,  -650,  -650,  -650,     0,  -650,  -650,  -650,
    -650,     0,     0,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,     0,
    -650,     0,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,  -650,     0,  -686,  -650,  -650,  -650,     0,  -650,
    -650,     0,  -650,  -650,  -650,  -650,  -650,  -650,  -650,  -650,
    -650,  -650,  -650,  -650,   150,   151,   152,   153,   154,   155,
     156,   448,   449,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   826,   172,   173,   174,   175,
     176,   177,   178,   179,     0,     0,   180,   181,   182,   183,
     184,   185,     0,   186,   187,   188,   189,     0,     0,   190,
     191,   192,   193,   194,   195,   196,   197,   198,   199,   200,
     201,   202,   203,   204,   205,   873,   207,   208,   209,   210,
     211,   212,   213,   214,   215,   216,   217,   218,   219,   220,
     221,   222,   223,   224,   225,     0,   827,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   716,     0,
       0,   829,     0,   450,     0,   874,   832,     0,   248,   249,
     250,   875,   252,   253,   254,   255,   256,   257,   258,   833,
     150,   151,   152,   153,   154,   155,   156,   448,   449,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   826,   172,   173,   174,   175,   176,   177,   178,   179,
       0,     0,   180,   181,   182,   183,   184,   185,     0,   186,
     187,   188,   189,     0,     0,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199,   200,   201,   202,   203,   204,
     205,     0,   207,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,     0,   827,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   716,     0,     0,   829,     0,   450,
       0,   831,   832,     0,   248,   249,   250,     0,   252,   253,
     254,   255,   256,   257,   258,   833,   150,   151,   152,   153,
     154,   155,   156,   448,   449,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   826,   172,   173,
     174,   175,   176,   177,   178,   179,     0,     0,   180,   181,
     182,   183,   184,   185,     0,   186,   187,   188,   189,     0,
       0,   190,   191,   192,   193,   194,   195,   196,   197,   198,
     199,   200,   201,   202,   203,   204,   205,     0,   207,   208,
     209,   210,   211,   212,   213,   214,   215,   216,   217,   218,
     219,   220,   221,   222,   223,   224,   225,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   229,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     716,     0,     0,   829,     0,   450,     0,     0,   832,     0,
     248,   249,   250,     0,   252,   253,   254,   255,   256,   257,
     258,   833,   272,   273,   274,   275,   276,   277,   278,     0,
       0,   625,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,     0,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,   279,     0,     0,     0,     0,     0,     0,    33,    34,
       0,     0,     0,   626,   627,     0,     0,     0,     0,     0,
     203,   204,   205,   628,   207,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   477,   478,   479,   480,   481,   482,   483,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   306,   307,   308,     0,     0,     0,     0,   629,     0,
     630,   631,     0,   632,   633,     0,   248,   249,   250,   634,
     252,   253,   254,   255,   256,   257,   258,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,    30,    31,    32,     0,
       0,     0,     0,    33,    34,    35,    36,    37,     0,     0,
       0,     0,   311,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,     0,
      87,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,     0,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     279,    31,   358,     0,     0,     0,     0,    33,    34,     0,
       0,   359,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,     0,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   505,   279,    14,    15,    16,     0,    17,
      18,    19,    20,   506,     0,    88,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   279,    31,   358,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
     423,     0,     0,     0,     0,     0,     0,     0,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
     424,   425,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    14,    15,    16,     0,    17,    18,    19,    20,     0,
       0,    88,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   279,    31,     0,     0,     0,     0,     0,    33,
      34,    35,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,     0,     0,     0,     0,     0,     7,
       8,     9,    10,    11,    12,    13,    21,    22,    23,    24,
      25,    26,    27,    28,    29,   505,   279,    14,    15,    16,
       0,    17,    18,    19,    20,   506,     0,    88,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   279,    31,
       0,     0,     0,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
     299,   300,   301,   302,   303,   304,   305,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,   307,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,   309,     0,   310,
     299,   300,   301,   302,   303,   304,   305,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,   307,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,     0,     0,     0,     0,   299,   300,   301,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,   306,   307,   308,     0,     0,     0,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,    33,   299,   300,   301,   302,   303,   304,   305,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     306,   307,   308,   525,     0,     0,     0,   526,     0,     0,
       0,     0,     0,     0,    88,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    33,   309,
       0,     0,     0,     0,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,     0,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,   306,   307,   308,     0,     0,
       0,     0,   526,     0,     0,     0,     0,     0,     0,    88,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,    33,   299,   300,   301,   302,   303,   304,
     305,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   306,   307,   308,     0,     0,     0,   299,   300,
     301,   302,   303,   304,   305,     0,    88,     0,     0,    38,
       0,     0,     0,     0,     0,   386,   306,   307,   308,     0,
      33,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    31,     0,
       0,     0,     0,     0,    33,   299,   300,   301,   302,   303,
     304,   305,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   306,   307,   308,     0,     0,     0,     0,
       0,    88,     0,   311,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,   311,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,     0,
     299,   300,   301,   302,   303,   304,   305,     0,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   306,   307,
     308,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    88,     0,   311,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,    33,   299,   300,   301,
     302,   303,   304,   305,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   306,   307,   308,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    88,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,     0,   311,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,     0,   299,   300,   301,   302,   303,   304,   305,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
     306,   307,   308,   514,  1178,     0,     0,  1179,     0,     0,
       0,     0,     0,     0,     0,     0,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,    33,   299,
     300,   301,   302,   303,   304,   305,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   306,   307,   308,
     514,     0,     0,     0,   515,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   299,   300,   301,   302,   303,   304,   305,     0,
       0,    38,     0,     0,     0,     0,  1178,     0,     0,  1179,
     306,   307,   308,     0,     0,     0,     0,     0,   311,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     272,   273,   274,   275,   276,   277,   278,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,     0,    17,    18,    19,    20,   515,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,   279,
      31,   358,     0,     0,    38,     0,    33,    34,     0,     0,
     359,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   311,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   229,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   272,   273,   274,   275,   276,   277,   278,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,     0,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     279,    31,     0,     0,     0,     0,     0,    33,    34,    35,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     229,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   272,   273,   274,   275,   276,   277,   278,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,     0,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,   279,    31,     0,     0,     0,     0,     0,    33,    34,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   229,   230,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   272,   273,   274,   275,   276,   277,   278,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   168,   169,   170,     0,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   279,     0,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,   229,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   272,   273,   274,   275,   276,   277,
     278,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   168,   169,   170,     0,   734,     0,   735,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,   279,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   229,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   272,   273,   274,   275,   276,
     277,   278,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   168,   169,   170,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   279,     0,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   229,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240
};

static const short int yycheck[] =
{
       5,     5,    35,   111,     5,     5,   105,    36,    35,   132,
       5,   354,     5,     5,   326,   270,   422,   326,     5,   446,
     125,   438,   455,     5,   124,   138,   563,   694,   685,   424,
     425,    35,    37,   464,     5,   693,   123,   593,   703,   103,
       4,   128,   385,    35,   741,   603,   604,   289,   996,   437,
     747,   853,   355,    35,   528,   142,   143,   747,   114,   115,
     116,   326,   554,   951,   963,   876,    37,     3,     5,     3,
     563,    32,    46,     3,  1001,    10,    11,   971,    29,    30,
      31,     3,     4,     5,     6,     7,     8,     9,   241,    10,
      11,   456,    64,   561,   247,     3,   125,     0,   940,   132,
      37,    12,     3,  1141,   537,   132,    64,   111,    64,    32,
     419,    10,    11,   124,   547,    19,   269,    10,    11,   124,
     125,   132,   127,    32,   111,    10,    11,   137,     0,   111,
     140,    85,    85,    44,     3,  1173,    12,   611,   694,    85,
     132,     3,    26,    78,   297,   682,   140,   615,   142,    84,
     132,    55,    56,   124,   125,   136,   127,   142,   585,   824,
     962,   142,   136,   137,   476,  1092,    50,   476,    44,   133,
     136,   136,    32,   142,   111,  1069,   142,   142,   150,  1021,
     422,    78,   281,   141,   283,    84,  1074,   138,   149,   682,
     144,   144,   150,  1081,   150,   132,     3,   284,   144,   286,
     136,   137,   136,   137,   140,   902,   140,   137,   137,   701,
     140,   476,   902,   148,   149,   137,   280,   142,   282,   124,
     373,   142,   919,   532,   698,    32,   149,  1175,   136,   919,
     722,    85,   575,  1132,   622,   136,    32,   324,    45,  1138,
     149,    48,  1053,   546,    85,   548,   132,   612,   613,   142,
     142,   148,   149,   141,   563,   288,    85,   142,   146,   917,
      67,   288,   694,   137,   363,   139,   271,   136,   137,  1184,
      85,   140,   136,  1172,   136,   137,    85,   141,   140,   136,
     285,   380,    32,    85,   141,  1200,    85,  1202,    85,   149,
     144,   136,   136,   148,   149,   136,   288,   142,   142,  1214,
     271,   142,   999,   144,   309,   310,   288,   136,   407,   999,
     409,   969,   412,   142,   285,   144,   142,   749,   750,   751,
     142,   326,   327,   145,  1126,   983,  1137,   136,  1139,   144,
     142,   573,   139,   142,   136,   144,   369,   142,   309,   310,
     142,   454,   406,   456,   408,   144,    85,   144,   353,    32,
      33,    26,   357,   149,   359,   326,   327,   136,   369,   142,
      85,    85,   366,   142,  1061,   452,   608,  1024,   432,    44,
     136,  1061,   136,   682,    85,    50,   142,    85,   142,   366,
     285,   141,   353,   143,   366,   136,   357,   369,   359,    37,
     327,   142,  1057,  1090,   142,   459,   460,   136,  1065,   149,
    1090,   412,   288,   142,   136,   144,   964,   412,   966,   136,
     142,   136,   136,   518,   419,   142,   353,   142,   142,   144,
     144,   326,  1180,   138,  1082,   136,   141,   136,   136,   366,
     517,   142,   369,   144,   142,   464,    25,    26,    32,   141,
      34,   412,   529,  1201,   146,  1203,   142,   136,   419,   413,
     455,    45,   457,   142,    48,  1213,   141,   136,   136,   464,
     136,   146,   467,   142,   142,   896,   142,   137,  1125,   139,
     557,   476,   142,   728,  1141,   562,   142,   142,   126,   145,
     128,   129,   419,   369,   455,   142,   457,   136,   137,   553,
     142,   140,   142,   464,   137,   381,   467,   140,   531,   612,
     613,   142,   142,   898,   145,   476,  1173,   412,   142,  1065,
     539,   145,   142,   518,   519,   142,   439,   440,   455,   142,
     531,   142,   445,   446,   447,   530,   142,   532,   533,   616,
     439,   440,   537,   686,   539,   952,   445,   446,   447,  1196,
    1197,   570,   547,   466,   549,   142,   510,   518,   519,   531,
     142,   136,   475,    85,   583,   987,   144,   466,   563,   530,
      24,   532,   533,   137,    12,   570,   537,   139,   673,   136,
     136,   476,    13,    14,    15,    16,   547,   137,   549,   439,
     440,   144,   519,   670,  1121,   445,   446,   447,   140,   142,
     595,   595,   563,   999,   531,   532,   597,   137,   136,   570,
     537,   351,   139,   595,   143,   355,   466,   862,   141,   143,
     547,   141,   535,   518,   141,   141,   959,    29,    30,    31,
    1157,   141,   141,   141,   595,   712,   535,  1054,   141,   742,
     141,   141,  1064,  1065,  1066,   558,   141,   141,   286,   287,
     141,   141,   141,   439,   440,   531,   136,   760,   136,   445,
     446,   447,   137,   145,   659,   137,   143,   143,   563,   142,
     665,   138,   585,    44,   136,   146,   136,   136,   673,     3,
     466,   145,   145,   141,   141,   535,   585,   682,   583,  1096,
     328,   329,   143,   146,   143,   143,   141,   140,   659,   439,
     440,   137,   139,   136,   665,   445,   446,   447,   143,   141,
      84,   136,   673,   136,   454,   353,   456,   145,   142,  1141,
     146,   682,    84,   141,   136,   970,   466,   136,  1151,   140,
    1147,   808,   138,   146,   141,   585,   146,   140,   143,   734,
     735,   736,   141,  1045,    37,    84,  1045,   141,   143,   535,
     136,  1173,   142,   391,   392,   393,   143,   141,   143,  1182,
     143,  1184,   143,   143,   143,     3,     4,     5,     6,     7,
       8,     9,  1179,   734,   735,   736,   143,   143,   673,  1202,
     143,   136,  1199,   143,   141,   143,    84,   682,     3,     4,
       5,     6,     7,     8,     9,   535,   146,   139,   143,   585,
    1217,   136,    13,  1210,   141,    13,   546,   136,   548,   143,
      47,    49,   143,   146,   146,   143,   143,   455,  1120,   718,
     815,  1120,  1121,    12,    13,    14,    15,    16,    17,    18,
      19,    20,   143,   143,    49,   143,   143,  1170,   137,   136,
     580,   136,   796,     5,   940,   585,   900,    85,   940,   948,
    1050,   801,   940,   289,   815,   940,  1103,   810,  1157,   940,
     607,   940,   608,   760,   740,   891,     5,   748,   887,   940,
    1021,  1060,   612,   613,  1164,   815,   540,   896,    25,    26,
      27,   509,   520,   521,   872,    32,    33,    34,    35,    36,
      37,    38,    39,    40,   508,    42,  1207,   867,   678,   537,
     595,   896,   722,   940,   817,   431,   431,   985,   694,   547,
       3,     4,     5,     6,     7,     8,     9,   723,   817,   987,
     965,    -1,   568,    -1,   814,    -1,    -1,    -1,    -1,   715,
     132,    -1,    -1,  1046,   370,   896,    -1,    -1,    -1,  1037,
      -1,   995,    -1,    -1,    -1,   940,   940,   942,    -1,   940,
     940,   946,    -1,   948,   694,   940,  1046,   940,   940,   699,
      -1,    -1,    -1,   749,   750,   751,    -1,   817,   940,  1072,
      -1,    -1,    -1,    -1,    -1,   715,    -1,   971,    -1,   940,
      -1,   942,    -1,   621,    -1,   946,   422,   948,    -1,    -1,
     944,    -1,   887,  1039,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1103,    -1,    -1,    -1,   749,
     750,   751,  1101,   940,   124,    -1,  1106,   127,    -1,    -1,
      -1,    -1,    -1,  1046,    -1,  1115,  1021,  1021,  1023,  1046,
    1021,   817,    -1,   671,   672,  1178,    -1,    -1,    -1,    -1,
      -1,  1118,  1037,  1037,  1187,  1046,  1037,  1037,    -1,  1021,
    1045,  1046,  1037,   691,  1037,  1050,    -1,    -1,  1104,    -1,
    1021,    -1,  1023,  1152,  1046,  1037,    -1,  1156,  1158,    -1,
      -1,    -1,     5,   509,  1046,    -1,  1037,   817,    -1,    -1,
    1134,    -1,    -1,  1160,  1045,  1046,   288,   725,    -1,  1050,
     876,    -1,  1115,    -1,  1183,    -1,  1023,    -1,    -1,    -1,
     738,   739,  1121,    -1,    37,  1106,    -1,    -1,    -1,  1103,
    1037,  1106,    -1,  1167,  1115,    -1,    -1,  1112,  1112,  1046,
    1115,  1112,  1112,    -1,    -1,  1120,  1121,  1112,    -1,  1112,
      -1,  1103,    -1,    -1,  1106,  1158,   876,   573,  1157,    -1,
    1112,  1054,    -1,  1115,    -1,  1106,    -1,    -1,    -1,   351,
    1045,  1112,    -1,   355,  1115,  1054,  1151,  1158,    -1,  1120,
    1121,    -1,  1157,  1158,    -1,   951,    -1,   369,     5,    -1,
    1046,    -1,   608,    -1,    -1,   285,    -1,    -1,    -1,   381,
      -1,    -1,  1154,    -1,    -1,  1112,  1158,  1182,  1115,  1184,
    1151,    -1,    -1,    -1,   127,    -1,  1157,  1158,    -1,   985,
      37,   987,    -1,    -1,  1054,    -1,    -1,  1202,    -1,    -1,
      -1,   951,    -1,    -1,    -1,    -1,   326,   327,    -1,    -1,
      -1,  1182,    -1,  1184,  1151,  1120,    -1,    -1,    -1,    -1,
    1106,  1158,    -1,    -1,  1147,    -1,    -1,    -1,    -1,  1115,
      -1,  1202,    -1,    -1,     5,   985,    -1,   987,  1147,    -1,
      -1,    -1,   454,    -1,   456,  1182,    -1,  1184,    -1,    -1,
    1000,    -1,    -1,    -1,    -1,    -1,   125,  1053,  1054,    -1,
      -1,    -1,    -1,    -1,    35,  1202,    -1,    -1,  1064,  1065,
    1066,    -1,  1158,    -1,    -1,  1198,  1199,    -1,  1074,    -1,
      -1,    -1,    -1,  1206,    -1,  1081,    -1,  1147,    -1,  1198,
    1199,    -1,   412,    -1,  1217,    -1,    -1,  1206,    -1,   419,
      -1,    -1,    -1,  1053,  1054,    -1,    -1,    -1,  1217,    -1,
      -1,    -1,    -1,    -1,  1064,  1065,  1066,    -1,    -1,   531,
      -1,    -1,    -1,    -1,  1074,    -1,    -1,    -1,   271,    -1,
      -1,  1081,    -1,  1083,   546,    -1,   548,    -1,  1198,  1199,
     111,  1137,    -1,  1139,   464,  1141,  1206,    -1,   119,    -1,
      -1,  1147,    -1,    -1,    -1,    -1,   476,  1217,    -1,   805,
      -1,    -1,    -1,    -1,    -1,    -1,   309,   310,   580,    -1,
     816,    -1,    -1,    -1,    -1,  1023,    -1,  1173,    -1,    -1,
      -1,    -1,    -1,    -1,   327,    -1,    -1,  1137,    -1,  1139,
      -1,  1141,    -1,    -1,    -1,    -1,    -1,  1147,    -1,    -1,
     612,   613,  1198,  1199,    -1,    -1,    -1,    -1,    -1,    -1,
    1206,    -1,   532,    -1,   357,    -1,   359,    -1,  1168,    -1,
      -1,  1217,    -1,  1173,   271,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1189,
      -1,    -1,    -1,   563,    -1,    -1,    -1,    -1,  1198,  1199,
     570,    -1,    -1,    -1,    -1,    -1,  1206,    -1,    -1,    -1,
      -1,   330,   309,   310,    -1,   334,   335,  1217,   337,   338,
     339,   340,   341,   342,   343,   344,   345,   346,   347,   348,
     349,   350,    -1,    -1,   353,    -1,    -1,   699,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1151,    -1,    -1,    -1,    -1,    -1,    -1,
     357,    -1,   359,    -1,   457,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   467,    -1,    -1,    -1,   740,    -1,
      -1,    -1,    -1,    -1,  1182,    -1,  1184,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1202,    21,    22,    23,    -1,    -1,
      -1,    -1,   682,    29,    30,    31,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,   455,   530,    -1,    -1,
     533,    -1,    -1,    -1,    -1,   366,    -1,    -1,    -1,    -1,
      -1,  1047,    -1,  1049,    -1,  1051,   549,    -1,    -1,    -1,
     457,    -1,    -1,    -1,    -1,    -1,   485,   486,   487,    85,
      -1,   490,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,   518,
      -1,    -1,   595,    -1,    -1,   524,    -1,    -1,    -1,    -1,
      -1,  1107,    -1,    -1,    -1,    -1,    -1,    -1,   537,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   547,    -1,
      -1,   147,    -1,   530,    -1,    -1,   533,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,    -1,   549,    -1,   475,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   659,    -1,    -1,    -1,
      -1,    -1,   665,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    -1,    -1,    -1,    -1,   896,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1000,    -1,
      -1,   734,   735,   736,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   673,     3,     4,     5,     6,     7,
       8,     9,   659,   682,    -1,    -1,    -1,    -1,    -1,    -1,
     940,    -1,    -1,    21,    22,    23,    -1,   139,    -1,   141,
     142,    -1,   144,   145,  1046,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,    44,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,  1069,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1083,   815,    -1,    -1,   646,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   734,   735,   736,
      -1,    -1,    -1,    -1,  1106,    -1,    -1,    -1,    -1,    -1,
      -1,  1021,    -1,  1115,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,  1037,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1045,  1046,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   810,  1154,    -1,    -1,    -1,  1158,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,  1168,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,   815,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1189,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1106,    43,    44,    -1,
      -1,    -1,  1112,    49,   765,  1115,    -1,   940,    -1,   942,
    1120,  1121,   773,   946,    -1,   948,   777,   778,    -1,    -1,
     781,   782,   783,   784,   785,   786,   787,   788,   789,   790,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1157,  1158,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1023,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,   940,    -1,   942,    -1,    -1,    -1,   946,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,  1050,    -1,    49,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,   923,    -1,    -1,   926,    49,    50,    51,    -1,
      53,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,  1023,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     961,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   114,   115,   116,   117,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,   134,   135,   136,    -1,    -1,    -1,    -1,    -1,    -1,
    1021,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      51,    -1,  1151,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,
      -1,    -1,    -1,  1182,    -1,  1184,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,    -1,    -1,  1202,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,   136,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,   148,   149,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,   141,   142,
      -1,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,    -1,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   136,   137,   138,   139,   140,   141,   142,
      -1,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,   138,   139,   140,   141,   142,    -1,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,   138,   139,   140,
     141,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   136,   137,    -1,   139,   140,   141,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,
     139,   140,   141,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,
     143,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,
     137,    -1,   139,   140,   141,   142,    -1,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,
     141,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,   139,   140,   141,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,   138,
     139,   140,   141,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    84,    85,    86,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,
      -1,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,   139,   140,   141,   142,    -1,    -1,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,
     141,   142,   143,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,   139,   140,   141,   142,   143,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,   139,   140,   141,   142,    -1,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,
     141,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,   139,   140,   141,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    -1,    -1,    35,    36,    37,    38,
      39,    40,    -1,    42,    43,    44,    45,    -1,    -1,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
      -1,   140,    -1,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      -1,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    45,    -1,    -1,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    59,    60,    61,    62,
      63,    -1,    65,    66,    67,    68,    69,    70,    71,    72,
      73,    74,    75,    76,    77,    78,    79,    80,    81,    82,
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   137,    -1,    -1,   140,    -1,   142,
      -1,   144,   145,    -1,   147,   148,   149,    -1,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    -1,    -1,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    45,    -1,
      -1,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    -1,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    -1,    -1,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,    -1,   140,    -1,   142,    -1,    -1,   145,    -1,
     147,   148,   149,    -1,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,    -1,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,   139,    -1,
     141,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    52,    53,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,    -1,
     136,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    41,    42,    21,    22,    23,    -1,    25,
      26,    27,    28,    51,    -1,   147,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      78,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
     148,   149,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    -1,
      -1,   147,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    21,    22,    23,
      -1,    25,    26,    27,    28,    51,    -1,   147,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    52,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    49,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,   136,    -1,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    21,    22,    23,    -1,    -1,
      -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    49,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,     3,     4,
       5,     6,     7,     8,     9,    -1,   147,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    44,    21,    22,    23,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    43,    -1,
      -1,    -1,    -1,    -1,    49,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,   147,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,   147,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   147,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    49,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      21,    22,    23,   136,   137,    -1,    -1,   140,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    49,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
     136,    -1,    -1,    -1,   140,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    85,    -1,    -1,    -1,    -1,   137,    -1,    -1,   140,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    26,    27,    28,   140,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      43,    44,    -1,    -1,    85,    -1,    49,    50,    -1,    -1,
      53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    25,    26,    27,    28,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    25,    -1,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   160,   161,     0,   162,   371,   372,     3,     4,     5,
       6,     7,     8,     9,    21,    22,    23,    25,    26,    27,
      28,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      42,    43,    44,    49,    50,    51,    52,    53,    85,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,   114,   115,   116,   117,
     118,   119,   120,   121,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   136,   147,   163,
     164,   165,   166,   167,   169,   170,   171,   172,   173,   175,
     178,   193,   194,   195,   197,   198,   208,   209,   218,   220,
     221,   223,   240,   241,   242,   243,   246,   247,   250,   256,
     293,   323,   324,   325,   326,   328,   329,   330,   331,   333,
     335,   336,   339,   340,   341,   342,   343,   345,   346,   349,
     350,   361,   362,   363,   391,   383,    25,    26,    12,    44,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      35,    36,    37,    38,    39,    40,    42,    43,    44,    45,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,   137,   139,   140,   141,   142,   144,   145,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
     362,   363,   416,   417,   418,   448,   449,   450,   451,   452,
     334,   351,     3,     4,     5,     6,     7,     8,     9,    42,
     173,   178,   195,   198,   325,   326,   331,   333,   339,   345,
       3,     4,     5,     6,     7,     8,     9,   137,   336,     3,
       4,     5,     6,     7,     8,     9,    21,    22,    23,    50,
      52,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,   219,   323,   325,   326,   330,   331,   333,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   337,   174,   381,   382,   337,   137,   381,    44,    53,
     164,   171,   172,   198,   204,   221,   223,   240,   293,   339,
     345,    46,   136,   137,   266,   267,   266,   266,   266,   142,
     178,   339,   345,   136,   373,   374,    44,   247,   271,   274,
     324,   329,   331,   333,   180,   331,   333,   335,   336,   330,
     324,   325,   330,   373,   330,   144,   173,   178,   195,   198,
     209,   247,   326,   340,   349,   371,    10,    11,    84,   234,
     294,   303,   305,    78,   148,   149,   299,   364,   365,   366,
     367,   370,   347,   373,   373,    24,   384,   137,   448,   444,
     444,    64,   150,   224,   434,   444,   445,   444,    10,    11,
     142,   438,   323,    12,   337,   381,   337,   381,   324,   173,
     195,   213,   214,   217,   234,   303,   444,   139,   168,   323,
     323,   136,   373,   250,   255,   256,   326,     3,     4,     5,
       6,     7,     8,     9,   335,   393,   396,   397,   335,   335,
     401,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,    41,    51,   295,   298,   299,
     338,   340,   363,   137,   136,   140,   179,   180,   326,   330,
     331,   333,   383,   295,   196,   136,   140,   199,   323,   323,
     381,   339,   234,   140,   276,   444,   248,   381,   383,   327,
     272,   142,   330,   330,   330,   332,   337,   381,   337,   381,
     247,   271,   371,   348,   306,   251,   253,   255,   256,   257,
     269,   313,   324,   326,   296,   139,   286,   287,   289,   290,
     234,   303,   312,   364,   375,   376,   375,   375,   365,   367,
     337,   385,   386,   387,   161,   445,   136,   144,   146,   446,
     447,   448,   138,   225,   227,   228,   230,   232,   146,   136,
     447,   143,   440,   441,   439,   373,   210,   212,   299,   179,
     210,   323,   337,   337,   211,   313,   324,   331,   333,   138,
     325,   331,   137,   136,   139,    12,    54,    55,    64,   139,
     141,   142,   144,   145,   150,   415,   416,   250,   255,   141,
     335,   335,   335,   141,   141,   335,   141,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   143,   143,   141,
     136,   296,   294,   371,   182,   177,     3,   136,   181,   373,
     180,   331,   333,   326,   136,   201,   202,   335,   200,   199,
     373,   323,   326,   277,   278,   323,   137,   138,   279,   280,
     179,   331,   276,   275,   428,   295,   179,   295,   323,   337,
     343,   344,   369,   252,   373,   258,   315,   316,   317,   373,
     251,   257,   324,   136,   141,   288,   137,   442,   142,   143,
     303,   383,   368,   141,   146,   329,   336,   389,   390,   138,
     136,   146,   141,   434,    25,    27,   198,   325,   331,   333,
     339,   356,   357,   360,   361,    26,    50,   235,   223,   424,
     424,   424,   136,   211,   217,   136,   199,   210,   210,   136,
     141,   142,   373,   136,   161,   222,     3,   145,   145,    64,
     150,   143,   146,   392,   141,   143,   143,   398,   400,   141,
     345,   404,   406,   408,   410,   405,   407,   409,   411,   412,
     413,   323,    29,    30,    31,   138,   183,   184,    29,    30,
      31,    37,   188,   189,   192,   323,   140,   373,   180,   138,
     141,   139,   346,   136,   335,   141,   451,   444,   143,    84,
     281,   283,   371,   330,   273,   279,    24,    85,   139,   140,
     141,   144,   145,   158,   362,   363,   416,   417,   418,   422,
     423,   430,   431,   432,   434,   435,   438,   442,   136,   136,
     136,   199,   343,   258,   142,     3,    32,    45,    48,    67,
     139,   259,   261,   262,   263,   264,   145,   318,   319,   140,
     142,   373,   297,    64,   144,   150,   419,   420,   422,   432,
     443,   291,   418,   304,   369,   386,   146,   330,    84,   388,
     438,   226,   323,   323,   323,   349,   234,   300,   305,   299,
     358,   300,   235,    64,   139,   141,   143,   144,   150,   422,
     425,   426,   143,   143,   136,   136,   212,   215,   138,   345,
     146,   146,   345,   394,   345,   345,   402,   143,   345,   345,
     345,   345,   345,   345,   345,   345,   345,   345,   141,   414,
     371,   140,   191,   192,   141,    37,   190,   234,   176,   373,
     202,   203,   139,   205,   449,   278,   234,   138,   377,   378,
     141,   284,   258,   143,   437,   433,   436,   136,   263,   254,
     260,   265,    19,    55,    56,   438,   320,   319,    13,    14,
      15,    16,   314,   270,   298,   421,   420,   429,   141,   143,
     142,   307,   316,   329,   227,   359,   302,   313,   229,   375,
     337,   231,   300,   279,   300,   143,   345,   399,   143,   345,
     143,   143,   143,   143,   143,   143,   143,   143,   141,   141,
     143,    41,    42,    53,   135,   136,   165,   170,   172,   185,
     186,   187,   193,   194,   208,   218,   221,   223,   244,   245,
     246,   271,   293,   323,   324,   326,   339,   345,   391,   323,
     371,   323,   188,   419,   445,   136,   268,   249,   383,    84,
     282,   345,   263,   377,   424,   428,   424,   279,   438,   339,
     350,   352,   353,   321,   322,   279,   423,   136,   138,   426,
     427,   292,   308,   337,   307,   139,   236,   237,   300,   311,
     364,   236,   233,   143,   136,   395,   141,   403,    13,    13,
     170,   178,   206,   223,   245,   324,   339,   345,   451,   172,
     186,   221,   223,   244,   293,   339,   266,   136,   255,   271,
     326,   234,   234,   189,   234,    47,   258,   283,   300,   146,
     434,   146,   143,   350,   354,   299,   146,   419,   143,   419,
     279,   238,   143,   300,   236,   216,   143,   445,   143,   143,
     143,   381,   178,   206,   339,   266,   178,   234,   339,   373,
     255,   257,   451,   263,   285,   146,   377,   355,   337,   379,
     380,   377,   143,   239,   430,   301,   310,   143,   137,   140,
     179,   207,   381,   178,   381,   136,   373,   137,   286,   337,
     383,   377,   430,   307,    32,    34,    45,    48,   444,   445,
     181,   179,   381,   179,   207,   136,   444,   309,   451,   451,
     138,   136,   207,   179,   181,   138,   310,   445,   207,   136
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned short int yyr1[] =
{
       0,   159,   160,   161,   162,   161,   163,   163,   163,   163,
     163,   163,   163,   163,   163,   163,   163,   163,   163,   163,
     163,   163,   163,   163,   164,   164,   164,   164,   164,   164,
     165,   165,   166,   167,   168,   167,   169,   170,   170,   171,
     171,   171,   172,   172,   174,   173,   176,   175,   175,   177,
     175,   175,   178,   178,   178,   179,   179,   179,   180,   180,
     181,   181,   182,   183,   182,   182,   184,   184,   184,   185,
     185,   185,   185,   185,   185,   185,   185,   185,   185,   185,
     185,   185,   185,   185,   185,   186,   186,   186,   186,   186,
     187,   187,   187,   187,   188,   188,   189,   189,   189,   190,
     190,   191,   191,   192,   192,   192,   193,   193,   193,   194,
     194,   196,   195,   197,   197,   198,   198,   198,   199,   200,
     199,   201,   201,   202,   202,   203,   202,   204,   205,   205,
     206,   206,   206,   206,   207,   207,   208,   208,   209,   209,
     209,   209,   209,   210,   211,   211,   212,   213,   213,   215,
     216,   214,   217,   218,   219,   219,   219,   219,   219,   219,
     220,   222,   221,   223,   224,   223,   225,   226,   225,   228,
     229,   227,   230,   231,   227,   232,   233,   227,   234,   234,
     235,   235,   236,   236,   238,   237,   239,   239,   240,   240,
     240,   240,   241,   242,   242,   242,   243,   243,   243,   244,
     244,   244,   245,   245,   245,   245,   246,   246,   246,   248,
     249,   247,   250,   252,   251,   254,   253,   255,   256,   257,
     258,   258,   260,   259,   259,   259,   259,   259,   259,   259,
     261,   262,   262,   263,   263,   265,   264,   266,   266,   266,
     267,   268,   268,   270,   269,   272,   273,   271,   275,   274,
     276,   276,   277,   277,   278,   279,   280,   279,   281,   282,
     281,   281,   281,   284,   285,   283,   286,   286,   288,   287,
     289,   287,   290,   287,   291,   292,   291,   293,   294,   295,
     295,   296,   297,   296,   298,   299,   299,   300,   301,   300,
     302,   302,   303,   304,   303,   306,   305,   305,   307,   308,
     309,   307,   307,   310,   310,   310,   310,   310,   310,   311,
     311,   312,   312,   313,   313,   314,   314,   314,   314,   315,
     315,   317,   316,   318,   318,   320,   319,   321,   322,   321,
     323,   323,   324,   324,   324,   324,   324,   325,   325,   325,
     326,   326,   326,   326,   326,   326,   327,   326,   328,   329,
     330,   332,   331,   334,   333,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,   335,   336,   336,   336,
     336,   336,   336,   336,   337,   337,   338,   338,   338,   338,
     339,   339,   340,   340,   340,   340,   341,   341,   341,   341,
     341,   342,   342,   342,   343,   343,   344,   344,   345,   347,
     346,   348,   346,   349,   349,   349,   350,   350,   351,   350,
     350,   350,   352,   354,   353,   355,   353,   356,   358,   357,
     359,   357,   360,   360,   360,   360,   360,   360,   360,   361,
     361,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   362,   362,   362,   362,   362,   362,   362,
     362,   362,   362,   363,   363,   363,   363,   363,   363,   363,
     363,   363,   363,   363,   363,   363,   363,   363,   364,   364,
     364,   364,   365,   366,   368,   367,   369,   369,   370,   370,
     372,   371,   374,   373,   376,   375,   378,   377,   380,   379,
     382,   381,   383,   383,   384,   385,   385,   385,   385,   387,
     386,   388,   388,   389,   389,   390,   390,   392,   391,   393,
     394,   395,   391,   396,   391,   397,   391,   398,   399,   391,
     400,   391,   401,   402,   403,   391,   391,   404,   391,   405,
     391,   406,   391,   407,   391,   408,   391,   409,   391,   410,
     391,   411,   391,   412,   391,   413,   391,   391,   391,   391,
     414,   414,   415,   415,   415,   415,   415,   415,   415,   415,
     415,   415,   415,   415,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   416,   416,
     416,   416,   416,   416,   416,   416,   416,   416,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   417,   417,   417,
     417,   417,   417,   417,   417,   417,   417,   418,   418,   418,
     418,   418,   418,   418,   418,   418,   419,   419,   420,   420,
     420,   421,   420,   420,   422,   422,   423,   423,   423,   423,
     423,   423,   423,   423,   423,   423,   424,   424,   425,   425,
     425,   425,   426,   426,   426,   427,   427,   428,   428,   429,
     429,   430,   430,   431,   431,   431,   433,   432,   434,   434,
     436,   435,   437,   435,   439,   438,   440,   438,   441,   438,
     443,   442,   444,   444,   445,   445,   446,   446,   447,   447,
     448,   448,   448,   448,   448,   448,   448,   448,   448,   448,
     448,   448,   448,   448,   448,   448,   448,   449,   450,   450,
     451,   452,   452,   452
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     0,     0,     4,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     1,     2,     2,     2,     2,     2,     2,
       5,     4,     5,     4,     0,     6,     5,     1,     2,     4,
       3,     5,     4,     5,     0,     5,     0,     7,     4,     0,
       5,     2,     1,     1,     1,     3,     4,     2,     1,     1,
       0,     1,     0,     0,     4,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     1,     2,     2,     2,     2,     2,
       2,     3,     2,     3,     1,     4,     2,     4,     4,     0,
       1,     0,     1,     1,     1,     1,     5,     3,     6,     4,
       5,     0,     5,     4,     3,     1,     2,     2,     0,     0,
       3,     1,     3,     0,     1,     0,     4,     6,     2,     1,
       5,     6,     3,     4,     5,     3,     1,     2,     5,     5,
       6,     5,     6,     2,     0,     3,     2,     1,     1,     0,
       0,     8,     1,     3,     1,     2,     2,     2,     3,     3,
       4,     0,     8,     3,     0,     5,     1,     0,     4,     0,
       0,     5,     0,     0,     5,     0,     0,     6,     0,     1,
       1,     1,     0,     1,     0,     3,     1,     2,     2,     2,
       2,     2,     3,     4,     2,     3,     2,     3,     4,     2,
       4,     5,     3,     1,     1,     2,     1,     2,     3,     0,
       0,     9,     2,     0,     4,     0,     7,     2,     1,     3,
       0,     2,     0,     3,     1,     2,     1,     2,     1,     1,
       1,     2,     2,     0,     1,     0,     3,     3,     1,     1,
       6,     0,     6,     0,     7,     0,     0,     6,     0,     6,
       0,     2,     1,     3,     3,     0,     0,     2,     1,     0,
       4,     3,     1,     0,     0,     6,     0,     1,     0,     3,
       0,     2,     0,     4,     1,     0,     4,     4,     2,     0,
       2,     0,     0,     4,     2,     0,     1,     3,     0,     6,
       0,     1,     3,     0,     5,     0,     3,     1,     0,     0,
       0,     7,     1,     0,     2,     2,     3,     3,     2,     1,
       2,     1,     2,     2,     4,     1,     1,     1,     1,     0,
       1,     0,     2,     1,     2,     0,     5,     0,     0,     2,
       1,     1,     1,     1,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     3,     3,     3,     0,     5,     1,     1,
       1,     0,     5,     0,     3,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     3,     1,     1,     1,     1,
       2,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     2,     0,
       3,     0,     4,     1,     3,     4,     1,     1,     0,     4,
       2,     2,     2,     0,     3,     0,     4,     2,     0,     3,
       0,     4,     1,     1,     1,     1,     2,     2,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     2,     0,     4,     0,     1,     1,     2,
       0,     2,     0,     2,     0,     2,     0,     2,     0,     2,
       0,     2,     0,     2,     4,     0,     1,     2,     3,     0,
       3,     0,     1,     1,     2,     1,     3,     0,     7,     0,
       0,     0,     9,     0,     5,     0,     5,     0,     0,    10,
       0,     7,     0,     0,     0,     9,     6,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     9,     0,     9,     4,     4,     7,
       0,     1,     2,     2,     3,     3,     1,     1,     1,     1,
       2,     2,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     2,     1,     1,
       1,     0,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     2,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     0,     2,     0,
       2,     1,     1,     1,     1,     1,     0,     4,     1,     1,
       0,     4,     0,     5,     0,     4,     0,     4,     0,     4,
       0,     4,     0,     2,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     4,
       3,     1,     1,     1
};


/* YYDPREC[RULE-NUM] -- Dynamic precedence of rule #RULE-NUM (0 if none).  */
static const unsigned char yydprec[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYMERGER[RULE-NUM] -- Index of merging function for rule #RULE-NUM.  */
static const unsigned char yymerger[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYIMMEDIATE[RULE-NUM] -- True iff rule #RULE-NUM is not to be deferred, as
   in the case of predicates.  */
static const yybool yyimmediate[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned short int yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     1,     0,     5,
       0,     0,     0,     3,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   259,     0,     0,     0,     0,     0,
       0,   263,     0,     0,     0,     0,     0,     0,     7,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   261,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   253,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   255,     0,     0,     0,     0,     0,     0,   257,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     9,    11,
      13,    15,    17,    19,    21,    23,    25,    27,    29,    31,
      33,    35,    37,    39,    41,    43,    45,    47,    49,    51,
      53,    55,    57,    59,    61,    63,    65,    67,     0,     0,
      69,    71,    73,    75,    77,    79,     0,    81,    83,    85,
      87,     0,     0,    89,    91,    93,    95,    97,    99,   101,
     103,   105,   107,   109,   111,   113,   115,   117,   119,   121,
     123,   125,   127,   129,   131,   133,   135,   137,   139,   141,
     143,   145,   147,   149,   151,   153,   155,   157,   159,     0,
     161,     0,   163,   165,   167,   169,   171,   173,   175,   177,
     179,   181,   183,   185,   187,   189,   191,   193,   195,   197,
     199,   201,   203,   205,   207,   209,   211,   213,   215,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   217,     0,     0,   219,   221,   223,     0,   225,
     227,     0,   229,   231,   233,   235,   237,   239,   241,   243,
     245,   247,   249,   251,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   414,     0,   414,     0,   414,     0,   313,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   686,     0,   686,     0,   686,     0,   686,
       0,   686,     0,   298,     0,   298,     0,   298,     0,   414,
       0,   308,     0,   414,     0
};

/* Error token number */
#define YYTERROR 1



YYSTYPE yylval;

int yynerrs;
int yychar;

static const int YYEOF = 0;
static const int YYEMPTY = -2;

typedef enum { yyok, yyaccept, yyabort, yyerr } YYRESULTTAG;

#define YYCHK(YYE)                              \
  do {                                          \
    YYRESULTTAG yychk_flag = YYE;               \
    if (yychk_flag != yyok)                     \
      return yychk_flag;                        \
  } while (0)

#if YYDEBUG

# ifndef YYFPRINTF
#  define YYFPRINTF fprintf
# endif

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YYDPRINTF(Args)                        \
  do {                                          \
    if (yydebug)                                \
      YYFPRINTF Args;                           \
  } while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                  \
  do {                                                                  \
    if (yydebug)                                                        \
      {                                                                 \
        YYFPRINTF (stderr, "%s ", Title);                               \
        yy_symbol_print (stderr, Type, Value);        \
        YYFPRINTF (stderr, "\n");                                       \
      }                                                                 \
  } while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;

struct yyGLRStack;
static void yypstack (struct yyGLRStack* yystackp, size_t yyk)
  YY_ATTRIBUTE_UNUSED;
static void yypdumpstack (struct yyGLRStack* yystackp)
  YY_ATTRIBUTE_UNUSED;

#else /* !YYDEBUG */

# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)

#endif /* !YYDEBUG */

/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   SIZE_MAX < YYMAXDEPTH * sizeof (GLRStackItem)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif

/* Minimum number of free items on the stack allowed after an
   allocation.  This is to allow allocation and initialization
   to be completed by functions that call yyexpandGLRStack before the
   stack is expanded, thus insuring that all necessary pointers get
   properly redirected to new data.  */
#define YYHEADROOM 2

#ifndef YYSTACKEXPANDABLE
#  define YYSTACKEXPANDABLE 1
#endif

#if YYSTACKEXPANDABLE
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyexpandGLRStack (Yystack);                       \
  } while (0)
#else
# define YY_RESERVE_GLRSTACK(Yystack)                   \
  do {                                                  \
    if (Yystack->yyspaceLeft < YYHEADROOM)              \
      yyMemoryExhausted (Yystack);                      \
  } while (0)
#endif


#if YYERROR_VERBOSE

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static size_t
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      size_t yyn = 0;
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
    return strlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

#endif /* !YYERROR_VERBOSE */

/** State numbers, as in LALR(1) machine */
typedef int yyStateNum;

/** Rule numbers, as in LALR(1) machine */
typedef int yyRuleNum;

/** Grammar symbol */
typedef int yySymbol;

/** Item references, as in LALR(1) machine */
typedef short int yyItemNum;

typedef struct yyGLRState yyGLRState;
typedef struct yyGLRStateSet yyGLRStateSet;
typedef struct yySemanticOption yySemanticOption;
typedef union yyGLRStackItem yyGLRStackItem;
typedef struct yyGLRStack yyGLRStack;

struct yyGLRState {
  /** Type tag: always true.  */
  yybool yyisState;
  /** Type tag for yysemantics.  If true, yysval applies, otherwise
   *  yyfirstVal applies.  */
  yybool yyresolved;
  /** Number of corresponding LALR(1) machine state.  */
  yyStateNum yylrState;
  /** Preceding state in this stack */
  yyGLRState* yypred;
  /** Source position of the last token produced by my symbol */
  size_t yyposn;
  union {
    /** First in a chain of alternative reductions producing the
     *  non-terminal corresponding to this state, threaded through
     *  yynext.  */
    yySemanticOption* yyfirstVal;
    /** Semantic value for this state.  */
    YYSTYPE yysval;
  } yysemantics;
};

struct yyGLRStateSet {
  yyGLRState** yystates;
  /** During nondeterministic operation, yylookaheadNeeds tracks which
   *  stacks have actually needed the current lookahead.  During deterministic
   *  operation, yylookaheadNeeds[0] is not maintained since it would merely
   *  duplicate yychar != YYEMPTY.  */
  yybool* yylookaheadNeeds;
  size_t yysize, yycapacity;
};

struct yySemanticOption {
  /** Type tag: always false.  */
  yybool yyisState;
  /** Rule number for this reduction */
  yyRuleNum yyrule;
  /** The last RHS state in the list of states to be reduced.  */
  yyGLRState* yystate;
  /** The lookahead for this reduction.  */
  int yyrawchar;
  YYSTYPE yyval;
  /** Next sibling in chain of options.  To facilitate merging,
   *  options are chained in decreasing order by address.  */
  yySemanticOption* yynext;
};

/** Type of the items in the GLR stack.  The yyisState field
 *  indicates which item of the union is valid.  */
union yyGLRStackItem {
  yyGLRState yystate;
  yySemanticOption yyoption;
};

struct yyGLRStack {
  int yyerrState;


  YYJMP_BUF yyexception_buffer;
  yyGLRStackItem* yyitems;
  yyGLRStackItem* yynextFree;
  size_t yyspaceLeft;
  yyGLRState* yysplitPoint;
  yyGLRState* yylastDeleted;
  yyGLRStateSet yytops;
};

#if YYSTACKEXPANDABLE
static void yyexpandGLRStack (yyGLRStack* yystackp);
#endif

static _Noreturn void
yyFail (yyGLRStack* yystackp, const char* yymsg)
{
  if (yymsg != YY_NULLPTR)
    yyerror (yymsg);
  YYLONGJMP (yystackp->yyexception_buffer, 1);
}

static _Noreturn void
yyMemoryExhausted (yyGLRStack* yystackp)
{
  YYLONGJMP (yystackp->yyexception_buffer, 2);
}

#if YYDEBUG || YYERROR_VERBOSE
/** A printable representation of TOKEN.  */
static inline const char*
yytokenName (yySymbol yytoken)
{
  if (yytoken == YYEMPTY)
    return "";

  return yytname[yytoken];
}
#endif

/** Fill in YYVSP[YYLOW1 .. YYLOW0-1] from the chain of states starting
 *  at YYVSP[YYLOW0].yystate.yypred.  Leaves YYVSP[YYLOW1].yystate.yypred
 *  containing the pointer to the next state in the chain.  */
static void yyfillin (yyGLRStackItem *, int, int) YY_ATTRIBUTE_UNUSED;
static void
yyfillin (yyGLRStackItem *yyvsp, int yylow0, int yylow1)
{
  int i;
  yyGLRState *s = yyvsp[yylow0].yystate.yypred;
  for (i = yylow0-1; i >= yylow1; i -= 1)
    {
#if YYDEBUG
      yyvsp[i].yystate.yylrState = s->yylrState;
#endif
      yyvsp[i].yystate.yyresolved = s->yyresolved;
      if (s->yyresolved)
        yyvsp[i].yystate.yysemantics.yysval = s->yysemantics.yysval;
      else
        /* The effect of using yysval or yyloc (in an immediate rule) is
         * undefined.  */
        yyvsp[i].yystate.yysemantics.yyfirstVal = YY_NULLPTR;
      s = yyvsp[i].yystate.yypred = s->yypred;
    }
}

/* Do nothing if YYNORMAL or if *YYLOW <= YYLOW1.  Otherwise, fill in
 * YYVSP[YYLOW1 .. *YYLOW-1] as in yyfillin and set *YYLOW = YYLOW1.
 * For convenience, always return YYLOW1.  */
static inline int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static inline int
yyfill (yyGLRStackItem *yyvsp, int *yylow, int yylow1, yybool yynormal)
{
  if (!yynormal && yylow1 < *yylow)
    {
      yyfillin (yyvsp, *yylow, yylow1);
      *yylow = yylow1;
    }
  return yylow1;
}

/** Perform user action for rule number YYN, with RHS length YYRHSLEN,
 *  and top stack item YYVSP.  YYLVALP points to place to put semantic
 *  value ($$), and yylocp points to place for location information
 *  (@$).  Returns yyok for normal return, yyaccept for YYACCEPT,
 *  yyerr for YYERROR, yyabort for YYABORT.  */
static YYRESULTTAG
yyuserAction (yyRuleNum yyn, size_t yyrhslen, yyGLRStackItem* yyvsp,
              yyGLRStack* yystackp,
              YYSTYPE* yyvalp)
{
  yybool yynormal YY_ATTRIBUTE_UNUSED = (yystackp->yysplitPoint == YY_NULLPTR);
  int yylow;
  YYUSE (yyvalp);
  YYUSE (yyrhslen);
# undef yyerrok
# define yyerrok (yystackp->yyerrState = 0)
# undef YYACCEPT
# define YYACCEPT return yyaccept
# undef YYABORT
# define YYABORT return yyabort
# undef YYERROR
# define YYERROR return yyerrok, yyerr
# undef YYRECOVERING
# define YYRECOVERING() (yystackp->yyerrState != 0)
# undef yyclearin
# define yyclearin (yychar = YYEMPTY)
# undef YYFILL
# define YYFILL(N) yyfill (yyvsp, &yylow, N, yynormal)
# undef YYBACKUP
# define YYBACKUP(Token, Value)                                              \
  return yyerror (YY_("syntax error: cannot back up")),     \
         yyerrok, yyerr

  yylow = 1;
  if (yyrhslen == 0)
    *yyvalp = yyval_default;
  else
    *yyvalp = yyvsp[YYFILL (1-yyrhslen)].yystate.yysemantics.yysval;
  switch (yyn)
    {
        case 4:
#line 1976 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6349 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 34:
#line 2030 "vtkParse.y" /* glr.c:783  */
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6355 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 35:
#line 2031 "vtkParse.y" /* glr.c:783  */
    { popNamespace(); }
#line 6361 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 44:
#line 2054 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6367 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 45:
#line 2055 "vtkParse.y" /* glr.c:783  */
    {
      const char *name = (currentClass ? currentClass->Name : NULL);
      popType();
      clearTypeId();
      if (name)
        {
        setTypeId(name);
        setTypeBase(guess_id_type(name));
        }
      end_class();
    }
#line 6383 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 46:
#line 2069 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer);
    }
#line 6392 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 48:
#line 2075 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer);
    }
#line 6401 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 49:
#line 2080 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
    }
#line 6409 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 51:
#line 2085 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer));
    }
#line 6417 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 52:
#line 2090 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6423 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 53:
#line 2091 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6429 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 54:
#line 2092 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 2; }
#line 6435 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 55:
#line 2096 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6441 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 56:
#line 2098 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6447 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 60:
#line 2106 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6453 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 61:
#line 2107 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0); }
#line 6459 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 63:
#line 2111 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6471 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 66:
#line 2123 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PUBLIC; }
#line 6477 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 67:
#line 2124 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PRIVATE; }
#line 6483 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 68:
#line 2125 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PROTECTED; }
#line 6489 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 93:
#line 2156 "vtkParse.y" /* glr.c:783  */
    { output_friend_function(); }
#line 6495 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 96:
#line 2164 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 6501 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 97:
#line 2166 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6508 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 98:
#line 2169 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6515 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 99:
#line 2173 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6521 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 100:
#line 2174 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 6527 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 101:
#line 2177 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = access_level; }
#line 6533 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 103:
#line 2181 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
#line 6539 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 104:
#line 2182 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
#line 6545 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 105:
#line 2183 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
#line 6551 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 111:
#line 2205 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6557 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 112:
#line 2206 "vtkParse.y" /* glr.c:783  */
    {
      popType();
      clearTypeId();
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str) != NULL)
        {
        setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
        setTypeBase(guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str)));
        }
      end_enum();
    }
#line 6572 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 113:
#line 2219 "vtkParse.y" /* glr.c:783  */
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
    }
#line 6582 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 114:
#line 2225 "vtkParse.y" /* glr.c:783  */
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
#line 6592 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 115:
#line 2232 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6598 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 116:
#line 2233 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6604 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 117:
#line 2234 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6610 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 118:
#line 2237 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6616 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 119:
#line 2238 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6622 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 120:
#line 2239 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = getType(); popType(); }
#line 6628 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 124:
#line 2246 "vtkParse.y" /* glr.c:783  */
    { closeComment(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), NULL); }
#line 6634 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 125:
#line 2247 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); closeComment(); }
#line 6640 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 126:
#line 2248 "vtkParse.y" /* glr.c:783  */
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), copySig()); }
#line 6646 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 149:
#line 2308 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 6652 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 150:
#line 2309 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6658 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 151:
#line 2310 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.integer)); popFunction(); }
#line 6664 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 152:
#line 2314 "vtkParse.y" /* glr.c:783  */
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getSig());

      if (currentTemplate)
        {
        item->Template = currentTemplate;
        currentTemplate = NULL;
        }

      if (getVarName())
        {
        item->Name = getVarName();
        item->Comment = vtkstrdup(getComment());
        }

      if (item->TypeName == NULL)
        {
        vtkParse_FreeValue(item);
        }
      else if (currentClass)
        {
        vtkParse_AddTypedefToClass(currentClass, item);
        }
      else
        {
        vtkParse_AddTypedefToNamespace(currentNamespace, item);
        }
    }
#line 6702 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 153:
#line 2354 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 0); }
#line 6708 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 155:
#line 2358 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 6714 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 156:
#line 2360 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6720 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 157:
#line 2362 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6726 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 158:
#line 2364 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6732 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 159:
#line 2366 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6738 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 160:
#line 2369 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 1); }
#line 6744 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 161:
#line 2372 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6750 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 162:
#line 2374 "vtkParse.y" /* glr.c:783  */
    {
      ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(item);
      item->ItemType = VTK_TYPEDEF_INFO;
      item->Access = access_level;

      handle_complex_type(item, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), copySig());

      item->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.str);
      item->Comment = vtkstrdup(getComment());

      if (currentTemplate)
        {
        vtkParse_FreeValue(item);
        }
      else if (currentClass)
        {
        vtkParse_AddTypedefToClass(currentClass, item);
        }
      else
        {
        vtkParse_AddTypedefToNamespace(currentNamespace, item);
        }
    }
#line 6779 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 163:
#line 2405 "vtkParse.y" /* glr.c:783  */
    { postSig("template<> "); clearTypeId(); }
#line 6785 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 164:
#line 2407 "vtkParse.y" /* glr.c:783  */
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
#line 6797 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 165:
#line 2415 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
#line 6809 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 167:
#line 2426 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
#line 6815 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 169:
#line 2430 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6821 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 170:
#line 2432 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6827 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 172:
#line 2434 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6833 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 173:
#line 2436 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6839 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 175:
#line 2438 "vtkParse.y" /* glr.c:783  */
    { pushTemplate(); markSig(); }
#line 6845 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 176:
#line 2441 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
#line 6858 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 178:
#line 2452 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6864 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 179:
#line 2453 "vtkParse.y" /* glr.c:783  */
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 6870 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 180:
#line 2456 "vtkParse.y" /* glr.c:783  */
    { postSig("class "); }
#line 6876 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 181:
#line 2457 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 6882 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 184:
#line 2463 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); }
#line 6888 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 185:
#line 2465 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
#line 6899 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 188:
#line 2482 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6905 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 189:
#line 2483 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6911 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 190:
#line 2484 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 6917 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 191:
#line 2485 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 6923 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 199:
#line 2501 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6929 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 209:
#line 2519 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6939 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 210:
#line 2525 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6945 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 211:
#line 2526 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
#line 6958 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 212:
#line 2537 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = copySig(); }
#line 6964 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 213:
#line 2540 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6970 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 214:
#line 2542 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
#line 6982 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 215:
#line 2552 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6992 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 217:
#line 2561 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6998 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 218:
#line 2564 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("operator "); }
#line 7004 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 219:
#line 2568 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7016 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 222:
#line 2580 "vtkParse.y" /* glr.c:783  */
    { postSig(" throw "); }
#line 7022 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 223:
#line 2580 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 7028 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 224:
#line 2581 "vtkParse.y" /* glr.c:783  */
    { postSig(" const"); currentFunction->IsConst = 1; }
#line 7034 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 225:
#line 2583 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
#line 7044 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 226:
#line 2589 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
#line 7053 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 227:
#line 2593 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 7059 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 230:
#line 2598 "vtkParse.y" /* glr.c:783  */
    { postSig(" noexcept"); }
#line 7065 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 231:
#line 2601 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsDeleted = 1; }
#line 7071 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 235:
#line 2608 "vtkParse.y" /* glr.c:783  */
    { postSig(" -> "); clearType(); clearTypeId(); }
#line 7077 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 236:
#line 2610 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7086 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 243:
#line 2628 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7095 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 244:
#line 2633 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7101 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 245:
#line 2640 "vtkParse.y" /* glr.c:783  */
    { closeSig(); }
#line 7107 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 246:
#line 2641 "vtkParse.y" /* glr.c:783  */
    { openSig(); }
#line 7113 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 247:
#line 2643 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      if (getType() & VTK_PARSE_VIRTUAL)
        {
        currentFunction->IsVirtual = 1;
        }
      if (getType() & VTK_PARSE_EXPLICIT)
        {
        currentFunction->IsExplicit = 1;
        }
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7133 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 248:
#line 2660 "vtkParse.y" /* glr.c:783  */
    { pushType(); postSig("("); }
#line 7139 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 249:
#line 2662 "vtkParse.y" /* glr.c:783  */
    { popType(); postSig(")"); }
#line 7145 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 256:
#line 2679 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7151 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 258:
#line 2682 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7157 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 259:
#line 2683 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); postSig(", "); }
#line 7163 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 261:
#line 2686 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
#line 7169 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 262:
#line 2688 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig("..."); }
#line 7175 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 263:
#line 2691 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7181 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 264:
#line 2693 "vtkParse.y" /* glr.c:783  */
    {
      ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(param);

      handle_complex_type(param, getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      add_legacy_parameter(currentFunction, param);

      if (getVarName())
        {
        param->Name = getVarName();
        }

      vtkParse_AddParameterToFunction(currentFunction, param);
    }
#line 7200 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 265:
#line 2708 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = getVarValue();
        }
    }
#line 7212 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 266:
#line 2717 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); }
#line 7218 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 268:
#line 2721 "vtkParse.y" /* glr.c:783  */
    { postSig("="); clearVarValue(); markSig(); }
#line 7224 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 269:
#line 2722 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7230 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 270:
#line 2723 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); }
#line 7236 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 271:
#line 2724 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7242 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 272:
#line 2725 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); postSig("("); }
#line 7248 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 273:
#line 2727 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(")"); setVarValue(copySig()); }
#line 7254 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 274:
#line 2730 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7260 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 275:
#line 2731 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7266 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 278:
#line 2743 "vtkParse.y" /* glr.c:783  */
    {
      unsigned int type = getType();
      ValueInfo *var = (ValueInfo *)malloc(sizeof(ValueInfo));
      vtkParse_InitValue(var);
      var->ItemType = VTK_VARIABLE_INFO;
      var->Access = access_level;

      handle_complex_type(var, type, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), getSig());

      if (currentTemplate)
        {
        var->Template = currentTemplate;
        currentTemplate = NULL;
        }

      var->Name = getVarName();
      var->Comment = vtkstrdup(getComment());

      if (getVarValue())
        {
        var->Value = getVarValue();
        }

      /* Is this a typedef? */
      if ((type & VTK_PARSE_TYPEDEF) != 0)
        {
        var->ItemType = VTK_TYPEDEF_INFO;
        if (var->TypeName == NULL)
          {
          vtkParse_FreeValue(var);
          }
        else if (currentClass)
          {
          vtkParse_AddTypedefToClass(currentClass, var);
          }
        else
          {
          vtkParse_AddTypedefToNamespace(currentNamespace, var);
          }
        }
      /* Is this a constant? */
      else if (((type & VTK_PARSE_CONST) != 0) && var->Value != NULL &&
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
#line 7339 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 282:
#line 2816 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7345 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 285:
#line 2822 "vtkParse.y" /* glr.c:783  */
    { setTypePtr(0); }
#line 7351 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 286:
#line 2823 "vtkParse.y" /* glr.c:783  */
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7357 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 287:
#line 2828 "vtkParse.y" /* glr.c:783  */
    {
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
        {
        ((*yyvalp).integer) = (VTK_PARSE_FUNCTION_PTR | (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
        }
      else
        {
        ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer);
        }
    }
#line 7372 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 288:
#line 2839 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7378 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 289:
#line 2840 "vtkParse.y" /* glr.c:783  */
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        ((*yyvalp).integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_ARRAY)
        {
        ((*yyvalp).integer) = add_indirection_to_array(parens);
        }
    }
#line 7397 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 290:
#line 2856 "vtkParse.y" /* glr.c:783  */
    { clearVarName(); chopSig(); }
#line 7403 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 292:
#line 2862 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer); }
#line 7409 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 293:
#line 2863 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7415 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 294:
#line 2865 "vtkParse.y" /* glr.c:783  */
    {
      const char *scope = getScope();
      unsigned int parens = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_FUNCTION)
        {
        if (scope) { scope = vtkstrndup(scope, strlen(scope) - 2); }
        getFunction()->Class = scope;
        ((*yyvalp).integer) = (parens | VTK_PARSE_FUNCTION);
        }
      else if ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) == VTK_PARSE_ARRAY)
        {
        ((*yyvalp).integer) = add_indirection_to_array(parens);
        }
    }
#line 7434 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 295:
#line 2881 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 7440 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 296:
#line 2882 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7446 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 297:
#line 2883 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7453 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 298:
#line 2887 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7459 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 299:
#line 2888 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 7465 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 300:
#line 2889 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7471 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 301:
#line 2890 "vtkParse.y" /* glr.c:783  */
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
#line 7480 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 302:
#line 2894 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
#line 7486 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 305:
#line 2898 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsConst = 1; }
#line 7492 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 310:
#line 2906 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7498 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 312:
#line 2911 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7504 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 313:
#line 2914 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7510 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 314:
#line 2916 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str)); }
#line 7516 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 319:
#line 2925 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7522 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 321:
#line 2929 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7528 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 325:
#line 2936 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 7534 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 326:
#line 2937 "vtkParse.y" /* glr.c:783  */
    { postSig("]"); }
#line 7540 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 327:
#line 2940 "vtkParse.y" /* glr.c:783  */
    { pushArraySize(""); }
#line 7546 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 328:
#line 2941 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7552 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 329:
#line 2941 "vtkParse.y" /* glr.c:783  */
    { chopSig(); pushArraySize(copySig()); }
#line 7558 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 335:
#line 2955 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7564 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 336:
#line 2956 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7570 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 337:
#line 2960 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7576 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 338:
#line 2962 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7582 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 339:
#line 2964 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7588 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 340:
#line 2968 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7594 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 341:
#line 2970 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7600 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 342:
#line 2972 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7606 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 343:
#line 2974 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7612 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 344:
#line 2976 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7618 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 345:
#line 2978 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7624 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 346:
#line 2979 "vtkParse.y" /* glr.c:783  */
    { postSig("template "); }
#line 7630 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 347:
#line 2981 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7636 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 348:
#line 2984 "vtkParse.y" /* glr.c:783  */
    { postSig("~"); }
#line 7642 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 349:
#line 2987 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7648 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 350:
#line 2990 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
#line 7654 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 351:
#line 2993 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); postSig("<"); }
#line 7660 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 352:
#line 2995 "vtkParse.y" /* glr.c:783  */
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
#line 7669 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 353:
#line 3001 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("decltype"); }
#line 7675 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 354:
#line 3002 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
#line 7681 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 355:
#line 3009 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7687 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 356:
#line 3010 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7693 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 357:
#line 3011 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7699 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 358:
#line 3012 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7705 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 359:
#line 3013 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7711 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 360:
#line 3014 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7717 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 361:
#line 3015 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7723 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 362:
#line 3016 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7729 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 363:
#line 3017 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7735 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 364:
#line 3018 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7741 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 365:
#line 3019 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
#line 7747 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 366:
#line 3020 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
#line 7753 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 367:
#line 3021 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
#line 7759 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 368:
#line 3022 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
#line 7765 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 369:
#line 3023 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
#line 7771 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 370:
#line 3024 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
#line 7777 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 371:
#line 3025 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
#line 7783 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 372:
#line 3026 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
#line 7789 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 373:
#line 3027 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
#line 7795 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 374:
#line 3028 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
#line 7801 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 375:
#line 3029 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
#line 7807 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 376:
#line 3030 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
#line 7813 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 387:
#line 3055 "vtkParse.y" /* glr.c:783  */
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 7819 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 388:
#line 3056 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_TYPEDEF); }
#line 7825 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 389:
#line 3057 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_FRIEND); }
#line 7831 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 392:
#line 3064 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7837 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 393:
#line 3065 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7843 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 394:
#line 3066 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7849 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 395:
#line 3067 "vtkParse.y" /* glr.c:783  */
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
#line 7855 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 396:
#line 3070 "vtkParse.y" /* glr.c:783  */
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
#line 7861 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 397:
#line 3071 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7867 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 398:
#line 3072 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7873 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 399:
#line 3073 "vtkParse.y" /* glr.c:783  */
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
#line 7879 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 400:
#line 3075 "vtkParse.y" /* glr.c:783  */
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
#line 7885 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 401:
#line 3078 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7891 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 402:
#line 3079 "vtkParse.y" /* glr.c:783  */
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 7897 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 403:
#line 3080 "vtkParse.y" /* glr.c:783  */
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
#line 7903 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 404:
#line 3083 "vtkParse.y" /* glr.c:783  */
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
#line 7909 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 405:
#line 3084 "vtkParse.y" /* glr.c:783  */
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
#line 7915 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 407:
#line 3089 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7921 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 409:
#line 3099 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7927 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 411:
#line 3101 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7933 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 414:
#line 3107 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7939 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 415:
#line 3109 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7945 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 417:
#line 3114 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 7951 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 418:
#line 3115 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 7957 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 419:
#line 3117 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7963 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 420:
#line 3119 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7969 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 421:
#line 3121 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7975 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 423:
#line 3127 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7981 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 425:
#line 3129 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7987 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 428:
#line 3136 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7993 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 430:
#line 3138 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7999 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 433:
#line 3144 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8005 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 434:
#line 3146 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8011 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 435:
#line 3148 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8017 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 436:
#line 3150 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8023 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 437:
#line 3152 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8029 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 438:
#line 3154 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8035 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 439:
#line 3157 "vtkParse.y" /* glr.c:783  */
    { setTypeId(""); }
#line 8041 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 441:
#line 3161 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
#line 8047 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 442:
#line 3162 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
#line 8053 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 443:
#line 3163 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
#line 8059 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 444:
#line 3164 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
#line 8065 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 445:
#line 3165 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
#line 8071 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 446:
#line 3166 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
#line 8077 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 447:
#line 3167 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
#line 8083 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 448:
#line 3168 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
#line 8089 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 449:
#line 3169 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
#line 8095 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 450:
#line 3170 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
#line 8101 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 451:
#line 3171 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
#line 8107 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 452:
#line 3172 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
#line 8113 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 453:
#line 3173 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
#line 8119 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 454:
#line 3174 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
#line 8125 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 455:
#line 3175 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
#line 8131 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 456:
#line 3176 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
#line 8137 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 457:
#line 3177 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
#line 8143 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 458:
#line 3178 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
#line 8149 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 459:
#line 3179 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
#line 8155 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 460:
#line 3180 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
#line 8161 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 461:
#line 3181 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
#line 8167 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 462:
#line 3182 "vtkParse.y" /* glr.c:783  */
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8173 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 463:
#line 3185 "vtkParse.y" /* glr.c:783  */
    { postSig("auto "); ((*yyvalp).integer) = 0; }
#line 8179 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 464:
#line 3186 "vtkParse.y" /* glr.c:783  */
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
#line 8185 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 465:
#line 3187 "vtkParse.y" /* glr.c:783  */
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
#line 8191 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 466:
#line 3188 "vtkParse.y" /* glr.c:783  */
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
#line 8197 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 467:
#line 3189 "vtkParse.y" /* glr.c:783  */
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8203 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 468:
#line 3190 "vtkParse.y" /* glr.c:783  */
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
#line 8209 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 469:
#line 3191 "vtkParse.y" /* glr.c:783  */
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
#line 8215 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 470:
#line 3192 "vtkParse.y" /* glr.c:783  */
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
#line 8221 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 471:
#line 3193 "vtkParse.y" /* glr.c:783  */
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
#line 8227 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 472:
#line 3194 "vtkParse.y" /* glr.c:783  */
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8233 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 473:
#line 3195 "vtkParse.y" /* glr.c:783  */
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
#line 8239 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 474:
#line 3196 "vtkParse.y" /* glr.c:783  */
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
#line 8245 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 475:
#line 3197 "vtkParse.y" /* glr.c:783  */
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
#line 8251 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 476:
#line 3198 "vtkParse.y" /* glr.c:783  */
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8257 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 477:
#line 3199 "vtkParse.y" /* glr.c:783  */
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
#line 8263 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 481:
#line 3222 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8269 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 482:
#line 3226 "vtkParse.y" /* glr.c:783  */
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 8275 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 483:
#line 3230 "vtkParse.y" /* glr.c:783  */
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
#line 8281 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 484:
#line 3233 "vtkParse.y" /* glr.c:783  */
    { postSig("*"); }
#line 8287 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 485:
#line 3234 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 8293 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 486:
#line 3237 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
#line 8299 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 487:
#line 3239 "vtkParse.y" /* glr.c:783  */
    {
      if (((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) & VTK_PARSE_CONST) != 0)
        {
        ((*yyvalp).integer) = VTK_PARSE_CONST_POINTER;
        }
      if (((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer) & VTK_PARSE_VOLATILE) != 0)
        {
        ((*yyvalp).integer) = VTK_PARSE_BAD_INDIRECT;
        }
    }
#line 8314 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 489:
#line 3255 "vtkParse.y" /* glr.c:783  */
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
        {
        n = VTK_PARSE_BAD_INDIRECT;
        }
      ((*yyvalp).integer) = n;
    }
#line 8328 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 490:
#line 3279 "vtkParse.y" /* glr.c:783  */
    { pushAttributeRole(VTK_PARSE_ATTRIB_DECL); }
#line 8334 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 491:
#line 3280 "vtkParse.y" /* glr.c:783  */
    { popAttributeRole(); }
#line 8340 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 492:
#line 3283 "vtkParse.y" /* glr.c:783  */
    { pushAttributeRole(VTK_PARSE_ATTRIB_ID); }
#line 8346 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 493:
#line 3284 "vtkParse.y" /* glr.c:783  */
    { popAttributeRole(); }
#line 8352 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 494:
#line 3287 "vtkParse.y" /* glr.c:783  */
    { pushAttributeRole(VTK_PARSE_ATTRIB_REF); }
#line 8358 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 495:
#line 3288 "vtkParse.y" /* glr.c:783  */
    { popAttributeRole(); }
#line 8364 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 496:
#line 3291 "vtkParse.y" /* glr.c:783  */
    { pushAttributeRole(VTK_PARSE_ATTRIB_FUNC); }
#line 8370 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 497:
#line 3292 "vtkParse.y" /* glr.c:783  */
    { popAttributeRole(); }
#line 8376 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 498:
#line 3295 "vtkParse.y" /* glr.c:783  */
    { pushAttributeRole(VTK_PARSE_ATTRIB_ARRAY); }
#line 8382 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 499:
#line 3296 "vtkParse.y" /* glr.c:783  */
    { popAttributeRole(); }
#line 8388 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 500:
#line 3299 "vtkParse.y" /* glr.c:783  */
    { pushAttributeRole(VTK_PARSE_ATTRIB_KEY); }
#line 8394 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 501:
#line 3300 "vtkParse.y" /* glr.c:783  */
    { popAttributeRole(); }
#line 8400 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 509:
#line 3314 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 8406 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 510:
#line 3315 "vtkParse.y" /* glr.c:783  */
    { handle_attribute(cutSig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8412 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 511:
#line 3318 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 8418 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 512:
#line 3319 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 8424 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 517:
#line 3335 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("(");}
#line 8430 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 518:
#line 3336 "vtkParse.y" /* glr.c:783  */
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8444 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 519:
#line 3345 "vtkParse.y" /* glr.c:783  */
    {postSig("Get");}
#line 8450 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 520:
#line 3346 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8456 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 521:
#line 3346 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8462 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 522:
#line 3347 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8475 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 523:
#line 3355 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set");}
#line 8481 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 524:
#line 3356 "vtkParse.y" /* glr.c:783  */
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8495 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 525:
#line 3365 "vtkParse.y" /* glr.c:783  */
    {preSig("char *Get");}
#line 8501 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 526:
#line 3366 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
#line 8514 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 527:
#line 3374 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8520 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 528:
#line 3374 "vtkParse.y" /* glr.c:783  */
    {closeSig();}
#line 8526 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 529:
#line 3376 "vtkParse.y" /* glr.c:783  */
    {
   const char *typeText;
   chopSig();
   typeText = copySig();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.str));
   currentFunction->Signature =
     vtkstrcat5("void ", currentFunction->Name, "(", typeText, ");");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.str), "MinValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();

   currentFunction->Macro = "vtkSetClampMacro";
   currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.str), "MaxValue");
   currentFunction->Signature =
     vtkstrcat4(typeText, " ", currentFunction->Name, "();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8561 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 530:
#line 3407 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("("); }
#line 8567 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 531:
#line 3408 "vtkParse.y" /* glr.c:783  */
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8581 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 532:
#line 3417 "vtkParse.y" /* glr.c:783  */
    {postSig("*Get");}
#line 8587 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 533:
#line 3418 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8593 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 534:
#line 3418 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8599 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 535:
#line 3419 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
#line 8612 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 536:
#line 3428 "vtkParse.y" /* glr.c:783  */
    {
   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), "On");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();

   currentFunction->Macro = "vtkBooleanMacro";
   currentFunction->Name = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), "Off");
   currentFunction->Comment = vtkstrdup(getComment());
   currentFunction->Signature =
     vtkstrcat3("void ", currentFunction->Name, "();");
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8634 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 537:
#line 3445 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8640 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 538:
#line 3446 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8649 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 539:
#line 3450 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8655 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 540:
#line 3451 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8664 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 541:
#line 3455 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8670 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 542:
#line 3456 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8679 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 543:
#line 3460 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8685 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 544:
#line 3461 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8694 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 545:
#line 3465 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8700 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 546:
#line 3466 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8709 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 547:
#line 3470 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8715 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 548:
#line 3471 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8724 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 549:
#line 3475 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8730 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 550:
#line 3476 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8739 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 551:
#line 3480 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8745 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 552:
#line 3481 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8754 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 553:
#line 3485 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8760 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 554:
#line 3487 "vtkParse.y" /* glr.c:783  */
    {
   const char *typeText;
   chopSig();
   typeText = copySig();
   currentFunction->Macro = "vtkSetVectorMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.str));
   currentFunction->Signature =
     vtkstrcat7("void ", currentFunction->Name, "(", typeText,
                " a[", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "]);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_POINTER | getType()),
                 getTypeId(), (int)strtol((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), NULL, 0));
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8780 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 555:
#line 3502 "vtkParse.y" /* glr.c:783  */
    {startSig();}
#line 8786 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 556:
#line 3504 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   currentFunction->Macro = "vtkGetVectorMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-6)].yystate.yysemantics.yysval.str));
   postSig(" *");
   postSig(currentFunction->Name);
   postSig("();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_POINTER | getType()),
              getTypeId(), (int)strtol((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), NULL, 0));
   output_function();
   }
#line 8803 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 557:
#line 3517 "vtkParse.y" /* glr.c:783  */
    {
     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[2]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkViewportCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 2);
     output_function();
   }
#line 8844 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 558:
#line 3554 "vtkParse.y" /* glr.c:783  */
    {
     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat3("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), "Coordinate");
     currentFunction->Signature =
       vtkstrcat3("vtkCoordinate *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkCoordinate", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double, double, double);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     add_parameter(currentFunction, VTK_PARSE_DOUBLE, "double", 0);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("void ", currentFunction->Name, "(double a[3]);");
     currentFunction->Comment = vtkstrdup(getComment());
     add_parameter(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
     output_function();

     currentFunction->Macro = "vtkWorldCoordinateMacro";
     currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
     currentFunction->Signature =
       vtkstrcat3("double *", currentFunction->Name, "();");
     currentFunction->Comment = vtkstrdup(getComment());
     set_return(currentFunction, VTK_PARSE_DOUBLE_PTR, "double", 3);
     output_function();
   }
#line 8886 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 559:
#line 3592 "vtkParse.y" /* glr.c:783  */
    {
   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "GetClassName";
   currentFunction->Signature = "const char *GetClassName();";
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
              "char", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "IsA";
   currentFunction->Signature = "virtual int IsA(const char *name);";
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, (VTK_PARSE_CONST | VTK_PARSE_CHAR_PTR),
                "char", 0);
   set_return(currentFunction, VTK_PARSE_INT, "int", 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "NewInstance";
   currentFunction->Signature = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), " *NewInstance();");
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), 0);
   output_function();

   currentFunction->Macro = "vtkTypeMacro";
   currentFunction->Name = "SafeDownCast";
   currentFunction->Signature =
     vtkstrcat3("static ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), " *SafeDownCast(vtkObject *o);");
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, "vtkObject", 0);
   set_return(currentFunction, (VTK_PARSE_STATIC | VTK_PARSE_OBJECT_PTR),
              (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), 0);
   output_function();
   }
#line 8926 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 562:
#line 3636 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "()"; }
#line 8932 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 563:
#line 3637 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "[]"; }
#line 8938 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 564:
#line 3638 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new[]"; }
#line 8944 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 565:
#line 3639 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete[]"; }
#line 8950 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 566:
#line 3640 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<"; }
#line 8956 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 567:
#line 3641 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">"; }
#line 8962 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 568:
#line 3642 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ","; }
#line 8968 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 569:
#line 3643 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "="; }
#line 8974 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 570:
#line 3644 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 8980 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 571:
#line 3645 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 8986 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 572:
#line 3646 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8992 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 574:
#line 3650 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%"; }
#line 8998 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 575:
#line 3651 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*"; }
#line 9004 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 576:
#line 3652 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/"; }
#line 9010 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 577:
#line 3653 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-"; }
#line 9016 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 578:
#line 3654 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+"; }
#line 9022 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 579:
#line 3655 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!"; }
#line 9028 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 580:
#line 3656 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "~"; }
#line 9034 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 581:
#line 3657 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&"; }
#line 9040 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 582:
#line 3658 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|"; }
#line 9046 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 583:
#line 3659 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^"; }
#line 9052 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 584:
#line 3660 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new"; }
#line 9058 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 585:
#line 3661 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete"; }
#line 9064 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 586:
#line 3662 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<="; }
#line 9070 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 587:
#line 3663 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>="; }
#line 9076 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 588:
#line 3664 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<"; }
#line 9082 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 589:
#line 3665 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ".*"; }
#line 9088 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 590:
#line 3666 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->*"; }
#line 9094 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 591:
#line 3667 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->"; }
#line 9100 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 592:
#line 3668 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+="; }
#line 9106 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 593:
#line 3669 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-="; }
#line 9112 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 594:
#line 3670 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*="; }
#line 9118 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 595:
#line 3671 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/="; }
#line 9124 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 596:
#line 3672 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%="; }
#line 9130 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 597:
#line 3673 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "++"; }
#line 9136 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 598:
#line 3674 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "--"; }
#line 9142 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 599:
#line 3675 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&="; }
#line 9148 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 600:
#line 3676 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|="; }
#line 9154 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 601:
#line 3677 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^="; }
#line 9160 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 602:
#line 3678 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&&"; }
#line 9166 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 603:
#line 3679 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "||"; }
#line 9172 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 604:
#line 3680 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "=="; }
#line 9178 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 605:
#line 3681 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!="; }
#line 9184 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 606:
#line 3682 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<="; }
#line 9190 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 607:
#line 3683 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">="; }
#line 9196 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 608:
#line 3686 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typedef"; }
#line 9202 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 609:
#line 3687 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typename"; }
#line 9208 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 610:
#line 3688 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "class"; }
#line 9214 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 611:
#line 3689 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "struct"; }
#line 9220 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 612:
#line 3690 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "union"; }
#line 9226 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 613:
#line 3691 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "template"; }
#line 9232 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 614:
#line 3692 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "public"; }
#line 9238 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 615:
#line 3693 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "protected"; }
#line 9244 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 616:
#line 3694 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "private"; }
#line 9250 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 617:
#line 3695 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const"; }
#line 9256 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 618:
#line 3696 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static"; }
#line 9262 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 619:
#line 3697 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "thread_local"; }
#line 9268 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 620:
#line 3698 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "constexpr"; }
#line 9274 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 621:
#line 3699 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "inline"; }
#line 9280 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 622:
#line 3700 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "virtual"; }
#line 9286 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 623:
#line 3701 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "explicit"; }
#line 9292 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 624:
#line 3702 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "decltype"; }
#line 9298 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 625:
#line 3703 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "default"; }
#line 9304 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 626:
#line 3704 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "extern"; }
#line 9310 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 627:
#line 3705 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "using"; }
#line 9316 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 628:
#line 3706 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "namespace"; }
#line 9322 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 629:
#line 3707 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "operator"; }
#line 9328 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 630:
#line 3708 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "enum"; }
#line 9334 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 631:
#line 3709 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "throw"; }
#line 9340 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 632:
#line 3710 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "noexcept"; }
#line 9346 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 633:
#line 3711 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const_cast"; }
#line 9352 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 634:
#line 3712 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "dynamic_cast"; }
#line 9358 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 635:
#line 3713 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static_cast"; }
#line 9364 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 636:
#line 3714 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "reinterpret_cast"; }
#line 9370 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 650:
#line 3738 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9376 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 651:
#line 3739 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9382 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 653:
#line 3740 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9388 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 655:
#line 3744 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("::"); }
#line 9394 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 659:
#line 3751 "vtkParse.y" /* glr.c:783  */
    {
      if ((((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))[0] == '+' || ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))[0] == '-' ||
           ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))[0] == '*' || ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))[0] == '&') &&
          ((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str))[1] == '\0')
        {
        int c1 = 0;
        size_t l;
        const char *cp;
        chopSig();
        cp = getSig();
        l = getSigLength();
        if (l != 0) { c1 = cp[l-1]; }
        if (c1 != 0 && c1 != '(' && c1 != '[' && c1 != '=')
          {
          postSig(" ");
          }
        postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
        if (vtkParse_CharType(c1, (CPRE_XID|CPRE_QUOTE)) ||
            c1 == ')' || c1 == ']')
          {
          postSig(" ");
          }
        }
       else
        {
        postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
        postSig(" ");
        }
    }
#line 9428 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 660:
#line 3780 "vtkParse.y" /* glr.c:783  */
    { postSig(":"); postSig(" "); }
#line 9434 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 661:
#line 3780 "vtkParse.y" /* glr.c:783  */
    { postSig("."); }
#line 9440 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 662:
#line 3781 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9446 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 663:
#line 3782 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9452 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 665:
#line 3785 "vtkParse.y" /* glr.c:783  */
    {
      int c1 = 0;
      size_t l;
      const char *cp;
      chopSig();
      cp = getSig();
      l = getSigLength();
      if (l != 0) { c1 = cp[l-1]; }
      while (vtkParse_CharType(c1, CPRE_XID) && l != 0)
        {
        --l;
        c1 = cp[l-1];
        }
      if (l < 2 || cp[l-1] != ':' || cp[l-2] != ':')
        {
        cp = add_const_scope(&cp[l]);
        resetSig(l);
        postSig(cp);
        }
      postSig(" ");
    }
#line 9478 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 669:
#line 3812 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9484 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 670:
#line 3813 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9490 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 671:
#line 3814 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9496 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 673:
#line 3818 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9502 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 674:
#line 3819 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9508 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 676:
#line 3823 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(";"); }
#line 9514 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 684:
#line 3837 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9520 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 685:
#line 3838 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9526 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 686:
#line 3842 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
#line 9536 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 687:
#line 3848 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
#line 9546 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 690:
#line 3859 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 9552 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 691:
#line 3860 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("] "); }
#line 9558 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 692:
#line 3861 "vtkParse.y" /* glr.c:783  */
    { postSig("[["); }
#line 9564 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 693:
#line 3862 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("]] "); }
#line 9570 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 694:
#line 3865 "vtkParse.y" /* glr.c:783  */
    { postSig("("); }
#line 9576 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 695:
#line 3866 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9582 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 696:
#line 3867 "vtkParse.y" /* glr.c:783  */
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 9588 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 697:
#line 3868 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9594 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 698:
#line 3869 "vtkParse.y" /* glr.c:783  */
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&"); }
#line 9600 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 699:
#line 3870 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9606 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 700:
#line 3873 "vtkParse.y" /* glr.c:783  */
    { postSig("{ "); }
#line 9612 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 701:
#line 3873 "vtkParse.y" /* glr.c:783  */
    { postSig("} "); }
#line 9618 "vtkParse.tab.c" /* glr.c:783  */
    break;


#line 9622 "vtkParse.tab.c" /* glr.c:783  */
      default: break;
    }

  return yyok;
# undef yyerrok
# undef YYABORT
# undef YYACCEPT
# undef YYERROR
# undef YYBACKUP
# undef yyclearin
# undef YYRECOVERING
}


static void
yyuserMerge (int yyn, YYSTYPE* yy0, YYSTYPE* yy1)
{
  YYUSE (yy0);
  YYUSE (yy1);

  switch (yyn)
    {

      default: break;
    }
}

                              /* Bison grammar-table manipulation.  */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}

/** Number of symbols composing the right hand side of rule #RULE.  */
static inline int
yyrhsLength (yyRuleNum yyrule)
{
  return yyr2[yyrule];
}

static void
yydestroyGLRState (char const *yymsg, yyGLRState *yys)
{
  if (yys->yyresolved)
    yydestruct (yymsg, yystos[yys->yylrState],
                &yys->yysemantics.yysval);
  else
    {
#if YYDEBUG
      if (yydebug)
        {
          if (yys->yysemantics.yyfirstVal)
            YYFPRINTF (stderr, "%s unresolved", yymsg);
          else
            YYFPRINTF (stderr, "%s incomplete", yymsg);
          YY_SYMBOL_PRINT ("", yystos[yys->yylrState], YY_NULLPTR, &yys->yyloc);
        }
#endif

      if (yys->yysemantics.yyfirstVal)
        {
          yySemanticOption *yyoption = yys->yysemantics.yyfirstVal;
          yyGLRState *yyrh;
          int yyn;
          for (yyrh = yyoption->yystate, yyn = yyrhsLength (yyoption->yyrule);
               yyn > 0;
               yyrh = yyrh->yypred, yyn -= 1)
            yydestroyGLRState (yymsg, yyrh);
        }
    }
}

/** Left-hand-side symbol for rule #YYRULE.  */
static inline yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-1039)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static inline yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static inline yyRuleNum
yydefaultAction (yyStateNum yystate)
{
  return yydefact[yystate];
}

#define yytable_value_is_error(Yytable_value) \
  0

/** Set *YYACTION to the action to take in YYSTATE on seeing YYTOKEN.
 *  Result R means
 *    R < 0:  Reduce on rule -R.
 *    R = 0:  Error.
 *    R > 0:  Shift to state R.
 *  Set *YYCONFLICTS to a pointer into yyconfl to a 0-terminated list
 *  of conflicting reductions.
 */
static inline void
yygetLRActions (yyStateNum yystate, int yytoken,
                int* yyaction, const short int** yyconflicts)
{
  int yyindex = yypact[yystate] + yytoken;
  if (yypact_value_is_default (yypact[yystate])
      || yyindex < 0 || YYLAST < yyindex || yycheck[yyindex] != yytoken)
    {
      *yyaction = -yydefact[yystate];
      *yyconflicts = yyconfl;
    }
  else if (! yytable_value_is_error (yytable[yyindex]))
    {
      *yyaction = yytable[yyindex];
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
  else
    {
      *yyaction = 0;
      *yyconflicts = yyconfl + yyconflp[yyindex];
    }
}

/** Compute post-reduction state.
 * \param yystate   the current state
 * \param yysym     the nonterminal to push on the stack
 */
static inline yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static inline yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static inline yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static inline yyGLRStackItem*
yynewGLRStackItem (yyGLRStack* yystackp, yybool yyisState)
{
  yyGLRStackItem* yynewItem = yystackp->yynextFree;
  yystackp->yyspaceLeft -= 1;
  yystackp->yynextFree += 1;
  yynewItem->yystate.yyisState = yyisState;
  return yynewItem;
}

/** Add a new semantic action that will execute the action for rule
 *  YYRULE on the semantic values in YYRHS to the list of
 *  alternative actions for YYSTATE.  Assumes that YYRHS comes from
 *  stack #YYK of *YYSTACKP. */
static void
yyaddDeferredAction (yyGLRStack* yystackp, size_t yyk, yyGLRState* yystate,
                     yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yySemanticOption* yynewOption =
    &yynewGLRStackItem (yystackp, yyfalse)->yyoption;
  YYASSERT (!yynewOption->yyisState);
  yynewOption->yystate = yyrhs;
  yynewOption->yyrule = yyrule;
  if (yystackp->yytops.yylookaheadNeeds[yyk])
    {
      yynewOption->yyrawchar = yychar;
      yynewOption->yyval = yylval;
    }
  else
    yynewOption->yyrawchar = YYEMPTY;
  yynewOption->yynext = yystate->yysemantics.yyfirstVal;
  yystate->yysemantics.yyfirstVal = yynewOption;

  YY_RESERVE_GLRSTACK (yystackp);
}

                                /* GLRStacks */

/** Initialize YYSET to a singleton set containing an empty stack.  */
static yybool
yyinitStateSet (yyGLRStateSet* yyset)
{
  yyset->yysize = 1;
  yyset->yycapacity = 16;
  yyset->yystates = (yyGLRState**) YYMALLOC (16 * sizeof yyset->yystates[0]);
  if (! yyset->yystates)
    return yyfalse;
  yyset->yystates[0] = YY_NULLPTR;
  yyset->yylookaheadNeeds =
    (yybool*) YYMALLOC (16 * sizeof yyset->yylookaheadNeeds[0]);
  if (! yyset->yylookaheadNeeds)
    {
      YYFREE (yyset->yystates);
      return yyfalse;
    }
  return yytrue;
}

static void yyfreeStateSet (yyGLRStateSet* yyset)
{
  YYFREE (yyset->yystates);
  YYFREE (yyset->yylookaheadNeeds);
}

/** Initialize *YYSTACKP to a single empty stack, with total maximum
 *  capacity for all stacks of YYSIZE.  */
static yybool
yyinitGLRStack (yyGLRStack* yystackp, size_t yysize)
{
  yystackp->yyerrState = 0;
  yynerrs = 0;
  yystackp->yyspaceLeft = yysize;
  yystackp->yyitems =
    (yyGLRStackItem*) YYMALLOC (yysize * sizeof yystackp->yynextFree[0]);
  if (!yystackp->yyitems)
    return yyfalse;
  yystackp->yynextFree = yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;
  return yyinitStateSet (&yystackp->yytops);
}


#if YYSTACKEXPANDABLE
# define YYRELOC(YYFROMITEMS,YYTOITEMS,YYX,YYTYPE) \
  &((YYTOITEMS) - ((YYFROMITEMS) - (yyGLRStackItem*) (YYX)))->YYTYPE

/** If *YYSTACKP is expandable, extend it.  WARNING: Pointers into the
    stack from outside should be considered invalid after this call.
    We always expand when there are 1 or fewer items left AFTER an
    allocation, so that we can avoid having external pointers exist
    across an allocation.  */
static void
yyexpandGLRStack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yynewItems;
  yyGLRStackItem* yyp0, *yyp1;
  size_t yynewSize;
  size_t yyn;
  size_t yysize = yystackp->yynextFree - yystackp->yyitems;
  if (YYMAXDEPTH - YYHEADROOM < yysize)
    yyMemoryExhausted (yystackp);
  yynewSize = 2*yysize;
  if (YYMAXDEPTH < yynewSize)
    yynewSize = YYMAXDEPTH;
  yynewItems = (yyGLRStackItem*) YYMALLOC (yynewSize * sizeof yynewItems[0]);
  if (! yynewItems)
    yyMemoryExhausted (yystackp);
  for (yyp0 = yystackp->yyitems, yyp1 = yynewItems, yyn = yysize;
       0 < yyn;
       yyn -= 1, yyp0 += 1, yyp1 += 1)
    {
      *yyp1 = *yyp0;
      if (*(yybool *) yyp0)
        {
          yyGLRState* yys0 = &yyp0->yystate;
          yyGLRState* yys1 = &yyp1->yystate;
          if (yys0->yypred != YY_NULLPTR)
            yys1->yypred =
              YYRELOC (yyp0, yyp1, yys0->yypred, yystate);
          if (! yys0->yyresolved && yys0->yysemantics.yyfirstVal != YY_NULLPTR)
            yys1->yysemantics.yyfirstVal =
              YYRELOC (yyp0, yyp1, yys0->yysemantics.yyfirstVal, yyoption);
        }
      else
        {
          yySemanticOption* yyv0 = &yyp0->yyoption;
          yySemanticOption* yyv1 = &yyp1->yyoption;
          if (yyv0->yystate != YY_NULLPTR)
            yyv1->yystate = YYRELOC (yyp0, yyp1, yyv0->yystate, yystate);
          if (yyv0->yynext != YY_NULLPTR)
            yyv1->yynext = YYRELOC (yyp0, yyp1, yyv0->yynext, yyoption);
        }
    }
  if (yystackp->yysplitPoint != YY_NULLPTR)
    yystackp->yysplitPoint = YYRELOC (yystackp->yyitems, yynewItems,
                                      yystackp->yysplitPoint, yystate);

  for (yyn = 0; yyn < yystackp->yytops.yysize; yyn += 1)
    if (yystackp->yytops.yystates[yyn] != YY_NULLPTR)
      yystackp->yytops.yystates[yyn] =
        YYRELOC (yystackp->yyitems, yynewItems,
                 yystackp->yytops.yystates[yyn], yystate);
  YYFREE (yystackp->yyitems);
  yystackp->yyitems = yynewItems;
  yystackp->yynextFree = yynewItems + yysize;
  yystackp->yyspaceLeft = yynewSize - yysize;
}
#endif

static void
yyfreeGLRStack (yyGLRStack* yystackp)
{
  YYFREE (yystackp->yyitems);
  yyfreeStateSet (&yystackp->yytops);
}

/** Assuming that YYS is a GLRState somewhere on *YYSTACKP, update the
 *  splitpoint of *YYSTACKP, if needed, so that it is at least as deep as
 *  YYS.  */
static inline void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static inline void
yymarkStackDeleted (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    yystackp->yylastDeleted = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yystates[yyk] = YY_NULLPTR;
}

/** Undelete the last stack in *YYSTACKP that was marked as deleted.  Can
    only be done once after a deletion, and only when all other stacks have
    been deleted.  */
static void
yyundeleteLastStack (yyGLRStack* yystackp)
{
  if (yystackp->yylastDeleted == YY_NULLPTR || yystackp->yytops.yysize != 0)
    return;
  yystackp->yytops.yystates[0] = yystackp->yylastDeleted;
  yystackp->yytops.yysize = 1;
  YYDPRINTF ((stderr, "Restoring last deleted stack as stack #0.\n"));
  yystackp->yylastDeleted = YY_NULLPTR;
}

static inline void
yyremoveDeletes (yyGLRStack* yystackp)
{
  size_t yyi, yyj;
  yyi = yyj = 0;
  while (yyj < yystackp->yytops.yysize)
    {
      if (yystackp->yytops.yystates[yyi] == YY_NULLPTR)
        {
          if (yyi == yyj)
            {
              YYDPRINTF ((stderr, "Removing dead stacks.\n"));
            }
          yystackp->yytops.yysize -= 1;
        }
      else
        {
          yystackp->yytops.yystates[yyj] = yystackp->yytops.yystates[yyi];
          /* In the current implementation, it's unnecessary to copy
             yystackp->yytops.yylookaheadNeeds[yyi] since, after
             yyremoveDeletes returns, the parser immediately either enters
             deterministic operation or shifts a token.  However, it doesn't
             hurt, and the code might evolve to need it.  */
          yystackp->yytops.yylookaheadNeeds[yyj] =
            yystackp->yytops.yylookaheadNeeds[yyi];
          if (yyj != yyi)
            {
              YYDPRINTF ((stderr, "Rename stack %lu -> %lu.\n",
                          (unsigned long int) yyi, (unsigned long int) yyj));
            }
          yyj += 1;
        }
      yyi += 1;
    }
}

/** Shift to a new state on stack #YYK of *YYSTACKP, corresponding to LR
 * state YYLRSTATE, at input position YYPOSN, with (resolved) semantic
 * value *YYVALP and source location *YYLOCP.  */
static inline void
yyglrShift (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
            size_t yyposn,
            YYSTYPE* yyvalp)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yytrue;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yysval = *yyvalp;
  yystackp->yytops.yystates[yyk] = yynewState;

  YY_RESERVE_GLRSTACK (yystackp);
}

/** Shift stack #YYK of *YYSTACKP, to a new state corresponding to LR
 *  state YYLRSTATE, at input position YYPOSN, with the (unresolved)
 *  semantic value of YYRHS under the action for YYRULE.  */
static inline void
yyglrShiftDefer (yyGLRStack* yystackp, size_t yyk, yyStateNum yylrState,
                 size_t yyposn, yyGLRState* yyrhs, yyRuleNum yyrule)
{
  yyGLRState* yynewState = &yynewGLRStackItem (yystackp, yytrue)->yystate;
  YYASSERT (yynewState->yyisState);

  yynewState->yylrState = yylrState;
  yynewState->yyposn = yyposn;
  yynewState->yyresolved = yyfalse;
  yynewState->yypred = yystackp->yytops.yystates[yyk];
  yynewState->yysemantics.yyfirstVal = YY_NULLPTR;
  yystackp->yytops.yystates[yyk] = yynewState;

  /* Invokes YY_RESERVE_GLRSTACK.  */
  yyaddDeferredAction (yystackp, yyk, yynewState, yyrhs, yyrule);
}

#if !YYDEBUG
# define YY_REDUCE_PRINT(Args)
#else
# define YY_REDUCE_PRINT(Args)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print Args;               \
} while (0)

/*----------------------------------------------------------------------.
| Report that stack #YYK of *YYSTACKP is going to be reduced by YYRULE. |
`----------------------------------------------------------------------*/

static inline void
yy_reduce_print (int yynormal, yyGLRStackItem* yyvsp, size_t yyk,
                 yyRuleNum yyrule)
{
  int yynrhs = yyrhsLength (yyrule);
  int yyi;
  YYFPRINTF (stderr, "Reducing stack %lu by rule %d (line %lu):\n",
             (unsigned long int) yyk, yyrule - 1,
             (unsigned long int) yyrline[yyrule]);
  if (! yynormal)
    yyfillin (yyvsp, 1, -yynrhs);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyvsp[yyi - yynrhs + 1].yystate.yylrState],
                       &yyvsp[yyi - yynrhs + 1].yystate.yysemantics.yysval
                                              );
      if (!yyvsp[yyi - yynrhs + 1].yystate.yyresolved)
        YYFPRINTF (stderr, " (unresolved)");
      YYFPRINTF (stderr, "\n");
    }
}
#endif

/** Pop the symbols consumed by reduction #YYRULE from the top of stack
 *  #YYK of *YYSTACKP, and perform the appropriate semantic action on their
 *  semantic values.  Assumes that all ambiguities in semantic values
 *  have been previously resolved.  Set *YYVALP to the resulting value,
 *  and *YYLOCP to the computed location (if any).  Return value is as
 *  for userAction.  */
static inline YYRESULTTAG
yydoAction (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
            YYSTYPE* yyvalp)
{
  int yynrhs = yyrhsLength (yyrule);

  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      /* Standard special case: single stack.  */
      yyGLRStackItem* yyrhs = (yyGLRStackItem*) yystackp->yytops.yystates[yyk];
      YYASSERT (yyk == 0);
      yystackp->yynextFree -= yynrhs;
      yystackp->yyspaceLeft += yynrhs;
      yystackp->yytops.yystates[0] = & yystackp->yynextFree[-1].yystate;
      YY_REDUCE_PRINT ((1, yyrhs, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhs, yystackp,
                           yyvalp);
    }
  else
    {
      int yyi;
      yyGLRState* yys;
      yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
      yys = yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred
        = yystackp->yytops.yystates[yyk];
      for (yyi = 0; yyi < yynrhs; yyi += 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yystackp->yytops.yystates[yyk] = yys;
      YY_REDUCE_PRINT ((0, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1, yyk, yyrule));
      return yyuserAction (yyrule, yynrhs, yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    }
}

/** Pop items off stack #YYK of *YYSTACKP according to grammar rule YYRULE,
 *  and push back on the resulting nonterminal symbol.  Perform the
 *  semantic action associated with YYRULE and store its value with the
 *  newly pushed state, if YYFORCEEVAL or if *YYSTACKP is currently
 *  unambiguous.  Otherwise, store the deferred semantic action with
 *  the new state.  If the new state would have an identical input
 *  position, LR state, and predecessor to an existing state on the stack,
 *  it is identified with that existing state, eliminating stack #YYK from
 *  *YYSTACKP.  In this case, the semantic value is
 *  added to the options for the existing state's semantic value.
 */
static inline YYRESULTTAG
yyglrReduce (yyGLRStack* yystackp, size_t yyk, yyRuleNum yyrule,
             yybool yyforceEval)
{
  size_t yyposn = yystackp->yytops.yystates[yyk]->yyposn;

  if (yyforceEval || yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYSTYPE yysval;

      YYRESULTTAG yyflag = yydoAction (yystackp, yyk, yyrule, &yysval);
      if (yyflag == yyerr && yystackp->yysplitPoint != YY_NULLPTR)
        {
          YYDPRINTF ((stderr, "Parse on stack %lu rejected by rule #%d.\n",
                     (unsigned long int) yyk, yyrule - 1));
        }
      if (yyflag != yyok)
        return yyflag;
      YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyrule], &yysval, &yyloc);
      yyglrShift (yystackp, yyk,
                  yyLRgotoState (yystackp->yytops.yystates[yyk]->yylrState,
                                 yylhsNonterm (yyrule)),
                  yyposn, &yysval);
    }
  else
    {
      size_t yyi;
      int yyn;
      yyGLRState* yys, *yys0 = yystackp->yytops.yystates[yyk];
      yyStateNum yynewLRState;

      for (yys = yystackp->yytops.yystates[yyk], yyn = yyrhsLength (yyrule);
           0 < yyn; yyn -= 1)
        {
          yys = yys->yypred;
          YYASSERT (yys);
        }
      yyupdateSplit (yystackp, yys);
      yynewLRState = yyLRgotoState (yys->yylrState, yylhsNonterm (yyrule));
      YYDPRINTF ((stderr,
                  "Reduced stack %lu by rule #%d; action deferred.  "
                  "Now in state %d.\n",
                  (unsigned long int) yyk, yyrule - 1, yynewLRState));
      for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
        if (yyi != yyk && yystackp->yytops.yystates[yyi] != YY_NULLPTR)
          {
            yyGLRState *yysplit = yystackp->yysplitPoint;
            yyGLRState *yyp = yystackp->yytops.yystates[yyi];
            while (yyp != yys && yyp != yysplit && yyp->yyposn >= yyposn)
              {
                if (yyp->yylrState == yynewLRState && yyp->yypred == yys)
                  {
                    yyaddDeferredAction (yystackp, yyk, yyp, yys0, yyrule);
                    yymarkStackDeleted (yystackp, yyk);
                    YYDPRINTF ((stderr, "Merging stack %lu into stack %lu.\n",
                                (unsigned long int) yyk,
                                (unsigned long int) yyi));
                    return yyok;
                  }
                yyp = yyp->yypred;
              }
          }
      yystackp->yytops.yystates[yyk] = yys;
      yyglrShiftDefer (yystackp, yyk, yynewLRState, yyposn, yys0, yyrule);
    }
  return yyok;
}

static size_t
yysplitStack (yyGLRStack* yystackp, size_t yyk)
{
  if (yystackp->yysplitPoint == YY_NULLPTR)
    {
      YYASSERT (yyk == 0);
      yystackp->yysplitPoint = yystackp->yytops.yystates[yyk];
    }
  if (yystackp->yytops.yysize >= yystackp->yytops.yycapacity)
    {
      yyGLRState** yynewStates;
      yybool* yynewLookaheadNeeds;

      yynewStates = YY_NULLPTR;

      if (yystackp->yytops.yycapacity
          > (YYSIZEMAX / (2 * sizeof yynewStates[0])))
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yycapacity *= 2;

      yynewStates =
        (yyGLRState**) YYREALLOC (yystackp->yytops.yystates,
                                  (yystackp->yytops.yycapacity
                                   * sizeof yynewStates[0]));
      if (yynewStates == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yystates = yynewStates;

      yynewLookaheadNeeds =
        (yybool*) YYREALLOC (yystackp->yytops.yylookaheadNeeds,
                             (yystackp->yytops.yycapacity
                              * sizeof yynewLookaheadNeeds[0]));
      if (yynewLookaheadNeeds == YY_NULLPTR)
        yyMemoryExhausted (yystackp);
      yystackp->yytops.yylookaheadNeeds = yynewLookaheadNeeds;
    }
  yystackp->yytops.yystates[yystackp->yytops.yysize]
    = yystackp->yytops.yystates[yyk];
  yystackp->yytops.yylookaheadNeeds[yystackp->yytops.yysize]
    = yystackp->yytops.yylookaheadNeeds[yyk];
  yystackp->yytops.yysize += 1;
  return yystackp->yytops.yysize-1;
}

/** True iff YYY0 and YYY1 represent identical options at the top level.
 *  That is, they represent the same rule applied to RHS symbols
 *  that produce the same terminal symbols.  */
static yybool
yyidenticalOptions (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  if (yyy0->yyrule == yyy1->yyrule)
    {
      yyGLRState *yys0, *yys1;
      int yyn;
      for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
           yyn = yyrhsLength (yyy0->yyrule);
           yyn > 0;
           yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
        if (yys0->yyposn != yys1->yyposn)
          return yyfalse;
      return yytrue;
    }
  else
    return yyfalse;
}

/** Assuming identicalOptions (YYY0,YYY1), destructively merge the
 *  alternative semantic values for the RHS-symbols of YYY1 and YYY0.  */
static void
yymergeOptionSets (yySemanticOption* yyy0, yySemanticOption* yyy1)
{
  yyGLRState *yys0, *yys1;
  int yyn;
  for (yys0 = yyy0->yystate, yys1 = yyy1->yystate,
       yyn = yyrhsLength (yyy0->yyrule);
       yyn > 0;
       yys0 = yys0->yypred, yys1 = yys1->yypred, yyn -= 1)
    {
      if (yys0 == yys1)
        break;
      else if (yys0->yyresolved)
        {
          yys1->yyresolved = yytrue;
          yys1->yysemantics.yysval = yys0->yysemantics.yysval;
        }
      else if (yys1->yyresolved)
        {
          yys0->yyresolved = yytrue;
          yys0->yysemantics.yysval = yys1->yysemantics.yysval;
        }
      else
        {
          yySemanticOption** yyz0p = &yys0->yysemantics.yyfirstVal;
          yySemanticOption* yyz1 = yys1->yysemantics.yyfirstVal;
          while (yytrue)
            {
              if (yyz1 == *yyz0p || yyz1 == YY_NULLPTR)
                break;
              else if (*yyz0p == YY_NULLPTR)
                {
                  *yyz0p = yyz1;
                  break;
                }
              else if (*yyz0p < yyz1)
                {
                  yySemanticOption* yyz = *yyz0p;
                  *yyz0p = yyz1;
                  yyz1 = yyz1->yynext;
                  (*yyz0p)->yynext = yyz;
                }
              yyz0p = &(*yyz0p)->yynext;
            }
          yys1->yysemantics.yyfirstVal = yys0->yysemantics.yyfirstVal;
        }
    }
}

/** Y0 and Y1 represent two possible actions to take in a given
 *  parsing state; return 0 if no combination is possible,
 *  1 if user-mergeable, 2 if Y0 is preferred, 3 if Y1 is preferred.  */
static int
yypreference (yySemanticOption* y0, yySemanticOption* y1)
{
  yyRuleNum r0 = y0->yyrule, r1 = y1->yyrule;
  int p0 = yydprec[r0], p1 = yydprec[r1];

  if (p0 == p1)
    {
      if (yymerger[r0] == 0 || yymerger[r0] != yymerger[r1])
        return 0;
      else
        return 1;
    }
  if (p0 == 0 || p1 == 0)
    return 0;
  if (p0 < p1)
    return 3;
  if (p1 < p0)
    return 2;
  return 0;
}

static YYRESULTTAG yyresolveValue (yyGLRState* yys,
                                   yyGLRStack* yystackp);


/** Resolve the previous YYN states starting at and including state YYS
 *  on *YYSTACKP. If result != yyok, some states may have been left
 *  unresolved possibly with empty semantic option chains.  Regardless
 *  of whether result = yyok, each state has been left with consistent
 *  data so that yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveStates (yyGLRState* yys, int yyn,
                 yyGLRStack* yystackp)
{
  if (0 < yyn)
    {
      YYASSERT (yys->yypred);
      YYCHK (yyresolveStates (yys->yypred, yyn-1, yystackp));
      if (! yys->yyresolved)
        YYCHK (yyresolveValue (yys, yystackp));
    }
  return yyok;
}

/** Resolve the states for the RHS of YYOPT on *YYSTACKP, perform its
 *  user action, and return the semantic value and location in *YYVALP
 *  and *YYLOCP.  Regardless of whether result = yyok, all RHS states
 *  have been destroyed (assuming the user action destroys all RHS
 *  semantic values if invoked).  */
static YYRESULTTAG
yyresolveAction (yySemanticOption* yyopt, yyGLRStack* yystackp,
                 YYSTYPE* yyvalp)
{
  yyGLRStackItem yyrhsVals[YYMAXRHS + YYMAXLEFT + 1];
  int yynrhs = yyrhsLength (yyopt->yyrule);
  YYRESULTTAG yyflag =
    yyresolveStates (yyopt->yystate, yynrhs, yystackp);
  if (yyflag != yyok)
    {
      yyGLRState *yys;
      for (yys = yyopt->yystate; yynrhs > 0; yys = yys->yypred, yynrhs -= 1)
        yydestroyGLRState ("Cleanup: popping", yys);
      return yyflag;
    }

  yyrhsVals[YYMAXRHS + YYMAXLEFT].yystate.yypred = yyopt->yystate;
  {
    int yychar_current = yychar;
    YYSTYPE yylval_current = yylval;
    yychar = yyopt->yyrawchar;
    yylval = yyopt->yyval;
    yyflag = yyuserAction (yyopt->yyrule, yynrhs,
                           yyrhsVals + YYMAXRHS + YYMAXLEFT - 1,
                           yystackp, yyvalp);
    yychar = yychar_current;
    yylval = yylval_current;
  }
  return yyflag;
}

#if YYDEBUG
static void
yyreportTree (yySemanticOption* yyx, int yyindent)
{
  int yynrhs = yyrhsLength (yyx->yyrule);
  int yyi;
  yyGLRState* yys;
  yyGLRState* yystates[1 + YYMAXRHS];
  yyGLRState yyleftmost_state;

  for (yyi = yynrhs, yys = yyx->yystate; 0 < yyi; yyi -= 1, yys = yys->yypred)
    yystates[yyi] = yys;
  if (yys == YY_NULLPTR)
    {
      yyleftmost_state.yyposn = 0;
      yystates[0] = &yyleftmost_state;
    }
  else
    yystates[0] = yys;

  if (yyx->yystate->yyposn < yys->yyposn + 1)
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, empty>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1);
  else
    YYFPRINTF (stderr, "%*s%s -> <Rule %d, tokens %lu .. %lu>\n",
               yyindent, "", yytokenName (yylhsNonterm (yyx->yyrule)),
               yyx->yyrule - 1, (unsigned long int) (yys->yyposn + 1),
               (unsigned long int) yyx->yystate->yyposn);
  for (yyi = 1; yyi <= yynrhs; yyi += 1)
    {
      if (yystates[yyi]->yyresolved)
        {
          if (yystates[yyi-1]->yyposn+1 > yystates[yyi]->yyposn)
            YYFPRINTF (stderr, "%*s%s <empty>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]));
          else
            YYFPRINTF (stderr, "%*s%s <tokens %lu .. %lu>\n", yyindent+2, "",
                       yytokenName (yystos[yystates[yyi]->yylrState]),
                       (unsigned long int) (yystates[yyi-1]->yyposn + 1),
                       (unsigned long int) yystates[yyi]->yyposn);
        }
      else
        yyreportTree (yystates[yyi]->yysemantics.yyfirstVal, yyindent+2);
    }
}
#endif

static YYRESULTTAG
yyreportAmbiguity (yySemanticOption* yyx0,
                   yySemanticOption* yyx1)
{
  YYUSE (yyx0);
  YYUSE (yyx1);

#if YYDEBUG
  YYFPRINTF (stderr, "Ambiguity detected.\n");
  YYFPRINTF (stderr, "Option 1,\n");
  yyreportTree (yyx0, 2);
  YYFPRINTF (stderr, "\nOption 2,\n");
  yyreportTree (yyx1, 2);
  YYFPRINTF (stderr, "\n");
#endif

  yyerror (YY_("syntax is ambiguous"));
  return yyabort;
}

/** Resolve the ambiguity represented in state YYS in *YYSTACKP,
 *  perform the indicated actions, and set the semantic value of YYS.
 *  If result != yyok, the chain of semantic options in YYS has been
 *  cleared instead or it has been left unmodified except that
 *  redundant options may have been removed.  Regardless of whether
 *  result = yyok, YYS has been left with consistent data so that
 *  yydestroyGLRState can be invoked if necessary.  */
static YYRESULTTAG
yyresolveValue (yyGLRState* yys, yyGLRStack* yystackp)
{
  yySemanticOption* yyoptionList = yys->yysemantics.yyfirstVal;
  yySemanticOption* yybest = yyoptionList;
  yySemanticOption** yypp;
  yybool yymerge = yyfalse;
  YYSTYPE yysval;
  YYRESULTTAG yyflag;

  for (yypp = &yyoptionList->yynext; *yypp != YY_NULLPTR; )
    {
      yySemanticOption* yyp = *yypp;

      if (yyidenticalOptions (yybest, yyp))
        {
          yymergeOptionSets (yybest, yyp);
          *yypp = yyp->yynext;
        }
      else
        {
          switch (yypreference (yybest, yyp))
            {
            case 0:
              return yyreportAmbiguity (yybest, yyp);
              break;
            case 1:
              yymerge = yytrue;
              break;
            case 2:
              break;
            case 3:
              yybest = yyp;
              yymerge = yyfalse;
              break;
            default:
              /* This cannot happen so it is not worth a YYASSERT (yyfalse),
                 but some compilers complain if the default case is
                 omitted.  */
              break;
            }
          yypp = &yyp->yynext;
        }
    }

  if (yymerge)
    {
      yySemanticOption* yyp;
      int yyprec = yydprec[yybest->yyrule];
      yyflag = yyresolveAction (yybest, yystackp, &yysval);
      if (yyflag == yyok)
        for (yyp = yybest->yynext; yyp != YY_NULLPTR; yyp = yyp->yynext)
          {
            if (yyprec == yydprec[yyp->yyrule])
              {
                YYSTYPE yysval_other;
                yyflag = yyresolveAction (yyp, yystackp, &yysval_other);
                if (yyflag != yyok)
                  {
                    yydestruct ("Cleanup: discarding incompletely merged value for",
                                yystos[yys->yylrState],
                                &yysval);
                    break;
                  }
                yyuserMerge (yymerger[yyp->yyrule], &yysval, &yysval_other);
              }
          }
    }
  else
    yyflag = yyresolveAction (yybest, yystackp, &yysval);

  if (yyflag == yyok)
    {
      yys->yyresolved = yytrue;
      yys->yysemantics.yysval = yysval;
    }
  else
    yys->yysemantics.yyfirstVal = YY_NULLPTR;
  return yyflag;
}

static YYRESULTTAG
yyresolveStack (yyGLRStack* yystackp)
{
  if (yystackp->yysplitPoint != YY_NULLPTR)
    {
      yyGLRState* yys;
      int yyn;

      for (yyn = 0, yys = yystackp->yytops.yystates[0];
           yys != yystackp->yysplitPoint;
           yys = yys->yypred, yyn += 1)
        continue;
      YYCHK (yyresolveStates (yystackp->yytops.yystates[0], yyn, yystackp
                             ));
    }
  return yyok;
}

static void
yycompressStack (yyGLRStack* yystackp)
{
  yyGLRState* yyp, *yyq, *yyr;

  if (yystackp->yytops.yysize != 1 || yystackp->yysplitPoint == YY_NULLPTR)
    return;

  for (yyp = yystackp->yytops.yystates[0], yyq = yyp->yypred, yyr = YY_NULLPTR;
       yyp != yystackp->yysplitPoint;
       yyr = yyp, yyp = yyq, yyq = yyp->yypred)
    yyp->yypred = yyr;

  yystackp->yyspaceLeft += yystackp->yynextFree - yystackp->yyitems;
  yystackp->yynextFree = ((yyGLRStackItem*) yystackp->yysplitPoint) + 1;
  yystackp->yyspaceLeft -= yystackp->yynextFree - yystackp->yyitems;
  yystackp->yysplitPoint = YY_NULLPTR;
  yystackp->yylastDeleted = YY_NULLPTR;

  while (yyr != YY_NULLPTR)
    {
      yystackp->yynextFree->yystate = *yyr;
      yyr = yyr->yypred;
      yystackp->yynextFree->yystate.yypred = &yystackp->yynextFree[-1].yystate;
      yystackp->yytops.yystates[0] = &yystackp->yynextFree->yystate;
      yystackp->yynextFree += 1;
      yystackp->yyspaceLeft -= 1;
    }
}

static YYRESULTTAG
yyprocessOneStack (yyGLRStack* yystackp, size_t yyk,
                   size_t yyposn)
{
  while (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
    {
      yyStateNum yystate = yystackp->yytops.yystates[yyk]->yylrState;
      YYDPRINTF ((stderr, "Stack %lu Entering state %d\n",
                  (unsigned long int) yyk, yystate));

      YYASSERT (yystate != YYFINAL);

      if (yyisDefaultedState (yystate))
        {
          YYRESULTTAG yyflag;
          yyRuleNum yyrule = yydefaultAction (yystate);
          if (yyrule == 0)
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          yyflag = yyglrReduce (yystackp, yyk, yyrule, yyimmediate[yyrule]);
          if (yyflag == yyerr)
            {
              YYDPRINTF ((stderr,
                          "Stack %lu dies "
                          "(predicate failure or explicit user error).\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              return yyok;
            }
          if (yyflag != yyok)
            return yyflag;
        }
      else
        {
          yySymbol yytoken;
          int yyaction;
          const short int* yyconflicts;

          yystackp->yytops.yylookaheadNeeds[yyk] = yytrue;
          if (yychar == YYEMPTY)
            {
              YYDPRINTF ((stderr, "Reading a token: "));
              yychar = yylex ();
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

          yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);

          while (*yyconflicts != 0)
            {
              YYRESULTTAG yyflag;
              size_t yynewStack = yysplitStack (yystackp, yyk);
              YYDPRINTF ((stderr, "Splitting off stack %lu from %lu.\n",
                          (unsigned long int) yynewStack,
                          (unsigned long int) yyk));
              yyflag = yyglrReduce (yystackp, yynewStack,
                                    *yyconflicts,
                                    yyimmediate[*yyconflicts]);
              if (yyflag == yyok)
                YYCHK (yyprocessOneStack (yystackp, yynewStack,
                                          yyposn));
              else if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr, "Stack %lu dies.\n",
                              (unsigned long int) yynewStack));
                  yymarkStackDeleted (yystackp, yynewStack);
                }
              else
                return yyflag;
              yyconflicts += 1;
            }

          if (yyisShiftAction (yyaction))
            break;
          else if (yyisErrorAction (yyaction))
            {
              YYDPRINTF ((stderr, "Stack %lu dies.\n",
                          (unsigned long int) yyk));
              yymarkStackDeleted (yystackp, yyk);
              break;
            }
          else
            {
              YYRESULTTAG yyflag = yyglrReduce (yystackp, yyk, -yyaction,
                                                yyimmediate[-yyaction]);
              if (yyflag == yyerr)
                {
                  YYDPRINTF ((stderr,
                              "Stack %lu dies "
                              "(predicate failure or explicit user error).\n",
                              (unsigned long int) yyk));
                  yymarkStackDeleted (yystackp, yyk);
                  break;
                }
              else if (yyflag != yyok)
                return yyflag;
            }
        }
    }
  return yyok;
}

static void
yyreportSyntaxError (yyGLRStack* yystackp)
{
  if (yystackp->yyerrState != 0)
    return;
#if ! YYERROR_VERBOSE
  yyerror (YY_("syntax error"));
#else
  {
  yySymbol yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);
  size_t yysize0 = yytnamerr (YY_NULLPTR, yytokenName (yytoken));
  size_t yysize = yysize0;
  yybool yysize_overflow = yyfalse;
  char* yymsg = YY_NULLPTR;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected").  */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[yystackp->yytops.yystates[0]->yylrState];
      yyarg[yycount++] = yytokenName (yytoken);
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for this
             state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;
          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytokenName (yyx);
                {
                  size_t yysz = yysize + yytnamerr (YY_NULLPTR, yytokenName (yyx));
                  yysize_overflow |= yysz < yysize;
                  yysize = yysz;
                }
              }
        }
    }

  switch (yycount)
    {
#define YYCASE_(N, S)                   \
      case N:                           \
        yyformat = S;                   \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
    }

  {
    size_t yysz = yysize + strlen (yyformat);
    yysize_overflow |= yysz < yysize;
    yysize = yysz;
  }

  if (!yysize_overflow)
    yymsg = (char *) YYMALLOC (yysize);

  if (yymsg)
    {
      char *yyp = yymsg;
      int yyi = 0;
      while ((*yyp = *yyformat))
        {
          if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
            {
              yyp += yytnamerr (yyp, yyarg[yyi++]);
              yyformat += 2;
            }
          else
            {
              yyp++;
              yyformat++;
            }
        }
      yyerror (yymsg);
      YYFREE (yymsg);
    }
  else
    {
      yyerror (YY_("syntax error"));
      yyMemoryExhausted (yystackp);
    }
  }
#endif /* YYERROR_VERBOSE */
  yynerrs += 1;
}

/* Recover from a syntax error on *YYSTACKP, assuming that *YYSTACKP->YYTOKENP,
   yylval, and yylloc are the syntactic category, semantic value, and location
   of the lookahead.  */
static void
yyrecoverSyntaxError (yyGLRStack* yystackp)
{
  size_t yyk;
  int yyj;

  if (yystackp->yyerrState == 3)
    /* We just shifted the error token and (perhaps) took some
       reductions.  Skip tokens until we can proceed.  */
    while (yytrue)
      {
        yySymbol yytoken;
        if (yychar == YYEOF)
          yyFail (yystackp, YY_NULLPTR);
        if (yychar != YYEMPTY)
          {
            yytoken = YYTRANSLATE (yychar);
            yydestruct ("Error: discarding",
                        yytoken, &yylval);
          }
        YYDPRINTF ((stderr, "Reading a token: "));
        yychar = yylex ();
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
        yyj = yypact[yystackp->yytops.yystates[0]->yylrState];
        if (yypact_value_is_default (yyj))
          return;
        yyj += yytoken;
        if (yyj < 0 || YYLAST < yyj || yycheck[yyj] != yytoken)
          {
            if (yydefact[yystackp->yytops.yystates[0]->yylrState] != 0)
              return;
          }
        else if (! yytable_value_is_error (yytable[yyj]))
          return;
      }

  /* Reduce to one stack.  */
  for (yyk = 0; yyk < yystackp->yytops.yysize; yyk += 1)
    if (yystackp->yytops.yystates[yyk] != YY_NULLPTR)
      break;
  if (yyk >= yystackp->yytops.yysize)
    yyFail (yystackp, YY_NULLPTR);
  for (yyk += 1; yyk < yystackp->yytops.yysize; yyk += 1)
    yymarkStackDeleted (yystackp, yyk);
  yyremoveDeletes (yystackp);
  yycompressStack (yystackp);

  /* Now pop stack until we find a state that shifts the error token.  */
  yystackp->yyerrState = 3;
  while (yystackp->yytops.yystates[0] != YY_NULLPTR)
    {
      yyGLRState *yys = yystackp->yytops.yystates[0];
      yyj = yypact[yys->yylrState];
      if (! yypact_value_is_default (yyj))
        {
          yyj += YYTERROR;
          if (0 <= yyj && yyj <= YYLAST && yycheck[yyj] == YYTERROR
              && yyisShiftAction (yytable[yyj]))
            {
              /* Shift the error token.  */
              YY_SYMBOL_PRINT ("Shifting", yystos[yytable[yyj]],
                               &yylval, &yyerrloc);
              yyglrShift (yystackp, 0, yytable[yyj],
                          yys->yyposn, &yylval);
              yys = yystackp->yytops.yystates[0];
              break;
            }
        }
      if (yys->yypred != YY_NULLPTR)
        yydestroyGLRState ("Error: popping", yys);
      yystackp->yytops.yystates[0] = yys->yypred;
      yystackp->yynextFree -= 1;
      yystackp->yyspaceLeft += 1;
    }
  if (yystackp->yytops.yystates[0] == YY_NULLPTR)
    yyFail (yystackp, YY_NULLPTR);
}

#define YYCHK1(YYE)                                                          \
  do {                                                                       \
    switch (YYE) {                                                           \
    case yyok:                                                               \
      break;                                                                 \
    case yyabort:                                                            \
      goto yyabortlab;                                                       \
    case yyaccept:                                                           \
      goto yyacceptlab;                                                      \
    case yyerr:                                                              \
      goto yyuser_error;                                                     \
    default:                                                                 \
      goto yybuglab;                                                         \
    }                                                                        \
  } while (0)

/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
  int yyresult;
  yyGLRStack yystack;
  yyGLRStack* const yystackp = &yystack;
  size_t yyposn;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY;
  yylval = yyval_default;

  if (! yyinitGLRStack (yystackp, YYINITDEPTH))
    goto yyexhaustedlab;
  switch (YYSETJMP (yystack.yyexception_buffer))
    {
    case 0: break;
    case 1: goto yyabortlab;
    case 2: goto yyexhaustedlab;
    default: goto yybuglab;
    }
  yyglrShift (&yystack, 0, 0, 0, &yylval);
  yyposn = 0;

  while (yytrue)
    {
      /* For efficiency, we have two loops, the first of which is
         specialized to deterministic operation (single stack, no
         potential ambiguity).  */
      /* Standard mode */
      while (yytrue)
        {
          yyRuleNum yyrule;
          int yyaction;
          const short int* yyconflicts;

          yyStateNum yystate = yystack.yytops.yystates[0]->yylrState;
          YYDPRINTF ((stderr, "Entering state %d\n", yystate));
          if (yystate == YYFINAL)
            goto yyacceptlab;
          if (yyisDefaultedState (yystate))
            {
              yyrule = yydefaultAction (yystate);
              if (yyrule == 0)
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              YYCHK1 (yyglrReduce (&yystack, 0, yyrule, yytrue));
            }
          else
            {
              yySymbol yytoken;
              if (yychar == YYEMPTY)
                {
                  YYDPRINTF ((stderr, "Reading a token: "));
                  yychar = yylex ();
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

              yygetLRActions (yystate, yytoken, &yyaction, &yyconflicts);
              if (*yyconflicts != 0)
                break;
              if (yyisShiftAction (yyaction))
                {
                  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);
                  yychar = YYEMPTY;
                  yyposn += 1;
                  yyglrShift (&yystack, 0, yyaction, yyposn, &yylval);
                  if (0 < yystack.yyerrState)
                    yystack.yyerrState -= 1;
                }
              else if (yyisErrorAction (yyaction))
                {

                  yyreportSyntaxError (&yystack);
                  goto yyuser_error;
                }
              else
                YYCHK1 (yyglrReduce (&yystack, 0, -yyaction, yytrue));
            }
        }

      while (yytrue)
        {
          yySymbol yytoken_to_shift;
          size_t yys;

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            yystackp->yytops.yylookaheadNeeds[yys] = yychar != YYEMPTY;

          /* yyprocessOneStack returns one of three things:

              - An error flag.  If the caller is yyprocessOneStack, it
                immediately returns as well.  When the caller is finally
                yyparse, it jumps to an error label via YYCHK1.

              - yyok, but yyprocessOneStack has invoked yymarkStackDeleted
                (&yystack, yys), which sets the top state of yys to NULL.  Thus,
                yyparse's following invocation of yyremoveDeletes will remove
                the stack.

              - yyok, when ready to shift a token.

             Except in the first case, yyparse will invoke yyremoveDeletes and
             then shift the next token onto all remaining stacks.  This
             synchronization of the shift (that is, after all preceding
             reductions on all stacks) helps prevent double destructor calls
             on yylval in the event of memory exhaustion.  */

          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            YYCHK1 (yyprocessOneStack (&yystack, yys, yyposn));
          yyremoveDeletes (&yystack);
          if (yystack.yytops.yysize == 0)
            {
              yyundeleteLastStack (&yystack);
              if (yystack.yytops.yysize == 0)
                yyFail (&yystack, YY_("syntax error"));
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));

              yyreportSyntaxError (&yystack);
              goto yyuser_error;
            }

          /* If any yyglrShift call fails, it will fail after shifting.  Thus,
             a copy of yylval will already be on stack 0 in the event of a
             failure in the following loop.  Thus, yychar is set to YYEMPTY
             before the loop to make sure the user destructor for yylval isn't
             called twice.  */
          yytoken_to_shift = YYTRANSLATE (yychar);
          yychar = YYEMPTY;
          yyposn += 1;
          for (yys = 0; yys < yystack.yytops.yysize; yys += 1)
            {
              int yyaction;
              const short int* yyconflicts;
              yyStateNum yystate = yystack.yytops.yystates[yys]->yylrState;
              yygetLRActions (yystate, yytoken_to_shift, &yyaction,
                              &yyconflicts);
              /* Note that yyconflicts were handled by yyprocessOneStack.  */
              YYDPRINTF ((stderr, "On stack %lu, ", (unsigned long int) yys));
              YY_SYMBOL_PRINT ("shifting", yytoken_to_shift, &yylval, &yylloc);
              yyglrShift (&yystack, yys, yyaction, yyposn,
                          &yylval);
              YYDPRINTF ((stderr, "Stack %lu now in state #%d\n",
                          (unsigned long int) yys,
                          yystack.yytops.yystates[yys]->yylrState));
            }

          if (yystack.yytops.yysize == 1)
            {
              YYCHK1 (yyresolveStack (&yystack));
              YYDPRINTF ((stderr, "Returning to deterministic operation.\n"));
              yycompressStack (&yystack);
              break;
            }
        }
      continue;
    yyuser_error:
      yyrecoverSyntaxError (&yystack);
      yyposn = yystack.yytops.yystates[0]->yyposn;
    }

 yyacceptlab:
  yyresult = 0;
  goto yyreturn;

 yybuglab:
  YYASSERT (yyfalse);
  goto yyabortlab;

 yyabortlab:
  yyresult = 1;
  goto yyreturn;

 yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;

 yyreturn:
  if (yychar != YYEMPTY)
    yydestruct ("Cleanup: discarding lookahead",
                YYTRANSLATE (yychar), &yylval);

  /* If the stack is well-formed, pop the stack until it is empty,
     destroying its entries as we go.  But free the stack regardless
     of whether it is well-formed.  */
  if (yystack.yyitems)
    {
      yyGLRState** yystates = yystack.yytops.yystates;
      if (yystates)
        {
          size_t yysize = yystack.yytops.yysize;
          size_t yyk;
          for (yyk = 0; yyk < yysize; yyk += 1)
            if (yystates[yyk])
              {
                while (yystates[yyk])
                  {
                    yyGLRState *yys = yystates[yyk];
                  if (yys->yypred != YY_NULLPTR)
                      yydestroyGLRState ("Cleanup: popping", yys);
                    yystates[yyk] = yys->yypred;
                    yystack.yynextFree -= 1;
                    yystack.yyspaceLeft += 1;
                  }
                break;
              }
        }
      yyfreeGLRStack (&yystack);
    }

  return yyresult;
}

/* DEBUGGING ONLY */
#if YYDEBUG
static void
yy_yypstack (yyGLRState* yys)
{
  if (yys->yypred)
    {
      yy_yypstack (yys->yypred);
      YYFPRINTF (stderr, " -> ");
    }
  YYFPRINTF (stderr, "%d@%lu", yys->yylrState,
             (unsigned long int) yys->yyposn);
}

static void
yypstates (yyGLRState* yyst)
{
  if (yyst == YY_NULLPTR)
    YYFPRINTF (stderr, "<null>");
  else
    yy_yypstack (yyst);
  YYFPRINTF (stderr, "\n");
}

static void
yypstack (yyGLRStack* yystackp, size_t yyk)
{
  yypstates (yystackp->yytops.yystates[yyk]);
}

#define YYINDEX(YYX)                                                         \
    ((YYX) == YY_NULLPTR ? -1 : (yyGLRStackItem*) (YYX) - yystackp->yyitems)


static void
yypdumpstack (yyGLRStack* yystackp)
{
  yyGLRStackItem* yyp;
  size_t yyi;
  for (yyp = yystackp->yyitems; yyp < yystackp->yynextFree; yyp += 1)
    {
      YYFPRINTF (stderr, "%3lu. ",
                 (unsigned long int) (yyp - yystackp->yyitems));
      if (*(yybool *) yyp)
        {
          YYASSERT (yyp->yystate.yyisState);
          YYASSERT (yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Res: %d, LR State: %d, posn: %lu, pred: %ld",
                     yyp->yystate.yyresolved, yyp->yystate.yylrState,
                     (unsigned long int) yyp->yystate.yyposn,
                     (long int) YYINDEX (yyp->yystate.yypred));
          if (! yyp->yystate.yyresolved)
            YYFPRINTF (stderr, ", firstVal: %ld",
                       (long int) YYINDEX (yyp->yystate
                                             .yysemantics.yyfirstVal));
        }
      else
        {
          YYASSERT (!yyp->yystate.yyisState);
          YYASSERT (!yyp->yyoption.yyisState);
          YYFPRINTF (stderr, "Option. rule: %d, state: %ld, next: %ld",
                     yyp->yyoption.yyrule - 1,
                     (long int) YYINDEX (yyp->yyoption.yystate),
                     (long int) YYINDEX (yyp->yyoption.yynext));
        }
      YYFPRINTF (stderr, "\n");
    }
  YYFPRINTF (stderr, "Tops:");
  for (yyi = 0; yyi < yystackp->yytops.yysize; yyi += 1)
    YYFPRINTF (stderr, "%lu: %ld; ", (unsigned long int) yyi,
               (long int) YYINDEX (yystackp->yytops.yystates[yyi]));
  YYFPRINTF (stderr, "\n");
}
#endif

#undef yylval
#undef yychar
#undef yynerrs



#line 3920 "vtkParse.y" /* glr.c:2551  */

#include <string.h>
#include "lex.yy.c"

/* fill in the type name if none given */
const char *type_class(unsigned int type, const char *classname)
{
  if (classname)
    {
    if (classname[0] == '\0')
      {
      switch ((type & VTK_PARSE_BASE_TYPE))
        {
        case 0:
          classname = "auto";
          break;
        case VTK_PARSE_VOID:
          classname = "void";
          break;
        case VTK_PARSE_BOOL:
          classname = "bool";
          break;
        case VTK_PARSE_FLOAT:
          classname = "float";
          break;
        case VTK_PARSE_DOUBLE:
          classname = "double";
          break;
        case VTK_PARSE_LONG_DOUBLE:
          classname = "long double";
          break;
        case VTK_PARSE_CHAR:
          classname = "char";
          break;
        case VTK_PARSE_CHAR16_T:
          classname = "char16_t";
          break;
        case VTK_PARSE_CHAR32_T:
          classname = "char32_t";
          break;
        case VTK_PARSE_WCHAR_T:
          classname = "wchar_t";
          break;
        case VTK_PARSE_UNSIGNED_CHAR:
          classname = "unsigned char";
          break;
        case VTK_PARSE_SIGNED_CHAR:
          classname = "signed char";
          break;
        case VTK_PARSE_SHORT:
          classname = "short";
          break;
        case VTK_PARSE_UNSIGNED_SHORT:
          classname = "unsigned short";
          break;
        case VTK_PARSE_INT:
          classname = "int";
          break;
        case VTK_PARSE_UNSIGNED_INT:
          classname = "unsigned int";
          break;
        case VTK_PARSE_LONG:
          classname = "long";
          break;
        case VTK_PARSE_UNSIGNED_LONG:
          classname = "unsigned long";
          break;
        case VTK_PARSE_LONG_LONG:
          classname = "long long";
          break;
        case VTK_PARSE_UNSIGNED_LONG_LONG:
          classname = "unsigned long long";
          break;
        case VTK_PARSE___INT64:
          classname = "__int64";
          break;
        case VTK_PARSE_UNSIGNED___INT64:
          classname = "unsigned __int64";
          break;
        }
      }
    }

  return classname;
}

/* check whether this is the class we are looking for */
void start_class(const char *classname, int is_struct_or_union)
{
  ClassInfo *outerClass = currentClass;
  pushClass();
  currentClass = (ClassInfo *)malloc(sizeof(ClassInfo));
  vtkParse_InitClass(currentClass);
  currentClass->Name = classname;
  if (is_struct_or_union == 1)
    {
    currentClass->ItemType = VTK_STRUCT_INFO;
    }
  if (is_struct_or_union == 2)
    {
    currentClass->ItemType = VTK_UNION_INFO;
    }

  if (classname && classname[strlen(classname)-1] != '>')
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

/* reached the end of a class definition */
void end_class()
{
  /* add default constructors */
  vtkParse_AddDefaultConstructors(currentClass, data->Strings);

  popClass();
}

/* add a base class to the specified class */
void add_base_class(ClassInfo *cls, const char *name, int al,
  unsigned int extra)
{
  /* "extra" can contain VTK_PARSE_VIRTUAL and VTK_PARSE_PACK */
  if (cls && al == VTK_ACCESS_PUBLIC &&
      (extra & VTK_PARSE_PACK) == 0)
    {
    vtkParse_AddStringToArray(&cls->SuperClasses,
                              &cls->NumberOfSuperClasses,
                              name);
    }
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
    item->Scope = name;
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
void start_enum(const char *name, int is_scoped,
                unsigned int type, const char *basename)
{
  EnumInfo *item;

  currentEnumType = (type ? type : VTK_PARSE_INT);
  currentEnumName = "int";
  currentEnumValue = NULL;

  if (type == 0 && is_scoped)
    {
    type = VTK_PARSE_INT;
    }

  if (name)
    {
    currentEnumName = name;
    item = (EnumInfo *)malloc(sizeof(EnumInfo));
    vtkParse_InitEnum(item);
    item->Name = name;
    item->Comment = vtkstrdup(getComment());
    item->Access = access_level;

    if (currentClass)
      {
      vtkParse_AddEnumToClass(currentClass, item);
      }
    else
      {
      vtkParse_AddEnumToNamespace(currentNamespace, item);
      }

    if (type)
      {
      vtkParse_AddStringToArray(&item->SuperClasses,
                                &item->NumberOfSuperClasses,
                                type_class(type, basename));
      }

    if (is_scoped)
      {
      pushClass();
      currentClass = item;
      }
    }
}

/* finish the enum */
void end_enum()
{
  if (currentClass && currentClass->ItemType == VTK_ENUM_INFO)
    {
    popClass();
    }

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
    currentEnumValue = value;
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
    currentEnumValue = vtkstrdup(text);
    }
  else
    {
    strcpy(text, "0");
    currentEnumValue = "0";
    }

  add_constant(name, currentEnumValue, currentEnumType, currentEnumName, 2);
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

  k = vtkParse_SkipId(valstring);
  if (valstring[k] == '\0')
    {
    is_name = 1;
    }

  if (strcmp(valstring, "true") == 0 || strcmp(valstring, "false") == 0)
    {
    return VTK_PARSE_BOOL;
    }

  if (strcmp(valstring, "nullptr") == 0 || strcmp(valstring, "NULL") == 0)
    {
    return VTK_PARSE_NULLPTR_T;
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
      preprocessor, valstring);

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
      preprocessor, valstring, &val, &is_unsigned);

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
  con->Name = name;
  con->Comment = vtkstrdup(getComment());
  con->Value = value;
  con->Type = type;
  con->TypeName = type_class(type, typeclass);

  if (flag == 2)
    {
    con->IsEnum = 1;
    }

  if (flag == 1)
    {
    /* actually a macro, need to guess the type */
    ValueInfo **cptr = data->Contents->Constants;
    unsigned long n = data->Contents->NumberOfConstants;
    unsigned long i;

    con->Access = VTK_ACCESS_PUBLIC;
    if (con->Type == 0)
      {
      con->Type = guess_constant_type(con->Value);
      }

    for (i = 0; i < n; i++)
      {
      if (strcmp(cptr[i]->Name, con->Name) == 0)
        {
        break;
        }
      }

    if (i == n)
      {
      vtkParse_AddConstantToNamespace(data->Contents, con);
      }
    else
      {
      vtkParse_FreeValue(con);
      }
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

/* guess the type from the ID */
unsigned int guess_id_type(const char *cp)
{
  unsigned int t = 0;

  if (cp)
    {
    size_t i;
    const char *dp;

    i = strlen(cp);
    while (i > 0 && cp[i-1] != ':') { i--; }
    dp = &cp[i];

    if (strcmp(dp, "vtkStdString") == 0 ||
        strcmp(cp, "std::string") == 0)
      {
      t = VTK_PARSE_STRING;
      }
    else if (strcmp(dp, "vtkUnicodeString") == 0)
      {
      t = VTK_PARSE_UNICODE_STRING;
      }
    else if (strncmp(dp, "vtk", 3) == 0)
      {
      t = VTK_PARSE_OBJECT;
      }
    else if (strncmp(dp, "Q", 1) == 0 ||
             strncmp(cp, "Qt::", 4) == 0)
      {
      t = VTK_PARSE_QOBJECT;
      }
    else
      {
      t = VTK_PARSE_UNKNOWN;
      }
    }

  return t;
}

/* add a template parameter to the current template */
void add_template_parameter(
  unsigned int datatype, unsigned int extra, const char *funcSig)
{
  ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(param);
  handle_complex_type(param, datatype, extra, funcSig);
  param->Name = getVarName();
  vtkParse_AddParameterToTemplate(currentTemplate, param);
}

/* add a parameter to a function */
void add_parameter(FunctionInfo *func, unsigned int type,
                   const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *param = (ValueInfo *)malloc(sizeof(ValueInfo));
  vtkParse_InitValue(param);

  param->Type = type;
  param->TypeName = type_class(type, typeclass);

  if (count)
    {
    param->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&param->Dimensions, &param->NumberOfDimensions,
                              vtkstrdup(text));
    }

  add_legacy_parameter(func, param);

  vtkParse_AddParameterToFunction(func, param);
}

/* set the return type for the current function */
void set_return(FunctionInfo *func, unsigned int type,
                const char *typeclass, unsigned long count)
{
  char text[64];
  ValueInfo *val = (ValueInfo *)malloc(sizeof(ValueInfo));

  vtkParse_InitValue(val);
  val->Type = type;
  val->TypeName = type_class(type, typeclass);

  if (count)
    {
    val->Count = count;
    sprintf(text, "%lu", count);
    vtkParse_AddStringToArray(&val->Dimensions, &val->NumberOfDimensions,
                              vtkstrdup(text));
    }

  func->ReturnValue = val;

#ifndef VTK_PARSE_LEGACY_REMOVE
  func->ReturnType = val->Type;
  func->ReturnClass = val->TypeName;
  func->HaveHint = (count > 0);
  func->HintSize = count;
#endif
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

  /* remove specifiers like "friend" and "typedef" */
  datatype &= VTK_PARSE_QUALIFIED_TYPE;

  /* remove the pack specifier caused by "..." */
  if ((extra & VTK_PARSE_PACK) != 0)
    {
    val->IsPack = 1;
    extra ^= VTK_PARSE_PACK;
    }

  /* if "extra" was set, parentheses were involved */
  if ((extra & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
    {
    /* the current type becomes the function return type */
    func = getFunction();
    func->ReturnValue = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(func->ReturnValue);
    func->ReturnValue->Type = datatype;
    func->ReturnValue->TypeName = type_class(datatype, getTypeId());
    if (funcSig) { func->Signature = vtkstrdup(funcSig); }
    val->Function = func;

#ifndef VTK_PARSE_LEGACY_REMOVE
    func->ReturnType = func->ReturnValue->Type;
    func->ReturnClass = func->ReturnValue->TypeName;
#endif

    /* the val type is whatever was inside the parentheses */
    clearTypeId();
    setTypeId(func->Class ? "method" : "function");
    datatype = (extra & (VTK_PARSE_UNQUALIFIED_TYPE | VTK_PARSE_RVALUE));
    }
  else if ((extra & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT)
    {
    datatype = (datatype | VTK_PARSE_BAD_INDIRECT);
    }
  else if ((extra & VTK_PARSE_INDIRECT) != 0)
    {
    extra = (extra & (VTK_PARSE_INDIRECT | VTK_PARSE_RVALUE));

    if ((extra & VTK_PARSE_REF) != 0)
      {
      datatype = (datatype | (extra & (VTK_PARSE_REF | VTK_PARSE_RVALUE)));
      extra = (extra & ~(VTK_PARSE_REF | VTK_PARSE_RVALUE));
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
  val->TypeName = type_class(datatype, getTypeId());

  /* copy contents of all brackets to the ArgDimensions */
  val->NumberOfDimensions = getArrayNDims();
  val->Dimensions = getArray();
  clearArray();

  /* count is the product of the dimensions */
  val->Count = count_from_dimensions(val);
}

/* handle [[attributes]] */
void handle_attribute(const char *att, int pack)
{
  /* the role means "this is what the attribute applies to" */
  int role = getAttributeRole();

  size_t l = 0;
  const char *args = NULL;

  if (!att)
    {
    return;
    }

  /* search for arguments */
  l = vtkParse_SkipId(att);
  while (att[l] == ':' && att[l+1] == ':')
    {
    l += 2;
    l += vtkParse_SkipId(&att[l]);
    }
  if (att[l] == '(')
    {
    args = &att[l];
    }

  /* check for namespace */
  if (strncmp(att, "vtk::", 5) == 0)
    {
    if (args)
      {
      /* no current vtk attributes use arguments */
      print_parser_error("attribute takes no args", att, l);
      exit(1);
      }
    else if (pack)
      {
      /* no current vtk attributes use '...' */
      print_parser_error("attribute takes no ...", att, l);
      exit(1);
      }
    else if (strcmp(att, "vtk::newinstance") == 0 &&
             role == VTK_PARSE_ATTRIB_DECL)
      {
      setTypeMod(VTK_PARSE_NEWINSTANCE);
      }
    else
      {
      print_parser_error("attribute cannot be used here", att, l);
      exit(1);
      }
    }
}

/* add a parameter to the legacy part of the FunctionInfo struct */
void add_legacy_parameter(FunctionInfo *func, ValueInfo *param)
{
#ifndef VTK_PARSE_LEGACY_REMOVE
  unsigned long i = func->NumberOfArguments;

  if (i < MAX_ARGS)
    {
    func->NumberOfArguments = i + 1;
    func->ArgTypes[i] = param->Type;
    func->ArgClasses[i] = param->TypeName;
    func->ArgCounts[i] = param->Count;

    /* legacy wrappers need VTK_PARSE_FUNCTION without POINTER */
    if (param->Type == VTK_PARSE_FUNCTION_PTR)
      {
      /* check for signature "void (*func)(void *)" */
      if (param->Function->NumberOfParameters == 1 &&
          param->Function->Parameters[0]->Type == VTK_PARSE_VOID_PTR &&
          param->Function->Parameters[0]->NumberOfDimensions == 0 &&
          param->Function->ReturnValue->Type == VTK_PARSE_VOID)
        {
        func->ArgTypes[i] = VTK_PARSE_FUNCTION;
        }
      }
    }
  else
    {
    func->ArrayFailure = 1;
    }
#endif
}


/* reject the function, do not output it */
void reject_function()
{
  vtkParse_InitFunction(currentFunction);
  startSig();
  getMacro();
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

  /* friend */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_FRIEND)
    {
    currentFunction->ReturnValue->Type ^= VTK_PARSE_FRIEND;
    output_friend_function();
    return;
    }

  /* typedef */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_TYPEDEF)
    {
    ValueInfo *item = (ValueInfo *)malloc(sizeof(ValueInfo));
    vtkParse_InitValue(item);
    item->ItemType = VTK_TYPEDEF_INFO;
    item->Access = access_level;
    item->Type = VTK_PARSE_FUNCTION;
    item->TypeName = "function";
    item->Function = currentFunction;
    item->Name = currentFunction->Name;

    currentFunction->ReturnValue->Type ^= VTK_PARSE_TYPEDEF;
    currentFunction->Class = NULL;

    if (currentClass)
      {
      vtkParse_AddTypedefToClass(currentClass, item);
      }
    else
      {
      vtkParse_AddTypedefToNamespace(currentNamespace, item);
      }

    currentFunction = (FunctionInfo *)malloc(sizeof(FunctionInfo));
    reject_function();
    return;
    }

  /* static */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_STATIC)
    {
    currentFunction->IsStatic = 1;
    }

  /* virtual */
  if (currentFunction->ReturnValue &&
      currentFunction->ReturnValue->Type & VTK_PARSE_VIRTUAL)
    {
    currentFunction->IsVirtual = 1;
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

  /* a void argument is the same as no parameters */
  if (currentFunction->NumberOfParameters == 1 &&
      (currentFunction->Parameters[0]->Type & VTK_PARSE_UNQUALIFIED_TYPE) ==
      VTK_PARSE_VOID)
    {
    currentFunction->NumberOfParameters = 0;
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
    }
  else
    {
    currentFunction->Access = VTK_ACCESS_PUBLIC;
    }

#ifndef VTK_PARSE_LEGACY_REMOVE
  /* a void argument is the same as no parameters */
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
    currentFunction->ReturnClass = "void";
    }

  /* set legacy flags */
  if (currentClass)
    {
    currentFunction->IsPublic = (access_level == VTK_ACCESS_PUBLIC);
    currentFunction->IsProtected = (access_level == VTK_ACCESS_PROTECTED);
    }
  else
    {
    currentFunction->IsPublic = 1;
    currentFunction->IsProtected = 0;
    }

  /* check for too many parameters */
  if (currentFunction->NumberOfParameters > MAX_ARGS)
    {
    currentFunction->ArrayFailure = 1;
    }

  /* also legacy: tell old wrappers that multi-dimensional arrays are bad */
  for (i = 0; i < currentFunction->NumberOfParameters; i++)
    {
    ValueInfo *param = currentFunction->Parameters[i];
    if ((param->Type & VTK_PARSE_POINTER_MASK) != 0)
      {
      if (((param->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION) ||
          ((param->Type & VTK_PARSE_INDIRECT) == VTK_PARSE_BAD_INDIRECT) ||
          ((param->Type & VTK_PARSE_POINTER_LOWMASK) != VTK_PARSE_POINTER))
       {
       currentFunction->ArrayFailure = 1;
       }
      }

    /* allow only "void (*func)(void *)" as a valid function pointer */
    if ((param->Type & VTK_PARSE_BASE_TYPE) == VTK_PARSE_FUNCTION)
      {
      if (i != 0 || param->Type != VTK_PARSE_FUNCTION_PTR ||
          currentFunction->NumberOfParameters != 2 ||
          currentFunction->Parameters[1]->Type != VTK_PARSE_VOID_PTR ||
          param->Function->NumberOfParameters != 1 ||
          param->Function->Parameters[0]->Type != VTK_PARSE_VOID_PTR ||
          param->Function->Parameters[0]->NumberOfDimensions != 0 ||
          param->Function->ReturnValue->Type != VTK_PARSE_VOID)
        {
        currentFunction->ArrayFailure = 1;
        }
      }
    }
#endif /* VTK_PARSE_LEGACY_REMOVE */

  if (currentClass)
    {
    /* is it a delete function */
    if (currentFunction->Name && !strcmp("Delete",currentFunction->Name))
      {
      currentClass->HasDelete = 1;
      }

    currentFunction->Class = currentClass->Name;
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
        if (currentNamespace->Functions[i]->NumberOfParameters ==
            currentFunction->NumberOfParameters)
          {
          for (j = 0; j < currentFunction->NumberOfParameters; j++)
            {
            if (currentNamespace->Functions[i]->Parameters[j]->Type ==
                currentFunction->Parameters[j]->Type)
              {
              if (currentFunction->Parameters[j]->Type == VTK_PARSE_OBJECT &&
                  strcmp(currentNamespace->Functions[i]->Parameters[j]->TypeName,
                         currentFunction->Parameters[j]->TypeName) == 0)
                {
                break;
                }
              }
            }
          if (j == currentFunction->NumberOfParameters)
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

/* output a function that is not a method of the current class */
void output_friend_function()
{
  ClassInfo *tmpc = currentClass;
  currentClass = NULL;
  output_function();
  currentClass = tmpc;
}

void outputSetVectorMacro(const char *var, unsigned int paramType,
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

  sprintf(ntext, "%lu", n);

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
    add_parameter(currentFunction, paramType, getTypeId(), 0);
    }
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();

  currentFunction->Macro = mnames[m];
  currentFunction->Name = vtkstrcat("Set", var);
  currentFunction->Signature =
    vtkstrcat7("void ", currentFunction->Name, "(", typeText,
               " a[", ntext, "]);");
  add_parameter(currentFunction, (VTK_PARSE_POINTER | paramType),
                getTypeId(), n);
  set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
  output_function();
}

void outputGetVectorMacro(const char *var, unsigned int paramType,
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
  set_return(currentFunction, (VTK_PARSE_POINTER | paramType), getTypeId(), n);
  output_function();
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

/* Set a flag to recurse into included files */
void vtkParse_SetRecursive(int option)
{
  if (option)
    {
    Recursive = 1;
    }
  else
    {
    Recursive = 0;
    }
}

/* Set the global variable that stores the current executable */
void vtkParse_SetCommandName(const char *name)
{
  CommandName = name;
}

/* Parse a header file and return a FileInfo struct */
FileInfo *vtkParse_ParseFile(
  const char *filename, FILE *ifile, FILE *errfile)
{
  unsigned long i, j;
  int ret;
  FileInfo *file_info;
  char *main_class;

  /* "data" is a global variable used by the parser */
  data = (FileInfo *)malloc(sizeof(FileInfo));
  vtkParse_InitFile(data);
  data->Strings = (StringCache *)malloc(sizeof(StringCache));
  vtkParse_InitStringCache(data->Strings);

  /* "preprocessor" is a global struct used by the parser */
  preprocessor = (PreprocessInfo *)malloc(sizeof(PreprocessInfo));
  vtkParsePreprocess_Init(preprocessor, filename);
  preprocessor->Strings = data->Strings;
  vtkParsePreprocess_AddStandardMacros(preprocessor, VTK_PARSE_NATIVE);

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(preprocessor, IncludeDirectories[i]);
    }

  /* add macros specified on the command line */
  for (i = 0; i < NumberOfDefinitions; i++)
    {
    const char *cp = Definitions[i];

    if (*cp == 'U')
      {
      vtkParsePreprocess_RemoveMacro(preprocessor, &cp[1]);
      }
    else if (*cp == 'D')
      {
      const char *definition = &cp[1];
      while (*definition != '=' && *definition != '\0')
        {
        definition++;
        }
      if (*definition == '=')
        {
        definition++;
        }
      else
        {
        definition = NULL;
        }
      vtkParsePreprocess_AddMacro(preprocessor, &cp[1], definition);
      }
    }

  /* should explicitly check for vtkConfigure.h, or even explicitly load it */
#ifdef VTK_USE_64BIT_IDS
  vtkParsePreprocess_AddMacro(preprocessor, "VTK_USE_64BIT_IDS", NULL);
#endif

  data->FileName = vtkstrdup(filename);

  clearComment();

  namespaceDepth = 0;
  currentNamespace = (NamespaceInfo *)malloc(sizeof(NamespaceInfo));
  vtkParse_InitNamespace(currentNamespace);
  data->Contents = currentNamespace;

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

  if (ret)
    {
    return NULL;
    }

  free(currentFunction);
  yylex_destroy();

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
      data->MainClass = currentNamespace->Classes[i];
      break;
      }
    }
  free(main_class);

  /* assign doxygen comments to their targets */
  assignComments(data->Contents);

  vtkParsePreprocess_Free(preprocessor);
  preprocessor = NULL;
  macroName = NULL;

  file_info = data;
  data = NULL;

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

          if ((strcmp(h_func, func_info->Name) == 0) &&
              func_info->ReturnValue &&
              (type == ((func_info->ReturnValue->Type & ~VTK_PARSE_REF) &
                        VTK_PARSE_UNQUALIFIED_TYPE)))
            {
            /* types that hints are accepted for */
            switch (func_info->ReturnValue->Type & VTK_PARSE_UNQUALIFIED_TYPE)
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
                if (func_info->ReturnValue->NumberOfDimensions == 0)
                  {
                  char text[64];
                  sprintf(text, "%lu", h_value);
                  func_info->ReturnValue->Count = h_value;
                  vtkParse_AddStringToArray(
                    &func_info->ReturnValue->Dimensions,
                    &func_info->ReturnValue->NumberOfDimensions,
                    vtkParse_CacheString(
                      file_info->Strings, text, strlen(text)));
#ifndef VTK_PARSE_LEGACY_REMOVE
                  func_info->HaveHint = 1;
                  func_info->HintSize = h_value;
#endif
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
  vtkParse_FreeFile(file_info);
  vtkParse_FreeStringCache(file_info->Strings);
  free(file_info->Strings);
  free(file_info);
}

/** Define a preprocessor macro. Function macros are not supported.  */
void vtkParse_DefineMacro(const char *name, const char *definition)
{
  size_t n = vtkParse_SkipId(name);
  size_t l;
  char *cp;

  if (definition == NULL)
    {
    definition = "";
    }

  l = n + strlen(definition) + 2;
  cp = (char *)malloc(l + 1);
  cp[0] = 'D';
  strncpy(&cp[1], name, n);
  cp[n+1] = '\0';
  if (definition[0] != '\0')
    {
    cp[n+1] = '=';
    strcpy(&cp[n+2], definition);
    }
  cp[l] = '\0';

  vtkParse_AddStringToArray(&Definitions, &NumberOfDefinitions, cp);
}

/** Undefine a preprocessor macro.  */
void vtkParse_UndefineMacro(const char *name)
{
  size_t n = vtkParse_SkipId(name);
  char *cp;

  cp = (char *)malloc(n+2);
  cp[0] = 'U';
  strncpy(&cp[1], name, n);
  cp[n+1] = '\0';

  vtkParse_AddStringToArray(&Definitions, &NumberOfDefinitions, cp);
}

/** Add an include directory, for use with the "-I" option.  */
void vtkParse_IncludeDirectory(const char *dirname)
{
  size_t n = strlen(dirname);
  char *cp;
  unsigned long i;

  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    if (strncmp(IncludeDirectories[i], dirname, n) == 0 &&
        IncludeDirectories[i][n] == '\0')
      {
      return;
      }
    }

  cp = (char *)malloc(n+1);
  strcpy(cp, dirname);

  vtkParse_AddStringToArray(
    &IncludeDirectories, &NumberOfIncludeDirectories, cp);
}

/** Return the full path to a header file.  */
const char *vtkParse_FindIncludeFile(const char *filename)
{
  static StringCache cache = {0, 0, 0, 0};
  static PreprocessInfo info = {0, 0, 0, 0, 0, 0, &cache, 0, 0, 0};
  int val;
  unsigned long i;

  /* add include files specified on the command line */
  for (i = 0; i < NumberOfIncludeDirectories; i++)
    {
    vtkParsePreprocess_IncludeDirectory(&info, IncludeDirectories[i]);
    }

  return vtkParsePreprocess_FindIncludeFile(&info, filename, 0, &val);
}
