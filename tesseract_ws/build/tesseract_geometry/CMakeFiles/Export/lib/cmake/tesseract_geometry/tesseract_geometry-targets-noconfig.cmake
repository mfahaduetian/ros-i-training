#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_geometry" for configuration ""
set_property(TARGET tesseract::tesseract_geometry APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_geometry PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_geometry.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_geometry.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_geometry )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_geometry "${_IMPORT_PREFIX}/lib/libtesseract_geometry.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
