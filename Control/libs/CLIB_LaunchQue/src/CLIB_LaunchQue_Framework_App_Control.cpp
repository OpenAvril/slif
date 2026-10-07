#include "../include/CLIB_LaunchQue_Framework_App_Control.h"
#include "../include/CLIB_LaunchQue_Framework_App.h"
#include "../include/CLIB_LaunchQue_Framework.h"
#include "../include/CLIB_LaunchQue_Framework_Global.h"
#include "../../../include/CLIB_ThreadLogs.h"
#include <iostream>
    std::list<unsigned long long*>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
    std::list<unsigned long long*>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
    std::list<bool>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    std::list<uint8_t*>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
// public.
    slif::CLIB_LaunchQue_Framework_App_Control::CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    slif::CLIB_LaunchQue_Framework_App_Control::~CLIB_LaunchQue_Framework_App_Control() {
        slif::ThreadLogs::printl(0, new std::string(" :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : ~CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
        delete stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
        slif::ThreadLogs::printl(0, new std::string(" :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : ~CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(uint8_t* sysThreadId, slif::CLIB_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId)"));
        for (auto concurrentThreadId_A = new uint8_t(0); *concurrentThreadId_A < *number_Implemented_Threads - 2; concurrentThreadId_A++) {
            for (auto concurrentThreadId_B = new uint8_t(*concurrentThreadId_A + 1); *concurrentThreadId_B < *number_Implemented_Threads - 1; concurrentThreadId_B++) {
                if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)) {
                    if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, concurrentThreadId_A, concurrentThreadId_B);
                    }
                    else if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_ACTIVE(sysThreadId)) {
                        if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_A) > obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
                else if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_A)) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                    if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B)) == obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_ptr_FLAG_thread_2STATE_IDLE(sysThreadId)) {
                        if (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_A) < obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_B)) {
                            obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId, obj, concurrentThreadId_A, concurrentThreadId_B);
                        }
                    }
                }
            }
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_SortQue(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(uint8_t* sysThreadId, slif::CLIB_LaunchQue_Framework* obj, uint8_t* number_Implemented_Threads) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId)"));
        for (auto concurrentThreadId = new uint8_t(0); *concurrentThreadId < *number_Implemented_Threads; concurrentThreadId++) {
            switch (obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, concurrentThreadId)) {
                case false: {
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId, 0);
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId) + 1);
                    break;
                }
                case true: {
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId) + 1);
                    obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId, 0);
                    break;
                }
                default:
                    break;
            }
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchQue_Update(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId, obj);
        stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId, obj);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId)"));
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId);
        stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_REG_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control_For_New_Count(sysThreadId)"));
    }
    unsigned long long* slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* concurrentThreadId) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, *concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned long long : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId)"));
        return *temp;
    }
    unsigned long long* slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* concurrentThreadId) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, *concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= unsigned long long : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)"));
        return *temp;
    }
    bool slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, uint8_t* concurrentThreadId) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, *concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)"));
        return *temp;
    }
    uint8_t* slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, uint8_t* concurrentThreadId) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, *concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= bool : dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)"));
        return *temp;
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* concurrentThreadId, unsigned long long* newValue) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, *concurrentThreadId, *newValue);
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t* concurrentThreadId, unsigned long long* newValue) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, *concurrentThreadId, *newValue);
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, uint8_t* concurrentThreadId, bool newState) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId, *concurrentThreadId, newState);
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, uint8_t* slot, uint8_t* concurrentThreadId) {
        stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, *slot, *concurrentThreadId);
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot1_DEFINE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_CLASS_boot3_INITIALISE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot0_DECLARE_CLIB_LaunchQue_Framework_App_Control(sysThreadId)"));
    }
