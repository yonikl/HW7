cmake_minimum_required(VERSION 3.22)
project(HW7)

set(CMAKE_CXX_STANDARD 14)

add_executable(HW7 main.cpp Shape.h Point.cpp Point.h Shape.cpp Circle.cpp Circle.h Triangle.cpp Triangle.h Rectangle.cpp Rectangle.h)
