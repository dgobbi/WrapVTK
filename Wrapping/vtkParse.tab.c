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
  VTK_PARSE_ATTRIB_CLASS  /* modify class, struct, union, or enum */
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

/* Set kind of attributes to collect in attribute_specifier_seq */
void setAttributeRole(int x)
{
  attributeRole = x;
}

/* Get the current kind of attribute */
int getAttributeRole()
{
  return attributeRole;
}

/* Ignore attributes until further notice */
void clearAttributeRole()
{
  attributeRole = 0;
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


#line 1815 "vtkParse.tab.c" /* glr.c:207  */

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
#line 1793 "vtkParse.y" /* glr.c:212  */

  const char   *str;
  unsigned int  integer;

#line 1984 "vtkParse.tab.c" /* glr.c:212  */
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

#line 2012 "vtkParse.tab.c" /* glr.c:230  */

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
#define YYLAST   9084

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  159
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  297
/* YYNRULES -- Number of rules.  */
#define YYNRULES  740
/* YYNRULES -- Number of states.  */
#define YYNSTATES  1227
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
       0,  1969,  1969,  1971,  1973,  1972,  1983,  1984,  1985,  1986,
    1987,  1988,  1989,  1990,  1991,  1992,  1993,  1994,  1995,  1996,
    1997,  1998,  1999,  2000,  2003,  2004,  2005,  2006,  2007,  2008,
    2011,  2012,  2019,  2026,  2027,  2027,  2031,  2038,  2039,  2042,
    2043,  2044,  2047,  2048,  2051,  2051,  2066,  2065,  2071,  2077,
    2076,  2081,  2087,  2088,  2089,  2092,  2094,  2096,  2099,  2100,
    2103,  2104,  2106,  2108,  2107,  2116,  2120,  2121,  2122,  2125,
    2126,  2127,  2128,  2129,  2130,  2131,  2132,  2133,  2134,  2135,
    2136,  2137,  2138,  2139,  2140,  2143,  2144,  2145,  2146,  2147,
    2150,  2151,  2152,  2153,  2156,  2157,  2160,  2162,  2165,  2170,
    2171,  2174,  2175,  2178,  2179,  2180,  2191,  2192,  2193,  2197,
    2198,  2202,  2202,  2215,  2221,  2229,  2230,  2231,  2234,  2235,
    2235,  2239,  2240,  2242,  2243,  2244,  2244,  2252,  2256,  2257,
    2260,  2262,  2264,  2265,  2268,  2269,  2277,  2278,  2281,  2282,
    2284,  2286,  2288,  2292,  2294,  2295,  2298,  2301,  2302,  2305,
    2306,  2305,  2310,  2351,  2354,  2355,  2356,  2358,  2360,  2362,
    2366,  2369,  2369,  2401,  2404,  2403,  2421,  2423,  2422,  2427,
    2429,  2427,  2431,  2433,  2431,  2435,  2438,  2435,  2449,  2450,
    2453,  2454,  2456,  2457,  2460,  2460,  2470,  2471,  2479,  2480,
    2481,  2482,  2485,  2488,  2489,  2490,  2493,  2494,  2495,  2498,
    2499,  2500,  2504,  2505,  2506,  2507,  2510,  2511,  2512,  2516,
    2522,  2515,  2533,  2537,  2537,  2549,  2548,  2557,  2561,  2564,
    2573,  2574,  2577,  2577,  2578,  2579,  2585,  2590,  2591,  2592,
    2595,  2598,  2599,  2601,  2602,  2605,  2605,  2613,  2614,  2615,
    2618,  2620,  2621,  2625,  2624,  2637,  2638,  2637,  2657,  2657,
    2661,  2662,  2665,  2666,  2669,  2675,  2676,  2676,  2679,  2680,
    2680,  2682,  2684,  2688,  2690,  2688,  2714,  2715,  2718,  2718,
    2720,  2720,  2722,  2722,  2727,  2728,  2728,  2736,  2739,  2809,
    2810,  2812,  2813,  2813,  2816,  2819,  2820,  2824,  2836,  2835,
    2853,  2854,  2858,  2860,  2860,  2878,  2878,  2880,  2884,  2885,
    2886,  2885,  2891,  2893,  2894,  2895,  2896,  2897,  2898,  2901,
    2902,  2906,  2907,  2911,  2912,  2916,  2917,  2918,  2919,  2922,
    2923,  2926,  2926,  2929,  2930,  2933,  2933,  2937,  2938,  2938,
    2945,  2946,  2949,  2950,  2951,  2952,  2953,  2956,  2958,  2960,
    2964,  2966,  2968,  2970,  2972,  2974,  2976,  2976,  2981,  2984,
    2987,  2990,  2990,  2998,  2998,  3006,  3007,  3008,  3009,  3010,
    3011,  3012,  3013,  3014,  3015,  3016,  3017,  3018,  3019,  3020,
    3021,  3022,  3023,  3024,  3025,  3026,  3027,  3034,  3035,  3036,
    3037,  3038,  3039,  3040,  3046,  3047,  3050,  3051,  3053,  3054,
    3057,  3058,  3061,  3062,  3063,  3064,  3067,  3068,  3069,  3070,
    3071,  3075,  3076,  3077,  3080,  3081,  3084,  3085,  3093,  3096,
    3096,  3098,  3098,  3102,  3103,  3105,  3109,  3110,  3112,  3112,
    3115,  3117,  3121,  3124,  3124,  3126,  3126,  3130,  3133,  3133,
    3135,  3135,  3139,  3140,  3142,  3144,  3146,  3148,  3150,  3154,
    3155,  3158,  3159,  3160,  3161,  3162,  3163,  3164,  3165,  3166,
    3167,  3168,  3169,  3170,  3171,  3172,  3173,  3174,  3175,  3176,
    3177,  3178,  3179,  3182,  3183,  3184,  3185,  3186,  3187,  3188,
    3189,  3190,  3191,  3192,  3193,  3194,  3195,  3196,  3216,  3217,
    3218,  3219,  3222,  3226,  3230,  3230,  3234,  3235,  3250,  3251,
    3276,  3276,  3280,  3280,  3284,  3284,  3288,  3288,  3292,  3292,
    3296,  3296,  3299,  3300,  3303,  3305,  3306,  3307,  3308,  3311,
    3311,  3315,  3316,  3319,  3320,  3321,  3321,  3324,  3325,  3327,
    3328,  3331,  3332,  3340,  3340,  3350,  3351,  3351,  3350,  3360,
    3360,  3370,  3370,  3379,  3379,  3379,  3412,  3411,  3422,  3423,
    3423,  3422,  3432,  3450,  3450,  3455,  3455,  3460,  3460,  3465,
    3465,  3470,  3470,  3475,  3475,  3480,  3480,  3485,  3485,  3490,
    3490,  3507,  3507,  3521,  3558,  3596,  3633,  3634,  3641,  3642,
    3643,  3644,  3645,  3646,  3647,  3648,  3649,  3650,  3651,  3652,
    3655,  3656,  3657,  3658,  3659,  3660,  3661,  3662,  3663,  3664,
    3665,  3666,  3667,  3668,  3669,  3670,  3671,  3672,  3673,  3674,
    3675,  3676,  3677,  3678,  3679,  3680,  3681,  3682,  3683,  3684,
    3685,  3686,  3687,  3688,  3691,  3692,  3693,  3694,  3695,  3696,
    3697,  3698,  3699,  3700,  3701,  3702,  3703,  3704,  3705,  3706,
    3707,  3708,  3709,  3710,  3711,  3712,  3713,  3714,  3715,  3716,
    3717,  3718,  3719,  3720,  3723,  3724,  3725,  3726,  3727,  3728,
    3729,  3730,  3731,  3738,  3739,  3742,  3743,  3744,  3745,  3745,
    3746,  3749,  3750,  3753,  3754,  3755,  3756,  3786,  3786,  3787,
    3788,  3789,  3790,  3813,  3814,  3817,  3818,  3819,  3820,  3823,
    3824,  3825,  3828,  3829,  3831,  3832,  3834,  3835,  3838,  3839,
    3842,  3843,  3844,  3848,  3847,  3861,  3862,  3865,  3865,  3867,
    3867,  3871,  3871,  3873,  3873,  3875,  3875,  3879,  3879,  3884,
    3885,  3887,  3888,  3891,  3892,  3895,  3896,  3899,  3900,  3901,
    3902,  3903,  3904,  3905,  3906,  3906,  3906,  3906,  3906,  3907,
    3908,  3909,  3910,  3911,  3914,  3917,  3918,  3921,  3924,  3924,
    3924
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
  "$@64", "class_attribute_specifier_seq", "$@65",
  "attribute_specifier_seq", "attribute_specifier", "attribute_list",
  "attribute", "$@66", "attribute_pack", "attribute_sig", "$@67",
  "attribute_token", "attribute_contents", "attribute_contents_item",
  "declaration_macro", "$@68", "$@69", "$@70", "$@71", "$@72", "$@73",
  "$@74", "$@75", "$@76", "$@77", "$@78", "$@79", "$@80", "$@81", "$@82",
  "$@83", "$@84", "$@85", "$@86", "$@87", "$@88", "$@89", "opt_comma",
  "operator_id", "operator_id_no_delim", "keyword", "literal",
  "constant_expression", "constant_expression_item", "$@90",
  "common_bracket_item", "common_bracket_item_no_scope_operator",
  "any_bracket_contents", "bracket_pitem", "any_bracket_item",
  "braces_item", "angle_bracket_contents", "braces_contents",
  "angle_bracket_pitem", "angle_bracket_item", "angle_brackets_sig",
  "$@91", "right_angle_bracket", "brackets_sig", "$@92", "$@93",
  "parentheses_sig", "$@94", "$@95", "$@96", "braces_sig", "$@97",
  "ignored_items", "ignored_expression", "ignored_item",
  "ignored_item_no_semi", "ignored_item_no_angle", "ignored_braces",
  "ignored_brackets", "ignored_parentheses", "ignored_left_parenthesis", YY_NULLPTR
};
#endif

