# Install script for directory: /home/ubuntu/tesseract_ws/src/tesseract_ros2/tesseract_rviz

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/ubuntu/tesseract_ws/install/tesseract_rviz")
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
  include("/home/ubuntu/tesseract_ws/build/tesseract_rviz/ament_cmake_symlink_install/ament_cmake_symlink_install.cmake")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/libtesseract_rviz.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so"
         OLD_RPATH "/opt/ros/humble/opt/rviz_ogre_vendor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib/OGRE:/home/ubuntu/tesseract_ws/install/tesseract_qt/lib:/home/ubuntu/tesseract_ws/install/tesseract_monitoring/lib:/home/ubuntu/tesseract_ws/build/tesseract_rviz:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/qt_advanced_docking/lib:/home/ubuntu/tesseract_ws/install/tesseract_rosutils/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_task_composer/lib:/home/ubuntu/tesseract_ws/install/tesseract_motion_planners/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_msgs/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/libtesseract_rviz_markers.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so"
         OLD_RPATH "/opt/ros/humble/opt/rviz_ogre_vendor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib/OGRE:/opt/ros/humble/lib/x86_64-linux-gnu:/opt/ros/humble/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_markers.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/libtesseract_rviz_interactive_marker.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so"
         OLD_RPATH "/opt/ros/humble/opt/rviz_ogre_vendor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib/OGRE:/home/ubuntu/tesseract_ws/build/tesseract_rviz:/home/ubuntu/tesseract_ws/install/tesseract_qt/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_interactive_marker.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/libtesseract_rviz_environment_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so"
         OLD_RPATH "/opt/ros/humble/opt/rviz_ogre_vendor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib/OGRE:/home/ubuntu/tesseract_ws/build/tesseract_rviz:/home/ubuntu/tesseract_ws/install/tesseract_qt/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/qt_advanced_docking/lib:/home/ubuntu/tesseract_ws/install/tesseract_monitoring/lib:/home/ubuntu/tesseract_ws/install/tesseract_rosutils/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_task_composer/lib:/home/ubuntu/tesseract_ws/install/tesseract_motion_planners/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_msgs/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_environment_plugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/libtesseract_rviz_workbench_plugin.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so"
         OLD_RPATH "/opt/ros/humble/opt/rviz_ogre_vendor/lib:/opt/ros/humble/opt/rviz_ogre_vendor/lib/OGRE:/home/ubuntu/tesseract_ws/build/tesseract_rviz:/home/ubuntu/tesseract_ws/install/tesseract_qt/lib:/home/ubuntu/tesseract_ws/install/tesseract_kinematics/lib:/home/ubuntu/tesseract_ws/install/qt_advanced_docking/lib:/home/ubuntu/tesseract_ws/install/tesseract_monitoring/lib:/home/ubuntu/tesseract_ws/install/tesseract_rosutils/lib:/home/ubuntu/tesseract_ws/install/tesseract_visualization/lib:/home/ubuntu/tesseract_ws/install/tesseract_task_composer/lib:/home/ubuntu/tesseract_ws/install/tesseract_motion_planners/lib:/opt/ros/humble/lib/x86_64-linux-gnu:/opt/ros/humble/lib:/home/ubuntu/tesseract_ws/install/tesseract_msgs/lib:/home/ubuntu/tesseract_ws/install/tesseract_environment/lib:/home/ubuntu/tesseract_ws/install/tesseract_state_solver/lib:/home/ubuntu/tesseract_ws/install/tesseract_srdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_urdf/lib:/home/ubuntu/tesseract_ws/install/tesseract_collision/lib:/home/ubuntu/tesseract_ws/install/tesseract_scene_graph/lib:/home/ubuntu/tesseract_ws/install/tesseract_geometry/lib:/home/ubuntu/tesseract_ws/install/tesseract_command_language/lib:/home/ubuntu/tesseract_ws/install/tesseract_common/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libtesseract_rviz_workbench_plugin.so")
    endif()
  endif()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_rviz/cmake/-targetsExport.cmake")
    file(DIFFERENT EXPORT_FILE_CHANGED FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_rviz/cmake/-targetsExport.cmake"
         "/home/ubuntu/tesseract_ws/build/tesseract_rviz/CMakeFiles/Export/share/tesseract_rviz/cmake/-targetsExport.cmake")
    if(EXPORT_FILE_CHANGED)
      file(GLOB OLD_CONFIG_FILES "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_rviz/cmake/-targetsExport-*.cmake")
      if(OLD_CONFIG_FILES)
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/tesseract_rviz/cmake/-targetsExport.cmake\" will be replaced.  Removing files [${OLD_CONFIG_FILES}].")
        file(REMOVE ${OLD_CONFIG_FILES})
      endif()
    endif()
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_rviz/cmake" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/CMakeFiles/Export/share/tesseract_rviz/cmake/-targetsExport.cmake")
  if("${CMAKE_INSTALL_CONFIG_NAME}" MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/tesseract_rviz/cmake" TYPE FILE FILES "/home/ubuntu/tesseract_ws/build/tesseract_rviz/CMakeFiles/Export/share/tesseract_rviz/cmake/-targetsExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/ubuntu/tesseract_ws/build/tesseract_rviz/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
