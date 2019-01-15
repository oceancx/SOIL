cmake_minimum_required(VERSION 3.10)
project(project_test)

list(INSERT CMAKE_PREFIX_PATH 0 ../dist)
find_package(SOIL REQUIRED)
add_executable(project_test main.cpp)
target_link_libraries(project_test PRIVATE SOIL)
