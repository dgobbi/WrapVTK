# This file will include the .cmake files for all kits, producing the
# following variables for each kit (using "Common" as an example)
# VTK_COMMON_NAME  (e.g. set to "Common")
# VTK_COMMON_HEADER_DIR (directory where header files are)
# VTK_COMMON_HEADERS (list of all headers)
# VTK_COMMON_HEADERS_ABSTRACT (list of abstract headers)
# VTK_COMMON_HEADERS_WRAP_EXCLUDE (list of headers not to wrap)
# VTK_COMMON_HEADERS_WRAP_SPECIAL (list of headers for special wrapping)
# VTK_COMMON_WRAP_HEADERS (list of headers to wrap)

# Find all the kits that are part of the VTK build
IF(VTK_MODULES_DIR)

  #include("${VTK_DIR}/VTKTargets.cmake")

  # use the old "Kit" variable names
  set(VTK_KITS)

  foreach(mod ${VTK_MODULES_ENABLED})
    include("${VTK_MODULES_DIR}/${mod}.cmake")
    if(NOT ${mod}_EXCLUDE_FROM_WRAPPING)
      include("${VTK_MODULES_DIR}/${mod}-Headers.cmake")

      string(REGEX REPLACE "vtk(.*)" "\\1" TMP_NAME "${mod}")
      string(TOUPPER "${TMP_NAME}" KIT_NAME)

      set(VTK_${KIT_NAME}_NAME ${mod})
      set(VTK_${KIT_NAME}_HEADER_DIR ${${mod}_INCLUDE_DIRS})
      set(VTK_${KIT_NAME}_HEADERS ${${mod}_HEADERS})
      set(VTK_${KIT_NAME}_WRAP_HEADERS)

      list(APPEND VTK_KITS ${KIT_NAME})
    endif()
  endforeach()

  # do not set KIT_PREFIX since the kits will start with "vtk"
  set(KIT_PREFIX)

ELSE(VTK_MODULES_DIR)
  FILE(GLOB KIT_CMAKE_FILES RELATIVE "${VTK_KITS_DIR}"
       "${VTK_KITS_DIR}/vtk*Kit.cmake")

  #MESSAGE("${VTK_KITS_DIR}")
  #MESSAGE("${KIT_CMAKE_FILES}")
  #MESSAGE("${VTK_KITS}")

  SET(KITS_EXCLUDE)
  SET(TMP_VTK_KITS ${VTK_KITS})
  SET(VTK_KITS)

  FOREACH(VTK_KIT ${TMP_VTK_KITS})

    SET(KIT_NAME)

    # Match VTK_KIT to a file in KIT_CMAKE_FILES by doing an uppercase
    # compare with underscores removed.
    STRING(REPLACE "_" "" KIT_NO_UNDERSCORE ${VTK_KIT})
    FOREACH(TMP_FILE ${KIT_CMAKE_FILES})
      STRING(REGEX REPLACE "vtk(.*)Kit.cmake" "\\1" TMP_NAME "${TMP_FILE}")
      STRING(TOUPPER "${TMP_NAME}" TMP_NAME_UPPERCASE)
      IF("${TMP_NAME_UPPERCASE}" STREQUAL "${KIT_NO_UNDERSCORE}")
        SET(KIT_NAME "${TMP_NAME}")
        SET(KIT_CMAKE_FILE "${TMP_FILE}")
      ENDIF("${TMP_NAME_UPPERCASE}" STREQUAL "${KIT_NO_UNDERSCORE}")
    ENDFOREACH(TMP_FILE ${KIT_CMAKE_FILES})

    # In the above FOREACH, the variables KIT_NAME and KIT_CMAKE_FILE were set
    #MESSAGE("${VTK_KIT} ${KIT_NAME} ${KIT_CMAKE_FILE}")

    # Get important variables from the kit's cmake file
    IF(KIT_NAME)
      INCLUDE("${VTK_KITS_DIR}/${KIT_CMAKE_FILE}")
      SET(VTK_${VTK_KIT}_HEADERS ${VTK_${VTK_KIT}_CLASSES})
      SET(VTK_${VTK_KIT}_HEADERS_ABSTRACT ${VTK_${VTK_KIT}_CLASSES_ABSTRACT})
      SET(VTK_${VTK_KIT}_HEADERS_WRAP_EXCLUDE ${VTK_${VTK_KIT}_CLASSES_WRAP_EXCLUDE})
      SET(VTK_${VTK_KIT}_HEADERS_WRAP_SPECIAL ${VTK_${VTK_KIT}_CLASSES_WRAP_SPECIAL})
      SET(VTK_KITS ${VTK_KITS} ${VTK_KIT})
    ELSE(KIT_NAME)
      SET(KITS_EXCLUDE ${KITS_EXCLUDE} ${KIT_NAME})
    ENDIF(KIT_NAME)

    # Set the "proper" name for the kit
    SET(VTK_${VTK_KIT}_NAME "${KIT_NAME}")

  ENDFOREACH(VTK_KIT ${TMP_VTK_KITS})

  # prefix the kit names with "vtk" when making targets
  SET(KIT_PREFIX vtk)

ENDIF(VTK_MODULES_DIR)
