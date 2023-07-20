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
foreach(_expectedTarget tesseract::tesseract_kinematics_core tesseract::tesseract_kinematics_core_factories tesseract::tesseract_kinematics_ikfast tesseract::tesseract_kinematics_kdl tesseract::tesseract_kinematics_kdl_factories tesseract::tesseract_kinematics_opw tesseract::tesseract_kinematics_opw_factory tesseract::tesseract_kinematics_ur tesseract::tesseract_kinematics_ur_factory)
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


# Create imported target tesseract::tesseract_kinematics_core
add_library(tesseract::tesseract_kinematics_core SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_core PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/core/include"
  INTERFACE_LINK_LIBRARIES "Eigen3::Eigen;tesseract::tesseract_common;tesseract::tesseract_scene_graph;tesseract::tesseract_state_solver_kdl;console_bridge::console_bridge;yaml-cpp"
)

# Create imported target tesseract::tesseract_kinematics_core_factories
add_library(tesseract::tesseract_kinematics_core_factories SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_core_factories PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/core/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_core;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_ikfast
add_library(tesseract::tesseract_kinematics_ikfast INTERFACE IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_ikfast PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "IKFAST_NO_MAIN;IKFAST_CLIBRARY;IKFAST_HAS_LIBRARY"
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/ikfast/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_core;Eigen3::Eigen;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_kdl
add_library(tesseract::tesseract_kinematics_kdl SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_kdl PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/kdl/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_core;Eigen3::Eigen;tesseract::tesseract_scene_graph;tesseract::tesseract_common;orocos-kdl;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_kdl_factories
add_library(tesseract::tesseract_kinematics_kdl_factories SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_kdl_factories PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/kdl/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_kdl;tesseract::tesseract_scene_graph;tesseract::tesseract_common;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_opw
add_library(tesseract::tesseract_kinematics_opw SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_opw PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/opw/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_core;Eigen3::Eigen;tesseract::tesseract_scene_graph;opw_kinematics::opw_kinematics;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_opw_factory
add_library(tesseract::tesseract_kinematics_opw_factory SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_opw_factory PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/opw/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_opw;tesseract::tesseract_scene_graph;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_ur
add_library(tesseract::tesseract_kinematics_ur SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_ur PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/ur/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_core;Eigen3::Eigen;tesseract::tesseract_scene_graph;console_bridge::console_bridge"
)

# Create imported target tesseract::tesseract_kinematics_ur_factory
add_library(tesseract::tesseract_kinematics_ur_factory SHARED IMPORTED)

set_target_properties(tesseract::tesseract_kinematics_ur_factory PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_17"
  INTERFACE_COMPILE_OPTIONS "-mno-avx"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/tesseract/tesseract_kinematics/ur/include"
  INTERFACE_LINK_LIBRARIES "tesseract::tesseract_kinematics_ur;tesseract::tesseract_scene_graph;console_bridge::console_bridge"
)

# Import target "tesseract::tesseract_kinematics_core" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/core/libtesseract_kinematics_core.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_core.so"
  )

# Import target "tesseract::tesseract_kinematics_core_factories" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_core_factories APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_core_factories PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/core/libtesseract_kinematics_core_factories.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_core_factories.so"
  )

# Import target "tesseract::tesseract_kinematics_kdl" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_kdl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/kdl/libtesseract_kinematics_kdl.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_kdl.so"
  )

# Import target "tesseract::tesseract_kinematics_kdl_factories" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_kdl_factories APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_kdl_factories PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/kdl/libtesseract_kinematics_kdl_factories.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_kdl_factories.so"
  )

# Import target "tesseract::tesseract_kinematics_opw" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_opw APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_opw PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/opw/libtesseract_kinematics_opw.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_opw.so"
  )

# Import target "tesseract::tesseract_kinematics_opw_factory" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_opw_factory APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_opw_factory PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/opw/libtesseract_kinematics_opw_factory.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_opw_factory.so"
  )

# Import target "tesseract::tesseract_kinematics_ur" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_ur APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_ur PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/ur/libtesseract_kinematics_ur.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_ur.so"
  )

# Import target "tesseract::tesseract_kinematics_ur_factory" for configuration ""
set_property(TARGET tesseract::tesseract_kinematics_ur_factory APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_kinematics_ur_factory PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/tesseract_kinematics/ur/libtesseract_kinematics_ur_factory.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_kinematics_ur_factory.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
