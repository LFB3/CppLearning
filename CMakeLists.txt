cmake_minimum_required(VERSION 3.30)
project(CppLearning)

set(CMAKE_CXX_STANDARD 20)

add_executable(CppLearning randomFile/main.cpp
        vectorTesting/main.cpp
        vectorTesting/main.h
        simpleCalculator/main.cpp
        simpleCalculator/main.h)
