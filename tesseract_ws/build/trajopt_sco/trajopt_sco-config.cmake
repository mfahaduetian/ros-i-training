
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was trajopt_sco-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(trajopt_sco_FOUND ON)
set_and_check(trajopt_sco_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(trajopt_sco_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

list(APPEND CMAKE_MODULE_PATH "${CMAKE_CURRENT_LIST_DIR}")

include(CMakeFindDependencyMacro)
find_dependency(Eigen3)
find_dependency(trajopt_common)
if(NOT TARGET JsonCpp::JsonCpp)
  find_dependency(jsoncpp)
elseif(NOT TARGET jsoncpp_lib)
  add_library(jsoncpp_lib ALIAS JsonCpp::JsonCpp)
endif()
if(${CMAKE_VERSION} VERSION_LESS "3.15.0")
  find_package(Boost REQUIRED)
else()
  find_dependency(Boost)
endif()
find_dependency(OpenMP)

include("${CMAKE_CURRENT_LIST_DIR}/trajopt_sco-targets.cmake")
