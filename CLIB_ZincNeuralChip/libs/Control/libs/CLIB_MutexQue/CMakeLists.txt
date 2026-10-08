cmake_minimum_required(VERSION 4.2.3)
project(slif_control_mutex_que VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC
        io/src/CLIB_MutexQue.cpp
        src/CLIB_MutexQue_Framework.cpp
        src/CLIB_MutexQue_Framework_Global.cpp
        src/CLIB_MutexQue_Framework_App.cpp
        src/CLIB_MutexQue_Framework_App_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/io/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)