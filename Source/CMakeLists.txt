# allow fopen, strncpy, and similar functions without VS warnings
if(MSVC)
  add_definitions(-D_CRT_SECURE_NO_DEPRECATE -D_CRT_NONSTDC_NO_DEPRECATE -D_CRT_SECURE_NO_WARNINGS)
  add_definitions(-D_SCL_SECURE_NO_DEPRECATE -D_SCL_SECURE_NO_WARNINGS)
endif()

add_executable(vtkWrapXML vtkWrapXML.c vtkParseProperties.c)
target_link_libraries(vtkWrapXML VTK::WrappingTools)
