#include "../include/SLIF_LaunchQue_Framework_App.h"
#include "../include/SLIF_LaunchQue_Framework_App_Control.h"
#include "../include/SLIF_LaunchQue_Framework.h"
#include "../../SLIF_ThreadsLog/include/CLIB_ThreadLogs.h"
    slif::SLIF_LaunchQue_Framework_App_Control* slif::SLIF_LaunchQue_Framework_App::_stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
    slif::SLIF_LaunchQue_Framework_Execute* slif::SLIF_LaunchQue_Framework_App::_stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
// public.
    slif::SLIF_LaunchQue_Framework_App::SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(threadId)."));
        stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(threadId);
        stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(threadId);
        stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(threadId);
        stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(threadId)"));
    }
    slif::SLIF_LaunchQue_Framework_App::~SLIF_LaunchQue_Framework_App() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(threadId)"));
        delete _stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
        delete _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : SLIF_LaunchQue_Framework_App(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(uint8_t* threadId,SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(threadId)"));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_get_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, 0), obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(threadId));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(threadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId)));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(threadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId)));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_Start(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(uint8_t* threadId, SLIF_LaunchQue_Framework* obj, uint8_t concurrentThreadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(threadId)"));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_REG_set_SLIF_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(threadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(threadId));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchQue_Update(threadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId)));
        obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_App(threadId)->dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)->dyn_App_FUNCT_SLIF_LaunchQue_Framework_App_Control_launchEnable_SortQue(threadId, obj, reinterpret_cast<uint8_t*>(obj->dyn_CLASS_get_ptr_SLIF_LaunchQue_Framework_Global(threadId)->dyn_REG_get_SLIF_LaunchQue_Framework_Global_number_Implemented_Threads(threadId)));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_APP_FUNCT_SLIF_LaunchQue_thread_End(threadId)"));
    }
    slif::SLIF_LaunchQue_Framework_App_Control* slif::SLIF_LaunchQue_Framework_App::dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : dyn_CLASS_get_SLIF_LaunchQue_Framework_App_Control(threadId)"));
        return stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(threadId);
    }
    slif::SLIF_LaunchQue_Framework_Execute* slif::SLIF_LaunchQue_Framework_App::dyn_CLASS_get_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : dyn_CLASS_get_SLIF_LaunchQue_Framework_Execute(threadId)"));
        return stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(threadId);
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot1_REG_DEFINE_SLIF_LaunchQue_Framework_App(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot2_REG_SUBSTANTIATE_SLIF_LaunchQue_Framework_App(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : dyn_REG_boot3_REG_INITIALISE_SLIF_LaunchQue_Framework_App(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(threadId)"));
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot0_DECLARE_SLIF_LaunchQue_Framework_App(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(threadId)"));
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(threadId);
        stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot1_DEFINE_SLIF_LaunchQue_Framework_App(threadId)"));
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(threadId)"));
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(threadId);
        stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(threadId);
        slif::ThreadLogs::printl(threadId, new std::string(" :: entered LIB :: wq : SLIF_LaunchQue_Framework_App : stat_CALSS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App(threadId)"));
    }
// private.
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* threadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Control = nullptr;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot1_DEFINE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute = nullptr;
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* threadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Control = new slif::SLIF_LaunchQue_Framework_App_Control(threadId);
        while (stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(threadId) == nullptr) { }
    }
    void slif::SLIF_LaunchQue_Framework_App::stat_CLASS_boot3_INITIALISE_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute = new slif::SLIF_LaunchQue_Framework_Execute(threadId);
        while (stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(threadId) == nullptr) { }
    }
    slif::SLIF_LaunchQue_Framework_App_Control* slif::SLIF_LaunchQue_Framework_App::stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : stat_CLASS_get_SLIF_LaunchQue_Framework_App_WriteEnable_Control(threadId)"));
        return _stat_CLASS_SLIF_LaunchQue_Framework_App_Control;
    }
    slif::SLIF_LaunchQue_Framework_Execute* slif::SLIF_LaunchQue_Framework_App::stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(uint8_t* threadId) {
        slif::ThreadLogs::printl(threadId, new std::string(" :: <= class : stat_CLASS_get_SLIF_LaunchQue_Framework_Execute(threadId)"));
        return _stat_CLASS_SLIF_LaunchQue_Framework_App_Ececute;
    }