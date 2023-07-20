#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract_monitoring::tesseract_monitoring_environment" for configuration ""
set_property(TARGET tesseract_monitoring::tesseract_monitoring_environment APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract_monitoring::tesseract_monitoring_environment PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_environment.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_monitoring_environment.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract_monitoring::tesseract_monitoring_environment )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract_monitoring::tesseract_monitoring_environment "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_environment.so" )

# Import target "tesseract_monitoring::tesseract_monitoring_environment_interface" for configuration ""
set_property(TARGET tesseract_monitoring::tesseract_monitoring_environment_interface APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract_monitoring::tesseract_monitoring_environment_interface PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_environment_interface.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_monitoring_environment_interface.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract_monitoring::tesseract_monitoring_environment_interface )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract_monitoring::tesseract_monitoring_environment_interface "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_environment_interface.so" )

# Import target "tesseract_monitoring::tesseract_monitoring_contacts" for configuration ""
set_property(TARGET tesseract_monitoring::tesseract_monitoring_contacts APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract_monitoring::tesseract_monitoring_contacts PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_contacts.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_monitoring_contacts.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract_monitoring::tesseract_monitoring_contacts )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract_monitoring::tesseract_monitoring_contacts "${_IMPORT_PREFIX}/lib/libtesseract_monitoring_contacts.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
