cmake_minimum_required(VERSION 4.2.3)
project(SiliconLife VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(CLIB_ZincNeuralChip)
add_subdirectory(Optimus)
add_subdirectory(TESTBENCH)