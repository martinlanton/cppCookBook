cmake_minimum_required(VERSION 3.24)
project(01_variables_and_types)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_EXE_LINKER_FLAGS "-static") # We need to add the -static flag for the
# compiler to add a static version of imported headers and files instead of
# using the ones installed (which might not be installed)

add_executable(01_variables_and_types main.cpp)
