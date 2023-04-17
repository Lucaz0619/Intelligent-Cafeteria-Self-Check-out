cmake_minimum_required(VERSION 3.5)

# 设置项目名称和版本号
project(test_trainer)

# 设置C++标准
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# 寻找OpenCV库
find_package(OpenCV REQUIRED)

# 添加gtest库的路径
set(GTEST_ROOT /usr/src/gtest)
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# 添加测试
add_executable(test_trainer test_trainer.cpp)
target_link_libraries(test_trainer ${OpenCV_LIBS} ${GTEST_LIBRARIES} pthread)

