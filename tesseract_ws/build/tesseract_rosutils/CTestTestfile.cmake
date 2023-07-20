# CMake generated Testfile for 
# Source directory: /home/ubuntu/tesseract_ws/src/tesseract_ros2/tesseract_rosutils
# Build directory: /home/ubuntu/tesseract_ws/build/tesseract_rosutils
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(tesseract_rosutils_unit "/usr/bin/python3.10" "-u" "/opt/ros/humble/share/ament_cmake_test/cmake/run_test.py" "/home/ubuntu/tesseract_ws/build/tesseract_rosutils/test_results/tesseract_rosutils/tesseract_rosutils_unit.gtest.xml" "--package-name" "tesseract_rosutils" "--output-file" "/home/ubuntu/tesseract_ws/build/tesseract_rosutils/ament_cmake_gtest/tesseract_rosutils_unit.txt" "--command" "/home/ubuntu/tesseract_ws/build/tesseract_rosutils/tesseract_rosutils_unit" "--gtest_output=xml:/home/ubuntu/tesseract_ws/build/tesseract_rosutils/test_results/tesseract_rosutils/tesseract_rosutils_unit.gtest.xml")
set_tests_properties(tesseract_rosutils_unit PROPERTIES  LABELS "gtest" REQUIRED_FILES "/home/ubuntu/tesseract_ws/build/tesseract_rosutils/tesseract_rosutils_unit" TIMEOUT "60" WORKING_DIRECTORY "/home/ubuntu/tesseract_ws/build/tesseract_rosutils" _BACKTRACE_TRIPLES "/opt/ros/humble/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest_test.cmake;86;ament_add_test;/opt/ros/humble/share/ament_cmake_gtest/cmake/ament_add_gtest.cmake;93;ament_add_gtest_test;/home/ubuntu/tesseract_ws/src/tesseract_ros2/tesseract_rosutils/CMakeLists.txt;72;ament_add_gtest;/home/ubuntu/tesseract_ws/src/tesseract_ros2/tesseract_rosutils/CMakeLists.txt;0;")
subdirs("gtest")
