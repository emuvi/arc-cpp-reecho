cmake_minimum_required(VERSION 3.0.0)
project(reecho VERSION 0.1.0)

set(EXECUTABLE_OUTPUT_PATH "bin")

add_executable(reecho main.cpp)
set_property(TARGET reecho PROPERTY CXX_STANDARD 11)

add_executable(reargs main.cpp)
set_property(TARGET reargs PROPERTY CXX_STANDARD 11)

add_executable(reinputs main.cpp)
set_property(TARGET reinputs PROPERTY CXX_STANDARD 11)