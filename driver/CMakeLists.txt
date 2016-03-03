cmake_minimum_required(VERSION 3.3)
project(untitled)

include_directories("C\\users\\Erik Thompson\\Documents\\C++ Library\\reader.h")
link_directories("C\\users\\Erik Thompson\\Documents\\reader.h")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
target_link_libraries(untitled CPT_180_27_Assignment_3_Libraries)