#define YYPACT_NINF -1040
#define YYTABLE_NINF -694

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const short int yypact[] =
{
   -1040,    91,   101, -1040, -1040,  6968, -1040,   155,   201,   234,
     245,   250,   276,   297,   115,   153,   212, -1040, -1040, -1040,
     313, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
     112, -1040,  4339, -1040, -1040,  8616,   667,  1820, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040,   269,   281,   301,   322,   333,   338,
     341,   342,   350,   359,   367,   380,   -30,    16,    37,    66,
     106,   116,   138,   146,   150,   158,   186,   221,   233,   260,
     267,   324,   340,   351,   382,   395,   417, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040,    10, -1040, -1040, -1040, -1040, -1040,
   -1040,  8283, -1040,    54,    54,    54,    54, -1040,   418,  8616,
   -1040,    84, -1040,   118,  7582,  8971,   232,  7757,   143,   185,
   -1040,   409,  8394, -1040, -1040, -1040, -1040,   151,   114, -1040,
   -1040, -1040, -1040, -1040, -1040,   543, -1040, -1040,   438,  4807,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040,    18, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040,    74,  7757,    21,    26,    40,    45,   120,   133,   157,
     568, -1040, -1040, -1040, -1040, -1040,  7778,   232,   232,  8616,
     151, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,   463,
      21,    26,    40,    45,   120,   133,   157, -1040, -1040, -1040,
    7757,  7757, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040,   458,   467, -1040,  7582,  7757,   232,
     232,  1873, -1040, -1040, -1040,  1873,  1873, -1040,  1873,  1873,
    1873,  1873,  1873,  1873,  1873,  1873,  1873,  1873,  1873,  1873,
    1873,  1873,  7196,   469,  8061, -1040,  7196, -1040,  7561,   460,
    7757, -1040, -1040, -1040, -1040, -1040, -1040,  8283, -1040, -1040,
    8505,   151,   476, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040,  8616, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
     465,   232,   232,   232, -1040, -1040, -1040, -1040,   409, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040,  7582, -1040, -1040, -1040, -1040, -1040, -1040,  7889,
   -1040,   393,    65, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040,   307, -1040, -1040, -1040,   -51, -1040, -1040, -1040,  2089,
    2311, -1040, -1040,   306, -1040,  2467,  3559,  2623, -1040, -1040,
   -1040, -1040, -1040, -1040,  7428,  8172,  7428,  7611, -1040, -1040,
   -1040, -1040, -1040, -1040,  7912, -1040,  2779,   776,   480, -1040,
     482, -1040,   484, -1040, -1040, -1040,  6679,  7582, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040,   483,  1873,  1873,  1873,   485,
     487,  1873,   491,   494,   496,   497,   498,   499,   502,   503,
     504,   505,   506,   507,   508,   513, -1040, -1040,   520, -1040,
     151, -1040, -1040, -1040, -1040, -1040, -1040,    75, -1040,  8860,
     823,   232,   232,   543,   527,  1873, -1040, -1040, -1040,   455,
   -1040,  7757,  8505,  7889,  7757,   528,  2935,   521,  8244,   766,
     476, -1040, -1040, -1040, -1040, -1040,  7196,  8172,  7196,  7611,
   -1040, -1040, -1040, -1040,   415, -1040, -1040, -1040,  1608, -1040,
   -1040,   522, -1040,  7582,   -20, -1040, -1040, -1040,   529,   526,
    7912, -1040,   534,   151, -1040, -1040, -1040, -1040, -1040, -1040,
    2176,   206, -1040,   766,   542,  3715, -1040, -1040,   535, -1040,
   -1040, -1040, -1040,    69, -1040,  8727,   113,   639, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040,   548, -1040,   151,    59,
     550,   129,  7428,  7428,   223,   131, -1040, -1040, -1040, -1040,
     552,   232, -1040, -1040, -1040,   543,   686,   546,   547,    25,
   -1040, -1040,   551, -1040,   549, -1040, -1040, -1040, -1040, -1040,
   -1040,   556,   557,   558, -1040, -1040,   562,  8616, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
    7757, -1040,   564, -1040, -1040,   122,  1689, -1040, -1040,   553,
   -1040, -1040,   232,   232,  8860, -1040,   166, -1040,   560,  8616,
     570, -1040, -1040,  7582,   566, -1040,    82, -1040, -1040,   565,
     625, -1040,   232, -1040,   521,  5743,   576,   110,   578,   455,
    2176, -1040,   415, -1040, -1040,   574,    78, -1040, -1040,   572,
     287, -1040, -1040, -1040, -1040, -1040,  6211, -1040, -1040,   864,
   -1040, -1040,   543,   415,   252,   573,   232, -1040,   634,    92,
   -1040, -1040, -1040, -1040, -1040,  7757,  7757,  7757, -1040,   232,
     232,  8616,   151,   114, -1040, -1040, -1040, -1040,   151,   113,
    4963,  5119,  5275, -1040,   583, -1040, -1040, -1040,   590,   591,
   -1040,   114, -1040,   588, -1040,   595,  8616, -1040,   589,   592,
   -1040, -1040, -1040, -1040,  8616, -1040, -1040, -1040,  8616,  8616,
   -1040,   586,  8616,  8616,  8616,  8616,  8616,  8616,  8616,  8616,
    8616,  8616,   598, -1040, -1040, -1040, -1040, -1040,   601, -1040,
   -1040, -1040,   555,   602, -1040,   699,   658, -1040, -1040, -1040,
   -1040,  1873, -1040, -1040, -1040,   299,  7757,   658,  3091, -1040,
   -1040,   605, -1040, -1040, -1040, -1040,   604, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040,   612, -1040,    78, -1040, -1040, -1040, -1040, -1040,
   -1040,   366, -1040,    74, -1040, -1040, -1040, -1040,   572, -1040,
     596, -1040,   608,   114, -1040,  5899, -1040,  6211, -1040, -1040,
   -1040, -1040,   435, -1040,   328, -1040, -1040, -1040,   766, -1040,
   -1040, -1040, -1040,   306, -1040, -1040, -1040, -1040,  7912, -1040,
   -1040, -1040, -1040, -1040,   151, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,   521,
   -1040,   151, -1040, -1040,   609,  8616, -1040,   611,  8616, -1040,
     614,   616,   618,   620,   621,   635,   643,   646,   610,   636,
   -1040,   647,  6834, -1040,  7757, -1040, -1040, -1040,  7757, -1040,
    1689, -1040, -1040,  6211, -1040,   656, -1040, -1040, -1040, -1040,
   -1040, -1040,   709,  8616,    78, -1040, -1040, -1040, -1040, -1040,
   -1040,   521,    74,  8838, -1040, -1040, -1040, -1040,   648, -1040,
   -1040, -1040, -1040, -1040, -1040,   521, -1040,  6523, -1040,  4495,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,   360,
   -1040,   657,    65,  2176,   657, -1040,   659,   664, -1040, -1040,
     660, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040,   792,   793, -1040,  7218,   130,  7727,    82, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
    7102, -1040,    54, -1040, -1040, -1040,   671,   465,  7582,  7334,
     151, -1040,   658,  1689,   658,   602,  6211,  4651, -1040,   761,
   -1040,   543, -1040, -1040,   151, -1040, -1040,  5431,  5743,  5587,
     666, -1040,  8838, -1040, -1040,   114,   672,  6211,   669, -1040,
   -1040, -1040, -1040, -1040,  6211,   521,  6055,  2176, -1040, -1040,
   -1040, -1040, -1040,   674,   151, -1040,   657, -1040, -1040,   676,
   -1040,   679,   680,   690, -1040, -1040, -1040,   862,    54,   465,
    7450,   658, -1040, -1040, -1040, -1040,  7102, -1040, -1040,  7450,
   -1040, -1040, -1040, -1040,  7582,  7889, -1040, -1040, -1040,    82,
      78, -1040, -1040,   688, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040,  6211, -1040,  6211,   693, -1040, -1040, -1040,  6367, -1040,
   -1040, -1040, -1040, -1040,  3871, -1040, -1040, -1040,  7941, -1040,
   -1040,   862, -1040, -1040,  7889,  7450,   701, -1040, -1040,   673,
   -1040,   393, -1040, -1040, -1040,  2176, -1040, -1040, -1040, -1040,
    6367, -1040,   378,   335, -1040, -1040, -1040,   135, -1040,  7941,
   -1040,  8100, -1040,   702, -1040, -1040,  2176,   543, -1040, -1040,
   -1040, -1040, -1040,    82,    97,  3247,  4027,   411,    62,  8100,
     147, -1040, -1040,  3403, -1040, -1040, -1040, -1040, -1040, -1040,
      70,   411, -1040,   335,  4183, -1040, -1040
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
      15,     0,   330,   490,     0,     0,     0,     0,   490,   417,
     332,   349,     0,   490,   392,   393,   394,   178,   285,   409,
     413,   416,   490,   490,    21,   491,   117,   116,   398,     0,
     445,   446,   447,   441,   442,   443,   444,   739,   740,   650,
     645,   646,   647,   644,   648,   649,   651,   652,   449,   450,
     448,   709,   617,   616,   618,   637,   620,   622,   621,   623,
     624,   625,   626,   629,   630,   628,   627,   633,   636,   619,
     638,   639,   631,   615,   614,   635,   634,   590,   591,   632,
     642,   641,   640,   643,   592,   593,   594,   723,   595,   596,
     597,   603,   604,   598,   599,   600,   601,   602,   605,   606,
     607,   608,   609,   610,   611,   612,   613,   721,   720,   733,
     461,   462,   451,   452,   453,   454,   455,   456,   457,   458,
     459,   460,   709,   727,   724,   728,   738,   164,   709,   586,
     587,   581,   726,   580,   582,   583,   584,   585,   588,   589,
     725,   732,   731,   722,   729,   730,   711,   717,   719,   718,
     709,     0,     0,   445,   446,   447,   441,   442,   443,   444,
     397,   384,   500,   384,   500,   490,     0,   490,   417,     0,
     178,   377,   379,   378,   382,   383,   381,   380,   709,    34,
     357,   355,   356,   360,   361,   359,   358,   364,   363,   362,
       0,     0,   375,   376,   365,   366,   367,   368,   369,   370,
     371,   372,   373,   374,     0,   492,   331,     0,     0,   333,
     334,     0,   525,   529,   531,     0,     0,   538,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   285,     0,    51,   502,   285,   111,   118,     0,
       0,    27,    38,    24,   500,    26,    28,     0,    25,    29,
       0,   178,   250,   239,   709,   188,   238,   190,   191,   189,
     209,   500,     0,   212,    22,   421,   346,   196,   194,   245,
     337,     0,   333,   334,   335,    59,   336,    58,     0,   340,
     338,   339,   341,   420,   342,   351,   384,   500,   384,   500,
     137,   207,     0,   490,   411,   390,   295,   297,   179,     0,
     281,   266,   178,   494,   494,   494,   408,   286,   478,   479,
     488,   480,   384,   440,   439,   509,   503,     3,   711,     0,
       0,   696,   695,   169,   163,     0,     0,     0,   703,   705,
     701,   354,   490,   398,   285,    51,   285,   118,   337,   384,
     384,   152,   148,   144,     0,   147,     0,     0,     0,   155,
       0,   153,     0,   502,   157,   156,     0,     0,   357,   355,
     356,   360,   361,   359,   358,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   389,   388,     0,   281,
     178,   490,   386,   387,    62,    40,    49,   414,   490,     0,
       0,    59,     0,   501,     0,   123,   107,   119,   114,   490,
     492,     0,     0,     0,     0,     0,     0,   256,     0,     0,
     250,   248,   343,   344,   345,   684,   285,    51,   285,   118,
     197,   195,   391,   384,   486,   208,   213,   492,     0,   192,
     220,   319,   492,     0,     0,   268,   278,   267,     0,     0,
       0,   311,     0,   178,   483,   502,   482,   484,   481,   489,
     410,     0,   506,     0,     4,     0,   714,   716,     0,   710,
     713,   715,   734,     0,   166,     0,     0,     0,   735,    31,
     712,   737,   673,   673,   673,   419,     0,   144,   178,   414,
       0,   490,   285,   285,     0,   319,   492,   333,   334,    33,
       0,     0,     3,   160,   161,   493,     0,   590,   591,     0,
     575,   574,     0,   572,     0,   573,   217,   579,   159,   158,
     523,     0,     0,     0,   533,   536,     0,     0,   543,   547,
     551,   555,   545,   549,   553,   557,   559,   561,   563,   564,
       0,    42,   280,   284,   385,    63,     0,    61,    39,    48,
      57,   490,    59,     0,     0,   109,     0,   121,   124,     0,
     113,   415,   490,     0,   251,   252,     0,   709,   237,     0,
     490,   414,     0,   246,   256,     0,     0,   414,     0,   490,
     412,   406,   487,   296,   220,     0,   233,   292,   320,     0,
     313,   198,   193,   492,   277,   282,     0,   707,   271,     0,
     293,   312,   495,   486,   509,     0,   517,   349,   511,   513,
      32,    30,   736,   167,   165,     0,     0,     0,   435,   434,
     433,     0,   178,   285,   428,   432,   180,   181,   178,     0,
       0,     0,     0,   139,   143,   146,   141,   113,     0,     0,
     138,   285,   149,   313,    36,     4,     0,   578,     0,     0,
     577,   576,   568,   569,     0,   526,   530,   532,     0,     0,
     539,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   566,    66,    67,    68,    45,   490,     0,   103,
     104,   105,   101,    50,    94,    99,   178,    46,    55,   490,
     112,   123,   125,   120,   106,   332,     0,   178,     0,   496,
     262,   257,   258,   263,   347,   220,     0,   699,   662,   691,
     667,   692,   693,   697,   668,   672,   671,   666,   669,   670,
     689,   661,   690,   685,   688,   352,   663,   664,   665,    43,
      41,   110,   113,   407,   233,   215,   226,   224,   222,   230,
     235,     0,   221,   228,   229,   219,   234,   325,   322,   323,
       0,   243,     0,   285,   660,   657,   658,   269,   653,   655,
     656,   686,     0,   274,   298,   485,   508,   504,     0,   512,
     510,   515,   514,   169,   436,   437,   438,   430,   290,   170,
     494,   427,   384,   173,   178,   678,   680,   681,   704,   676,
     677,   675,   679,   674,   706,   702,   140,   142,   145,   256,
      35,   178,   570,   571,     0,     0,   534,     0,     0,   542,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     567,     0,     0,    65,     0,   102,   490,   100,     0,    96,
       0,    56,   122,     0,   711,     0,   129,   253,   254,   241,
     210,   502,   259,     0,   233,   496,   673,   684,   673,   108,
     214,   256,     0,     0,   225,   231,   232,   227,   328,   324,
     316,   317,   318,   315,   314,   256,   283,     0,   654,     0,
     275,   273,   299,   294,   302,   518,   519,   168,   384,   298,
     291,   182,   178,   429,   182,   176,     0,     0,   524,   527,
       0,   537,   540,   544,   548,   552,   556,   546,   550,   554,
     558,     0,     0,   565,     0,   397,     0,     0,    84,    80,
      71,    77,    64,    79,    73,    72,    76,    74,    69,    70,
       0,    78,     0,   203,   204,    75,     0,   330,     0,     0,
     178,    81,   178,     0,   178,    47,   126,   128,   127,   240,
     220,   497,   261,   490,   178,   247,   249,     0,     0,     0,
       0,   223,     0,   423,   236,   285,     0,     0,     0,   659,
     683,   708,   682,   687,     0,   256,   516,   431,   287,   184,
     171,   183,   309,     0,   178,   174,   182,   150,   162,     0,
     711,     0,     0,     0,    92,   500,    90,     0,     0,     0,
       0,   178,    82,    85,    87,    88,     0,    86,    89,     0,
     199,    83,   492,   205,     0,     0,    97,    95,    98,     0,
     233,   260,   264,     0,   694,   698,   496,   425,   384,   422,
     498,   329,   496,   276,     0,   522,   520,   521,     0,   288,
     310,   177,   303,   528,     0,   541,   560,   562,     0,   500,
      91,     0,    93,   500,     0,     0,     0,   492,   202,     0,
     211,   266,   700,   216,   384,   424,   326,   502,   244,   496,
     185,   186,   298,   151,   535,   709,   711,   414,   132,     0,
     500,     0,   200,     0,   709,   265,   426,   499,   300,   187,
     289,   305,   304,     0,   308,     0,     0,     0,    60,     0,
     414,   133,   201,     0,   303,   306,   307,   711,   135,   130,
      60,     0,   242,   301,     0,   131,   134
};

  /* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
   -1040, -1040,  -384, -1040, -1040,   834,  -102, -1040, -1040, -1040,
   -1040,  -824,  -108,    -1,   -34, -1040, -1040, -1040, -1040,   263,
    -433,   -91,  -720, -1040, -1040, -1040, -1040,  -100, -1040,  -107,
    -209, -1040, -1040,    43,   -95,   -94,   -33, -1040, -1040,     4,
    -474, -1040, -1040,    38, -1040, -1040, -1040,  -257,  -895,   -90,
    -113,  -390,   244,    93, -1040, -1040, -1040, -1040,   247,   -86,
   -1040, -1040,     5, -1040,     0, -1040, -1040, -1040,   -36, -1040,
   -1040, -1040, -1040, -1040, -1040,  -119,   109,  -927, -1040, -1040,
   -1040,   857, -1040, -1040, -1040,   -79,  -160,    33,   -61, -1040,
   -1040,  -275,  -495, -1040, -1040, -1040,  -311,  -304,  -537,  -661,
   -1040, -1040, -1040, -1040,  -805, -1040, -1040,   -57, -1040, -1040,
   -1040, -1040,   -97, -1040, -1040, -1040, -1040,   325, -1040,    50,
    -625, -1040, -1040, -1040,  -196, -1040, -1040,  -303, -1040, -1040,
   -1040, -1040, -1040, -1040,     7,   361,  -305,   364, -1040,     1,
     -41,  -660, -1040, -1040,  -240, -1040,  -668, -1040,  -955, -1040,
   -1040,  -329, -1040, -1040,  -422, -1040, -1040,  -467, -1040, -1040,
      24, -1040, -1040, -1040,  1004,   844,   999,    49, -1040, -1040,
      79,   882,    -5, -1040,    30, -1040,  1104,   -29,   -88, -1040,
       6,   885, -1040, -1040,  -493, -1040,   705,   207, -1040, -1040,
     -92,  -894, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040,   308,   213,   175,  -397,   474, -1040,   475, -1040,
     184, -1040,    44, -1040,  -533, -1040,  -394, -1040,  -905, -1040,
   -1040, -1040,   -99, -1040,  -342, -1040, -1040,   187, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040,   -28, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
   -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040, -1040,
     -15,   100,    72,  -883,  -830, -1040,  -623,   -78,  -558,  -174,
     -76, -1040,   -52, -1040, -1039, -1040,  -667, -1040,  -560, -1040,
   -1040, -1040,  -250, -1040, -1040, -1040,   348, -1040,  -234,  -418,
   -1040,  -409,    55,   102, -1040,  -630, -1040
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const short int yydefgoto[] =
{
      -1,     1,     2,     4,    89,   361,    91,    92,    93,   468,
      94,    95,    96,   363,    98,   353,    99,   950,   666,   381,
     517,   518,   669,   665,   797,   798,  1032,  1114,  1034,   803,
     804,   948,   944,   805,   101,   102,   103,   525,   104,   364,
     528,   679,   676,   677,   953,   365,   955,  1106,  1188,   106,
     107,   606,   614,   607,   461,   462,   919,  1152,   463,   108,
     324,   109,   366,   766,   367,   443,   593,   893,   594,   595,
    1001,   596,  1004,   597,  1096,   898,   748,  1090,  1091,  1148,
    1180,   368,   113,   114,   115,  1117,  1042,  1043,   117,   537,
    1060,   118,   555,   704,   556,   971,   557,   119,   559,   706,
     862,   972,   863,   864,   865,   866,   973,   375,   376,  1059,
     560,   985,  1044,   540,   825,   389,   694,   535,   684,   685,
     689,   690,   821,  1063,   822,   963,  1171,   566,   567,   716,
     568,   569,   882,  1084,   369,   420,   508,   564,   873,   509,
     510,   899,  1182,   999,   421,   884,   422,   554,   993,  1085,
    1214,  1183,  1093,   572,   561,   984,   707,   994,   709,   868,
     869,   978,  1076,  1077,   806,   122,   285,   286,   539,   125,
     126,   127,   287,   545,   288,   271,   130,   131,   352,   511,
     382,   133,   134,   135,   136,   702,  1050,   138,   432,   553,
     139,   140,   272,  1074,  1075,  1138,  1174,   742,   743,   902,
     998,   744,   141,   142,   143,   427,   428,   429,   430,   723,
     703,   431,   681,     6,   472,   473,   574,   575,   960,   961,
    1176,  1177,   354,   355,   145,   436,   581,   582,   583,   890,
     728,   996,   729,  1086,  1146,   144,   774,   486,   925,  1099,
     487,   488,   778,  1010,   779,   491,   928,  1101,   782,   786,
     783,   787,   784,   788,   785,   789,   790,   791,   941,   636,
     837,   838,   839,   877,   878,   987,   879,   841,   750,   912,
     913,  1083,   695,   989,   842,   843,   880,   967,   444,   846,
     968,   966,   847,   604,   602,   603,   848,   881,   439,   446,
     589,   590,   591,   267,   268,   269,   270
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const short int yytable[] =
{
     128,   281,   283,   362,    97,   111,   358,   299,   440,   105,
     110,   132,   120,   523,   445,   356,   475,   263,   419,   410,
     585,   451,   609,   476,   705,   573,   712,   388,   844,   710,
     576,   577,   329,   734,   394,   129,   447,   600,   116,   284,
     414,   289,   615,   854,  1088,   751,   752,   988,     5,   970,
     465,   524,   474,   584,   124,   680,   817,   377,   378,   379,
    1066,   701,   667,   387,   466,   667,   610,   330,   711,   826,
    1056,   411,   840,   667,   900,   416,   417,  1095,   667,  1073,
     900,   856,   441,   763,   448,   449,   327,   266,   903,   770,
    -505,     3,   157,   158,   708,  -505,   398,   426,   406,   408,
     372,    -2,   448,   449,   265,   691,  -377,   157,   158,  1181,
     857,  -379,   331,   667,   697,   558,   714,   370,  1030,   392,
     395,   715,   329,   858,   148,  -378,   859,   911,   911,   911,
    -382,   625,   264,   441,   263,   845,   409,   757,   667,   746,
     536,  1199,   453,   423,   116,   860,   712,   357,   708,   418,
     667,   793,   794,   795,   393,   396,   149,   330,   332,  1065,
     124,   416,   417,   747,   964,  -377,   639,   385,   442,  1151,
    -379,   464,   403,   476,   149,   771,   600,   415,  1137,   333,
     872,   412,   571,   455,  -378,   457,   433,   434,   711,  -382,
     373,   374,   423,   454,  1141,   456,   -60,   414,   668,   -60,
    1104,  1143,   638,   391,   438,  -383,   850,   262,   334,   853,
     733,   668,   -60,   424,   425,   -60,   450,   861,  -381,   442,
     384,   265,   758,   759,   246,   852,   988,  1200,    38,   558,
     701,  1173,   891,   722,   450,   418,   900,  1178,   765,   246,
    -377,   696,  -380,   698,  1005,   261,   850,   -60,   335,   264,
     -60,  -364,   533,   900,  -331,   459,   460,  -364,   336,   558,
     796,  1007,   424,   425,  -383,   531,  -118,   329,   100,   527,
      38,   668,   -60,   762,  1198,   -60,  -321,  -381,   414,  -333,
     337,   392,   538,   850,   -60,  -333,  -379,   -60,   338,  -363,
     414,  -357,   339,   284,  1006,  -363,  1211,  -357,   282,  -377,
     340,  -380,   330,   570,   810,   329,   329,   811,   547,   411,
     549,   988,  1219,   988,  1211,   551,   393,    38,   546,  -378,
     548,  -334,   392,   329,   262,  1170,  1225,  -334,   341,   385,
    -382,   403,  -172,   721,   900,  -383,   406,  -355,   146,   147,
     330,   330,  1092,  -355,   580,  -379,  1070,   724,  -362,   521,
    -175,   550,   725,   329,  -362,   329,  -172,   393,   330,   760,
    1078,  -381,   261,   342,   761,   391,   911,  1201,   465,  1202,
    -356,   612,   613,   532,   100,   343,  -356,   477,  -378,   558,
    1203,  -360,  -380,  1204,   522,   974,  -361,  -360,   330,  -382,
     330,   570,  -361,  -507,  -383,   407,   900,  1112,  -507,  1130,
     116,   844,   344,   519,  1132,  -375,   391,   392,  1067,   345,
    1069,  -375,  -359,   608,   329,   608,   124,  -376,  -359,   412,
    -381,   975,   976,  -376,   263,   263,   900,   870,   671,   871,
     263,   263,   263,  -358,  1150,   398,   242,  -365,   954,  -358,
     414,  -380,   393,  -365,   911,   840,   911,    21,    22,   330,
     521,   263,   329,   818,   570,   424,   425,   552,  -366,   617,
    1144,   637,   621,   911,  -366,   700,   346,  1207,   563,  -367,
     992,   411,   392,  -321,  -368,  -367,  1000,  -369,  -370,   892,
    -368,   844,   347,  -369,  -370,   522,  -371,   330,  1207,   464,
    1221,   391,  -371,   348,   618,  -372,   605,   522,   406,  1169,
    1221,  -372,   992,  -373,   519,  -321,  1002,   393,  1134,  -373,
     398,   265,   265,   844,   672,   621,  -374,   265,   265,   265,
     992,   263,  -374,  -321,   349,   840,   329,   513,   329,   329,
    -270,   513,   565,   521,   692,  -272,  1057,   350,   265,   264,
     264,   398,   521,   637,   329,   264,   264,   264,  1185,   673,
     522,  1186,   282,   405,   727,   664,   391,   840,   392,   351,
     380,   330,   670,   330,   330,   617,   264,   435,   522,   674,
     263,   608,   608,  1215,  1216,   437,   990,   522,   991,   330,
     453,   412,   683,   809,   799,   800,   801,   519,  1168,  1166,
     739,  -118,  -118,   393,   471,   527,   519,   749,   391,   737,
     618,   741,   467,  -154,   247,  1094,   514,   541,   265,   980,
     981,   982,   983,   977,   262,   262,   534,   622,   623,  1061,
     262,   262,   262,   624,   640,   740,   644,  1168,   645,   513,
     282,   513,   647,   407,  1193,   648,   264,   649,   650,   651,
     652,   262,   391,   653,   654,   655,   656,   657,   600,   897,
     658,   659,   261,   261,   660,   329,   661,   265,   261,   261,
     261,   329,   726,   675,  -255,   687,   717,  -321,   719,   672,
     291,   292,   293,   294,   295,   296,   297,   720,   392,   261,
     730,   732,  1154,   359,   753,   264,   756,   949,   764,   767,
     330,   768,   769,   807,   772,   773,   330,   775,   958,   812,
     776,   777,   901,   780,   673,   715,   814,   816,   819,   820,
     137,   262,   849,   393,   851,   808,   855,   867,   889,   887,
     608,   513,  1071,   513,   761,  1187,   916,   917,   870,   929,
     329,   329,   329,   920,   823,   922,   947,  1122,   923,   940,
     290,   943,   418,   946,   558,   600,   962,   965,   969,   261,
     871,  1021,  1008,   391,  1011,   513,  1208,  1013,  1210,  1014,
     262,  1015,   391,  1016,  1017,   330,   330,   330,  1206,   291,
     292,   293,   294,   295,   296,   297,  1220,  1022,  1018,   291,
     292,   293,   294,   295,   296,   297,  1019,   513,   513,  1020,
    1023,   883,  1058,  1062,  -327,   282,  1089,   600,   261,  1224,
    1098,  1100,  1097,   263,   298,  1102,  1103,  1121,  1129,  1136,
    1194,   329,  1142,  1167,  1003,   600,   371,  1149,  1140,  1153,
     558,   558,  1155,  1156,   383,    33,   291,   292,   293,   294,
     295,   296,   297,  1157,  1172,  1197,  1179,  1192,  1212,    90,
    1029,   942,  1033,  1055,  1127,   945,   330,  1035,  1036,   952,
    1160,   754,  1037,   951,   918,   755,  1038,   997,   904,   727,
     558,    38,   112,  1041,  1108,   693,   957,  1131,  1195,   398,
     836,   663,    33,   662,   986,   513,   159,   160,   161,   162,
     163,   164,   165,   166,   167,  1223,   813,    17,    18,    19,
     265,   836,   979,   617,    21,    22,    23,    24,    25,    26,
      27,    28,    29,   745,   280,   578,   579,   885,   835,  1079,
    1087,   886,  1147,  1082,  1051,  1068,   718,   956,   264,   328,
       0,     0,     0,     0,     0,   836,   836,   836,   618,   835,
       0,  1125,   362,  1126,     0,  1128,   410,   128,     0,   329,
       0,  1031,  1040,   329,     0,   329,   105,  1039,  1049,  1045,
       0,  1205,  1123,     0,     0,     0,     0,   414,     0,     0,
    1213,     0,     0,   835,   835,   835,     0,   995,   390,     0,
       0,   400,   129,     0,   330,     0,     0,     0,   330,  1072,
     330,     0,     0,     0,     0,  1120,     0,     0,   411,     0,
    1053,  1048,  1164,   262,     0,     0,     0,     0,     0,   362,
       0,     0,     0,     0,   123,     0,  1158,     0,   399,   121,
     402,   404,     0,  1123,     0,   406,   408,   413,   414,   128,
       0,   329,  1123,     0,  1107,     0,     0,   414,     0,     0,
    1110,   261,     0,     0,  1139,   128,   326,     0,     0,  1113,
    1116,   325,   263,   392,   128,  1115,  1119,  1118,   329,   411,
    1175,  1162,   836,   409,   129,     0,   330,     0,   411,     0,
    1189,     0,     0,     0,  1191,     0,     0,     0,  1123,     0,
     129,     0,   371,   414,     0,   327,     0,     0,   393,   129,
       0,     0,     0,   330,     0,   406,  1196,     0,     0,  1048,
     835,  1209,     0,     0,     0,     0,   398,     0,  1124,     0,
       0,     0,     0,     0,   411,   128,     0,   823,     0,     0,
       0,   128,     0,  1161,   128,  1113,  1116,     0,     0,   392,
     617,  1115,  1165,  1118,     0,     0,   401,   391,   836,   265,
     458,   406,     0,     0,     0,   398,     0,     0,     0,   263,
     129,     0,     0,     0,     0,     0,   129,     0,     0,   129,
       0,     0,     0,   521,   393,   618,     0,   264,     0,   617,
     128,     0,   836,     0,   836,  1048,   835,     0,  1124,   402,
     404,   458,   400,     0,   413,     0,     0,     0,   513,     0,
       0,   383,     0,     0,   521,     0,   521,     0,   522,     0,
     263,   263,     0,     0,   618,   129,     0,     0,   263,     0,
     835,     0,   835,   391,   521,   100,     0,   519,     0,   263,
       0,   402,   404,     0,  1124,     0,     0,     0,     0,   522,
       0,   522,     0,     0,     0,     0,   265,     0,     0,   397,
       0,   836,   262,     0,     0,     0,   520,   512,   519,   522,
     519,   512,   836,   836,   836,     0,     0,     0,     0,     0,
       0,     0,   836,     0,   264,   413,   390,     0,   519,   836,
       0,   836,   513,   562,     0,     0,     0,   413,     0,   835,
     261,   326,     0,   542,   543,   544,   452,   265,   265,     0,
     835,   835,   835,     0,     0,   265,     0,  1105,     0,     0,
     835,     0,     0,     0,     0,     0,   265,   835,     0,   835,
       0,     0,     0,   100,     0,   264,   264,     0,   616,   326,
     326,     0,   407,   264,   469,   470,   836,     0,   836,     0,
       0,   458,     0,   836,   264,     0,     0,   401,     0,   262,
       0,     0,     0,     0,     0,     0,     0,   520,     0,   512,
       0,   512,     0,     0,     0,     0,     0,     0,     0,     0,
     513,     0,   781,     0,   835,   836,   835,   326,     0,   326,
       0,   835,   529,     0,   530,     0,     0,   261,     0,     0,
    1159,   513,     0,  1163,     0,     0,     0,   562,     0,   282,
     262,   262,   407,     0,     0,     0,     0,     0,   262,     0,
       0,     0,     0,   835,     0,     0,     0,     0,     0,   262,
       0,     0,     0,   402,   404,     0,     0,   713,     0,     0,
       0,     0,     0,     0,   616,     0,     0,   413,   261,   261,
     520,     0,     0,     0,  1190,     0,   261,     0,   282,   520,
       0,   512,     0,   512,     0,   485,     0,   261,     0,   489,
     490,     0,   492,   493,   494,   495,   496,   497,   498,   499,
     500,   501,   502,   503,   504,   505,   326,     0,   397,     0,
       0,   611,     0,     0,     0,   512,   620,     0,     0,     0,
       0,   921,     0,     0,     0,     0,     0,     0,     0,   924,
       0,     0,     0,   926,   927,     0,     0,   930,   931,   932,
     933,   934,   935,   936,   937,   938,   939,   512,   512,     0,
       0,     0,     0,   402,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   713,     0,     0,
     326,     0,     0,   326,     0,   682,     0,     0,   686,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   326,     0,
       0,     0,     0,   699,   543,   544,     0,     0,     0,   397,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   824,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   512,     0,     0,     0,     0,
     641,   642,   643,     0,   738,   646,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   888,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     626,   402,   404,   397,     0,     0,   413,     0,     0,   678,
    1009,     0,     0,  1012,     0,     0,     0,     0,     0,     0,
       0,     0,   397,     0,     0,     0,     0,     0,     0,     0,
       0,   397,     0,     0,     0,     0,     0,     0,     0,   326,
       0,     0,   627,   628,   792,   326,     0,     0,  1064,   204,
     205,   206,   629,   208,   209,   210,   211,   212,   213,   214,
     215,   216,   217,   218,   219,   220,   221,   222,   223,   224,
     225,   226,   300,   301,   302,   303,   304,   305,   306,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     307,   308,   309,     0,     0,     0,     0,     0,   799,   800,
     801,     0,     0,     0,     0,     0,   802,     0,     0,  1111,
       0,     0,     0,     0,   326,   326,   326,     0,    33,   894,
     895,   896,   616,     0,     0,     0,     0,   630,     0,   631,
     632,     0,   633,   634,     0,   249,   250,   251,   635,   253,
     254,   255,   256,   257,   258,   259,     0,     0,     0,     0,
       0,     0,     0,     0,    38,     0,     0,     0,   397,     0,
       0,     0,     0,     0,     0,     0,  1047,   815,     0,     0,
       0,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
     686,     0,     0,   300,   301,   302,   303,   304,   305,   306,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,   307,   308,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,  1109,    33,
     310,     0,   311,     0,     0,     0,   478,   479,   480,   481,
     482,   483,   484,     0,  1109,     0,     0,     0,   512,     0,
       0,     0,   458,  1109,   307,   308,   309,     0,     0,     0,
       0,     0,     0,     0,     0,    38,     0,     0,   328,     0,
       0,     0,     0,     0,     0,   678,     0,     0,     0,     0,
       0,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   413,     0,     0,     0,     0,     0,
       0,   123,     0,   326,     0,     0,  1046,   326,  1052,   326,
       0,     0,  1054,     0,  1109,     0,     0,   413,     0,     0,
    1109,     0,     0,  1109,     0,     0,     0,    88,   458,   562,
       0,     0,   512,     0,     0,   312,   313,   314,   315,   316,
     317,   318,   319,   320,   321,   322,   323,     0,     0,     0,
       0,     0,     0,     0,     0,   413,     0,     0,     0,     0,
       0,     0,     0,     0,   413,     0,     0,     0,   713,  1109,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   326,     0,     0,     0,     0,
     325,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     520,     0,     0,     0,     0,     0,   413,     0,     0,     0,
     413,     0,   326,     0,     0,     0,     0,     0,     0,     0,
     512,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   520,     0,   520,     0,     0,     0,     0,     0,     0,
       0,   512,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   520,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   506,   280,     0,
       0,     0,     0,     0,     0,   586,   242,   507,   243,   244,
     245,   246,     0,   587,   248,   588,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   397,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,     0,   397,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   397,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   586,   242,   592,
     243,   244,   245,   246,     0,   587,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586,   242,     0,   243,   244,   245,   246,
       0,   587,   248,   598,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
     242,     0,   243,   244,   245,   246,   601,   587,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   586,   242,   619,   243,   244,
     245,   246,     0,   587,   248,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
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
       0,   586,   242,   688,   243,   244,   245,   246,     0,   587,
     248,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   207,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   227,   228,   229,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   586,   242,   959,
     243,   244,   245,   246,     0,   587,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   586,   242,  1217,   243,   244,   245,   246,
       0,   587,   248,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   586,
     242,  1222,   243,   244,   245,   246,     0,   587,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,   227,   228,   229,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   599,   242,     0,   243,   244,
     245,   246,     0,   587,   248,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   150,   151,
     152,   153,   154,   155,   156,   157,   158,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   171,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
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
       0,   731,   242,     0,   243,   244,   245,   246,     0,   587,
     248,     0,   249,   250,   251,   252,   253,   254,   255,   256,
     257,   258,   259,   260,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
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
     243,   244,   245,   246,  1184,   587,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,  1218,   242,     0,   243,   244,   245,   246,
       0,   587,   248,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   150,   151,   152,   153,
     154,   155,   156,   157,   158,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   171,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   207,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,   227,   228,   229,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,  1226,
     242,     0,   243,   244,   245,   246,     0,   587,   248,     0,
     249,   250,   251,   252,   253,   254,   255,   256,   257,   258,
     259,   260,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,   185,   186,
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
     245,   246,     0,   247,   248,     0,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   258,   259,   260,   150,   151,
     152,   153,   154,   155,   156,   448,   449,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   827,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   905,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     828,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,  1080,   717,  1081,   906,   830,   907,   450,     0,   909,
     833,     0,   249,   250,   251,   910,   253,   254,   255,   256,
     257,   258,   259,   834,   150,   151,   152,   153,   154,   155,
     156,   157,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
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
     243,   244,   245,   246,     0,   587,   248,     0,   249,   250,
     251,   252,   253,   254,   255,   256,   257,   258,   259,   260,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   171,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   207,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,   227,   228,   229,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   242,     0,   243,   244,   245,   246,
       0,     0,   248,     0,   249,   250,   251,   252,   253,   254,
     255,   256,   257,   258,   259,   260,   150,   151,   152,   153,
     154,   155,   156,   448,   449,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   827,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   905,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     0,   828,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     717,     0,   906,   830,   907,   450,   908,   909,   833,     0,
     249,   250,   251,   910,   253,   254,   255,   256,   257,   258,
     259,   834,   150,   151,   152,   153,   154,   155,   156,   448,
     449,   159,   160,   161,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   827,   172,   173,   174,   175,   176,   177,
     178,   179,   180,     0,   181,   182,   183,   184,   185,   186,
       0,   187,   188,   189,   190,     0,     0,   191,   192,   193,
     194,   195,   196,   197,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   905,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     0,   828,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   717,     0,   906,   830,
     907,   450,   914,   909,   833,     0,   249,   250,   251,   910,
     253,   254,   255,   256,   257,   258,   259,   834,   150,   151,
     152,   153,   154,   155,   156,   448,   449,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   827,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   905,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     828,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   717,     0,   906,   830,   907,   450,   915,   909,
     833,     0,   249,   250,   251,   910,   253,   254,   255,   256,
     257,   258,   259,   834,   150,   151,   152,   153,   154,   155,
     156,   448,   449,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   827,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   905,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   828,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   717,     0,
     906,   830,   907,   450,     0,   909,   833,  1133,   249,   250,
     251,   910,   253,   254,   255,   256,   257,   258,   259,   834,
     150,   151,   152,   153,   154,   155,   156,   448,   449,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   827,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,   905,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,   828,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   717,     0,   906,   830,   907,   450,
       0,   909,   833,  1135,   249,   250,   251,   910,   253,   254,
     255,   256,   257,   258,   259,   834,   150,   151,   152,   153,
     154,   155,   156,   448,   449,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   827,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,   441,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     0,   828,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     717,     0,   829,   830,   831,   450,     0,   832,   833,     0,
     249,   250,   251,   442,   253,   254,   255,   256,   257,   258,
     259,   834,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,     0,  -657,  -657,  -657,  -657,  -657,  -657,
       0,  -657,  -657,  -657,  -657,     0,     0,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,     0,  -657,     0,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,  -657,     0,  -693,  -657,
    -657,  -657,     0,  -657,  -657,     0,  -657,  -657,  -657,  -657,
    -657,  -657,  -657,  -657,  -657,  -657,  -657,  -657,   150,   151,
     152,   153,   154,   155,   156,   448,   449,   159,   160,   161,
     162,   163,   164,   165,   166,   167,   168,   169,   170,   827,
     172,   173,   174,   175,   176,   177,   178,   179,   180,     0,
     181,   182,   183,   184,   185,   186,     0,   187,   188,   189,
     190,     0,     0,   191,   192,   193,   194,   195,   196,   197,
     198,   199,   200,   201,   202,   203,   204,   205,   206,   905,
     208,   209,   210,   211,   212,   213,   214,   215,   216,   217,
     218,   219,   220,   221,   222,   223,   224,   225,   226,     0,
     828,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   717,     0,  1145,   830,     0,   450,     0,   909,
     833,     0,   249,   250,   251,   910,   253,   254,   255,   256,
     257,   258,   259,   834,   150,   151,   152,   153,   154,   155,
     156,   448,   449,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   827,   172,   173,   174,   175,
     176,   177,   178,   179,   180,     0,   181,   182,   183,   184,
     185,   186,     0,   187,   188,   189,   190,     0,     0,   191,
     192,   193,   194,   195,   196,   197,   198,   199,   200,   201,
     202,   203,   204,   205,   206,   874,   208,   209,   210,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,     0,   828,     0,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,   230,   231,   232,   233,   234,   235,   236,
     237,   238,   239,   240,   241,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   717,     0,
       0,   830,     0,   450,     0,   875,   833,     0,   249,   250,
     251,   876,   253,   254,   255,   256,   257,   258,   259,   834,
     150,   151,   152,   153,   154,   155,   156,   448,   449,   159,
     160,   161,   162,   163,   164,   165,   166,   167,   168,   169,
     170,   827,   172,   173,   174,   175,   176,   177,   178,   179,
     180,     0,   181,   182,   183,   184,   185,   186,     0,   187,
     188,   189,   190,     0,     0,   191,   192,   193,   194,   195,
     196,   197,   198,   199,   200,   201,   202,   203,   204,   205,
     206,     0,   208,   209,   210,   211,   212,   213,   214,   215,
     216,   217,   218,   219,   220,   221,   222,   223,   224,   225,
     226,     0,   828,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   717,     0,     0,   830,     0,   450,
       0,   832,   833,     0,   249,   250,   251,     0,   253,   254,
     255,   256,   257,   258,   259,   834,   150,   151,   152,   153,
     154,   155,   156,   448,   449,   159,   160,   161,   162,   163,
     164,   165,   166,   167,   168,   169,   170,   827,   172,   173,
     174,   175,   176,   177,   178,   179,   180,     0,   181,   182,
     183,   184,   185,   186,     0,   187,   188,   189,   190,     0,
       0,   191,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   204,   205,   206,     0,   208,   209,
     210,   211,   212,   213,   214,   215,   216,   217,   218,   219,
     220,   221,   222,   223,   224,   225,   226,     0,     0,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     717,     0,     0,   830,     0,   450,     0,     0,   833,     0,
     249,   250,   251,     0,   253,   254,   255,   256,   257,   258,
     259,   834,   273,   274,   275,   276,   277,   278,   279,     0,
       0,   626,     0,     0,     0,     0,     0,     0,     0,     0,
     168,   169,   170,     0,    17,    18,    19,    20,     0,     0,
       0,    21,    22,    23,    24,    25,    26,    27,    28,    29,
       0,   280,     0,     0,     0,     0,     0,     0,    33,    34,
       0,     0,     0,   627,   628,     0,     0,     0,     0,     0,
     204,   205,   206,   629,   208,   209,   210,   211,   212,   213,
     214,   215,   216,   217,   218,   219,   220,   221,   222,   223,
     224,   225,   226,     0,    38,     0,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,   230,   231,   232,   233,   234,   235,   236,   237,   238,
     239,   240,   241,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   630,     0,
     631,   632,     0,   633,   634,     0,   249,   250,   251,   635,
     253,   254,   255,   256,   257,   258,   259,     7,     8,     9,
      10,    11,    12,    13,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,  1024,  1025,    31,    32,     0,
       0,     0,     0,    33,    34,    35,     0,  1026,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,    66,    67,
      68,    69,    70,    71,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,  1027,
    1028,     7,     8,     9,    10,    11,    12,    13,     0,     0,
       0,    88,     0,     0,     0,     0,     0,     0,     0,    14,
      15,    16,     0,    17,    18,    19,    20,     0,     0,     0,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
      30,    31,    32,     0,     0,     0,     0,    33,    34,    35,
      36,    37,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,     0,    87,     7,     8,     9,    10,    11,
      12,    13,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    16,     0,    17,    18,    19,
      20,     0,     0,     0,    21,    22,    23,    24,    25,    26,
      27,    28,    29,     0,   280,    31,   359,     0,     0,     0,
       0,    33,    34,     0,     0,   360,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    38,     0,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    55,    56,    57,    58,    59,
      60,    61,    62,    63,    64,    65,     0,     0,     0,     0,
       0,     7,     8,     9,    10,    11,    12,    13,    21,    22,
      23,    24,    25,    26,    27,    28,    29,   506,   280,    14,
      15,    16,     0,    17,    18,    19,    20,   507,     0,    88,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     280,    31,   359,     0,     0,     0,     0,    33,    34,     0,
       0,     0,     0,     0,   423,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,  -279,     0,     0,     0,     0,     7,     8,     9,
      10,    11,    12,    13,   424,   425,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    14,    15,    16,     0,    17,
      18,    19,    20,     0,     0,    88,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   280,    31,     0,     0,
       0,     0,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,    55,    56,    57,
      58,    59,    60,    61,    62,    63,    64,    65,     0,     0,
       0,     0,     0,     7,     8,     9,    10,    11,    12,    13,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   506,
     280,    14,    15,    16,     0,    17,    18,    19,    20,   507,
       0,    88,    21,    22,    23,    24,    25,    26,    27,    28,
      29,     0,   280,    31,     0,     0,     0,     0,     0,    33,
      34,     0,     0,     0,     0,     0,   423,     0,     0,     0,
       0,     0,     0,     0,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
       0,     0,     0,     0,     0,    38,     0,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,   424,   425,     0,     0,
       0,     0,   307,   308,   309,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,     0,   307,   308,   309,     0,     0,     0,     0,
      33,     0,     0,     0,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,    31,   386,     0,     0,     0,
       0,    33,   307,   308,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    38,   526,     0,     0,
       0,   527,     0,     0,     0,     0,     0,     0,    88,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,    88,
     300,   301,   302,   303,   304,   305,   306,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   307,   308,
     309,   527,     0,     0,     0,     0,     0,     0,    88,     0,
     300,   301,   302,   303,   304,   305,   306,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    33,   310,   307,   308,
     309,   300,   301,   302,   303,   304,   305,   306,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   307,
     308,   309,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   386,     0,     0,     0,     0,    33,     0,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,    38,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   312,
     313,   314,   315,   316,   317,   318,   319,   320,   321,   322,
     323,     0,     0,     0,    88,     0,     0,     0,     0,     0,
     312,   313,   314,   315,   316,   317,   318,   319,   320,   321,
     322,   323,   300,   301,   302,   303,   304,   305,   306,     0,
       0,     0,     0,     0,    88,     0,     0,     0,     0,     0,
     307,   308,   309,     0,     0,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,    88,     0,     0,     0,     0,
       0,     0,    31,   307,   308,   309,     0,     0,    33,     0,
       0,     0,     0,     0,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    33,   307,   308,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,   312,   313,   314,   315,   316,   317,   318,   319,   320,
     321,   322,   323,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,    38,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    88,     0,     0,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,     0,     0,     0,     0,    88,
       0,     0,     0,     0,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,   515,  1185,     0,
       0,  1186,   307,   308,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   300,   301,   302,   303,   304,   305,   306,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   307,   308,   309,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    38,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323,   300,   301,   302,   303,   304,
     305,   306,     0,     0,     0,    38,     0,     0,     0,     0,
       0,     0,     0,   307,   308,   309,     0,   515,     0,     0,
       0,   516,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,     0,     0,     0,     0,     0,     0,
       0,    33,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,  1185,     0,     0,
    1186,     0,     0,     0,     0,     0,     0,   300,   301,   302,
     303,   304,   305,   306,     0,     0,     0,    38,     0,     0,
       0,     0,     0,     0,     0,   307,   308,   309,     0,     0,
       0,     0,     0,     0,   312,   313,   314,   315,   316,   317,
     318,   319,   320,   321,   322,   323,   273,   274,   275,   276,
     277,   278,   279,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   168,   169,   170,     0,    17,    18,
      19,    20,   516,     0,     0,    21,    22,    23,    24,    25,
      26,    27,    28,    29,     0,   280,    31,   359,     0,    38,
       0,     0,    33,    34,     0,     0,   360,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   312,   313,   314,   315,
     316,   317,   318,   319,   320,   321,   322,   323,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    38,     0,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,   230,   231,   232,   233,   234,
     235,   236,   237,   238,   239,   240,   241,   273,   274,   275,
     276,   277,   278,   279,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   168,   169,   170,     0,    17,
      18,    19,    20,     0,     0,     0,    21,    22,    23,    24,
      25,    26,    27,    28,    29,     0,   280,    31,     0,     0,
       0,     0,     0,    33,    34,    35,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    38,
       0,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,   230,   231,   232,   233,
     234,   235,   236,   237,   238,   239,   240,   241,   273,   274,
     275,   276,   277,   278,   279,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   168,   169,   170,     0,
      17,    18,    19,    20,     0,     0,     0,    21,    22,    23,
      24,    25,    26,    27,    28,    29,     0,   280,    31,     0,
       0,     0,     0,     0,    33,    34,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      38,     0,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,   230,   231,   232,
     233,   234,   235,   236,   237,   238,   239,   240,   241,   273,
     274,   275,   276,   277,   278,   279,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   168,   169,   170,
       0,    17,    18,    19,    20,     0,     0,     0,    21,    22,
      23,    24,    25,    26,    27,    28,    29,     0,   280,     0,
       0,     0,     0,     0,     0,    33,    34,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    38,     0,    39,    40,    41,    42,    43,    44,    45,
      46,    47,    48,    49,    50,    51,    52,    53,   230,   231,
     232,   233,   234,   235,   236,   237,   238,   239,   240,   241,
     273,   274,   275,   276,   277,   278,   279,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   168,   169,
     170,     0,   735,     0,   736,    20,     0,     0,     0,    21,
      22,    23,    24,    25,    26,    27,    28,    29,     0,   280,
       0,     0,     0,     0,     0,     0,    33,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    38,     0,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,   230,
     231,   232,   233,   234,   235,   236,   237,   238,   239,   240,
     241,   273,   274,   275,   276,   277,   278,   279,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   168,
     169,   170,     0,   300,   301,   302,   303,   304,   305,   306,
      21,    22,    23,    24,    25,    26,    27,    28,    29,     0,
     280,   307,   308,   309,     0,     0,     0,    33,    34,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   386,     0,     0,     0,     0,    33,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    38,     0,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
     230,   231,   232,   233,   234,   235,   236,   237,   238,   239,
     240,   241,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   312,   313,   314,   315,   316,   317,   318,   319,
     320,   321,   322,   323,   300,   301,   302,   303,   304,   305,
     306,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   307,   308,   309,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      33,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   312,   313,   314,   315,   316,   317,   318,
     319,   320,   321,   322,   323
};

static const short int yycheck[] =
{
       5,    35,    35,   111,     5,     5,   105,    36,   242,     5,
       5,     5,     5,   355,   248,   103,   327,    32,   137,   132,
     438,   271,   455,   327,   557,   422,   563,   124,   695,   562,
     424,   425,    37,   593,   125,     5,   270,   446,     5,    35,
     132,    35,   464,   704,   999,   603,   604,   877,     4,   854,
     290,   356,   327,   437,     5,   529,   686,   114,   115,   116,
     965,   554,     3,   124,   298,     3,   456,    37,   563,   694,
     953,   132,   695,     3,   742,    10,    11,  1004,     3,   973,
     748,     3,    64,   616,    10,    11,    37,    32,   748,    64,
     141,     0,    10,    11,   561,   146,   125,   138,   132,   132,
      46,     0,    10,    11,    32,   538,    85,    10,    11,  1148,
      32,    85,   142,     3,   547,   419,   136,   111,   942,   124,
     125,   141,   127,    45,    12,    85,    48,   750,   751,   752,
      85,   473,    32,    64,   149,   695,   132,   611,     3,    26,
     374,  1180,    12,    78,   111,    67,   683,   137,   615,    84,
       3,    29,    30,    31,   124,   125,    44,   127,   142,   964,
     111,    10,    11,    50,   825,   144,   477,   123,   150,  1096,
     144,   290,   128,   477,    44,   150,   585,   133,  1072,   142,
     713,   132,   422,   282,   144,   284,   142,   143,   683,   144,
     136,   137,    78,   281,  1077,   283,   137,   289,   136,   140,
    1024,  1084,   477,   124,   149,    85,   136,    32,   142,   702,
     141,   136,   137,   148,   149,   140,   142,   139,    85,   150,
     136,   149,   612,   613,   142,   699,  1056,  1182,    85,   533,
     723,  1136,   140,   575,   142,    84,   904,  1142,   622,   142,
      85,   546,    85,   548,   904,    32,   136,   137,   142,   149,
     140,   136,   371,   921,   136,   289,   289,   142,   142,   563,
     138,   921,   148,   149,   144,   364,   137,   272,     5,   140,
      85,   136,   137,   142,  1179,   140,   145,   144,   370,   136,
     142,   286,   381,   136,   137,   142,    85,   140,   142,   136,
     382,   136,   142,   289,   919,   142,  1191,   142,    35,   144,
     142,   144,   272,   422,   138,   310,   311,   141,   407,   370,
     409,  1141,  1207,  1143,  1209,   412,   286,    85,   406,    85,
     408,   136,   327,   328,   149,  1130,  1221,   142,   142,   285,
      85,   287,    26,   573,  1002,    85,   370,   136,    25,    26,
     310,   311,  1002,   142,   432,   144,   971,   141,   136,   354,
      44,   412,   146,   358,   142,   360,    50,   327,   328,   136,
     985,    85,   149,   142,   141,   286,   989,    32,   608,    34,
     136,   459,   460,   367,   111,   142,   142,   328,   144,   683,
      45,   136,    85,    48,   354,    19,   136,   142,   358,   144,
     360,   510,   142,   141,   144,   132,  1064,  1027,   146,  1060,
     367,  1068,   142,   354,  1064,   136,   327,   412,   966,   142,
     968,   142,   136,   454,   419,   456,   367,   136,   142,   370,
     144,    55,    56,   142,   439,   440,  1094,   140,   519,   142,
     445,   446,   447,   136,  1094,   464,   137,   136,   139,   142,
     532,   144,   412,   142,  1067,  1068,  1069,    32,    33,   419,
     455,   466,   457,   687,   573,   148,   149,   413,   136,   464,
    1085,   476,   467,  1086,   142,   553,   142,  1187,   419,   136,
     142,   532,   477,   145,   136,   142,   898,   136,   136,   729,
     142,  1148,   142,   142,   142,   455,   136,   457,  1208,   608,
    1210,   412,   142,   142,   464,   136,   452,   467,   532,  1129,
    1220,   142,   142,   136,   455,   145,   900,   477,  1068,   142,
     539,   439,   440,  1180,   519,   520,   136,   445,   446,   447,
     142,   536,   142,   145,   142,  1148,   531,   352,   533,   534,
     137,   356,   139,   538,   539,   142,   954,   142,   466,   439,
     440,   570,   547,   558,   549,   445,   446,   447,   137,   519,
     520,   140,   289,   144,   583,   511,   477,  1180,   563,   142,
     142,   531,   518,   533,   534,   570,   466,    24,   538,   520,
     585,   612,   613,  1203,  1204,   137,   141,   547,   143,   549,
      12,   532,   533,   674,    29,    30,    31,   538,  1125,  1122,
     595,   136,   137,   563,   136,   140,   547,   597,   519,   595,
     570,   595,   139,   136,   144,  1002,   137,   142,   536,    13,
      14,    15,    16,   863,   439,   440,   140,   137,   136,   961,
     445,   446,   447,   139,   141,   595,   141,  1164,   141,   454,
     367,   456,   141,   370,  1167,   141,   536,   141,   141,   141,
     141,   466,   563,   141,   141,   141,   141,   141,  1057,   741,
     143,   143,   439,   440,   141,   660,   136,   585,   445,   446,
     447,   666,   583,   136,   143,   137,   137,   145,   142,   674,
       3,     4,     5,     6,     7,     8,     9,   143,   683,   466,
     138,   146,  1100,    44,   136,   585,   136,   806,   136,     3,
     660,   145,   145,   140,   143,   146,   666,   141,   817,   139,
     143,   143,   743,   141,   674,   141,   136,   141,   143,    84,
       5,   536,   136,   683,   136,   671,   142,   145,    84,   146,
     761,   546,   972,   548,   141,  1158,   136,   136,   140,   143,
     735,   736,   737,   138,   690,   146,    37,  1048,   146,   141,
      35,   140,    84,   141,  1048,  1154,   141,   143,   136,   536,
     142,   141,   143,   674,   143,   580,  1189,   143,  1191,   143,
     585,   143,   683,   143,   143,   735,   736,   737,  1186,     3,
       4,     5,     6,     7,     8,     9,  1209,   141,   143,     3,
       4,     5,     6,     7,     8,     9,   143,   612,   613,   143,
     143,   719,   136,    84,   146,   532,   139,  1206,   585,  1217,
     136,   141,   143,   818,   137,    13,    13,   136,    47,   143,
     137,   816,   143,  1124,   902,  1224,   111,   143,   146,   143,
    1124,  1125,   143,   143,   119,    49,     3,     4,     5,     6,
       7,     8,     9,   143,   146,  1177,   143,   136,   136,     5,
     942,   797,   942,   950,  1053,   802,   816,   942,   942,   811,
    1107,   607,   942,   809,   761,   608,   942,   893,   749,   888,
    1164,    85,     5,   942,  1024,   540,   816,  1063,  1171,   898,
     695,   510,    49,   509,   873,   700,    12,    13,    14,    15,
      16,    17,    18,    19,    20,  1214,   679,    25,    26,    27,
     818,   716,   868,   898,    32,    33,    34,    35,    36,    37,
      38,    39,    40,   595,    42,   431,   431,   723,   695,   987,
     998,   724,  1086,   989,   942,   967,   568,   815,   818,    37,
      -1,    -1,    -1,    -1,    -1,   750,   751,   752,   898,   716,
      -1,  1050,  1040,  1052,    -1,  1054,  1049,   942,    -1,   944,
      -1,   942,   942,   948,    -1,   950,   942,   942,   942,   942,
      -1,  1185,  1049,    -1,    -1,    -1,    -1,  1049,    -1,    -1,
    1194,    -1,    -1,   750,   751,   752,    -1,   888,   124,    -1,
      -1,   127,   942,    -1,   944,    -1,    -1,    -1,   948,   973,
     950,    -1,    -1,    -1,    -1,  1042,    -1,    -1,  1049,    -1,
     946,   942,  1111,   818,    -1,    -1,    -1,    -1,    -1,  1107,
      -1,    -1,    -1,    -1,     5,    -1,  1105,    -1,   126,     5,
     128,   129,    -1,  1110,    -1,  1049,  1049,   132,  1110,  1024,
      -1,  1026,  1119,    -1,  1024,    -1,    -1,  1119,    -1,    -1,
    1024,   818,    -1,    -1,  1075,  1040,    37,    -1,    -1,  1040,
    1040,    37,  1057,  1048,  1049,  1040,  1040,  1040,  1053,  1110,
    1138,  1108,   877,  1049,  1024,    -1,  1026,    -1,  1119,    -1,
    1159,    -1,    -1,    -1,  1163,    -1,    -1,    -1,  1165,    -1,
    1040,    -1,   367,  1165,    -1,  1026,    -1,    -1,  1048,  1049,
      -1,    -1,    -1,  1053,    -1,  1119,  1174,    -1,    -1,  1040,
     877,  1190,    -1,    -1,    -1,    -1,  1125,    -1,  1049,    -1,
      -1,    -1,    -1,    -1,  1165,  1110,    -1,  1063,    -1,    -1,
      -1,  1116,    -1,  1107,  1119,  1116,  1116,    -1,    -1,  1124,
    1125,  1116,  1116,  1116,    -1,    -1,   127,  1048,   953,  1057,
     286,  1165,    -1,    -1,    -1,  1164,    -1,    -1,    -1,  1154,
    1110,    -1,    -1,    -1,    -1,    -1,  1116,    -1,    -1,  1119,
      -1,    -1,    -1,  1158,  1124,  1125,    -1,  1057,    -1,  1164,
    1165,    -1,   987,    -1,   989,  1116,   953,    -1,  1119,   287,
     288,   327,   328,    -1,   289,    -1,    -1,    -1,  1003,    -1,
      -1,   476,    -1,    -1,  1189,    -1,  1191,    -1,  1158,    -1,
    1205,  1206,    -1,    -1,  1164,  1165,    -1,    -1,  1213,    -1,
     987,    -1,   989,  1124,  1209,   942,    -1,  1158,    -1,  1224,
      -1,   329,   330,    -1,  1165,    -1,    -1,    -1,    -1,  1189,
      -1,  1191,    -1,    -1,    -1,    -1,  1154,    -1,    -1,   125,
      -1,  1056,  1057,    -1,    -1,    -1,   354,   352,  1189,  1209,
    1191,   356,  1067,  1068,  1069,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1077,    -1,  1154,   370,   412,    -1,  1209,  1084,
      -1,  1086,  1087,   419,    -1,    -1,    -1,   382,    -1,  1056,
    1057,   272,    -1,   391,   392,   393,   272,  1205,  1206,    -1,
    1067,  1068,  1069,    -1,    -1,  1213,    -1,  1024,    -1,    -1,
    1077,    -1,    -1,    -1,    -1,    -1,  1224,  1084,    -1,  1086,
      -1,    -1,    -1,  1040,    -1,  1205,  1206,    -1,   464,   310,
     311,    -1,  1049,  1213,   310,   311,  1141,    -1,  1143,    -1,
      -1,   477,    -1,  1148,  1224,    -1,    -1,   328,    -1,  1154,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   455,    -1,   454,
      -1,   456,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1175,    -1,   647,    -1,  1141,  1180,  1143,   358,    -1,   360,
      -1,  1148,   358,    -1,   360,    -1,    -1,  1154,    -1,    -1,
    1107,  1196,    -1,  1110,    -1,    -1,    -1,   533,    -1,  1116,
    1205,  1206,  1119,    -1,    -1,    -1,    -1,    -1,  1213,    -1,
      -1,    -1,    -1,  1180,    -1,    -1,    -1,    -1,    -1,  1224,
      -1,    -1,    -1,   521,   522,    -1,    -1,   563,    -1,    -1,
      -1,    -1,    -1,    -1,   570,    -1,    -1,   532,  1205,  1206,
     538,    -1,    -1,    -1,  1161,    -1,  1213,    -1,  1165,   547,
      -1,   546,    -1,   548,    -1,   331,    -1,  1224,    -1,   335,
     336,    -1,   338,   339,   340,   341,   342,   343,   344,   345,
     346,   347,   348,   349,   350,   351,   457,    -1,   354,    -1,
      -1,   457,    -1,    -1,    -1,   580,   467,    -1,    -1,    -1,
      -1,   766,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   774,
      -1,    -1,    -1,   778,   779,    -1,    -1,   782,   783,   784,
     785,   786,   787,   788,   789,   790,   791,   612,   613,    -1,
      -1,    -1,    -1,   621,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   683,    -1,    -1,
     531,    -1,    -1,   534,    -1,   531,    -1,    -1,   534,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   549,    -1,
      -1,    -1,    -1,   549,   672,   673,    -1,    -1,    -1,   455,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   692,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   700,    -1,    -1,    -1,    -1,
     486,   487,   488,    -1,   595,   491,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   726,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      12,   739,   740,   519,    -1,    -1,   741,    -1,    -1,   525,
     925,    -1,    -1,   928,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   538,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,   547,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   660,
      -1,    -1,    54,    55,   660,   666,    -1,    -1,   963,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,    -1,    -1,    -1,    29,    30,
      31,    -1,    -1,    -1,    -1,    -1,    37,    -1,    -1,  1024,
      -1,    -1,    -1,    -1,   735,   736,   737,    -1,    49,   735,
     736,   737,   898,    -1,    -1,    -1,    -1,   139,    -1,   141,
     142,    -1,   144,   145,    -1,   147,   148,   149,   150,   151,
     152,   153,   154,   155,   156,   157,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,   674,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   942,   683,    -1,    -1,
      -1,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,   816,    -1,    -1,    -1,    -1,
     816,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,  1024,    49,
      50,    -1,    52,    -1,    -1,    -1,     3,     4,     5,     6,
       7,     8,     9,    -1,  1040,    -1,    -1,    -1,  1003,    -1,
      -1,    -1,  1048,  1049,    21,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,  1026,    -1,
      -1,    -1,    -1,    -1,    -1,   811,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,  1049,    -1,    -1,    -1,    -1,    -1,
      -1,   942,    -1,   944,    -1,    -1,   942,   948,   944,   950,
      -1,    -1,   948,    -1,  1110,    -1,    -1,  1072,    -1,    -1,
    1116,    -1,    -1,  1119,    -1,    -1,    -1,   147,  1124,  1125,
      -1,    -1,  1087,    -1,    -1,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1110,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,  1119,    -1,    -1,    -1,  1164,  1165,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,  1026,    -1,    -1,    -1,    -1,
    1026,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1158,    -1,    -1,    -1,    -1,    -1,  1161,    -1,    -1,    -1,
    1165,    -1,  1053,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
    1175,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1189,    -1,  1191,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1196,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,  1209,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
      -1,    42,    43,    44,    45,    -1,    -1,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    59,    60,
      61,    62,    63,    64,    65,    66,    67,    68,    69,    70,
      71,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,    82,    83,    84,    85,    86,    87,    88,    89,    90,
      91,    92,    93,    94,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    -1,
      -1,    -1,    -1,    -1,    -1,   136,   137,    51,   139,   140,
     141,   142,    -1,   144,   145,   146,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,  1158,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1189,    -1,  1191,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,  1209,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
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
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
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
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
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
     137,    -1,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
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
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
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
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
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
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
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
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
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
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
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
     139,   140,   141,   142,   143,   144,   145,    -1,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
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
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
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
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
     141,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,   158,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
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
      -1,   136,   137,   138,   139,   140,   141,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
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
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
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
      -1,    -1,   145,    -1,   147,   148,   149,   150,   151,   152,
     153,   154,   155,   156,   157,   158,     3,     4,     5,     6,
       7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
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
     137,    -1,   139,   140,   141,   142,   143,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
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
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
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
     139,   140,   141,   142,    -1,   144,   145,   146,   147,   148,
     149,   150,   151,   152,   153,   154,   155,   156,   157,   158,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
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
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
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
     137,    -1,   139,   140,   141,   142,    -1,   144,   145,    -1,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,   158,     3,     4,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    -1,    35,    36,    37,    38,    39,    40,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    -1,
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
      -1,    -1,   137,    -1,   139,   140,    -1,   142,    -1,   144,
     145,    -1,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,     3,     4,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    -1,    35,    36,    37,    38,
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
      33,    -1,    35,    36,    37,    38,    39,    40,    -1,    42,
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
      27,    28,    29,    30,    31,    32,    33,    -1,    35,    36,
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
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   139,    -1,
     141,   142,    -1,   144,   145,    -1,   147,   148,   149,   150,
     151,   152,   153,   154,   155,   156,   157,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    41,    42,    43,    44,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    53,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,   114,   115,
     116,   117,   118,   119,   120,   121,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,   147,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    25,    26,    27,    28,    -1,    -1,    -1,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    51,
      52,    53,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,    -1,   136,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      38,    39,    40,    -1,    42,    43,    44,    -1,    -1,    -1,
      -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    87,
      88,    89,    90,    91,    92,    93,    94,    95,    96,    97,
      98,    99,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,
      -1,     3,     4,     5,     6,     7,     8,     9,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    21,
      22,    23,    -1,    25,    26,    27,    28,    51,    -1,   147,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    43,    44,    -1,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   136,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,   148,   149,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,   147,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
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
      40,    -1,    42,    43,    -1,    -1,    -1,    -1,    -1,    49,
      50,    -1,    -1,    -1,    -1,    -1,    78,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
      -1,    -1,    -1,    -1,    -1,    85,    -1,    87,    88,    89,
      90,    91,    92,    93,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,   148,   149,    -1,    -1,
      -1,    -1,    21,    22,    23,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    43,    44,    -1,    -1,    -1,
      -1,    49,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    85,   136,    -1,    -1,
      -1,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,   147,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,   140,    -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    50,    21,    22,
      23,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    -1,    49,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,     3,     4,     5,     6,     7,     8,     9,    -1,
      -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,    -1,
      21,    22,    23,    -1,    -1,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,   147,    -1,    -1,    -1,    -1,
      -1,    -1,    43,    21,    22,    23,    -1,    -1,    49,    -1,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,   102,   103,   104,   105,   106,   107,   108,   109,   110,
     111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,    85,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   147,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,    -1,    -1,    -1,    -1,   147,
      -1,    -1,    -1,    -1,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,   136,   137,    -1,
      -1,   140,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,     3,     4,     5,     6,     7,     8,     9,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,     3,     4,     5,     6,     7,
       8,     9,    -1,    -1,    -1,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    -1,   136,    -1,    -1,
      -1,   140,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,   137,    -1,    -1,
     140,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    -1,
      -1,    -1,    -1,    -1,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   112,   113,     3,     4,     5,     6,
       7,     8,     9,    49,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,    26,
      27,    28,   140,    -1,    -1,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    -1,    42,    43,    44,    -1,    85,
      -1,    -1,    49,    50,    -1,    -1,    53,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,    -1,
      87,    88,    89,    90,    91,    92,    93,    94,    95,    96,
      97,    98,    99,   100,   101,   102,   103,   104,   105,   106,
     107,   108,   109,   110,   111,   112,   113,     3,     4,     5,
       6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,    25,
      26,    27,    28,    -1,    -1,    -1,    32,    33,    34,    35,
      36,    37,    38,    39,    40,    -1,    42,    43,    -1,    -1,
      -1,    -1,    -1,    49,    50,    51,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    85,
      -1,    87,    88,    89,    90,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   105,
     106,   107,   108,   109,   110,   111,   112,   113,     3,     4,
       5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,    -1,
      25,    26,    27,    28,    -1,    -1,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    -1,    42,    43,    -1,
      -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      85,    -1,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,     3,
       4,     5,     6,     7,     8,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,    23,
      -1,    25,    26,    27,    28,    -1,    -1,    -1,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    -1,    42,    -1,
      -1,    -1,    -1,    -1,    -1,    49,    50,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    85,    -1,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,   100,   101,   102,   103,
     104,   105,   106,   107,   108,   109,   110,   111,   112,   113,
       3,     4,     5,     6,     7,     8,     9,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,    22,
      23,    -1,    25,    -1,    27,    28,    -1,    -1,    -1,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    -1,    42,
      -1,    -1,    -1,    -1,    -1,    -1,    49,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    85,    -1,    87,    88,    89,    90,    91,    92,
      93,    94,    95,    96,    97,    98,    99,   100,   101,   102,
     103,   104,   105,   106,   107,   108,   109,   110,   111,   112,
     113,     3,     4,     5,     6,     7,     8,     9,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    21,
      22,    23,    -1,     3,     4,     5,     6,     7,     8,     9,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    -1,
      42,    21,    22,    23,    -1,    -1,    -1,    49,    50,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    -1,    -1,    -1,    -1,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    85,    -1,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,     3,     4,     5,     6,     7,     8,
       9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    21,    22,    23,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113
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
     350,   361,   362,   363,   394,   383,    25,    26,    12,    44,
       3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    35,    36,    37,    38,    39,    40,    42,    43,    44,
      45,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   137,   139,   140,   141,   142,   144,   145,   147,
     148,   149,   150,   151,   152,   153,   154,   155,   156,   157,
     158,   362,   363,   419,   420,   421,   451,   452,   453,   454,
     455,   334,   351,     3,     4,     5,     6,     7,     8,     9,
      42,   173,   178,   195,   198,   325,   326,   331,   333,   339,
     345,     3,     4,     5,     6,     7,     8,     9,   137,   336,
       3,     4,     5,     6,     7,     8,     9,    21,    22,    23,
      50,    52,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   112,   113,   219,   323,   325,   326,   330,   331,
     333,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   142,   142,   142,   142,   142,   142,   142,   142,
     142,   142,   337,   174,   381,   382,   337,   137,   381,    44,
      53,   164,   171,   172,   198,   204,   221,   223,   240,   293,
     339,   345,    46,   136,   137,   266,   267,   266,   266,   266,
     142,   178,   339,   345,   136,   371,    44,   247,   271,   274,
     324,   329,   331,   333,   180,   331,   333,   335,   336,   330,
     324,   325,   330,   371,   330,   144,   173,   178,   195,   198,
     209,   247,   326,   340,   349,   371,    10,    11,    84,   234,
     294,   303,   305,    78,   148,   149,   299,   364,   365,   366,
     367,   370,   347,   371,   371,    24,   384,   137,   451,   447,
     447,    64,   150,   224,   437,   447,   448,   447,    10,    11,
     142,   441,   323,    12,   337,   381,   337,   381,   324,   173,
     195,   213,   214,   217,   234,   303,   447,   139,   168,   323,
     323,   136,   373,   374,   250,   255,   256,   326,     3,     4,
       5,     6,     7,     8,     9,   335,   396,   399,   400,   335,
     335,   404,   335,   335,   335,   335,   335,   335,   335,   335,
     335,   335,   335,   335,   335,   335,    41,    51,   295,   298,
     299,   338,   340,   363,   137,   136,   140,   179,   180,   326,
     330,   331,   333,   383,   295,   196,   136,   140,   199,   323,
     323,   381,   339,   234,   140,   276,   447,   248,   381,   327,
     272,   142,   330,   330,   330,   332,   337,   381,   337,   381,
     247,   271,   371,   348,   306,   251,   253,   255,   256,   257,
     269,   313,   324,   326,   296,   139,   286,   287,   289,   290,
     234,   303,   312,   364,   375,   376,   375,   375,   365,   367,
     337,   385,   386,   387,   161,   448,   136,   144,   146,   449,
     450,   451,   138,   225,   227,   228,   230,   232,   146,   136,
     450,   143,   443,   444,   442,   371,   210,   212,   299,   179,
     210,   323,   337,   337,   211,   313,   324,   331,   333,   138,
     325,   331,   137,   136,   139,   383,    12,    54,    55,    64,
     139,   141,   142,   144,   145,   150,   418,   419,   250,   255,
     141,   335,   335,   335,   141,   141,   335,   141,   141,   141,
     141,   141,   141,   141,   141,   141,   141,   141,   143,   143,
     141,   136,   296,   294,   371,   182,   177,     3,   136,   181,
     371,   180,   331,   333,   326,   136,   201,   202,   335,   200,
     199,   371,   323,   326,   277,   278,   323,   137,   138,   279,
     280,   179,   331,   276,   275,   431,   295,   179,   295,   323,
     337,   343,   344,   369,   252,   373,   258,   315,   316,   317,
     373,   251,   257,   324,   136,   141,   288,   137,   445,   142,
     143,   303,   383,   368,   141,   146,   329,   336,   389,   391,
     138,   136,   146,   141,   437,    25,    27,   198,   325,   331,
     333,   339,   356,   357,   360,   361,    26,    50,   235,   223,
     427,   427,   427,   136,   211,   217,   136,   199,   210,   210,
     136,   141,   142,   373,   136,   161,   222,     3,   145,   145,
      64,   150,   143,   146,   395,   141,   143,   143,   401,   403,
     141,   345,   407,   409,   411,   413,   408,   410,   412,   414,
     415,   416,   323,    29,    30,    31,   138,   183,   184,    29,
      30,    31,    37,   188,   189,   192,   323,   140,   371,   180,
     138,   141,   139,   346,   136,   335,   141,   454,   447,   143,
      84,   281,   283,   371,   330,   273,   279,    24,    85,   139,
     140,   141,   144,   145,   158,   362,   363,   419,   420,   421,
     425,   426,   433,   434,   435,   437,   438,   441,   445,   136,
     136,   136,   199,   343,   258,   142,     3,    32,    45,    48,
      67,   139,   259,   261,   262,   263,   264,   145,   318,   319,
     140,   142,   373,   297,    64,   144,   150,   422,   423,   425,
     435,   446,   291,   421,   304,   369,   386,   146,   330,    84,
     388,   140,   441,   226,   323,   323,   323,   349,   234,   300,
     305,   299,   358,   300,   235,    64,   139,   141,   143,   144,
     150,   425,   428,   429,   143,   143,   136,   136,   212,   215,
     138,   345,   146,   146,   345,   397,   345,   345,   405,   143,
     345,   345,   345,   345,   345,   345,   345,   345,   345,   345,
     141,   417,   371,   140,   191,   192,   141,    37,   190,   234,
     176,   371,   202,   203,   139,   205,   452,   278,   234,   138,
     377,   378,   141,   284,   258,   143,   440,   436,   439,   136,
     263,   254,   260,   265,    19,    55,    56,   441,   320,   319,
      13,    14,    15,    16,   314,   270,   298,   424,   423,   432,
     141,   143,   142,   307,   316,   329,   390,   227,   359,   302,
     313,   229,   375,   337,   231,   300,   279,   300,   143,   345,
     402,   143,   345,   143,   143,   143,   143,   143,   143,   143,
     143,   141,   141,   143,    41,    42,    53,   135,   136,   165,
     170,   172,   185,   186,   187,   193,   194,   208,   218,   221,
     223,   244,   245,   246,   271,   293,   323,   324,   326,   339,
     345,   394,   323,   371,   323,   188,   422,   448,   136,   268,
     249,   383,    84,   282,   345,   263,   377,   427,   431,   427,
     279,   441,   339,   350,   352,   353,   321,   322,   279,   426,
     136,   138,   429,   430,   292,   308,   392,   337,   307,   139,
     236,   237,   300,   311,   364,   236,   233,   143,   136,   398,
     141,   406,    13,    13,   170,   178,   206,   223,   245,   324,
     339,   345,   454,   172,   186,   221,   223,   244,   293,   339,
     266,   136,   255,   271,   326,   234,   234,   189,   234,    47,
     258,   283,   300,   146,   437,   146,   143,   350,   354,   299,
     146,   422,   143,   422,   279,   139,   393,   428,   238,   143,
     300,   236,   216,   143,   448,   143,   143,   143,   381,   178,
     206,   339,   266,   178,   234,   339,   373,   255,   257,   454,
     263,   285,   146,   377,   355,   337,   379,   380,   377,   143,
     239,   433,   301,   310,   143,   137,   140,   179,   207,   381,
     178,   381,   136,   373,   137,   286,   337,   383,   377,   433,
     307,    32,    34,    45,    48,   447,   448,   181,   179,   381,
     179,   207,   136,   447,   309,   454,   454,   138,   136,   207,
     179,   181,   138,   310,   448,   207,   136
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
     386,   388,   388,   389,   389,   390,   389,   391,   391,   392,
     392,   393,   393,   395,   394,   396,   397,   398,   394,   399,
     394,   400,   394,   401,   402,   394,   403,   394,   404,   405,
     406,   394,   394,   407,   394,   408,   394,   409,   394,   410,
     394,   411,   394,   412,   394,   413,   394,   414,   394,   415,
     394,   416,   394,   394,   394,   394,   417,   417,   418,   418,
     418,   418,   418,   418,   418,   418,   418,   418,   418,   418,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   419,   419,   419,   419,   419,   419,
     419,   419,   419,   419,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   420,   420,   420,   420,   420,   420,
     420,   420,   420,   420,   421,   421,   421,   421,   421,   421,
     421,   421,   421,   422,   422,   423,   423,   423,   424,   423,
     423,   425,   425,   426,   426,   426,   426,   426,   426,   426,
     426,   426,   426,   427,   427,   428,   428,   428,   428,   429,
     429,   429,   430,   430,   431,   431,   432,   432,   433,   433,
     434,   434,   434,   436,   435,   437,   437,   439,   438,   440,
     438,   442,   441,   443,   441,   444,   441,   446,   445,   447,
     447,   448,   448,   449,   449,   450,   450,   451,   451,   451,
     451,   451,   451,   451,   451,   451,   451,   451,   451,   451,
     451,   451,   451,   451,   452,   453,   453,   454,   455,   455,
     455
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
       3,     0,     1,     1,     2,     0,     4,     1,     3,     0,
       2,     1,     1,     0,     7,     0,     0,     0,     9,     0,
       5,     0,     5,     0,     0,    10,     0,     7,     0,     0,
       0,     9,     6,     0,     7,     0,     7,     0,     7,     0,
       7,     0,     7,     0,     7,     0,     7,     0,     7,     0,
       9,     0,     9,     4,     4,     7,     0,     1,     2,     2,
       3,     3,     1,     1,     1,     1,     2,     2,     2,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     1,     1,     0,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     0,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     0,     2,     0,     2,     1,     1,
       1,     1,     1,     0,     4,     1,     1,     0,     4,     0,
       5,     0,     4,     0,     4,     0,     4,     0,     4,     0,
       2,     0,     2,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     3,     4,     3,     1,     1,
       1
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
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
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0
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
       0,     0,     3,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     5,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   261,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     265,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   263,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     7,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     255,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   257,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     259,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     9,    11,    13,    15,    17,    19,    21,    23,
      25,    27,    29,    31,    33,    35,    37,    39,    41,    43,
      45,    47,    49,    51,    53,    55,    57,    59,    61,    63,
      65,    67,    69,     0,    71,    73,    75,    77,    79,    81,
       0,    83,    85,    87,    89,     0,     0,    91,    93,    95,
      97,    99,   101,   103,   105,   107,   109,   111,   113,   115,
     117,   119,   121,   123,   125,   127,   129,   131,   133,   135,
     137,   139,   141,   143,   145,   147,   149,   151,   153,   155,
     157,   159,   161,     0,   163,     0,   165,   167,   169,   171,
     173,   175,   177,   179,   181,   183,   185,   187,   189,   191,
     193,   195,   197,   199,   201,   203,   205,   207,   209,   211,
     213,   215,   217,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   219,     0,     0,   221,
     223,   225,     0,   227,   229,     0,   231,   233,   235,   237,
     239,   241,   243,   245,   247,   249,   251,   253,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0
};

/* YYCONFL[I] -- lists of conflicting rule numbers, each terminated by
   0, pointed into by YYCONFLP.  */
