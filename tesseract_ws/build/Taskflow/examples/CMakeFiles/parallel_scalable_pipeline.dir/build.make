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
include examples/CMakeFiles/parallel_scalable_pipeline.dir/depend.make
# Include any dependencies generated by the compiler for this target.
include examples/CMakeFiles/parallel_scalable_pipeline.dir/compiler_depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/parallel_scalable_pipeline.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/parallel_scalable_pipeline.dir/flags.make

examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o: examples/CMakeFiles/parallel_scalable_pipeline.dir/flags.make
examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o: /home/ubuntu/tesseract_ws/src/taskflow/examples/parallel_scalable_pipeline.cpp
examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o: examples/CMakeFiles/parallel_scalable_pipeline.dir/compiler_depend.ts
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -MD -MT examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o -MF CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o.d -o CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o -c /home/ubuntu/tesseract_ws/src/taskflow/examples/parallel_scalable_pipeline.cpp

examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.i"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/ubuntu/tesseract_ws/src/taskflow/examples/parallel_scalable_pipeline.cpp > CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.i

examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.s"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/ubuntu/tesseract_ws/src/taskflow/examples/parallel_scalable_pipeline.cpp -o CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.s

# Object files for target parallel_scalable_pipeline
parallel_scalable_pipeline_OBJECTS = \
"CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o"

# External object files for target parallel_scalable_pipeline
parallel_scalable_pipeline_EXTERNAL_OBJECTS =

examples/parallel_scalable_pipeline: examples/CMakeFiles/parallel_scalable_pipeline.dir/parallel_scalable_pipeline.cpp.o
examples/parallel_scalable_pipeline: examples/CMakeFiles/parallel_scalable_pipeline.dir/build.make
examples/parallel_scalable_pipeline: examples/CMakeFiles/parallel_scalable_pipeline.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/ubuntu/tesseract_ws/build/Taskflow/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable parallel_scalable_pipeline"
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/parallel_scalable_pipeline.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/parallel_scalable_pipeline.dir/build: examples/parallel_scalable_pipeline
.PHONY : examples/CMakeFiles/parallel_scalable_pipeline.dir/build

examples/CMakeFiles/parallel_scalable_pipeline.dir/clean:
	cd /home/ubuntu/tesseract_ws/build/Taskflow/examples && $(CMAKE_COMMAND) -P CMakeFiles/parallel_scalable_pipeline.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/parallel_scalable_pipeline.dir/clean

examples/CMakeFiles/parallel_scalable_pipeline.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/Taskflow && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/taskflow /home/ubuntu/tesseract_ws/src/taskflow/examples /home/ubuntu/tesseract_ws/build/Taskflow /home/ubuntu/tesseract_ws/build/Taskflow/examples /home/ubuntu/tesseract_ws/build/Taskflow/examples/CMakeFiles/parallel_scalable_pipeline.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/parallel_scalable_pipeline.dir/depend

