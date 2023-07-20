
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was vhacd-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(vhacd_FOUND ON)
set_and_check(vhacd_INCLUDE_DIRS "${PACKAGE_PREFIX_DIR}/include")
set_and_check(vhacd_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")

include(CMakeFindDependencyMacro)
find_dependency(Eigen3)
find_dependency(OpenMP)
find_dependency(trajopt_common)

find_package(Bullet REQUIRED CONFIGS BulletConfig-float64.cmake BulletConfig.cmake)
IF(NOT ${BULLET_DEFINITIONS} MATCHES ".*-DBT_USE_DOUBLE_PRECISION.*")
  message(WARNING "Bullet does not appear to be build with double precision, current definitions: ${BULLET_DEFINITIONS}")
endif()

include_directories(BEFORE "${BULLET_ROOT_DIR}/${BULLET_INCLUDE_DIRS}")
link_directories(BEFORE "${BULLET_ROOT_DIR}/${BULLET_LIBRARY_DIRS}")

if(NOT TARGET OpenMP::OpenMP_CXX)
    find_package(Threads REQUIRED)
    add_library(OpenMP::OpenMP_CXX IMPORTED INTERFACE)
    set_property(TARGET OpenMP::OpenMP_CXX
                 PROPERTY INTERFACE_COMPILE_OPTIONS ${OpenMP_CXX_FLAGS})
    # Only works if the same flag is passed to the linker; use CMake 3.9+ otherwise (Intel, AppleClang)
    set_property(TARGET OpenMP::OpenMP_CXX
                 PROPERTY INTERFACE_LINK_LIBRARIES ${OpenMP_CXX_FLAGS} Threads::Threads)

endif()

include("${CMAKE_CURRENT_LIST_DIR}/vhacd-targets.cmake")
