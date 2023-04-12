cmake_minimum_required(VERSION 3.24)
project(03_functions_and_headers)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(03_functions_and_headers main.cpp functions.cpp)
