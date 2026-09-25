cmake_minimum_required(VERSION 4.2.3)
project(TESTBENCH VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(TESTBENCH main.cpp
        src/SLIF_Control.cpp
        src/SLIF_Framework.cpp
        src/SLIF_Framework_Global.cpp
        src/SLIF_Framework_Execute.cpp
)

target_link_libraries(TESTBENCH PRIVATE slif_control)