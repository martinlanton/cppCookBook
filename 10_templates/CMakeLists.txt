cmake_minimum_required(VERSION 3.25)
project(10_templates)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(10_templates main.cpp Person.cpp Person.h Accum.h)
