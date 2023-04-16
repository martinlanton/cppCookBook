cmake_minimum_required(VERSION 3.24)
project(05_classes)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static")

add_executable(05_classes main.cpp Account.cpp Account.h Transaction.cpp Transaction.h)
