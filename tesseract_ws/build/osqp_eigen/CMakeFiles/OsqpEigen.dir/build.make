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
CMAKE_SOURCE_DIR = /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/osqp_eigen

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/ubuntu/tesseract_ws/build/osqp_eigen

# Utility rule file for OsqpEigen.

# Include any custom commands dependencies for this target.
include CMakeFiles/OsqpEigen.dir/compiler_depend.make

# Include the progress variables for this target.
include CMakeFiles/OsqpEigen.dir/progress.make

CMakeFiles/OsqpEigen: CMakeFiles/OsqpEigen-complete

CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-install
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-mkdir
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-download
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-update
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-patch
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-build
CMakeFiles/OsqpEigen-complete: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-install
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Completed 'OsqpEigen'"
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles/OsqpEigen-complete
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-done

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-build: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Performing build step for 'OsqpEigen'"
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-build && $(MAKE)
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-build

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure: OsqpEigen-prefix/tmp/OsqpEigen-cfgcmd.txt
OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure: OsqpEigen-prefix/tmp/OsqpEigen-cache-.cmake
OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-patch
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Performing configure step for 'OsqpEigen'"
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-build && /usr/bin/cmake "-GUnix Makefiles" -C/home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/tmp/OsqpEigen-cache-.cmake /home/ubuntu/tesseract_ws/build/osqp_eigen-src
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-download: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-gitinfo.txt
OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-download: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-mkdir
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_4) "Performing download step (git clone) for 'OsqpEigen'"
	cd /home/ubuntu/tesseract_ws/build && /usr/bin/cmake -P /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/tmp/OsqpEigen-gitclone.cmake
	cd /home/ubuntu/tesseract_ws/build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-download

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-install: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-build
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_5) "Performing install step for 'OsqpEigen'"
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-build && $(MAKE) install
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-build && /usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-install

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-mkdir:
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_6) "Creating directories for 'OsqpEigen'"
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen-src
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen-build
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/tmp
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src
	/usr/bin/cmake -E make_directory /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-mkdir

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-patch: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-update
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_7) "No patch step for 'OsqpEigen'"
	/usr/bin/cmake -E echo_append
	/usr/bin/cmake -E touch /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-patch

OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-update: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-download
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --blue --bold --progress-dir=/home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles --progress-num=$(CMAKE_PROGRESS_8) "Performing update step for 'OsqpEigen'"
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen-src && /usr/bin/cmake -P /home/ubuntu/tesseract_ws/build/osqp_eigen/OsqpEigen-prefix/tmp/OsqpEigen-gitupdate.cmake

OsqpEigen: CMakeFiles/OsqpEigen
OsqpEigen: CMakeFiles/OsqpEigen-complete
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-build
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-configure
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-download
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-install
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-mkdir
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-patch
OsqpEigen: OsqpEigen-prefix/src/OsqpEigen-stamp/OsqpEigen-update
OsqpEigen: CMakeFiles/OsqpEigen.dir/build.make
.PHONY : OsqpEigen

# Rule to build all files generated by this target.
CMakeFiles/OsqpEigen.dir/build: OsqpEigen
.PHONY : CMakeFiles/OsqpEigen.dir/build

CMakeFiles/OsqpEigen.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/OsqpEigen.dir/cmake_clean.cmake
.PHONY : CMakeFiles/OsqpEigen.dir/clean

CMakeFiles/OsqpEigen.dir/depend:
	cd /home/ubuntu/tesseract_ws/build/osqp_eigen && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/osqp_eigen /home/ubuntu/tesseract_ws/src/trajopt/trajopt_ext/osqp_eigen /home/ubuntu/tesseract_ws/build/osqp_eigen /home/ubuntu/tesseract_ws/build/osqp_eigen /home/ubuntu/tesseract_ws/build/osqp_eigen/CMakeFiles/OsqpEigen.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : CMakeFiles/OsqpEigen.dir/depend

