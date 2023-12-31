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
foreach(_expectedTarget descartes::descartes_light descartes::descartes_light_bgl)
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


# Create imported target descartes::descartes_light
add_library(descartes::descartes_light SHARED IMPORTED)

set_target_properties(descartes::descartes_light PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_COMPILE_OPTIONS "-mno-avx;-Wall;-Wextra;-Wconversion;-Wsign-conversion;-Wno-sign-compare"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/descartes_light/descartes_light/core/include"
  INTERFACE_LINK_LIBRARIES "Eigen3::Eigen;OpenMP::OpenMP_CXX;console_bridge::console_bridge"
)

# Create imported target descartes::descartes_light_bgl
add_library(descartes::descartes_light_bgl SHARED IMPORTED)

set_target_properties(descartes::descartes_light_bgl PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_COMPILE_OPTIONS "-mno-avx;-Wall;-Wextra;-Wconversion;-Wsign-conversion;-Wno-sign-compare"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/descartes_light/descartes_light/bgl/include"
  INTERFACE_LINK_LIBRARIES "descartes::descartes_light;Boost::graph"
)

# Import target "descartes::descartes_light" for configuration ""
set_property(TARGET descartes::descartes_light APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(descartes::descartes_light PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/descartes_light/core/libdescartes_light.so"
  IMPORTED_SONAME_NOCONFIG "libdescartes_light.so"
  )

# Import target "descartes::descartes_light_bgl" for configuration ""
set_property(TARGET descartes::descartes_light_bgl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(descartes::descartes_light_bgl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/descartes_light/bgl/libdescartes_light_bgl.so"
  IMPORTED_SONAME_NOCONFIG "libdescartes_light_bgl.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
