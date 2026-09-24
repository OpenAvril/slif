#include "../include/SLIF_LaunchQue.h"
#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework_Execute.h"
#include "../include/SLIF_LaunchQue_Framework_Global.h"
#include "../../SLIF_MutexQue/include/SLIF_MutexQue.h"
#include <iostream>
    static std::list<slif::SLIF_LaunchQue_Framework*>* stat_REG_List_Of_PGM_SLIF_LaunchQue;
    static std::array<bool, 13>* stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED;
    int* slif::LaunchQue::stat_REG_HandleId_For_PGM_slifMutexQue;
// public.
    int* slif::LaunchQue::generateHandle(uint8_t* threadId) {
        auto memberFunctionId = new uint8_t(0);
        auto handleId = new int();
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : LaunchQue : generateHandle(threadId)." << std::endl;
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->resize(static_cast<uint8_t>(SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->size()+1));
            SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->assign(SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->size(), *SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->begin());
            *handleId = *reinterpret_cast<int*>(SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->size() - 1);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : LaunchQue : generateHandle(threadId)." << std::endl;
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return handleId;
    }
    void slif::LaunchQue::generateProgram(uint8_t* threadId) {
        SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(threadId);
        SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(threadId);
        SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(threadId);
        SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_SLIF_LaunchQue_Framework(threadId);
        SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_SLIF_LaunchQue_Framework(threadId);
    }
    unsigned char* slif::LaunchQue::get_coreIdTolaunch(uint8_t* threadId, int* handleId) {
        auto memberFunctionId = new uint8_t(1);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEisActive(uint8_t* threadId, int* handleId) {
        auto memberFunctionId = new uint8_t(2);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEofConcurrentCore(uint8_t* threadId, int* handleId, unsigned char* bytes) {
        auto memberFunctionId = new uint8_t(3);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagisIdle(uint8_t* threadId, int* handleId) {
        auto memberFunctionId = new uint8_t(4);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEofThreadToLaunch(uint8_t* threadId, int* handleId) {
        auto memberFunctionId = new uint8_t(5);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        bool* result = nullptr;
        result = new bool(true);
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0));
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::isINSTANTIATED(uint8_t* threadId)	{
        auto memberFunctionId = new uint8_t(6);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
        bool* result = nullptr;
        result = new bool(threadId);
        *result = true;
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId);
        }
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        return slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId, *result);
    }
    void slif::LaunchQue::reInitialiseHandle(uint8_t* threadId, int* handleId, std::byte* MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        auto memberFunctionId = new uint8_t(7);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            auto temp = SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->begin();
            std::advance(temp, *handleId);
            auto tempObj = *temp;
            tempObj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);
            tempObj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control_For_New_Count(threadId);
            slif::MutexQue::reInitialiseHandle(threadId, handleId, reinterpret_cast<std::byte*>(SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->size()));
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
    }
    void slif::LaunchQue::set_FlagSTATEofConcurrentCore(uint8_t* threadId, int* handleId, unsigned char* bytesThreadId, unsigned char*  byteBool) {
        auto memberFunctionId = new uint8_t(8);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytesThreadId), byteBool);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
    }
    void slif::LaunchQue::terminateProgaram(uint8_t* threadId) {
        auto memberFunctionId = new uint8_t(9);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                delete stat_REG_List_Of_PGM_SLIF_LaunchQue;
                delete stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED;
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
            slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        }
    void slif::LaunchQue::threadRequestlaunch(uint8_t* threadId, int* handleId, unsigned char* bytes) {
        auto memberFunctionId = new uint8_t(10);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId), slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
            slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        }
    void slif::LaunchQue::threadEnd(uint8_t* threadId, int* handleId, unsigned char* bytes) {
        auto memberFunctionId = new uint8_t(11);
        slif::MutexQue::startByLock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId,handleId), (uint8_t)*bytes);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(*memberFunctionId) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        slif::MutexQue::endByUnlock(threadId, SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(threadId), SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *memberFunctionId));
    }