static const short int yyconfl[] =
{
       0,   414,     0,   414,     0,   414,     0,   313,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   693,     0,   693,     0,   693,
       0,   693,     0,   693,     0,   298,     0,   298,     0,   298,
       0,   414,     0,   308,     0,   414,     0
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
#line 1973 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6443 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 34:
#line 2027 "vtkParse.y" /* glr.c:783  */
    { pushNamespace((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6449 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 35:
#line 2028 "vtkParse.y" /* glr.c:783  */
    { popNamespace(); }
#line 6455 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 44:
#line 2051 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6461 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 45:
#line 2052 "vtkParse.y" /* glr.c:783  */
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
#line 6477 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 46:
#line 2066 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer);
    }
#line 6486 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 48:
#line 2072 "vtkParse.y" /* glr.c:783  */
    {
      start_class((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer));
      currentClass->IsFinal = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer);
    }
#line 6495 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 49:
#line 2077 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer));
    }
#line 6503 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 51:
#line 2082 "vtkParse.y" /* glr.c:783  */
    {
      start_class(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer));
    }
#line 6511 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 52:
#line 2087 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6517 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 53:
#line 2088 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6523 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 54:
#line 2089 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 2; }
#line 6529 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 55:
#line 2093 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6535 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 56:
#line 2095 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3("::", (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 6541 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 60:
#line 2103 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6547 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 61:
#line 2104 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0); }
#line 6553 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 63:
#line 2108 "vtkParse.y" /* glr.c:783  */
    {
      startSig();
      clearType();
      clearTypeId();
      clearTemplate();
      closeComment();
    }
