#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "snp_application::snp_application_widget" for configuration ""
set_property(TARGET snp_application::snp_application_widget APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_application::snp_application_widget PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_application_widget.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_application_widget.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_application::snp_application_widget )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_application::snp_application_widget "${_IMPORT_PREFIX}/lib/libsnp_application_widget.so" )

# Import target "snp_application::snp_application_panel" for configuration ""
set_property(TARGET snp_application::snp_application_panel APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(snp_application::snp_application_panel PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libsnp_application_panel.so"
  IMPORTED_SONAME_NOCONFIG "libsnp_application_panel.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS snp_application::snp_application_panel )
list(APPEND _IMPORT_CHECK_FILES_FOR_snp_application::snp_application_panel "${_IMPORT_PREFIX}/lib/libsnp_application_panel.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