// private.
    void slif::LaunchQue::SLIF_LaunchQue_generateProgram(uint8_t* threadId) {
        auto handleId = new int(0);
		std::cout << "entered app_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "started SLIF_LaunchQue_Framework_Global Meta-Data and Settings." << std::endl;
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_create_SLIF_LaunchQue_Framework_Global_and_Settings(threadId);
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->boot1_REG_DEFINE_SLIF_LaunchQue_Framework_Global(threadId);
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global(threadId);
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId));
		std::cout << "done SLIF_LaunchQue_Framework_Global Meta-Data and Settings." << std::endl;

		std::cout << "started IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "done IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
        SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_create_Architecture(threadId);
		std::cout << "started Registers - DEFINE" << std::endl;

		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId);
		std::cout << "done Registers - DEFINE." << std::endl;
		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_App_Control(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId));
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "started Registers - INITIALISE." << std::endl;
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_Control(threadId);
		std::cout << "done Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(threadId);
		SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(threadId);
		SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(threadId);
        SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_Execute(threadId)->dyn_PGM_boot4_INSTANTIATE_SLIF_LaunchQue_Framework_Execute(threadId);
		std::cout << "done Program - INSTANTIATION." << std::endl;

        std::cout << "" << std::endl;
        std::cout << "        ,     \\      /      ," << std::endl;
        std::cout << "       / \\    )\\ _ /(     / \\ " << std::endl;
        std::cout << "      /   \\   (_\\  /_)    /   \\ " << std::endl;
        std::cout << "_ / _\\_ \\@  @/ _/__\\__" << std::endl;
        std::cout << "|              |\\../|               |" << std::endl;
        std::cout << "|               \\VV/                |" << std::endl;
        std::cout << "|        MIT Launch Que .dll        |" << std::endl;
        std::cout << "|_________|" << std::endl;
        std::cout << "|    / \\ /        \\\\        \\ /\\    |" << std::endl;
        std::cout << "|  /    V          ))        V   \\  |" << std::endl;
        std::cout << "|/                //               \\| " << std::endl;
        std::cout << "`                 V                 '" << std::endl;
        std::cout << "" << std::endl;
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* threadId) {
        SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)); memberFunctionId++) {
            if (SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId)) {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0) = SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId);
                break;
            }
        }
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_List_Of_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId) {
        stat_REG_List_Of_PGM_SLIF_LaunchQue = nullptr;
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_List_Of_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId) {
        auto handleId = new int(0);
        stat_REG_List_Of_PGM_SLIF_LaunchQue = new std::list<slif::SLIF_LaunchQue_Framework*>;
        while (SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId) == nullptr) {}
        SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->resize(1);
        SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->assign(*handleId, new class slif::SLIF_LaunchQue_Framework(threadId));
        SLIF_LaunchQue_generateProgram(threadId);
        SLIF_LaunchQue_stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(threadId);
    }
    std::list<slif::SLIF_LaunchQue_Framework*>*  slif::LaunchQue::SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(uint8_t* threadId) {
        return stat_REG_List_Of_PGM_SLIF_LaunchQue;
    }
    slif::SLIF_LaunchQue_Framework* slif::LaunchQue::SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(uint8_t* threadId, const int* handleId) {
        auto temp = stat_REG_List_Of_PGM_SLIF_LaunchQue->begin();
        std::advance(temp, *handleId);
        return *temp;
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED = nullptr;
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot1_DEFINE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        stat_REG_HandleId_For_PGM_slifMutexQue = nullptr;
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED = new std::array<bool, 13>();
        while (SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId) == nullptr) { }
        for (int index = 0; index < SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->size(); index++) {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(index) = true;
        }
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        stat_REG_HandleId_For_PGM_slifMutexQue = new int();
        *stat_REG_HandleId_For_PGM_slifMutexQue = int(INT16_MAX);
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        for (int index = 0; index < SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->size(); index++) {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(index) = true;
        }
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot3_INITIALISE_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        stat_REG_HandleId_For_PGM_slifMutexQue = slif::MutexQue::generateHandle(threadId);
    }
    std::array<bool, 13>* slif::LaunchQue::SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        return stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED;
    }
    int* slif::LaunchQue::SLIF_LaunchQue_stat_REG_get_ptr_HandleId_For_PGM_slifMutexQue(uint8_t* threadId) {
        return stat_REG_HandleId_For_PGM_slifMutexQue;
    }