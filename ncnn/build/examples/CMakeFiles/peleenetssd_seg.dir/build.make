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
CMAKE_SOURCE_DIR = /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build

# Include any dependencies generated for this target.
include examples/CMakeFiles/peleenetssd_seg.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/peleenetssd_seg.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/peleenetssd_seg.dir/flags.make

examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o: examples/CMakeFiles/peleenetssd_seg.dir/flags.make
examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o: ../examples/peleenetssd_seg.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o -c /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/peleenetssd_seg.cpp

examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.i"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/peleenetssd_seg.cpp > CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.i

examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.s"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/peleenetssd_seg.cpp -o CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.s

examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.requires:

.PHONY : examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.requires

examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.provides: examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.requires
	$(MAKE) -f examples/CMakeFiles/peleenetssd_seg.dir/build.make examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.provides.build
.PHONY : examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.provides

examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.provides.build: examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o


# Object files for target peleenetssd_seg
peleenetssd_seg_OBJECTS = \
"CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o"

# External object files for target peleenetssd_seg
peleenetssd_seg_EXTERNAL_OBJECTS =

examples/peleenetssd_seg: examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o
examples/peleenetssd_seg: examples/CMakeFiles/peleenetssd_seg.dir/build.make
examples/peleenetssd_seg: src/libncnn.a
examples/peleenetssd_seg: /usr/local/lib/libopencv_highgui.so.4.7.0
examples/peleenetssd_seg: /usr/local/lib/libopencv_videoio.so.4.7.0
examples/peleenetssd_seg: /usr/lib/gcc/aarch64-linux-gnu/7/libgomp.so
examples/peleenetssd_seg: /usr/lib/aarch64-linux-gnu/libpthread.so
examples/peleenetssd_seg: /usr/local/lib/libopencv_imgcodecs.so.4.7.0
examples/peleenetssd_seg: /usr/local/lib/libopencv_imgproc.so.4.7.0
examples/peleenetssd_seg: /usr/local/lib/libopencv_core.so.4.7.0
examples/peleenetssd_seg: examples/CMakeFiles/peleenetssd_seg.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable peleenetssd_seg"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/peleenetssd_seg.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/peleenetssd_seg.dir/build: examples/peleenetssd_seg

.PHONY : examples/CMakeFiles/peleenetssd_seg.dir/build

examples/CMakeFiles/peleenetssd_seg.dir/requires: examples/CMakeFiles/peleenetssd_seg.dir/peleenetssd_seg.cpp.o.requires

.PHONY : examples/CMakeFiles/peleenetssd_seg.dir/requires

examples/CMakeFiles/peleenetssd_seg.dir/clean:
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/peleenetssd_seg.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/peleenetssd_seg.dir/clean

examples/CMakeFiles/peleenetssd_seg.dir/depend:
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples/CMakeFiles/peleenetssd_seg.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/peleenetssd_seg.dir/depend

