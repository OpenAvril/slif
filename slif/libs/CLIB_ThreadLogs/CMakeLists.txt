cmake_minimum_required(VERSION 4.2.3)
project(CLIB_ThreadLogs VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(CLIB_ThreadLogs STATIC
        src/CLIB_ThreadLogs.cpp
        src/CLIB_ThreadLogs_Framework.cpp
        src/CLIB_ThreadLogs_Framework_Global.cpp
        src/CLIB_ThreadLogs_Framework_App.cpp
        src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        libs/CLIB_WriteQueForThreadsAt_LoggingThread/src/LaunchQue_ClusterAccess.cpp
        libs/CLIB_WriteQueForThreadsAt_LoggingThread/src/LaunchQue_ClusterAccess_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_LoggingThread/src/LaunchQue_ClusterAccess_Framework_Global.cpp
        libs/CLIB_WriteQueForThreadsAt_LoggingThread/src/LaunchQue_ClusterAccess_Framework_App.cpp
        libs/CLIB_WriteQueForThreadsAt_LoggingThread/src/LaunchQue_ClusterAccess_Framework_App_Control.cpp
)

target_include_directories(CLIB_ThreadLogs PUBLIC
        "include"
        "${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_WriteQueForThreadsAt_LoggingThread/include"
)

target_link_libraries(CLIB_ThreadLogs PRIVATE
        CLIB_WriteQueForThreadsAt_LaunchQue_MutexQue
)