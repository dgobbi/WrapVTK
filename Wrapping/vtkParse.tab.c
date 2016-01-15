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


#line 1728 "vtkParse.tab.c" /* glr.c:207  */

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
#line 1705 "vtkParse.y" /* glr.c:212  */

  const char   *str;
  unsigned int  integer;

#line 1897 "vtkParse.tab.c" /* glr.c:212  */
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

#line 1925 "vtkParse.tab.c" /* glr.c:230  */

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
#define YYLAST   9052

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  275
/* YYNRULES -- Number of rules.  */
#define YYNRULES  706
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1188
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
       0,  1881,  1881,  1883,  1885,  1884,  1895,  1896,  1897,  1898,
    1899,  1900,  1901,  1902,  1903,  1904,  1905,  1906,  1907,  1908,
    1909,  1910,  1911,  1912,  1915,  1916,  1917,  1918,  1919,  1920,
    1923,  1924,  1931,  1938,  1939,  1939,  1943,  1950,  1951,  1954,
    1955,  1956,  1959,  1960,  1963,  1963,  1978,  1977,  1983,  1989,
    1988,  1993,  1999,  2000,  2001,  2004,  2006,  2008,  2011,  2012,
    2015,  2016,  2018,  2020,  2019,  2028,  2032,  2033,  2034,  2037,
    2038,  2039,  2040,  2041,  2042,  2043,  2044,  2045,  2046,  2047,
    2048,  2049,  2050,  2051,  2052,  2055,  2056,  2057,  2058,  2059,
    2062,  2063,  2064,  2065,  2068,  2069,  2072,  2074,  2077,  2082,
    2083,  2086,  2087,  2090,  2091,  2092,  2103,  2104,  2105,  2109,
    2110,  2114,  2114,  2127,  2133,  2141,  2142,  2143,  2146,  2147,
    2147,  2151,  2152,  2154,  2155,  2156,  2156,  2164,  2168,  2169,
    2172,  2174,  2176,  2177,  2180,  2181,  2189,  2190,  2193,  2194,
    2196,  2198,  2200,  2204,  2206,  2207,  2210,  2213,  2214,  2217,
    2218,  2217,  2222,  2263,  2266,  2267,  2268,  2270,  2272,  2274,
    2278,  2281,  2281,  2313,  2316,  2315,  2333,  2335,  2334,  2339,
    2341,  2339,  2343,  2345,  2343,  2347,  2350,  2347,  2361,  2362,
    2365,  2366,  2368,  2369,  2372,  2372,  2382,  2383,  2391,  2392,
    2393,  2394,  2397,  2400,  2401,  2402,  2405,  2406,  2407,  2410,
    2411,  2412,  2416,  2417,  2418,  2419,  2422,  2423,  2424,  2428,
    2433,  2427,  2445,  2449,  2449,  2461,  2460,  2469,  2473,  2476,
    2485,  2486,  2489,  2489,  2490,  2491,  2497,  2502,  2503,  2504,
    2507,  2510,  2511,  2513,  2514,  2517,  2517,  2525,  2526,  2527,
    2530,  2532,  2533,  2537,  2536,  2548,  2549,  2548,  2568,  2568,
    2572,  2573,  2576,  2577,  2580,  2586,  2587,  2587,  2590,  2591,
    2591,  2593,  2595,  2599,  2601,  2599,  2625,  2626,  2629,  2629,
    2631,  2631,  2640,  2643,  2713,  2714,  2716,  2717,  2717,  2720,
    2723,  2724,  2728,  2739,  2739,  2757,  2758,  2762,  2764,  2764,
    2782,  2782,  2784,  2788,  2789,  2790,  2789,  2795,  2797,  2798,
    2799,  2800,  2801,  2802,  2805,  2806,  2810,  2811,  2815,  2816,
    2820,  2821,  2822,  2823,  2826,  2827,  2830,  2830,  2833,  2834,
    2837,  2837,  2841,  2842,  2842,  2849,  2850,  2853,  2854,  2855,
    2856,  2857,  2860,  2862,  2864,  2868,  2870,  2872,  2874,  2876,
    2878,  2880,  2880,  2885,  2888,  2891,  2894,  2894,  2902,  2902,
    2910,  2911,  2912,  2913,  2914,  2915,  2916,  2917,  2918,  2919,
    2920,  2921,  2922,  2923,  2924,  2925,  2926,  2927,  2928,  2929,
    2930,  2931,  2938,  2939,  2940,  2941,  2942,  2943,  2944,  2950,
    2951,  2954,  2955,  2957,  2958,  2961,  2962,  2965,  2966,  2967,
    2968,  2971,  2972,  2973,  2974,  2975,  2979,  2980,  2981,  2984,
    2985,  2988,  2989,  2997,  3000,  3000,  3002,  3002,  3006,  3007,
    3009,  3013,  3014,  3016,  3016,  3018,  3020,  3024,  3027,  3027,
    3029,  3029,  3033,  3036,  3036,  3038,  3038,  3042,  3043,  3045,
    3047,  3049,  3051,  3053,  3057,  3058,  3061,  3062,  3063,  3064,
    3065,  3066,  3067,  3068,  3069,  3070,  3071,  3072,  3073,  3074,
    3075,  3076,  3077,  3078,  3079,  3080,  3081,  3082,  3085,  3086,
    3087,  3088,  3089,  3090,  3091,  3092,  3093,  3094,  3095,  3096,
    3097,  3098,  3099,  3119,  3120,  3121,  3122,  3125,  3129,  3133,
    3133,  3137,  3138,  3153,  3154,  3170,  3171,  3174,  3174,  3174,
    3181,  3181,  3191,  3192,  3192,  3191,  3201,  3201,  3211,  3211,
    3220,  3220,  3220,  3253,  3252,  3263,  3264,  3264,  3263,  3273,
    3291,  3291,  3296,  3296,  3301,  3301,  3306,  3306,  3311,  3311,
    3316,  3316,  3321,  3321,  3326,  3326,  3331,  3331,  3348,  3348,
    3362,  3399,  3437,  3474,  3475,  3482,  3483,  3484,  3485,  3486,
    3487,  3488,  3489,  3490,  3491,  3492,  3493,  3496,  3497,  3498,
    3499,  3500,  3501,  3502,  3503,  3504,  3505,  3506,  3507,  3508,
    3509,  3510,  3511,  3512,  3513,  3514,  3515,  3516,  3517,  3518,
    3519,  3520,  3521,  3522,  3523,  3524,  3525,  3526,  3527,  3528,
    3529,  3532,  3533,  3534,  3535,  3536,  3537,  3538,  3539,  3540,
    3541,  3542,  3543,  3544,  3545,  3546,  3547,  3548,  3549,  3550,
    3551,  3552,  3553,  3554,  3555,  3556,  3557,  3558,  3559,  3560,
    3563,  3564,  3565,  3566,  3567,  3568,  3569,  3570,  3571,  3578,
    3579,  3582,  3583,  3584,  3585,  3585,  3586,  3589,  3590,  3593,
    3594,  3595,  3596,  3626,  3626,  3627,  3628,  3629,  3630,  3653,
    3654,  3657,  3658,  3659,  3660,  3663,  3664,  3665,  3668,  3669,
    3671,  3672,  3674,  3675,  3678,  3679,  3682,  3683,  3684,  3688,
    3687,  3701,  3702,  3705,  3705,  3707,  3707,  3711,  3711,  3713,
    3713,  3715,  3715,  3719,  3719,  3724,  3725,  3727,  3728,  3731,
    3732,  3735,  3736,  3739,  3740,  3741,  3742,  3743,  3744,  3745,
    3746,  3746,  3746,  3746,  3746,  3747,  3748,  3749,  3750,  3751,
    3754,  3757,  3758,  3761,  3764,  3764,  3764
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
  "initializer", "$@36", "$@37", "variable_declaration",
  "init_declarator_id", "opt_declarator_list", "declarator_list_cont",
  "$@38", "init_declarator", "opt_ptr_operator_seq",
  "direct_abstract_declarator", "$@39", "opt_declarator_id",
  "direct_declarator", "$@40", "lp_or_la", "$@41",
  "opt_array_or_parameters", "$@42", "$@43", "function_qualifiers",
  "abstract_declarator", "declarator", "declarator_id", "bitfield_size",
  "opt_array_decorator_seq", "array_decorator_seq", "$@44",
  "array_decorator_seq_impl", "array_decorator", "$@45",
  "array_size_specifier", "$@46", "id_expression", "unqualified_id",
  "qualified_id", "nested_name_specifier", "$@47", "tilde_sig",
  "identifier_sig", "scope_operator_sig", "template_id", "$@48",
  "decltype_specifier", "$@49", "simple_id", "identifier",
  "opt_decl_specifier_seq", "decl_specifier2", "decl_specifier_seq",
  "decl_specifier", "storage_class_specifier", "function_specifier",
  "cv_qualifier", "cv_qualifier_seq", "store_type", "store_type_specifier",
  "$@50", "$@51", "type_specifier", "trailing_type_specifier", "$@52",
  "trailing_type_specifier_seq", "trailing_type_specifier_seq2", "$@53",
  "$@54", "tparam_type", "tparam_type_specifier2", "$@55", "$@56",
  "tparam_type_specifier", "simple_type_specifier", "type_name",
  "primitive_type", "ptr_operator_seq", "reference", "rvalue_reference",
  "pointer", "$@57", "ptr_cv_qualifier_seq", "pointer_seq",
  "attribute_specifier_seq", "attribute_specifier", "$@58", "$@59",
  "declaration_macro", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73", "$@74",
  "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "constant_expression_item", "$@82",
  "common_bracket_item", "common_bracket_item_no_scope_operator",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig",
  "$@83", "right_angle_bracket", "brackets_sig", "$@84", "$@85",
  "parentheses_sig", "$@86", "$@87", "$@88", "braces_sig", "$@89",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_item_no_angle", "ignored_braces",
  "ignored_brackets", "ignored_parentheses", "ignored_left_parenthesis", YY_NULLPTR
};
#endif

