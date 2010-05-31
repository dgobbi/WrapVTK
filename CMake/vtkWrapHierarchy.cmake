#
# a cmake macro to generate a text file with the class hierarchy
#
MACRO(VTK_WRAP_HIERARCHY TARGET OUTPUT_DIR SOURCES)
  IF(NOT VTK_BUILD_HIERARCHY_EXE)
    MESSAGE(SEND_ERROR "VTK_BUILD_HIERARCHY_EXE not specified when calling VTK_WRAP_HIERARCHY")
  ENDIF(NOT VTK_BUILD_HIERARCHY_EXE)
  IF(NOT VTK_WRAP_HIERARCHY_EXE)
    MESSAGE(SEND_ERROR "VTK_WRAP_HIERARCHY_EXE not specified when calling VTK_WRAP_HIERARCHY")
  ENDIF(NOT VTK_WRAP_HIERARCHY_EXE)

  # The shell into which nmake.exe executes the custom command has some issues
  # with mixing quoted and unquoted arguments :( Let's help.

  IF(CMAKE_GENERATOR MATCHES "NMake Makefiles")
    SET(verbatim "")
    SET(quote "\"")
  ELSE(CMAKE_GENERATOR MATCHES "NMake Makefiles")
    SET(verbatim "VERBATIM")
    SET(quote "")
  ENDIF(CMAKE_GENERATOR MATCHES "NMake Makefiles")

  SET(VTK_WRAPPER_INIT_DATA)

  # list of produced files
  SET(OUTPUT_FILES)

  # For each class
  FOREACH(FILE ${SOURCES})
    # should we wrap the file?
    #GET_SOURCE_FILE_PROPERTY(TMP_WRAP_EXCLUDE ${FILE} WRAP_EXCLUDE)
    #GET_SOURCE_FILE_PROPERTY(TMP_WRAP_SPECIAL ${FILE} WRAP_SPECIAL)
    IF (VTK_CLASS_WRAP_SPECIAL_${FILE})
      SET(TMP_WRAP_SPECIAL 1)
    ELSE (VTK_CLASS_WRAP_SPECIAL_${FILE})
      SET(TMP_WRAP_SPECIAL 0)
    ENDIF (VTK_CLASS_WRAP_SPECIAL_${FILE})
    IF (VTK_CLASS_WRAP_EXCLUDE_${FILE})
      SET(TMP_WRAP_EXCLUDE 1)
    ELSE (VTK_CLASS_WRAP_EXCLUDE_${FILE})
      SET(TMP_WRAP_EXCLUDE 0)
    ENDIF (VTK_CLASS_WRAP_EXCLUDE_${FILE})

    # if we should wrap it
    IF (TMP_WRAP_SPECIAL OR NOT TMP_WRAP_EXCLUDE)

      # what is the filename without the extension
      GET_FILENAME_COMPONENT(TMP_FILENAME ${FILE} NAME_WE)

      # the input file might be full path so handle that
      GET_FILENAME_COMPONENT(TMP_FILEPATH ${FILE} PATH)

      # compute the input filename
      IF (TMP_FILEPATH)
        SET(TMP_INPUT ${TMP_FILEPATH}/${TMP_FILENAME}.h)
      ELSE (TMP_FILEPATH)
        SET(TMP_INPUT ${KIT_HEADER_DIR}/${TMP_FILENAME}.h)
      ENDIF (TMP_FILEPATH)

      SET(TMP_OUTPUT ${OUTPUT_DIR}/${TMP_FILENAME}Hierarchy.txt)

      # add the info to the init file
      SET(VTK_WRAPPER_INIT_DATA
        "${VTK_WRAPPER_INIT_DATA}${TMP_OUTPUT}\n")

      # add custom command to output
      ADD_CUSTOM_COMMAND(
        OUTPUT ${TMP_OUTPUT}
        DEPENDS ${VTK_WRAP_HIERARCHY_EXE} ${TMP_INPUT}
        COMMAND ${VTK_WRAP_HIERARCHY_EXE}
        ARGS
        "${quote}${TMP_INPUT}${quote}"
        "${quote}${TMP_OUTPUT}${quote}"
        COMMENT "Hierarchy Wrapping - generating ${TMP_FILENAME}Hierarchy.txt"
        ${verbatim}
        )

      SET(OUTPUT_FILES ${OUTPUT_FILES} ${TMP_OUTPUT})

    ENDIF (TMP_WRAP_SPECIAL OR NOT TMP_WRAP_EXCLUDE)
  ENDFOREACH(FILE)

  # finish the data file for the init file
  CONFIGURE_FILE(
    ${VTK_CMAKE_DIR}/vtkWrapperInit.data.in
    ${OUTPUT_DIR}/${TARGET}.data
    COPY_ONLY
    IMMEDIATE
    )

  # find out what kits this kit depends on
  #IF (KIT_INTERFACE_LIBS)
  #  SET(TMP_KIT_DEPENDS ${KIT_INTERFACE_LIBS})
  #ELSE (KIT_INTERFACE_LIBS)
  #  SET(TMP_KIT_DEPENDS ${KIT_LIBS})
  #ENDIF (KIT_INTERFACE_LIBS)
  SET(TMP_KIT_DEPENDS "${vtk${KIT_NAME}_LIB_DEPENDS}")

  # search for the hierarchy files for dependencies
  SET(OTHER_HIERARCHY_FILES)
  SET(QUOTED_HIERARCHY_FILES)
  FOREACH (TMP_KIT_LIB ${TMP_KIT_DEPENDS})
    FOREACH (TMP_KIT ${VTK_KITS})
      SET(TMP_KIT_NAME ${VTK_${TMP_KIT}_NAME})
      IF (${TMP_KIT_LIB} STREQUAL vtk${TMP_KIT_NAME})
        SET(OTHER_HIERARCHY_FILES ${OTHER_HIERARCHY_FILES}
          "${WrapVTK_BINARY_DIR}/${TMP_KIT_NAME}/vtk${TMP_KIT_NAME}Hierarchy.txt")
        SET(QUOTED_HIERARCHY_FILES ${QUOTED_HIERARCHY_FILES}
          "${quote}${WrapVTK_BINARY_DIR}/${TMP_KIT_NAME}/vtk${TMP_KIT_NAME}Hierarchy.txt${quote}")
      ENDIF (${TMP_KIT_LIB} STREQUAL vtk${TMP_KIT_NAME})
    ENDFOREACH (TMP_KIT ${VTK_KITS})
  ENDFOREACH (TMP_KIT_LIB ${TMP_KIT_DEPENDS})

  # build the hierarchy file: the hierarchy file is only
  # overwritten if it will changed
  ADD_CUSTOM_COMMAND(
    OUTPUT ${OUTPUT_DIR}/${TARGET}.target ${OUTPUT_DIR}/${TARGET}.txt
    DEPENDS ${VTK_BUILD_HIERARCHY_EXE} ${OUTPUT_FILES}
    ${OTHER_HIERARCHY_FILES}
    ${OUTPUT_DIR}/${TARGET}.data

    COMMAND ${VTK_BUILD_HIERARCHY_EXE}
    ARGS
    "-o" "${quote}${OUTPUT_DIR}/${TARGET}.txt${quote}"
    "${quote}${OUTPUT_DIR}/${TARGET}.data${quote}"
    ${QUOTED_HIERARCHY_FILES}

    COMMAND ${CMAKE_COMMAND}
    ARGS
    "-E" "touch" "${quote}${OUTPUT_DIR}/${TARGET}.target${quote}"
    COMMENT "Hierarchy Wrapping - generating ${TARGET}.txt"
    ${verbatim}
    )

ENDMACRO(VTK_WRAP_HIERARCHY)
