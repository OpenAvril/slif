cmake_minimum_required(VERSION 4.2.3)
project(slif_EpiCentre VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(slif_EpiCentre STATIC
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
        libs/CLIB_WriteQueForThreadsAt_MutexQue/src/CLIB_WriteEnableForThreadsAt_MutexQue.cpp
        libs/CLIB_WriteQueForThreadsAt_MutexQue/src/WriteEnableForThreadsAt_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_MutexQue/src/WriteEnableForThreadsAt_Framework_Global.cpp
        libs/CLIB_WriteQueForThreadsAt_MutexQue/src/WriteEnableForThreadsAt_Framework_App.cpp
        libs/CLIB_WriteQueForThreadsAt_MutexQue/src/WriteEnableForThreadsAt_Framework_App_Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_Global.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_Framework_App.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/src/CodeWriteEnableForThreadsAt_Server_LaunchQueCondition_Framework_App_Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/CLIB_LaunchEnableForConcurrentThreadsAt_Server.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_Framework.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_Global.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_App.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_App_Control.cpp
        libs/CLIB_LaunchQueForThreadsAt_Server/src/LaunchEnableForConcurrentThreadsAt_Server_Execute.cpp
        libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/src/CLIB_WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode.cpp
        libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/src/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework.cpp
        libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/src/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework_Global.cpp
        libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/src/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework_App.cpp
        libs/CLIB_WriteQueForThreadsAt_OpenEpiCentre_ConditionCode/src/WriteEnableForThreadsAt_OpenEpiCentre_ConditionCode_Framework_App_Control.cpp
        src/engine/CLIB_OpenEpiCentre_Execute_Control.cpp
)

target_include_directories(slif_EpiCentre PUBLIC
        /libs/CLIB_WriteQueForThreadsAt_MutexQue/include
        /libs/CLIB_LaunchQueForThreadsAt_Server/include
        /libs/CLIB_ThreadLogs/include
)
