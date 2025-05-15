cmake_minimum_required(VERSION 3.31)
project(Tinyx86 C)

set(CMAKE_C_STANDARD 17)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/build)

add_executable(Tinyx86 main.c)

