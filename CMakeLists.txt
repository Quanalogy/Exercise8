cmake_minimum_required(VERSION 3.5)
project(Exercise_8)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp DataStorage.cpp DataStorage.h)
add_executable(Exercise_8 ${SOURCE_FILES})