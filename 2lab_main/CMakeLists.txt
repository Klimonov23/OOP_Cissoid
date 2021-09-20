cmake_minimum_required(VERSION 3.17)
project(2lab_main)

set(CMAKE_CXX_STANDARD 20)


add_executable(2lab_main main.cpp)

include_directories(../2lab_lib)
target_link_libraries(2lab_main 2lab_lib)