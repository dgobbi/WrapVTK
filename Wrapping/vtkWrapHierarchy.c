/*=========================================================================

  Program:   Visualization Toolkit
  Module:    vtkWrapHierarchy.c

  Copyright (c) 2010 David Gobbi
  All rights reserved.

     This software is distributed WITHOUT ANY WARRANTY; without even
     the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR
     PURPOSE.  Please see Copyright.txt for more details.

=========================================================================*/

/*
 The vtkWrapHierarchy program generates a list of all classes in the
 input header file and, for each class, output the following line in
 the output file:

 classname [ : superclass ] ; header.h
*/

#include <stdio.h>
#include <string.h>
#include "vtkParse.h"

void vtkParseOutput(FILE *fp, FileInfo *data)
{
  int i, j;

  for (i = 0; data->ClassesInFile[i]; i++)
    {
    fprintf(fp, "%s ", data->ClassesInFile[i]);
    if (data->ClassSuperClasses[i][0])
      {
      fprintf(fp, ": ");
      }

    for (j = 0; data->ClassSuperClasses[i][j]; j++)
      {
      fprintf(fp, "%s ", data->ClassSuperClasses[i][j]);
      if (data->ClassSuperClasses[i][j+1])
        {
        fprintf(fp, ", ");
        }
      }

    j = strlen(data->FileName) - 1;
    while (j > 0 && data->FileName[j-1] != '/' && data->FileName[j-1] != '\\')
      {
      j--;
      }

    fprintf(fp, "; %s\n", &data->FileName[j]);
    }
}
