cmake_minimum_required(VERSION 3.10)

project(camera_recorder)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Gazebo Garden
find_package(gz-transport12 REQUIRED)
find_package(gz-msgs9 REQUIRED)

# OpenCV
find_package(OpenCV REQUIRED)

add_executable(
    camera_recorder
    camera_recorder.cpp
)

target_include_directories(
    camera_recorder
    PRIVATE
    ${OpenCV_INCLUDE_DIRS}
)

target_link_libraries(
    camera_recorder
    PRIVATE
    gz-transport12::core
    gz-msgs9::core
    ${OpenCV_LIBS}
)