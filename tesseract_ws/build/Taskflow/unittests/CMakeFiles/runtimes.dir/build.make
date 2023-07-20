# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.22

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:

#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:

# Disable VCS-based implicit rules.
% : %,v

# Disable VCS-based implicit rules.
% : RCS/%

# Disable VCS-based implicit rules.
% : RCS/%,v

# Disable VCS-based implicit rules.
% : SCCS/s.%

# Disable VCS-based implicit rules.
% : s.%

.SUFFIXES: .hpux_make_needs_suffix_list

# Produce verbose output by default.
VERBOSE = 1

# Command-line flag to silence nested $(MAKE).
$(VERBOSE)MAKESILENT = -s

#Suppress display of executed commands.
$(VERBOSE).SILENT:

# A target that is always out of date.
cmake_force:
.PHONY : cmake_force

#=============================================================================
# Set environment variables for the build.

# The shell in which to execute make rules.
SHELL = /bin/sh

# The CMake executable.
CMAKE_COMMAND = /usr/bin/cmake

# The command to remove a file.
RM = /usr/bin/cmake -E rm -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/taskflow

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/Taskflow

# Include any dependencies generated for this target.
include unittests/CMakeFiles/runtimes.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include unittests/CMakeFiles/runtimes.dir/compiler_depend.make

# Include the progress variables for this target.
include unittests/CMakeFiles/runtimes.dir/progress.make

# Include the compile flags for this target's objects.
include unittests/CMakeFiles/runtimes.dir/flags.make

unittests/CMakeFiles/runtimes.dir/runtimes.cpp.o: unittests/CMakeFiles/runtimes.dir/flags.make
unittests/CMakeFiles/runtimes.dir/runtimes.cpp.o: /home/ubuntu/tesseract_ws/src/taskflow/unittests/runtimes.cpp
unittests/CMakeFiles/runtimes.dir/runtimes.cpp.o: unittests/CMakeFiles/runtimes.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object unittests/CMakeFiles/runtimes.dir/runtimes.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT unittests/CMakeFiles/runtimes.dir/runtimes.cpp.o -MF CMakeFiles/runtimes.dir/runtimes.cpp.o.d -o CMakeFiles/runtimes.dir/runtimes.cpp.o -c /home/ubuntu/tesseract_ws/src/taskflow/unittests/runtimes.cpp

unittests/CMakeFiles/runtimes.dir/runtimes.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/runtimes.dir/runtimes.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/taskflow/unittests/runtimes.cpp > CMakeFiles/runtimes.dir/runtimes.cpp.i

unittests/CMakeFiles/runtimes.dir/runtimes.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/runtimes.dir/runtimes.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/unittests && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/taskflow/unittests/runtimes.cpp -o CMakeFiles/runtimes.dir/runtimes.cpp.s

# Object files for target runtimes
runtimes_OBJECTS = \
"CMakeFiles/runtimes.dir/runtimes.cpp.o"

# External object files for target runtimes
runtimes_EXTERNAL_OBJECTS =

unittests/runtimes: unittests/CMakeFiles/runtimes.dir/runtimes.cpp.o
unittests/runtimes: unittests/CMakeFiles/runtimes.dir/build.make
unittests/runtimes: unittests/CMakeFiles/runtimes.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable runtimes"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/unittests && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/runtimes.dir/link.txt --verbose=$(VERBOSE)
	cd /home/ubuntu/tesseract_ws/build/Taskflow/unittests && /usr/bin/cmake -D TEST_TARGET=runtimes -D TEST_EXECUTABLE=/home/ubuntu/tesseract_ws/build/Taskflow/unittests/runtimes -D TEST_EXECUTOR= -D TEST_WORKING_DIR=/home/ubuntu/tesseract_ws/build/Taskflow/unittests -D TEST_SPEC= -D TEST_EXTRA_ARGS= -D TEST_PROPERTIES= -D TEST_PREFIX= -D TEST_SUFFIX= -D TEST_LIST=runtimes_TESTS -D CTEST_FILE=/home/ubuntu/tesseract_ws/build/Taskflow/unittests/runtimes_tests-b858cb2.cmake -P /home/ubuntu/tesseract_ws/src/taskflow/3rd-party/doctest/doctestAddTests.cmake

# Rule to build all files generated by this target.
unittests/CMakeFiles/runtimes.dir/build: unittests/runtimes
.PHONY : unittests/CMakeFiles/runtimes.dir/build

unittests/CMakeFiles/runtimes.dir/clean:
	cd /home/ubuntu/tesseract_ws/build/Taskflow/unittests && $(CMAKE_COMMAND) -P CMakeFiles/runtimes.dir/cmake_clean.cmake
.PHONY : unittests/CMakeFiles/runtimes.dir/clean

unittests/CMakeFiles/runtimes.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/Taskflow && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/taskflow /home/ubuntu/tesseract_ws/src/taskflow/unittests /home/ubuntu/tesseract_ws/build/Taskflow /home/ubuntu/tesseract_ws/build/Taskflow/unittests /home/ubuntu/tesseract_ws/build/Taskflow/unittests/CMakeFiles/runtimes.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : unittests/CMakeFiles/runtimes.dir/depend
