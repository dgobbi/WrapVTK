# Always add current source and build directories to include path
INCLUDE_DIRECTORIES(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

# Disable deprecation warnings for standard C and STL functions in VS2005
# and later
IF(MSVC_VERSION EQUAL 1400 OR MSVC_VERSION GREATER 1400)
  ADD_DEFINITIONS(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -D_CRT_SECURE_NO_WARNINGS)
  ADD_DEFINITIONS(-D_SCL_SECURE_NO_DEPRECATE -D_SCL_SECURE_NO_WARNINGS)
ENDIF(MSVC_VERSION EQUAL 1400 OR MSVC_VERSION GREATER 1400)

SET(vtkWrapXML_SRCS
  vtkParse.tab.c
  vtkParseMain.c
  vtkParseProperties.c
  vtkParseHierarchy.c
  vtkParseMerge.c
  vtkParsePreprocess.c
  vtkWrapXML.c
)

SET(vtkWrapXML_EXE vtkWrapXML)
ADD_EXECUTABLE(${vtkWrapXML_EXE} ${vtkWrapXML_SRCS})


SET(vtkWrapHierarchy_SRCS
  vtkParse.tab.c
  vtkParsePreprocess.c
  vtkWrapHierarchy.c
)

SET(vtkWrapHierarchy_EXE vtkWrapHierarchy)
ADD_EXECUTABLE(${vtkWrapHierarchy_EXE} ${vtkWrapHierarchy_SRCS})

