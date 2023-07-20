# Default *-config.cmake file created by ros-industrial-cmake-boilerplate


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was noether_tpp-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(noether_tpp_FOUND ON)

# Dependencies
include(CMakeFindDependencyMacro)
find_dependency(Eigen3)
find_dependency(PCL REQUIRED COMPONENTS common io)
find_dependency(VTK)

# Targets
include("${CMAKE_CURRENT_LIST_DIR}/noether_tpp-targets.cmake")
