cmake_minimum_required(VERSION 4.2.3)
project(CLIB_LaunchQue VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_LaunchQue STATIC
        ../CLIB_MutexQue/src/CLIB_MutexQue.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_Global.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        ../CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        src/CLIB_LaunchQue.cpp
        src/CLIB_LaunchQue_Framework.cpp
        src/CLIB_LaunchQue_Framework_Global.cpp
        src/CLIB_LaunchQue_Framework_App.cpp
        src/CLIB_LaunchQue_Framework_App_Control.cpp
        src/CLIB_LaunchQue_Framework_Execute.cpp
)

target_include_directories(CLIB_LaunchQue PUBLIC
        "../CLIB_MutexQue/include"
        "../CLIB_ThreadsLog/include"
        "include"
)

target_link_libraries(CLIB_LaunchQue PUBLIC
        CLIB_MutexQue
        CLIB_threads_log
)