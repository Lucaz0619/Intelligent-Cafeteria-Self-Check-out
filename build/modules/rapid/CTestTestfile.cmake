# CMake generated Testfile for 
# Source directory: /home/weijian/Downloads/opencv-master/opencv_contrib/modules/rapid
# Build directory: /home/weijian/Downloads/opencv-master/build/modules/rapid
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_rapid "/home/weijian/Downloads/opencv-master/build/bin/opencv_test_rapid" "--gtest_output=xml:opencv_test_rapid.xml")
set_tests_properties(opencv_test_rapid PROPERTIES  LABELS "Extra;opencv_rapid;Accuracy" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/accuracy")
