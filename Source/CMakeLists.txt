# allow fopen, strncpy, and similar functions without VS warnings
if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -D_CRT_SECURE_NO_WARNINGS)
  add_definitions(-D_SCL_SECURE_NO_DEPRECATE -D_SCL_SECURE_NO_WARNINGS)
endif()

set(wrapxml_extra_sources)
if(VTK_VERSION VERSION_LESS 9.4)
  set(wrapxml_extra_sources vtkParseProperties.c)
endif()

add_executable(vtkWrapXML vtkWrapXML.c ${wrapxml_extra_sources})
target_link_libraries(vtkWrapXML VTK::WrappingTools)
