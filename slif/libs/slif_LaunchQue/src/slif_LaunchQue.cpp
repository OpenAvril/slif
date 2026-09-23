#include "../include/slif_LaunchQue.h"
#include "../include/slif_LaunchQue_Framework_App.h"
#include "../include/slif_LaunchQue_Framework_App_Control.h"
#include "../include/slif_LaunchQue_Framework_Execute.h"
#include "../include/slif_LaunchQue_Framework_Global.h"
#include "../libs/CLIB_WriteQueForThreadsAt_lqMutexQue/include/lqClusterAccess.h"
#include <iostream>
using namespace slif;
    static slif::slif_LaunchQue_Framework* slif_LaunchQue_dyn_CLASS_ptr_Framework_slif_LaunchQue;
    static std::array<bool, 2>* slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Native;
    static std::array<bool, 10>* slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
// Native.
    // public.
    void* slif::Native::generateProgram(uint8_t threadId, std::byte* MAX_NUMBER_OF_THREADS_FOR_ACCESS) {
		std::cout << "entered app_FUNCT_generate_Program(threadId)." << std::endl;

		std::cout << "started Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;
		slif_LaunchQue_stat_boot1_CLASS_DEFINE_slif_LaunchQue_Framework(threadId);
		slif_LaunchQue_stat_boot3_CLASS_INITIALISE_slif_LaunchQue_Framework(threadId);
		std::cout << "done Architecture Framework CLASS - DECLARE DEFINE INITIALISE." << std::endl;

		std::cout << "started slif_LaunchQue_Framework_Global Meta-Data and Settings." << std::endl;
		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_create_slif_LaunchQue_Framework_Global_and_Settings(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId)->boot1_REG_DEFINE_slif_LaunchQue_Framework_Global(threadId);
		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId)->boot2_REG_SUBSTANTIATE_slif_LaunchQue_Framework_Global(threadId);
		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId)->boot3_REG_INITIALISE_slif_LaunchQue_Framework_Global(threadId, MAX_NUMBER_OF_THREADS_FOR_ACCESS);
		std::cout << "done slif_LaunchQue_Framework_Global Meta-Data and Settings." << std::endl;

		std::cout << "started IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
		std::cout << "done IndepENDSent STRUCT(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;
        slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_create_Architecture(threadId, reinterpret_cast<std::byte*>(slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId)->dyn_REG_get_slif_LaunchQue_Framework_Global_number_Implemented_Threads(threadId))));
		std::cout << "started Registers - DEFINE" << std::endl;

		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot1_DEFINE_slif_LaunchQue_Framework_App_Control(threadId);
		std::cout << "done Registers - DEFINE." << std::endl;
		std::cout << "started Registers - SUBSTANTIATE." << std::endl;
		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot2_SUBSTANTIATE_slif_LaunchQue_Framework_App_Control(threadId, slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId));
		std::cout << "done Registers - SUBSTANTIATE." << std::endl;
		std::cout << "started Registers - INITIALISE." << std::endl;
		slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_boot3_INITIALISE_slif_LaunchQue_Framework_App_Control(threadId);
		std::cout << "done Registers - INITIALISE." << std::endl;
		std::cout << "done Architecture Application CLASS(s) - DECLARE DEFINE INITIALISE, Registers - DECLARE SUBSTANTIATE INITIALISE." << std::endl;

		std::cout << "started Program - INSTANTIATION." << std::endl;
		slif_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(threadId);
        slif_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Control(threadId);
		slif_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(threadId);
        slif_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Control(threadId);
		slif_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(threadId);
        slif_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Control(threadId);
        slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_Execute(threadId)->dyn_PGM_boot4_INSTANTIATE_slif_LaunchQue_Framework_Execute(threadId);
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
        return (void*)slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId);
    }
    void slif::Native::slif_LaunchQue_Framework_App_FUNCT_terminate_Progaram(uint8_t threadId)
    {
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0)) {
            delete slif_LaunchQue_dyn_CLASS_ptr_Framework_slif_LaunchQue;
            delete slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Native;
            delete slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(1) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(threadId);
        }
    }
    // private.
    void slif::Native::slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED(uint8_t threadId) {
        slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)); memberFunctionId++) {
            if (slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(memberFunctionId)) {
                slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(0) = slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(memberFunctionId);
                break;
            }
        }
    }
    void slif::Native::slif_LaunchQue_stat_boot1_CLASS_DEFINE_slif_LaunchQue_Framework(uint8_t threadId) {
        slif_LaunchQue_dyn_CLASS_ptr_Framework_slif_LaunchQue = nullptr;
    }
    void slif::Native::slif_LaunchQue_stat_boot3_CLASS_INITIALISE_slif_LaunchQue_Framework(uint8_t threadId) {
        slif_LaunchQue_dyn_CLASS_ptr_Framework_slif_LaunchQue = new slif::slif_LaunchQue_Framework(threadId);
        while (slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(threadId) == nullptr) {}
    }
    slif::slif_LaunchQue_Framework* slif::Native::slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_Native(uint8_t threadId) {
        return slif_LaunchQue_dyn_CLASS_ptr_Framework_slif_LaunchQue;
    }
    void slif::Native::slif_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Native = nullptr;
    }
    void slif::Native::slif_LaunchQue_stat_REG_boot1_DEFINE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId) {
        slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Control = nullptr;
    }
    void slif::Native::slif_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Native = new std::array<bool, 2>();
        while (slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId) == nullptr) { }
        for (int index = 0; index < slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->size(); index++) {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(index) = true;
        }
    }
    void slif::Native::slif_LaunchQue_stat_REG_boot2_SUBSTANTIATE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId) {
        slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Control = new std::array<bool, 10>();
        while (slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId) == nullptr) { }
        for (int index = 0; index < slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->size(); index++) {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(index) = true;
        }
    }
    void slif::Native::slif_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        for (int index = 0; index < slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->size(); index++) {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(threadId)->at(index) = true;
        }
    }
    void slif::Native::slif_LaunchQue_stat_REG_boot3_INITIALISE_flag_isMemberFunctionINSTANTIATED_Control(uint8_t threadId) {
        for (int index = 0; index < slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->size(); index++) {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(threadId)->at(index) = true;
        }
    }
    std::array<bool, 2>* slif::Native::slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Native(uint8_t threadId) {
        return slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Native;
    }
    std::array<bool, 10>* slif::Native::slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_Control(uint8_t threadId) {
        return slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
    }
