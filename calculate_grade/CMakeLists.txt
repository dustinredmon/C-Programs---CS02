cmake_minimum_required(VERSION 3.5)
project(calculate_grade)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(calculate_grade ${SOURCE_FILES})