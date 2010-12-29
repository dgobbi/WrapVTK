#
# a cmake macro to generate a text file with the class hierarchy
#
MACRO(VTK_WRAP_HIERARCHY TARGET OUTPUT_DIR SOURCES)
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

  SET(TMP_INCLUDE)
  FOREACH(INCLUDE_DIR ${VTK_INCLUDE_DIRS})
    SET(TMP_INCLUDE ${TMP_INCLUDE} -I "${quote}${INCLUDE_DIR}${quote}")
  ENDFOREACH(INCLUDE_DIR ${VTK_INCLUDE_DIRS})

  SET(VTK_WRAPPER_INIT_DATA)

  # list of used files
  SET(INPUT_FILES)

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
    IF (TMP_WRAP_SPECIAL OR IGNORE_WRAP_EXCLUDE OR NOT TMP_WRAP_EXCLUDE)
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

      IF(NOT "${KIT_NAME}" STREQUAL "Rendering" OR
         NOT "${TMP_FILENAME}" STREQUAL "vtkgl")
      IF(NOT "${KIT_NAME}" STREQUAL "Filtering" OR
         NOT "${TMP_FILENAME}" STREQUAL "vtkInformation")

        # add to the INPUT_FILES
        SET(INPUT_FILES ${INPUT_FILES} ${TMP_INPUT})

        # add the info to the init file
        SET(VTK_WRAPPER_INIT_DATA
          "${VTK_WRAPPER_INIT_DATA}${TMP_INPUT}")

        IF (VTK_CLASS_ABSTRACT_${FILE})
          SET(VTK_WRAPPER_INIT_DATA "${VTK_WRAPPER_INIT_DATA};ABSTRACT")
        ENDIF (VTK_CLASS_ABSTRACT_${FILE})

        IF (VTK_CLASS_WRAP_EXCLUDE_${FILE})
          SET(VTK_WRAPPER_INIT_DATA "${VTK_WRAPPER_INIT_DATA};WRAP_EXCLUDE")
        ENDIF (VTK_CLASS_WRAP_EXCLUDE_${FILE})

        IF (VTK_CLASS_WRAP_SPECIAL_${FILE})
          SET(VTK_WRAPPER_INIT_DATA "${VTK_WRAPPER_INIT_DATA};WRAP_SPECIAL")
        ENDIF (VTK_CLASS_WRAP_SPECIAL_${FILE})

        SET(VTK_WRAPPER_INIT_DATA "${VTK_WRAPPER_INIT_DATA}\n")

      ENDIF(NOT "${KIT_NAME}" STREQUAL "Filtering" OR
            NOT "${TMP_FILENAME}" STREQUAL "vtkInformation")
      ENDIF(NOT "${KIT_NAME}" STREQUAL "Rendering" OR
            NOT "${TMP_FILENAME}" STREQUAL "vtkgl")
    ENDIF (TMP_WRAP_SPECIAL OR IGNORE_WRAP_EXCLUDE OR NOT TMP_WRAP_EXCLUDE)
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
  # try the old LIB_DEPENDS before trying the new LINK_INTERFACE_LIBRARIES
  IF("${vtk${KIT_NAME}_LIB_DEPENDS}")
    SET(TMP_KIT_DEPENDS "${vtk${KIT_NAME}_LIB_DEPENDS}")
  ELSE("${vtk${KIT_NAME}_LIB_DEPENDS}")
    GET_TARGET_PROPERTY(TMP_KIT_DEPENDS "vtk${KIT_NAME}"
      IMPORTED_LINK_INTERFACE_LIBRARIES)
    IF(VTK_BUILD_TYPE AND NOT TMP_KIT_DEPENDS)
      STRING(TOUPPER "${VTK_BUILD_TYPE}" TMP_BUILD_TYPE_UPPER)
      GET_TARGET_PROPERTY(TMP_KIT_DEPENDS "vtk${KIT_NAME}"
        IMPORTED_LINK_INTERFACE_LIBRARIES_${TMP_BUILD_TYPE_UPPER})
    ENDIF(VTK_BUILD_TYPE AND NOT TMP_KIT_DEPENDS)
    IF(VTK_CONFIGURATION_TYPES AND NOT TMP_KIT_DEPENDS)
      FOREACH(TMP_CONFIG_TYPE VTK_CONFIGURATION_TYPES)
        STRING(TOUPPER "${TMP_CONFIG_TYPE}" TMP_CONFIG_TYPE_UPPER)
        GET_TARGET_PROPERTY(TMP_KIT_DEPENDS "vtk${KIT_NAME}"
          IMPORTED_LINK_INTERFACE_LIBRARIES_${TMP_CONFIG_TYPE_UPPER})
      ENDFOREACH(TMP_CONFIG_TYPE)
    ENDIF(VTK_CONFIGURATION_TYPES AND NOT TMP_KIT_DEPENDS)
  ENDIF("${vtk${KIT_NAME}_LIB_DEPENDS}")

  # search for the hierarchy files for dependencies
  SET(OTHER_HIERARCHY_FILES)
  SET(QUOTED_HIERARCHY_FILES)
  SET(OTHER_HIERARCHY_TARGETS)
  FOREACH (TMP_KIT_LIB ${TMP_KIT_DEPENDS})
    IF(NOT "${TMP_KIT_LIB}" STREQUAL "vtk${KIT_NAME}")
      FOREACH (TMP_KIT ${VTK_KITS})
        SET(TMP_KIT_NAME ${VTK_${TMP_KIT}_NAME})
        IF (${TMP_KIT_LIB} STREQUAL vtk${TMP_KIT_NAME})
          SET(OTHER_HIERARCHY_FILES ${OTHER_HIERARCHY_FILES}
            "${WrapVTK_BINARY_DIR}/${TMP_KIT_NAME}/vtk${TMP_KIT_NAME}Hierarchy.txt")
          SET(QUOTED_HIERARCHY_FILES ${QUOTED_HIERARCHY_FILES}
            "${quote}${WrapVTK_BINARY_DIR}/${TMP_KIT_NAME}/vtk${TMP_KIT_NAME}Hierarchy.txt${quote}")
          SET(OTHER_HIERARCHY_TARGETS ${OTHER_HIERARCHY_TARGETS}
              vtk${TMP_KIT_NAME}Hierarchy)

        ENDIF (${TMP_KIT_LIB} STREQUAL vtk${TMP_KIT_NAME})
      ENDFOREACH (TMP_KIT ${VTK_KITS})
    ENDIF(NOT "${TMP_KIT_LIB}" STREQUAL "vtk${KIT_NAME}")
  ENDFOREACH (TMP_KIT_LIB ${TMP_KIT_DEPENDS})

  IF(NOT CMAKE_GENERATOR MATCHES "Visual Studio.*")
  # build the hierarchy file: the hierarchy file is only
  # overwritten if it will changed
    ADD_CUSTOM_COMMAND(
      OUTPUT ${OUTPUT_DIR}/${TARGET}.target ${OUTPUT_DIR}/${TARGET}.txt
      DEPENDS ${VTK_WRAP_HIERARCHY_EXE} ${INPUT_FILES}
      ${OTHER_HIERARCHY_FILES}
      ${OUTPUT_DIR}/${TARGET}.data

      COMMAND ${VTK_WRAP_HIERARCHY_EXE}
      ${TMP_INCLUDE}
      "-o" "${quote}${OUTPUT_DIR}/${TARGET}.txt${quote}"
      "${quote}${OUTPUT_DIR}/${TARGET}.data${quote}"
      ${QUOTED_HIERARCHY_FILES}

      COMMAND ${CMAKE_COMMAND}
      "-E" "touch" "${quote}${OUTPUT_DIR}/${TARGET}.target${quote}"
      COMMENT "Hierarchy Wrapping - generating ${TARGET}.txt"
      ${verbatim}
      )
    ADD_CUSTOM_TARGET(${TARGET}
      DEPENDS ${OUTPUT_DIR}/${TARGET}.txt
      )
    IF (OTHER_HIERARCHY_TARGETS)
      ADD_DEPENDENCIES(${TARGET} ${OTHER_HIERARCHY_TARGETS})
    ENDIF (OTHER_HIERARCHY_TARGETS)
  ELSE(NOT CMAKE_GENERATOR MATCHES "Visual Studio.*")
    # On Visual Studio builds, the target-timestamp trick does not work,
    # so re-parse the header files every time and create the hierarchy
    # file if the VTK hierarchy has changed.
    ADD_CUSTOM_TARGET(
      ${TARGET} ALL
      DEPENDS ${VTK_WRAP_HIERARCHY_EXE} ${OUTPUT_DIR}/${TARGET}.data

      COMMAND ${VTK_WRAP_HIERARCHY_EXE}
      ${TMP_INCLUDE}
      "-o" "${quote}${OUTPUT_DIR}/${TARGET}.txt${quote}"
      "${quote}${OUTPUT_DIR}/${TARGET}.data${quote}"
      ${QUOTED_HIERARCHY_FILES}
      COMMENT "Hierarchy Wrapping - generating ${TARGET}.txt"

      ${verbatim}
      SOURCES ${INPUT_FILES}
      )
    # Set target-level dependencies to build in the correct order
    ADD_DEPENDENCIES(${TARGET} vtkWrapVTKHierarchy ${OTHER_HIERARCHY_TARGETS})
  ENDIF(NOT CMAKE_GENERATOR MATCHES "Visual Studio.*")

ENDMACRO(VTK_WRAP_HIERARCHY)
