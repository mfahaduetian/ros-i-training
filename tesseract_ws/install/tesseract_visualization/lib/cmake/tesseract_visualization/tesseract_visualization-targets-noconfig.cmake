#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_visualization" for configuration ""
set_property(TARGET tesseract::tesseract_visualization APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_visualization PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_visualization.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_visualization.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_visualization )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_visualization "${_IMPORT_PREFIX}/lib/libtesseract_visualization.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
