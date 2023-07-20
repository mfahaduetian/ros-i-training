#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract_rosutils::tesseract_rosutils" for configuration ""
set_property(TARGET tesseract_rosutils::tesseract_rosutils APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract_rosutils::tesseract_rosutils PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_rosutils.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_rosutils.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract_rosutils::tesseract_rosutils )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract_rosutils::tesseract_rosutils "${_IMPORT_PREFIX}/lib/libtesseract_rosutils.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
