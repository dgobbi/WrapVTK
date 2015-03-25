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
  vtkParseExtras.c
  vtkParseMain.c
  vtkParseData.c
 # vtkParseSearch.c
  vtkParseString.c
  vtkParseProperties.c
  vtkParseHierarchy.c
  vtkParseMerge.c
  vtkParsePreprocess.c
  vtkWrapXML.c
)

SET(vtkWrapXML_EXE vtkWrapXML)
ADD_EXECUTABLE(${vtkWrapXML_EXE} ${vtkWrapXML_SRCS})


SET(vtkWrapVTKHierarchy_SRCS
  vtkParse.tab.c
  vtkParseMain.c
  vtkParsePreprocess.c
  vtkParseString.c
  vtkParseData.c
  vtkWrapHierarchy.c
)

SET(vtkWrapVTKHierarchy_EXE vtkWrapVTKHierarchy)
ADD_EXECUTABLE(${vtkWrapVTKHierarchy_EXE} ${vtkWrapVTKHierarchy_SRCS})

