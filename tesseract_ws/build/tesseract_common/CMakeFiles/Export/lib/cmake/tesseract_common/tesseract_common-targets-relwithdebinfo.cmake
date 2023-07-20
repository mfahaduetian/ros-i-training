#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_common" for configuration "RelWithDebInfo"
set_property(TARGET tesseract::tesseract_common APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(tesseract::tesseract_common PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libtesseract_common.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libtesseract_common.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_common "${_IMPORT_PREFIX}/lib/libtesseract_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
