cmake_minimum_required(VERSION 4.2.3)
project(slif_threads_log VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_threads_log STATIC
        ../SLIF_MutexQue/src/SLIF_MutexQue.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework_Global.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework_App.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework_App_Control.cpp
        src/CLIB_Bus.cpp
        src/CLIB_Bus_Framework.cpp
        src/CLIB_Bus_Framework_Global.cpp
        src/independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.cpp
        src/independent/CLIB_Bus_STRUCT_Bus.cpp
        src/CLIB_Bus_Framework_App.cpp
        src/CLIB_Bus_Framework_App_Algorithms.cpp
        src/CLIB_Bus_Framework_App_Execute.cpp
)

target_include_directories(slif_threads_log PUBLIC
        "../SLIF_MutexQue/include"
        "include"
)

target_link_libraries(slif_threads_log PRIVATE
        SLIF_MutexQue
)