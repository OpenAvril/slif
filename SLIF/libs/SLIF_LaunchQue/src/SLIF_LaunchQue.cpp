#include "../include/SLIF_LaunchQue.h"
#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework_Execute.h"
#include "../include/SLIF_LaunchQue_Framework_Global.h"
#include "../../SLIF_MutexQue/include/SLIF_MutexQue.h"
#include <iostream>
    static std::list<slif::SLIF_LaunchQue_Framework*>* stat_REG_List_Of_PGM_SLIF_LaunchQue;
    static std::array<bool, 2>* stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED;
    static int* handleId = new int(0);
// public.
    int* slif::LaunchQue::generateHandle(uint8_t* threadId, std::byte* MAX_NUMBER_OF_CONCURRENT_TASK_THREADS) {
        SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_set_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId, MAX_NUMBER_OF_CONCURRENT_TASK_THREADS);

        return handleId;
    }
    void* slif::LaunchQue::generateProgram(uint8_t* threadId) {
		std::cout << "entered app_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework(threadId);
		SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework(threadId);
		std::cout << "done Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started SLIF_LaunchQue_Framework_Global Meta-Data and Settings." << std::endl;
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_create_SLIF_LaunchQue_Framework_Global_and_Settings(threadId);
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->boot1_REG_DEFINE_SLIF_LaunchQue_Framework_Global(threadId);
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_Global(threadId);
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_Global(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId));
		std::cout << "done SLIF_LaunchQue_Framework_Global Meta-Data and Settings." << std::endl;

		std::cout << "started IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "done IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
        SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_create_Architecture(threadId, reinterpret_cast<std::byte*>(slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId))));
		std::cout << "started Registers - DEFINE" << std::endl;

		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot1_DEFINE_SLIF_LaunchQue_Framework_App_Control(threadId);
		std::cout << "done Registers - DEFINE." << std::endl;
		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_SLIF_LaunchQue_Framework_App_Control(threadId, SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId));
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
        return (void*)SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId);
    }
    unsigned char* slif::LaunchQue::get_coreIdTolaunch(uint8_t* threadId) {
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(3) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
        return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::get_FlagSTATEisActive(uint8_t* threadId)
        {
            bool* result = nullptr;
            result = new bool(true);
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId);
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(4) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
            return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
        }
    unsigned char* slif::LaunchQue::get_FlagSTATEofConcurrentCore(uint8_t* threadId, unsigned char* bytes)
        {
            bool* result = nullptr;
            result = new bool(true);
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(5) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
            return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
        }
    unsigned char* slif::LaunchQue::get_FlagisIdle(uint8_t* threadId) {
            bool* result = nullptr;
            result = new bool(true);
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId);
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(6) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
            return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
        }
    unsigned char* slif::LaunchQue::get_FlagSTATEofThreadToLaunch(uint8_t* threadId) {
            bool* result = nullptr;
            result = new bool(true);
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                *result = SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0));
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(7) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
            return SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
        }
    unsigned char* slif::LaunchQue::isINSTANTIATED(uint8_t* threadId)	{
            std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
            bool* result = nullptr;
            result = new bool(threadId);
            *result = true;
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                *result = SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(1) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId);
            }
            std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue : SLIF_MutexQue_App_FUNCT_get_FLAG_isPGM_INSTANTIATED(threadId)." << std::endl;
            return slif::SLIF_MutexQue_Framework_Global::stat_APP_CONVERT_SLIF_MutexQue_MsbBoolean_To_MsbByteArray(threadId, *result);
        }
    void slif::LaunchQue::set_FlagSTATEofConcurrentCore(uint8_t* threadId, unsigned char* bytesThreadId, unsigned char*  byteBool) {
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytesThreadId), byteBool);
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(8) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(8);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
        }
    void slif::LaunchQue::terminateProgaram(uint8_t* threadId)
        {
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                delete stat_REG_List_Of_PGM_SLIF_LaunchQue;
                delete SLIF_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED;
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(1) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
        }
    void slif::LaunchQue::threadRequestlaunch(uint8_t* threadId, unsigned char* bytes)
        {
            if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
                SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(threadId, SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId), slif::SLIF_LaunchQue_Framework_Global::stat_CONVERT_SLIF_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
            }
            else {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(1) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
                SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
            }
        }
    void slif::LaunchQue::threadEnd(uint8_t* threadId, unsigned char* bytes)
    {
        if (!SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0)) {
            SLIF_LaunchQue_stat_CLASS_get_ptr_PGM_SLIF_LaunchQue_Framework(threadId, handleId)->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(threadId, SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId), (uint8_t)*bytes);
        }
        else {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(2) = !SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0);
            SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
// private.
    void slif::LaunchQue::SLIF_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t* threadId) {
        SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)); memberFunctionId++) {
            if (SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId)) {
                SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(0) = SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(memberFunctionId);
                break;
            }
        }
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_boot1_CLASS_DEFINE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
        stat_REG_List_Of_PGM_SLIF_LaunchQue = nullptr;
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_boot3_CLASS_INITIALISE_SLIF_LaunchQue_Framework(uint8_t* threadId) {
        stat_REG_List_Of_PGM_SLIF_LaunchQue = new std::list<slif::SLIF_LaunchQue_Framework*>;
        while (SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId) == nullptr) {}
        SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->resize(1);
        SLIF_LaunchQue_stat_REG_get_ptr_List_Of_PGM_SLIF_LaunchQue(threadId)->assign(0, static_cast<slif::SLIF_LaunchQue_Framework*>(slif::LaunchQue::generateProgram(threadId)));
        
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
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED = new std::array<bool, 2>();
        while (SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId) == nullptr) { }
        for (int index = 0; index < SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->size(); index++) {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(index) = true;
        }
    }
    void slif::LaunchQue::SLIF_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        for (int index = 0; index < SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->size(); index++) {
            SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(threadId)->at(index) = true;
        }
    }
    std::array<bool, 2>* slif::LaunchQue::SLIF_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED(uint8_t* threadId) {
        return stat_REG_Flag_SLIF_LaunchQue_isMemberFunctionINSTANTIATED;
    }