cmake_minimum_required(VERSION 3.28)
project(std__array)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(std__array
        main.cpp
        std__array.hpp)
