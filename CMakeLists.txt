cmake_minimum_required(VERSION 3.0.0)
project(reecho VERSION 0.1.0)

set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
set(EXECUTABLE_OUTPUT_PATH "bin")

add_executable(reecho main.cpp)
set_target_properties(reecho PROPERTIES CXX_STANDARD 17)

add_executable(reargs main.cpp)
set_target_properties(reargs PROPERTIES CXX_STANDARD 17)

add_executable(reinputs main.cpp)
set_target_properties(reinputs PROPERTIES CXX_STANDARD 17)