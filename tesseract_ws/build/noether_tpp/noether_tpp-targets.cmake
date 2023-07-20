# Generated by CMake

if("${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION}" LESS 2.6)
   message(FATAL_ERROR "CMake >= 2.6.0 required")
endif()
cmake_policy(PUSH)
cmake_policy(VERSION 2.6...3.20)
#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Protect against multiple inclusion, which would fail when already imported targets are added once more.
set(_targetsDefined)
set(_targetsNotDefined)
set(_expectedTargets)
foreach(_expectedTarget noether::noether_tpp)
  list(APPEND _expectedTargets ${_expectedTarget})
  if(NOT TARGET ${_expectedTarget})
    list(APPEND _targetsNotDefined ${_expectedTarget})
  endif()
  if(TARGET ${_expectedTarget})
    list(APPEND _targetsDefined ${_expectedTarget})
  endif()
endforeach()
if("${_targetsDefined}" STREQUAL "${_expectedTargets}")
  unset(_targetsDefined)
  unset(_targetsNotDefined)
  unset(_expectedTargets)
  set(CMAKE_IMPORT_FILE_VERSION)
  cmake_policy(POP)
  return()
endif()
if(NOT "${_targetsDefined}" STREQUAL "")
  message(FATAL_ERROR "Some (but not all) targets in this export set were already defined.\nTargets Defined: ${_targetsDefined}\nTargets not yet defined: ${_targetsNotDefined}\n")
endif()
unset(_targetsDefined)
unset(_targetsNotDefined)
unset(_expectedTargets)


# Create imported target noether::noether_tpp
add_library(noether::noether_tpp SHARED IMPORTED)

