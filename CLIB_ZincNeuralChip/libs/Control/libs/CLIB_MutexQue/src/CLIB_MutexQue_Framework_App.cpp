#include "../include/CLIB_MutexQue_Framework_App.h"
#include <iostream>
    slif::CLIB_MutexQue_Framework_App_Control* slif::CLIB_MutexQue_Framework_App::stat_CLASS_ptr_CLIB_MutexQue_App_Control;
    slif::CLIB_MutexQue_Framework_App::CLIB_MutexQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLIB_MutexQue_App(sysThreadId)" << std::endl;
        CLASS_boot0_DECLARE_CLIB_MutexQue_App(sysThreadId);
        CLASS_boot1_DEFINE_CLIB_MutexQue_App(sysThreadId);
        CLASS_boot3_INITIALISE_CLIB_MutexQue_App(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    slif::CLIB_MutexQue_Framework_App::~CLIB_MutexQue_Framework_App() {
        std::cout << "thread "  << 0 << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLIB_MutexQue_App(sysThreadId)" << std::endl;
        delete stat_CLASS_ptr_CLIB_MutexQue_App_Control;
        std::cout << "thread "  << 0 << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::CLASS_boot0_DECLARE_CLIB_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLASS_boot0_DECLARE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLASS_boot0_DECLARE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::CLASS_boot1_DEFINE_CLIB_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLASS_boot1_DEFINE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        stat_CLASS_boot1_DEFINE_CLIB_MutexQue_App_Control(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLASS_boot1_DEFINE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::CLASS_boot3_INITIALISE_CLIB_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLASS_boot3_INITIALISE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        stat_CLASS_boot3_INITIALISE_CLIB_MutexQue_App_Control(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : CLASS_boot3_INITIALISE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::REG_boot0_DECLARE_CLIB_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot0_DECLARE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot0_DECLARE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::REG_boot1_DEFINE_CLIB_MutexQue_App(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot1_DEFINE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot1_DEFINE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::REG_boot2_SUBSTANTIATE_CLIB_MutexQue_App(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot2_SUBSTANTIATE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot2_SUBSTANTIATE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::REG_boot3_INITIALISE_CLIB_MutexQue_App(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot3_INITIALISE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : REG_boot3_INITIALISE_CLIB_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::dyn_APP_FUNCT_write_End(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_End(sysThreadId)" << std::endl;
        while (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)) {
            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(sysThreadId, obj, coreId);
            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId, false);
        }
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId, true);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, coreId)+1);
        if (*obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, coreId) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)) {
            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, 0);
        }
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_CLIB_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(sysThreadId,coreId, *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CONST_CLIB_MutexQue_2bitFLAG_IDLE(sysThreadId));
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, true);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, true);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_End(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::dyn_APP_FUNCT_write_Start(uint8_t* sysThreadId, slif::CLIB_MutexQue_Framework* obj, uint8_t* coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_Start(sysThreadId)" << std::endl;
        while (obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)) {
            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_dynamicIn(sysThreadId, obj, coreId);
            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId, false);
        }
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId, true);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, coreId)+1);
        if (*obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, coreId) == *CLIB_MutexQue_Framework_Global::stat_REG_get_ptr_CLIB_MutexQue_number_Of_Implemented_Threads(sysThreadId)) {
            obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_CLIB_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, 0);
        }
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_CLIB_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_CLIB_MutexQue_Framework_App_Control_writeEnable_Activate(sysThreadId, obj, coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_Start(sysThreadId)" << std::endl;
    }
    slif::CLIB_MutexQue_Framework_App_Control* slif::CLIB_MutexQue_Framework_App::dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)" << std::endl;
        return stat_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId);
    }
    void slif::CLIB_MutexQue_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_CLIB_MutexQue_App_Control(sysThreadId)" << std::endl;
        stat_CLASS_ptr_CLIB_MutexQue_App_Control = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_CLIB_MutexQue_App_Control(sysThreadId)" << std::endl;
    }
    void slif::CLIB_MutexQue_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_CLIB_MutexQue_App_Control(sysThreadId)" << std::endl;
        stat_CLASS_ptr_CLIB_MutexQue_App_Control = new class slif::CLIB_MutexQue_Framework_App_Control(sysThreadId);
        while (stat_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId) == nullptr) {}
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: CLIB : CLIB_MutexQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_CLIB_MutexQue_App_Control(sysThreadId)" << std::endl;
    }
    slif::CLIB_MutexQue_Framework_App_Control* slif::CLIB_MutexQue_Framework_App::stat_CLASS_get_ptr_CLIB_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_CLIB_MutexQue_App_Control(sysThreadId)" << std::endl;
        return stat_CLASS_ptr_CLIB_MutexQue_App_Control;
    }