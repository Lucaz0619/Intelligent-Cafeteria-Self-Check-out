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
include modules/aruco/CMakeFiles/opencv_test_aruco.dir/depend.make

# Include the progress variables for this target.
include modules/aruco/CMakeFiles/opencv_test_aruco.dir/progress.make

# Include the compile flags for this target's objects.
include modules/aruco/CMakeFiles/opencv_test_aruco.dir/flags.make

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o: modules/aruco/CMakeFiles/opencv_test_aruco.dir/flags.make
modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o: ../opencv_contrib/modules/aruco/test/test_aruco_tutorial.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Downloads/opencv-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o -c /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco/test/test_aruco_tutorial.cpp

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.i"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco/test/test_aruco_tutorial.cpp > CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.i

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.s"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco/test/test_aruco_tutorial.cpp -o CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.s

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.requires:

.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.requires

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.provides: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.requires
	$(MAKE) -f modules/aruco/CMakeFiles/opencv_test_aruco.dir/build.make modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.provides.build
.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.provides

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.provides.build: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o


modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o: modules/aruco/CMakeFiles/opencv_test_aruco.dir/flags.make
modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o: ../opencv_contrib/modules/aruco/test/test_main.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Downloads/opencv-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Building CXX object modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o -c /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco/test/test_main.cpp

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.i"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco/test/test_main.cpp > CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.i

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.s"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco/test/test_main.cpp -o CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.s

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.requires:

.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.requires

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.provides: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.requires
	$(MAKE) -f modules/aruco/CMakeFiles/opencv_test_aruco.dir/build.make modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.provides.build
.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.provides

modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.provides.build: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o


# Object files for target opencv_test_aruco
opencv_test_aruco_OBJECTS = \
"CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o" \
"CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o"

# External object files for target opencv_test_aruco
opencv_test_aruco_EXTERNAL_OBJECTS =

bin/opencv_test_aruco: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o
bin/opencv_test_aruco: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o
bin/opencv_test_aruco: modules/aruco/CMakeFiles/opencv_test_aruco.dir/build.make
bin/opencv_test_aruco: lib/libopencv_ts.a
bin/opencv_test_aruco: lib/libopencv_aruco.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_highgui.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_objdetect.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_videoio.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_imgcodecs.so.4.7.0
bin/opencv_test_aruco: 3rdparty/lib/libtegra_hal.a
bin/opencv_test_aruco: lib/libopencv_dnn.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_calib3d.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_features2d.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_flann.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_imgproc.so.4.7.0
bin/opencv_test_aruco: lib/libopencv_core.so.4.7.0
bin/opencv_test_aruco: modules/aruco/CMakeFiles/opencv_test_aruco.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Downloads/opencv-master/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_3) "Linking CXX executable ../../bin/opencv_test_aruco"
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/opencv_test_aruco.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
modules/aruco/CMakeFiles/opencv_test_aruco.dir/build: bin/opencv_test_aruco

.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/build

modules/aruco/CMakeFiles/opencv_test_aruco.dir/requires: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_aruco_tutorial.cpp.o.requires
modules/aruco/CMakeFiles/opencv_test_aruco.dir/requires: modules/aruco/CMakeFiles/opencv_test_aruco.dir/test/test_main.cpp.o.requires

.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/requires

modules/aruco/CMakeFiles/opencv_test_aruco.dir/clean:
	cd /home/weijian/Downloads/opencv-master/build/modules/aruco && $(CMAKE_COMMAND) -P CMakeFiles/opencv_test_aruco.dir/cmake_clean.cmake
.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/clean

modules/aruco/CMakeFiles/opencv_test_aruco.dir/depend:
	cd /home/weijian/Downloads/opencv-master/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Downloads/opencv-master /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco /home/weijian/Downloads/opencv-master/build /home/weijian/Downloads/opencv-master/build/modules/aruco /home/weijian/Downloads/opencv-master/build/modules/aruco/CMakeFiles/opencv_test_aruco.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : modules/aruco/CMakeFiles/opencv_test_aruco.dir/depend

