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
CMAKE_SOURCE_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/yolov3.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/yolov3.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/yolov3.dir/flags.make

examples/CMakeFiles/yolov3.dir/yolov3.cpp.o: examples/CMakeFiles/yolov3.dir/flags.make
examples/CMakeFiles/yolov3.dir/yolov3.cpp.o: ../examples/yolov3.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/yolov3.dir/yolov3.cpp.o"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/yolov3.dir/yolov3.cpp.o -c /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/yolov3.cpp

examples/CMakeFiles/yolov3.dir/yolov3.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/yolov3.dir/yolov3.cpp.i"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/yolov3.cpp > CMakeFiles/yolov3.dir/yolov3.cpp.i

examples/CMakeFiles/yolov3.dir/yolov3.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/yolov3.dir/yolov3.cpp.s"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/yolov3.cpp -o CMakeFiles/yolov3.dir/yolov3.cpp.s

examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.requires:

.PHONY : examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.requires

examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.provides: examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.requires
	$(MAKE) -f examples/CMakeFiles/yolov3.dir/build.make examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.provides.build
.PHONY : examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.provides

examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.provides.build: examples/CMakeFiles/yolov3.dir/yolov3.cpp.o


# Object files for target yolov3
yolov3_OBJECTS = \
"CMakeFiles/yolov3.dir/yolov3.cpp.o"

# External object files for target yolov3
yolov3_EXTERNAL_OBJECTS =

examples/yolov3: examples/CMakeFiles/yolov3.dir/yolov3.cpp.o
examples/yolov3: examples/CMakeFiles/yolov3.dir/build.make
examples/yolov3: src/libncnn.a
examples/yolov3: /usr/local/lib/libopencv_highgui.so.3.4.4
examples/yolov3: /usr/local/lib/libopencv_videoio.so.3.4.4
examples/yolov3: /usr/lib/gcc/x86_64-linux-gnu/7/libgomp.so
examples/yolov3: /usr/lib/x86_64-linux-gnu/libpthread.so
examples/yolov3: /usr/local/lib/libopencv_imgcodecs.so.3.4.4
examples/yolov3: /usr/local/lib/libopencv_imgproc.so.3.4.4
examples/yolov3: /usr/local/lib/libopencv_core.so.3.4.4
examples/yolov3: examples/CMakeFiles/yolov3.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable yolov3"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/yolov3.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/yolov3.dir/build: examples/yolov3

.PHONY : examples/CMakeFiles/yolov3.dir/build

examples/CMakeFiles/yolov3.dir/requires: examples/CMakeFiles/yolov3.dir/yolov3.cpp.o.requires

.PHONY : examples/CMakeFiles/yolov3.dir/requires

examples/CMakeFiles/yolov3.dir/clean:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/yolov3.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/yolov3.dir/clean

examples/CMakeFiles/yolov3.dir/depend:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples/CMakeFiles/yolov3.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/yolov3.dir/depend

