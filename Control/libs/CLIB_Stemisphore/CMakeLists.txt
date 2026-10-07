cmake_minimum_required(VERSION 4.2.3)
project(slif_control_system_busses VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_control_system_busses STATIC
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_Global.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_Ticket.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.cpp
        src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute.cpp
        src/CLIB_SystemBus_Framework.cpp
        src/CLIB_SystemBus_Framework_Global.cpp
        src/CLIB_SystemBus_Framework_App.cpp
        src/CLIB_SystemBus_Framework_App_Execute.cpp
)

target_include_directories(slif_control_system_busses PUBLIC
        "../CLIB_MutexQue/include/independent"
        "../CLIB_MutexQue/include"
        "../CLIB_ThreadsLog/include"
)

target_link_libraries(slif_control_system_busses PUBLIC
        CLIB_MutexQue
        CLIB_threads_log
)