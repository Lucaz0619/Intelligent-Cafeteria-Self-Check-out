# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.18

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
CMAKE_SOURCE_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/fasterrcnn.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/fasterrcnn.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/fasterrcnn.dir/flags.make

examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o: examples/CMakeFiles/fasterrcnn.dir/flags.make
examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o: ../examples/fasterrcnn.cpp
<<<<<<< HEAD
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o -c /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/fasterrcnn.cpp
=======
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o -c /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/fasterrcnn.cpp
>>>>>>> 45ec0ff38778d74d9c0052c0da921043f25f5677

examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.i"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/fasterrcnn.cpp > CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.i

examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.s"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/fasterrcnn.cpp -o CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.s

# Object files for target fasterrcnn
fasterrcnn_OBJECTS = \
"CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o"

# External object files for target fasterrcnn
fasterrcnn_EXTERNAL_OBJECTS =

examples/fasterrcnn: examples/CMakeFiles/fasterrcnn.dir/fasterrcnn.cpp.o
examples/fasterrcnn: examples/CMakeFiles/fasterrcnn.dir/build.make
examples/fasterrcnn: src/libncnn.a
<<<<<<< HEAD
examples/fasterrcnn: /usr/local/lib/aarch64-linux-gnu/libopencv_highgui.so.4.7.0
examples/fasterrcnn: /usr/local/lib/aarch64-linux-gnu/libopencv_videoio.so.4.7.0
examples/fasterrcnn: /usr/lib/gcc/aarch64-linux-gnu/10/libgomp.so
examples/fasterrcnn: /usr/lib/aarch64-linux-gnu/libpthread.so
examples/fasterrcnn: /usr/local/lib/aarch64-linux-gnu/libopencv_imgcodecs.so.4.7.0
examples/fasterrcnn: /usr/local/lib/aarch64-linux-gnu/libopencv_imgproc.so.4.7.0
examples/fasterrcnn: /usr/local/lib/aarch64-linux-gnu/libopencv_core.so.4.7.0
=======
examples/fasterrcnn: /usr/local/lib/libopencv_highgui.so.3.4.4
examples/fasterrcnn: /usr/local/lib/libopencv_videoio.so.3.4.4
examples/fasterrcnn: /usr/lib/gcc/x86_64-linux-gnu/7/libgomp.so
examples/fasterrcnn: /usr/lib/x86_64-linux-gnu/libpthread.so
examples/fasterrcnn: /usr/local/lib/libopencv_imgcodecs.so.3.4.4
examples/fasterrcnn: /usr/local/lib/libopencv_imgproc.so.3.4.4
examples/fasterrcnn: /usr/local/lib/libopencv_core.so.3.4.4
>>>>>>> 45ec0ff38778d74d9c0052c0da921043f25f5677
examples/fasterrcnn: examples/CMakeFiles/fasterrcnn.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable fasterrcnn"
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/fasterrcnn.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/fasterrcnn.dir/build: examples/fasterrcnn

.PHONY : examples/CMakeFiles/fasterrcnn.dir/build

examples/CMakeFiles/fasterrcnn.dir/clean:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/fasterrcnn.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/fasterrcnn.dir/clean

examples/CMakeFiles/fasterrcnn.dir/depend:
	cd /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples /home/weijian/Deep_Learning_ws/rtep_projects/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples/CMakeFiles/fasterrcnn.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/fasterrcnn.dir/depend

