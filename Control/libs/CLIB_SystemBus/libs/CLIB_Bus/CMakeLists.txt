cmake_minimum_required(VERSION 4.2.3)
project(slif_control_bus VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_control_bus STATIC
        ../../../CLIB_MutexQue/src/CLIB_MutexQue.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        src/CLIB_Bus.cpp
        src/CLIB_Bus_Framework.cpp
        src/CLIB_Bus_Framework_Global.cpp
        src/independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.cpp
        src/independent/CLIB_Bus_STRUCT_Bus.cpp
        src/CLIB_Bus_Framework_App.cpp
        src/CLIB_Bus_Framework_App_Data.cpp
        src/CLIB_Bus_Framework_App_Execute.cpp
)

target_include_directories(slif_control_bus PUBLIC
        "../../../libs/CLIB_MutexQue/include"
        "include"
)

target_link_libraries(slif_control_bus PRIVATE
        CLIB_MutexQue
)