#define YYPACT_NINF -933
#define YYTABLE_NINF -660

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
    -933,    95,   115,  -933,  -933,  7050,   129,   159,   190,   290,
     295,   361,   510,   -42,    -7,   121,  -933,  -933,  -933,  -933,
     325,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
      72,  -933,  4421,  -933,  -933,  8695,   411,  2030,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,   128,   147,   157,   166,   188,   202,
     205,   223,   235,   288,   299,   300,   -15,   -11,     4,    40,
     112,   172,   179,   198,   220,   224,   228,   244,   259,   270,
     283,   298,   303,   307,   335,   344,   367,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,   170,  -933,  -933,  -933,  -933,  -933,
    -933,  8362,  -933,    27,    27,    27,    27,  -933,   375,  8695,
    -933,   240,  -933,   382,  7714,  1891,   435,  7883,    19,   154,
    -933,   377,  8473,  -933,  -933,  -933,  -933,   231,   171,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   386,
    4889,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,    26,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,    58,  7883,     7,   165,   174,   181,   191,   192,   195,
     516,  -933,  -933,  -933,  -933,  -933,  7906,   435,   435,  8695,
     231,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   394,
       7,   165,   174,   181,   191,   192,   195,  -933,  -933,  -933,
    7883,  7883,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,   405,   406,  -933,  7714,  7883,   435,
     435,  1520,  -933,  -933,  -933,  1520,  1520,  -933,  1520,  1520,
    1520,  1520,  1520,  1520,  1520,  1520,  1520,  1520,  1520,  1520,
    1520,  1520,  7278,   408,  8131,  7278,  -933,  1562,   402,  7883,
    -933,  -933,  -933,  -933,  -933,  -933,  8362,  -933,  -933,  8584,
     231,   407,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  8695,  -933,  -933,   526,  -933,  -933,  -933,  -933,   410,
     435,   435,   435,  -933,  -933,  -933,  -933,   377,  -933,  -933,
    -933,  -933,   526,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  7714,  -933,  -933,   526,  -933,  -933,  -933,  7954,  -933,
     284,    54,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
     322,  -933,   526,   526,  5825,  -933,  -933,  2237,  2393,  -933,
    -933,    84,  -933,  2549,  3641,  2705,  -933,  -933,  -933,  -933,
    -933,  -933,  7510,  8251,  7510,  7690,  -933,  -933,  -933,  -933,
    -933,  -933,  8019,  -933,  2861,   389,   418,  -933,   420,  -933,
      97,  -933,  -933,  6761,  7714,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,   416,  1520,  1520,  1520,   424,   427,  1520,   428,
     432,   437,   443,   446,   453,   455,   456,   457,   459,   460,
     433,   466,   461,  -933,  -933,   423,  -933,   231,  -933,  -933,
    -933,  -933,  -933,  -933,    57,  -933,  8939,   659,   435,   435,
     475,  1520,  -933,  -933,  -933,   -23,  -933,  7761,  8584,  7954,
    7883,   476,  3017,   474,  8324,   746,   407,  -933,  -933,  -933,
    -933,  -933,  7278,  8251,  7278,  7690,  -933,  -933,   526,  -933,
     481,  -933,  -933,  -933,  1670,  -933,  -933,   473,  -933,  7714,
     238,  -933,  -933,  -933,   483,  8019,  -933,   478,   231,   526,
     526,   526,  -933,  -933,  1930,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   477,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   484,
    3797,  -933,  -933,   479,  -933,  -933,  -933,  -933,    96,  -933,
    8806,   234,   582,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
     526,   493,  -933,   231,    71,   494,   160,  7510,  7510,   242,
     266,  -933,  -933,  -933,  -933,   497,   435,  -933,  -933,  -933,
     631,   491,   492,    33,  -933,  -933,   496,  -933,   495,  -933,
    -933,  -933,  -933,  -933,  -933,   501,   500,   502,  -933,  -933,
     503,  8695,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  7883,  -933,   507,  -933,   526,   113,
    7643,  -933,  -933,   509,   526,  -933,   435,   435,  8939,  -933,
     306,  -933,   508,  8695,   514,   526,  -933,  7714,   512,  -933,
      70,  -933,  -933,   513,   573,  -933,   435,  -933,   474,  5981,
     522,    83,   523,   -23,  1930,  -933,   481,  -933,  -933,    42,
     108,  -933,  -933,   515,    37,  -933,  -933,  -933,  -933,  -933,
    6293,  -933,  -933,  -933,   481,  -933,  -933,  -933,   524,  -933,
    -933,  -933,  -933,  -933,  7883,  7883,  7883,  -933,   435,   435,
    8695,   231,   171,  -933,  -933,  -933,  -933,   231,   234,  5045,
    5201,  5357,  -933,   530,  -933,  -933,  -933,   536,   537,  -933,
     171,  -933,    65,  -933,   538,  8695,  -933,   528,   531,  -933,
    -933,  -933,  -933,  8695,  -933,  -933,  -933,  8695,  8695,  -933,
     539,  8695,  8695,  8695,  8695,  8695,  8695,  8695,  8695,  8695,
    8695,   540,  -933,  -933,  -933,  -933,  -933,   544,  -933,  -933,
    -933,   506,   546,  -933,   642,   601,  -933,   526,  -933,  -933,
    1520,  -933,  -933,  -933,   354,  7883,   601,  3173,  -933,  -933,
     547,  -933,  8695,  -933,  -933,   548,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,   553,  -933,   108,
    -933,  -933,  -933,  -933,  -933,  -933,    93,  -933,    58,  -933,
    -933,  -933,  -933,   515,  -933,   451,  -933,    53,   171,  -933,
    6137,  -933,  6293,  -933,  -933,  -933,   309,  -933,  5513,  4577,
    5669,  -933,    84,  -933,  -933,  -933,  -933,  8019,  -933,  -933,
    -933,  -933,  -933,   231,  -933,  -933,  -933,  -933,  -933,  -933,
     474,  -933,   231,  -933,  -933,   550,  8695,  -933,   551,  8695,
    -933,   554,   556,   557,   558,   559,   560,   564,   569,   555,
     572,  -933,   578,  6916,  -933,  7883,  -933,  -933,  -933,  7883,
    -933,  7643,   526,  -933,  6293,  -933,   586,  -933,  -933,  -933,
    -933,   526,   644,   231,   108,  -933,  -933,  -933,  -933,   474,
      58,  8917,  -933,  -933,  -933,  -933,   584,  -933,  -933,  -933,
    -933,  -933,  -933,   474,  -933,  6605,  -933,  -933,  -933,  -933,
     585,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   309,  -933,
     593,    61,  1930,   593,  -933,   591,   599,  -933,  -933,   602,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
     731,   733,  -933,  7300,    81,  7835,    70,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  7184,
    -933,    27,  -933,  -933,  -933,   622,   410,  7714,  7416,   231,
    -933,   601,  1840,   601,   546,  6293,  4733,  -933,   735,  -933,
    -933,  -933,  -933,  -933,   526,  5981,   640,  -933,  8917,  -933,
    -933,   171,   638,  6293,   643,  -933,   474,  -933,  1930,  -933,
    -933,  -933,  -933,  -933,   645,   231,  -933,   593,  -933,  -933,
     649,  -933,   650,   651,   652,  -933,  -933,  -933,  1258,    27,
     410,  7532,   601,  -933,  -933,  -933,  -933,  7184,  -933,  -933,
    7532,  -933,  -933,  -933,  -933,  7714,  7954,  -933,  -933,  -933,
      70,   108,  -933,   284,  -933,  -933,  -933,  -933,  -933,  -933,
    6293,  -933,   653,  6449,  -933,  -933,  -933,  -933,  -933,  3953,
    -933,  -933,  -933,  8066,  -933,  -933,  1258,  -933,  -933,  7954,
    7532,    32,  -933,  -933,   648,  -933,  -933,   526,  -933,  1930,
     526,   526,  -933,  6449,  -933,   309,   355,  -933,  -933,  -933,
      85,  -933,  8066,  -933,  8204,  -933,    63,  -933,  1930,   526,
    -933,  -933,  -933,  -933,    70,    70,  3329,  4109,   347,    55,
    8204,    98,  -933,  -933,  3485,  -933,  -933,  -933,  -933,  -933,
    -933,    60,   347,  -933,   355,  4265,  -933,  -933
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const unsigned short int yydefact[] =
{
       3,     0,     4,     1,   485,     0,   440,   441,   442,   436,
     437,   438,   439,   444,   445,   443,   487,    53,    52,    54,
     115,   399,   400,   391,   394,   395,   397,   398,   396,   390,
     392,   218,     0,   348,   413,     0,     0,     0,   345,   458,
     459,   460,   461,   462,   467,   468,   469,   470,   463,   464,
     465,   466,   471,   472,   456,   457,   446,   447,   448,   449,
     450,   451,   452,   453,   454,   455,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    23,   343,     5,
      19,    20,    13,    11,    12,     9,    37,    17,   379,    44,
     485,    10,    16,   379,     0,   485,    14,   136,     7,     6,
       8,     0,    18,     0,     0,     0,     0,   206,     0,     0,
      15,     0,   325,   485,     0,     0,     0,     0,   485,   412,
     327,   344,     0,   485,   387,   388,   389,   178,   280,   404,
     408,   411,   485,   485,   486,    21,   639,   117,   116,   393,
       0,   440,   441,   442,   436,   437,   438,   439,   705,   706,
     616,   611,   612,   613,   610,   614,   615,   617,   618,   444,
     445,   443,   675,   584,   583,   585,   603,   587,   589,   588,
     590,   591,   592,   595,   596,   594,   593,   599,   602,   586,
     604,   605,   597,   582,   581,   601,   600,   557,   558,   598,
     608,   607,   606,   609,   559,   560,   561,   689,   562,   563,
     564,   570,   571,   565,   566,   567,   568,   569,   572,   573,
     574,   575,   576,   577,   578,   579,   580,   687,   686,   699,
     456,   457,   446,   447,   448,   449,   450,   451,   452,   453,
     454,   455,   675,   693,   690,   694,   704,   164,   675,   553,
     554,   548,   692,   547,   549,   550,   551,   552,   555,   556,
     691,   698,   697,   688,   695,   696,   677,   683,   685,   684,
     675,     0,     0,   440,   441,   442,   436,   437,   438,   439,
     392,   379,   485,   379,   485,   485,     0,   485,   412,     0,
     178,   372,   374,   373,   377,   378,   376,   375,   675,    34,
     352,   350,   351,   355,   356,   354,   353,   359,   358,   357,
       0,     0,   370,   371,   360,   361,   362,   363,   364,   365,
     366,   367,   368,   369,     0,   485,   326,     0,     0,   328,
     329,     0,   492,   496,   498,     0,     0,   505,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   280,     0,    51,   280,   111,   118,     0,     0,
      27,    38,    24,   485,    26,    28,     0,    25,    29,     0,
     178,   250,   239,   675,   188,   238,   190,   191,   189,   209,
     485,     0,   212,    22,   416,   341,   196,   194,   245,   332,
       0,   328,   329,   330,    59,   331,    58,     0,   335,   333,
     334,   336,   415,   337,   346,   379,   485,   379,   485,   137,
     207,     0,   485,   406,   385,   290,   292,   179,     0,   276,
     266,   178,   485,   485,   485,   403,   281,   473,   474,   483,
     475,   379,   435,   434,   488,     3,   677,     0,     0,   662,
     661,   169,   163,     0,     0,     0,   669,   671,   667,   349,
     485,   393,   280,    51,   280,   118,   332,   379,   379,   152,
     148,   144,     0,   147,     0,     0,     0,   155,     0,   153,
       0,   157,   156,     0,     0,   352,   350,   351,   355,   356,
     354,   353,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   384,   383,     0,   276,   178,   485,   381,
     382,    62,    40,    49,   409,   485,     0,     0,    59,     0,
       0,   123,   107,   119,   114,   485,   485,     0,     0,     0,
       0,     0,     0,   256,     0,     0,   250,   248,   338,   339,
     340,   650,   280,    51,   280,   118,   197,   195,   386,   379,
     481,   208,   213,   485,     0,   192,   220,   314,   485,     0,
       0,   268,   273,   267,     0,     0,   306,     0,   178,   478,
     477,   479,   476,   484,   405,   665,   644,   628,   673,   646,
     633,   647,   642,   663,   643,   634,   638,   637,     0,   632,
     635,   636,   641,   627,   645,   640,   629,   630,   631,     4,
       0,   680,   682,     0,   676,   679,   681,   700,     0,   166,
       0,     0,     0,   701,    31,   678,   703,   639,   639,   639,
     414,     0,   144,   178,   409,     0,   485,   280,   280,     0,
     314,   485,   328,   329,    33,     0,     0,     3,   160,   161,
       0,   557,   558,     0,   542,   541,     0,   539,     0,   540,
     217,   546,   159,   158,   490,     0,     0,     0,   500,   503,
       0,     0,   510,   514,   518,   522,   512,   516,   520,   524,
     526,   528,   530,   531,     0,    42,   275,   279,   380,    63,
       0,    61,    39,    48,    57,   485,    59,     0,     0,   109,
       0,   121,   124,     0,   113,   410,   485,     0,   251,   252,
       0,   675,   237,     0,   263,   409,     0,   246,   256,     0,
       0,   409,     0,   485,   407,   401,   482,   291,   220,     0,
     233,   287,   315,     0,   308,   198,   193,   485,   272,   277,
       0,   271,   288,   307,   481,   639,   652,   639,     0,    32,
      30,   702,   167,   165,     0,     0,     0,   430,   429,   428,
       0,   178,   280,   423,   427,   180,   181,   178,     0,     0,
       0,     0,   139,   143,   146,   141,   113,     0,     0,   138,
     280,   149,   308,    36,     4,     0,   545,     0,     0,   544,
     543,   535,   536,     0,   493,   497,   499,     0,     0,   506,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   533,    66,    67,    68,    45,   485,     0,   103,   104,
     105,   101,    50,    94,    99,   178,    46,    55,   485,   112,
     123,   125,   120,   106,   327,     0,   178,     0,   485,   262,
     257,   258,     0,   342,   220,     0,   657,   658,   659,   655,
     656,   651,   654,   347,    43,    41,   110,   113,   402,   233,
     215,   226,   224,   222,   230,   235,     0,   221,   228,   229,
     219,   234,   320,   317,   318,     0,   243,     0,   280,   626,
     623,   624,   269,   619,   621,   622,   293,   480,     0,     0,
       0,   489,   169,   431,   432,   433,   425,   285,   170,   485,
     422,   379,   173,   178,   670,   672,   668,   140,   142,   145,
     256,    35,   178,   537,   538,     0,     0,   501,     0,     0,
     509,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   534,     0,     0,    65,     0,   102,   485,   100,     0,
      96,     0,    56,   122,     0,   677,     0,   129,   253,   254,
     241,   210,   259,   178,   233,   485,   650,   108,   214,   256,
       0,     0,   225,   231,   232,   227,   323,   319,   311,   312,
     313,   310,   309,   256,   278,     0,   620,   294,   289,   297,
       0,   649,   674,   648,   653,   664,   168,   379,   293,   286,
     182,   178,   424,   182,   176,     0,     0,   491,   494,     0,
     504,   507,   511,   515,   519,   523,   513,   517,   521,   525,
       0,     0,   532,     0,   392,     0,     0,    84,    80,    71,
      77,    64,    79,    73,    72,    76,    74,    69,    70,     0,
      78,     0,   203,   204,    75,     0,   325,     0,     0,   178,
      81,   178,     0,   178,    47,   126,   128,   127,   240,   220,
     261,   263,   264,   247,   249,     0,     0,   223,     0,   418,
     236,   280,     0,     0,     0,   625,   256,   666,   426,   282,
     184,   171,   183,   304,     0,   178,   174,   182,   150,   162,
       0,   677,     0,     0,     0,    92,   485,    90,     0,     0,
       0,     0,   178,    82,    85,    87,    88,     0,    86,    89,
       0,   199,    83,   485,   205,     0,     0,    97,    95,    98,
       0,   233,   260,   266,   660,   485,   420,   379,   417,   485,
     324,   485,     0,     0,   283,   305,   177,   298,   495,     0,
     508,   527,   529,     0,   485,    91,     0,    93,   485,     0,
       0,     0,   485,   202,     0,   211,   265,   216,   379,   419,
     321,   244,   485,   185,   186,   293,   151,   502,   675,   677,
     409,   132,     0,   485,     0,   200,     0,   675,   421,   295,
     187,   284,   300,   299,     0,   303,     0,     0,     0,    60,
       0,   409,   133,   201,     0,   298,   301,   302,   677,   135,
     130,    60,     0,   242,   296,     0,   131,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -933,  -933,  -397,  -933,  -933,   782,  -125,  -933,  -933,  -933,
    -933,  -844,  -107,     5,   -27,  -933,  -933,  -933,  -933,   250,
    -425,  -106,  -823,  -933,  -933,  -933,  -933,  -124,  -933,  -131,
    -231,  -933,  -933,    -9,  -120,  -117,   -33,  -933,  -933,    -2,
    -485,  -933,  -933,   -13,  -933,  -933,  -933,  -270,  -896,  -114,
    -126,  -410,   193,    47,  -933,  -933,  -933,  -933,   196,  -110,
    -933,  -933,    20,  -933,     2,  -933,  -933,  -933,   -61,  -933,
    -933,  -933,  -933,  -933,  -933,   316,    64,  -881,  -933,  -933,
    -933,   819,  -933,  -933,  -933,   -98,  -174,    25,  -101,  -933,
    -933,  -276,  -505,  -933,  -933,  -933,  -316,  -268,  -530,  -682,
    -933,  -933,  -933,  -933,  -807,  -933,  -933,  -102,  -933,  -933,
    -933,  -933,  -123,  -933,  -933,  -933,  -933,   296,  -933,     8,
    -671,  -933,  -933,  -933,  -197,  -933,  -933,  -258,  -933,  -933,
    -933,    21,   340,  -312,   342,  -933,   -19,   -47,  -736,  -933,
    -933,  -256,  -933,  -712,  -933,  -932,  -933,  -933,  -325,  -933,
    -933,  -444,  -933,  -933,  -314,  -933,  -933,   -12,  -933,  -933,
    -933,  1234,  1089,  1010,    15,  -933,  -933,   204,   768,    -5,
    -933,    45,  -933,   426,    -1,   -94,  -933,    22,  1066,  -933,
    -933,  -501,  -933,    43,   161,  -933,  -933,   -36,  -875,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,   243,
      51,   272,  -404,   422,  -933,   425,  -933,   122,  -933,   978,
    -933,  -933,  -933,   -66,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,
    -933,  -933,  -933,  -933,  -933,  -933,  -933,  -933,    35,    38,
     148,  -879,  -831,  -933,  -482,  -105,  -511,  -933,   -21,  -933,
     -87,  -933,  -861,  -933,  -685,  -933,  -586,  -933,  -933,  -933,
    -255,  -933,  -933,  -933,   302,  -933,  -195,  -431,  -933,  -429,
      66,    39,  -933,  -638,  -933
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   360,    91,    92,    93,   466,
      94,    95,    96,   362,    98,   353,    99,   931,   680,   380,
     514,   515,   683,   679,   806,   807,  1011,  1085,  1013,   812,
     813,   929,   925,   814,   101,   102,   103,   521,   104,   363,
     524,   693,   690,   691,   934,   364,   936,  1077,  1151,   106,
     107,   621,   629,   622,   459,   460,   900,  1117,   461,   108,
     324,   109,   365,   775,   366,   441,   608,   882,   609,   610,
     980,   611,   983,   612,  1067,   887,   757,  1061,  1062,  1113,
    1143,   367,   113,   114,   115,  1088,  1021,  1022,   117,   533,
    1039,   118,   551,   718,   552,   949,   553,   119,   555,   720,
     857,   950,   858,   859,   860,   861,   951,   374,   375,  1038,
     556,   963,  1023,   536,   834,   388,   708,   531,   698,   699,
     703,   704,   830,  1041,   831,   832,  1103,   562,   563,   730,
     564,   368,   419,   505,   560,   868,   506,   507,   888,  1145,
     978,   420,   876,   421,   550,   968,  1056,  1175,  1146,  1064,
     567,   557,   962,   721,   969,   723,   863,   864,   956,  1052,
    1053,   815,   122,   285,   286,   535,   125,   126,   127,   287,
     541,   288,   271,   130,   131,   352,   508,   381,   133,   134,
     135,   136,   716,  1029,   138,   431,   549,   139,   140,   272,
    1050,  1051,  1107,  1138,   751,   752,   891,   977,   753,   141,
     142,   143,   426,   427,   428,   429,   734,   717,   430,   695,
     144,   146,   588,   145,   783,   483,   906,  1070,   484,   485,
     787,   989,   788,   488,   909,  1072,   791,   795,   792,   796,
     793,   797,   794,   798,   799,   800,   922,   650,   589,   590,
     591,   872,   873,   965,   592,   593,   434,   594,   595,   974,
     709,   879,   840,   841,   875,   946,   442,   596,   737,   735,
     597,   619,   617,   618,   598,   736,   437,   444,   604,   605,
     606,   267,   268,   269,   270
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
     128,   387,   283,   105,   361,   600,   409,   111,   281,   355,
      97,   472,   376,   377,   378,   615,   449,   568,   630,   393,
     124,   892,   743,   386,   842,   110,   120,   132,   624,   726,
     116,   410,   329,   284,   463,   299,   849,   835,   599,   889,
     694,   966,   948,   520,   625,   889,  1059,   438,   137,   715,
     129,   471,   327,   443,   725,  1035,    16,   289,   681,   473,
     681,    16,   826,   681,   415,   416,    16,   263,   446,   447,
     264,   415,   416,   371,   681,   445,  1049,    16,   290,  1009,
     158,   159,   330,   261,   149,    16,   681,    16,   681,    16,
     439,   425,  -372,   451,  -359,     3,   413,   779,   266,   407,
    -359,   681,  1066,   464,    38,   405,   759,   760,   761,   705,
    -172,   851,   952,  -118,  -118,    -2,   150,   523,   711,   391,
     394,    16,   329,   843,   397,   150,   124,   331,  -175,  -358,
     408,   332,   422,   369,  -172,  -358,   116,  1043,   417,   422,
     852,   766,   802,   803,   804,   417,   333,   411,   953,   954,
     554,  -372,   944,   853,   370,  -328,   854,   984,   653,  1075,
     439,  -328,   382,   372,   373,   566,   986,   726,  1155,   392,
     395,   615,   330,  1106,  1110,   855,   440,   865,   532,   866,
     265,   889,   334,   780,   850,   263,  1116,   452,   264,   454,
     889,   682,   725,   682,   -60,   866,   845,   -60,   652,  1173,
     448,   261,   423,   424,   966,   865,   473,  1042,   -60,   423,
     424,   -60,   246,  1161,  -372,   848,   436,   767,   768,   845,
     -60,   682,   -60,   -60,   878,   -60,   880,   839,   847,   985,
     710,   889,   712,   715,   845,   -60,   639,   742,   -60,    38,
     774,   415,   416,   722,  -374,  1063,   440,   856,   874,   422,
    -374,   805,  1144,   413,   335,   100,   458,  -357,  1172,  -373,
     755,   554,   457,  -357,  -370,  -352,  -377,   329,   410,   889,
    -370,  -352,  1180,  -372,  1172,  -373,  -378,  -376,  1046,   966,
    -375,   391,  1160,  -371,   756,   282,  1186,   284,   547,  -371,
    -329,   554,  1054,  -360,  1135,  -350,  -329,  -118,   265,  -360,
     523,  -350,  -361,  -374,   262,   329,   329,   356,  -361,  -374,
     546,   542,   733,   544,   336,   417,   722,   330,  -373,   423,
     424,   337,   391,   329,  -362,  -377,  -351,  1168,   390,  1115,
    -362,   392,  -351,   413,  -373,  -378,  -376,   574,  -363,  -375,
     338,  -364,   405,   474,  -363,   413,  1168,  -364,  1182,   518,
     147,   148,   329,   889,   329,   330,   330,  1101,  1182,  -365,
     842,   100,   339,   627,   628,  -365,   340,   463,  1083,   516,
     341,  -366,   392,   330,   728,  -377,   383,  -366,   769,   729,
    -378,   124,   406,   770,   411,  1112,   342,  1162,   528,  1163,
     874,   116,   291,   292,   293,   294,   295,   296,   297,   519,
    1164,   343,   330,  1165,   330,   623,   391,   623,   771,   370,
     685,  -316,   344,   329,   291,   292,   293,   294,   295,   296,
     297,  -270,   262,   561,  -367,   345,  -355,   410,   842,   554,
    -367,  -356,  -355,   559,  -377,  -368,  -369,  -356,    33,  -378,
     346,  -368,  -369,   979,   819,   347,  -376,   820,   518,   348,
     329,   967,   874,   418,  -316,   714,   392,   632,   842,  1104,
     636,   397,  1134,   330,   958,   959,   960,   961,   516,   391,
     423,   424,   263,   263,    38,   264,   264,   349,   263,   263,
     263,   264,   264,   264,  1148,   586,   350,  1149,   261,   261,
     390,   242,   413,   935,   261,   261,   261,  -354,   519,   263,
     330,   405,   264,  -354,  1036,  -376,   827,   633,   651,   351,
     519,   686,   636,    21,    22,   261,   382,   379,  -326,   392,
      38,   404,   329,   435,   329,   329,  1176,  1177,   451,   518,
     706,   390,   688,   465,   397,   808,   809,   810,   518,   282,
     329,   469,  -154,   411,   697,   511,   247,   530,   298,   516,
      16,   396,   537,   874,   391,   637,   638,   654,   516,   675,
     632,   687,   519,   839,   397,   658,  1133,   263,   659,   661,
     264,   874,   330,   662,   330,   330,   672,  1065,   663,   519,
     623,   623,   818,   261,   664,   265,   265,   665,   519,   651,
     330,   265,   265,   265,   666,  -375,   667,   668,   669,  1133,
     670,   671,   674,   955,   392,   748,   462,   615,   746,   673,
     633,   689,   265,   701,   758,   390,   282,  -255,  -316,   406,
     578,   732,   739,   738,   510,   741,   358,   510,   874,   762,
     765,   839,   750,   773,   776,   263,   777,   778,   264,   781,
    1119,   782,   784,   785,   789,   786,  -353,   821,   729,   816,
     823,   261,  -353,   825,  -375,   749,   828,   829,   844,   846,
     862,   839,   291,   292,   293,   294,   295,   296,   297,   329,
     881,   770,   897,   898,   903,   329,   901,   904,   390,   928,
     265,   921,   910,   686,   924,   417,   529,   927,   942,   947,
     615,   945,   391,   987,   990,  1047,  1000,   992,  1150,   993,
     994,   995,   996,   997,   790,   890,   587,   998,    33,   262,
     262,  1093,   999,  1001,   886,   262,   262,   262,  1167,   330,
     390,  1002,  1037,   623,   510,   330,   510,  1169,  1040,  1171,
    -322,  1057,  1060,   687,  1068,  1069,   262,   565,   615,   329,
     329,   329,   392,  1071,  1073,  1181,  1074,  1185,   265,   291,
     292,   293,   294,   295,   296,   297,   615,   482,  1092,   554,
     586,   486,   487,   390,   489,   490,   491,   492,   493,   494,
     495,   496,   497,   498,   499,   500,   501,   502,   282,  1132,
     396,   586,  1100,  1105,  1109,  1157,  1111,    90,  1114,   330,
     330,   330,  1118,  1120,  1121,  1122,  1142,   982,  1008,  1012,
    1034,  1098,   926,  1014,   262,   328,  1015,   933,  1125,  1016,
     586,   586,   586,  1017,   510,   763,   510,   899,   902,   764,
     329,   976,   893,   565,   112,  1020,   905,   554,   554,  1079,
     907,   908,   707,   938,   911,   912,   913,   914,   915,   916,
     917,   918,   919,   920,  1102,  1136,   510,   677,   676,   964,
    1184,   957,   572,   754,   822,   573,   877,  1030,   973,  1045,
    1055,   554,   263,   937,     0,   264,   731,     0,     0,     0,
     330,     0,   262,     0,     0,   943,     0,     0,   261,   396,
       0,     0,   632,  1058,   565,     0,   397,     0,     0,     0,
       0,     0,   390,     0,   398,     0,   401,   403,     0,   510,
     510,   390,   409,     0,     0,  1094,     0,     0,     0,   655,
     656,   657,   361,     0,   660,     0,     0,     0,   128,  1091,
     329,   105,     0,   586,   329,  1019,   329,   410,  1010,   586,
     586,   586,   633,     0,     0,     0,     0,     0,  1027,   462,
       0,     0,   396,  1018,  1024,  1028,     0,   692,     0,   988,
       0,     0,   991,  1166,     0,     0,     0,     0,  1094,     0,
     396,     0,  1174,     0,     0,     0,     0,  1094,   129,   396,
     330,   361,     0,  1048,   330,   265,   330,  1127,     0,     0,
     410,   587,     5,     0,     0,   586,   510,     0,     0,   410,
       0,     0,   413,     0,     0,   407,     0,     0,   128,     0,
     329,   405,   587,     0,  1108,  1078,     0,  1094,     0,     0,
       0,     0,     0,  1139,   128,   123,   586,     0,     0,     0,
     327,  1087,   391,   128,  1084,  1081,   408,   329,     0,   410,
       0,   587,   587,   587,  1027,     0,     0,     0,     0,  1086,
    1089,  1090,     0,  1095,  1158,   413,  1082,   326,   129,     0,
     330,     0,     0,     0,   413,   401,   403,     0,     0,     0,
       0,     0,     0,   405,   129,     0,     0,     0,     0,     0,
       0,   263,   392,   129,   264,     0,   128,   330,   354,     0,
       0,     0,   128,   357,     0,   128,   586,   261,     0,  1087,
     391,   632,  1084,     0,   413,   397,   586,   401,   403,   262,
    1126,   384,  1027,   405,   586,  1095,   402,  1086,  1089,  1130,
       0,   414,     0,     0,   396,     0,     0,     0,   518,     0,
     432,   433,   517,   824,   632,   128,   129,     0,   397,     0,
       0,   930,   129,     0,     0,   129,     0,   400,   516,     0,
     392,   633,   939,     0,   587,  1095,     0,   518,     0,   518,
     587,   587,   587,     0,   263,     0,     0,   264,   538,   539,
     540,   586,     0,     0,   586,   518,     0,   516,   519,   516,
     261,     0,     0,   100,   633,   129,     0,     0,     0,     0,
       0,     0,     0,     0,   265,   516,     0,     0,     0,     0,
       0,     0,     0,     0,   586,     0,     0,   519,   412,   519,
       0,   263,   263,     0,   264,   264,   587,     0,     0,   263,
       0,     0,   264,   389,     0,   519,   399,   261,   261,     0,
     263,   517,     0,   264,     0,   261,     0,     0,     0,     0,
       0,   390,     0,     0,     0,     0,   261,   587,     0,   121,
       0,     0,     0,     0,     0,     0,   692,     0,     0,     0,
       0,     0,     0,  1076,   510,     0,     0,     0,     0,     0,
     453,     0,   455,   384,     0,   402,     0,   265,     0,   100,
       0,   325,     0,     0,     0,     0,     0,     0,   406,     0,
       0,     0,   326,    17,    18,    19,   401,   403,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   390,
     280,     0,   517,   470,     0,     0,     0,   587,   262,     0,
       0,   517,     0,     0,   265,   265,     0,   587,     0,     0,
     326,   326,   265,     0,     0,   587,     0,     0,  1124,     0,
     510,  1128,     0,   265,     0,     0,     0,   282,   400,     0,
     406,   527,     0,     0,     0,  1096,     0,  1097,     0,  1099,
       0,     0,     0,     0,     0,   412,     0,     0,   534,     0,
       0,     0,     0,     0,     0,     0,     0,   326,     0,   326,
       0,     0,     0,     0,     0,   456,  1153,     0,     0,     0,
     282,     0,   587,     0,   543,   587,   545,     0,     0,     0,
     548,   262,     0,     0,     0,     0,     0,     0,  1129,     0,
     569,   570,   571,     0,   401,     0,     0,     0,     0,     0,
       0,   510,     0,     0,     0,   587,   456,   399,   509,     0,
       0,   509,     0,     0,     0,     0,     0,     0,   620,     0,
     510,     0,     0,     0,     0,   412,     0,     0,   262,   262,
       0,     0,     0,     0,     0,     0,   262,   412,     0,     0,
       0,     0,     0,     0,   539,   540,     0,   262,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,     0,   833,   635,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   678,     0,     0,     0,
       0,     0,     0,   684,     0,     0,     0,     0,     0,     0,
     389,     0,     0,     0,   470,     0,   450,   558,     0,     0,
       0,     0,     0,     0,     0,     0,   401,   403,   509,     0,
     509,     0,     0,   475,   476,   477,   478,   479,   480,   481,
       0,   719,     0,     0,     0,     0,   724,   326,     0,     0,
     326,   307,   308,   309,   467,   468,     0,     0,     0,   396,
       0,   631,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,   456,     0,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,     0,     0,   396,     0,
     396,     0,     0,   307,   308,   309,    16,     0,     0,     0,
       0,   525,     0,   526,   412,     0,   396,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   509,   772,
     509,    33,     0,     0,     0,     0,     0,     0,   558,     0,
     747,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,     0,     0,     0,
     509,     0,     0,     0,     0,     0,     0,    38,   727,     0,
       0,     0,     0,     0,   631,     0,     0,     0,     0,     0,
       0,     0,     0,   817,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,     0,     0,     0,     0,
       0,     0,   640,     0,   326,     0,     0,     0,     0,   626,
     326,     0,     0,   509,   509,     0,     0,     0,   522,     0,
       0,     0,   523,     0,     0,   867,     0,     0,     0,    88,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   641,   642,     0,     0,     0,     0,
       0,   204,   205,   206,   643,   208,   209,   210,   211,   212,
     213,   214,   215,   216,   217,   218,   219,   220,   221,   222,
     223,   224,   225,   226,   326,   326,   326,     0,     0,     0,
       0,   696,     0,     0,   700,     0,     0,     0,     0,     0,
       0,     0,     0,   328,     0,     0,     0,     0,     0,   713,
     509,     0,     0,     0,   923,     0,   727,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   932,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   941,     0,     0,   644,
       0,   645,   646,     0,   647,   648,   412,   249,   250,   251,
     649,   253,   254,   255,   256,   257,   258,   259,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
       0,     0,     0,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,    16,     0,     0,   981,     0,   808,
     809,   810,     0,     0,     0,     0,     0,   811,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    33,
       0,   517,     0,     0,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,  1032,     0,     0,   801,     0,
       0,     0,   307,   308,   309,     0,     0,     0,     0,     0,
     517,     0,   517,  1044,     0,    38,     0,     0,     0,     0,
       0,     0,     0,   123,     0,   326,     0,     0,   517,   326,
      33,   326,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,     0,     0,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   503,   280,     0,     0,     0,   631,     0,   883,   884,
     885,   504,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,     0,
       0,     0,  1026,     0,     0,   326,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,   300,   301,   302,   303,   304,   305,   306,
       0,     0,   326,     0,     0,     0,     0,     0,   509,     0,
       0,   307,   308,   309,  1123,     0,     0,     0,     0,   700,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1131,     0,     0,     0,     0,     0,     0,     0,    33,
     310,     0,   311,  1137,     0,     0,     0,  1140,     0,  1141,
       0,     0,  1080,     0,   412,     0,     0,     0,     0,     0,
       0,     0,  1152,     0,     0,     0,  1154,     0,  1080,     0,
    1156,     0,     0,     0,   412,    38,   456,  1080,     0,     0,
    1159,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,  1170,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,   412,     0,     0,
       0,     0,     0,     0,     0,     0,   412,  1025,     0,  1031,
       0,     0,     0,  1033,     0,     0,     0,     0,     0,     0,
    1080,     0,     0,     0,     0,     0,  1080,    88,     0,  1080,
       0,     0,     0,     0,   456,   558,     0,     0,     0,     0,
       0,     0,   412,     0,     0,     0,   412,     0,     0,     0,
       0,     0,     0,     0,     0,   509,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   727,  1080,
       0,     0,     0,     0,   509,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   325,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   601,   242,     0,   243,   244,   245,   246,
       0,   602,   248,   603,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   601,
     242,   607,   243,   244,   245,   246,     0,   602,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   601,   242,     0,   243,   244,
     245,   246,     0,   602,   248,   613,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   601,   242,     0,   243,   244,   245,   246,   616,   602,
     248,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   601,   242,   634,
     243,   244,   245,   246,     0,   602,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   601,   242,   702,   243,   244,   245,   246,
       0,   602,   248,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   601,
     242,   940,   243,   244,   245,   246,     0,   602,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   601,   242,  1178,   243,   244,
     245,   246,     0,   602,   248,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   601,   242,  1183,   243,   244,   245,   246,     0,   602,
     248,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   614,   242,     0,
     243,   244,   245,   246,     0,   602,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     151,   152,   153,   154,   155,   156,   157,   158,   159,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   172,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   740,   242,     0,   243,   244,   245,   246,
       0,   602,   248,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,  1147,   602,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,  1179,   242,     0,   243,   244,
     245,   246,     0,   602,   248,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   151,   152,
     153,   154,   155,   156,   157,   158,   159,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   207,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,   227,
     228,   229,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1187,   242,     0,   243,   244,   245,   246,     0,   602,
     248,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   151,   152,   153,   154,   155,   156,
     157,   158,   159,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   172,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   242,     0,
     243,   244,   245,   246,     0,   247,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     151,   152,   153,   154,   155,   156,   157,   446,   447,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   575,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   576,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,   577,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   971,   578,   972,   579,   580,   581,   448,
       0,   582,   583,     0,   249,   250,   251,   584,   253,   254,
     255,   256,   257,   258,   259,   585,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     242,     0,   243,   244,   245,   246,     0,   602,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   151,   152,   153,   154,   155,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   172,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,     0,   243,   244,
     245,   246,     0,     0,   248,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   151,   152,
     153,   154,   155,   156,   157,   446,   447,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   575,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   576,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     577,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   578,     0,   579,   580,   581,   448,   894,   582,
     583,     0,   249,   250,   251,   584,   253,   254,   255,   256,
     257,   258,   259,   585,   151,   152,   153,   154,   155,   156,
     157,   446,   447,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   575,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   576,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   577,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   578,     0,
     579,   580,   581,   448,   895,   582,   583,     0,   249,   250,
     251,   584,   253,   254,   255,   256,   257,   258,   259,   585,
     151,   152,   153,   154,   155,   156,   157,   446,   447,   160,
     161,   162,   163,   164,   165,   166,   167,   168,   169,   170,
     171,   575,   173,   174,   175,   176,   177,   178,   179,   180,
       0,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   576,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,   577,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   578,     0,   579,   580,   581,   448,
     896,   582,   583,     0,   249,   250,   251,   584,   253,   254,
     255,   256,   257,   258,   259,   585,   151,   152,   153,   154,
     155,   156,   157,   446,   447,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   575,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   576,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     0,   577,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     578,     0,   579,   580,   581,   448,     0,   582,   583,   970,
     249,   250,   251,   584,   253,   254,   255,   256,   257,   258,
     259,   585,   151,   152,   153,   154,   155,   156,   157,   446,
     447,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   575,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   576,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     0,   577,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   578,     0,   579,   580,
     581,   448,     0,   582,   583,   975,   249,   250,   251,   584,
     253,   254,   255,   256,   257,   258,   259,   585,   151,   152,
     153,   154,   155,   156,   157,   446,   447,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   575,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   576,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     577,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   578,     0,   579,   580,   581,   448,     0,   582,
     583,     0,   249,   250,   251,   584,   253,   254,   255,   256,
     257,   258,   259,   585,   151,   152,   153,   154,   155,   156,
     157,   446,   447,   160,   161,   162,   163,   164,   165,   166,
     167,   168,   169,   170,   171,   575,   173,   174,   175,   176,
     177,   178,   179,   180,     0,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   439,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   577,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   578,     0,
     836,   580,   837,   448,     0,   838,   583,     0,   249,   250,
     251,   440,   253,   254,   255,   256,   257,   258,   259,   585,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
       0,     0,  -623,  -623,  -623,  -623,  -623,  -623,     0,  -623,
    -623,  -623,  -623,     0,     0,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,     0,  -623,     0,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,  -623,     0,  -659,  -623,  -623,  -623,
       0,  -623,  -623,     0,  -623,  -623,  -623,  -623,  -623,  -623,
    -623,  -623,  -623,  -623,  -623,  -623,   151,   152,   153,   154,
     155,   156,   157,   446,   447,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   575,   173,   174,
     175,   176,   177,   178,   179,   180,     0,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   869,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     0,   577,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     578,     0,     0,   580,     0,   448,     0,   870,   583,     0,
     249,   250,   251,   871,   253,   254,   255,   256,   257,   258,
     259,   585,   151,   152,   153,   154,   155,   156,   157,   446,
     447,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   575,   173,   174,   175,   176,   177,   178,
     179,   180,     0,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,     0,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     0,   577,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   578,     0,     0,   580,
       0,   448,     0,   838,   583,     0,   249,   250,   251,     0,
     253,   254,   255,   256,   257,   258,   259,   585,   151,   152,
     153,   154,   155,   156,   157,   446,   447,   160,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   575,
     173,   174,   175,   176,   177,   178,   179,   180,     0,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,     0,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
       0,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   578,     0,     0,   580,     0,   448,     0,     0,
     583,     0,   249,   250,   251,     0,   253,   254,   255,   256,
     257,   258,   259,   585,   273,   274,   275,   276,   277,   278,
     279,     0,     0,   640,     0,     0,     0,     0,     0,     0,
       0,     0,   169,   170,   171,     0,    17,    18,    19,    20,
       0,     0,     0,    21,    22,    23,    24,    25,    26,    27,
      28,    29,     0,   280,     0,     0,     0,     0,     0,     0,
      33,    34,     0,     0,     0,   641,   642,     0,     0,     0,
       0,     0,   204,   205,   206,   643,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,     0,    38,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     644,     0,   645,   646,     0,   647,   648,     0,   249,   250,
     251,   649,   253,   254,   255,   256,   257,   258,   259,     6,
       7,     8,     9,    10,    11,    12,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
      16,    17,    18,    19,    20,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,  1003,  1004,    31,
      32,     0,     0,     0,     0,    33,    34,    35,     0,  1005,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,  1006,  1007,     6,     7,     8,     9,    10,    11,    12,
       0,     0,     0,    88,     0,     0,     0,     0,     0,     0,
       0,    13,    14,    15,    16,    17,    18,    19,    20,     0,
       0,     0,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,    30,    31,    32,     0,     0,     0,     0,    33,
      34,    35,    36,    37,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,     0,    87,     6,     7,     8,
       9,    10,    11,    12,     0,     0,     0,    88,     0,     0,
       0,     0,     0,     0,     0,    13,    14,    15,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   280,    31,   358,     0,
       0,     0,     0,    33,    34,     0,     0,   359,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     6,     7,     8,     9,    10,    11,    12,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   503,
     280,    13,    14,    15,     0,    17,    18,    19,    20,   504,
       0,    88,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   280,    31,   358,     0,     0,     0,     0,    33,
      34,     0,     0,     0,     0,     0,   422,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,  -274,     0,     0,     0,     0,     6,
       7,     8,     9,    10,    11,    12,   423,   424,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,    14,    15,
       0,    17,    18,    19,    20,     0,     0,    88,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   280,    31,
       0,     0,     0,     0,     0,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    63,    64,    65,
       0,     0,     0,     0,     0,     6,     7,     8,     9,    10,
      11,    12,    21,    22,    23,    24,    25,    26,    27,    28,
      29,   503,   280,    13,    14,    15,     0,    17,    18,    19,
      20,   504,     0,    88,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,    31,     0,     0,     0,     0,
       0,    33,    34,     0,     0,     0,     0,     0,   422,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,   300,   301,   302,   303,
     304,   305,   306,     0,     0,     0,     0,     0,   423,   424,
       0,     0,     0,     0,   307,   308,   309,     0,     0,     0,
       0,     0,   808,   809,   810,     0,     0,     0,     0,    88,
     811,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    33,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,    16,     0,     0,   300,   301,   302,
     303,   304,   305,   306,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,   307,   308,   309,     0,    33,
       0,     0,     0,     0,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    31,   385,     0,
       0,     0,     0,    33,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,   307,   308,   309,    16,     0,     0,     0,     0,
      88,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
     523,     0,     0,     0,     0,     0,     0,    88,   300,   301,
     302,   303,   304,   305,   306,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   307,   308,   309,     0,
       0,    88,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    33,   310,   300,   301,   302,   303,
     304,   305,   306,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   307,   308,   309,     0,    88,   300,
     301,   302,   303,   304,   305,   306,     0,     0,     0,     0,
      38,     0,     0,     0,     0,     0,     0,   307,   308,   309,
       0,     0,    33,     0,     0,     0,     0,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,     0,
     385,     0,     0,     0,     0,    33,     0,   300,   301,   302,
     303,   304,   305,   306,     0,     0,     0,     0,    38,     0,
       0,     0,     0,     0,     0,   307,   308,   309,     0,     0,
       0,     0,    88,     0,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,    31,     0,     0,
       0,     0,     0,    33,     0,     0,     0,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
       0,     0,   300,   301,   302,   303,   304,   305,   306,     0,
      88,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    88,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,    33,   300,
     301,   302,   303,   304,   305,   306,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   307,   308,   309,
      16,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,   307,   308,   309,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,   312,   313,
     314,   315,   316,   317,   318,   319,   320,   321,   322,   323,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   512,  1148,     0,     0,  1149,   300,   301,   302,
     303,   304,   305,   306,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,    16,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,     0,
       0,     0,     0,    33,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,   512,     0,     0,
       0,   513,   307,   308,   309,    16,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   300,   301,   302,
     303,   304,   305,   306,     0,     0,    38,     0,     0,     0,
       0,  1148,     0,     0,  1149,   307,   308,   309,    16,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   273,   274,   275,   276,   277,
     278,   279,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   169,   170,   171,     0,    17,    18,    19,
      20,   513,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,    31,   358,     0,     0,    38,
       0,    33,    34,     0,     0,   359,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,   230,   231,   232,   233,   234,   235,
     236,   237,   238,   239,   240,   241,   273,   274,   275,   276,
     277,   278,   279,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   169,   170,   171,     0,    17,    18,
      19,    20,     0,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,   280,    31,     0,     0,     0,
       0,     0,    33,    34,    35,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   273,   274,   275,
     276,   277,   278,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   169,   170,   171,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   280,    31,     0,     0,
       0,     0,     0,    33,    34,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   169,   170,   171,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   280,     0,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   273,
     274,   275,   276,   277,   278,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   169,   170,   171,
       0,   744,     0,   745,    20,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   280,     0,
       0,     0,     0,     0,     0,    33,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     273,   274,   275,   276,   277,   278,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   169,   170,
     171,     0,   300,   301,   302,   303,   304,   305,   306,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,   280,
     307,   308,   309,     0,     0,     0,    33,    34,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   385,     0,     0,     0,     0,    33,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323
};

