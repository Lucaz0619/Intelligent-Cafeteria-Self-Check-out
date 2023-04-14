# CMake generated Testfile for 
# Source directory: /home/weijian/Downloads/opencv-master/opencv_contrib/modules/aruco
# Build directory: /home/weijian/Downloads/opencv-master/build/modules/aruco
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_aruco "/home/weijian/Downloads/opencv-master/build/bin/opencv_test_aruco" "--gtest_output=xml:opencv_test_aruco.xml")
set_tests_properties(opencv_test_aruco PROPERTIES  LABELS "Extra;opencv_aruco;Accuracy" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/accuracy")
add_test(opencv_perf_aruco "/home/weijian/Downloads/opencv-master/build/bin/opencv_perf_aruco" "--gtest_output=xml:opencv_perf_aruco.xml")
set_tests_properties(opencv_perf_aruco PROPERTIES  LABELS "Extra;opencv_aruco;Performance" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/performance")
add_test(opencv_sanity_aruco "/home/weijian/Downloads/opencv-master/build/bin/opencv_perf_aruco" "--gtest_output=xml:opencv_perf_aruco.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_aruco PROPERTIES  LABELS "Extra;opencv_aruco;Sanity" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/sanity")
