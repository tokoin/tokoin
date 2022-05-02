cmake_minimum_required(VERSION 3.2)
project(tokoin)

set(CMAKE_CXX_STANDARD 14)

file(GLOB boost_lib
    "*.h"
    "*.hpp"
    "*.c"
    "*.cpp"
)

add_executable(tokoin src/main.cpp src/sha512.cpp ${boost_lib})
