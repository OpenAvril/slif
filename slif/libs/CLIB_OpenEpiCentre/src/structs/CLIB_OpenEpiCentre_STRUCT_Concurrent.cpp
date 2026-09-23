#include "../../include/structs/CLIB_OpenEpiCentre_STRUCT_Concurrent.h"
#include "../../include/engine/CLIB_OpenEpiCentre_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Data_Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Execute_Control.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Algorithm_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.h"
#include "../../include/structs/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/include/CLIB_LaunchEnableForConcurrentThreadsAt_Server.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerInputReceive/include/CLIB_WriteEnableForThreadsAt_ServerInputReceive.h"
#include "../../libs/CLIB_WriteQueForThreadsAt_ServerOutputSend/include/CLIB_WriteEnableForThreadsAt_ServerOutputSend.h"
#include <iostream>

#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode.h"
#include "../../libs/CLIB_LaunchQueForThreadsAt_Server/libs/CLIB_WriteQueForThreadsAt_Server_LaunchQueConditionCode/include/WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App.h"
uint8_t* CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId;
// public.
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(CLIB_OpenEpiCentre_Framework* obj, uint8_t playerId, unsigned long long praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset) {
        switch (praiseEventId) {
            case 0: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise0()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(ptr_Output_Subset));
                break;
            }
            case 1: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise1()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise1*>(ptr_Output_Subset));
                break;
            }
            case 2: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise2()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise2*>(ptr_Output_Subset));
                break;
            }
            case 3: {
                obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm()->dyn_CLASS_get_ptr_Algorithm_praise3()->app_Do_Praise(reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise3*>(ptr_Output_Subset));
                break;
            }
            default: {
                break;
            }
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot1_DEFINE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot1_DEFINE_Concurrent()"));
        _stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = nullptr;
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot1_DEFINE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot2_SUBSTANTIATE_Concurrent()"));
        _stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = new uint8_t();
        *_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = static_cast<uint8_t>(255);
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot2_SUBSTANTIATE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework* obj)
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot3_INITIALISE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot3_INITIALISE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered dyn_REG_boot4_INSTANTIATE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting dyn_REG_boot4_INSTANTIATE_Concurrent()"));
    }
    uint8_t CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_get_CLIB_OpenEpiCentre_Concurrent_threadId()
    {
        return *_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_set_CLIB_OpenEpiCentre_Concurrent_threadId(uint8_t praiseId)
    {
        *_stat_REG_CLIB_OpenEpiCentre_Concurrent_threadId = praiseId;
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_app_thread_Concurrency(CLIB_OpenEpiCentre_Framework* obj, uint8_t concurrentthreadId)
    {
        uint8_t* threadsId_Server_LaunchQueConditionCode = new uint8_t(concurrentthreadId);
        uint8_t* threadId_ServerInputReceive = new uint8_t(concurrentthreadId + static_cast<uint8_t>(1));//concurrent threadId plus the IO thread at zero, 1.
        uint8_t* threadsId_ServerOutputSend = new uint8_t(concurrentthreadId + static_cast<uint8_t>(1));//concurrent threadId plus the IO thread at zero, 1.
        bool* checkPass = new bool(false);
        bool* doneOnce = new bool(false);
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
            while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrentthreadId)) {
                if (!*doneOnce) {
                    obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrentthreadId, !*doneOnce);
                    *doneOnce = !*doneOnce;
                }
            }
            *checkPass = !checkPass;
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
        }
        *checkPass = !checkPass;
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
            if (concurrentthreadId == 0) {
                while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()) {
                    CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread " << concurrentthreadId << " :: OpenEpiCentre : waiting on system initialisation flag is set."));
                }
                *checkPass = !obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
            } else {
                while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()) {
                    CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: thread " << concurrentthreadId << " :: OpenEpiCentre : waiting on system initialisation flag is set."));
                }
            }
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
        }
        *checkPass = !checkPass;
        while (!checkPass) {
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
            while (!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised()) {
                switch (CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_MsbByteArray_To_Msbbool(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentthreadId)))) {
                case false: {
                    CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));

                    break;
                }
                case true: {
                    if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction())
                    {
                        CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadId_ServerInputReceive));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_pop_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Input(obj, concurrentthreadId);
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentthreadId)->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Output_Subset(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentthreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId());
                        CLIBWriteQueAtServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive::CLIB_WriteEnableForThreadsAt_ServerInputReceive_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadId_ServerInputReceive));

                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Algorithms()->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentthreadId)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                            obj,
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentthreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_playerId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentthreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Input_praiseEventId(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentthreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Input_Subset(),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentthreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset()
                        );

                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_Start(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_ServerOutputSend));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->app_FUNCT_push_CLIB_OpenEpiCentre_Data_Control_STACK_Of_Output(obj, concurrentthreadId);
                        CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_thread_End(CLIBOpenEpiCentre::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentthreadId));
                        CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
                        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Data()->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Data_Control()->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend()) {
                            if (CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_ConcurrentCoreState(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch()) == CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_Flag_Idle()) {
                                CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_FUNCT_request_Wait_launch(CLIBLaunchQueAtServer::CLIB_LaunchEnableForConcurrentThreadsAt_Server::CLIB_LaunchEnableForConcurrentThreadsAt_Server_App_REG_get_coreId_To_launch());
                            }
                        }
                        CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_Server_LaunchQueConditionCode));
                        CLIBWriteQueAtServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend::CLIB_WriteEnableForThreadsAt_ServerOutputSend_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(*threadsId_ServerOutputSend));
                    }
                    break;
                }
                default: {
                    break;
                };
                }
            }
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_Start(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentthreadId));
            *checkPass = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App()->dyn_CLASS_get_ptr_Execute()->dyn_CLASS_get_ptr_Execute_Control()->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Execute_Control_isSystemInitialised();
            CLIBWriteQueAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode::CLIB_WriteEnableForThreadsAt_Server_LaunchQueConditionCode_App_FUNCT_write_End(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Global_Msbuint8_t_To_MsbByteArray(concurrentthreadId));
        }
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot0_DECLARE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot0_DECLARE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot0_DECLARE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot1_DEFINE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot1_DEFINE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot1_DEFINE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot3_INITIALISE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot3_INITIALISE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_CLASS_boot4_INSTANTIATE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_CLASS_boot4_INSTANTIATE_Concurrent()"));
    }
    void CLIBOpenEpiCentre::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_REG_boot0_DECLARE_Concurrent()
    {
        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: entered stat_REG_boot0_DECLARE_Concurrent()"));

        CLIB_ThreadLogs::CLIB_ThreadLogs::stat_APP_FUNCT_CLIB_ThreadLogs_printConsoleAndLog(threadId, new std::string(" :: exiting stat_REG_boot0_DECLARE_Concurrent()"));
    }
// private.