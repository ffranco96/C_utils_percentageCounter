cmake_minimum_required(VERSION 3.24)
project(percentageCounter C)

set(CMAKE_C_STANDARD 99)

add_executable(percentageCounter main.c percentageCounter.c percentageCounter.h)
