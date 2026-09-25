cmake_minimum_required(VERSION 4.2.3)
project(SLIF_MutexQue VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(SLIF_MutexQue STATIC
        src/SLIF_Transporter.cpp
        src/SLIF_Transporter_Framework.cpp
        src/SLIF_Transporter_Framework_Global.cpp
        src/SLIF_Transporter_Framework_App.cpp
        src/SLIF_Transporter_Framework_App_Control.cpp
        src/SLIF_Transporter_Framework_Execute.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)
