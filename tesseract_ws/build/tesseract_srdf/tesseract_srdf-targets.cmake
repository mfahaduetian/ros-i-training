# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget tesseract::tesseract_srdf)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target tesseract::tesseract_srdf
add_library(tesseract::tesseract_srdf SHARED IMPORTED)

set_target_properties(tesseract::tesseract_srdf PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_srdf/include"
  INTERFACE_LINK_LIBRARIES "Eigen3::Eigen;tesseract::tesseract_common;tesseract::tesseract_scene_graph;yaml-cpp"
)

# Import target "tesseract::tesseract_srdf" for configuration ""
set_property(TARGET tesseract::tesseract_srdf APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_srdf PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "console_bridge::console_bridge"
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_srdf/libtesseract_srdf.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_srdf.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
