cmake_minimum_required(VERSION 3.0)
project(PIA_trideni)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

add_executable(trideni main.cpp trideni.cpp stopwatch.cpp)