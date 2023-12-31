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
foreach(_expectedTarget tesseract::tesseract_time_parameterization_core tesseract::tesseract_time_parameterization_isp tesseract::tesseract_time_parameterization_totg tesseract::tesseract_time_parameterization_ruckig)
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


# Create imported target tesseract::tesseract_time_parameterization_core
add_library(tesseract::tesseract_time_parameterization_core SHARED IMPORTED)

set_target_properties(tesseract::tesseract_time_parameterization_core PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_time_parameterization/core/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_common;tesseract::tesseract_command_language;console_bridge::console_bridge;Eigen3::Eigen"
)

# Create imported target tesseract::tesseract_time_parameterization_isp
add_library(tesseract::tesseract_time_parameterization_isp SHARED IMPORTED)

set_target_properties(tesseract::tesseract_time_parameterization_isp PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_time_parameterization/isp/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_time_parameterization_core"
)

# Create imported target tesseract::tesseract_time_parameterization_totg
add_library(tesseract::tesseract_time_parameterization_totg SHARED IMPORTED)

set_target_properties(tesseract::tesseract_time_parameterization_totg PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_time_parameterization/totg/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_time_parameterization_core"
)

# Create imported target tesseract::tesseract_time_parameterization_ruckig
add_library(tesseract::tesseract_time_parameterization_ruckig SHARED IMPORTED)

set_target_properties(tesseract::tesseract_time_parameterization_ruckig PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_time_parameterization/ruckig/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_time_parameterization_core;ruckig::ruckig"
)

# Import target "tesseract::tesseract_time_parameterization_core" for configuration ""
set_property(TARGET tesseract::tesseract_time_parameterization_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_time_parameterization_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/core/libtesseract_time_parameterization_core.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_time_parameterization_core.so"
  )

# Import target "tesseract::tesseract_time_parameterization_isp" for configuration ""
set_property(TARGET tesseract::tesseract_time_parameterization_isp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_time_parameterization_isp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/isp/libtesseract_time_parameterization_isp.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_time_parameterization_isp.so"
  )

# Import target "tesseract::tesseract_time_parameterization_totg" for configuration ""
set_property(TARGET tesseract::tesseract_time_parameterization_totg APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_time_parameterization_totg PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/totg/libtesseract_time_parameterization_totg.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_time_parameterization_totg.so"
  )

# Import target "tesseract::tesseract_time_parameterization_ruckig" for configuration ""
set_property(TARGET tesseract::tesseract_time_parameterization_ruckig APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_time_parameterization_ruckig PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_time_parameterization/ruckig/libtesseract_time_parameterization_ruckig.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_time_parameterization_ruckig.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
