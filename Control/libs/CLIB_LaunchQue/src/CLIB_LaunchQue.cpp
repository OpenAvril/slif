#include "../include/CLIB_LaunchQue.h"
#include "CLIB_MutexQue.h"
#include "../include/CLIB_LaunchQue_Framework_App.h"
#include "../include/CLIB_LaunchQue_Framework_App_Control.h"
#include "../include/CLIB_LaunchQue_Framework_Execute.h"
#include "../include/CLIB_LaunchQue_Framework_Global.h"
#include <iostream>
    static std::list<slif::CLIB_LaunchQue_Framework*>* stat_REG_List_Of_PGM_CLIB_LaunchQue;
    static std::array<bool, 13>* stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED;
    int* slif::LaunchQue::stat_REG_HandleId_For_PGM_CLIBMutexQue;
// public.
    int* slif::LaunchQue::generateHandle(uint8_t* sysThreadId) {
        auto memberFunctionId = new uint8_t(0);
        auto handleId = new int();
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: CLIB : LaunchQue : generateHandle(sysThreadId)<< " std::endl;
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            std::cout << "thread " << std::to_string(*sysThreadId) << "  :: alpha<< " std::endl;
            CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->resize(static_cast<uint8_t>(CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->size()+1));
            std::cout << "thread " << std::to_string(*sysThreadId) << "  :: bravo<< " std::endl;
            CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->assign(CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->size(), *CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->begin());
            std::cout << "thread " << std::to_string(*sysThreadId) << "  :: charlie<< " std::endl;
            *handleId = static_cast<int>(CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->size() - 1);
            std::cout << "thread " << std::to_string(*sysThreadId) << "  :: end<< " std::endl;
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: CLIB : LaunchQue : generateHandle(sysThreadId)<< " std::endl;
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return handleId;
    }
    void slif::LaunchQue::generateProgram(uint8_t* sysThreadId) {
        CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_CLIB_LaunchQue_Framework(sysThreadId);
        CLIB_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_CLIB_LaunchQue_Framework(sysThreadId);
    }
    unsigned char* slif::LaunchQue::get_coreIdTolaunch(uint8_t* sysThreadId, int* handleId) {
        auto memberFunctionId = new uint8_t(1);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, 0);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEisActive(uint8_t* sysThreadId, int* handleId) {
        auto memberFunctionId = new uint8_t(2);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_bool_to_ByteArray(sysThreadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEofConcurrentCore(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_concuurentsysThreadId) {
        auto memberFunctionId = new uint8_t(3);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_ByteArray_To_uint8_t(sysThreadId, bytes_concuurentsysThreadId));
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_bool_to_ByteArray(sysThreadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagisIdle(uint8_t* sysThreadId, int* handleId) {
        auto memberFunctionId = new uint8_t(4);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_bool_to_ByteArray(sysThreadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEofThreadToLaunch(uint8_t* sysThreadId, int* handleId) {
        auto memberFunctionId = new uint8_t(5);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, 0));
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_bool_to_ByteArray(sysThreadId, *result);
    }
    unsigned char* slif::LaunchQue::isINSTANTIATED(uint8_t* sysThreadId)	{
        auto memberFunctionId = new uint8_t(6);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)<< " std::endl;
        bool* result = nullptr;
        result = new bool(sysThreadId);
        *result = true;
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            *result = CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId);
        }
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: exiting LIB :: CLIB : CLIB_MutexQue : CLIB_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(sysThreadId)<< " std::endl;
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        return slif::CLIB_MutexQue_Framework_Global::stat_APP_CONVERT_CLIB_MutexQue_MsbBoolean_To_MsbByteArray(sysThreadId, *result);
    }
    void slif::LaunchQue::reInitialiseHandle(uint8_t* sysThreadId, int* handleId, std::byte* MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        auto memberFunctionId = new uint8_t(7);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            auto temp = CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->begin();
            std::advance(temp, *handleId);
            auto tempObj = *temp;
            tempObj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
            tempObj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
    }
    void slif::LaunchQue::set_FlagSTATEofConcurrentCore(uint8_t* sysThreadId, int* handleId, unsigned char* bytessysThreadId, unsigned char*  bytes_concuurentsysThreadId) {
        auto memberFunctionId = new uint8_t(8);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_ByteArray_To_uint8_t(sysThreadId, bytessysThreadId), bytes_concuurentsysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
    }
    void slif::LaunchQue::terminateProgaram(uint8_t* sysThreadId) {
        auto memberFunctionId = new uint8_t(9);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
            if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
                delete stat_REG_List_Of_PGM_CLIB_LaunchQue;
                delete stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED;
            }
            else {
                CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
                CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
            }
            slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        }
    void slif::LaunchQue::threadRequestlaunch(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_concuurentsysThreadId) {
        auto memberFunctionId = new uint8_t(10);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
            if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
                CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId), slif::CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_ByteArray_To_uint8_t(sysThreadId, bytes_concuurentsysThreadId));
            }
            else {
                CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
                CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
            }
            slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        }
    void slif::LaunchQue::threadEnd(uint8_t* sysThreadId, int* handleId, unsigned char* bytes_concuurentsysThreadId) {
        auto memberFunctionId = new uint8_t(11);
        slif::MutexQue::startByLock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
        if (!CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0)) {
            CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId,handleId), (uint8_t)*bytes_concuurentsysThreadId);
        }
        else {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(*memberFunctionId) = !CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0);
            CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(sysThreadId);
        }
        slif::MutexQue::endByUnlock(sysThreadId, CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(sysThreadId), CLIB_LaunchQue_Framework_Global::stat_CONVERT_CLIB_LaunchQue_Framework_Global_uint8_t_To_ByteArray(sysThreadId, *memberFunctionId));
    }
