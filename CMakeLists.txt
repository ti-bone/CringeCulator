cmake_minimum_required(VERSION 3.18.4)
project(CringeCulator)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

file(GLOB Maths "src/Maths/*.h"
                "src/Maths/*.cpp")

add_executable(CringeCulator src/main.cpp ${Maths})