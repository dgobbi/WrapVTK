PROJECT(WrapVTK)

# CMake version requirements
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Look for a VTK build directory
FIND_PACKAGE(VTK)
IF (VTK_FOUND)
  INCLUDE (${VTK_USE_FILE})
ENDIF (VTK_FOUND)

#-----------------------------------------------------------------------------
# Output directories.
IF(NOT LIBRARY_OUTPUT_PATH)
  SET(LIBRARY_OUTPUT_PATH ${WrapVTK_BINARY_DIR}/bin CACHE INTERNAL
    "Single output directory for building all libraries.")
ENDIF(NOT LIBRARY_OUTPUT_PATH)
IF(NOT EXECUTABLE_OUTPUT_PATH)
  SET(EXECUTABLE_OUTPUT_PATH ${WrapVTK_BINARY_DIR}/bin CACHE INTERNAL
    "Single output directory for building all executables.")
ENDIF(NOT EXECUTABLE_OUTPUT_PATH)

# Include the config type
SET(WrapVTK_LIBRARY_DIR ${LIBRARY_OUTPUT_PATH}/${CMAKE_CFG_INTDIR})
SET(WrapVTK_EXECUTABLE_DIR ${EXECUTABLE_OUTPUT_PATH}/${CMAKE_CFG_INTDIR})

#-----------------------------------------------------------------------------

ADD_SUBDIRECTORY(Wrapping)

# Get the full path to vtkWrapXML
SET(VTKXML_EXE ${WrapVTK_EXECUTABLE_DIR}/vtkWrapXML)
SET(VTK_WRAP_HIERARCHY_EXE ${WrapVTK_EXECUTABLE_DIR}/vtkWrapHierarchy)
SET(VTK_BUILD_HIERARCHY_EXE ${WrapVTK_EXECUTABLE_DIR}/vtkBuildHierarchy)

# Set the hints file
IF(VTK_WRAP_HINTS)
  SET(WrapVTK_HINTS "${VTK_WRAP_HINTS}")
ELSE(VTK_WRAP_HINTS)
  # This is for compatibility with VTK 5.4.2 and earlier
  FIND_FILE(WrapVTK_HINTS hints "${VTK_SOURCE_DIR}/Wrapping"
 	  NO_CMAKE_FIND_ROOT_PATH)
  MARK_AS_ADVANCED(WrapVTK_HINTS)
ENDIF(VTK_WRAP_HINTS)

#-----------------------------------------------------------------------------
# Include the contents of all the kit .cmake files.
# This provides a list of the classes included in VTK.
INCLUDE("${WrapVTK_SOURCE_DIR}/CMake/vtkIncludeAllKits.cmake")

#-----------------------------------------------------------------------------
INCLUDE("${WrapVTK_SOURCE_DIR}/CMake/vtkWrapHierarchy.cmake")

# This will be a list of targets for all the XML files
SET(VTKHIERARCHY_TARGETS)

FOREACH(VTK_KIT ${VTK_KITS})

  SET(KIT_NAME "${VTK_${VTK_KIT}_NAME}")
  SET(KIT_HEADER_DIR "${VTK_${VTK_KIT}_HEADER_DIR}")
  SET(KIT_CLASSES "${VTK_${VTK_KIT}_CLASSES}")

  # ------------
  # Here is all the per-kit hierarchy code

  SET(TMP_OUTPUT_DIR "${WrapVTK_BINARY_DIR}/${KIT_NAME}")
  FILE(MAKE_DIRECTORY "${TMP_OUTPUT_DIR}")

  ADD_CUSTOM_TARGET(vtk${KIT_NAME}Hierarchy
    DEPENDS ${TMP_OUTPUT_DIR}/vtk${KIT_NAME}Hierarchy.txt)

  VTK_WRAP_HIERARCHY(vtk${KIT_NAME}Hierarchy ${TMP_OUTPUT_DIR}
    "${KIT_CLASSES}")

  # Add a custom target for the kit HIERARCHY
  SET(VTKHIERARCHY_TARGETS ${VTKHIERARCHY_TARGETS} vtk${KIT_NAME}Hierarchy)

  # ------------

ENDFOREACH(VTK_KIT ${VTK_KITS})

# Add a custom target for all vtkWrapHierarchy outputs
ADD_CUSTOM_TARGET(vtkAllKitsHierarchy ALL)
ADD_DEPENDENCIES(vtkAllKitsHierarchy ${VTKHIERARCHY_TARGETS})

#-----------------------------------------------------------------------------
# Include macro to generate XML from class name.
INCLUDE("${WrapVTK_SOURCE_DIR}/CMake/vtkGenerateXMLFile.cmake")

# This will be a list of targets for all the XML files
SET(VTKXML_TARGETS)

FOREACH(VTK_KIT ${VTK_KITS})

  SET(KIT_NAME "${VTK_${VTK_KIT}_NAME}")
  SET(KIT_HEADER_DIR "${VTK_${VTK_KIT}_HEADER_DIR}")
  SET(KIT_CLASSES "${VTK_${VTK_KIT}_CLASSES}")

  # ------------
  # Here is all the per-kit XML code

  # To store a list of all xml files
  SET(TMP_XML_FILES)

  SET(VTKXML_OUTPUT_DIR "${WrapVTK_BINARY_DIR}/${KIT_NAME}")
  FILE(MAKE_DIRECTORY "${VTKXML_OUTPUT_DIR}")

  FOREACH(ONE_CLASS ${KIT_CLASSES})

    # Call to XML Generation Macro
    VTK_GENERATE_XML_FILE(TMP_XML_FILES "${ONE_CLASS}" "${VTKXML_OUTPUT_DIR}")

  ENDFOREACH(ONE_CLASS ${KIT_CLASSES})

  # Add a custom target for the kit XML
  ADD_CUSTOM_TARGET(vtk${KIT_NAME}XML DEPENDS ${TMP_XML_FILES})
  SET(VTKXML_TARGETS ${VTKXML_TARGETS} vtk${KIT_NAME}XML)

  # ------------

ENDFOREACH(VTK_KIT ${VTK_KITS})

# Add a custom target for all vtkWrapXML outputs
ADD_CUSTOM_TARGET(vtkAllKitsXML ALL)
ADD_DEPENDENCIES(vtkAllKitsXML ${VTKXML_TARGETS})

