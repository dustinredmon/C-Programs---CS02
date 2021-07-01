cmake_minimum_required(VERSION 3.5)
project(bulls_cows)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(bulls_cows ${SOURCE_FILES})