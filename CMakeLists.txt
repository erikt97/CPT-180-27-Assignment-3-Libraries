cmake_minimum_required(VERSION 3.3)
project(CPT_180_27_Assignment_3_Libraries)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES config_reader.cpp reader.h)
add_library(CPT_180_27_Assignment_3_Libraries ${SOURCE_FILES})