// Control.
    // public.
    void slif::LaunchQue::slif_LaunchQue_Framework_App_FUNCT_request_Wait_launch(uint8_t threadId, unsigned char* bytes)
    {
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_APP_FUNCT_slif_LaunchQue_thread_Start(threadId, slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId), slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(1) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
    }
    void slif::LaunchQue::slif_LaunchQue_Framework_App_FUNCT_thread_End(uint8_t threadId, unsigned char* bytes)
    {
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_APP_FUNCT_slif_LaunchQue_thread_End(threadId, slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId), (uint8_t)*bytes);
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(2) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
    }
    unsigned char* slif::LaunchQue::slif_LaunchQue_Framework_App_REG_get_coreId_To_launch(uint8_t threadId)
    {
        uint8_t* result = nullptr;
        result = new uint8_t(UINT8_MAX);
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            *result = slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_slif_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0);
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(3) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
        return slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_uint8_t_To_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::slif_LaunchQue_Framework_App_REG_get_Flag_Active(uint8_t threadId)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            *result = slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId)->dyn_REG_get_slif_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId);
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(4) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
        return slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::slif_LaunchQue_Framework_App_REG_get_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytes)
    {
        bool* result = nullptr;
        result = new bool(true);
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            *result = slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_slif_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytes));
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(5) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
        return slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::slif_LaunchQue_Framework_App_REG_get_Flag_Idle(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            *result = slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_Global(threadId)->dyn_REG_get_slif_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId);
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(6) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
        return slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::slif_LaunchQue_Framework_App_REG_get_FLAG_isPGM_INSTANTIATED(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            *result = slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
        return slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    unsigned char* slif::LaunchQue::slif_LaunchQue_Framework_App_REG_get_State_launchBit(uint8_t threadId) {
        bool* result = nullptr;
        result = new bool(true);
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            *result = slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_slif_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_slif_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(threadId, 0));
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(7) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
        return slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_bool_to_ByteArray(threadId, *result);
    }
    void slif::LaunchQue::slif_LaunchQue_Framework_App_REG_set_Flag_ConcurrentCoreState(uint8_t threadId, unsigned char* bytesThreadId, unsigned char*  byteBool) {
        if (!slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0)) {
            slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(threadId)->dyn_CLASS_get_ptr_slif_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_slif_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_slif_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, slif::slif_LaunchQue_Framework_Global::stat_CONVERT_slif_LaunchQue_Framework_Global_ByteArray_To_uint8_t(threadId, bytesThreadId), byteBool);
        }
        else {
            slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(8) = !slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(8);
            slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(threadId);
        }
    }
    // private.
    void slif::LaunchQue::slif_LaunchQue_stat_app_FUNCT_Calc_IsAllINSTANTIATED_LaunchQue(uint8_t threadId) {
        slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0) = false;
        for (int memberFunctionId = 1; memberFunctionId < sizeof(*slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)); memberFunctionId++) {
            if (slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(memberFunctionId)) {
                slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(0) = slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(threadId)->at(memberFunctionId);
                break;
            }
        }
    }
   slif::slif_LaunchQue_Framework* slif::LaunchQue::slif_LaunchQue_stat_CLASS_get_ptr_slif_LaunchQue_Framework_For_LaunchQue(uint8_t threadId) {
        return slif_LaunchQue_dyn_CLASS_ptr_Framework_slif_LaunchQue;
    }
    std::array<bool, 10>* slif::LaunchQue::slif_LaunchQue_stat_REG_get_ptr_FLAG_Array_isMemberFunctionINSTANTIATED_LaunchQue(uint8_t threadId) {
        return slif_LaunchQue_stat_REG_flag_isMemberFunctionINSTANTIATED_Control;
    }