cmake_minimum_required(VERSION 4.2.3)
project(TESTBENCH VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(${PROJECT_NAME} main.cpp
        src/CLIB_Control.cpp
        src/CLIB_Framework.cpp
        src/CLIB_Framework_Global.cpp
        src/CLIB_Framework_Execute.cpp
)

target_include_directories(${PROJECT_NAME} PUBLIC
        "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/io/include"
        "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/io/include"
        "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/io/include"
        "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/io/include"
)

target_include_directories(${PROJECT_NAME} PRIVATE
        "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_MutexQue/include"
        "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_ThreadsLog/include"
        "../CLIB_ZincNeuralChip/libs/Control/libs/CLIB_LaunchQue/include"
        "../CLIB_ZincNeuralChip/libs/CLIB_Stemisphore/include"
        "include"
)

target_link_libraries(${PROJECT_NAME} PUBLIC
        slif_control_mutex_que
        slif_control_sys_threads_log
        slif_control_launch_que
        slif_control
        slif_stemisphore
        slif_zinc_neural_chip
        OptimusPrime
)