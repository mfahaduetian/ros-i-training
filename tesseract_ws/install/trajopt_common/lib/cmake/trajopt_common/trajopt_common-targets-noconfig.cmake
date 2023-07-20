#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "trajopt::trajopt_common" for configuration ""
set_property(TARGET trajopt::trajopt_common APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(trajopt::trajopt_common PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtrajopt_common.so"
  IMPORTED_SONAME_NOCONFIG "libtrajopt_common.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS trajopt::trajopt_common )
list(APPEND _IMPORT_CHECK_FILES_FOR_trajopt::trajopt_common "${_IMPORT_PREFIX}/lib/libtrajopt_common.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
