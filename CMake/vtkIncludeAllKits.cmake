# This file will include the .cmake files for all kits, producing the
# following variables for each kit (using "Common" as an example)
# VTK_COMMON_NAME  (e.g. set to "Common")
# VTK_COMMON_HEADER_DIR (directory where header files are)
# VTK_COMMON_CLASSES (list of all classes)
# VTK_COMMON_CLASSES_ABSTRACT (list of abstract classes)
# VTK_COMMON_CLASSES_WRAP_EXCLUDE (list of classes not to wrap)

# Find all the kits that are part of the VTK build
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
    SET(VTK_KITS ${VTK_KITS} ${VTK_KIT})
  ELSE(KIT_NAME)
    SET(KITS_EXCLUDE ${KITS_EXCLUDE} ${KIT_NAME})
  ENDIF(KIT_NAME)

  # Set the "proper" name for the kit
  SET(VTK_${VTK_KIT}_NAME "${KIT_NAME}")

ENDFOREACH(VTK_KIT ${TMP_VTK_KITS})

