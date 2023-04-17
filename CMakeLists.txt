cmake_minimum_required(VERSION 3.10)

project(icsc)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

find_package(OpenCV REQUIRED core imgproc highgui face)
include_directories(${OpenCV_INCLUDE_DIRS})

set(NCNN_LIBS /home/romy/RTEP/ICSC/ncnn/build/src/libncnn.a)
set(NCNN_INCLUDE_DIRS //home/romy/RTEP/ICSC/ncnn)
include_directories(${NCNN_INCLUDE_DIRS})
include_directories(${NCNN_INCLUDE_DIRS} /home/romy/RTEP/ICSC/ncnn/src)
include_directories(${NCNN_INCLUDE_DIRS} /home/romy/RTEP/ICSC/ncnn/build //home/romy/RTEP/ICSC/ncnn/build/src)


include_directories(./yolov5_lite_s/)

set(PROJECT_SOURCES
        main.cpp
        widget.h
        widget.cpp
        widget.ui

        yolov5_lite_s/yolov5_lite_s.cpp
        yolov5_lite_s/yolov5_lite_s.h
)



find_package(OpenMP)
if (OPENMP_FOUND)
    message("OpenMP found")
    set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} ${OpenMP_C_FLAGS}")
    set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} ${OpenMP_CXX_FLAGS}")
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} ${OpenMP_EXE_LINKER_FLAGS}")
endif()





FILE(GLOB SRC_FILES "./*.cpp")
FILE(GLOB HEAD_FILES "./*.h")
FILE(GLOB UI_FILES "./*.ui")
set(RESOURCES pic.qrc)
qt5_wrap_ui(WRAP_FILES ${UI_FILES})


# Define target properties for Android with Qt 6 as:
#    set_property(TARGET icsc APPEND PROPERTY QT_ANDROID_PACKAGE_SOURCE_DIR
#                 ${CMAKE_CURRENT_SOURCE_DIR}/android)
# For more information, see https://doc.qt.io/qt-6/qt-add-executable.html#target-creation

add_executable(icsc ${PROJECT_SOURCES})

# target_link_libraries(icsc PRIVATE Qt${QT_VERSION_MAJOR}::Widgets ${OpenCV_LIBS} ${NCNN_LIBS} pthread)

target_link_libraries(icsc Qt5::Widgets Qt5::Core Qt5::Gui ${OpenCV_LIBS} ${NCNN_LIBS} pthread)


install(TARGETS icsc
    BUNDLE DESTINATION .
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})

if(QT_VERSION_MAJOR EQUAL 6)
    qt_finalize_executable(icsc)
endif()
# unit test

