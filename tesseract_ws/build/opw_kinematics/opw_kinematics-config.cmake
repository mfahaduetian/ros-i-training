# Default *-config.cmake file created by ros-industrial-cmake-boilerplate


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was opw_kinematics-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(opw_kinematics_FOUND ON)

# Dependencies
include(CMakeFindDependencyMacro)
find_dependency(Eigen3)

# Targets
include("${CMAKE_CURRENT_LIST_DIR}/opw_kinematics-targets.cmake")
