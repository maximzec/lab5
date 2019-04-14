cmake_minimum_required(VERSION 3.13)
project(lab5)

set(CMAKE_CXX_STANDARD 14)
set(SOURCE_FILES main.cpp complex.cpp complex.h vector.h vector.cpp)

add_executable(lab5 ${SOURCE_FILES})