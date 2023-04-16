# CMake generated Testfile for 
# Source directory: /home/weijian/Downloads/opencv-master/modules/objdetect
# Build directory: /home/weijian/Downloads/opencv-master/build/modules/objdetect
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_objdetect "/home/weijian/Downloads/opencv-master/build/bin/opencv_test_objdetect" "--gtest_output=xml:opencv_test_objdetect.xml")
set_tests_properties(opencv_test_objdetect PROPERTIES  LABELS "Main;opencv_objdetect;Accuracy" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/accuracy")
add_test(opencv_perf_objdetect "/home/weijian/Downloads/opencv-master/build/bin/opencv_perf_objdetect" "--gtest_output=xml:opencv_perf_objdetect.xml")
set_tests_properties(opencv_perf_objdetect PROPERTIES  LABELS "Main;opencv_objdetect;Performance" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/performance")
add_test(opencv_sanity_objdetect "/home/weijian/Downloads/opencv-master/build/bin/opencv_perf_objdetect" "--gtest_output=xml:opencv_perf_objdetect.xml" "--perf_min_samples=1" "--perf_force_samples=1" "--perf_verify_sanity")
set_tests_properties(opencv_sanity_objdetect PROPERTIES  LABELS "Main;opencv_objdetect;Sanity" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/sanity")