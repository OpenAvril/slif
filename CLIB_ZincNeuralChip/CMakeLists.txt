cmake_minimum_required(VERSION 4.2.3)
project(slif_zinc_neural_chip VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(${PROJECT_NAME} STATIC
        ../Control/libs/CLIB_MutexQue/io/src/CLIB_MutexQue.cpp
        ../Control/libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../Control/libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_Global.cpp
        ../Control/libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App.cpp
        ../Control/libs/CLIB_MutexQue/src/CLIB_MutexQue_Framework_App_Control.cpp
        ../Control/libs/CLIB_ThreadsLog/io/src/CLIB_ThreadLogs.cpp
        ../Control/libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework.cpp
        ../Control/libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_Global.cpp
        ../Control/libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App.cpp
        ../Control/libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Algorithms.cpp
        ../Control/libs/CLIB_ThreadsLog/src/CLIB_ThreadLogs_Framework_App_Execute.cpp
        ../Control/libs/CLIB_LaunchQue/io/src/CLIB_LaunchQue.cpp
        ../Control/libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework.cpp
        ../Control/libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Global.cpp
        ../Control/libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App.cpp
        ../Control/libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_App_Control.cpp
        ../Control/libs/CLIB_LaunchQue/src/CLIB_LaunchQue_Framework_Execute.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_Global.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA_CLASS_Ticket.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_STRUCT_BusDATA.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Data.cpp
        libs/CLIB_Stemisphore/src/independent/CLIB_Bus_STRUCT_SingleBus_Framework_App_Execute.cpp
        libs/CLIB_Stemisphore/src/CLIB_SystemBus_Framework.cpp
        libs/CLIB_Stemisphore/src/CLIB_SystemBus_Framework_Global.cpp
        libs/CLIB_Stemisphore/src/CLIB_SystemBus_Framework_App.cpp
        libs/CLIB_Stemisphore/src/CLIB_SystemBus_Framework_App_Execute.cpp
        #libs/CLIB_LeftHemishpore/io/src/CLIB_LeftHemishpore.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_Global.cpp
        #libs/CLIB_LeftHemishpore/src/independent/CLIB_LeftHemishpore_STRUCT_Input.cpp
        #libs/CLIB_LeftHemishpore/src/independent/CLIB_LeftHemishpore_STRUCT_Output.cpp
        #libs/CLIB_LeftHemishpore/src/independent/CLIB_LeftHemishpore_STRUCT_Concurrent.cpp
        #libs/CLIB_LeftHemishpore/src/independent/CLIB_LeftHemishpore_STRUCT_User_Input.cpp
        #libs/CLIB_LeftHemishpore/src/independent/CLIB_LeftHemishpore_STRUCT_User_Output.cpp
        #libs/CLIB_LeftHemishpore/src/independent/CLIB_LeftHemishpore_STRUCT_User_Algorithm.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Algorithm_praise0.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise0.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise0.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Algorithm_praise1.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise1.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise1.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Algorithm_praise2.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise2.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise2.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Algorithm_praise3.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Input_praise3.cpp
        #libs/CLIB_LeftHemishpore/src/independent/praise_sets/CLIB_LeftHemishpore_STRUCT_Output_praise3.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_App.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_App_Algorithms.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_App_Data.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_App_Data_Control.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_App_Execute.cpp
        #libs/CLIB_LeftHemishpore/src/engine/CLIB_LeftHemishpore_Framework_App_Execute_Control.cpp
)

target_include_directories(${PROJECT_NAME}
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/#libs/CLIB_LeftHemishpore/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_RightHemisphore/io/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_Stemisphore/io/include>
        $<INSTALL_INTERFACE:include>
)

target_include_directories(${PROJECT_NAME}
        PRIVATE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../Control/libs/CLIB_MutexQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../Control/libs/CLIB_ThreadsLogQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}../Control/libs/CLIB_LaunchQue/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_Stemisphore/include>
        #$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_LeftHemishpore/include>
        #$<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/libs/CLIB_RightHemisphore/include>
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
        $<INSTALL_INTERFACE:include>
)

target_link_libraries(${PROJECT_NAME} PRIVATE
        slif_control_mutex_que
        slif_control_sys_threads_log
        slif_stemisphore
        slif_control_launch_que
)