static const short int yycheck[] =
{
       5,   124,    35,     5,   111,   436,   132,     5,    35,   103,
       5,   327,   114,   115,   116,   444,   271,   421,   462,   125,
       5,   757,   608,   124,   709,     5,     5,     5,   453,   559,
       5,   132,    37,    35,   290,    36,   718,   708,   435,   751,
     525,   872,   849,   355,   454,   757,   978,   242,     5,   550,
       5,   327,    37,   248,   559,   934,    24,    35,     3,   327,
       3,    24,   700,     3,    10,    11,    24,    32,    10,    11,
      32,    10,    11,    46,     3,   270,   951,    24,    35,   923,
      10,    11,    37,    32,    12,    24,     3,    24,     3,    24,
      64,   138,    85,    12,   136,     0,   132,    64,    32,   132,
     142,     3,   983,   298,    85,   132,   617,   618,   619,   534,
      26,     3,    19,   136,   137,     0,    44,   140,   543,   124,
     125,    24,   127,   709,   125,    44,   111,   142,    44,   136,
     132,   142,    78,   111,    50,   142,   111,   944,    84,    78,
      32,   626,    29,    30,    31,    84,   142,   132,    55,    56,
     418,   144,   834,    45,   111,   136,    48,   893,   474,  1003,
      64,   142,   119,   136,   137,   421,   902,   697,   136,   124,
     125,   600,   127,  1048,  1053,    67,   150,   140,   373,   142,
      32,   893,   142,   150,   142,   150,  1067,   281,   150,   283,
     902,   136,   697,   136,   137,   142,   136,   140,   474,   136,
     142,   150,   148,   149,  1035,   140,   474,   943,   137,   148,
     149,   140,   142,  1145,    85,   716,   150,   627,   628,   136,
     137,   136,   137,   140,   735,   140,   737,   709,   713,   900,
     542,   943,   544,   734,   136,   137,   139,   141,   140,    85,
     637,    10,    11,   557,    85,   981,   150,   139,   730,    78,
      85,   138,  1113,   289,   142,     5,   289,   136,  1154,    85,
      26,   529,   289,   142,   136,   136,    85,   272,   369,   981,
     142,   142,  1168,   144,  1170,    85,    85,    85,   949,  1110,
      85,   286,  1143,   136,    50,    35,  1182,   289,   411,   142,
     136,   559,   963,   136,  1101,   136,   142,   137,   150,   142,
     140,   142,   136,   144,    32,   310,   311,   137,   142,   144,
     411,   405,   568,   407,   142,    84,   630,   272,   144,   148,
     149,   142,   327,   328,   136,   144,   136,  1150,   124,  1065,
     142,   286,   142,   369,   144,   144,   144,   431,   136,   144,
     142,   136,   369,   328,   142,   381,  1169,   142,  1171,   354,
      25,    26,   357,  1065,   359,   310,   311,  1039,  1181,   136,
    1045,   111,   142,   457,   458,   142,   142,   623,  1006,   354,
     142,   136,   327,   328,   136,    85,   136,   142,   136,   141,
      85,   366,   132,   141,   369,  1056,   142,    32,   366,    34,
     872,   366,     3,     4,     5,     6,     7,     8,     9,   354,
      45,   142,   357,    48,   359,   452,   411,   454,   142,   366,
     516,   145,   142,   418,     3,     4,     5,     6,     7,     8,
       9,   137,   150,   139,   136,   142,   136,   528,  1113,   697,
     142,   136,   142,   418,   144,   136,   136,   142,    49,   144,
     142,   142,   142,   887,   138,   142,    85,   141,   453,   142,
     455,   142,   934,   137,   145,   549,   411,   462,  1143,  1045,
     465,   462,  1100,   418,    13,    14,    15,    16,   453,   474,
     148,   149,   437,   438,    85,   437,   438,   142,   443,   444,
     445,   443,   444,   445,   137,   434,   142,   140,   437,   438,
     286,   137,   528,   139,   443,   444,   445,   136,   453,   464,
     455,   528,   464,   142,   935,   144,   701,   462,   473,   142,
     465,   516,   517,    32,    33,   464,   473,   142,   136,   474,
      85,   144,   527,   137,   529,   530,  1164,  1165,    12,   534,
     535,   327,   517,   139,   535,    29,    30,    31,   543,   289,
     545,   136,   136,   528,   529,   137,   144,   140,   137,   534,
      24,   125,   142,  1035,   559,   137,   136,   141,   543,   136,
     565,   516,   517,  1045,   565,   141,  1096,   532,   141,   141,
     532,  1053,   527,   141,   529,   530,   143,   981,   141,   534,
     627,   628,   688,   532,   141,   437,   438,   141,   543,   554,
     545,   443,   444,   445,   141,    85,   141,   141,   141,  1129,
     141,   141,   141,   858,   559,   610,   290,  1036,   610,   143,
     565,   136,   464,   137,   612,   411,   366,   143,   145,   369,
     137,   143,   138,   146,   352,   146,    44,   355,  1110,   136,
     136,  1113,   610,   136,     3,   600,   145,   145,   600,   143,
    1071,   146,   141,   143,   141,   143,   136,   139,   141,   140,
     136,   600,   142,   141,   144,   610,   143,    84,   136,   136,
     145,  1143,     3,     4,     5,     6,     7,     8,     9,   674,
     146,   141,   136,   136,   146,   680,   138,   146,   474,    37,
     532,   141,   143,   688,   140,    84,   370,   141,   141,   136,
    1119,   143,   697,   143,   143,   950,   141,   143,  1123,   143,
     143,   143,   143,   143,   661,   752,   434,   143,    49,   437,
     438,  1027,   143,   141,   750,   443,   444,   445,  1149,   674,
     516,   143,   136,   770,   452,   680,   454,  1152,    84,  1154,
     146,   146,   139,   688,   143,   136,   464,   421,  1167,   744,
     745,   746,   697,   141,    13,  1170,    13,  1178,   600,     3,
       4,     5,     6,     7,     8,     9,  1185,   331,   136,  1027,
     709,   335,   336,   559,   338,   339,   340,   341,   342,   343,
     344,   345,   346,   347,   348,   349,   350,   351,   528,  1095,
     354,   730,    47,   143,   146,   137,   143,     5,   143,   744,
     745,   746,   143,   143,   143,   143,   143,   891,   923,   923,
     931,  1032,   811,   923,   532,    37,   923,   820,  1078,   923,
     759,   760,   761,   923,   542,   622,   544,   770,   775,   623,
     825,   882,   758,   507,     5,   923,   783,  1095,  1096,  1003,
     787,   788,   536,   825,   791,   792,   793,   794,   795,   796,
     797,   798,   799,   800,  1041,  1103,   574,   507,   506,   868,
    1175,   863,   430,   610,   693,   430,   734,   923,   879,   946,
     965,  1129,   827,   824,    -1,   827,   564,    -1,    -1,    -1,
     825,    -1,   600,    -1,    -1,   832,    -1,    -1,   827,   453,
      -1,    -1,   887,   977,   568,    -1,   887,    -1,    -1,    -1,
      -1,    -1,   688,    -1,   126,    -1,   128,   129,    -1,   627,
     628,   697,  1028,    -1,    -1,  1028,    -1,    -1,    -1,   483,
     484,   485,  1019,    -1,   488,    -1,    -1,    -1,   923,  1021,
     925,   923,    -1,   872,   929,   923,   931,  1028,   923,   878,
     879,   880,   887,    -1,    -1,    -1,    -1,    -1,   923,   623,
      -1,    -1,   516,   923,   923,   923,    -1,   521,    -1,   906,
      -1,    -1,   909,  1148,    -1,    -1,    -1,    -1,  1081,    -1,
     534,    -1,  1157,    -1,    -1,    -1,    -1,  1090,   923,   543,
     925,  1078,    -1,   951,   929,   827,   931,  1079,    -1,    -1,
    1081,   709,     4,    -1,    -1,   934,   714,    -1,    -1,  1090,
      -1,    -1,  1028,    -1,    -1,  1028,    -1,    -1,  1003,    -1,
    1005,  1028,   730,    -1,  1051,  1003,    -1,  1130,    -1,    -1,
      -1,    -1,    -1,  1107,  1019,     5,   965,    -1,    -1,    -1,
    1005,  1019,  1027,  1028,  1019,  1003,  1028,  1032,    -1,  1130,
      -1,   759,   760,   761,  1019,    -1,    -1,    -1,    -1,  1019,
    1019,  1019,    -1,  1028,  1138,  1081,  1003,    37,  1003,    -1,
    1005,    -1,    -1,    -1,  1090,   287,   288,    -1,    -1,    -1,
      -1,    -1,    -1,  1090,  1019,    -1,    -1,    -1,    -1,    -1,
      -1,  1036,  1027,  1028,  1036,    -1,  1081,  1032,   100,    -1,
      -1,    -1,  1087,   105,    -1,  1090,  1035,  1036,    -1,  1087,
    1095,  1096,  1087,    -1,  1130,  1096,  1045,   329,   330,   827,
    1078,   123,  1087,  1130,  1053,  1090,   128,  1087,  1087,  1087,
      -1,   133,    -1,    -1,   688,    -1,    -1,    -1,  1123,    -1,
     142,   143,   354,   697,  1129,  1130,  1081,    -1,  1129,    -1,
      -1,   815,  1087,    -1,    -1,  1090,    -1,   127,  1123,    -1,
    1095,  1096,   826,    -1,   872,  1130,    -1,  1152,    -1,  1154,
     878,   879,   880,    -1,  1119,    -1,    -1,  1119,   390,   391,
     392,  1110,    -1,    -1,  1113,  1170,    -1,  1152,  1123,  1154,
    1119,    -1,    -1,   923,  1129,  1130,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1036,  1170,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1143,    -1,    -1,  1152,   132,  1154,
      -1,  1166,  1167,    -1,  1166,  1167,   934,    -1,    -1,  1174,
      -1,    -1,  1174,   124,    -1,  1170,   127,  1166,  1167,    -1,
    1185,   453,    -1,  1185,    -1,  1174,    -1,    -1,    -1,    -1,
      -1,  1027,    -1,    -1,    -1,    -1,  1185,   965,    -1,     5,
      -1,    -1,    -1,    -1,    -1,    -1,   820,    -1,    -1,    -1,
      -1,    -1,    -1,  1003,   982,    -1,    -1,    -1,    -1,    -1,
     282,    -1,   284,   285,    -1,   287,    -1,  1119,    -1,  1019,
      -1,    37,    -1,    -1,    -1,    -1,    -1,    -1,  1028,    -1,
      -1,    -1,   272,    25,    26,    27,   518,   519,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,  1095,
      42,    -1,   534,   325,    -1,    -1,    -1,  1035,  1036,    -1,
      -1,   543,    -1,    -1,  1166,  1167,    -1,  1045,    -1,    -1,
     310,   311,  1174,    -1,    -1,  1053,    -1,    -1,  1078,    -1,
    1058,  1081,    -1,  1185,    -1,    -1,    -1,  1087,   328,    -1,
    1090,   363,    -1,    -1,    -1,  1029,    -1,  1031,    -1,  1033,
      -1,    -1,    -1,    -1,    -1,   289,    -1,    -1,   380,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   357,    -1,   359,
      -1,    -1,    -1,    -1,    -1,   286,  1126,    -1,    -1,    -1,
    1130,    -1,  1110,    -1,   406,  1113,   408,    -1,    -1,    -1,
     412,  1119,    -1,    -1,    -1,    -1,    -1,    -1,  1082,    -1,
     422,   423,   424,    -1,   636,    -1,    -1,    -1,    -1,    -1,
      -1,  1139,    -1,    -1,    -1,  1143,   327,   328,   352,    -1,
      -1,   355,    -1,    -1,    -1,    -1,    -1,    -1,   450,    -1,
    1158,    -1,    -1,    -1,    -1,   369,    -1,    -1,  1166,  1167,
      -1,    -1,    -1,    -1,    -1,    -1,  1174,   381,    -1,    -1,
      -1,    -1,    -1,    -1,   686,   687,    -1,  1185,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   455,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   706,   465,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   508,    -1,    -1,    -1,
      -1,    -1,    -1,   515,    -1,    -1,    -1,    -1,    -1,    -1,
     411,    -1,    -1,    -1,   526,    -1,   272,   418,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   748,   749,   452,    -1,
     454,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,   553,    -1,    -1,    -1,    -1,   558,   527,    -1,    -1,
     530,    21,    22,    23,   310,   311,    -1,    -1,    -1,  1123,
      -1,   462,    -1,    -1,    -1,   545,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   474,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,    -1,  1152,    -1,
    1154,    -1,    -1,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,   357,    -1,   359,   528,    -1,  1170,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   542,   631,
     544,    49,    -1,    -1,    -1,    -1,    -1,    -1,   529,    -1,
     610,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
     574,    -1,    -1,    -1,    -1,    -1,    -1,    85,   559,    -1,
      -1,    -1,    -1,    -1,   565,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   685,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,    -1,    12,    -1,   674,    -1,    -1,    -1,    -1,   455,
     680,    -1,    -1,   627,   628,    -1,    -1,    -1,   136,    -1,
      -1,    -1,   140,    -1,    -1,   727,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,    -1,
      -1,    61,    62,    63,    64,    65,    66,    67,    68,    69,
      70,    71,    72,    73,    74,    75,    76,    77,    78,    79,
      80,    81,    82,    83,   744,   745,   746,    -1,    -1,    -1,
      -1,   527,    -1,    -1,   530,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1005,    -1,    -1,    -1,    -1,    -1,   545,
     714,    -1,    -1,    -1,   806,    -1,   697,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   818,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   828,    -1,    -1,   139,
      -1,   141,   142,    -1,   144,   145,   750,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   825,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    -1,   889,    -1,    29,
      30,    31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      -1,  1123,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,   927,    -1,    -1,   674,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
    1152,    -1,  1154,   945,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   923,    -1,   925,    -1,    -1,  1170,   929,
      49,   931,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    -1,    -1,    -1,   887,    -1,   744,   745,
     746,    51,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   923,    -1,    -1,  1005,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,  1032,    -1,    -1,    -1,    -1,    -1,   982,    -1,
      -1,    21,    22,    23,  1076,    -1,    -1,    -1,    -1,   825,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1093,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    52,  1105,    -1,    -1,    -1,  1109,    -1,  1111,
      -1,    -1,  1003,    -1,  1028,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1124,    -1,    -1,    -1,  1128,    -1,  1019,    -1,
    1132,    -1,    -1,    -1,  1048,    85,  1027,  1028,    -1,    -1,
    1142,    -1,    -1,    -1,  1058,    -1,    -1,    -1,    -1,    -1,
      -1,  1153,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,  1081,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,  1090,   923,    -1,   925,
      -1,    -1,    -1,   929,    -1,    -1,    -1,    -1,    -1,    -1,
    1081,    -1,    -1,    -1,    -1,    -1,  1087,   147,    -1,  1090,
      -1,    -1,    -1,    -1,  1095,  1096,    -1,    -1,    -1,    -1,
      -1,    -1,  1126,    -1,    -1,    -1,  1130,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1139,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1129,  1130,
      -1,    -1,    -1,    -1,  1158,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1005,
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
      -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,   142,
      -1,   144,   145,   146,   147,   148,   149,   150,   151,   152,
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
      -1,    -1,    -1,    -1,    -1,   136,   137,    -1,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
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
      -1,   136,   137,    -1,   139,   140,   141,   142,   143,   144,
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
      -1,    -1,    -1,   136,   137,    -1,   139,   140,   141,   142,
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
     137,    -1,   139,   140,   141,   142,   143,   144,   145,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,
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
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
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
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
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
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,   139,   140,
     141,   142,    -1,    -1,   145,    -1,   147,   148,   149,   150,
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
     143,   144,   145,    -1,   147,   148,   149,   150,   151,   152,
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
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
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
      83,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
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
      77,    78,    79,    80,    81,    82,    83,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     137,    -1,    -1,   140,    -1,   142,    -1,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    -1,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    -1,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    -1,    85,    -1,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,   140,
      -1,   142,    -1,   144,   145,    -1,   147,   148,   149,    -1,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    -1,    -1,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    44,
      45,    -1,    -1,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    -1,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    -1,
      -1,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   137,    -1,    -1,   140,    -1,   142,    -1,    -1,
     145,    -1,   147,   148,   149,    -1,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    25,    26,    27,    28,
      -1,    -1,    -1,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    -1,    42,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    54,    55,    -1,    -1,    -1,
      -1,    -1,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    -1,    85,    -1,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     139,    -1,   141,   142,    -1,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,    53,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
     114,   115,   116,   117,   118,   119,   120,   121,   122,   123,
     124,   125,   126,   127,   128,   129,   130,   131,   132,   133,
     134,   135,   136,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    25,    26,    27,    28,    -1,
      -1,    -1,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      50,    51,    52,    53,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,    -1,   136,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    21,    22,    23,    -1,    25,    26,    27,    28,    51,
      -1,   147,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   136,    -1,    -1,    -1,    -1,     3,
       4,     5,     6,     7,     8,     9,   148,   149,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    -1,    -1,   147,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    43,
      -1,    -1,    -1,    -1,    -1,    49,    50,    51,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    32,    33,    34,    35,    36,    37,    38,    39,
      40,    41,    42,    21,    22,    23,    -1,    25,    26,    27,
      28,    51,    -1,   147,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    -1,    -1,    -1,    78,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,   148,   149,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    29,    30,    31,    -1,    -1,    -1,    -1,   147,
      37,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    49,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    24,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    49,
      -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    43,    44,    -1,
      -1,    -1,    -1,    49,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
     147,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
     140,    -1,    -1,    -1,    -1,    -1,    -1,   147,     3,     4,
       5,     6,     7,     8,     9,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      -1,   147,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,   147,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      85,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    -1,    49,    -1,    -1,    -1,    -1,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,    -1,
      44,    -1,    -1,    -1,    -1,    49,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,   147,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    43,    -1,    -1,
      -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      -1,    -1,     3,     4,     5,     6,     7,     8,     9,    -1,
     147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   147,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    49,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      24,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   136,   137,    -1,    -1,   140,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   136,    -1,    -1,
      -1,   140,    21,    22,    23,    24,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    85,    -1,    -1,    -1,
      -1,   137,    -1,    -1,   140,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,   140,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    -1,    -1,    85,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,    -1,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    -1,    -1,    -1,
      -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    -1,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    -1,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,     3,     4,     5,     6,     7,     8,     9,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      21,    22,    23,    -1,    -1,    -1,    49,    50,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const unsigned short int yystos[] =
{
       0,   160,   161,     0,   162,   368,     3,     4,     5,     6,
       7,     8,     9,    21,    22,    23,    24,    25,    26,    27,
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
     290,   320,   321,   322,   323,   325,   326,   327,   328,   330,
     332,   333,   336,   337,   338,   339,   340,   342,   343,   346,
     347,   358,   359,   360,   369,   372,   370,    25,    26,    12,
      44,     3,     4,     5,     6,     7,     8,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    35,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   137,   139,   140,   141,   142,   144,   145,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   359,   360,   397,   398,   399,   429,   430,   431,   432,
     433,   331,   348,     3,     4,     5,     6,     7,     8,     9,
      42,   173,   178,   195,   198,   322,   323,   328,   330,   336,
     342,     3,     4,     5,     6,     7,     8,     9,   137,   333,
       3,     4,     5,     6,     7,     8,     9,    21,    22,    23,
      50,    52,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   219,   320,   322,   323,   327,   328,
     330,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   334,   174,   368,   334,   137,   368,    44,    53,
     164,   171,   172,   198,   204,   221,   223,   240,   290,   336,
     342,    46,   136,   137,   266,   267,   266,   266,   266,   142,
     178,   336,   342,   136,   368,    44,   247,   271,   274,   321,
     326,   328,   330,   180,   328,   330,   332,   333,   327,   321,
     322,   327,   368,   327,   144,   173,   178,   195,   198,   209,
     247,   323,   337,   346,   368,    10,    11,    84,   234,   291,
     300,   302,    78,   148,   149,   296,   361,   362,   363,   364,
     367,   344,   368,   368,   405,   137,   429,   425,   425,    64,
     150,   224,   415,   425,   426,   425,    10,    11,   142,   419,
     320,    12,   334,   368,   334,   368,   321,   173,   195,   213,
     214,   217,   234,   300,   425,   139,   168,   320,   320,   136,
     368,   250,   255,   256,   323,     3,     4,     5,     6,     7,
       8,     9,   332,   374,   377,   378,   332,   332,   382,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,    41,    51,   292,   295,   296,   335,   337,
     360,   137,   136,   140,   179,   180,   323,   327,   328,   330,
     292,   196,   136,   140,   199,   320,   320,   368,   336,   234,
     140,   276,   425,   248,   368,   324,   272,   142,   327,   327,
     327,   329,   334,   368,   334,   368,   247,   271,   368,   345,
     303,   251,   253,   255,   256,   257,   269,   310,   321,   323,
     293,   139,   286,   287,   289,   234,   300,   309,   361,   368,
     368,   368,   362,   364,   334,    24,    64,    85,   137,   139,
     140,   141,   144,   145,   150,   158,   359,   360,   371,   397,
     398,   399,   403,   404,   406,   407,   416,   419,   423,   161,
     426,   136,   144,   146,   427,   428,   429,   138,   225,   227,
     228,   230,   232,   146,   136,   428,   143,   421,   422,   420,
     368,   210,   212,   296,   179,   210,   320,   334,   334,   211,
     310,   321,   328,   330,   138,   322,   328,   137,   136,   139,
      12,    54,    55,    64,   139,   141,   142,   144,   145,   150,
     396,   397,   250,   255,   141,   332,   332,   332,   141,   141,
     332,   141,   141,   141,   141,   141,   141,   141,   141,   141,
     141,   141,   143,   143,   141,   136,   293,   291,   368,   182,
     177,     3,   136,   181,   368,   180,   328,   330,   323,   136,
     201,   202,   332,   200,   199,   368,   320,   323,   277,   278,
     320,   137,   138,   279,   280,   179,   328,   276,   275,   409,
     292,   179,   292,   320,   334,   340,   341,   366,   252,   368,
     258,   312,   313,   314,   368,   251,   257,   321,   136,   141,
     288,   423,   143,   300,   365,   418,   424,   417,   146,   138,
     136,   146,   141,   415,    25,    27,   198,   322,   328,   330,
     336,   353,   354,   357,   358,    26,    50,   235,   223,   405,
     405,   405,   136,   211,   217,   136,   199,   210,   210,   136,
     141,   142,   368,   136,   161,   222,     3,   145,   145,    64,
     150,   143,   146,   373,   141,   143,   143,   379,   381,   141,
     342,   385,   387,   389,   391,   386,   388,   390,   392,   393,
     394,   320,    29,    30,    31,   138,   183,   184,    29,    30,
      31,    37,   188,   189,   192,   320,   140,   368,   180,   138,
     141,   139,   343,   136,   332,   141,   432,   425,   143,    84,
     281,   283,   284,   327,   273,   279,   139,   141,   144,   403,
     411,   412,   413,   415,   136,   136,   136,   199,   340,   258,
     142,     3,    32,    45,    48,    67,   139,   259,   261,   262,
     263,   264,   145,   315,   316,   140,   142,   368,   294,    64,
     144,   150,   400,   401,   403,   413,   301,   366,   405,   410,
     405,   146,   226,   320,   320,   320,   346,   234,   297,   302,
     296,   355,   297,   235,   143,   143,   143,   136,   136,   212,
     215,   138,   342,   146,   146,   342,   375,   342,   342,   383,
     143,   342,   342,   342,   342,   342,   342,   342,   342,   342,
     342,   141,   395,   368,   140,   191,   192,   141,    37,   190,
     234,   176,   368,   202,   203,   139,   205,   430,   278,   234,
     138,   368,   141,   342,   258,   143,   414,   136,   263,   254,
     260,   265,    19,    55,    56,   419,   317,   316,    13,    14,
      15,    16,   311,   270,   295,   402,   401,   142,   304,   313,
     146,   136,   138,   407,   408,   146,   227,   356,   299,   310,
     229,   368,   334,   231,   297,   279,   297,   143,   342,   380,
     143,   342,   143,   143,   143,   143,   143,   143,   143,   143,
     141,   141,   143,    41,    42,    53,   135,   136,   165,   170,
     172,   185,   186,   187,   193,   194,   208,   218,   221,   223,
     244,   245,   246,   271,   290,   320,   321,   323,   336,   342,
     372,   320,   368,   320,   188,   400,   426,   136,   268,   249,
      84,   282,   297,   263,   368,   409,   279,   419,   336,   347,
     349,   350,   318,   319,   279,   404,   305,   146,   334,   304,
     139,   236,   237,   297,   308,   361,   236,   233,   143,   136,
     376,   141,   384,    13,    13,   170,   178,   206,   223,   245,
     321,   336,   342,   432,   172,   186,   221,   223,   244,   290,
     336,   266,   136,   255,   271,   323,   234,   234,   189,   234,
      47,   258,   283,   285,   415,   143,   347,   351,   296,   146,
     400,   143,   279,   238,   143,   297,   236,   216,   143,   426,
     143,   143,   143,   368,   178,   206,   336,   266,   178,   234,
     336,   368,   255,   257,   432,   263,   286,   368,   352,   334,
     368,   368,   143,   239,   411,   298,   307,   143,   137,   140,
     179,   207,   368,   178,   368,   136,   368,   137,   334,   368,
     411,   304,    32,    34,    45,    48,   425,   426,   181,   179,
     368,   179,   207,   136,   425,   306,   432,   432,   138,   136,
     207,   179,   181,   138,   307,   426,   207,   136
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
     289,   287,   290,   291,   292,   292,   293,   294,   293,   295,
     296,   296,   297,   298,   297,   299,   299,   300,   301,   300,
     303,   302,   302,   304,   305,   306,   304,   304,   307,   307,
     307,   307,   307,   307,   308,   308,   309,   309,   310,   310,
     311,   311,   311,   311,   312,   312,   314,   313,   315,   315,
     317,   316,   318,   319,   318,   320,   320,   321,   321,   321,
     321,   321,   322,   322,   322,   323,   323,   323,   323,   323,
     323,   324,   323,   325,   326,   327,   329,   328,   331,   330,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   332,   332,   332,   332,   332,   332,   332,   332,
     332,   332,   333,   333,   333,   333,   333,   333,   333,   334,
     334,   335,   335,   335,   335,   336,   336,   337,   337,   337,
     337,   338,   338,   338,   338,   338,   339,   339,   339,   340,
     340,   341,   341,   342,   344,   343,   345,   343,   346,   346,
     346,   347,   347,   348,   347,   347,   347,   349,   351,   350,
     352,   350,   353,   355,   354,   356,   354,   357,   357,   357,
     357,   357,   357,   357,   358,   358,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   359,   359,
     359,   359,   359,   359,   359,   359,   359,   359,   360,   360,
     360,   360,   360,   360,   360,   360,   360,   360,   360,   360,
     360,   360,   360,   361,   361,   361,   361,   362,   363,   365,
     364,   366,   366,   367,   367,   368,   368,   370,   371,   369,
     373,   372,   374,   375,   376,   372,   377,   372,   378,   372,
     379,   380,   372,   381,   372,   382,   383,   384,   372,   372,
     385,   372,   386,   372,   387,   372,   388,   372,   389,   372,
     390,   372,   391,   372,   392,   372,   393,   372,   394,   372,
     372,   372,   372,   395,   395,   396,   396,   396,   396,   396,
     396,   396,   396,   396,   396,   396,   396,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   397,   397,   397,   397,   397,   397,   397,   397,   397,
     397,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     398,   398,   398,   398,   398,   398,   398,   398,   398,   398,
     399,   399,   399,   399,   399,   399,   399,   399,   399,   400,
     400,   401,   401,   401,   402,   401,   401,   403,   403,   404,
     404,   404,   404,   404,   404,   404,   404,   404,   404,   405,
     405,   406,   406,   406,   406,   407,   407,   407,   408,   408,
     409,   409,   410,   410,   411,   411,   412,   412,   412,   414,
     413,   415,   415,   417,   416,   418,   416,   420,   419,   421,
     419,   422,   419,   424,   423,   425,   425,   426,   426,   427,
     427,   428,   428,   429,   429,   429,   429,   429,   429,   429,
     429,   429,   429,   429,   429,   429,   429,   429,   429,   429,
     430,   431,   431,   432,   433,   433,   433
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
       4,     3,     1,     0,     0,     5,     0,     1,     0,     3,
       0,     2,     4,     2,     0,     2,     0,     0,     4,     2,
       0,     1,     3,     0,     6,     0,     1,     3,     0,     5,
       0,     3,     1,     0,     0,     0,     7,     1,     0,     2,
       2,     3,     3,     2,     1,     2,     1,     2,     2,     4,
       1,     1,     1,     1,     0,     1,     0,     2,     1,     2,
       0,     5,     0,     0,     2,     1,     1,     1,     1,     1,
       2,     2,     2,     2,     2,     2,     2,     2,     3,     3,
       3,     0,     5,     1,     1,     1,     0,     5,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       3,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       1,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     2,     0,     3,     0,     4,     1,     3,
       4,     1,     1,     0,     4,     2,     2,     2,     0,     3,
       0,     4,     2,     0,     3,     0,     4,     1,     1,     1,
       1,     2,     2,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     2,     0,
       4,     0,     1,     1,     2,     0,     2,     0,     0,     6,
       0,     7,     0,     0,     0,     9,     0,     5,     0,     5,
       0,     0,    10,     0,     7,     0,     0,     0,     9,     6,
       0,     7,     0,     7,     0,     7,     0,     7,     0,     7,
       0,     7,     0,     7,     0,     7,     0,     9,     0,     9,
       4,     4,     7,     0,     1,     2,     2,     3,     3,     1,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       2,     1,     1,     1,     0,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     0,
       2,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     2,     0,     2,     1,     1,     1,     1,     1,     0,
       4,     1,     1,     0,     4,     0,     5,     0,     4,     0,
       4,     0,     4,     0,     4,     0,     2,     0,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     4,     3,     1,     1,     1
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
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
       0,     0,     0,     0,     0,     0,     0
};

/* YYCONFLP[YYPACT[STATE-NUM]] -- Pointer into YYCONFL of start of
   list of conflicting reductions corresponding to action entry for
   state STATE-NUM in yytable.  0 means no conflicts.  The list in
   yyconfl is terminated by a rule number of 0.  */
static const unsigned char yyconflp[] =
{
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       1,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     3,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     5,     0,   251,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   253,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       7,     9,    11,    13,    15,    17,    19,    21,    23,    25,
      27,    29,    31,    33,    35,    37,    39,    41,    43,    45,
      47,    49,    51,    53,    55,    57,    59,    61,    63,    65,
       0,     0,    67,    69,    71,    73,    75,    77,     0,    79,
      81,    83,    85,     0,     0,    87,    89,    91,    93,    95,
      97,    99,   101,   103,   105,   107,   109,   111,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,     0,   159,     0,   161,   163,   165,   167,   169,   171,
     173,   175,   177,   179,   181,   183,   185,   187,   189,   191,
     193,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   215,     0,     0,   217,   219,   221,
       0,   223,   225,     0,   227,   229,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   409,     0,   409,     0,   409,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   659,     0,   659,     0,   659,     0,   659,     0,   659,
       0,   409,     0,   409,     0
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
static const char*
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
static int yyfill (yyGLRStackItem *, int *, int, yybool)
     YY_ATTRIBUTE_UNUSED;
static int
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
#line 1885 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6300 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 34:
#line 1939 "vtkParse.y" /* glr.c:783  */
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6306 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 35:
#line 1940 "vtkParse.y" /* glr.c:783  */
    { popNamespace(); }
#line 6312 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 44:
#line 1963 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6318 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 45:
#line 1964 "vtkParse.y" /* glr.c:783  */
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
#line 6334 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 46:
#line 1978 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer);
    }
#line 6343 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 48:
#line 1984 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer);
    }
