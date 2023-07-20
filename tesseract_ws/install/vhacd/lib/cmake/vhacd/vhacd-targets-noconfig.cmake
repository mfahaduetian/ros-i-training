#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::vhacd" for configuration ""
set_property(TARGET trajopt::vhacd APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::vhacd PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libvhacd.so"
  IMPORTED_SONAME_NOCONFIG "libvhacd.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::vhacd )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::vhacd "${_IMPORT_PREFIX}/lib/libvhacd.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