#line 6565 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 66:
#line 2120 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PUBLIC; }
#line 6571 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 67:
#line 2121 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PRIVATE; }
#line 6577 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 68:
#line 2122 "vtkParse.y" /* glr.c:783  */
    { access_level = VTK_ACCESS_PROTECTED; }
#line 6583 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 93:
#line 2153 "vtkParse.y" /* glr.c:783  */
    { output_friend_function(); }
#line 6589 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 96:
#line 2161 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), access_level, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 6595 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 97:
#line 2163 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer),
                     (VTK_PARSE_VIRTUAL | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6602 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 98:
#line 2166 "vtkParse.y" /* glr.c:783  */
    { add_base_class(currentClass, (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer),
                     ((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 6609 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 99:
#line 2170 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6615 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 100:
#line 2171 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 6621 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 101:
#line 2174 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = access_level; }
#line 6627 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 103:
#line 2178 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PUBLIC; }
#line 6633 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 104:
#line 2179 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PRIVATE; }
#line 6639 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 105:
#line 2180 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_ACCESS_PROTECTED; }
#line 6645 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 111:
#line 2202 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6651 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 112:
#line 2203 "vtkParse.y" /* glr.c:783  */
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
#line 6666 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 113:
#line 2216 "vtkParse.y" /* glr.c:783  */
    {
      start_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str);
    }
#line 6676 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 114:
#line 2222 "vtkParse.y" /* glr.c:783  */
    {
      start_enum(NULL, (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), getTypeId());
      clearTypeId();
      ((*yyvalp).str) = NULL;
    }
#line 6686 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 115:
#line 2229 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6692 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 116:
#line 2230 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6698 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 117:
#line 2231 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 1; }
#line 6704 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 118:
#line 2234 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6710 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 119:
#line 2235 "vtkParse.y" /* glr.c:783  */
    { pushType(); }
#line 6716 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 120:
#line 2236 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = getType(); popType(); }
#line 6722 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 124:
#line 2243 "vtkParse.y" /* glr.c:783  */
    { closeComment(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), NULL); }
#line 6728 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 125:
#line 2244 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); closeComment(); }
#line 6734 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 126:
#line 2245 "vtkParse.y" /* glr.c:783  */
    { chopSig(); add_enum((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str), copySig()); }
#line 6740 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 149:
#line 2305 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 6746 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 150:
#line 2306 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 6752 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 151:
#line 2307 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (VTK_PARSE_FUNCTION | (((yyGLRStackItem const *)yyvsp)[YYFILL (-7)].yystate.yysemantics.yysval.integer)); popFunction(); }
#line 6758 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 152:
#line 2311 "vtkParse.y" /* glr.c:783  */
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
#line 6796 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 153:
#line 2351 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 0); }
#line 6802 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 155:
#line 2355 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str); }
#line 6808 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 156:
#line 2357 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6814 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 157:
#line 2359 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6820 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 158:
#line 2361 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6826 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 159:
#line 2363 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 6832 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 160:
#line 2366 "vtkParse.y" /* glr.c:783  */
    { add_using((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), 1); }
#line 6838 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 161:
#line 2369 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6844 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 162:
#line 2371 "vtkParse.y" /* glr.c:783  */
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
#line 6873 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 163:
#line 2402 "vtkParse.y" /* glr.c:783  */
    { postSig("template<> "); clearTypeId(); }
#line 6879 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 164:
#line 2404 "vtkParse.y" /* glr.c:783  */
    {
      postSig("template<");
      pushType();
      clearType();
      clearTypeId();
      startTemplate();
    }
#line 6891 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 165:
#line 2412 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
      clearTypeId();
      popType();
    }
#line 6903 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 167:
#line 2423 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); clearType(); clearTypeId(); }
#line 6909 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 169:
#line 2427 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6915 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 170:
#line 2429 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6921 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 172:
#line 2431 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 6927 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 173:
#line 2433 "vtkParse.y" /* glr.c:783  */
    { add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig()); }
#line 6933 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 175:
#line 2435 "vtkParse.y" /* glr.c:783  */
    { pushTemplate(); markSig(); }
#line 6939 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 176:
#line 2438 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i;
      TemplateInfo *newTemplate = currentTemplate;
      popTemplate();
      add_template_parameter(0, (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer), copySig());
      i = currentTemplate->NumberOfParameters-1;
      currentTemplate->Parameters[i]->Template = newTemplate;
    }
