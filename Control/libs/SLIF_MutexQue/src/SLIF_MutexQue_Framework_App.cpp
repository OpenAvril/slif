#include "../include/SLIF_MutexQue_Framework_App.h"
#include <iostream>
    slif::SLIF_MutexQue_Framework_App_Control* slif::SLIF_MutexQue_Framework_App::_stat_CLASS_ptr_SLIF_MutexQue_App_Control;
    slif::SLIF_MutexQue_Framework_App::SLIF_MutexQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(sysThreadId)" << std::endl;
        CLASS_boot0_DECLARE_SLIF_MutexQue_App(sysThreadId);
        CLASS_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId);
        CLASS_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App::~SLIF_MutexQue_Framework_App() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(sysThreadId)" << std::endl;
        delete _stat_CLASS_ptr_SLIF_MutexQue_App_Control;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::CLASS_boot0_DECLARE_SLIF_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot0_DECLARE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot0_DECLARE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::CLASS_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::CLASS_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot0_DECLARE_SLIF_MutexQue_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot0_DECLARE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot0_DECLARE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot1_DEFINE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot2_SUBSTANTIATE_SLIF_MutexQue_App(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot2_SUBSTANTIATE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot2_SUBSTANTIATE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot3_INITIALISE_SLIF_MutexQue_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::dyn_APP_FUNCT_write_End(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_End(sysThreadId)" << std::endl;
        while (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId)) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(sysThreadId, obj, coreId);
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId, false);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(sysThreadId, true);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId)+1);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId) == static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId))) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndsysThreadId_Index(sysThreadId, 0);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(sysThreadId,coreId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(sysThreadId));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(sysThreadId, true);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(sysThreadId, true);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_End(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::dyn_APP_FUNCT_write_Start(uint8_t* sysThreadId, slif::SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_Start(sysThreadId)" << std::endl;
        while (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId)) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(sysThreadId, obj, coreId);
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId, false);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(sysThreadId, true);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId)+1);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId) == static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(sysThreadId)->dyn_REG_get_ptr_SLIF_MutexQue_number_Of_Implemented_Threads(sysThreadId))) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartsysThreadId_Index(sysThreadId, 0);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(sysThreadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(sysThreadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(sysThreadId, obj, coreId);
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_Start(sysThreadId)" << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App_Control* slif::SLIF_MutexQue_Framework_App::dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)" << std::endl;
        return stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId);
    }
    void slif::SLIF_MutexQue_Framework_App::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(sysThreadId)" << std::endl;
        _stat_CLASS_ptr_SLIF_MutexQue_App_Control = nullptr;
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(sysThreadId)" << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(sysThreadId)" << std::endl;
        _stat_CLASS_ptr_SLIF_MutexQue_App_Control = new class slif::SLIF_MutexQue_Framework_App_Control(sysThreadId);
        while (stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId) == nullptr) {}
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(sysThreadId)" << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App_Control* slif::SLIF_MutexQue_Framework_App::stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << " :: <= class : stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(sysThreadId)" << std::endl;
        return _stat_CLASS_ptr_SLIF_MutexQue_App_Control;
    }