cmake_minimum_required(VERSION 3.12)
project(WrapVTK)

find_package(VTK REQUIRED COMPONENTS WrappingTools)
add_subdirectory(Source)

include(GNUInstallDirs)

set(vtk_version_suffix)

set(vtk_cmake_destination
  "${CMAKE_INSTALL_LIBDIR}/cmake/vtk${vtk_version_suffix}")

include("CMake/vtkModuleWrapXML.cmake")

set(_modules_to_wrap)
foreach(_module IN LISTS VTK_AVAILABLE_COMPONENTS)
  if(TARGET "VTK::${_module}")
    _vtk_module_get_module_property("VTK::${_module}"
      PROPERTY "exclude_wrap"
      VARIABLE _vtk_module_exclude_wrap)
    if(NOT _vtk_module_exclude_wrap)
       list(APPEND _modules_to_wrap "VTK::${_module}")
    endif()
  endif()
endforeach()

vtk_module_wrap_xml(
  MODULES ${_modules_to_wrap}
  CMAKE_DESTINATION "${vtk_cmake_destination}"
)