#line 6352 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 49:
#line 1989 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
    }
#line 6360 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 51:
#line 1994 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer));
    }
#line 6368 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 52:
#line 1999 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6374 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 53:
#line 2000 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6380 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 54:
#line 2001 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 2; }
#line 6386 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 55:
#line 2005 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6392 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 56:
#line 2007 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6398 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 60:
#line 2015 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6404 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 61:
#line 2016 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0); }
#line 6410 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 63:
#line 2020 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6422 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 66:
#line 2032 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PUBLIC; }
#line 6428 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 67:
#line 2033 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PRIVATE; }
#line 6434 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 68:
#line 2034 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PROTECTED; }
#line 6440 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 93:
#line 2065 "vtkParse.y" /* glr.c:783  */
    { output_friend_function(); }
#line 6446 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 96:
#line 2073 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 6452 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 97:
#line 2075 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6459 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 98:
#line 2078 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6466 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 99:
#line 2082 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6472 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 100:
#line 2083 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 6478 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 101:
#line 2086 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = access_level; }
#line 6484 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 103:
#line 2090 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
#line 6490 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 104:
#line 2091 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
#line 6496 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 105:
#line 2092 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
#line 6502 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 111:
#line 2114 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6508 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 112:
#line 2115 "vtkParse.y" /* glr.c:783  */
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
#line 6523 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 113:
#line 2128 "vtkParse.y" /* glr.c:783  */
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
    }
