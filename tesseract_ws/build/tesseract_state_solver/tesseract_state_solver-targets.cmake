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

if(CMAKE_VERSION VERSION_LESS 3.0.0)
  message(FATAL_ERROR "This file relies on consumers using CMake 3.0.0 or greater.")
endif()

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget tesseract::tesseract_state_solver_core tesseract::tesseract_state_solver_kdl tesseract::tesseract_state_solver_ofkt)
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


# Create imported target tesseract::tesseract_state_solver_core
add_library(tesseract::tesseract_state_solver_core INTERFACE IMPORTED)

set_target_properties(tesseract::tesseract_state_solver_core PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_state_solver/include"
  INTERFACE_LINK_LIBRARIES "Eigen3::Eigen;tesseract::tesseract_common;tesseract::tesseract_scene_graph;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_state_solver_kdl
add_library(tesseract::tesseract_state_solver_kdl SHARED IMPORTED)

set_target_properties(tesseract::tesseract_state_solver_kdl PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_state_solver/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_state_solver_core;Eigen3::Eigen;tesseract::tesseract_common;tesseract::tesseract_scene_graph;orocos-kdl;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_state_solver_ofkt
add_library(tesseract::tesseract_state_solver_ofkt SHARED IMPORTED)

set_target_properties(tesseract::tesseract_state_solver_ofkt PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_state_solver/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_state_solver_core;Eigen3::Eigen;tesseract::tesseract_common;tesseract::tesseract_scene_graph;console_bridge::console_bridge"
)

# Import target "tesseract::tesseract_state_solver_kdl" for configuration ""
set_property(TARGET tesseract::tesseract_state_solver_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_state_solver_kdl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_state_solver/libtesseract_state_solver_kdl.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_state_solver_kdl.so"
  )

# Import target "tesseract::tesseract_state_solver_ofkt" for configuration ""
set_property(TARGET tesseract::tesseract_state_solver_ofkt APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_state_solver_ofkt PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_state_solver/libtesseract_state_solver_ofkt.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_state_solver_ofkt.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)