#line 6952 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 178:
#line 2449 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 6958 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 179:
#line 2450 "vtkParse.y" /* glr.c:783  */
    { postSig("..."); ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 6964 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 180:
#line 2453 "vtkParse.y" /* glr.c:783  */
    { postSig("class "); }
#line 6970 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 181:
#line 2454 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 6976 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 184:
#line 2460 "vtkParse.y" /* glr.c:783  */
    { postSig("="); markSig(); }
#line 6982 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 185:
#line 2462 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentTemplate->NumberOfParameters-1;
      ValueInfo *param = currentTemplate->Parameters[i];
      chopSig();
      param->Value = copySig();
    }
#line 6993 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 188:
#line 2479 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 6999 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 189:
#line 2480 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 7005 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 190:
#line 2481 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 7011 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 191:
#line 2482 "vtkParse.y" /* glr.c:783  */
    { reject_function(); }
#line 7017 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 199:
#line 2498 "vtkParse.y" /* glr.c:783  */
    { output_function(); }
#line 7023 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 209:
#line 2516 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsExplicit = ((getType() & VTK_PARSE_EXPLICIT) != 0);
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7033 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 210:
#line 2522 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7039 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 211:
#line 2523 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->IsOperator = 1;
      currentFunction->Name = "operator typecast";
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", "operator typecast");
    }