#line 6533 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 114:
#line 2134 "vtkParse.y" /* glr.c:783  */
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
#line 6543 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 115:
#line 2141 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6549 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 116:
#line 2142 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6555 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 117:
#line 2143 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6561 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 118:
#line 2146 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6567 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 119:
#line 2147 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6573 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 120:
#line 2148 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = getType(); popType(); }
#line 6579 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 124:
#line 2155 "vtkParse.y" /* glr.c:783  */
    { closeComment(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), NULL); }
#line 6585 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 125:
#line 2156 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); closeComment(); }
#line 6591 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 126:
#line 2157 "vtkParse.y" /* glr.c:783  */
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), copySig()); }
#line 6597 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 149:
#line 2217 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 6603 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 150:
#line 2218 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6609 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 151:
#line 2219 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.integer)); popFunction(); }
#line 6615 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 152:
#line 2223 "vtkParse.y" /* glr.c:783  */
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
#line 6653 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 153:
#line 2263 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 0); }
#line 6659 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 155:
#line 2267 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 6665 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 156:
#line 2269 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6671 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 157:
#line 2271 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6677 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 158:
#line 2273 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6683 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 159:
#line 2275 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6689 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 160:
#line 2278 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 1); }
#line 6695 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 161:
#line 2281 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6701 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 162:
#line 2283 "vtkParse.y" /* glr.c:783  */
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
#line 6730 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 163:
#line 2314 "vtkParse.y" /* glr.c:783  */
    { postSig("template<> "); clearTypeId(); }
