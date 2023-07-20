#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract_planning_server::tesseract_planning_server" for configuration ""
set_property(TARGET tesseract_planning_server::tesseract_planning_server APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract_planning_server::tesseract_planning_server PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_planning_server.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_planning_server.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract_planning_server::tesseract_planning_server )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract_planning_server::tesseract_planning_server "${_IMPORT_PREFIX}/lib/libtesseract_planning_server.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