set_target_properties(noether::noether_tpp PROPERTIES
  INTERFACE_COMPILE_FEATURES "cxx_std_14"
  INTERFACE_INCLUDE_DIRECTORIES "/home/ubuntu/tesseract_ws/src/noether/noether_tpp/include;/usr/include/pcl-1.12;/usr/include/eigen3;/usr/include;/usr/include/ni;/usr/include/openni2"
  INTERFACE_LINK_LIBRARIES "Eigen3::Eigen;pcl_common;pcl_octree;pcl_io;Boost::system;Boost::filesystem;Boost::date_time;Boost::iostreams;Boost::serialization;/usr/lib/libOpenNI.so;libusb::libusb;/usr/lib/x86_64-linux-gnu/libOpenNI2.so;libusb::libusb;VTK::ChartsCore;VTK::CommonColor;VTK::CommonComputationalGeometry;VTK::CommonCore;VTK::CommonDataModel;VTK::CommonExecutionModel;VTK::CommonMath;VTK::CommonMisc;VTK::CommonTransforms;VTK::FiltersCore;VTK::FiltersExtraction;VTK::FiltersGeneral;VTK::FiltersGeometry;VTK::FiltersModeling;VTK::FiltersSources;VTK::ImagingCore;VTK::ImagingSources;VTK::InteractionImage;VTK::InteractionStyle;VTK::InteractionWidgets;VTK::IOCore;VTK::IOGeometry;VTK::IOImage;VTK::IOLegacy;VTK::IOPLY;VTK::RenderingAnnotation;VTK::RenderingCore;VTK::RenderingContext2D;VTK::RenderingLOD;VTK::RenderingFreeType;VTK::ViewsCore;VTK::ViewsContext2D;VTK::RenderingOpenGL2;VTK::GUISupportQt;VTK::WrappingTools;VTK::ViewsQt;VTK::ViewsInfovis;VTK::CommonColor;VTK::Java;VTK::ViewsContext2D;VTK::loguru;VTK::TestingRendering;VTK::TestingCore;VTK::vtksys;VTK::RenderingTk;VTK::RenderingQt;VTK::PythonContext2D;VTK::RenderingVolumeOpenGL2;VTK::glew;VTK::opengl;VTK::PythonInterpreter;VTK::Python;VTK::RenderingLabel;VTK::octree;VTK::RenderingLOD;VTK::RenderingImage;VTK::RenderingContextOpenGL2;VTK::ParallelMPI4Py;VTK::mpi;VTK::IOVeraOut;VTK::hdf5;VTK::IOTecplotTable;VTK::IOSegY;VTK::IOParallelXML;VTK::IOParallelNetCDF;VTK::netcdf;VTK::IOPLY;VTK::IOOggTheora;VTK::theora;VTK::ogg;VTK::IONetCDF;VTK::IOMotionFX;VTK::pegtl;VTK::IOMPIParallel;VTK::IOParallel;VTK::jsoncpp;VTK::IOMPIImage;VTK::IOMINC;VTK::IOLSDyna;VTK::IOInfovis;VTK::libxml2;VTK::zlib;VTK::IOImport;VTK::IOIOSS;VTK::ioss;VTK::exodusII;VTK::cgns;VTK::IOHDF;VTK::IOVideo;VTK::IOMovie;VTK::IOExportPDF;VTK::libharu;VTK::IOExportGL2PS;VTK::RenderingGL2PSOpenGL2;VTK::gl2ps;VTK::png;VTK::IOExport;VTK::RenderingVtkJS;VTK::IOGeometry;VTK::RenderingSceneGraph;VTK::IOExodus;VTK::IOEnSight;VTK::IOCityGML;VTK::pugixml;VTK::IOChemistry;VTK::IOCONVERGECFD;VTK::IOCGNSReader;VTK::IOAsynchronous;VTK::IOAMR;VTK::InteractionImage;VTK::ImagingStencil;VTK::ImagingStatistics;VTK::ImagingMorphological;VTK::ImagingMath;VTK::ImagingFourier;VTK::IOSQL;VTK::sqlite;VTK::GUISupportQt;VTK::GeovisCore;VTK::libproj;VTK::InfovisLayout;VTK::ViewsCore;VTK::InteractionWidgets;VTK::RenderingVolume;VTK::RenderingAnnotation;VTK::ImagingHybrid;VTK::ImagingColor;VTK::InteractionStyle;VTK::FiltersTopology;VTK::FiltersSelection;VTK::FiltersSMP;VTK::FiltersPython;VTK::FiltersProgrammable;VTK::FiltersPoints;VTK::FiltersParallelVerdict;VTK::FiltersVerdict;VTK::verdict;VTK::FiltersParallelImaging;VTK::FiltersParallelGeometry;VTK::FiltersImaging;VTK::ImagingGeneral;VTK::FiltersHyperTree;VTK::FiltersGeneric;VTK::FiltersFlowPaths;VTK::eigen;VTK::FiltersAMR;VTK::DomainsParallelChemistry;VTK::FiltersParallelMPI;VTK::FiltersParallel;VTK::FiltersTexture;VTK::FiltersModeling;VTK::FiltersHybrid;VTK::ParallelMPI;VTK::DomainsChemistryOpenGL2;VTK::RenderingOpenGL2;VTK::RenderingUI;VTK::DomainsChemistry;VTK::CommonPython;VTK::WrappingPythonCore;VTK::ChartsCore;VTK::InfovisCore;VTK::FiltersExtraction;VTK::ParallelDIY;VTK::diy2;VTK::IOXML;VTK::IOXMLParser;VTK::expat;VTK::ParallelCore;VTK::IOLegacy;VTK::IOCore;VTK::doubleconversion;VTK::lz4;VTK::lzma;VTK::FiltersStatistics;VTK::ImagingSources;VTK::IOImage;VTK::DICOMParser;VTK::jpeg;VTK::metaio;VTK::tiff;VTK::RenderingContext2D;VTK::RenderingFreeType;VTK::freetype;VTK::kwiml;VTK::RenderingCore;VTK::FiltersSources;VTK::ImagingCore;VTK::FiltersGeometry;VTK::FiltersGeneral;VTK::fmt;VTK::CommonComputationalGeometry;VTK::FiltersCore;VTK::CommonExecutionModel;VTK::CommonDataModel;VTK::CommonSystem;VTK::CommonMisc;VTK::exprtk;VTK::CommonTransforms;VTK::CommonMath;VTK::kissfft;VTK::CommonCore;VTK::utf8"
)

# Import target "noether::noether_tpp" for configuration ""
set_property(TARGET noether::noether_tpp APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(noether::noether_tpp PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "/home/ubuntu/tesseract_ws/build/noether_tpp/libnoether_tpp.so"
  IMPORTED_SONAME_NOCONFIG "libnoether_tpp.so"
  )

# This file does not depend on other imported targets which have
# been exported from the same project but in a separate export set.

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
cmake_policy(POP)
