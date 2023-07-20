#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_srdf" for configuration ""
set_property(TARGET tesseract::tesseract_srdf APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_srdf PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "console_bridge::console_bridge"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_srdf.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_srdf.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_srdf )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_srdf "${_IMPORT_PREFIX}/lib/libtesseract_srdf.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
