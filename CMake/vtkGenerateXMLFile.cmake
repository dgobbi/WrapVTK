# vtkGenerateXMLFile.cmake
#
# 1 macro, 3 arguments.
#
# Macro: VTK_GENERATE_XML_FILE
#         ARGUMENT: XML_LIST_NAME
#                the list to add all generated xml filenames to
#         ARGUMENT: FILE
#                where ${FILE} is the name of class to be XML wrapped
#         ARGUMENT: OUTPUT_DIR
#                where OUTPUT_DIR is where the xml file should go
#         OUTPUT: ${OUTPUT_DIR}/${CLASS_NAME}.xml
#
MACRO(VTK_GENERATE_XML_FILE XML_LIST_NAME INPUT_FILE OUTPUT_DIR)

  # In case we were given a path with the class name
  GET_FILENAME_COMPONENT(TMP_CLASS ${INPUT_FILE} NAME_WE)
  GET_FILENAME_COMPONENT(TMP_DIR ${INPUT_FILE} PATH)

  IF("${TMP_DIR}" STREQUAL "")
    SET(TMP_HEADER_DIR ${KIT_HEADER_DIR})
  ELSE("${TMP_DIR}" STREQUAL "")
    SET(TMP_HEADER_DIR ${TMP_DIR})
  ENDIF("${TMP_DIR}" STREQUAL "")

  IF(CMAKE_GENERATOR MATCHES "NMake Makefiles")
    SET(quote "\"")
  ELSE(CMAKE_GENERATOR MATCHES "NMake Makefiles")
    SET(quote "")
  ENDIF(CMAKE_GENERATOR MATCHES "NMake Makefiles")

  IF(VTK_CLASS_WRAP_SPECIAL_${INPUT_FILE} OR
    NOT VTK_CLASS_WRAP_EXCLUDE_${INPUT_FILE})

    IF(VTK_CLASS_ABSTRACT_${INPUT_FILE})
      SET(TMP_CONCRETE "--abstract")
    ELSE(VTK_CLASS_ABSTRACT_${INPUT_FILE})
      SET(TMP_CONCRETE "--concrete")
    ENDIF(VTK_CLASS_ABSTRACT_${INPUT_FILE})

    IF(VTK_CLASS_WRAP_SPECIAL_${INPUT_FILE})
      SET(TMP_SPECIAL "--special")
    ELSE(VTK_CLASS_WRAP_SPECIAL_${INPUT_FILE})
      SET(TMP_SPECIAL "--vtkobject")
    ENDIF(VTK_CLASS_WRAP_SPECIAL_${INPUT_FILE})

    IF(WrapVTK_HINTS)
      SET(TMP_HINTS "--hints" "${quote}${WrapVTK_HINTS}${quote}")
    ELSE(WrapVTK_HINTS)
      SET(TMP_HINTS)
    ENDIF(WrapVTK_HINTS)

    SET(TMP_INPUT "${quote}${TMP_HEADER_DIR}/${TMP_CLASS}.h${quote}")
    SET(TMP_OUTPUT "${quote}${VTKXML_OUTPUT_DIR}/${TMP_CLASS}.xml${quote}")

    # add custom command to output
    ADD_CUSTOM_COMMAND(
      OUTPUT ${TMP_OUTPUT}
      DEPENDS ${VTKXML_EXE} ${VTKXML_HINTS} ${TMP_INPUT}
      COMMAND ${VTKXML_EXE}
      ARGS
      ${TMP_CONCRETE}
      ${TMP_SPECIAL}
      ${TMP_HINTS}
      ${TMP_INPUT}
      ${TMP_OUTPUT}
      COMMENT "XML Wrapping - generating ${TMP_CLASS}.xml"
      )

    SET(${XML_LIST_NAME} ${${XML_LIST_NAME}} ${TMP_OUTPUT})

  ENDIF(VTK_CLASS_WRAP_SPECIAL_${INPUT_FILE} OR
    NOT VTK_CLASS_WRAP_EXCLUDE_${INPUT_FILE})

ENDMACRO(VTK_GENERATE_XML_FILE)
