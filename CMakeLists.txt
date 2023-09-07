cmake_minimum_required(VERSION 3.25)
project(C__PrimerPlus)

set(CMAKE_CXX_STANDARD 14)

add_executable(C__PrimerPlus
        C4/c41.cpp
        C4/c410.cpp
        C4/c42.cpp
        C4/c43.cpp
        C4/c44.cpp
        C4/c45.cpp
        C4/c46.cpp
        C4/c47.cpp
        C4/c48.cpp
        C4/c49.cpp
        C5/c51.cpp
        C5/c510.cpp
        C5/c52.cpp
        C5/c53.cpp
        C5/c54.cpp
        C5/c55.cpp
        C5/c56.cpp
        C5/c57.cpp
        C5/c58.cpp
        C5/c59.cpp C7/temp_source.cpp)

add_executable(temp_source C7/temp_source.cpp)