#line 6736 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 164:
#line 2316 "vtkParse.y" /* glr.c:783  */
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
#line 6748 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 165:
#line 2324 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
#line 6760 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 167:
#line 2335 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
#line 6766 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 169:
#line 2339 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6772 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 170:
#line 2341 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6778 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 172:
#line 2343 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6784 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 173:
#line 2345 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6790 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 175:
#line 2347 "vtkParse.y" /* glr.c:783  */
    { pushTemplate(); markSig(); }
#line 6796 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 176:
#line 2350 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
#line 6809 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 178:
#line 2361 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6815 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 179:
#line 2362 "vtkParse.y" /* glr.c:783  */
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 6821 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 180:
#line 2365 "vtkParse.y" /* glr.c:783  */
    { postSig("class "); }
#line 6827 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 181:
#line 2366 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 6833 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 184:
#line 2372 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); }
#line 6839 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 185:
#line 2374 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
#line 6850 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 188:
#line 2391 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6856 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 189:
#line 2392 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6862 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 190:
#line 2393 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 6868 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 191:
#line 2394 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 6874 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 199:
#line 2410 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6880 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 209:
#line 2428 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6890 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 210:
#line 2433 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6896 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 211:
#line 2435 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
#line 6909 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 212:
#line 2446 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = copySig(); }
#line 6915 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 213:
#line 2449 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6921 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 214:
#line 2451 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
#line 6933 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 215:
#line 2461 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 6943 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 217:
#line 2470 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6949 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 218:
#line 2473 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("operator "); }
#line 6955 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 219:
#line 2477 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 6967 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 222:
#line 2489 "vtkParse.y" /* glr.c:783  */
    { postSig(" throw "); }
