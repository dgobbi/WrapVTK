# list of sources for executable
SET(vtkWrapXML_SRCS
  vtkParse.tab.c
  vtkParseUtils.c
  vtkParseVariables.c
  vtkWrapXML.c
)

# name of executable
SET(vtkWrapXML_EXE vtkWrapXML)

# Always add current source and build directories to include path
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

ADD_EXECUTABLE(${vtkWrapXML_EXE} ${vtkWrapXML_SRCS})

