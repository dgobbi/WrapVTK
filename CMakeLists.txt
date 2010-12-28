PROJECT(WrapVTK)

# CMake version requirements
CMAKE_MINIMUM_REQUIRED(VERSION 2.6)

# Look for a VTK build directory
FIND_PACKAGE(VTK)
IF (VTK_FOUND)
  INCLUDE (${VTK_USE_FILE})
ENDIF (VTK_FOUND)

#-----------------------------------------------------------------------------
# Options
OPTION(IGNORE_WRAP_EXCLUDE "Even wrap items marked WRAP_EXCLUDE." OFF)

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
SET(VTK_WRAP_XML_EXE ${WrapVTK_EXECUTABLE_DIR}/vtkWrapXML)
SET(VTK_WRAP_HIERARCHY_EXE ${WrapVTK_EXECUTABLE_DIR}/vtkWrapVTKHierarchy)

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
INCLUDE("${WrapVTK_SOURCE_DIR}/CMake/vtkWrapXML.cmake")

# This will be a list of targets for all the XML files
SET(VTKHIERARCHY_TARGETS)
SET(VTKXML_TARGETS)

FOREACH(VTK_KIT ${VTK_KITS})

  SET(KIT_NAME "${VTK_${VTK_KIT}_NAME}")
  SET(KIT_HEADER_DIR "${VTK_${VTK_KIT}_HEADER_DIR}")
  SET(KIT_CLASSES "${VTK_${VTK_KIT}_CLASSES}")
  SET(KIT_WRAP_HEADERS "${VTK_${VTK_KIT}_WRAP_HEADERS}")

  SET(TMP_OUTPUT_DIR "${WrapVTK_BINARY_DIR}/${KIT_NAME}")
  FILE(MAKE_DIRECTORY "${TMP_OUTPUT_DIR}")

  SET(TMP_INPUTS ${KIT_CLASSES} ${KIT_WRAP_HEADERS})

  VTK_WRAP_HIERARCHY(vtk${KIT_NAME}Hierarchy ${TMP_OUTPUT_DIR}
    "${TMP_INPUTS}")

  SET(TMP_XML_FILES)
  VTK_WRAP_XML(vtk${KIT_NAME}XML TMP_XML_FILES "${TMP_OUTPUT_DIR}"
    "${TMP_INPUTS}")

  ADD_CUSTOM_TARGET(vtk${KIT_NAME}XML
    DEPENDS ${TMP_XML_FILES})

  ADD_DEPENDENCIES(vtk${KIT_NAME}XML vtk${KIT_NAME}Hierarchy)

  SET(VTKHIERARCHY_TARGETS ${VTKHIERARCHY_TARGETS} vtk${KIT_NAME}Hierarchy)
  SET(VTKXML_TARGETS ${VTKXML_TARGETS} vtk${KIT_NAME}XML)

ENDFOREACH(VTK_KIT ${VTK_KITS})

# Add a custom target for all vtkWrapXML outputs
ADD_CUSTOM_TARGET(vtkAllKitsXML ALL)
ADD_DEPENDENCIES(vtkAllKitsXML ${VTKXML_TARGETS})