#line 7052 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 212:
#line 2534 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = copySig(); }
#line 7058 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 213:
#line 2537 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7064 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 214:
#line 2539 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed operator", currentFunction->Name);
    }
#line 7076 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 215:
#line 2549 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      currentFunction->IsOperator = 1;
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7086 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 217:
#line 2558 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = vtkstrcat(copySig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7092 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 218:
#line 2561 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("operator "); }
#line 7098 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 219:
#line 2565 "vtkParse.y" /* glr.c:783  */
    {
      postSig(";");
      closeSig();
      currentFunction->Name = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str);
      currentFunction->Comment = vtkstrdup(getComment());
      vtkParseDebug("Parsed func", currentFunction->Name);
    }
#line 7110 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 222:
#line 2577 "vtkParse.y" /* glr.c:783  */
    { postSig(" throw "); }
#line 7116 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 223:
#line 2577 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 7122 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 224:
#line 2578 "vtkParse.y" /* glr.c:783  */
    { postSig(" const"); currentFunction->IsConst = 1; }
#line 7128 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 225:
#line 2580 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" = 0");
      currentFunction->IsPureVirtual = 1;
      if (currentClass) { currentClass->IsAbstract = 1; }
    }
#line 7138 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 226:
#line 2586 "vtkParse.y" /* glr.c:783  */
    {
      postSig(" "); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str));
      if (strcmp((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str), "final") == 0) { currentFunction->IsFinal = 1; }
    }
