cmake_minimum_required(VERSION 3.15)
project(Builder)

set(CMAKE_CXX_STANDARD 20)

add_executable(Builder main.cpp src/carBuilder.cpp src/carOrder.cpp)