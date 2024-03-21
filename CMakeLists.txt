cmake_minimum_required(VERSION 3.27)
project(OOP_lab_1_5)

set(CMAKE_CXX_STANDARD 17)

add_executable(OOP_lab_1_5 main.cpp
        Car.cpp
        Car.h
        Bus.cpp
        Bus.h
)

add_subdirectory(GoogleTest)