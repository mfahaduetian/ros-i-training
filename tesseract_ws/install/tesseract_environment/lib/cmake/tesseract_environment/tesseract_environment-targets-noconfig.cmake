#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_environment" for configuration ""
set_property(TARGET tesseract::tesseract_environment APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_environment PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_environment.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_environment.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_environment )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_environment "${_IMPORT_PREFIX}/lib/libtesseract_environment.so" )

# Import target "tesseract::tesseract_environment_commands" for configuration ""
set_property(TARGET tesseract::tesseract_environment_commands APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_environment_commands PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_environment_commands.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_environment_commands.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_environment_commands )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_environment_commands "${_IMPORT_PREFIX}/lib/libtesseract_environment_commands.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
