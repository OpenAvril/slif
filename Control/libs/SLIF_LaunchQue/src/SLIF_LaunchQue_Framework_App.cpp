#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework.h"
#include <iostream>
    slif::SLIF_LaunchQue_Framework_App_Control* slif::SLIF_LaunchQue_Framework_App::_stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
    slif::SLIF_LaunchQue_Framework_Execute* slif::SLIF_LaunchQue_Framework_App::_stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
// public.
    slif::SLIF_LaunchQue_Framework_App::SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(sysThreadId)." << std::endl;
        stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(sysThreadId);
        stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId);
        stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId);
        stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    slif::SLIF_LaunchQue_Framework_App::~SLIF_LaunchQue_Framework_App() {
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        delete _stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
        delete _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
        std::cout << "thread " << std::to_string(0) << " :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(uint8_t* sysThreadId,SLIF_LaunchQue_Framework* obj, uint8_t concurrentsysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, 0), obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(uint8_t* sysThreadId, SLIF_LaunchQue_Framework* obj, uint8_t concurrentsysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(sysThreadId)" << std::endl;
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentsysThreadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(sysThreadId)" << std::endl;
    }
    slif::SLIF_LaunchQue_Framework_App_Control* slif::SLIF_LaunchQue_Framework_App::dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(sysThreadId)" << std::endl;
        return stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId);
    }
    slif::SLIF_LaunchQue_Framework_Execute* slif::SLIF_LaunchQue_Framework_App::dyn_CLASS_get_SLIF_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : dyn_CLASS_get_SLIF_LaunchQue_Framework_Execute(sysThreadId)" << std::endl;
        return stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(sysThreadId);
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(sysThreadId);
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(sysThreadId)" << std::endl;
    }
// private.
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Control = nullptr;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute = nullptr;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Control = new slif::SLIF_LaunchQue_Framework_App_Control(sysThreadId);
        while (stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId) == nullptr) { }
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute = new slif::SLIF_LaunchQue_Framework_Execute(sysThreadId);
        while (stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(sysThreadId) == nullptr) { }
    }
    slif::SLIF_LaunchQue_Framework_App_Control* slif::SLIF_LaunchQue_Framework_App::stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId)" << std::endl;
        return _stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
    }
    slif::SLIF_LaunchQue_Framework_Execute* slif::SLIF_LaunchQue_Framework_App::stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        std::cout << "thread " << std::to_string(*sysThreadId) << "  :: <= class : stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(sysThreadId)" << std::endl;
        return _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
    }