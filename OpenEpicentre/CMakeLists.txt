cmake_minimum_required(VERSION 4.2.3)
project(slif_epicentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_epicentre STATIC
        ../Control/libs/SLIF_MutexQue/src/SLIF_MutexQue.cpp
        ../Control/libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework.cpp
        ../Control/libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_Global.cpp
        ../Control/libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_App.cpp
        ../Control/libs/SLIF_MutexQue/src/SLIF_MutexQue_Framework_App_Control.cpp
        ../Control/libs/SLIF_ThreadsLog/src/CLIB_ThreadLogs.cpp
        ../Control/libs/SLIF_ThreadsLog/src/CLIB_ThreadLogs_Framework.cpp
        ../Control/libs/SLIF_ThreadsLog/src/CLIB_ThreadLogs_Framework_Global.cpp
        ../Control/libs/SLIF_ThreadsLog/src/CLIB_ThreadLogs_Framework_App.cpp
        ../Control/libs/SLIF_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        ../Control/libs/SLIF_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        ../Control/libs/SLIF_LaunchQue/src/SLIF_LaunchQue.cpp
        ../Control/libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework.cpp
        ../Control/libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_Global.cpp
        ../Control/libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_App.cpp
        ../Control/libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_App_Control.cpp
        ../Control/libs/SLIF_LaunchQue/src/SLIF_LaunchQue_Framework_Execute.cpp
        src/CLIB_OpenEpiCentre.cpp
        src/engine/CLIB_OpenEpiCentre_Framework.cpp
        src/engine/CLIB_OpenEpiCentre_Framework_Global.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT_Input.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT_Output.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT_Concurrent.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT_User_Input.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT_User_Output.cpp
        src/structs/CLIB_OpenEpiCentre_STRUCT_User_Algorithm.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise0.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise1.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise2.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise3.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.cpp
        src/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.cpp
        src/engine/CLIB_OpenEpiCentre_Framework.cpp
        src/engine/CLIB_OpenEpiCentre_App.cpp
        src/engine/CLIB_OpenEpiCentre_Algorithms.cpp
        src/engine/CLIB_OpenEpiCentre_Data.cpp
        src/engine/CLIB_OpenEpiCentre_Data_Control.cpp
        src/engine/CLIB_OpenEpiCentre_Execute.cpp
        src/engine/CLIB_OpenEpiCentre_Execute_Control.cpp
)

target_include_directories(slif_epicentre PUBLIC
        "../Control/libs/SLIF_MutexQue/include"
        "../Control/libs/SLIF_ThreadsLog/include"
        "../Control/libs/SLIF_LaunchQue/include"
        "include"
)

target_link_libraries(slif_epicentre PUBLIC
        SLIF_MutexQue
        slif_threads_log
        SLIF_LaunchQue
        slif_control
)
