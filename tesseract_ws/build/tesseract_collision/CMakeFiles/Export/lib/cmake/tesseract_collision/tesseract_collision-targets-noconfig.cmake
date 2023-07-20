#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "tesseract::tesseract_collision_core" for configuration ""
set_property(TARGET tesseract::tesseract_collision_core APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_collision_core PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_collision_core.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_collision_core.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_collision_core )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_collision_core "${_IMPORT_PREFIX}/lib/libtesseract_collision_core.so" )

# Import target "tesseract::create_convex_hull" for configuration ""
set_property(TARGET tesseract::create_convex_hull APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::create_convex_hull PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/bin/create_convex_hull"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::create_convex_hull )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::create_convex_hull "${_IMPORT_PREFIX}/bin/create_convex_hull" )

# Import target "tesseract::tesseract_collision_bullet" for configuration ""
set_property(TARGET tesseract::tesseract_collision_bullet APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_collision_bullet PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_collision_bullet.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_collision_bullet.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_collision_bullet )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_collision_bullet "${_IMPORT_PREFIX}/lib/libtesseract_collision_bullet.so" )

# Import target "tesseract::tesseract_collision_bullet_factories" for configuration ""
set_property(TARGET tesseract::tesseract_collision_bullet_factories APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_collision_bullet_factories PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_collision_bullet_factories.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_collision_bullet_factories.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_collision_bullet_factories )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_collision_bullet_factories "${_IMPORT_PREFIX}/lib/libtesseract_collision_bullet_factories.so" )

# Import target "tesseract::tesseract_collision_vhacd_convex_decomposition" for configuration ""
set_property(TARGET tesseract::tesseract_collision_vhacd_convex_decomposition APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(tesseract::tesseract_collision_vhacd_convex_decomposition PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libtesseract_collision_vhacd_convex_decomposition.so"
  IMPORTED_SONAME_NOCONFIG "libtesseract_collision_vhacd_convex_decomposition.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS tesseract::tesseract_collision_vhacd_convex_decomposition )
list(APPEND _IMPORT_CHECK_FILES_FOR_tesseract::tesseract_collision_vhacd_convex_decomposition "${_IMPORT_PREFIX}/lib/libtesseract_collision_vhacd_convex_decomposition.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
