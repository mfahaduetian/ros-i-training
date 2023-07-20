
####### Expanded from @PACKAGE_INIT@ by configure_package_config_file() #######
####### Any changes to this file will be overwritten by the next CMake run ####
####### The input file was tesseract_support-config.cmake.in                            ########

get_filename_component(PACKAGE_PREFIX_DIR "${CMAKE_CURRENT_LIST_DIR}/../../../" ABSOLUTE)

macro(set_and_check _var _file)
  set(${_var} "${_file}")
  if(NOT EXISTS "${_file}")
    message(FATAL_ERROR "File or directory ${_file} referenced by variable ${_var} does not exist !")
  endif()
endmacro()

####################################################################################

set(tesseract_support_FOUND ON)
set_and_check(tesseract_support_LIBRARY_DIRS "${PACKAGE_PREFIX_DIR}/lib")
set(TESSERACT_SUPPORT_DIR "${PACKAGE_PREFIX_DIR}/share/tesseract_support")

include("${CMAKE_CURRENT_LIST_DIR}/tesseract_support-targets.cmake")
