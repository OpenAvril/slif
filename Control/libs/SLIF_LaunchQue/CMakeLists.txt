cmake_minimum_required(VERSION 4.2.3)
project(SLIF_LaunchQue VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(SLIF_LaunchQue STATIC
        ../SLIF_MutexQue/src/SLIF_MutexQue.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework_Global.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework_App.cpp
        ../SLIF_MutexQue/src/SLIF_MutexQue_Framework_App_Control.cpp
        src/SLIF_LaunchQue.cpp
        src/SLIF_LaunchQue_Framework.cpp
        src/SLIF_LaunchQue_Framework_Global.cpp
        src/SLIF_LaunchQue_Framework_App.cpp
        src/SLIF_LaunchQue_Framework_App_Control.cpp
        src/SLIF_LaunchQue_Framework_Execute.cpp
)

target_include_directories(SLIF_LaunchQue PUBLIC
        "../SLIF_MutexQue/include"
        "include"
)

target_link_libraries(SLIF_LaunchQue PUBLIC
        SLIF_MutexQue
)