cmake_minimum_required(VERSION 4.2.3)
project(slif_control VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_control STATIC
        libs/SLIF_MutexQue/src/SLIF_MutexQue.cpp
        libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_App.cpp
        libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_Global.cpp
        libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_App.cpp
        libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_App_Control.cpp
        libs/SLIF_LaunchQue/src/SLIF_LaunchQue.cpp
        libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework.cpp
        libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_Global.cpp
        libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_App.cpp
        libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_App_Control.cpp
        libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_Execute.cpp
)

target_include_directories(slif_control PUBLIC
        "libs/SLIF_LaunchQue/include"
        "libs/SLIF_MutexQue/include"
)

target_link_libraries(slif_control PUBLIC
        SLIF_MutexQue
        SLIF_LaunchQue
)
