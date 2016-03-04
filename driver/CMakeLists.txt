cmake_minimum_required(VERSION 3.3)
project(driver)

include_directories("C:/users/Erik Thompson/Documents/C++ Library")
link_directories("C:/users/Erik Thompson/Documents/C++ Library")

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(driver ${SOURCE_FILES})
target_link_libraries(driver CPT_180_27_Assignment_3_Libraries)