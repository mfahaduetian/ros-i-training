# Install script for directory: /home/ubuntu/tesseract_ws/src/tesseract_planning/tesseract_motion_planners/examples

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/tesseract_ws/install/tesseract_motion_planners")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/examples/tesseract_motion_planners_chain_example")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example"
         OLD_RPATH "/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/descartes:/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/trajopt:/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/core:/home/ubuntu/tesseract_ws/install/tesseract_support/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/tesseract_ws/install/descartes_light/lib:/home/ubuntu/tesseract_ws/install/trajopt/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/trajopt_sco/lib:/home/ubuntu/tesseract_ws/install/trajopt_common/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_chain_example")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/examples/tesseract_motion_planners_raster_example")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example"
         OLD_RPATH "/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/descartes:/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/trajopt:/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/core:/home/ubuntu/tesseract_ws/install/tesseract_support/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/tesseract_ws/install/descartes_light/lib:/home/ubuntu/tesseract_ws/install/trajopt/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/trajopt_sco/lib:/home/ubuntu/tesseract_ws/install/trajopt_common/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_raster_example")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/bin" TYPE EXECUTABLE FILES "/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/examples/tesseract_motion_planners_freespace_example")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example"
         OLD_RPATH "/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/ompl:/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/trajopt:/home/ubuntu/tesseract_ws/build/tesseract_motion_planners/core:/home/ubuntu/tesseract_ws/install/tesseract_support/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/home/ubuntu/tesseract_ws/install/trajopt/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/home/ubuntu/tesseract_ws/install/trajopt_sco/lib:/home/ubuntu/tesseract_ws/install/trajopt_common/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/bin/tesseract_motion_planners_freespace_example")
    endif()
  endif()
endif()

