cmake_minimum_required(VERSION 4.2.3)
project(slif_control_system_busses VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_control_system_busses STATIC
        ../CLIB_MutexQue/src/CLIB_MutexQue.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_Ticket.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_Bus.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute.cpp
        src/CLIB_SystemBus.cpp
        src/CLIB_SystemBus_Framework.cpp
        src/CLIB_SystemBus_Framework_Global.cpp
        src/CLIB_SystemBus_Framework_App.cpp
        src/CLIB_SystemBus_Framework_App_Execute.cpp
)

target_include_directories(slif_control_system_busses PUBLIC
        "../CLIB_MutexQue/include"
        "../CLIB_MutexQue/include/independent"
)

target_link_libraries(slif_control_system_busses PRIVATE
        CLIB_MutexQue
)