#line 7147 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 227:
#line 2590 "vtkParse.y" /* glr.c:783  */
    { chopSig(); }
#line 7153 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 230:
#line 2595 "vtkParse.y" /* glr.c:783  */
    { postSig(" noexcept"); }
#line 7159 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 231:
#line 2598 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsDeleted = 1; }
#line 7165 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 235:
#line 2605 "vtkParse.y" /* glr.c:783  */
    { postSig(" -> "); clearType(); clearTypeId(); }
#line 7171 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 236:
#line 2607 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7180 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 243:
#line 2625 "vtkParse.y" /* glr.c:783  */
    {
      postSig("(");
      set_return(currentFunction, getType(), getTypeId(), 0);
    }
#line 7189 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 244:
#line 2630 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7195 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 245:
#line 2637 "vtkParse.y" /* glr.c:783  */
    { closeSig(); }
#line 7201 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 246:
#line 2638 "vtkParse.y" /* glr.c:783  */
    { openSig(); }
#line 7207 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 247:
#line 2640 "vtkParse.y" /* glr.c:783  */
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
#line 7227 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 248:
#line 2657 "vtkParse.y" /* glr.c:783  */
    { pushType(); postSig("("); }
#line 7233 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 249:
#line 2659 "vtkParse.y" /* glr.c:783  */
    { popType(); postSig(")"); }
#line 7239 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 256:
#line 2676 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7245 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 258:
#line 2679 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); }
#line 7251 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 259:
#line 2680 "vtkParse.y" /* glr.c:783  */
    { clearType(); clearTypeId(); postSig(", "); }
#line 7257 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 261:
#line 2683 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig(", ..."); }
#line 7263 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 262:
#line 2685 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsVariadic = 1; postSig("..."); }
#line 7269 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 263:
#line 2688 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7275 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 264:
#line 2690 "vtkParse.y" /* glr.c:783  */
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
#line 7294 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 265:
#line 2705 "vtkParse.y" /* glr.c:783  */
    {
      unsigned long i = currentFunction->NumberOfParameters-1;
      if (getVarValue())
      {
        currentFunction->Parameters[i]->Value = getVarValue();
      }
    }
#line 7306 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 266:
#line 2714 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); }
#line 7312 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 268:
#line 2718 "vtkParse.y" /* glr.c:783  */
    { postSig("="); clearVarValue(); markSig(); }
#line 7318 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 269:
#line 2719 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7324 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 270:
#line 2720 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); }
#line 7330 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 271:
#line 2721 "vtkParse.y" /* glr.c:783  */
    { chopSig(); setVarValue(copySig()); }
#line 7336 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 272:
#line 2722 "vtkParse.y" /* glr.c:783  */
    { clearVarValue(); markSig(); postSig("("); }
#line 7342 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 273:
#line 2724 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(")"); setVarValue(copySig()); }
#line 7348 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 274:
#line 2727 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7354 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 275:
#line 2728 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7360 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 278:
#line 2740 "vtkParse.y" /* glr.c:783  */
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
#line 7433 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 282:
#line 2813 "vtkParse.y" /* glr.c:783  */
    { postSig(", "); }
#line 7439 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 285:
#line 2819 "vtkParse.y" /* glr.c:783  */
    { setTypePtr(0); }
