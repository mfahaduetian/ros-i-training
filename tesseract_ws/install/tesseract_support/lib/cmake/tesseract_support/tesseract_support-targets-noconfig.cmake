#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_support" for configuration ""
set_property(TARGET tesseract::tesseract_support APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_support PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_support.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_support.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_support )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_support "${_IMPORT_PREFIX}/lib/libtesseract_support.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
