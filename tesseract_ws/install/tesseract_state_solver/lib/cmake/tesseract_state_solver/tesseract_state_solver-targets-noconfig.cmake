#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_state_solver_kdl" for configuration ""
set_property(TARGET tesseract::tesseract_state_solver_kdl APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_state_solver_kdl PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_state_solver_kdl.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_state_solver_kdl.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_state_solver_kdl )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_state_solver_kdl "${_IMPORT_PREFIX}/lib/libtesseract_state_solver_kdl.so" )

# Import target "tesseract::tesseract_state_solver_ofkt" for configuration ""
set_property(TARGET tesseract::tesseract_state_solver_ofkt APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_state_solver_ofkt PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_state_solver_ofkt.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_state_solver_ofkt.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_state_solver_ofkt )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_state_solver_ofkt "${_IMPORT_PREFIX}/lib/libtesseract_state_solver_ofkt.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
