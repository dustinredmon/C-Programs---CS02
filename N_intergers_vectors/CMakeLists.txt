cmake_minimum_required(VERSION 3.5)
project(N_intergers_vectors)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp)
add_executable(N_intergers_vectors ${SOURCE_FILES})