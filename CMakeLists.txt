cmake_minimum_required(VERSION 3.26)
project(biblioteka C)

set(CMAKE_C_STANDARD 11)

add_executable(biblioteka main.c
        library.c
        cmake-build-debug/library.h
)
