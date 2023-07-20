# Default *-config.cmake file created by ros-industrial-cmake-boilerplate


####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract_qt-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_qt_FOUND ON)

# Dependencies
include(CMakeFindDependencyMacro)
find_dependency(Qt5 COMPONENTS Core Gui Widgets Svg OpenGL Xml)
find_dependency(tesseract_environment)
find_dependency(tesseract_kinematics)
find_dependency(tesseract_scene_graph)
find_dependency(tesseract_common)
find_dependency(tesseract_support)
find_dependency(tesseract_urdf)
find_dependency(tesseract_srdf)
find_dependency(tesseract_visualization)
find_dependency(tesseract_command_language)
find_dependency(tesseract_motion_planners)
find_dependency(tesseract_task_composer)
find_dependency(qtadvanceddocking)
find_dependency(gz-rendering7)
find_dependency(gz-math7-eigen3)
find_dependency(gz-common5 COMPONENTS profiler events av)

# Targets
include("${CMAKE_CURRENT_LIST_DIR}/tesseract_qt-targets.cmake")

# Extra configuration files
include("${CMAKE_CURRENT_LIST_DIR}/tesseract_qt-extras.cmake")
