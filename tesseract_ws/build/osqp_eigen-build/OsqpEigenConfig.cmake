set(OsqpEigen_VERSION 0.6.3)


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was OsqpEigenConfig.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

#### Expanded from @PACKAGE_DEPENDENCIES@ by install_basic_package_files() ####

include(CMakeFindDependencyMacro)
find_dependency(osqp)
find_dependency(Eigen3 CONFIG)

###############################################################################


if(NOT TARGET OsqpEigen::OsqpEigen)
  include("${CMAKE_CURRENT_LIST_DIR}/OsqpEigenTargets.cmake")
endif()

# Compatibility
get_property(OsqpEigen_OsqpEigen_INCLUDE_DIR TARGET OsqpEigen::OsqpEigen PROPERTY INTERFACE_INCLUDE_DIRECTORIES)

set(OsqpEigen_LIBRARIES OsqpEigen::OsqpEigen)
set(OsqpEigen_INCLUDE_DIRS "${OsqpEigen_OsqpEigen_INCLUDE_DIR}")
list(REMOVE_DUPLICATES OsqpEigen_INCLUDE_DIRS)


