#
# vtkWrapXML.cmake - a macro for generating XML from header files
#
# Macro: VTK_WRAP_XML(TARGET, XML_LIST_NAME, OUTPUT_DIR, SOURCES)
#         TARGET: the name of the kit being wrapped (currently unused)
#         XML_LIST_NAME: list to add all generated xml filenames to
#         OUTPUT_DIR: the generated xml file should go
#         SOURCES: The header files to wrap, without the ".h"
#
# Variables that are used:
#         VTK_WRAP_XML_EXE: the vtkWrapXML executable
#         KIT_NAME: the name of the kit being wrapped
#         KIT_HEADER_DIR: the directory for the input files (optional)
#         WrapVTK_HINTS: the hints file (optional)
MACRO(VTK_WRAP_XML TARGET XML_LIST_NAME OUTPUT_DIR SOURCES)

  IF(CMAKE_GENERATOR MATCHES "NMake Makefiles")
    SET(quote "\"")
    SET(verbatim "")
  ELSE(CMAKE_GENERATOR MATCHES "NMake Makefiles")
    SET(quote "")
    SET(verbatim "VERBATIM")
  ENDIF(CMAKE_GENERATOR MATCHES "NMake Makefiles")

  FOREACH(INPUT_FILE ${SOURCES})

    # In case we were given a path with the class name
    GET_FILENAME_COMPONENT(TMP_CLASS ${INPUT_FILE} NAME_WE)
    GET_FILENAME_COMPONENT(TMP_DIR ${INPUT_FILE} PATH)

    IF("${TMP_DIR}" STREQUAL "")
      SET(TMP_HEADER_DIR ${KIT_HEADER_DIR})
    ELSE("${TMP_DIR}" STREQUAL "")
      SET(TMP_HEADER_DIR ${TMP_DIR})
    ENDIF("${TMP_DIR}" STREQUAL "")

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

      SET(TMP_HIERARCHY "${OUTPUT_DIR}/vtk${KIT_NAME}Hierarchy.txt")

      SET(TMP_INPUT "${TMP_HEADER_DIR}/${TMP_CLASS}.h")
      SET(TMP_OUTPUT "${OUTPUT_DIR}/${TMP_CLASS}.xml")

      # add custom command to output
      ADD_CUSTOM_COMMAND(
        OUTPUT ${TMP_OUTPUT}
        DEPENDS ${VTK_WRAP_XML_EXE} ${WrapVTK_HINTS}
        ${TMP_INPUT} ${TMP_HIERARCHY}
        COMMAND ${VTK_WRAP_XML_EXE}
        ARGS
        ${TMP_CONCRETE}
        ${TMP_SPECIAL}
        ${TMP_HINTS}
        "--hierarchy" "${quote}${TMP_HIERARCHY}${quote}"
        "${quote}${TMP_INPUT}${quote}"
        "${quote}${TMP_OUTPUT}${quote}"
        COMMENT "XML Wrapping - generating ${TMP_CLASS}.xml"
        ${verbatim}
        )

      # add the output to the list
      SET(${XML_LIST_NAME} ${${XML_LIST_NAME}} ${TMP_OUTPUT})

    ENDIF(VTK_CLASS_WRAP_SPECIAL_${INPUT_FILE} OR
      NOT VTK_CLASS_WRAP_EXCLUDE_${INPUT_FILE})

  ENDFOREACH(INPUT_FILE ${SOURCES})

ENDMACRO(VTK_WRAP_XML)
