# CMake generated Testfile for 
# Source directory: /home/weijian/Downloads/opencv-master/opencv_contrib/modules/barcode
# Build directory: /home/weijian/Downloads/opencv-master/build/modules/barcode
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(opencv_test_barcode "/home/weijian/Downloads/opencv-master/build/bin/opencv_test_barcode" "--gtest_output=xml:opencv_test_barcode.xml")
set_tests_properties(opencv_test_barcode PROPERTIES  LABELS "Extra;opencv_barcode;Accuracy" WORKING_DIRECTORY "/home/weijian/Downloads/opencv-master/build/test-reports/accuracy")
