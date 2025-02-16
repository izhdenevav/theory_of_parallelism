cmake_minimum_required(VERSION 3.10)
project(task1cmake)

option(TYPE "Data type for calculations (float, double)" "double")

add_executable(main main.cpp)

target_compile_options(main PUBLIC -DTYPE=${TYPE})