#line 6973 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 223:
#line 2489 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 6979 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 224:
#line 2490 "vtkParse.y" /* glr.c:783  */
    { postSig(" const"); currentFunction->IsConst = 1; }
#line 6985 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 225:
#line 2492 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
#line 6995 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 226:
#line 2498 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
#line 7004 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 227:
#line 2502 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 7010 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 230:
#line 2507 "vtkParse.y" /* glr.c:783  */
    { postSig(" noexcept"); }
#line 7016 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 231:
#line 2510 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsDeleted = 1; }
#line 7022 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 235:
#line 2517 "vtkParse.y" /* glr.c:783  */
    { postSig(" -> "); clearType(); clearTypeId(); }
#line 7028 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 236:
#line 2519 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7037 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 243:
#line 2537 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7046 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 244:
#line 2541 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7052 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 245:
#line 2548 "vtkParse.y" /* glr.c:783  */
    { closeSig(); }
#line 7058 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 246:
#line 2549 "vtkParse.y" /* glr.c:783  */
    { openSig(); }
#line 7064 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 247:
#line 2551 "vtkParse.y" /* glr.c:783  */
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
#line 7084 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 248:
#line 2568 "vtkParse.y" /* glr.c:783  */
    { pushType(); postSig("("); }
#line 7090 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 249:
#line 2570 "vtkParse.y" /* glr.c:783  */
    { popType(); postSig(")"); }
#line 7096 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 256:
#line 2587 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7102 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 258:
#line 2590 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7108 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 259:
#line 2591 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); postSig(", "); }
#line 7114 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 261:
#line 2594 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
#line 7120 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 262:
#line 2596 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig("..."); }
#line 7126 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 263:
#line 2599 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7132 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 264:
#line 2601 "vtkParse.y" /* glr.c:783  */
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
#line 7151 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 265:
#line 2616 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
        {
        currentFunction->Parameters[i]->Value = getVarValue();
        }
    }
#line 7163 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 266:
#line 2625 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); }
#line 7169 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 268:
#line 2629 "vtkParse.y" /* glr.c:783  */
    { postSig("="); clearVarValue(); markSig(); }
#line 7175 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 269:
#line 2630 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7181 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 270:
#line 2631 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); }
#line 7187 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 271:
#line 2632 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7193 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 273:
#line 2644 "vtkParse.y" /* glr.c:783  */
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
#line 7266 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 277:
#line 2717 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7272 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 280:
#line 2723 "vtkParse.y" /* glr.c:783  */
    { setTypePtr(0); }
#line 7278 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 281:
#line 2724 "vtkParse.y" /* glr.c:783  */
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7284 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 282:
#line 2729 "vtkParse.y" /* glr.c:783  */
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
#line 7299 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 283:
#line 2739 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7305 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 284:
#line 2741 "vtkParse.y" /* glr.c:783  */
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
#line 7324 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 285:
#line 2757 "vtkParse.y" /* glr.c:783  */
    { clearVarName(); chopSig(); }
#line 7330 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 287:
#line 2763 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer); }
#line 7336 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 288:
#line 2764 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7342 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 289:
#line 2766 "vtkParse.y" /* glr.c:783  */
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
#line 7361 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 290:
#line 2782 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 7367 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 291:
#line 2783 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7373 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 292:
#line 2784 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7380 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 293:
#line 2788 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7386 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 294:
#line 2789 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 7392 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 295:
#line 2790 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7398 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 296:
#line 2791 "vtkParse.y" /* glr.c:783  */
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
#line 7407 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 297:
#line 2795 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
#line 7413 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 300:
#line 2799 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsConst = 1; }
#line 7419 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 305:
#line 2807 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7425 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 307:
#line 2812 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7431 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 308:
#line 2815 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7437 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 309:
#line 2817 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str)); }
#line 7443 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 314:
#line 2826 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7449 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 316:
#line 2830 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7455 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 320:
#line 2837 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 7461 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 321:
#line 2838 "vtkParse.y" /* glr.c:783  */
    { postSig("]"); }
#line 7467 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 322:
#line 2841 "vtkParse.y" /* glr.c:783  */
    { pushArraySize(""); }
#line 7473 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 323:
#line 2842 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7479 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 324:
#line 2842 "vtkParse.y" /* glr.c:783  */
    { chopSig(); pushArraySize(copySig()); }
#line 7485 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 330:
#line 2856 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7491 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 331:
#line 2857 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7497 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 332:
#line 2861 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7503 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 333:
#line 2863 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7509 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 334:
#line 2865 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7515 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 335:
#line 2869 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7521 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 336:
#line 2871 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7527 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 337:
#line 2873 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7533 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 338:
#line 2875 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7539 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 339:
#line 2877 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7545 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 340:
#line 2879 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7551 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 341:
#line 2880 "vtkParse.y" /* glr.c:783  */
    { postSig("template "); }
#line 7557 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 342:
#line 2882 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7563 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 343:
#line 2885 "vtkParse.y" /* glr.c:783  */
    { postSig("~"); }
#line 7569 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 344:
#line 2888 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7575 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 345:
#line 2891 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
#line 7581 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 346:
#line 2894 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); postSig("<"); }
#line 7587 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 347:
#line 2896 "vtkParse.y" /* glr.c:783  */
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
#line 7596 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 348:
#line 2902 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("decltype"); }
#line 7602 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 349:
#line 2903 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
#line 7608 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 350:
#line 2910 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7614 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 351:
#line 2911 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7620 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 352:
#line 2912 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7626 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 353:
#line 2913 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7632 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 354:
#line 2914 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7638 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 355:
#line 2915 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7644 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 356:
#line 2916 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7650 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 357:
#line 2917 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7656 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 358:
#line 2918 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7662 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 359:
#line 2919 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7668 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 360:
#line 2920 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
#line 7674 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 361:
#line 2921 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
#line 7680 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 362:
#line 2922 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
#line 7686 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 363:
#line 2923 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
#line 7692 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 364:
#line 2924 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
#line 7698 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 365:
#line 2925 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
#line 7704 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 366:
#line 2926 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
#line 7710 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 367:
#line 2927 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
#line 7716 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 368:
#line 2928 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
#line 7722 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 369:
#line 2929 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
#line 7728 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 370:
#line 2930 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
#line 7734 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 371:
#line 2931 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
#line 7740 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 382:
#line 2956 "vtkParse.y" /* glr.c:783  */
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 7746 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 383:
#line 2957 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_TYPEDEF); }
#line 7752 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 384:
#line 2958 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_FRIEND); }
#line 7758 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 387:
#line 2965 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7764 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 388:
#line 2966 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7770 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 389:
#line 2967 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7776 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 390:
#line 2968 "vtkParse.y" /* glr.c:783  */
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
#line 7782 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 391:
#line 2971 "vtkParse.y" /* glr.c:783  */
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
#line 7788 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 392:
#line 2972 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7794 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 393:
#line 2973 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7800 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 394:
#line 2974 "vtkParse.y" /* glr.c:783  */
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
#line 7806 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 395:
#line 2976 "vtkParse.y" /* glr.c:783  */
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
#line 7812 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 396:
#line 2979 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7818 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 397:
#line 2980 "vtkParse.y" /* glr.c:783  */
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 7824 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 398:
#line 2981 "vtkParse.y" /* glr.c:783  */
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
#line 7830 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 399:
#line 2984 "vtkParse.y" /* glr.c:783  */
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
#line 7836 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 400:
#line 2985 "vtkParse.y" /* glr.c:783  */
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
#line 7842 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 402:
#line 2990 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7848 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 404:
#line 3000 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7854 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 406:
#line 3002 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7860 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 409:
#line 3008 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7866 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 410:
#line 3010 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7872 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 412:
#line 3015 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 7878 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 413:
#line 3016 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 7884 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 414:
#line 3017 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7890 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 415:
#line 3019 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7896 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 416:
#line 3021 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7902 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 418:
#line 3027 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7908 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 420:
#line 3029 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7914 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 423:
#line 3036 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7920 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 425:
#line 3038 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7926 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 428:
#line 3044 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 7932 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 429:
#line 3046 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7938 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 430:
#line 3048 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7944 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 431:
#line 3050 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7950 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 432:
#line 3052 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7956 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 433:
#line 3054 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7962 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 434:
#line 3057 "vtkParse.y" /* glr.c:783  */
    { setTypeId(""); }
