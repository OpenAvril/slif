cmake_minimum_required(VERSION 4.2.3)
project(slif_control VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/CLIB_MutexQue)
add_subdirectory(libs/CLIB_ThreadsLog)
add_subdirectory(libs/CLIB_LaunchQue)
add_subdirectory(libs/CLIB_SystemBus/libs/CLIB_Bus)
add_subdirectory(libs/CLIB_SystemBus)

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
        libs/CLIB_SystemBus/libs/CLIB_Bus/src/CLIB_Bus.cpp
        libs/CLIB_SystemBus/libs/CLIB_Bus/src/CLIB_Bus_Framework.cpp
        libs/CLIB_SystemBus/libs/CLIB_Bus/src/CLIB_Bus_Framework_Global.cpp
        libs/CLIB_SystemBus/libs/CLIB_Bus/src/CLIB_Bus_Framework_App.cpp
        libs/CLIB_SystemBus/libs/CLIB_Bus/src/CLIB_Bus_Framework_App_Data.cpp
        libs/CLIB_SystemBus/libs/CLIB_Bus/src/CLIB_Bus_Framework_App_Execute.cpp
        libs/CLIB_SystemBus/src/CLIB_SystemBus.cpp
        libs/CLIB_SystemBus/src/CLIB_SystemBus_Framework.cpp
        libs/CLIB_SystemBus/src/CLIB_SystemBus_Framework_Global.cpp
        libs/CLIB_SystemBus/src/CLIB_SystemBus_Framework_App.cpp
        libs/CLIB_SystemBus/src/CLIB_SystemBus_Framework_App_Execute.cpp
)

target_include_directories(slif_control PUBLIC
        "libs/CLIB_MutexQue/include"
        "libs/CLIB_ThreadsLog/include"
        "libs/CLIB_LaunchQue/include"
        "libs/CLIB_SystemBus/libs/CLIB_Bus/include"
        "libs/CLIB_SystemBus/include"
)

target_link_libraries(slif_control PRIVATE
        CLIB_MutexQue
        CLIB_threads_log
        CLIB_LaunchQue
        slif_control_system_busses
)

