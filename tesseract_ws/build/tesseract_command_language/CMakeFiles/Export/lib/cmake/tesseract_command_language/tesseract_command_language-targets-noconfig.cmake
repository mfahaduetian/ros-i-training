#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_command_language" for configuration ""
set_property(TARGET tesseract::tesseract_command_language APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_command_language PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_command_language.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_command_language.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_command_language )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_command_language "${_IMPORT_PREFIX}/lib/libtesseract_command_language.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
