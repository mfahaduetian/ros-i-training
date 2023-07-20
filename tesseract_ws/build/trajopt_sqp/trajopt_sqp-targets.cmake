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
foreach(_expectedTarget trajopt::trajopt_sqp trajopt::trajopt_sqp_callbacks)
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


# Create imported target trajopt::trajopt_sqp
add_library(trajopt::trajopt_sqp SHARED IMPORTED)

set_target_properties(trajopt::trajopt_sqp PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_optimizers/trajopt_sqp/include"
  INTERFACE_LINK_LIBRARIES "console_bridge::console_bridge;trajopt::trajopt_ifopt;ifopt::ifopt_core;OsqpEigen::OsqpEigen"
)

# Create imported target trajopt::trajopt_sqp_callbacks
add_library(trajopt::trajopt_sqp_callbacks SHARED IMPORTED)

set_target_properties(trajopt::trajopt_sqp_callbacks PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/trajopt/trajopt_optimizers/trajopt_sqp/include"
  INTERFACE_LINK_LIBRARIES "trajopt::trajopt_ifopt;trajopt::trajopt_common;tesseract::tesseract_visualization;tesseract::tesseract_common;console_bridge::console_bridge;osqp::osqp"
)

# Import target "trajopt::trajopt_sqp" for configuration ""
set_property(TARGET trajopt::trajopt_sqp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::trajopt_sqp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/trajopt_sqp/libtrajopt_sqp.so"
  IMPORTED_SONAME_NOCONFIG "libtrajopt_sqp.so"
  )

# Import target "trajopt::trajopt_sqp_callbacks" for configuration ""
set_property(TARGET trajopt::trajopt_sqp_callbacks APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::trajopt_sqp_callbacks PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/trajopt_sqp/libtrajopt_sqp_callbacks.so"
  IMPORTED_SONAME_NOCONFIG "libtrajopt_sqp_callbacks.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)