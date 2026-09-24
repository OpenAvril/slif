#include "SLIF_MutexQue_Framework_App.h"
#include <iostream>
    slif::SLIF_MutexQue_Framework_App_Control* slif::SLIF_MutexQue_Framework_App::_stat_CLASS_ptr_SLIF_MutexQue_App_Control;
    slif::SLIF_MutexQue_Framework_App::SLIF_MutexQue_Framework_App(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(threadId)." << std::endl;
        CLASS_boot0_DECLARE_SLIF_MutexQue_App(threadId);
        CLASS_boot1_DEFINE_SLIF_MutexQue_App(threadId);
        CLASS_boot3_INITIALISE_SLIF_MutexQue_App(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(threadId)." << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App::~SLIF_MutexQue_Framework_App() {
        std::cout << "thread "  << 0 << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(threadId)." << std::endl;
        delete _stat_CLASS_ptr_SLIF_MutexQue_App_Control;
        std::cout << "thread "  << 0 << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::CLASS_boot0_DECLARE_SLIF_MutexQue_App(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot0_DECLARE_SLIF_MutexQue_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot0_DECLARE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::CLASS_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot1_DEFINE_SLIF_MutexQue_App(threadId)." << std::endl;
        stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot1_DEFINE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::CLASS_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot3_INITIALISE_SLIF_MutexQue_App(threadId)." << std::endl;
        stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(threadId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : CLASS_boot3_INITIALISE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot0_DECLARE_SLIF_MutexQue_App(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot0_DECLARE_SLIF_MutexQue_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot0_DECLARE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot1_DEFINE_SLIF_MutexQue_App(uint8_t* threadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot1_DEFINE_SLIF_MutexQue_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot1_DEFINE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot2_SUBSTANTIATE_SLIF_MutexQue_App(uint8_t* threadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot2_SUBSTANTIATE_SLIF_MutexQue_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot2_SUBSTANTIATE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::REG_boot3_INITIALISE_SLIF_MutexQue_App(uint8_t* threadId, slif::SLIF_MutexQue_Framework* obj) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot3_INITIALISE_SLIF_MutexQue_App(threadId)." << std::endl;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : REG_boot3_INITIALISE_SLIF_MutexQue_App(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::dyn_APP_FUNCT_write_End(uint8_t* threadId, slif::SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_End(threadId)." << std::endl;
        while (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId)) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(threadId, obj, coreId);
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId, false);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_ONE(threadId, true);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId)+1);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId) == static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId))) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteEndthreadId_Index(threadId, 0);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_Item_On_list_Of_SLIF_MutexQue_Framework_App_Control_2ibt_FLAG_WriteState(threadId,coreId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_ptr_CONST_SLIF_MutexQue_2bitFLAG_IDLE(threadId));
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(threadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(threadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteEndThreadRELASE_REMAINING(threadId, true);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_REMAINING(threadId, true);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_End(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::dyn_APP_FUNCT_write_Start(uint8_t* threadId, slif::SLIF_MutexQue_Framework* obj, uint8_t coreId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_Start(threadId)." << std::endl;
        while (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId)) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_dynamicIn(threadId, obj, coreId);
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId, false);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_isWriteStartThreadRELASE_ONE(threadId, true);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId, obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId)+1);
        if (obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_get_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId) == static_cast<uint8_t>(obj->dyn_CLASS_get_ptr_SLIF_MutexQue_Global(threadId)->dyn_REG_get_SLIF_MutexQue_number_Of_Implemented_Threads(threadId))) {
            obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_REG_set_FLAG_SLIF_MutexQue_Framework_App_Control_writeCycle_Try_WriteStartthreadId_Index(threadId, 0);
        }
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeQue_Update(threadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_SortQue(threadId, obj);
        obj->dyn_CLASS_get_ptr_SLIF_MutexQue_App(threadId)->dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)->dyn_APP_FUNCT_SLIF_MutexQue_Framework_App_Control_writeEnable_Activate(threadId, obj, coreId);
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : dyn_APP_FUNCT_write_Start(threadId)." << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App_Control* slif::SLIF_MutexQue_Framework_App::dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= class : dyn_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)." << std::endl;
        return stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId);
    }
    void slif::SLIF_MutexQue_Framework_App::stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(threadId)." << std::endl;
        _stat_CLASS_ptr_SLIF_MutexQue_App_Control = nullptr;
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_SLIF_MutexQue_App_Control(threadId)." << std::endl;
    }
    void slif::SLIF_MutexQue_Framework_App::stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: entered LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(threadId)." << std::endl;
        _stat_CLASS_ptr_SLIF_MutexQue_App_Control = new class slif::SLIF_MutexQue_Framework_App_Control(threadId);
        while (stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId) == nullptr) {}
        std::cout << "thread " << std::to_string(*threadId) << " :: exiting LIB :: slif : SLIF_MutexQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_SLIF_MutexQue_App_Control(threadId)." << std::endl;
    }
    slif::SLIF_MutexQue_Framework_App_Control* slif::SLIF_MutexQue_Framework_App::stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(uint8_t* threadId) {
        std::cout << "thread " << std::to_string(*threadId) << " :: <= class : stat_CLASS_get_ptr_SLIF_MutexQue_App_Control(threadId)." << std::endl;
        return _stat_CLASS_ptr_SLIF_MutexQue_App_Control;
    }