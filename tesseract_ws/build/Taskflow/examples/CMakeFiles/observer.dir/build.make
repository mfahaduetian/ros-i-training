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
include examples/CMakeFiles/observer.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/observer.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/observer.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/observer.dir/flags.make

examples/CMakeFiles/observer.dir/observer.cpp.o: examples/CMakeFiles/observer.dir/flags.make
examples/CMakeFiles/observer.dir/observer.cpp.o: /home/ubuntu/tesseract_ws/src/taskflow/examples/observer.cpp
examples/CMakeFiles/observer.dir/observer.cpp.o: examples/CMakeFiles/observer.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/observer.dir/observer.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/observer.dir/observer.cpp.o -MF CMakeFiles/observer.dir/observer.cpp.o.d -o CMakeFiles/observer.dir/observer.cpp.o -c /home/ubuntu/tesseract_ws/src/taskflow/examples/observer.cpp

examples/CMakeFiles/observer.dir/observer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/observer.dir/observer.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/taskflow/examples/observer.cpp > CMakeFiles/observer.dir/observer.cpp.i

examples/CMakeFiles/observer.dir/observer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/observer.dir/observer.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/taskflow/examples/observer.cpp -o CMakeFiles/observer.dir/observer.cpp.s

# Object files for target observer
observer_OBJECTS = \
"CMakeFiles/observer.dir/observer.cpp.o"

# External object files for target observer
observer_EXTERNAL_OBJECTS =

examples/observer: examples/CMakeFiles/observer.dir/observer.cpp.o
examples/observer: examples/CMakeFiles/observer.dir/build.make
examples/observer: examples/CMakeFiles/observer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable observer"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/observer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/observer.dir/build: examples/observer
.PHONY : examples/CMakeFiles/observer.dir/build

examples/CMakeFiles/observer.dir/clean:
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && $(CMAKE_COMMAND) -P CMakeFiles/observer.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/observer.dir/clean

examples/CMakeFiles/observer.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/Taskflow && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/taskflow /home/ubuntu/tesseract_ws/src/taskflow/examples /home/ubuntu/tesseract_ws/build/Taskflow /home/ubuntu/tesseract_ws/build/Taskflow/examples /home/ubuntu/tesseract_ws/build/Taskflow/examples/CMakeFiles/observer.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/observer.dir/depend

