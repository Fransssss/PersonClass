cmake_minimum_required(VERSION 3.21)
project(PersonClass)

set(CMAKE_CXX_STANDARD 14)

add_executable(PersonClass
        main.cpp Person.cpp Person.h)
