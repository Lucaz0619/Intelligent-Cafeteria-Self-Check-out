cmake_minimum_required(VERSION 3.10)

project(ui_test)

set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTORCC ON)

find_package(Qt5 COMPONENTS Core Widgets REQUIRED)

include_directories(${CMAKE_CURRENT_SOURCE_DIR} ${CMAKE_CURRENT_BINARY_DIR})

FILE(GLOB SRC_FILES "./*.cpp")
FILE(GLOB HEAD_FILES "./*.h")
FILE(GLOB UI_FILES "./*.ui")

set(RESOURCES pic.qrc)

qt5_wrap_ui(WRAP_FILES ${UI_FILES})

find_package(OpenCV REQUIRED)

include_directories(${OpenCV_INCLUDE_DIRS})

add_executable(${PROJECT_NAME} ${SRC_FILES} ${HEAD_FILES} ${RESOURCES} ${WRAP_FILES})

target_link_libraries(${PROJECT_NAME} Qt5::Widgets Qt5::Core Qt5::Gui ${OpenCV_LIBS})
