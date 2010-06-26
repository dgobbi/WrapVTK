/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseMain.h

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

/**
 * vtkParseMain.c is the main() function for the wrapper executables.
 *
 * "Usage: vtkWrap [options] input_file output_file"
 * " --concrete      concrete class (default)"
 * "  --abstract      abstract class"
 * "  --vtkobject     vtkObjectBase-derived class (default)"
 * "  --special       non-vtkObjectBase class"
 * "  --hints <file>  hints file"
 * "  --hierarchy <file>  hierarchy file"
 * "  -I <dir>        add an include directory"
*/

#ifndef VTK_PARSE_MAIN_H
#define VTK_PARSE_MAIN_H

/**
 * Options for the wrappers
 */
typedef struct _OptionInfo
{
  char *InputFileName;
  char *OutputFileName;
  char *HintFileName;
  char *HierarchyFileName;
  int   IsVTKObject;
  int   IsConcrete;
  int   NumberOfIncludeDirectories;
  char **IncludeDirectories;
} OptionInfo;

#ifdef __cplusplus
extern "C" {
#endif

/**
 * Return the options provided on the command line
 */
OptionInfo *vtkParse_GetCommandLineOptions();

/**
 * Return the full path to a header file given the paths in "options"
 */
char *vtkParse_FindPath(const char *filename);

/**
 * Free a path returned by FindPath
 */
void vtkParse_FreePath(char *filepath);

#ifdef __cplusplus
} /* extern "C" */
#endif

#endif
