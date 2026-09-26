cmake_minimum_required(VERSION 4.2.3)
project(OptimusPrime VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(OptimusPrime STATIC SLIF_OptimusPrime.cpp)
