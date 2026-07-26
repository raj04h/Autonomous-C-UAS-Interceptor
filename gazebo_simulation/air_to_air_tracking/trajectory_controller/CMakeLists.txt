cmake_minimum_required(VERSION 3.10)

project(target_trajectory_controller)

# Dependencies
find_package(gz-transport12 REQUIRED)
find_package(gz-msgs9 REQUIRED)

# Executable
add_executable(
    target_trajectory
    target_trajectory.cpp
)

# Linking
target_link_libraries(
    target_trajectory
    PRIVATE
    gz-transport12::core
    gz-msgs9::gz-msgs9
)

# Compiler
target_compile_features(
    target_trajectory
    PRIVATE
    cxx_std_17
)