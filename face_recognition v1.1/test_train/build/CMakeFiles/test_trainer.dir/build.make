# CMAKE generated file: DO NOT EDIT!
# Generated by "Unix Makefiles" Generator, CMake Version 3.16

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
CMAKE_SOURCE_DIR = "/home/romy/RTEP/face_recognition v1.1/test_train"

# The top-level build directory on which CMake was run.
CMAKE_BINARY_DIR = "/home/romy/RTEP/face_recognition v1.1/test_train/build"

# Include any dependencies generated for this target.
include CMakeFiles/test_trainer.dir/depend.make

# Include the progress variables for this target.
include CMakeFiles/test_trainer.dir/progress.make

# Include the compile flags for this target's objects.
include CMakeFiles/test_trainer.dir/flags.make

CMakeFiles/test_trainer.dir/test_trainer.cpp.o: CMakeFiles/test_trainer.dir/flags.make
CMakeFiles/test_trainer.dir/test_trainer.cpp.o: ../test_trainer.cpp
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --progress-dir="/home/romy/RTEP/face_recognition v1.1/test_train/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_1) "Building CXX object CMakeFiles/test_trainer.dir/test_trainer.cpp.o"
	/usr/bin/c++  $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -o CMakeFiles/test_trainer.dir/test_trainer.cpp.o -c "/home/romy/RTEP/face_recognition v1.1/test_train/test_trainer.cpp"

CMakeFiles/test_trainer.dir/test_trainer.cpp.i: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Preprocessing CXX source to CMakeFiles/test_trainer.dir/test_trainer.cpp.i"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -E "/home/romy/RTEP/face_recognition v1.1/test_train/test_trainer.cpp" > CMakeFiles/test_trainer.dir/test_trainer.cpp.i

CMakeFiles/test_trainer.dir/test_trainer.cpp.s: cmake_force
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green "Compiling CXX source to assembly CMakeFiles/test_trainer.dir/test_trainer.cpp.s"
	/usr/bin/c++ $(CXX_DEFINES) $(CXX_INCLUDES) $(CXX_FLAGS) -S "/home/romy/RTEP/face_recognition v1.1/test_train/test_trainer.cpp" -o CMakeFiles/test_trainer.dir/test_trainer.cpp.s

# Object files for target test_trainer
test_trainer_OBJECTS = \
"CMakeFiles/test_trainer.dir/test_trainer.cpp.o"

# External object files for target test_trainer
test_trainer_EXTERNAL_OBJECTS =

test_trainer: CMakeFiles/test_trainer.dir/test_trainer.cpp.o
test_trainer: CMakeFiles/test_trainer.dir/build.make
test_trainer: /usr/local/lib/libopencv_dnn.so.3.4.4
test_trainer: /usr/local/lib/libopencv_face.so.3.4.4
test_trainer: /usr/local/lib/libopencv_ml.so.3.4.4
test_trainer: /usr/local/lib/libopencv_objdetect.so.3.4.4
test_trainer: /usr/local/lib/libopencv_shape.so.3.4.4
test_trainer: /usr/local/lib/libopencv_stitching.so.3.4.4
test_trainer: /usr/local/lib/libopencv_superres.so.3.4.4
test_trainer: /usr/local/lib/libopencv_videostab.so.3.4.4
test_trainer: /usr/local/lib/libgtest.a
test_trainer: /usr/local/lib/libopencv_calib3d.so.3.4.4
test_trainer: /usr/local/lib/libopencv_features2d.so.3.4.4
test_trainer: /usr/local/lib/libopencv_flann.so.3.4.4
test_trainer: /usr/local/lib/libopencv_highgui.so.3.4.4
test_trainer: /usr/local/lib/libopencv_photo.so.3.4.4
test_trainer: /usr/local/lib/libopencv_video.so.3.4.4
test_trainer: /usr/local/lib/libopencv_videoio.so.3.4.4
test_trainer: /usr/local/lib/libopencv_imgcodecs.so.3.4.4
test_trainer: /usr/local/lib/libopencv_imgproc.so.3.4.4
test_trainer: /usr/local/lib/libopencv_core.so.3.4.4
test_trainer: CMakeFiles/test_trainer.dir/link.txt
	@$(CMAKE_COMMAND) -E cmake_echo_color --switch=$(COLOR) --green --bold --progress-dir="/home/romy/RTEP/face_recognition v1.1/test_train/build/CMakeFiles" --progress-num=$(CMAKE_PROGRESS_2) "Linking CXX executable test_trainer"
	$(CMAKE_COMMAND) -E cmake_link_script CMakeFiles/test_trainer.dir/link.txt --verbose=$(VERBOSE)

# Rule to build all files generated by this target.
CMakeFiles/test_trainer.dir/build: test_trainer

.PHONY : CMakeFiles/test_trainer.dir/build

CMakeFiles/test_trainer.dir/clean:
	$(CMAKE_COMMAND) -P CMakeFiles/test_trainer.dir/cmake_clean.cmake
.PHONY : CMakeFiles/test_trainer.dir/clean

CMakeFiles/test_trainer.dir/depend:
	cd "/home/romy/RTEP/face_recognition v1.1/test_train/build" && $(CMAKE_COMMAND) -E cmake_depends "Unix Makefiles" "/home/romy/RTEP/face_recognition v1.1/test_train" "/home/romy/RTEP/face_recognition v1.1/test_train" "/home/romy/RTEP/face_recognition v1.1/test_train/build" "/home/romy/RTEP/face_recognition v1.1/test_train/build" "/home/romy/RTEP/face_recognition v1.1/test_train/build/CMakeFiles/test_trainer.dir/DependInfo.cmake" --color=$(COLOR)
.PHONY : CMakeFiles/test_trainer.dir/depend

