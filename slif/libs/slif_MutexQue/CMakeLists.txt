cmake_minimum_required(VERSION 4.2.3)
project(slif_MutexQue VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_MutexQue STATIC
        src/slif_MutexQueQue.cpp
        src/slif_MutexQueQue_Framework.cpp
        src/slif_MutexQueQue_Framework_Global.cpp
        src/slif_MutexQueQue_Framework_App.cpp
        src/slif_MutexQueQue_Framework_App_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
