cmake_minimum_required(VERSION 3.24)
project(01_variables_and_types)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(01_variables_and_types main.cpp)