#line 7445 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 286:
#line 2820 "vtkParse.y" /* glr.c:783  */
    { setTypePtr((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7451 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 287:
#line 2825 "vtkParse.y" /* glr.c:783  */
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
#line 7466 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 288:
#line 2836 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7472 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 289:
#line 2837 "vtkParse.y" /* glr.c:783  */
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
#line 7491 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 290:
#line 2853 "vtkParse.y" /* glr.c:783  */
    { clearVarName(); chopSig(); }
#line 7497 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 292:
#line 2859 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.integer); }
#line 7503 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 293:
#line 2860 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7509 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 294:
#line 2862 "vtkParse.y" /* glr.c:783  */
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
#line 7528 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 295:
#line 2878 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 7534 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 296:
#line 2879 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 7540 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 297:
#line 2880 "vtkParse.y" /* glr.c:783  */
    { postSig("("); scopeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&");
         ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 7547 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 298:
#line 2884 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7553 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 299:
#line 2885 "vtkParse.y" /* glr.c:783  */
    { pushFunction(); postSig("("); }
#line 7559 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 300:
#line 2886 "vtkParse.y" /* glr.c:783  */
    { postSig(")"); }
#line 7565 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 301:
#line 2887 "vtkParse.y" /* glr.c:783  */
    {
      ((*yyvalp).integer) = VTK_PARSE_FUNCTION;
      popFunction();
    }
#line 7574 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 302:
#line 2891 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_ARRAY; }
#line 7580 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 305:
#line 2895 "vtkParse.y" /* glr.c:783  */
    { currentFunction->IsConst = 1; }
#line 7586 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 310:
#line 2903 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7592 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 312:
#line 2908 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = add_indirection((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7598 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 313:
#line 2911 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 7604 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 314:
#line 2913 "vtkParse.y" /* glr.c:783  */
    { setVarName((((yyGLRStackItem const *)yyvsp)[YYFILL (-3)].yystate.yysemantics.yysval.str)); }
#line 7610 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 319:
#line 2922 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7616 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 321:
#line 2926 "vtkParse.y" /* glr.c:783  */
    { clearArray(); }
#line 7622 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 325:
#line 2933 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 7628 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 326:
#line 2934 "vtkParse.y" /* glr.c:783  */
    { postSig("]"); }
#line 7634 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 327:
#line 2937 "vtkParse.y" /* glr.c:783  */
    { pushArraySize(""); }
#line 7640 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 328:
#line 2938 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 7646 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 329:
#line 2938 "vtkParse.y" /* glr.c:783  */
    { chopSig(); pushArraySize(copySig()); }
#line 7652 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 335:
#line 2952 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7658 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 336:
#line 2953 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("~", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7664 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 337:
#line 2957 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7670 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 338:
#line 2959 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7676 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 339:
#line 2961 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7682 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 340:
#line 2965 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7688 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 341:
#line 2967 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7694 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 342:
#line 2969 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7700 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 343:
#line 2971 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7706 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 344:
#line 2973 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7712 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 345:
#line 2975 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat3((((yyGLRStackItem const *)yyvsp)[YYFILL (-2)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7718 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 346:
#line 2976 "vtkParse.y" /* glr.c:783  */
    { postSig("template "); }
#line 7724 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 347:
#line 2978 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat4((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), "template ", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7730 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 348:
#line 2981 "vtkParse.y" /* glr.c:783  */
    { postSig("~"); }
#line 7736 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 349:
#line 2984 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7742 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 350:
#line 2987 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "::"; postSig(((*yyvalp).str)); }
#line 7748 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 351:
#line 2990 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); postSig("<"); }
#line 7754 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 352:
#line 2992 "vtkParse.y" /* glr.c:783  */
    {
      chopSig(); if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig(">"); ((*yyvalp).str) = copySig(); clearTypeId();
    }
#line 7763 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 353:
#line 2998 "vtkParse.y" /* glr.c:783  */
    { markSig(); postSig("decltype"); }
#line 7769 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 354:
#line 2999 "vtkParse.y" /* glr.c:783  */
    { chopSig(); ((*yyvalp).str) = copySig(); clearTypeId(); }
#line 7775 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 355:
#line 3006 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7781 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 356:
#line 3007 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7787 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 357:
#line 3008 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7793 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 358:
#line 3009 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7799 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 359:
#line 3010 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7805 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 360:
#line 3011 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7811 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 361:
#line 3012 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7817 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 362:
#line 3013 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7823 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 363:
#line 3014 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7829 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 364:
#line 3015 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 7835 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 365:
#line 3016 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt8"; postSig(((*yyvalp).str)); }
#line 7841 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 366:
#line 3017 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt8"; postSig(((*yyvalp).str)); }
#line 7847 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 367:
#line 3018 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt16"; postSig(((*yyvalp).str)); }
#line 7853 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 368:
#line 3019 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt16"; postSig(((*yyvalp).str)); }
#line 7859 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 369:
#line 3020 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt32"; postSig(((*yyvalp).str)); }
#line 7865 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 370:
#line 3021 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt32"; postSig(((*yyvalp).str)); }
#line 7871 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 371:
#line 3022 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeInt64"; postSig(((*yyvalp).str)); }
#line 7877 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 372:
#line 3023 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeUInt64"; postSig(((*yyvalp).str)); }
#line 7883 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 373:
#line 3024 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat32"; postSig(((*yyvalp).str)); }
#line 7889 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 374:
#line 3025 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkTypeFloat64"; postSig(((*yyvalp).str)); }
#line 7895 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 375:
#line 3026 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkIdType"; postSig(((*yyvalp).str)); }
#line 7901 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 376:
#line 3027 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "vtkFloatingPointType"; postSig(((*yyvalp).str)); }
#line 7907 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 387:
#line 3052 "vtkParse.y" /* glr.c:783  */
    { setTypeBase(buildTypeBase(getType(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer))); }
#line 7913 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 388:
#line 3053 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_TYPEDEF); }
#line 7919 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 389:
#line 3054 "vtkParse.y" /* glr.c:783  */
    { setTypeMod(VTK_PARSE_FRIEND); }
#line 7925 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 392:
#line 3061 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7931 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 393:
#line 3062 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7937 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 394:
#line 3063 "vtkParse.y" /* glr.c:783  */
    { setTypeMod((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 7943 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 395:
#line 3064 "vtkParse.y" /* glr.c:783  */
    { postSig("constexpr "); ((*yyvalp).integer) = 0; }
#line 7949 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 396:
#line 3067 "vtkParse.y" /* glr.c:783  */
    { postSig("mutable "); ((*yyvalp).integer) = VTK_PARSE_MUTABLE; }
#line 7955 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 397:
#line 3068 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7961 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 398:
#line 3069 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7967 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 399:
#line 3070 "vtkParse.y" /* glr.c:783  */
    { postSig("static "); ((*yyvalp).integer) = VTK_PARSE_STATIC; }
#line 7973 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 400:
#line 3072 "vtkParse.y" /* glr.c:783  */
    { postSig("thread_local "); ((*yyvalp).integer) = VTK_PARSE_THREAD_LOCAL; }
#line 7979 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 401:
#line 3075 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 7985 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 402:
#line 3076 "vtkParse.y" /* glr.c:783  */
    { postSig("virtual "); ((*yyvalp).integer) = VTK_PARSE_VIRTUAL; }
#line 7991 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 403:
#line 3077 "vtkParse.y" /* glr.c:783  */
    { postSig("explicit "); ((*yyvalp).integer) = VTK_PARSE_EXPLICIT; }
#line 7997 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 404:
#line 3080 "vtkParse.y" /* glr.c:783  */
    { postSig("const "); ((*yyvalp).integer) = VTK_PARSE_CONST; }
#line 8003 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 405:
#line 3081 "vtkParse.y" /* glr.c:783  */
    { postSig("volatile "); ((*yyvalp).integer) = VTK_PARSE_VOLATILE; }
#line 8009 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 407:
#line 3086 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8015 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 409:
#line 3096 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8021 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 411:
#line 3098 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8027 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 414:
#line 3104 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8033 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 415:
#line 3106 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8039 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 417:
#line 3111 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8045 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 418:
#line 3112 "vtkParse.y" /* glr.c:783  */
    { postSig("typename "); }
#line 8051 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 419:
#line 3114 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8057 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 420:
#line 3116 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8063 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 421:
#line 3118 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str)); }
#line 8069 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 423:
#line 3124 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8075 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 425:
#line 3126 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8081 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 428:
#line 3133 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8087 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 430:
#line 3135 "vtkParse.y" /* glr.c:783  */
    { setTypeBase((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8093 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 433:
#line 3141 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = 0; }
#line 8099 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 434:
#line 3143 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8105 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 435:
#line 3145 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8111 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 436:
#line 3147 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8117 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 437:
#line 3149 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8123 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 438:
#line 3151 "vtkParse.y" /* glr.c:783  */
    { postSig(" "); setTypeId((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = guess_id_type((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 8129 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 439:
#line 3154 "vtkParse.y" /* glr.c:783  */
    { setTypeId(""); }
#line 8135 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 441:
#line 3158 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_STRING; }
#line 8141 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 442:
#line 3159 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNICODE_STRING;}
#line 8147 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 443:
#line 3160 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OSTREAM; }
#line 8153 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 444:
#line 3161 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_ISTREAM; }
#line 8159 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 445:
#line 3162 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_UNKNOWN; }
#line 8165 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 446:
#line 3163 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_OBJECT; }
#line 8171 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 447:
#line 3164 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_QOBJECT; }
#line 8177 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 448:
#line 3165 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_NULLPTR_T; }
#line 8183 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 449:
#line 3166 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SSIZE_T; }
#line 8189 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 450:
#line 3167 "vtkParse.y" /* glr.c:783  */
    { typeSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); ((*yyvalp).integer) = VTK_PARSE_SIZE_T; }
#line 8195 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 451:
#line 3168 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt8"); ((*yyvalp).integer) = VTK_PARSE_INT8; }
#line 8201 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 452:
#line 3169 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt8"); ((*yyvalp).integer) = VTK_PARSE_UINT8; }
#line 8207 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 453:
#line 3170 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt16"); ((*yyvalp).integer) = VTK_PARSE_INT16; }
#line 8213 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 454:
#line 3171 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt16"); ((*yyvalp).integer) = VTK_PARSE_UINT16; }
#line 8219 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 455:
#line 3172 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt32"); ((*yyvalp).integer) = VTK_PARSE_INT32; }
#line 8225 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 456:
#line 3173 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt32"); ((*yyvalp).integer) = VTK_PARSE_UINT32; }
#line 8231 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 457:
#line 3174 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeInt64"); ((*yyvalp).integer) = VTK_PARSE_INT64; }
#line 8237 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 458:
#line 3175 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeUInt64"); ((*yyvalp).integer) = VTK_PARSE_UINT64; }
#line 8243 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 459:
#line 3176 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat32"); ((*yyvalp).integer) = VTK_PARSE_FLOAT32; }
#line 8249 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 460:
#line 3177 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkTypeFloat64"); ((*yyvalp).integer) = VTK_PARSE_FLOAT64; }
#line 8255 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 461:
#line 3178 "vtkParse.y" /* glr.c:783  */
    { typeSig("vtkIdType"); ((*yyvalp).integer) = VTK_PARSE_ID_TYPE; }
#line 8261 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 462:
#line 3179 "vtkParse.y" /* glr.c:783  */
    { typeSig("double"); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8267 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 463:
#line 3182 "vtkParse.y" /* glr.c:783  */
    { postSig("auto "); ((*yyvalp).integer) = 0; }
#line 8273 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 464:
#line 3183 "vtkParse.y" /* glr.c:783  */
    { postSig("void "); ((*yyvalp).integer) = VTK_PARSE_VOID; }
#line 8279 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 465:
#line 3184 "vtkParse.y" /* glr.c:783  */
    { postSig("bool "); ((*yyvalp).integer) = VTK_PARSE_BOOL; }
#line 8285 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 466:
#line 3185 "vtkParse.y" /* glr.c:783  */
    { postSig("float "); ((*yyvalp).integer) = VTK_PARSE_FLOAT; }
#line 8291 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 467:
#line 3186 "vtkParse.y" /* glr.c:783  */
    { postSig("double "); ((*yyvalp).integer) = VTK_PARSE_DOUBLE; }
#line 8297 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 468:
#line 3187 "vtkParse.y" /* glr.c:783  */
    { postSig("char "); ((*yyvalp).integer) = VTK_PARSE_CHAR; }
#line 8303 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 469:
#line 3188 "vtkParse.y" /* glr.c:783  */
    { postSig("char16_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR16_T; }
#line 8309 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 470:
#line 3189 "vtkParse.y" /* glr.c:783  */
    { postSig("char32_t "); ((*yyvalp).integer) = VTK_PARSE_CHAR32_T; }
#line 8315 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 471:
#line 3190 "vtkParse.y" /* glr.c:783  */
    { postSig("wchar_t "); ((*yyvalp).integer) = VTK_PARSE_WCHAR_T; }
#line 8321 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 472:
#line 3191 "vtkParse.y" /* glr.c:783  */
    { postSig("int "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8327 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 473:
#line 3192 "vtkParse.y" /* glr.c:783  */
    { postSig("short "); ((*yyvalp).integer) = VTK_PARSE_SHORT; }
#line 8333 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 474:
#line 3193 "vtkParse.y" /* glr.c:783  */
    { postSig("long "); ((*yyvalp).integer) = VTK_PARSE_LONG; }
#line 8339 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 475:
#line 3194 "vtkParse.y" /* glr.c:783  */
    { postSig("__int64 "); ((*yyvalp).integer) = VTK_PARSE___INT64; }
#line 8345 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 476:
#line 3195 "vtkParse.y" /* glr.c:783  */
    { postSig("signed "); ((*yyvalp).integer) = VTK_PARSE_INT; }
#line 8351 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 477:
#line 3196 "vtkParse.y" /* glr.c:783  */
    { postSig("unsigned "); ((*yyvalp).integer) = VTK_PARSE_UNSIGNED_INT; }
#line 8357 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 481:
#line 3219 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = ((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8363 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 482:
#line 3223 "vtkParse.y" /* glr.c:783  */
    { postSig("&"); ((*yyvalp).integer) = VTK_PARSE_REF; }
#line 8369 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 483:
#line 3227 "vtkParse.y" /* glr.c:783  */
    { postSig("&&"); ((*yyvalp).integer) = (VTK_PARSE_RVALUE | VTK_PARSE_REF); }
#line 8375 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 484:
#line 3230 "vtkParse.y" /* glr.c:783  */
    { postSig("*"); }
#line 8381 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 485:
#line 3231 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer); }
#line 8387 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 486:
#line 3234 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_POINTER; }
#line 8393 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 487:
#line 3236 "vtkParse.y" /* glr.c:783  */
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
#line 8408 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 489:
#line 3252 "vtkParse.y" /* glr.c:783  */
    {
      unsigned int n;
      n = (((((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.integer) << 2) | (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer));
      if ((n & VTK_PARSE_INDIRECT) != n)
      {
        n = VTK_PARSE_BAD_INDIRECT;
      }
      ((*yyvalp).integer) = n;
    }
#line 8422 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 490:
#line 3276 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_DECL); }
#line 8428 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 491:
#line 3277 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8434 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 492:
#line 3280 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ID); }
#line 8440 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 493:
#line 3281 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8446 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 494:
#line 3284 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_REF); }
#line 8452 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 495:
#line 3285 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8458 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 496:
#line 3288 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_FUNC); }
#line 8464 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 497:
#line 3289 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8470 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 498:
#line 3292 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_ARRAY); }
#line 8476 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 499:
#line 3293 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8482 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 500:
#line 3296 "vtkParse.y" /* glr.c:783  */
    { setAttributeRole(VTK_PARSE_ATTRIB_CLASS); }
#line 8488 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 501:
#line 3297 "vtkParse.y" /* glr.c:783  */
    { clearAttributeRole(); }
#line 8494 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 509:
#line 3311 "vtkParse.y" /* glr.c:783  */
    { markSig(); }
#line 8500 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 510:
#line 3312 "vtkParse.y" /* glr.c:783  */
    { handle_attribute(cutSig(), (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.integer)); }
#line 8506 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 511:
#line 3315 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = 0; }
#line 8512 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 512:
#line 3316 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).integer) = VTK_PARSE_PACK; }
#line 8518 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 515:
#line 3321 "vtkParse.y" /* glr.c:783  */
    { postSig(": "); }
#line 8524 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 522:
#line 3332 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 8530 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 523:
#line 3340 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("(");}
#line 8536 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 524:
#line 3341 "vtkParse.y" /* glr.c:783  */
    {
   postSig("a);");
   currentFunction->Macro = "vtkSetMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, getType(), getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8550 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 525:
#line 3350 "vtkParse.y" /* glr.c:783  */
    {postSig("Get");}
#line 8556 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 526:
#line 3351 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8562 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 527:
#line 3351 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8568 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 528:
#line 3352 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, getType(), getTypeId(), 0);
   output_function();
   }
#line 8581 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 529:
#line 3360 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set");}
#line 8587 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 530:
#line 3361 "vtkParse.y" /* glr.c:783  */
    {
   postSig("(char *);");
   currentFunction->Macro = "vtkSetStringMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8601 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 531:
#line 3370 "vtkParse.y" /* glr.c:783  */
    {preSig("char *Get");}
#line 8607 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 532:
#line 3371 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetStringMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-1)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_CHAR_PTR, "char", 0);
   output_function();
   }
#line 8620 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 533:
#line 3379 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8626 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 534:
#line 3379 "vtkParse.y" /* glr.c:783  */
    {closeSig();}
#line 8632 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 535:
#line 3381 "vtkParse.y" /* glr.c:783  */
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
#line 8667 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 536:
#line 3412 "vtkParse.y" /* glr.c:783  */
    {preSig("void Set"); postSig("("); }
#line 8673 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 537:
#line 3413 "vtkParse.y" /* glr.c:783  */
    {
   postSig("*);");
   currentFunction->Macro = "vtkSetObjectMacro";
   currentFunction->Name = vtkstrcat("Set", (((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   add_parameter(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   set_return(currentFunction, VTK_PARSE_VOID, "void", 0);
   output_function();
   }
#line 8687 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 538:
#line 3422 "vtkParse.y" /* glr.c:783  */
    {postSig("*Get");}
#line 8693 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 539:
#line 3423 "vtkParse.y" /* glr.c:783  */
    {markSig();}
#line 8699 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 540:
#line 3423 "vtkParse.y" /* glr.c:783  */
    {swapSig();}
#line 8705 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 541:
#line 3424 "vtkParse.y" /* glr.c:783  */
    {
   postSig("();");
   currentFunction->Macro = "vtkGetObjectMacro";
   currentFunction->Name = vtkstrcat("Get", (((yyGLRStackItem const *)yyvsp)[YYFILL (-5)].yystate.yysemantics.yysval.str));
   currentFunction->Comment = vtkstrdup(getComment());
   set_return(currentFunction, VTK_PARSE_OBJECT_PTR, getTypeId(), 0);
   output_function();
   }
#line 8718 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 542:
#line 3433 "vtkParse.y" /* glr.c:783  */
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
#line 8740 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 543:
#line 3450 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8746 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 544:
#line 3451 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8755 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 545:
#line 3455 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8761 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 546:
#line 3456 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 2);
   }
#line 8770 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 547:
#line 3460 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8776 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 548:
#line 3461 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8785 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 549:
#line 3465 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8791 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 550:
#line 3466 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 3);
   }
#line 8800 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 551:
#line 3470 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8806 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 552:
#line 3471 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8815 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 553:
#line 3475 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8821 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 554:
#line 3476 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 4);
   }
#line 8830 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 555:
#line 3480 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8836 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 556:
#line 3481 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputSetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8845 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 557:
#line 3485 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8851 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 558:
#line 3486 "vtkParse.y" /* glr.c:783  */
    {
   chopSig();
   outputGetVectorMacro((((yyGLRStackItem const *)yyvsp)[YYFILL (-4)].yystate.yysemantics.yysval.str), getType(), copySig(), 6);
   }
#line 8860 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 559:
#line 3490 "vtkParse.y" /* glr.c:783  */
    {startSig(); markSig();}
#line 8866 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 560:
#line 3492 "vtkParse.y" /* glr.c:783  */
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
#line 8886 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 561:
#line 3507 "vtkParse.y" /* glr.c:783  */
    {startSig();}
#line 8892 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 562:
#line 3509 "vtkParse.y" /* glr.c:783  */
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
#line 8909 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 563:
#line 3522 "vtkParse.y" /* glr.c:783  */
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
#line 8950 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 564:
#line 3559 "vtkParse.y" /* glr.c:783  */
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
#line 8992 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 565:
#line 3597 "vtkParse.y" /* glr.c:783  */
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
#line 9032 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 568:
#line 3641 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "()"; }
#line 9038 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 569:
#line 3642 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "[]"; }
#line 9044 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 570:
#line 3643 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new[]"; }
#line 9050 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 571:
#line 3644 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete[]"; }
#line 9056 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 572:
#line 3645 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<"; }
#line 9062 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 573:
#line 3646 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">"; }
#line 9068 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 574:
#line 3647 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ","; }
#line 9074 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 575:
#line 3648 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "="; }
#line 9080 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 576:
#line 3649 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 9086 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 577:
#line 3650 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>"; }
#line 9092 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 578:
#line 3651 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = vtkstrcat("\"\" ", (((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); }
#line 9098 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 580:
#line 3655 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%"; }
#line 9104 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 581:
#line 3656 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*"; }
#line 9110 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 582:
#line 3657 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/"; }
#line 9116 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 583:
#line 3658 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-"; }
#line 9122 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 584:
#line 3659 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+"; }
#line 9128 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 585:
#line 3660 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!"; }
#line 9134 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 586:
#line 3661 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "~"; }
#line 9140 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 587:
#line 3662 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&"; }
#line 9146 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 588:
#line 3663 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|"; }
#line 9152 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 589:
#line 3664 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^"; }
#line 9158 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 590:
#line 3665 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " new"; }
#line 9164 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 591:
#line 3666 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = " delete"; }
#line 9170 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 592:
#line 3667 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<="; }
#line 9176 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 593:
#line 3668 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">>="; }
#line 9182 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 594:
#line 3669 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<<"; }
#line 9188 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 595:
#line 3670 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ".*"; }
#line 9194 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 596:
#line 3671 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->*"; }
#line 9200 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 597:
#line 3672 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "->"; }
#line 9206 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 598:
#line 3673 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "+="; }
#line 9212 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 599:
#line 3674 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "-="; }
#line 9218 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 600:
#line 3675 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "*="; }
#line 9224 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 601:
#line 3676 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "/="; }
#line 9230 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 602:
#line 3677 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "%="; }
#line 9236 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 603:
#line 3678 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "++"; }
#line 9242 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 604:
#line 3679 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "--"; }
#line 9248 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 605:
#line 3680 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&="; }
#line 9254 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 606:
#line 3681 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "|="; }
#line 9260 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 607:
#line 3682 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "^="; }
#line 9266 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 608:
#line 3683 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "&&"; }
#line 9272 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 609:
#line 3684 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "||"; }
#line 9278 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 610:
#line 3685 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "=="; }
#line 9284 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 611:
#line 3686 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "!="; }
#line 9290 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 612:
#line 3687 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "<="; }
#line 9296 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 613:
#line 3688 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = ">="; }
#line 9302 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 614:
#line 3691 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typedef"; }
#line 9308 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 615:
#line 3692 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "typename"; }
#line 9314 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 616:
#line 3693 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "class"; }
#line 9320 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 617:
#line 3694 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "struct"; }
#line 9326 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 618:
#line 3695 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "union"; }
#line 9332 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 619:
#line 3696 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "template"; }
#line 9338 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 620:
#line 3697 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "public"; }
#line 9344 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 621:
#line 3698 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "protected"; }
#line 9350 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 622:
#line 3699 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "private"; }
#line 9356 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 623:
#line 3700 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const"; }
#line 9362 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 624:
#line 3701 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "volatile"; }
#line 9368 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 625:
#line 3702 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static"; }
#line 9374 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 626:
#line 3703 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "thread_local"; }
#line 9380 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 627:
#line 3704 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "constexpr"; }
#line 9386 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 628:
#line 3705 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "inline"; }
#line 9392 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 629:
#line 3706 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "virtual"; }
#line 9398 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 630:
#line 3707 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "explicit"; }
#line 9404 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 631:
#line 3708 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "decltype"; }
#line 9410 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 632:
#line 3709 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "default"; }
#line 9416 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 633:
#line 3710 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "extern"; }
#line 9422 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 634:
#line 3711 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "using"; }
#line 9428 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 635:
#line 3712 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "namespace"; }
#line 9434 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 636:
#line 3713 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "operator"; }
#line 9440 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 637:
#line 3714 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "enum"; }
#line 9446 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 638:
#line 3715 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "throw"; }
#line 9452 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 639:
#line 3716 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "noexcept"; }
#line 9458 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 640:
#line 3717 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "const_cast"; }
#line 9464 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 641:
#line 3718 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "dynamic_cast"; }
#line 9470 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 642:
#line 3719 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "static_cast"; }
#line 9476 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 643:
#line 3720 "vtkParse.y" /* glr.c:783  */
    { ((*yyvalp).str) = "reinterpret_cast"; }
#line 9482 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 657:
#line 3744 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9488 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 658:
#line 3745 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9494 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 660:
#line 3746 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9500 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 662:
#line 3750 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("::"); }
#line 9506 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 666:
#line 3757 "vtkParse.y" /* glr.c:783  */
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
#line 9540 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 667:
#line 3786 "vtkParse.y" /* glr.c:783  */
    { postSig(":"); postSig(" "); }
#line 9546 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 668:
#line 3786 "vtkParse.y" /* glr.c:783  */
    { postSig("."); }
#line 9552 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 669:
#line 3787 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9558 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 670:
#line 3788 "vtkParse.y" /* glr.c:783  */
    { postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig(" "); }
#line 9564 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 672:
#line 3791 "vtkParse.y" /* glr.c:783  */
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
#line 9590 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 676:
#line 3818 "vtkParse.y" /* glr.c:783  */
    { postSig("< "); }
#line 9596 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 677:
#line 3819 "vtkParse.y" /* glr.c:783  */
    { postSig("> "); }
#line 9602 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 678:
#line 3820 "vtkParse.y" /* glr.c:783  */
    { postSig(">"); }
#line 9608 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 680:
#line 3824 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9614 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 681:
#line 3825 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9620 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 683:
#line 3829 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(";"); }
#line 9626 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 691:
#line 3843 "vtkParse.y" /* glr.c:783  */
    { postSig("= "); }
#line 9632 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 692:
#line 3844 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(", "); }
#line 9638 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 693:
#line 3848 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '<') { postSig(" "); }
      postSig("<");
    }
#line 9648 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 694:
#line 3854 "vtkParse.y" /* glr.c:783  */
    {
      chopSig();
      if (getSig()[getSigLength()-1] == '>') { postSig(" "); }
      postSig("> ");
    }
#line 9658 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 697:
#line 3865 "vtkParse.y" /* glr.c:783  */
    { postSig("["); }
#line 9664 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 698:
#line 3866 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("] "); }
#line 9670 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 699:
#line 3867 "vtkParse.y" /* glr.c:783  */
    { postSig("[["); }
#line 9676 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 700:
#line 3868 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig("]] "); }
#line 9682 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 701:
#line 3871 "vtkParse.y" /* glr.c:783  */
    { postSig("("); }
#line 9688 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 702:
#line 3872 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9694 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 703:
#line 3873 "vtkParse.y" /* glr.c:783  */
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("*"); }
#line 9700 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 704:
#line 3874 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9706 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 705:
#line 3875 "vtkParse.y" /* glr.c:783  */
    { postSig("("); postSig((((yyGLRStackItem const *)yyvsp)[YYFILL (0)].yystate.yysemantics.yysval.str)); postSig("&"); }
#line 9712 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 706:
#line 3876 "vtkParse.y" /* glr.c:783  */
    { chopSig(); postSig(") "); }
#line 9718 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 707:
#line 3879 "vtkParse.y" /* glr.c:783  */
    { postSig("{ "); }
#line 9724 "vtkParse.tab.c" /* glr.c:783  */
    break;

  case 708:
#line 3879 "vtkParse.y" /* glr.c:783  */
    { postSig("} "); }
#line 9730 "vtkParse.tab.c" /* glr.c:783  */
    break;


#line 9734 "vtkParse.tab.c" /* glr.c:783  */
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
  (!!((Yystate) == (-1040)))

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



#line 3926 "vtkParse.y" /* glr.c:2551  */

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
    item->Access = access_level;
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

/* if the name is a const in this namespace, then scope it */
const char *add_const_scope(const char *name)
{
  static char text[256];
  NamespaceInfo *scope = currentNamespace;
  TemplateInfo *tparams;
  const char *classname;
  unsigned long i, j;
  int addscope = 0;

  strcpy(text, name);

  if (currentClass)
  {
    for (j = 0; j < currentClass->NumberOfConstants; j++)
    {
      if (strcmp(currentClass->Constants[j]->Name, text) == 0)
      {
        classname = currentClass->Name;
        tparams = currentClass->Template;
        if (tparams)
        {
          classname = vtkstrcat(classname, "<");
          for (i = 0; i < tparams->NumberOfParameters; i++)
          {
            if (i != 0)
            {
              classname = vtkstrcat(classname, ",");
            }
            classname = vtkstrcat(classname, tparams->Parameters[i]->Name);
          }
          classname = vtkstrcat(classname, ">");
        }
        prepend_scope(text, classname);
        addscope = 1;
        break;
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
          break;
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
    else if (strcmp(att, "vtk::zerocopy") == 0 &&
             role == VTK_PARSE_ATTRIB_DECL)
    {
      setTypeMod(VTK_PARSE_ZEROCOPY);
    }
    else
    {
      print_parser_error("attribute cannot be used here", att, l);
      exit(1);
    }
  }
  else if (strncmp(att, "expects:", 8) == 0 && att[8] != ':' &&
           role == VTK_PARSE_ATTRIB_FUNC)
  {
    l = 8;
    while (att[l] == ' ') { l++; }
    currentFunction->Expects = vtkstrdup(&att[l]);
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
