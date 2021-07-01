cmake_minimum_required(VERSION 3.5)
project(emporer_grains)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(emporer_grains ${SOURCE_FILES})