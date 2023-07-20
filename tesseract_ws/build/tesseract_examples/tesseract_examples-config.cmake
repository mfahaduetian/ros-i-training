# Default *-config.cmake file created by ros-industrial-cmake-boilerplate


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract_examples-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_examples_FOUND ON)

# Dependencies
include(CMakeFindDependencyMacro)
find_dependency(tesseract_environment)
find_dependency(tesseract_command_language)
find_dependency(tesseract_motion_planners)
find_dependency(tesseract_task_composer)
find_dependency(tesseract_collision)
find_dependency(tesseract_common)
find_dependency(tesseract_support)
find_dependency(trajopt_sqp)
find_dependency(trajopt_ifopt)
find_dependency(PCL REQUIRED COMPONENTS core features filters io segmentation surface)

# Targets
include("${CMAKE_CURRENT_LIST_DIR}/tesseract_examples-targets.cmake")
