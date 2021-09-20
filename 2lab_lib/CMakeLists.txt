cmake_minimum_required(VERSION 3.17)
project(2lab_lib)

set(CMAKE_CXX_STANDARD 20)

add_library(2lab_lib Cissoid.cpp Cissoid.h UI.cpp UI.h)
