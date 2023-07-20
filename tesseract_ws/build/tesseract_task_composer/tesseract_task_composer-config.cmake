
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract_task_composer-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_task_composer_FOUND ON)
set_and_check(tesseract_task_composer_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(tesseract_task_composer_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

include(CMakeFindDependencyMacro)
find_dependency(console_bridge)
find_dependency(tesseract_common)
find_dependency(yaml-cpp)
if(${CMAKE_VERSION} VERSION_LESS "3.15.0")
    find_package(Boost REQUIRED COMPONENTS serialization)
else()
    find_dependency(Boost COMPONENTS serialization)
endif()

if(ON)
  find_dependency(tesseract_command_language)
  find_dependency(tesseract_motion_planners)
  find_dependency(tesseract_time_parameterization)
  find_dependency(trajopt)
endif()

if(ON)
  find_dependency(Taskflow)
endif()

if(NOT TARGET console_bridge::console_bridge)
  add_library(console_bridge::console_bridge INTERFACE IMPORTED)
  set_target_properties(console_bridge::console_bridge PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${console_bridge_INCLUDE_DIRS})
  set_target_properties(console_bridge::console_bridge PROPERTIES INTERFACE_LINK_LIBRARIES ${console_bridge_LIBRARIES})
else()
  get_target_property(CHECK_INCLUDE_DIRECTORIES console_bridge::console_bridge INTERFACE_INCLUDE_DIRECTORIES)
  if (NOT ${CHECK_INCLUDE_DIRECTORIES})
    set_target_properties(console_bridge::console_bridge PROPERTIES INTERFACE_INCLUDE_DIRECTORIES ${console_bridge_INCLUDE_DIRS})
  endif()
endif()

include("${CMAKE_CURRENT_LIST_DIR}/tesseract_task_composer-targets.cmake")
