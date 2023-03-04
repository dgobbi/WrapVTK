#[==[
@defgroup module-wrapping-xml Module XML CMake APIs
#]==]

#[==[
@file vtkModuleWrapXML.cmake
@brief APIs for generating XML for module APIs
#]==]

#[==[
@ingroup module-wrapping-xml
@brief Determine XML module destination

Some projects may need to know where XML expects its modules to be placed in
the install tree (assuming a shared prefix). This function computes the default
and sets the passed variable to the value in the calling scope.

~~~
vtk_module_xml_default_destination(<var>)
~~~

By default, the destination is `${CMAKE_INSTALL_BINDIR}/Lib/site-packages` on
Windows and `${CMAKE_INSTALL_LIBDIR}/xml<VERSION>/site-packages` otherwise.

#]==]

cmake_policy(PUSH)
cmake_policy(SET CMP0053 NEW)

function (vtk_module_xml_default_destination var)
  cmake_parse_arguments(_vtk_module_xml "" "" var)

  if (_vtk_module_xml_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR
      "Unparsed arguments for vtk_module_xml_default_destination: "
      "${_vtk_module_xml_UNPARSED_ARGUMENTS}")
  endif ()

  set(destination "${CMAKE_INSTALL_LIBDIR}/vtk/xml/VTK")

  set("${var}" "${destination}" PARENT_SCOPE)
endfunction ()

#[==[
@ingroup module-impl
@brief Generate XML for a module's classes

This function generates an XML description of a module API. It places the list
of generated XML files in the named variable.

