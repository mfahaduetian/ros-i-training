#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_scene_graph" for configuration ""
set_property(TARGET tesseract::tesseract_scene_graph APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_scene_graph PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_scene_graph.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_scene_graph.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_scene_graph )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_scene_graph "${_IMPORT_PREFIX}/lib/libtesseract_scene_graph.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
