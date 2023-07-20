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
foreach(_expectedTarget tesseract::tesseract_task_composer tesseract::tesseract_task_composer_nodes tesseract::tesseract_task_composer_factories tesseract::tesseract_task_composer_planning tesseract::tesseract_task_composer_planning_nodes tesseract::tesseract_task_composer_planning_factories tesseract::tesseract_task_composer_taskflow tesseract::tesseract_task_composer_taskflow_factories tesseract::tesseract_task_composer_example tesseract::tesseract_task_composer_trajopt_example tesseract::tesseract_task_composer_raster_example)
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


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target tesseract::tesseract_task_composer
add_library(tesseract::tesseract_task_composer SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "TESSERACT_TASK_COMPOSER_DIR=\"/home/ubuntu/tesseract_ws/install/tesseract_task_composer/share/tesseract_task_composer\""
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "console_bridge::console_bridge;tesseract::tesseract_common;Boost::boost;Boost::serialization;yaml-cpp"
)

# Create imported target tesseract::tesseract_task_composer_nodes
add_library(tesseract::tesseract_task_composer_nodes SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_nodes PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer;console_bridge::console_bridge;tesseract::tesseract_common;Boost::boost;Boost::serialization;yaml-cpp"
)

# Create imported target tesseract::tesseract_task_composer_factories
add_library(tesseract::tesseract_task_composer_factories SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_factories PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer;tesseract::tesseract_task_composer_nodes"
)

# Create imported target tesseract::tesseract_task_composer_planning
add_library(tesseract::tesseract_task_composer_planning SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_planning PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer;console_bridge::console_bridge;tesseract::tesseract_common;tesseract::tesseract_command_language;tesseract::tesseract_environment;Boost::boost;Boost::serialization;yaml-cpp"
)

# Create imported target tesseract::tesseract_task_composer_planning_nodes
add_library(tesseract::tesseract_task_composer_planning_nodes SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_planning_nodes PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer;tesseract::tesseract_task_composer_nodes;tesseract::tesseract_task_composer_planning;console_bridge::console_bridge;tesseract::tesseract_common;tesseract::tesseract_command_language;tesseract::tesseract_motion_planners_core;tesseract::tesseract_motion_planners_simple;tesseract::tesseract_motion_planners_trajopt;tesseract::tesseract_motion_planners_ompl;tesseract::tesseract_motion_planners_descartes;tesseract::tesseract_time_parameterization_core;tesseract::tesseract_time_parameterization_isp;tesseract::tesseract_time_parameterization_ruckig;tesseract::tesseract_time_parameterization_totg;trajopt::trajopt;Boost::boost;Boost::serialization;yaml-cpp"
)

# Create imported target tesseract::tesseract_task_composer_planning_factories
add_library(tesseract::tesseract_task_composer_planning_factories SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_planning_factories PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "TESSERACT_TASK_COMPOSER_HAS_TRAJOPT_IFOPT=1"
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer;tesseract::tesseract_task_composer_planning_nodes;tesseract::tesseract_motion_planners_simple;tesseract::tesseract_motion_planners_trajopt;tesseract::tesseract_motion_planners_ompl;tesseract::tesseract_motion_planners_descartes;tesseract::tesseract_motion_planners_trajopt_ifopt"
)

# Create imported target tesseract::tesseract_task_composer_taskflow
add_library(tesseract::tesseract_task_composer_taskflow SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_taskflow PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer;console_bridge::console_bridge;tesseract::tesseract_common;Boost::boost;Boost::serialization;Taskflow::Taskflow;yaml-cpp"
)

# Create imported target tesseract::tesseract_task_composer_taskflow_factories
add_library(tesseract::tesseract_task_composer_taskflow_factories SHARED IMPORTED)

set_target_properties(tesseract::tesseract_task_composer_taskflow_factories PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_task_composer_taskflow"
)

# Create imported target tesseract::tesseract_task_composer_example
add_executable(tesseract::tesseract_task_composer_example IMPORTED)

# Create imported target tesseract::tesseract_task_composer_trajopt_example
add_executable(tesseract::tesseract_task_composer_trajopt_example IMPORTED)

# Create imported target tesseract::tesseract_task_composer_raster_example
add_executable(tesseract::tesseract_task_composer_raster_example IMPORTED)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/tesseract_task_composer-targets-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
