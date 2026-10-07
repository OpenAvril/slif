#include "../include/CLIB_LaunchQue_Framework_App.h"
#include "../include/CLIB_LaunchQue_Framework_App_Control.h"
#include "../include/CLIB_LaunchQue_Framework.h"
#include "../../../include/CLIB_ThreadLogs.h"
#include <iostream>
    slif::CLIB_LaunchQue_Framework_App_Control* slif::CLIB_LaunchQue_Framework_App::stat_CLASS_CLIB_LaunchQue_Framework_App_Control;
    slif::CLIB_LaunchQue_Framework_Execute* slif::CLIB_LaunchQue_Framework_App::stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute;
// public.
    slif::CLIB_LaunchQue_Framework_App::CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : CLIB_LaunchQue_Framework_App(sysThreadId)."));
        stat_CALSS_boot0_DECLARE_CLIB_LaunchQue_Framework_App(sysThreadId);
        stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId);
        stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId);
        stat_CALSS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    slif::CLIB_LaunchQue_Framework_App::~CLIB_LaunchQue_Framework_App() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : CLIB_LaunchQue_Framework_App(sysThreadId)"));
        delete stat_CLASS_CLIB_LaunchQue_Framework_App_Control;
        delete stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute;
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(uint8_t* sysThreadId,CLIB_LaunchQue_Framework* obj, uint8_t* concurrentThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(sysThreadId)"));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_APP_FUNCT_CLIB_LaunchQue_thread_Start(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(uint8_t* sysThreadId, CLIB_LaunchQue_Framework* obj, uint8_t* concurrentThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(sysThreadId)"));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId)));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_APP_FUNCT_CLIB_LaunchQue_thread_End(sysThreadId)"));
    }
    slif::CLIB_LaunchQue_Framework_App_Control* slif::CLIB_LaunchQue_Framework_App::dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        return stat_CLASS_get_CLIB_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId);
    }
    slif::CLIB_LaunchQue_Framework_Execute* slif::CLIB_LaunchQue_Framework_App::dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : dyn_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)"));
        return stat_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId);
    }
    void slif::CLIB_LaunchQue_Framework_App::dyn_REG_boot1_REG_DEFINE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_REG_boot1_REG_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_REG_boot1_REG_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::dyn_REG_boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::dyn_REG_boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_REG_boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : dyn_REG_boot3_REG_INITIALISE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::stat_CALSS_boot0_DECLARE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : stat_CALSS_boot0_DECLARE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : stat_CALSS_boot0_DECLARE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
        stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : stat_CALSS_boot1_DEFINE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App::stat_CALSS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : stat_CALSS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
        stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App : stat_CALSS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App(sysThreadId)"));
    }
// private.
    void slif::CLIB_LaunchQue_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId) {
        stat_CLASS_CLIB_LaunchQue_Framework_App_Control = nullptr;
    }
    void slif::CLIB_LaunchQue_Framework_App::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute = nullptr;
    }
    void slif::CLIB_LaunchQue_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId) {
        stat_CLASS_CLIB_LaunchQue_Framework_App_Control = new slif::CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        while (stat_CLASS_get_CLIB_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId) == nullptr) { }
    }
    void slif::CLIB_LaunchQue_Framework_App::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute = new slif::CLIB_LaunchQue_Framework_Execute(sysThreadId);
        while (stat_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId) == nullptr) { }
    }
    slif::CLIB_LaunchQue_Framework_App_Control* slif::CLIB_LaunchQue_Framework_App::stat_CLASS_get_CLIB_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : stat_CLASS_get_CLIB_LaunchQue_Framework_App_WriteEnable_Control(sysThreadId)"));
        return stat_CLASS_CLIB_LaunchQue_Framework_App_Control;
    }
    slif::CLIB_LaunchQue_Framework_Execute* slif::CLIB_LaunchQue_Framework_App::stat_CLASS_get_CLIB_LaunchQue_Framework_Execute(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= class : stat_CLASS_get_CLIB_LaunchQue_Framework_Execute(sysThreadId)"));
        return stat_CLASS_CLIB_LaunchQue_Framework_App_Ececute;
    }