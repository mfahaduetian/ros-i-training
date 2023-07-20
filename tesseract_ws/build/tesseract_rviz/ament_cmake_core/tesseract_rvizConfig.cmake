# generated from ament/cmake/core/templates/nameConfig.cmake.in

# prevent multiple inclusion
if(_tesseract_rviz_CONFIG_INCLUDED)
  # ensure to keep the found flag the same
  if(NOT DEFINED tesseract_rviz_FOUND)
    # explicitly set it to FALSE, otherwise CMake will set it to TRUE
    set(tesseract_rviz_FOUND FALSE)
  elseif(NOT tesseract_rviz_FOUND)
    # use separate condition to avoid uninitialized variable warning
    set(tesseract_rviz_FOUND FALSE)
  endif()
  return()
endif()
set(_tesseract_rviz_CONFIG_INCLUDED TRUE)

# output package information
if(NOT tesseract_rviz_FIND_QUIETLY)
  message(STATUS "Found tesseract_rviz: 0.18.0 (${tesseract_rviz_DIR})")
endif()

# warn when using a deprecated package
if(NOT "" STREQUAL "")
  set(_msg "Package 'tesseract_rviz' is deprecated")
  # append custom deprecation text if available
  if(NOT "" STREQUAL "TRUE")
    set(_msg "${_msg} ()")
  endif()
  # optionally quiet the deprecation message
  if(NOT ${tesseract_rviz_DEPRECATED_QUIET})
    message(DEPRECATION "${_msg}")
  endif()
endif()

# flag package as ament-based to distinguish it after being find_package()-ed
set(tesseract_rviz_FOUND_AMENT_PACKAGE TRUE)

# include all config extra files
set(_extras "ament_cmake_export_targets-extras.cmake")
foreach(_extra ${_extras})
  include("${tesseract_rviz_DIR}/${_extra}")
endforeach()