~~~
_vtk_module_write_wrap_xml(<module> <files> <classes>)
~~~
#]==]
function (_vtk_module_write_wrap_xml module files classes)
  _vtk_module_get_module_property("${module}"
    PROPERTY  "exclude_wrap"
    VARIABLE  _vtk_xml_exclude_wrap)
  if (_vtk_xml_exclude_wrap)
    return ()
  endif ()

  file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${_vtk_xml_library_name}XML")
  file(MAKE_DIRECTORY "${CMAKE_CURRENT_BINARY_DIR}/xml/${_vtk_xml_library_name}")

  set(_vtk_xml_args_file "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${_vtk_xml_library_name}XML/${_vtk_xml_library_name}-xml.$<CONFIGURATION>.args")

  set(_vtk_xml_hierarchy_depends "${module}")
  _vtk_module_get_module_property("${module}"
    PROPERTY  "private_depends"
    VARIABLE  _vtk_xml_private_depends)
  list(APPEND _vtk_xml_hierarchy_depends
    ${_vtk_xml_private_depends})
  _vtk_module_get_module_property("${module}"
    PROPERTY  "optional_depends"
    VARIABLE  _vtk_xml_optional_depends)
  foreach (_vtk_xml_optional_depend IN LISTS _vtk_xml_optional_depends)
    if (TARGET "${_vtk_xml_optional_depend}")
      list(APPEND _vtk_xml_hierarchy_depends
        "${_vtk_xml_optional_depend}")
    endif ()
  endforeach ()

  set(_vtk_xml_command_depends)
  foreach (_vtk_xml_hierarchy_depend IN LISTS _vtk_xml_hierarchy_depends)
    _vtk_module_get_module_property("${_vtk_xml_hierarchy_depend}"
      PROPERTY  "hierarchy"
      VARIABLE  _vtk_xml_hierarchy_file)
    if (_vtk_xml_hierarchy_file)
      list(APPEND _vtk_xml_hierarchy_files "${_vtk_xml_hierarchy_file}")
      get_property(_vtk_xml_is_imported
        TARGET    "${_vtk_xml_hierarchy_depend}"
        PROPERTY  "IMPORTED")
      if (_vtk_xml_is_imported OR CMAKE_GENERATOR MATCHES "Ninja")
        list(APPEND _vtk_xml_command_depends "${_vtk_xml_hierarchy_file}")
      else ()
        _vtk_module_get_module_property("${_vtk_xml_hierarchy_depend}"
          PROPERTY  "library_name"
          VARIABLE  _vtk_xml_hierarchy_library_name)
        if (TARGET "${_vtk_xml_hierarchy_library_name}-hierarchy")
          list(APPEND _vtk_xml_command_depends "${_vtk_xml_hierarchy_library_name}-hierarchy")
        else ()
          message(FATAL_ERROR
            "The ${_vtk_xml_hierarchy_depend} hierarchy file is attached to a non-imported target "
            "and a hierarchy target (${_vtk_xml_hierarchy_library_name}-hierarchy) is "
            "missing.")
        endif ()
      endif ()
    endif ()
  endforeach ()

  set(_vtk_xml_genex_compile_definitions
    "$<TARGET_PROPERTY:${module},INTERFACE_COMPILE_DEFINITIONS>")
  set(_vtk_xml_genex_include_directories
    "$<TARGET_PROPERTY:${module},INTERFACE_INCLUDE_DIRECTORIES>")
  file(GENERATE
    OUTPUT  "${_vtk_xml_args_file}"
    CONTENT "$<$<BOOL:${_vtk_xml_genex_compile_definitions}>:\n-D\'$<JOIN:${_vtk_xml_genex_compile_definitions},\'\n-D\'>\'>\n
$<$<BOOL:${_vtk_xml_genex_include_directories}>:\n-I\'$<JOIN:${_vtk_xml_genex_include_directories},\'\n-I\'>\'>\n
$<$<BOOL:${_vtk_xml_hierarchy_files}>:\n--types \'$<JOIN:${_vtk_xml_hierarchy_files},\'\n--types \'>\'>\n")

  set(_vtk_xml_files)

  # Get the list of public headers from the module.
  _vtk_module_get_module_property("${module}"
    PROPERTY  "headers"
    VARIABLE  _vtk_xml_headers)
  set(_vtk_xml_classes)
  foreach (_vtk_xml_header IN LISTS _vtk_xml_headers)
    # Assume the class name matches the basename of the header. This is VTK
    # convention.
    get_filename_component(_vtk_xml_basename "${_vtk_xml_header}" NAME_WE)
    list(APPEND _vtk_xml_classes
      "${_vtk_xml_basename}")

    set(_vtk_xml_source_output
      "${CMAKE_CURRENT_BINARY_DIR}/xml/${_vtk_xml_library_name}/${_vtk_xml_basename}.xml")
    list(APPEND _vtk_xml_files
      "${_vtk_xml_source_output}")

    set(_vtk_xml_wrap_target "vtkWrapXML")
    set(_vtk_xml_macros_args)
    if (TARGET VTKCompileTools::WrapXML)
      set(_vtk_xml_wrap_target "VTKCompileTools::WrapXML")
      if (TARGET VTKCompileTools_macros)
        list(APPEND _vtk_xml_command_depends
          "VTKCompileTools_macros")
        list(APPEND _vtk_xml_macros_args
          -undef
          -imacros "${_VTKCompileTools_macros_file}")
      endif ()
    endif ()

    add_custom_command(
      OUTPUT  "${_vtk_xml_source_output}"
      COMMAND ${CMAKE_CROSSCOMPILING_EMULATOR}
              "$<TARGET_FILE:${_vtk_xml_wrap_target}>"
              "@${_vtk_xml_args_file}"
              -o "${_vtk_xml_source_output}"
              "${_vtk_xml_header}"
              ${_vtk_xml_macros_args}
      IMPLICIT_DEPENDS
              CXX "${_vtk_xml_header}"
      COMMENT "Generating wrapper xml file for ${_vtk_xml_basename}"
      DEPENDS
        "${_vtk_xml_header}"
        "${_vtk_xml_args_file}"
        "$<TARGET_FILE:${_vtk_xml_wrap_target}>"
        ${_vtk_xml_command_depends})
  endforeach ()

  set("${files}"
    "${_vtk_xml_files}"
    PARENT_SCOPE)
  set("${classes}"
    "${_vtk_xml_classes}"
    PARENT_SCOPE)
endfunction ()


#[==[
@ingroup module-wrapping-xml
@brief Wrap a set of modules for use in XML

~~~
vtk_module_wrap_xml(
  MODULES <module>...
  [TARGET <target>]
  [WRAPPED_MODULES <varname>]

  [INSTALL_HEADERS <ON|OFF>]

  [DEPENDS <target>...]

  [MODULE_DESTINATION <destination>]
  [CMAKE_DESTINATION <destination>]

  [INSTALL_EXPORT <export>]
  [COMPONENT <component>])
  [TARGET_SPECIFIC_COMPONENTS <ON|OFF>]
~~~

  * `MODULES`: (Required) The list of modules to wrap.
  * `TARGET`: (Recommended) The target to create which represents all wrapped
    XML modules. This is mostly useful when supporting static XML modules
    in order to add the generated modules to the built-in table.
  * `WRAPPED_MODULES`: (Recommended) Not all modules are wrappable. This
    variable will be set to contain the list of modules which were wrapped.
    These modules will have a `INTERFACE_vtk_module_xml_package` property
    set on them which is the name that should be given to `import` statements
    in XML code.
  * `INSTALL_HEADERS` (Defaults to `ON`): If unset, CMake properties will not
    be installed.
  * `TARGET_SPECIFIC_COMPONENTS` (Defaults to `OFF`): If set, prepend the
    output target name to the install component (`<TARGET>-<COMPONENT>`).
  * `DEPENDS`: This is list of other XML modules targets i.e. targets
    generated from previous calls to `vtk_module_wrap_xml` that this new
    target depends on. This is used when `BUILD_STATIC` is true to ensure that
    the `void <TARGET>_load()` is correctly called for each of the dependencies.
  * `MODULE_DESTINATION`: Modules will be placed in this location in the
    build tree. The install tree should remove `$<CONFIGURATION>` bits, but it
    currently does not. See `vtk_module_xml_default_destination` for the
    default value.
  * `CMAKE_DESTINATION`: (Required if `INSTALL_HEADERS` is `ON`) Where to
    install XML-related module property CMake files.
  * `INSTALL_EXPORT`: If provided, static installs will add the installed
    libraries to the provided export set.
  * `COMPONENT`: Defaults to `xml`. All install rules created by this
    function will use this installation component.
#]==]
function (vtk_module_wrap_xml)
  cmake_parse_arguments(PARSE_ARGV 0 _vtk_xml
    ""
    "MODULE_DESTINATION;INSTALL_HEADERS;INSTALL_EXPORT;TARGET_SPECIFIC_COMPONENTS;TARGET;COMPONENT;WRAPPED_MODULES;CMAKE_DESTINATION;DEPENDS"
    "MODULES")

  if (_vtk_xml_UNPARSED_ARGUMENTS)
    message(FATAL_ERROR
      "Unparsed arguments for vtk_module_wrap_xml: "
      "${_vtk_xml_UNPARSED_ARGUMENTS}")
  endif ()

  if (NOT _vtk_xml_MODULES)
    message(WARNING
      "No modules were requested for XML wrapping.")
    return ()
  endif ()

  _vtk_module_split_module_name("${_vtk_xml_TARGET}" _vtk_xml)

  set(_vtk_xml_depends)
  foreach (_vtk_xml_depend IN LISTS _vtk_xml_DEPENDS)
    _vtk_module_split_module_name("${_vtk_xml_depend}" _vtk_xml_depends)
    list(APPEND _vtk_xml_depends
      "${_vtk_xml_depends_TARGET_NAME}")
  endforeach ()

  if (NOT DEFINED _vtk_xml_MODULE_DESTINATION)
    vtk_module_xml_default_destination(_vtk_xml_MODULE_DESTINATION)
  endif ()

  if (NOT DEFINED _vtk_xml_INSTALL_HEADERS)
    set(_vtk_xml_INSTALL_HEADERS ON)
  endif ()

  if (NOT DEFINED _vtk_xml_TARGET_SPECIFIC_COMPONENTS)
    set(_vtk_xml_TARGET_SPECIFIC_COMPONENTS OFF)
  endif ()

  if (NOT DEFINED _vtk_xml_USE_DEBUG_SUFFIX)
    set(_vtk_xml_USE_DEBUG_SUFFIX OFF)
  endif ()

  if (_vtk_xml_INSTALL_HEADERS AND NOT DEFINED _vtk_xml_CMAKE_DESTINATION)
    message(FATAL_ERROR
      "No CMAKE_DESTINATION set, but headers from the XML wrapping were "
      "requested for install and the CMake files are required to work with "
      "them.")
  endif ()

  if (NOT DEFINED _vtk_xml_COMPONENT)
    set(_vtk_xml_COMPONENT "xml")
  endif ()

  _vtk_module_check_destinations(_vtk_xml_
    MODULE_DESTINATION
    CMAKE_DESTINATION
    LIBRARY_DESTINATION)

  # XXX needs modification for XML
  set(_vtk_xml_XML_PACKAGE "XML")
  if (_vtk_xml_INSTALL_HEADERS)
    set(_vtk_xml_properties_filename "${_vtk_xml_XML_PACKAGE}-vtk-xml-module-properties.cmake")
    set(_vtk_xml_properties_install_file "${CMAKE_CURRENT_BINARY_DIR}/CMakeFiles/${_vtk_xml_TARGET_NAME}/${_vtk_xml_properties_filename}.install")
    set(_vtk_xml_properties_build_file "${CMAKE_BINARY_DIR}/${_vtk_xml_CMAKE_DESTINATION}/${_vtk_xml_properties_filename}")

    file(WRITE "${_vtk_xml_properties_build_file}")
    file(WRITE "${_vtk_xml_properties_install_file}")
  endif ()

  set(_vtk_xml_sorted_modules ${_vtk_xml_MODULES})
  foreach (_vtk_xml_module IN LISTS _vtk_xml_MODULES)
    _vtk_module_get_module_property("${_vtk_xml_module}"
      PROPERTY  "depends"
      VARIABLE  "_vtk_xml_${_vtk_xml_module}_depends")
  endforeach ()
  vtk_topological_sort(_vtk_xml_sorted_modules "_vtk_xml_" "_depends")

  set(_vtk_xml_sorted_modules_filtered)
  foreach (_vtk_xml_module IN LISTS _vtk_xml_sorted_modules)
    if (_vtk_xml_module IN_LIST _vtk_xml_MODULES)
      list(APPEND _vtk_xml_sorted_modules_filtered
        "${_vtk_xml_module}")
    endif ()
  endforeach ()

  set(_vtk_xml_headers_component "development")
  set(_vtk_xml_component "${_vtk_xml_COMPONENT}")
  if (_vtk_xml_TARGET_SPECIFIC_COMPONENTS)
    string(PREPEND _vtk_xml_headers_component "${_vtk_xml_TARGET_NAME}-")
    string(PREPEND _vtk_xml_component "${_vtk_xml_TARGET_NAME}-")
  endif ()

  foreach (_vtk_xml_module IN LISTS _vtk_xml_MODULES)
    _vtk_module_get_module_property("${_vtk_xml_module}"
      PROPERTY  "exclude_wrap"
      VARIABLE  _vtk_xml_exclude_wrap)
    if (_vtk_xml_exclude_wrap)
      continue ()
    endif ()
    _vtk_module_real_target(_vtk_xml_target_name "${_vtk_xml_module}")
    _vtk_module_get_module_property("${_vtk_xml_module}"
      PROPERTY  "library_name"
      VARIABLE  _vtk_xml_library_name)
    if (NOT _vtk_xml_library_name)
      continue()
    endif ()
    set(_vtk_xml_TARGET_NAME "${_vtk_xml_library_name}XML")

    # Wrap the module independently of the other VTK modules in the XML
    # module.
    _vtk_module_write_wrap_xml("${_vtk_xml_module}" _vtk_xml_files _vtk_xml_classes)
    add_custom_target("${_vtk_xml_TARGET_NAME}" ALL
      DEPENDS ${_vtk_xml_files})

    # Make sure the module doesn't already have an associated XML package.
    vtk_module_get_property("${_vtk_xml_module}"
      PROPERTY  "INTERFACE_vtk_module_xml_package"
      VARIABLE  _vtk_xml_current_xml_package)
    if (DEFINED _vtk_xml_current_xml_package)
      message(FATAL_ERROR
        "It appears as though the ${_vtk_xml_module} has already been "
        "wrapped in XML in the ${_vtk_xml_current_xml_package} "
        "package.")
    endif ()
    vtk_module_set_property("${_vtk_xml_module}"
      PROPERTY  "INTERFACE_vtk_module_xml_package"
      VALUE     "${_vtk_xml_XML_PACKAGE}")

    if (_vtk_xml_INSTALL_HEADERS)
      _vtk_module_export_properties(
        BUILD_FILE    "${_vtk_xml_properties_build_file}"
        INSTALL_FILE  "${_vtk_xml_properties_install_file}"
        MODULE        "${_vtk_xml_module}"
        PROPERTIES
          # Export the wrapping hints file.
          INTERFACE_vtk_module_xml_package)
    endif ()
  endforeach ()

  if (_vtk_xml_INSTALL_HEADERS)
    install(
      FILES       "${_vtk_xml_properties_install_file}"
      DESTINATION "${_vtk_xml_CMAKE_DESTINATION}"
      RENAME      "${_vtk_xml_properties_filename}"
      COMPONENT   "${_vtk_xml_headers_component}")
  endif ()

  if (DEFINED _vtk_xml_WRAPPED_MODULES)
    set("${_vtk_xml_WRAPPED_MODULES}"
      "${_vtk_xml_all_wrapped_modules}"
      PARENT_SCOPE)
  endif ()

endfunction ()

cmake_policy(POP)
