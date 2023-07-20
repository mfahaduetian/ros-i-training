#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "rviz_polygon_selection_tool::rviz_polygon_selection_tool_plugin" for configuration ""
set_property(TARGET rviz_polygon_selection_tool::rviz_polygon_selection_tool_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(rviz_polygon_selection_tool::rviz_polygon_selection_tool_plugin PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/librviz_polygon_selection_tool_plugin.so"
  IMPORTED_SONAME_NOCONFIG "librviz_polygon_selection_tool_plugin.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS rviz_polygon_selection_tool::rviz_polygon_selection_tool_plugin )
list(APPEND _IMPORT_CHECK_FILES_FOR_rviz_polygon_selection_tool::rviz_polygon_selection_tool_plugin "${_IMPORT_PREFIX}/lib/librviz_polygon_selection_tool_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
