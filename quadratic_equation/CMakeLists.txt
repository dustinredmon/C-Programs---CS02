cmake_minimum_required(VERSION 3.5)
project(quadratic_equation)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(quadratic_equation ${SOURCE_FILES})