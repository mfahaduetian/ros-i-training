#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "noether::noether_tpp" for configuration ""
set_property(TARGET noether::noether_tpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_tpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libnoether_tpp.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_tpp.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS noether::noether_tpp )
list(APPEND _IMPORT_CHECK_FILES_FOR_noether::noether_tpp "${_IMPORT_PREFIX}/lib/libnoether_tpp.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