#line 7968 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 436:
#line 3061 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
#line 7974 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 437:
#line 3062 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
#line 7980 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 438:
#line 3063 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
#line 7986 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 439:
#line 3064 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
#line 7992 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 440:
#line 3065 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
#line 7998 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 441:
#line 3066 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
#line 8004 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 442:
#line 3067 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
#line 8010 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 443:
#line 3068 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
#line 8016 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 444:
#line 3069 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
#line 8022 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 445:
#line 3070 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
#line 8028 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 446:
#line 3071 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
#line 8034 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 447:
#line 3072 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
#line 8040 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 448:
#line 3073 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
#line 8046 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 449:
#line 3074 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
#line 8052 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 450:
#line 3075 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
#line 8058 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 451:
#line 3076 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
#line 8064 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 452:
#line 3077 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
#line 8070 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 453:
#line 3078 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
#line 8076 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 454:
#line 3079 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
#line 8082 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 455:
#line 3080 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
#line 8088 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 456:
#line 3081 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
#line 8094 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 457:
#line 3082 "vtkParse.y" /* glr.c:783  */
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8100 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 458:
#line 3085 "vtkParse.y" /* glr.c:783  */
    { postSig("auto "); ((*yyvalp).integer) = 0; }
#line 8106 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 459:
#line 3086 "vtkParse.y" /* glr.c:783  */
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
#line 8112 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 460:
#line 3087 "vtkParse.y" /* glr.c:783  */
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
#line 8118 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 461:
#line 3088 "vtkParse.y" /* glr.c:783  */
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
#line 8124 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 462:
#line 3089 "vtkParse.y" /* glr.c:783  */
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8130 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 463:
#line 3090 "vtkParse.y" /* glr.c:783  */
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
#line 8136 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 464:
#line 3091 "vtkParse.y" /* glr.c:783  */
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
#line 8142 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 465:
#line 3092 "vtkParse.y" /* glr.c:783  */
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
#line 8148 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 466:
#line 3093 "vtkParse.y" /* glr.c:783  */
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
#line 8154 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 467:
#line 3094 "vtkParse.y" /* glr.c:783  */
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8160 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 468:
#line 3095 "vtkParse.y" /* glr.c:783  */
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
#line 8166 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 469:
#line 3096 "vtkParse.y" /* glr.c:783  */
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
#line 8172 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 470:
#line 3097 "vtkParse.y" /* glr.c:783  */
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
#line 8178 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 471:
#line 3098 "vtkParse.y" /* glr.c:783  */
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8184 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 472:
#line 3099 "vtkParse.y" /* glr.c:783  */
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
#line 8190 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 476:
#line 3122 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8196 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 477:
#line 3126 "vtkParse.y" /* glr.c:783  */
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 8202 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 478:
#line 3130 "vtkParse.y" /* glr.c:783  */
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
#line 8208 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 479:
#line 3133 "vtkParse.y" /* glr.c:783  */
    { postSig("*"); }
#line 8214 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 480:
#line 3134 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 8220 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 481:
#line 3137 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
#line 8226 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 482:
#line 3139 "vtkParse.y" /* glr.c:783  */
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
#line 8241 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 484:
#line 3155 "vtkParse.y" /* glr.c:783  */
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
        {
        n = VTK_PARSE_BAD_INDIRECT;
        }
      ((*yyvalp).integer) = n;
    }
#line 8255 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 487:
#line 3174 "vtkParse.y" /* glr.c:783  */
    { closeSig(); }
#line 8261 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 488:
#line 3174 "vtkParse.y" /* glr.c:783  */
    { openSig(); }
#line 8267 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 490:
#line 3181 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("(");}
#line 8273 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 491:
#line 3182 "vtkParse.y" /* glr.c:783  */
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8287 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 492:
#line 3191 "vtkParse.y" /* glr.c:783  */
    {postSig("Get");}
#line 8293 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 493:
#line 3192 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8299 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 494:
#line 3192 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8305 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 495:
#line 3193 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8318 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 496:
#line 3201 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set");}
#line 8324 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 497:
#line 3202 "vtkParse.y" /* glr.c:783  */
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8338 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 498:
#line 3211 "vtkParse.y" /* glr.c:783  */
    {preSig("char *Get");}
#line 8344 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 499:
#line 3212 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
#line 8357 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 500:
#line 3220 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8363 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 501:
#line 3220 "vtkParse.y" /* glr.c:783  */
    {closeSig();}
#line 8369 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 502:
#line 3222 "vtkParse.y" /* glr.c:783  */
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
#line 8404 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 503:
#line 3253 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("("); }
#line 8410 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 504:
#line 3254 "vtkParse.y" /* glr.c:783  */
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8424 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 505:
#line 3263 "vtkParse.y" /* glr.c:783  */
    {postSig("*Get");}
#line 8430 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 506:
#line 3264 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8436 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 507:
#line 3264 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8442 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 508:
#line 3265 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
#line 8455 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 509:
#line 3274 "vtkParse.y" /* glr.c:783  */
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
#line 8477 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 510:
#line 3291 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8483 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 511:
#line 3292 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8492 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 512:
#line 3296 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8498 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 513:
#line 3297 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8507 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 514:
#line 3301 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8513 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 515:
#line 3302 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8522 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 516:
#line 3306 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8528 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 517:
#line 3307 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8537 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 518:
#line 3311 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8543 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 519:
#line 3312 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8552 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 520:
#line 3316 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8558 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 521:
#line 3317 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8567 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 522:
#line 3321 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8573 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 523:
#line 3322 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8582 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 524:
#line 3326 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8588 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 525:
#line 3327 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8597 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 526:
#line 3331 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8603 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 527:
#line 3333 "vtkParse.y" /* glr.c:783  */
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
#line 8623 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 528:
#line 3348 "vtkParse.y" /* glr.c:783  */
    {startSig();}
#line 8629 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 529:
#line 3350 "vtkParse.y" /* glr.c:783  */
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
#line 8646 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 530:
#line 3363 "vtkParse.y" /* glr.c:783  */
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
#line 8687 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 531:
#line 3400 "vtkParse.y" /* glr.c:783  */
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
#line 8729 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 532:
#line 3438 "vtkParse.y" /* glr.c:783  */
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
#line 8769 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 535:
#line 3482 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "()"; }
#line 8775 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 536:
#line 3483 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "[]"; }
#line 8781 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 537:
#line 3484 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new[]"; }
#line 8787 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 538:
#line 3485 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete[]"; }
#line 8793 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 539:
#line 3486 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<"; }
#line 8799 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 540:
#line 3487 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">"; }
#line 8805 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 541:
#line 3488 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ","; }
#line 8811 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 542:
#line 3489 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "="; }
#line 8817 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 543:
#line 3490 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 8823 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 544:
#line 3491 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 8829 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 545:
#line 3492 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8835 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 547:
#line 3496 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%"; }
#line 8841 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 548:
#line 3497 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*"; }
#line 8847 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 549:
#line 3498 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/"; }
#line 8853 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 550:
#line 3499 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-"; }
#line 8859 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 551:
#line 3500 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+"; }
#line 8865 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 552:
#line 3501 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!"; }
#line 8871 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 553:
#line 3502 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "~"; }
#line 8877 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 554:
#line 3503 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&"; }
#line 8883 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 555:
#line 3504 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|"; }
#line 8889 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 556:
#line 3505 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^"; }
#line 8895 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 557:
#line 3506 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new"; }
#line 8901 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 558:
#line 3507 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete"; }
#line 8907 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 559:
#line 3508 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<="; }
#line 8913 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 560:
#line 3509 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>="; }
#line 8919 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 561:
#line 3510 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<"; }
#line 8925 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 562:
#line 3511 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ".*"; }
#line 8931 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 563:
#line 3512 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->*"; }
#line 8937 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 564:
#line 3513 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->"; }
#line 8943 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 565:
#line 3514 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+="; }
#line 8949 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 566:
#line 3515 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-="; }
#line 8955 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 567:
#line 3516 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*="; }
#line 8961 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 568:
#line 3517 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/="; }
#line 8967 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 569:
#line 3518 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%="; }
#line 8973 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 570:
#line 3519 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "++"; }
#line 8979 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 571:
#line 3520 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "--"; }
#line 8985 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 572:
#line 3521 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&="; }
#line 8991 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 573:
#line 3522 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|="; }
#line 8997 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 574:
#line 3523 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^="; }
#line 9003 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 575:
#line 3524 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&&"; }
#line 9009 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 576:
#line 3525 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "||"; }
#line 9015 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 577:
#line 3526 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "=="; }
#line 9021 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 578:
#line 3527 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!="; }
#line 9027 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 579:
#line 3528 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<="; }
#line 9033 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 580:
#line 3529 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">="; }
#line 9039 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 581:
#line 3532 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typedef"; }
#line 9045 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 582:
#line 3533 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typename"; }
#line 9051 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 583:
#line 3534 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "class"; }
#line 9057 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 584:
#line 3535 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "struct"; }
#line 9063 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 585:
#line 3536 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "union"; }
#line 9069 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 586:
#line 3537 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "template"; }
#line 9075 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 587:
#line 3538 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "public"; }
#line 9081 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 588:
#line 3539 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "protected"; }
#line 9087 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 589:
#line 3540 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "private"; }
#line 9093 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 590:
#line 3541 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const"; }
#line 9099 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 591:
#line 3542 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static"; }
#line 9105 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 592:
#line 3543 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "thread_local"; }
#line 9111 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 593:
#line 3544 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "constexpr"; }
#line 9117 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 594:
#line 3545 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "inline"; }
#line 9123 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 595:
#line 3546 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "virtual"; }
#line 9129 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 596:
#line 3547 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "explicit"; }
#line 9135 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 597:
#line 3548 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "decltype"; }
#line 9141 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 598:
#line 3549 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "default"; }
#line 9147 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 599:
#line 3550 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "extern"; }
#line 9153 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 600:
#line 3551 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "using"; }
#line 9159 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 601:
#line 3552 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "namespace"; }
#line 9165 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 602:
#line 3553 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "operator"; }
#line 9171 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 603:
#line 3554 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "enum"; }
#line 9177 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 604:
#line 3555 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "throw"; }
#line 9183 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 605:
#line 3556 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "noexcept"; }
#line 9189 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 606:
#line 3557 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const_cast"; }
#line 9195 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 607:
#line 3558 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "dynamic_cast"; }
#line 9201 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 608:
#line 3559 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static_cast"; }
#line 9207 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 609:
#line 3560 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "reinterpret_cast"; }
#line 9213 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 623:
#line 3584 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9219 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 624:
#line 3585 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9225 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 626:
#line 3586 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9231 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 628:
#line 3590 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("::"); }
#line 9237 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 632:
#line 3597 "vtkParse.y" /* glr.c:783  */
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
#line 9271 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 633:
#line 3626 "vtkParse.y" /* glr.c:783  */
    { postSig(":"); postSig(" "); }
#line 9277 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 634:
#line 3626 "vtkParse.y" /* glr.c:783  */
    { postSig("."); }
#line 9283 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 635:
#line 3627 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9289 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 636:
#line 3628 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9295 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 638:
#line 3631 "vtkParse.y" /* glr.c:783  */
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
#line 9321 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 642:
#line 3658 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9327 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 643:
#line 3659 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9333 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 644:
#line 3660 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9339 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 646:
#line 3664 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9345 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 647:
#line 3665 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9351 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 649:
#line 3669 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(";"); }
#line 9357 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 657:
#line 3683 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9363 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 658:
#line 3684 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9369 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 659:
#line 3688 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
#line 9379 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 660:
#line 3694 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
#line 9389 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 663:
#line 3705 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 9395 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 664:
#line 3706 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("] "); }
#line 9401 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 665:
#line 3707 "vtkParse.y" /* glr.c:783  */
    { postSig("[["); }
#line 9407 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 666:
#line 3708 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("]] "); }
#line 9413 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 667:
#line 3711 "vtkParse.y" /* glr.c:783  */
    { postSig("("); }
#line 9419 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 668:
#line 3712 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9425 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 669:
#line 3713 "vtkParse.y" /* glr.c:783  */
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 9431 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 670:
#line 3714 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9437 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 671:
#line 3715 "vtkParse.y" /* glr.c:783  */
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&"); }
#line 9443 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 672:
#line 3716 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9449 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 673:
#line 3719 "vtkParse.y" /* glr.c:783  */
    { postSig("{ "); }
#line 9455 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 674:
#line 3719 "vtkParse.y" /* glr.c:783  */
    { postSig("} "); }
#line 9461 "vtkParse.tab.c" /* glr.c:783  */
    break;


#line 9465 "vtkParse.tab.c" /* glr.c:783  */
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
static int
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
static yySymbol
yylhsNonterm (yyRuleNum yyrule)
{
  return yyr1[yyrule];
}

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-933)))

/** True iff LR state YYSTATE has only a default reduction (regardless
 *  of token).  */
static yybool
yyisDefaultedState (yyStateNum yystate)
{
  return yypact_value_is_default (yypact[yystate]);
}

/** The default reduction for YYSTATE, assuming it has one.  */
static yyRuleNum
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
static void
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
static yyStateNum
yyLRgotoState (yyStateNum yystate, yySymbol yysym)
{
  int yyr = yypgoto[yysym - YYNTOKENS] + yystate;
  if (0 <= yyr && yyr <= YYLAST && yycheck[yyr] == yystate)
    return yytable[yyr];
  else
    return yydefgoto[yysym - YYNTOKENS];
}

static yybool
yyisShiftAction (int yyaction)
{
  return 0 < yyaction;
}

static yybool
yyisErrorAction (int yyaction)
{
  return yyaction == 0;
}

                                /* GLRStates */

/** Return a fresh GLRStackItem in YYSTACKP.  The item is an LR state
 *  if YYISSTATE, and otherwise a semantic option.  Callers should call
 *  YY_RESERVE_GLRSTACK afterwards to make sure there is sufficient
 *  headroom.  */

static yyGLRStackItem*
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
static void
yyupdateSplit (yyGLRStack* yystackp, yyGLRState* yys)
{
  if (yystackp->yysplitPoint != YY_NULLPTR && yystackp->yysplitPoint > yys)
    yystackp->yysplitPoint = yys;
}

/** Invalidate stack #YYK in *YYSTACKP.  */
static void
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

static void
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
static void
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
static void
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

static void
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
static YYRESULTTAG
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
static YYRESULTTAG
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



#line 3766 "vtkParse.y" /* glr.c:2551  */

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
