#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "noether::noether_filtering" for configuration ""
set_property(TARGET noether::noether_filtering APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_filtering PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnoether_filtering.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_filtering.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_filtering )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_filtering "${_IMPORT_PREFIX}/lib/libnoether_filtering.so" )

# Import target "noether::noether_filtering_cloud_filters" for configuration ""
set_property(TARGET noether::noether_filtering_cloud_filters APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_filtering_cloud_filters PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnoether_filtering_cloud_filters.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_filtering_cloud_filters.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_filtering_cloud_filters )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_filtering_cloud_filters "${_IMPORT_PREFIX}/lib/libnoether_filtering_cloud_filters.so" )

# Import target "noether::noether_filtering_cloud_filter_plugins" for configuration ""
set_property(TARGET noether::noether_filtering_cloud_filter_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_filtering_cloud_filter_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnoether_filtering_cloud_filter_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_filtering_cloud_filter_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_filtering_cloud_filter_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_filtering_cloud_filter_plugins "${_IMPORT_PREFIX}/lib/libnoether_filtering_cloud_filter_plugins.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
