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
include examples/CMakeFiles/retinaface.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/retinaface.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/retinaface.dir/flags.make

examples/CMakeFiles/retinaface.dir/retinaface.cpp.o: examples/CMakeFiles/retinaface.dir/flags.make
examples/CMakeFiles/retinaface.dir/retinaface.cpp.o: ../examples/retinaface.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/retinaface.dir/retinaface.cpp.o"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/retinaface.dir/retinaface.cpp.o -c /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/retinaface.cpp

examples/CMakeFiles/retinaface.dir/retinaface.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/retinaface.dir/retinaface.cpp.i"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/retinaface.cpp > CMakeFiles/retinaface.dir/retinaface.cpp.i

examples/CMakeFiles/retinaface.dir/retinaface.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/retinaface.dir/retinaface.cpp.s"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/retinaface.cpp -o CMakeFiles/retinaface.dir/retinaface.cpp.s

examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.requires:

.PHONY : examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.requires

examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.provides: examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.requires
	$(MAKE) -f examples/CMakeFiles/retinaface.dir/build.make examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.provides.build
.PHONY : examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.provides

examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.provides.build: examples/CMakeFiles/retinaface.dir/retinaface.cpp.o


# Object files for target retinaface
retinaface_OBJECTS = \
"CMakeFiles/retinaface.dir/retinaface.cpp.o"

# External object files for target retinaface
retinaface_EXTERNAL_OBJECTS =

examples/retinaface: examples/CMakeFiles/retinaface.dir/retinaface.cpp.o
examples/retinaface: examples/CMakeFiles/retinaface.dir/build.make
examples/retinaface: src/libncnn.a
examples/retinaface: /usr/local/lib/libopencv_highgui.so.3.4.4
examples/retinaface: /usr/local/lib/libopencv_videoio.so.3.4.4
examples/retinaface: /usr/lib/gcc/x86_64-linux-gnu/7/libgomp.so
examples/retinaface: /usr/lib/x86_64-linux-gnu/libpthread.so
examples/retinaface: /usr/local/lib/libopencv_imgcodecs.so.3.4.4
examples/retinaface: /usr/local/lib/libopencv_imgproc.so.3.4.4
examples/retinaface: /usr/local/lib/libopencv_core.so.3.4.4
examples/retinaface: examples/CMakeFiles/retinaface.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable retinaface"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/retinaface.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/retinaface.dir/build: examples/retinaface

.PHONY : examples/CMakeFiles/retinaface.dir/build

examples/CMakeFiles/retinaface.dir/requires: examples/CMakeFiles/retinaface.dir/retinaface.cpp.o.requires

.PHONY : examples/CMakeFiles/retinaface.dir/requires

examples/CMakeFiles/retinaface.dir/clean:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/retinaface.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/retinaface.dir/clean

examples/CMakeFiles/retinaface.dir/depend:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples/CMakeFiles/retinaface.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/retinaface.dir/depend

