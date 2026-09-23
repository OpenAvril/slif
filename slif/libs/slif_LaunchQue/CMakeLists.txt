cmake_minimum_required(VERSION 4.2.3)
project(slif_LaunchQue VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_LaunchQue STATIC
        ../slif_MutexQue/src/slif_MutexQue.cpp
        ../slif_MutexQue/src/slif_MutexQue_Framework.cpp
        ../slif_MutexQue/src/slif_MutexQue_Framework_Global.cpp
        ../slif_MutexQue/src/slif_MutexQue_Framework_App.cpp
        ../slif_MutexQue/src/slif_MutexQue_Framework_App_Control.cpp
        src/slif_LaunchQue.cpp
        src/slif_LaunchQue_Framework.cpp
        src/slif_LaunchQue_Framework_Global.cpp
        src/slif_LaunchQue_Framework_App.cpp
        src/slif_LaunchQue_Framework_App_Control.cpp
        src/slif_LaunchQue_Framework_Execute.cpp
)

target_include_directories(slif_LaunchQue PUBLIC
        "include"
        "../slif_Mutex/include"
)

target_link_libraries(slif_LaunchQue PRIVATE
        slif_Mutex
)