// private.
    void slif::LaunchQue::CLIB_LaunchQue_generateProgram(uint8_t* sysThreadId) {
        auto handleId = new int(0);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: alpha<< " std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " entered app_FUNCT_generate_Program(sysThreadId)<< " std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " started CLIB_LaunchQue_Framework_Global Meta-Data and Settings<< " std::endl;
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_create_CLIB_LaunchQue_Framework_Global_and_Settings(sysThreadId);
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->boot1_REG_DEFINE_CLIB_LaunchQue_Framework_Global(sysThreadId);
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_Global(sysThreadId);
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_Global(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " done CLIB_LaunchQue_Framework_Global Meta-Data and Settings<< " std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " started IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE<< " std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " done IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE<< " std::endl;

		std::cout << "thread " << std::to_string(*sysThreadId) << " started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE<< " std::endl;
        CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_create_Architecture(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " started Registers - DEFINE<< " std::endl;

		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " done Registers - DEFINE<< " std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " started Registers - SUBSTANTIATE<< " std::endl;
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_App_Control(sysThreadId, CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId));
		std::cout << "thread " << std::to_string(*sysThreadId) << " done Registers - SUBSTANTIATE<< " std::endl;
		std::cout << "thread " << std::to_string(*sysThreadId) << " started Registers - INITIALISE"));
		CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " done Registers - INITIALISE"));
		std::cout << "thread " << std::to_string(*sysThreadId) << " done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE"));

		std::cout << "thread " << std::to_string(*sysThreadId) << " started Program - INSTANTIATION"));
		CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
		CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
		CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(sysThreadId);
        CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(sysThreadId, handleId)->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)->dyn_PGM_boot4_INSTANTIATE_CLIB_LaunchQue_Framework_Execute(sysThreadId);
		std::cout << "thread " << std::to_string(*sysThreadId) << " done Program - INSTANTIATION"));

        std::cout << ""));
        std::cout << "        ,     \\      /      ,"));
        std::cout << "       / \\    )\\ __ /(     / \\ "));
        std::cout << "      /   \\   (_\\  /_)    /   \\ "));
        std::cout << "____ / ____\\__ \\@  @/ ___/_____\\_____"));
        std::cout << "|              |\\../|               |"));
        std::cout << "|               \\VV/                |"));
        std::cout << "|        MIT Launch Que .dll        |"));
        std::cout << "|___________________________________|"));
        std::cout << "|    / \\ /        \\\\        \\ /\\    |"));
        std::cout << "|  /    V          ))        V   \\  |"));
        std::cout << "|/                //               \\| "));
        std::cout << "`                 V                 '"));
        std::cout << ""));
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* sysThreadId) {
        CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)); memberFunctionId++) {
            if (CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId)) {
                CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(0) = CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(memberFunctionId);
                break;
            }
        }
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
        stat_REG_List_Of_PGM_CLIB_LaunchQue = nullptr;
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_CLIB_LaunchQue_Framework(uint8_t* sysThreadId) {
        auto handleId = new int(0);
        stat_REG_List_Of_PGM_CLIB_LaunchQue = new std::list<slif::CLIB_LaunchQue_Framework*>;
        while (CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId) == nullptr) {}
        CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->resize(1);
        CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(sysThreadId)->assign(*handleId, new class slif::CLIB_LaunchQue_Framework(sysThreadId));
        CLIB_LaunchQue_generateProgram(sysThreadId);
        CLIB_LaunchQue_stat_REG_boot3_INITIALISE_HandleId_For_PGM_CLIBMutexQue(sysThreadId);
    }
    std::list<slif::CLIB_LaunchQue_Framework*>*  slif::LaunchQue::CLIB_LaunchQue_stat_REG_get_ptr_List_Of_PGM_CLIB_LaunchQue(uint8_t* sysThreadId) {
        return stat_REG_List_Of_PGM_CLIB_LaunchQue;
    }
    slif::CLIB_LaunchQue_Framework* slif::LaunchQue::CLIB_LaunchQue_stat_CLASS_get_ptr_PGM_CLIB_LaunchQue_Framework(uint8_t* sysThreadId, const int* handleId) {
        auto temp = stat_REG_List_Of_PGM_CLIB_LaunchQue->begin();
        std::advance(temp, *handleId);
        return *temp;
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
        stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED = nullptr;
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_REG_boot1_DEFINE_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId) {
        stat_REG_HandleId_For_PGM_CLIBMutexQue = nullptr;
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
        stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED = new std::array<bool, 13>();
        while (CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId) == nullptr) { }
        for (int index = 0; index < CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->size(); index++) {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(index) = true;
        }
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId) {
        stat_REG_HandleId_For_PGM_CLIBMutexQue = new int();
        *stat_REG_HandleId_For_PGM_CLIBMutexQue = static_cast<int>(INT16_MAX);
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
        for (int index = 0; index < CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->size(); index++) {
            CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->at(index) = true;
        }
    }
    void slif::LaunchQue::CLIB_LaunchQue_stat_REG_boot3_INITIALISE_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId) {
        stat_REG_HandleId_For_PGM_CLIBMutexQue = slif::MutexQue::generateHandle(sysThreadId);
        slif::MutexQue::reInitialiseHandle(sysThreadId, stat_REG_HandleId_For_PGM_CLIBMutexQue, static_cast<std::byte>(CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(sysThreadId)->size()));
    }
    std::array<bool, 13>* slif::LaunchQue::CLIB_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t* sysThreadId) {
        return stat_REG_Flag_CLIB_LaunchQue_isMemberFunctionINSTANTIATED;
    }
    int* slif::LaunchQue::CLIB_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_CLIBMutexQue(uint8_t* sysThreadId) {
        return stat_REG_HandleId_For_PGM_CLIBMutexQue;
    }