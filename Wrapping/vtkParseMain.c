/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkParseMain.c

  Copyright (c) Ken Martin, Will Schroeder, Bill Lorensen
  All rights reserved.
  See Copyright.txt or http://www.kitware.com/Copyright.htm for details.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  See the above copyright notice for more information.

=========================================================================*/

/*

This file provides a unified front-end for the wrapper generators.
It contains the main() function and argument parsing, and calls
the code that parses the header file.

*/

#include "vtkParse.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* This method provides the back-end for the generators */
extern void vtkParseOutput(FILE *, FileInfo *);

typedef struct _OptionData
{
  char *HintFileName;
  char *HierarchyFileName;
  int IsVTKObject;
  int IsConcrete;
} OptionData;

/* Check the options */
static int check_options(OptionData *options, int argc, char *argv[])
{
  int i;

  options->IsConcrete = 1;
  options->IsVTKObject = 1;
  options->HierarchyFileName = 0;
  options->HintFileName = 0;

  for (i = 1; i < argc && argv[i][0] == '-'; i++)
    {
    if (strcmp(argv[i], "--concrete") == 0)
      {
      options->IsConcrete = 1;
      }
    else if (strcmp(argv[i], "--abstract") == 0)
      {
      options->IsConcrete = 0;
      }
    else if (strcmp(argv[i], "--vtkobject") == 0)
      {
      options->IsVTKObject = 1;
      }
    else if (strcmp(argv[i], "--special") == 0)
      {
      options->IsVTKObject = 0;
      }
    else if (strcmp(argv[i], "--hints") == 0)
      {
      i++;
      if (i >= argc || argv[i][0] == '-')
        {
        return -1;
        }
      options->HintFileName = argv[i];
      }
    else if (strcmp(argv[i], "--hierarchy") == 0)
      {
      i++;
      if (i >= argc || argv[i][0] == '-')
        {
        return -1;
        }
      options->HierarchyFileName = argv[i];
      }
    }

  return i;
}

int main(int argc, char *argv[])
{
  int argi;
  int has_options = 0;
  OptionData options;
  char *input_filename;
  char *output_filename;
  FILE *ifile;
  FILE *ofile;
  FILE *hfile = 0;
  FileInfo *data;

  argi = check_options(&options, argc, argv);
  if (argi > 1 && argc - argi == 2)
    {
    has_options = 1;
    }
  else if (argi < 0 || argc < 3 || argc > 5)
    {
    fprintf(stderr,
            "Usage: %s [options] input_file output_file\n"
            "  --concrete      concrete class (default)\n"
            "  --abstract      abstract class\n"
            "  --vtkobject     vtkObjectBase-derived class (default)\n"
            "  --special       non-vtkObjectBase class\n"
            "  --hints <file>  hints file\n"
            "  --hierarchy <file>  hierarchy file\n",
            argv[0]);
    exit(1);
    }

  input_filename = argv[argi++];

  if (!(ifile = fopen(input_filename, "r")))
    {
    fprintf(stderr,"Error opening input file %s\n", input_filename);
    exit(1);
    }

  if (!has_options)
    {
    if (argc == 5)
      {
      options.HintFileName = argv[argi++];
      }
    if (argc >= 4)
      {
      options.IsConcrete = atoi(argv[argi++]);
      }
    }

  if (options.HintFileName && options.HintFileName[0] != '\0')
    {
    if (!(hfile = fopen(options.HintFileName, "r")))
      {
      fprintf(stderr, "Error opening hint file %s\n", options.HintFileName);
      fclose(ifile);
      exit(1);
      }
    }

  output_filename = argv[argi++];
  ofile = fopen(output_filename, "w");

  if (!ofile)
    {
    fprintf(stderr, "Error opening output file %s\n", output_filename);
    fclose(ifile);
    if (hfile)
      {
      fclose(hfile);
      }
    exit(1);
    }

  data = vtkParse_ParseFile(
    input_filename, options.IsConcrete, ifile, stderr);

  if (!data)
    {
    fclose(ifile);
    fclose(ofile);
    if (hfile)
      {
      fclose(hfile);
      }
    exit(1);
    }

  data->IsVTKObject = options.IsVTKObject;
  data->OutputFileName = (char *)malloc(strlen(output_filename) + 1);
  strcpy(data->OutputFileName, output_filename);

  if (options.HierarchyFileName)
    {
    data->HierarchyFileName =
      (char *)malloc(strlen(options.HierarchyFileName)+1);
    strcpy(data->HierarchyFileName, options.HierarchyFileName);
    }

  if (hfile)
    {
    vtkParse_ReadHints(data, hfile, stderr);
    }

  vtkParseOutput(ofile, data);

  fclose(ofile);

  vtkParse_Free(data);

  return 0;
}

