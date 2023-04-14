# CMake generated Testfile for 
# Source directory: /home/weijian/Downloads/opencv-master/opencv_contrib/modules/freetype
# Build directory: /home/weijian/Downloads/opencv-master/build/modules/freetype
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_freetype "/home/weijian/Downloads/opencv-master/build/bin/opencv_test_freetype" "--gtest_output=xml:opencv_test_freetype.xml")
set_tests_properties(opencv_test_freetype PROPERTIES  LABELS "Extra;opencv_freetype;Accuracy" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/accuracy")
