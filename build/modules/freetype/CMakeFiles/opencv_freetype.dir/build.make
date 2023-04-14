# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.10

# Delete rule output on recipe failure.
.DELETE_ON_ERROR:


#=============================================================================
# Special targets provided by cmake.

# Disable implicit rules so canonical targets will work.
.SUFFIXES:


# Remove some rules from gmake that .SUFFIXES does not remove.
SUFFIXES =

.SUFFIXES: .hpux_make_needs_suffix_list


# Suppress display of executed commands.
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
RM = /usr/bin/cmake -E remove -f

# Escaping for special characters.
EQUALS = =

# The top-level source directory on which CMake was run.
CMAKE_SOURCE_DIR = /home/weijian/Downloads/opencv-master

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weijian/Downloads/opencv-master/build

# Include any dependencies generated for this target.
include modules/freetype/CMakeFiles/opencv_freetype.dir/depend.make

# Include the progress variables for this target.
include modules/freetype/CMakeFiles/opencv_freetype.dir/progress.make

# Include the compile flags for this target's objects.
include modules/freetype/CMakeFiles/opencv_freetype.dir/flags.make

modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o: modules/freetype/CMakeFiles/opencv_freetype.dir/flags.make
modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o: ../opencv_contrib/modules/freetype/src/freetype.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Downloads/opencv-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o"
	cd /home/weijian/Downloads/opencv-master/build/modules/freetype && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o -c /home/weijian/Downloads/opencv-master/opencv_contrib/modules/freetype/src/freetype.cpp

modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_freetype.dir/src/freetype.cpp.i"
	cd /home/weijian/Downloads/opencv-master/build/modules/freetype && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Downloads/opencv-master/opencv_contrib/modules/freetype/src/freetype.cpp > CMakeFiles/opencv_freetype.dir/src/freetype.cpp.i

modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_freetype.dir/src/freetype.cpp.s"
	cd /home/weijian/Downloads/opencv-master/build/modules/freetype && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Downloads/opencv-master/opencv_contrib/modules/freetype/src/freetype.cpp -o CMakeFiles/opencv_freetype.dir/src/freetype.cpp.s

modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.requires:

.PHONY : modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.requires

modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.provides: modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.requires
	$(MAKE) -f modules/freetype/CMakeFiles/opencv_freetype.dir/build.make modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.provides.build
.PHONY : modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.provides

modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.provides.build: modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o


# Object files for target opencv_freetype
opencv_freetype_OBJECTS = \
"CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o"

# External object files for target opencv_freetype
opencv_freetype_EXTERNAL_OBJECTS =

lib/libopencv_freetype.so.4.7.0: modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o
lib/libopencv_freetype.so.4.7.0: modules/freetype/CMakeFiles/opencv_freetype.dir/build.make
lib/libopencv_freetype.so.4.7.0: lib/libopencv_imgproc.so.4.7.0
lib/libopencv_freetype.so.4.7.0: 3rdparty/lib/libtegra_hal.a
lib/libopencv_freetype.so.4.7.0: /usr/lib/aarch64-linux-gnu/libfreetype.so
lib/libopencv_freetype.so.4.7.0: /usr/lib/aarch64-linux-gnu/libharfbuzz.so
lib/libopencv_freetype.so.4.7.0: lib/libopencv_core.so.4.7.0
lib/libopencv_freetype.so.4.7.0: modules/freetype/CMakeFiles/opencv_freetype.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Downloads/opencv-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX shared library ../../lib/libopencv_freetype.so"
	cd /home/weijian/Downloads/opencv-master/build/modules/freetype && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_freetype.dir/link.txt --verbose=$(VERBOSE)
	cd /home/weijian/Downloads/opencv-master/build/modules/freetype && $(CMAKE_COMMAND) -E cmake_symlink_library ../../lib/libopencv_freetype.so.4.7.0 ../../lib/libopencv_freetype.so.407 ../../lib/libopencv_freetype.so

lib/libopencv_freetype.so.407: lib/libopencv_freetype.so.4.7.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libopencv_freetype.so.407

lib/libopencv_freetype.so: lib/libopencv_freetype.so.4.7.0
	@$(CMAKE_COMMAND) -E touch_nocreate lib/libopencv_freetype.so

# Rule to build all files generated by this target.
modules/freetype/CMakeFiles/opencv_freetype.dir/build: lib/libopencv_freetype.so

.PHONY : modules/freetype/CMakeFiles/opencv_freetype.dir/build

modules/freetype/CMakeFiles/opencv_freetype.dir/requires: modules/freetype/CMakeFiles/opencv_freetype.dir/src/freetype.cpp.o.requires

.PHONY : modules/freetype/CMakeFiles/opencv_freetype.dir/requires

modules/freetype/CMakeFiles/opencv_freetype.dir/clean:
	cd /home/weijian/Downloads/opencv-master/build/modules/freetype && $(CMAKE_COMMAND) -P CMakeFiles/opencv_freetype.dir/cmake_clean.cmake
.PHONY : modules/freetype/CMakeFiles/opencv_freetype.dir/clean

modules/freetype/CMakeFiles/opencv_freetype.dir/depend:
	cd /home/weijian/Downloads/opencv-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Downloads/opencv-master /home/weijian/Downloads/opencv-master/opencv_contrib/modules/freetype /home/weijian/Downloads/opencv-master/build /home/weijian/Downloads/opencv-master/build/modules/freetype /home/weijian/Downloads/opencv-master/build/modules/freetype/CMakeFiles/opencv_freetype.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/freetype/CMakeFiles/opencv_freetype.dir/depend

