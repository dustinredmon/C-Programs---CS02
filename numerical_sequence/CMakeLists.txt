cmake_minimum_required(VERSION 3.5)
project(numerical_sequence)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(numerical_sequence ${SOURCE_FILES})