cmake_minimum_required(VERSION 4.2.3)
project(slif_control VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/CLIB_MutexQue)
add_subdirectory(libs/CLIB_ThreadsLog)
add_subdirectory(libs/CLIB_LaunchQue)

add_library(slif_control STATIC
        libs/CLIB_MutexQue/src/CLIB_MutexQue.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_Global.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Global.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App_Control.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Execute.cpp
        #libs/CLIB_BusSystem/libs/CLIB_Bus/src/CLIB_Bus.h
        #libs/CLIB_BusSystem/libs/CLIB_Bus/src/CLIB_Bus_Framework.h
        #libs/CLIB_BusSystem/libs/CLIB_Bus/src/CLIB_Bus_Framework_Global.h
        #libs/CLIB_BusSystem/libs/CLIB_Bus/src/CLIB_Bus_Framework_App.h
        #libs/CLIB_BusSystem/libs/CLIB_Bus/src/CLIB_Bus_Framework_App_Data.h
        #libs/CLIB_BusSystem/libs/CLIB_Bus/src/CLIB_Bus_Framework_App_Execute.h
)

target_include_directories(slif_control PUBLIC
        "libs/CLIB_MutexQue/include"
        "libs/CLIB_ThreadsLog/include"
        "libs/CLIB_LaunchQue/include"
)

target_link_libraries(slif_control PUBLIC
        CLIB_MutexQue
        CLIB_threads_log
        CLIB_LaunchQue
)

