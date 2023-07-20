#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "snp_tpp::snp_tpp_mesh_modifier" for configuration ""
set_property(TARGET snp_tpp::snp_tpp_mesh_modifier APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_tpp::snp_tpp_mesh_modifier PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_tpp_mesh_modifier.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_tpp_mesh_modifier.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_tpp::snp_tpp_mesh_modifier )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_tpp::snp_tpp_mesh_modifier "${_IMPORT_PREFIX}/lib/libsnp_tpp_mesh_modifier.so" )

# Import target "snp_tpp::snp_tpp_plugins" for configuration ""
set_property(TARGET snp_tpp::snp_tpp_plugins APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_tpp::snp_tpp_plugins PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_tpp_plugins.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_tpp_plugins.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_tpp::snp_tpp_plugins )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_tpp::snp_tpp_plugins "${_IMPORT_PREFIX}/lib/libsnp_tpp_plugins.so" )

# Import target "snp_tpp::snp_tpp_widget" for configuration ""
set_property(TARGET snp_tpp::snp_tpp_widget APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_tpp::snp_tpp_widget PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_tpp_widget.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_tpp_widget.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_tpp::snp_tpp_widget )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_tpp::snp_tpp_widget "${_IMPORT_PREFIX}/lib/libsnp_tpp_widget.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
