add_executable(vtkWrapXML vtkWrapXML.c vtkParseProperties.c)
target_link_libraries(vtkWrapXML VTK::WrappingTools)
