# Always add current source and build directories to include path
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

SET(vtkWrapXML_SRCS
  vtkParse.tab.c
  vtkParseUtils.c
  vtkParseVariables.c
  vtkParseHierarchy.c
  vtkWrapXML.c
)

SET(vtkWrapXML_EXE vtkWrapXML)
ADD_EXECUTABLE(${vtkWrapXML_EXE} ${vtkWrapXML_SRCS})


SET(vtkWrapHierarchy_SRCS
  vtkParse.tab.c
  vtkWrapHierarchy.c
)

SET(vtkWrapHierarchy_EXE vtkWrapHierarchy)
ADD_EXECUTABLE(${vtkWrapHierarchy_EXE} ${vtkWrapHierarchy_SRCS})


SET(vtkBuildHierarchy_SRCS
  vtkBuildHierarchy.c
)

SET(vtkBuildHierarchy_EXE vtkBuildHierarchy)
ADD_EXECUTABLE(${vtkBuildHierarchy_EXE} ${vtkBuildHierarchy_SRCS})

