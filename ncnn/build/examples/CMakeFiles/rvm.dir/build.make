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
include examples/CMakeFiles/rvm.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/rvm.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/rvm.dir/flags.make

examples/CMakeFiles/rvm.dir/rvm.cpp.o: examples/CMakeFiles/rvm.dir/flags.make
examples/CMakeFiles/rvm.dir/rvm.cpp.o: ../examples/rvm.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/rvm.dir/rvm.cpp.o"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/rvm.dir/rvm.cpp.o -c /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/rvm.cpp

examples/CMakeFiles/rvm.dir/rvm.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/rvm.dir/rvm.cpp.i"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/rvm.cpp > CMakeFiles/rvm.dir/rvm.cpp.i

examples/CMakeFiles/rvm.dir/rvm.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/rvm.dir/rvm.cpp.s"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/rvm.cpp -o CMakeFiles/rvm.dir/rvm.cpp.s

examples/CMakeFiles/rvm.dir/rvm.cpp.o.requires:

.PHONY : examples/CMakeFiles/rvm.dir/rvm.cpp.o.requires

examples/CMakeFiles/rvm.dir/rvm.cpp.o.provides: examples/CMakeFiles/rvm.dir/rvm.cpp.o.requires
	$(MAKE) -f examples/CMakeFiles/rvm.dir/build.make examples/CMakeFiles/rvm.dir/rvm.cpp.o.provides.build
.PHONY : examples/CMakeFiles/rvm.dir/rvm.cpp.o.provides

examples/CMakeFiles/rvm.dir/rvm.cpp.o.provides.build: examples/CMakeFiles/rvm.dir/rvm.cpp.o


# Object files for target rvm
rvm_OBJECTS = \
"CMakeFiles/rvm.dir/rvm.cpp.o"

# External object files for target rvm
rvm_EXTERNAL_OBJECTS =

examples/rvm: examples/CMakeFiles/rvm.dir/rvm.cpp.o
examples/rvm: examples/CMakeFiles/rvm.dir/build.make
examples/rvm: src/libncnn.a
examples/rvm: /usr/local/lib/libopencv_highgui.so.3.4.4
examples/rvm: /usr/local/lib/libopencv_videoio.so.3.4.4
examples/rvm: /usr/lib/gcc/x86_64-linux-gnu/7/libgomp.so
examples/rvm: /usr/lib/x86_64-linux-gnu/libpthread.so
examples/rvm: /usr/local/lib/libopencv_imgcodecs.so.3.4.4
examples/rvm: /usr/local/lib/libopencv_imgproc.so.3.4.4
examples/rvm: /usr/local/lib/libopencv_core.so.3.4.4
examples/rvm: examples/CMakeFiles/rvm.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable rvm"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/rvm.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/rvm.dir/build: examples/rvm

.PHONY : examples/CMakeFiles/rvm.dir/build

examples/CMakeFiles/rvm.dir/requires: examples/CMakeFiles/rvm.dir/rvm.cpp.o.requires

.PHONY : examples/CMakeFiles/rvm.dir/requires

examples/CMakeFiles/rvm.dir/clean:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/rvm.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/rvm.dir/clean

examples/CMakeFiles/rvm.dir/depend:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples/CMakeFiles/rvm.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/rvm.dir/depend

