# WrapVTK, an XML wrapper generator for VTK

Copyright (c) 2010-2023, David Gobbi  
See Copyright.txt for more information.

## Description

WrapVTK is a collection of CMake files and wrapper generator
code that can generate wrappers for an existing VTK binary
directory, assuming that all the header files and CMake exports
are present.

Currently, WrapVTK contains a generator for XML.  The vtkWrapXML
generator uses the WrapVTK parsing utilities to generate information
about all accessible methods and variables of the VTK classes
and then dumps the information into a separate xml file for each
class.

See [WrapVTK XML](Doc/WrapVTK_XML.md) for a description of the XML
that it produces.
