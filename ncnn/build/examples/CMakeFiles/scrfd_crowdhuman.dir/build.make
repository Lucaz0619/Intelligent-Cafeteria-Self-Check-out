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
include examples/CMakeFiles/scrfd_crowdhuman.dir/depend.make

# Include the progress variables for this target.
include examples/CMakeFiles/scrfd_crowdhuman.dir/progress.make

# Include the compile flags for this target's objects.
include examples/CMakeFiles/scrfd_crowdhuman.dir/flags.make

examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o: examples/CMakeFiles/scrfd_crowdhuman.dir/flags.make
examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o: ../examples/scrfd_crowdhuman.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir=/home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o -c /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/scrfd_crowdhuman.cpp

examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.i"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/scrfd_crowdhuman.cpp > CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.i

examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.s"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && /usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples/scrfd_crowdhuman.cpp -o CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.s

examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.requires:

.PHONY : examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.requires

examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.provides: examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.requires
	$(MAKE) -f examples/CMakeFiles/scrfd_crowdhuman.dir/build.make examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.provides.build
.PHONY : examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.provides

examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.provides.build: examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o


# Object files for target scrfd_crowdhuman
scrfd_crowdhuman_OBJECTS = \
"CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o"

# External object files for target scrfd_crowdhuman
scrfd_crowdhuman_EXTERNAL_OBJECTS =

examples/scrfd_crowdhuman: examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o
examples/scrfd_crowdhuman: examples/CMakeFiles/scrfd_crowdhuman.dir/build.make
examples/scrfd_crowdhuman: src/libncnn.a
examples/scrfd_crowdhuman: /usr/local/lib/libopencv_highgui.so.4.7.0
examples/scrfd_crowdhuman: /usr/local/lib/libopencv_videoio.so.4.7.0
examples/scrfd_crowdhuman: /usr/lib/gcc/aarch64-linux-gnu/7/libgomp.so
examples/scrfd_crowdhuman: /usr/lib/aarch64-linux-gnu/libpthread.so
examples/scrfd_crowdhuman: /usr/local/lib/libopencv_imgcodecs.so.4.7.0
examples/scrfd_crowdhuman: /usr/local/lib/libopencv_imgproc.so.4.7.0
examples/scrfd_crowdhuman: /usr/local/lib/libopencv_core.so.4.7.0
examples/scrfd_crowdhuman: examples/CMakeFiles/scrfd_crowdhuman.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir=/home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/CMakeFiles --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable scrfd_crowdhuman"
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/scrfd_crowdhuman.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
examples/CMakeFiles/scrfd_crowdhuman.dir/build: examples/scrfd_crowdhuman

.PHONY : examples/CMakeFiles/scrfd_crowdhuman.dir/build

examples/CMakeFiles/scrfd_crowdhuman.dir/requires: examples/CMakeFiles/scrfd_crowdhuman.dir/scrfd_crowdhuman.cpp.o.requires

.PHONY : examples/CMakeFiles/scrfd_crowdhuman.dir/requires

examples/CMakeFiles/scrfd_crowdhuman.dir/clean:
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples && $(CMAKE_COMMAND) -P CMakeFiles/scrfd_crowdhuman.dir/cmake_clean.cmake
.PHONY : examples/CMakeFiles/scrfd_crowdhuman.dir/clean

examples/CMakeFiles/scrfd_crowdhuman.dir/depend:
	cd /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/examples /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples /home/weijian/Intelligent-Cafeteria-Self-Check-out/ncnn/build/examples/CMakeFiles/scrfd_crowdhuman.dir/DependInfo.cmake --color=$(COLOR)
.PHONY : examples/CMakeFiles/scrfd_crowdhuman.dir/depend

