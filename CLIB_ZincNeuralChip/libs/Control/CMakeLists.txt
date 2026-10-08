cmake_minimum_required(VERSION 4.2.3)
project(slif_control VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_subdirectory(libs/CLIB_MutexQue)
add_subdirectory(libs/CLIB_ThreadsLog)
add_subdirectory(libs/CLIB_LaunchQue)

add_library(${PROJECT_NAME} STATIC
        libs/CLIB_MutexQue/io/src/CLIB_MutexQue.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        libs/CLIB_ThreadsLog/io/src/CLIB_ThreadLogs.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_Global.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        libs/CLIB_LaunchQue/io/src/CLIB_LaunchQue.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Global.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App_Control.cpp
        libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Execute.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_MutexQue/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_ThreadsLogQue/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LaunchQue/io/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_MutexQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_ThreadsLogQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LaunchQue/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        slif_control_mutex_que
        slif_control_sys_threads_log
        slif_control_launch_que
)