// private.
    void slif::CLIB_LaunchQue_Framework_App_Control::dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(uint8_t* sysThreadId, slif::CLIB_LaunchQue_Framework* obj, uint8_t* concurrentThreadId_A, uint8_t* concurrentThreadId_B) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId)"));
        auto temp_UlongLong = new unsigned long long();
        auto temp_UnnsignedChar = new uint8_t();
        temp_UlongLong = obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId, concurrentThreadId_B, temp_UlongLong);
        temp_UlongLong = obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId, concurrentThreadId_B, temp_UlongLong);
        temp_UnnsignedChar = obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_A);
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_A, obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B));
        obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_App(sysThreadId)->dyn_CLASS_get_CLIB_LaunchQue_Framework_App_Control(sysThreadId)->dyn_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId, concurrentThreadId_B, temp_UnnsignedChar);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : dyn_App_FUNCT_CLIB_LaunchQue_Framework_App_Control_launchEnable_ShiftQueValues(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = nullptr;
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot1_DEFINE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)"));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId = new std::list<unsigned long long*>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->resize(3);//todo: number of concurrent threads.
        //stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->resize(obj->dyn_CLASS_get_ptr_CLIB_LaunchQue_Framework_Global(sysThreadId)->dyn_REG_get_CLIB_LaunchQue_Framework_Global_number_Implemented_Threads(sysThreadId));//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            **temp = UINT64_MAX;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)"));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)."));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId = new std::list<unsigned long long*>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            **temp = UINT64_MAX;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)."));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)."));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore = new std::list<bool>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = true;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)."));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, class CLIB_LaunchQue_Framework* obj) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)."));
        stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch = new std::list<uint8_t*>();
        while (stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId) == nullptr) {}
        stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->resize(3);//todo: number of concurrent threads.
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
            std::advance(temp, index);
            **temp = UINT8_MAX;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot2_SUBSTANTIATE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)."));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)."));
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            **temp = static_cast<unsigned long long>(0);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)."));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)."));
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
            std::advance(temp, index);
            **temp = static_cast<unsigned long long>(0);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)."));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)."));
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
            std::advance(temp, index);
            *temp = false;
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)."));
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: entered LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)."));
        for (int index = 0; index < stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->size(); index++) {
            auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
            std::advance(temp, index);
            **temp = static_cast<uint8_t>(index);
        }
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: exiting LIB :: wq : CLIB_LaunchQue_Framework_App_Control : stat_REG_boot3_INITIALISE_CLIB_LaunchQue_ptr_list_for_Que_Of_CoreTolaunch(sysThreadId)."));
    }
    std::list<unsigned long long*>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= std::list<unsigned long long>* : stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)."));
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchActive_Count_For_ThreadId;
    }
    std::list<unsigned long long*>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= std::list<unsigned long long>* : stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)."));
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_launchIdle_Count_For_ThreadId;
    }
    std::list<bool>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= std::list<uint8_t>* : stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)."));
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_Of_STATE_For_ConcurrentCore;
    }
    std::list<uint8_t*>* slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(uint8_t* sysThreadId) {
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: <= std::list<uint8_t>* : stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)."));
        return stat_REG_CLIB_LaunchQue_Framework_App_Control_ptr_list_for_Que_Of_CoreTolaunch;
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchActive_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: => unsigned long long : stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchActive_Count_For_ThreadId(sysThreadId)."));
        **temp = newValue;
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(uint8_t* sysThreadId, uint8_t concurrentThreadId, unsigned long long newValue) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: => unsigned long long : stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_launchIdle_Count_For_ThreadId(sysThreadId)."));
        **temp = newValue;
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(uint8_t* sysThreadId, uint8_t concurrentThreadId, bool newState) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_list_Of_STATE_For_ConcurrentCore(sysThreadId)->begin();
        std::advance(temp, concurrentThreadId);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: => bool : stat_REG_set_CLIB_LaunchQue_Item_On_list_Of_STATE_For_ConcurrentCore(sysThreadId)."));
        *temp = newState;
    }
    void slif::CLIB_LaunchQue_Framework_App_Control::stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(uint8_t* sysThreadId, uint8_t slot, uint8_t concurrentThreadId) {
        auto temp = stat_REG_get_CLIB_LaunchQue_ptr_List_QUE_Of_CoreTolaunch(sysThreadId)->begin();
        std::advance(temp, slot);
        slif::ThreadLogs::printl(sysThreadId, new std::string("  :: => uint8_t : stat_REG_set_CLIB_LaunchQue_Item_On_list_for_Que_Of_CoreTolaunch(sysThreadId)."));
        **temp = concurrentThreadId;
    }