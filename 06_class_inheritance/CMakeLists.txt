cmake_minimum_required(VERSION 3.25)
project(06_class_inheritance)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(06_class_inheritance main.cpp Person.cpp Person.h Tweeter.cpp Tweeter.h)
