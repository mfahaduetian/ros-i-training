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
foreach(_expectedTarget snp_tpp::snp_tpp_mesh_modifier snp_tpp::snp_tpp_plugins snp_tpp::snp_tpp_widget)
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


# Compute the installation prefix relative to this file.
get_filename_component(_IMPORT_PREFIX "${CMAKE_CURRENT_LIST_FILE}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
get_filename_component(_IMPORT_PREFIX "${_IMPORT_PREFIX}" PATH)
if(_IMPORT_PREFIX STREQUAL "/")
  set(_IMPORT_PREFIX "")
endif()

# Create imported target snp_tpp::snp_tpp_mesh_modifier
add_library(snp_tpp::snp_tpp_mesh_modifier SHARED IMPORTED)

set_target_properties(snp_tpp::snp_tpp_mesh_modifier PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "noether::noether_tpp;noether::noether_filtering;noether::noether_gui;geometry_msgs::geometry_msgs__rosidl_generator_c;geometry_msgs::geometry_msgs__rosidl_typesupport_fastrtps_c;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_c;geometry_msgs::geometry_msgs__rosidl_typesupport_c;geometry_msgs::geometry_msgs__rosidl_generator_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_fastrtps_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_introspection_cpp;geometry_msgs::geometry_msgs__rosidl_typesupport_cpp;geometry_msgs::geometry_msgs__rosidl_generator_py;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_generator_c;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_typesupport_fastrtps_c;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_generator_cpp;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_typesupport_fastrtps_cpp;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_typesupport_introspection_c;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_typesupport_c;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_typesupport_introspection_cpp;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_typesupport_cpp;rviz_polygon_selection_tool::rviz_polygon_selection_tool__rosidl_generator_py;rviz_polygon_selection_tool::rviz_polygon_selection_tool_plugin;rclcpp::rclcpp;snp_msgs::snp_msgs__rosidl_generator_c;snp_msgs::snp_msgs__rosidl_typesupport_fastrtps_c;snp_msgs::snp_msgs__rosidl_generator_cpp;snp_msgs::snp_msgs__rosidl_typesupport_fastrtps_cpp;snp_msgs::snp_msgs__rosidl_typesupport_introspection_c;snp_msgs::snp_msgs__rosidl_typesupport_c;snp_msgs::snp_msgs__rosidl_typesupport_introspection_cpp;snp_msgs::snp_msgs__rosidl_typesupport_cpp;snp_msgs::snp_msgs__rosidl_generator_py;std_srvs::std_srvs__rosidl_generator_c;std_srvs::std_srvs__rosidl_typesupport_fastrtps_c;std_srvs::std_srvs__rosidl_typesupport_introspection_c;std_srvs::std_srvs__rosidl_typesupport_c;std_srvs::std_srvs__rosidl_generator_cpp;std_srvs::std_srvs__rosidl_typesupport_fastrtps_cpp;std_srvs::std_srvs__rosidl_typesupport_introspection_cpp;std_srvs::std_srvs__rosidl_typesupport_cpp;std_srvs::std_srvs__rosidl_generator_py;tf2_eigen::tf2_eigen"
)

# Create imported target snp_tpp::snp_tpp_plugins
add_library(snp_tpp::snp_tpp_plugins SHARED IMPORTED)

set_target_properties(snp_tpp::snp_tpp_plugins PROPERTIES
  INTERFACE_LINK_LIBRARIES "snp_tpp::snp_tpp_mesh_modifier"
)

# Create imported target snp_tpp::snp_tpp_widget
add_library(snp_tpp::snp_tpp_widget SHARED IMPORTED)

set_target_properties(snp_tpp::snp_tpp_widget PROPERTIES
  INTERFACE_COMPILE_DEFINITIONS "SNP_TPP_GUI_PLUGINS=\"snp_tpp_plugins\""
  INTERFACE_INCLUDE_DIRECTORIES "${_IMPORT_PREFIX}/include"
  INTERFACE_LINK_LIBRARIES "noether::noether_gui;boost_plugin_loader::boost_plugin_loader;pcl_common;pcl_octree;pcl_io;pcl_kdtree;pcl_search;pcl_sample_consensus;pcl_filters;pcl_surface;pcl_features;pcl_ml;pcl_segmentation;pcl_visualization;pcl_registration;pcl_keypoints;pcl_tracking;pcl_recognition;pcl_stereo;pcl_apps;pcl_outofcore;pcl_people;Boost::system;Boost::filesystem;Boost::date_time;Boost::iostreams;Boost::serialization;/usr/lib/libOpenNI.so;libusb::libusb;/usr/lib/x86_64-linux-gnu/libOpenNI2.so;libusb::libusb;VTK::ChartsCore;VTK::CommonColor;VTK::CommonComputationalGeometry;VTK::CommonCore;VTK::CommonDataModel;VTK::CommonExecutionModel;VTK::CommonMath;VTK::CommonMisc;VTK::CommonTransforms;VTK::FiltersCore;VTK::FiltersExtraction;VTK::FiltersGeneral;VTK::FiltersGeometry;VTK::FiltersModeling;VTK::FiltersSources;VTK::ImagingCore;VTK::ImagingSources;VTK::InteractionImage;VTK::InteractionStyle;VTK::InteractionWidgets;VTK::IOCore;VTK::IOGeometry;VTK::IOImage;VTK::IOLegacy;VTK::IOPLY;VTK::RenderingAnnotation;VTK::RenderingCore;VTK::RenderingContext2D;VTK::RenderingLOD;VTK::RenderingFreeType;VTK::ViewsCore;VTK::ViewsContext2D;VTK::RenderingOpenGL2;VTK::GUISupportQt;FLANN::FLANN;QHULL::QHULL;snp_msgs::snp_msgs__rosidl_generator_c;snp_msgs::snp_msgs__rosidl_typesupport_fastrtps_c;snp_msgs::snp_msgs__rosidl_generator_cpp;snp_msgs::snp_msgs__rosidl_typesupport_fastrtps_cpp;snp_msgs::snp_msgs__rosidl_typesupport_introspection_c;snp_msgs::snp_msgs__rosidl_typesupport_c;snp_msgs::snp_msgs__rosidl_typesupport_introspection_cpp;snp_msgs::snp_msgs__rosidl_typesupport_cpp;snp_msgs::snp_msgs__rosidl_generator_py;tf2_eigen::tf2_eigen"
)

if(CMAKE_VERSION VERSION_LESS 2.8.12)
  message(FATAL_ERROR "This file relies on consumers using CMake 2.8.12 or greater.")
endif()

# Load information for each installed configuration.
get_filename_component(_DIR "${CMAKE_CURRENT_LIST_FILE}" PATH)
file(GLOB CONFIG_FILES "${_DIR}/snp_tpp-targetsExport-*.cmake")
foreach(f ${CONFIG_FILES})
  include(${f})
endforeach()

# Cleanup temporary variables.
set(_IMPORT_PREFIX)

# Loop over all imported files and verify that they actually exist
foreach(target ${_IMPORT_CHECK_TARGETS} )
  foreach(file ${_IMPORT_CHECK_FILES_FOR_${target}} )
    if(NOT EXISTS "${file}" )
      message(FATAL_ERROR "The imported target \"${target}\" references the file
   \"${file}\"
but this file does not exist.  Possible reasons include:
* The file was deleted, renamed, or moved to another location.
* An install or uninstall procedure did not complete successfully.
* The installation package was faulty and contained
   \"${CMAKE_CURRENT_LIST_FILE}\"
but not all the files it references.
")
    endif()
  endforeach()
  unset(_IMPORT_CHECK_FILES_FOR_${target})
endforeach()
unset(_IMPORT_CHECK_TARGETS)

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
