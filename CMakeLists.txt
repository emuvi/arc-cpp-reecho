cmake_minimum_required(VERSION 3.0.0)
project(reecho VERSION 0.1.0)

set(EXECUTABLE_OUTPUT_PATH "bin")
add_executable(reecho main.cpp)
set_property(TARGET reecho PROPERTY CXX_STANDARD 11)