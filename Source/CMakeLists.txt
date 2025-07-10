# allow fopen, strncpy, and similar functions without VS warnings
if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -D_CRT_SECURE_NO_WARNINGS)
  add_definitions(-D_SCL_SECURE_NO_DEPRECATE -D_SCL_SECURE_NO_WARNINGS)
endif()


# By default, prefer the vtkParseProperties.c in this directory
option(WRAPVTK_USE_OWN_PROPERTIES_C "Use WrapVTK's own vtkParseProperties" ON)

set(wrapxml_extra_sources)
if(VTK_VERSION VERSION_LESS 9.4 OR WRAPVTK_USE_OWN_PROPERTIES_C)
  configure_file("vtkParseProperties.h.in"
                 "${CMAKE_CURRENT_BINARY_DIR}/vtkParseProperties.h"
                 COPYONLY)
  set(wrapxml_extra_sources vtkParseProperties.c)
else()
  file(REMOVE "${CMAKE_CURRENT_BINARY_DIR}/vtkParseProperties.h")
endif()

add_executable(vtkWrapXML vtkWrapXML.c ${wrapxml_extra_sources})
target_link_libraries(vtkWrapXML VTK::WrappingTools)
