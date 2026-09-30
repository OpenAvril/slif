cmake_minimum_required(VERSION 4.2.3)
project(slif_control_system_buses VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_control_system_buses STATIC
        ../../../CLIB_MutexQue/src/CLIB_MutexQue.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../../../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        libs/CLIB_Bus/src/CLIB_Bus.cpp
        libs/CLIB_Bus/src/CLIB_Bus_Framework.cpp
        libs/CLIB_Bus/src/CLIB_Bus_Framework_Global.cpp
        libs/CLIB_Bus/src/independent/CLIB_Bus_STRUCT_Bus_CLASS_Ticket.cpp
        libs/CLIB_Bus/src/independent/CLIB_Bus_STRUCT_Bus.cpp
        libs/CLIB_Bus/src/CLIB_Bus_Framework_App.cpp
        libs/CLIB_Bus/src/CLIB_Bus_Framework_App_Data.cpp
        libs/CLIB_Bus/src/CLIB_Bus_Framework_App_Execute.cpp
)

target_include_directories(slif_control_system_buses PUBLIC
        "../../../CLIB_MutexQue/include"
        "libs/CLIB_Bus/include"
)

target_link_libraries(slif_control_system_buses PRIVATE
        CLIB_MutexQue
        slif_control_bus
)