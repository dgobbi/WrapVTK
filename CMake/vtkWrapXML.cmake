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

  IF(WrapVTK_HINTS)
    SET(TMP_HINTS "--hints" "${quote}${WrapVTK_HINTS}${quote}")
    SET(HINT_DEPS ${WrapVTK_HINTS})
  ELSE(WrapVTK_HINTS)
    SET(TMP_HINTS)
    SET(HINT_DEPS)
  ENDIF(WrapVTK_HINTS)

  SET(TMP_HIERARCHY "${OUTPUT_DIR}/${KIT_TARGET_NAME}Hierarchy.txt")

  SET(TMP_INCLUDE)
  FOREACH(INCLUDE_DIR ${VTK_INCLUDE_DIRS})
    SET(TMP_INCLUDE "${TMP_INCLUDE}-I ${quote}${INCLUDE_DIR}${quote}\n")
  ENDFOREACH(INCLUDE_DIR ${VTK_INCLUDE_DIRS})

  # write wrapper-tool arguments to a file
  STRING(STRIP "${TMP_INCLUDE}" CMAKE_CONFIGURABLE_FILE_CONTENT)
  SET(RESPONSE_FILE ${OUTPUT_DIR}/${TARGET}.args)
  CONFIGURE_FILE(${CMAKE_ROOT}/Modules/CMakeConfigurableFile.in
                 ${RESPONSE_FILE} @ONLY)

  FOREACH(INPUT_FILE ${SOURCES})

    # in case we were given a path with the class name
    GET_FILENAME_COMPONENT(TMP_CLASS ${INPUT_FILE} NAME_WE)
    GET_FILENAME_COMPONENT(TMP_DIR ${INPUT_FILE} PATH)

    # forcefully reject some troublesome files
    IF(NOT "${TMP_CLASS}" STREQUAL "vtkgl" AND
       NOT "${TMP_CLASS}" STREQUAL "vtkOpenGLState")
    IF(NOT "${KIT_NAME}" STREQUAL "Filtering" OR
       NOT "${TMP_CLASS}" STREQUAL "vtkInformation")

    # compute the input filename
    IF (TMP_DIR)
      SET(TMP_INPUT "${TMP_DIR}/${TMP_CLASS}.h")
    ELSE (TMP_DIR)
      IF (H_${TMP_CLASS})
        IF (NOT EXISTS "${H_${TMP_CLASS}}")
          SET(H_${TMP_CLASS} "H_${TMP_CLASS}-NOTFOUND")
        ENDIF (NOT EXISTS "${H_${TMP_CLASS}}")
      ENDIF (H_${TMP_CLASS})
      FIND_FILE(H_${TMP_CLASS} "${TMP_CLASS}.h" PATHS ${KIT_HEADER_DIR})
      MARK_AS_ADVANCED(H_${TMP_CLASS})
      SET (TMP_INPUT ${H_${TMP_CLASS}})
    ENDIF (TMP_DIR)

    # deal with flags for both VTK 5 and VTK 6
    IF (VTK_CLASS_ABSTRACT_${TMP_CLASS} OR
        ${KIT_NAME}_HEADER_${TMP_CLASS}_ABSTRACT)
      SET(TMP_ABSTRACT 1)
    ELSE (VTK_CLASS_ABSTRACT_${TMP_CLASS} OR
          ${KIT_NAME}_HEADER_${TMP_CLASS}_ABSTRACT)
      SET(TMP_ABSTRACT 0)
    ENDIF (VTK_CLASS_ABSTRACT_${TMP_CLASS} OR
           ${KIT_NAME}_HEADER_${TMP_CLASS}_ABSTRACT)
    IF (VTK_CLASS_WRAP_SPECIAL_${TMP_CLASS} OR
        ${KIT_NAME}_HEADER_${TMP_CLASS}_WRAP_SPECIAL)
      SET(TMP_WRAP_SPECIAL 1)
    ELSE (VTK_CLASS_WRAP_SPECIAL_${TMP_CLASS} OR
          ${KIT_NAME}_HEADER_${TMP_CLASS}_WRAP_SPECIAL)
      SET(TMP_WRAP_SPECIAL 0)
    ENDIF (VTK_CLASS_WRAP_SPECIAL_${TMP_CLASS} OR
           ${KIT_NAME}_HEADER_${TMP_CLASS}_WRAP_SPECIAL)
    IF (VTK_CLASS_WRAP_EXCLUDE_${TMP_CLASS} OR
        ${KIT_NAME}_HEADER_${TMP_CLASS}_WRAP_EXCLUDE)
      SET(TMP_WRAP_EXCLUDE 1)
    ELSE (VTK_CLASS_WRAP_EXCLUDE_${TMP_CLASS} OR
          ${KIT_NAME}_HEADER_${TMP_CLASS}_WRAP_EXCLUDE)
      SET(TMP_WRAP_EXCLUDE 0)
    ENDIF (VTK_CLASS_WRAP_EXCLUDE_${TMP_CLASS} OR
           ${KIT_NAME}_HEADER_${TMP_CLASS}_WRAP_EXCLUDE)

    IF(IGNORE_WRAP_EXCLUDE OR TMP_WRAP_SPECIAL OR NOT TMP_WRAP_EXCLUDE)

      IF(TMP_ABSTRACT)
        SET(TMP_CONCRETE "--abstract")
      ELSE(TMP_ABSTRACT)
        SET(TMP_CONCRETE "--concrete")
      ENDIF(TMP_ABSTRACT)

      IF(TMP_WRAP_SPECIAL)
        SET(TMP_SPECIAL "--special")
      ELSE(TMP_WRAP_SPECIAL)
        SET(TMP_SPECIAL "--vtkobject")
      ENDIF(TMP_WRAP_SPECIAL)

      SET(TMP_OUTPUT "${OUTPUT_DIR}/${TMP_CLASS}.xml")

      # add custom command to output
      ADD_CUSTOM_COMMAND(
        OUTPUT ${TMP_OUTPUT}
        DEPENDS ${VTK_WRAP_XML_EXE} ${HINT_DEPS}
        ${TMP_INPUT} ${TMP_HIERARCHY}
        COMMAND ${VTK_WRAP_XML_EXE}
        ARGS
        ${TMP_CONCRETE}
        ${TMP_SPECIAL}
        ${TMP_HINTS}
        "--types" "${quote}${TMP_HIERARCHY}${quote}"
        "${quote}@${RESPONSE_FILE}${quote}"
        "-o" "${quote}${TMP_OUTPUT}${quote}"
        "${quote}${TMP_INPUT}${quote}"
        COMMENT "XML Wrapping - generating ${TMP_CLASS}.xml"
        ${verbatim}
        )

      # add the output to the list
      SET(${XML_LIST_NAME} ${${XML_LIST_NAME}} ${TMP_OUTPUT})

    ENDIF(IGNORE_WRAP_EXCLUDE OR TMP_WRAP_SPECIAL OR NOT TMP_WRAP_EXCLUDE)

    ENDIF(NOT "${KIT_NAME}" STREQUAL "Filtering" OR
          NOT "${TMP_CLASS}" STREQUAL "vtkInformation")
    ENDIF(NOT "${TMP_CLASS}" STREQUAL "vtkgl" AND
          NOT "${TMP_CLASS}" STREQUAL "vtkOpenGLState")

  ENDFOREACH(INPUT_FILE ${SOURCES})

ENDMACRO(VTK_WRAP_XML)
