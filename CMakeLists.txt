cmake_minimum_required(VERSION 3.5)
project(Practice)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES test.cpp Euler/no_19.cpp)
add_executable(Practice ${SOURCE_FILES})