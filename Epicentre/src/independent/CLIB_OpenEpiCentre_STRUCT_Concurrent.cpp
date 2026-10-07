#include "../../include/independent/CLIB_OpenEpiCentre_STRUCT_Concurrent.h"
#include <CLIB_LaunchQue.h>
#include <CLIB_MutexQue.h>
#include <CLIB_ThreadLogs.h>
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Data.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Data_Control.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Execute.h"
#include "../../include/engine/CLIB_OpenEpiCentre_Framework_App_Execute_Control.h"
#include "../../include/independent/CLIB_OpenEpiCentre_STRUCT_User_Algorithm.h"
#include "../../include/independent/CLIB_OpenEpiCentre_STRUCT_User_Input.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise0.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise1.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise2.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Input_praise3.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise0.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise1.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise2.h"
#include "../../include/independent/praise_sets/CLIB_OpenEpiCentre_STRUCT_Output_praise3.h"
    uint8_t* slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_REG_CLIB_OpenEpiCentre_Concurrent_ThreadId;
// public.
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::app_do_Concurrent_Algorithm_For_PraiseEventId(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t* playerId, unsigned long long* praiseEventId, Object* ptr_Input_Subset, Object* ptr_Output_Subset) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : app_do_Concurrent_Algorithm_For_PraiseEventId(sysThreadId)." << std::endl;
        switch (*praiseEventId) {
            case 0: {
                auto temp = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Algorithm_praise0*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Algorithm(sysThreadId)->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserAlgorithm_Item_On_List_Of_ptr_PraiseAlgorithmSubsets(sysThreadId, praiseEventId));
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise0*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise0*>(ptr_Output_Subset));
                break;
            }
            case 1: {
                auto temp = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Algorithm_praise1*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId));
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise1*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise1*>(ptr_Output_Subset));
                break;
            }
            case 2: {
                auto temp = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Algorithm_praise2*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId));
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise2*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise2*>(ptr_Output_Subset));
                break;
            }
            case 3: {
                auto temp = reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Algorithm_praise3*>(obj->dyn_STRUCT_get_CLIB_OpenEpiCentre_Framework_User_Input(sysThreadId)->dyn_CLASS_get_CLIB_OpenEpiCentre_STRUCT_UserInput_Item_On_List_Of_ptr_PraiseInputSubsets(sysThreadId, praiseEventId));
                temp->app_Do_Praise(sysThreadId, reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Input_praise3*>(ptr_Input_Subset), reinterpret_cast<CLIB_OpenEpiCentre_STRUCT_Output_praise3*>(ptr_Output_Subset));
                break;
            }
            default: {
                break;
            }
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : app_do_Concurrent_Algorithm_For_PraiseEventId(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot1_DEFINE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
        stat_REG_CLIB_OpenEpiCentre_Concurrent_ThreadId = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot2_SUBSTANTIATE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_Concurrent(sysThreadId)." << std::endl;
        stat_REG_CLIB_OpenEpiCentre_Concurrent_ThreadId = new uint8_t();
        *stat_REG_CLIB_OpenEpiCentre_Concurrent_ThreadId = static_cast<uint8_t>(255);
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot2_SUBSTANTIATE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot3_INITIALISE_Concurrent(uint8_t* sysThreadId, slif::CLIB_OpenEpiCentre_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot3_INITIALISE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_boot4_INSTANTIATE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot4_INSTANTIATE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : dyn_REG_boot4_INSTANTIATE_Concurrent(sysThreadId)." << std::endl;
    }
    uint8_t* slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_get_CLIB_OpenEpiCentre_Concurrent_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : dyn_REG_get_CLIB_OpenEpiCentre_Concurrent_ThreadId(sysThreadId)." << std::endl;
        return stat_REG_get_CLIB_OpenEpiCentre_Concurrent_ThreadId(sysThreadId);
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::dyn_REG_set_CLIB_OpenEpiCentre_Concurrent_ThreadId(uint8_t* sysThreadId, uint8_t* praiseId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => uint8_t* : dyn_REG_set_CLIB_OpenEpiCentre_Concurrent_ThreadId(sysThreadId)." << std::endl;
        stat_REG_set_CLIB_OpenEpiCentre_Concurrent_ThreadId(sysThreadId, *praiseId);
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_app_thread_Concurrency(uint8_t* sysThreadId, CLIB_OpenEpiCentre_Framework* obj, uint8_t* concurrentThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_app_thread_Concurrency(sysThreadId)." << std::endl;
        bool* checkPass = new bool(false);
        bool* doneOnce = new bool(false);
        while (!checkPass) {
            slif::MutexQue::startByLock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrentThreadId)) {
                if (!*doneOnce) {
                    obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_set_OpenEpiCentre_Execute_Control_ItemOnListOf_FLAGisThreadInitialised(concurrentThreadId, !*doneOnce);
                    *doneOnce = !*doneOnce;
                }
            }
            *checkPass = !checkPass;
            slif::MutexQue::endByUnlock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        *checkPass = !checkPass;
        while (!checkPass) {
            slif::MutexQue::startByLock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));            if (concurrentThreadId == 0) {
                while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)) {
                }
                *checkPass = !obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
            } else {
                while (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)) {
                }
            }
            slif::MutexQue::endByUnlock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        *checkPass = !checkPass;
        while (!checkPass) {
            slif::MutexQue::startByLock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            while (!obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId)) {
                switch (CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_MsbByteArray_To_Msbbool(slif::LaunchQue::get_FlagSTATEofConcurrentCore(CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId)))) {
                case false: {
                    slif::MutexQue::endByUnlock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));

                    break;
                }
                case true: {
                    if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_InputAction(sysThreadId))
                    {
                        slif::MutexQue::endByUnlock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        slif::MutexQue::startByLock(sysThreadId, CLIBWriteQueAtServerInputReceive, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->app_FUNCT_pop_CLIB_OpenEpiCentre_Framework_App_Data_Control_STACK_Of_Input(obj, concurrentThreadId);
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_APP_select_And_Set_OpenEpiCentre_STRUCT_Output_Subset(obj, obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Concurrent_praiseEventId(sysThreadId));
                        slif::MutexQue::endByUnlock(sysThreadId, CLIBWriteQueAtServerInputReceive, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));


                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Algorithms(sysThreadId)->dyn_STRUCT_get_Item_On_list_Of_ptr_Concurrent(concurrentThreadId)->app_do_Concurrent_Algorithm_For_PraiseEventId(
                            obj,
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Concurrent_playerId(sysThreadId),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_STRUCT_Concurrent_praiseEventId(sysThreadId),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Input_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Concurrent_Subset(sysThreadId),
                            obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_REG_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Item_Of_list_Of_ptr_array_Of_buffer_Output_ReferenceForThread(concurrentThreadId)->dyn_REG_get_ptr_Item_Of_ptr_CLIB_OpenEpiCentre_STRUCT_Output_Subset(sysThreadId)
                        );

                        slif::MutexQue::startByLock(sysThreadId, CLIBWriteQueAtServerOutputSend, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->app_FUNCT_push_CLIB_OpenEpiCentre_Framework_App_Data_Control_STACK_Of_Output(obj, concurrentThreadId);
                        slif::LaunchQue::threadEnd(sysThreadId, nullptr, slif::CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        slif::MutexQue::startByLock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        if (obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Data(sysThreadId)->dyn_CLASS_get_ptr_dyn_STRUCT_get_ptr_CLIB_OpenEpiCentre_Framework_App_Data_Control(sysThreadId)->dyn_REG_get_Item_FLAG_isLoaded_Stack_OutputSend(sysThreadId)) {
                            if (slif::LaunchQue::get_FlagSTATEofConcurrentCore(sysThreadId, nullptr, slif::LaunchQue::get_coreIdTolaunch(sysThreadId, nullptr)) == slif::LaunchQue::get_FlagisIdle(sysThreadId, nullptr)) {
                                slif::LaunchQue::threadRequestlaunch(sysThreadId, nullptr, slif::LaunchQue::get_coreIdTolaunch(sysThreadId, nullptr));
                            }
                        }
                        slif::MutexQue::endByUnlock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                        slif::MutexQue::endByUnlock(sysThreadId, CLIBWriteQueAtServerOutputSend, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
                    }
                    break;
                }
                default: {
                    break;
                };
                }
            }
            slif::MutexQue::startByLock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
            *checkPass = obj->dyn_CLASS_get_ptr_CLIB_OpenEpiCentre_Framework_App(sysThreadId)->dyn_CLASS_get_ptr_Execute(sysThreadId)->dyn_CLASS_get_ptr_Execute_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_OpenEpiCentre_Framework_App_Execute_Control_isSystemInitialised(sysThreadId);
            slif::MutexQue::endByUnlock(sysThreadId, nullptr, CLIB_OpenEpiCentre_Framework_Global::stat_CONVERT_CLIB_OpenEpiCentre_Framework_Global_Msbuint8_t_To_MsbByteArray(concurrentThreadId));
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_app_thread_Concurrency(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot0_DECLARE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot0_DECLARE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot0_DECLARE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot1_DEFINE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot1_DEFINE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot3_INITIALISE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot3_INITIALISE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot3_INITIALISE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_CLASS_boot4_INSTANTIATE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot4_INSTANTIATE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_CLASS_boot4_INSTANTIATE_Concurrent(sysThreadId)." << std::endl;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_REG_boot0_DECLARE_Concurrent(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: entered LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot0_DECLARE_Concurrent(sysThreadId)." << std::endl;
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: exiting LIB :: slif : CLIB_OpenEpiCentre_STRUCT_Concurrent : stat_REG_boot0_DECLARE_Concurrent(sysThreadId)." << std::endl;
    }
// private.
    uint8_t* slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_REG_get_CLIB_OpenEpiCentre_Concurrent_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: <= uint8_t* : stat_REG_get_CLIB_OpenEpiCentre_Concurrent_ThreadId(sysThreadId)." << std::endl;
        return stat_REG_CLIB_OpenEpiCentre_Concurrent_ThreadId;
    }
    void slif::CLIB_OpenEpiCentre_STRUCT_Concurrent::stat_REG_set_CLIB_OpenEpiCentre_Concurrent_ThreadId(uint8_t* sysThreadId, uint8_t newValue_praiseId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string(" :: => uint8_t : stat_REG_set_CLIB_OpenEpiCentre_Concurrent_ThreadId(sysThreadId)." << std::endl;
        *stat_REG_CLIB_OpenEpiCentre_Concurrent_ThreadId = newValue_praiseId;
    }