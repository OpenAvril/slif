cmake_minimum_required(VERSION 4.2.3)
project(slif VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif STATIC
        libs/slif_MutexQue/src/slif_MutexQue.cpp
        libs/slif_MutexQue/src/slif_MutexQue_Framework_App.cpp
        libs/slif_MutexQue/src/slif_MutexQue_Framework_Global.cpp
        libs/slif_MutexQue/src/slif_MutexQue_Framework_App.cpp
        libs/slif_MutexQue/src/slif_MutexQue_Framework_App_Control.cpp
        libs/slif_LaunchQue/src/slif_LaunchQue.cpp
        libs/slif_LaunchQue/src/slif_LaunchQue_Framework.cpp
        libs/slif_LaunchQue/src/slif_LaunchQue_Framework_Global.cpp
        libs/slif_LaunchQue/src/slif_LaunchQue_Framework_App.cpp
        libs/slif_LaunchQue/src/slif_LaunchQue_Framework_App_Control.cpp
        libs/slif_LaunchQue/src/slif_LaunchQue_Framework_Execute.cpp
        src/slif.cpp
        src/slif_Framework.cpp
        src/slif_Framework_Global.cpp
        src/slif_Framework_Execute.cpp
)

target_include_directories(slif PUBLIC
        "libs/slif_LaunchQue/include"
        "libs/slif_MutexQue/include"
        "include"
)

target_link_libraries(slif PRIVATE
        slif_MutexQue
        slif_LaunchQue
)
