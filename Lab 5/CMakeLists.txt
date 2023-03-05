cmake_minimum_required(VERSION 3.24)
project(Lab_5)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Lab_5
        point.cpp
        point.h shape.h shape.cpp square.h square.cpp rectangle.h rectangle.cpp graphicsWorld.h graphicsWorld.cpp lab5exeA.cpp circle.h circle.cpp curvecut.h curvecut.cpp)
