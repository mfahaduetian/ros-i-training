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
foreach(_expectedTarget noether::noether_gui noether::noether_gui_plugins noether::noether_gui_app)
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


# Create imported target noether::noether_gui
add_library(noether::noether_gui SHARED IMPORTED)

set_target_properties(noether::noether_gui PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "NOETHER_GUI_PLUGINS=\"noether_gui_plugins\";NOETHER_GUI_TPP_SECTION=\"tpp\";NOETHER_GUI_DIRECTION_GENERATOR_SECTION=\"dg\";NOETHER_GUI_ORIGIN_GENERATOR_SECTION=\"og\";NOETHER_GUI_TOOL_PATH_MODIFIER_SECTION=\"mod\";NOETHER_GUI_MESH_MODIFIER_SECTION=\"mesh\";NOETHER_GUI_PLUGIN_LIBS_ENV=\"NOETHER_PLUGIN_LIBS\";NOETHER_GUI_PLUGIN_PATHS_ENV=\"NOETHER_PLUGIN_PATHS\""
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/noether/noether_gui/include"
  INTERFACE_LINK_LIBRARIES "noether::noether_tpp;Qt5::Widgets;pcl_common;pcl_octree;pcl_io;pcl_kdtree;pcl_search;pcl_surface;Boost::system;Boost::filesystem;Boost::date_time;Boost::iostreams;Boost::serialization;/usr/lib/libOpenNI.so;libusb::libusb;/usr/lib/x86_64-linux-gnu/libOpenNI2.so;libusb::libusb;VTK::ChartsCore;VTK::CommonColor;VTK::CommonComputationalGeometry;VTK::CommonCore;VTK::CommonDataModel;VTK::CommonExecutionModel;VTK::CommonMath;VTK::CommonMisc;VTK::CommonTransforms;VTK::FiltersCore;VTK::FiltersExtraction;VTK::FiltersGeneral;VTK::FiltersGeometry;VTK::FiltersModeling;VTK::FiltersSources;VTK::ImagingCore;VTK::ImagingSources;VTK::InteractionImage;VTK::InteractionStyle;VTK::InteractionWidgets;VTK::IOCore;VTK::IOGeometry;VTK::IOImage;VTK::IOLegacy;VTK::IOPLY;VTK::RenderingAnnotation;VTK::RenderingCore;VTK::RenderingContext2D;VTK::RenderingLOD;VTK::RenderingFreeType;VTK::ViewsCore;VTK::ViewsContext2D;VTK::RenderingOpenGL2;VTK::GUISupportQt;FLANN::FLANN;QHULL::QHULL;boost_plugin_loader::boost_plugin_loader;Eigen3::Eigen;yaml-cpp"
)

# Create imported target noether::noether_gui_plugins
add_library(noether::noether_gui_plugins SHARED IMPORTED)

set_target_properties(noether::noether_gui_plugins PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_LINK_LIBRARIES "noether::noether_gui;Qt5::Widgets"
)

# Create imported target noether::noether_gui_app
add_executable(noether::noether_gui_app IMPORTED)

# Import target "noether::noether_gui" for configuration ""
set_property(TARGET noether::noether_gui APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_gui PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/noether_gui/libnoether_gui.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_gui.so"
  )

# Import target "noether::noether_gui_plugins" for configuration ""
set_property(TARGET noether::noether_gui_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_gui_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/noether_gui/libnoether_gui_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_gui_plugins.so"
  )

# Import target "noether::noether_gui_app" for configuration ""
set_property(TARGET noether::noether_gui_app APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_gui_app PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/noether_gui/noether_gui_app"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)